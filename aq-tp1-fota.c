// SPDX-License-Identifier: (BSD-2-Clause)
/* Copyright 2020 NXP
 */
#include <stdint.h>
#include <unistd.h>
#include <linux/types.h>
#include <malloc.h>
#include <linux/netlink.h>
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <inttypes.h>

#include "AQ_API.h"
#include "AQ_interface.h"

#define AQ_FW1_REG	0x20
#define AQ_FW2_REG	0xc885
#define AQ_FAULT_REG	0xc850

struct {
	int id;
	int dev;
	char name[16];
} aq_devs[] = {
	{0x03a1b460, AQ_DEVICE_HHD, "AQ2104"},
	{0x03a1b440, AQ_DEVICE_APPIA, "AQ1202"},
	{0x03a1b4a0, AQ_DEVICE_HHD, "AQR105"},
	{0x03a1b4d0, AQ_DEVICE_HHD, "AQR107"},
	{0x03a1b4e2, AQ_DEVICE_HHD, "AQR107"},
	{0x004dd072, AQ_DEVICE_HHD, "AQR107"},
	{0x03a1b712, AQ_DEVICE_CAL, "AQR412C"},
	{0x03a1b662, AQ_DEVICE_CAL, "AQR112C"},
	{0x31c31c12, AQ_DEVICE_RHEA, "AQR113C"},
	{0x31c31c42, AQ_DEVICE_RHEA, "AQR113"},
	{-1, AQ_DEVICE_HHD, "generic 28nm"},
};

#define countof(array) (sizeof(array) / sizeof(array[0]))

/* structure for keeping file firmware header */
struct aquantia_cld_header {
	int reserved;
	unsigned char iram_offset[3];
	unsigned char iram_size[3];
	unsigned char dram_offset[3];
	unsigned char dram_size[3];
};

/* firmware image format constants */
#define AQ_VER_STRING_SIZE		0x0040
#define AQ_VER_STRING_OFFSET	0x0200
#define AQ_HDR_OFFSET			0x0300

struct firmware_version {
	int major;
	int minor;
	int revision;
};

/* TP1 board mdio and phy details */
#define MDIO_BUS_NAME		"1afd000"
#define AQR_MDIO_ADDR		(0)

int aqr_fota_debug = 0;

void aqr_fota_set_verbose(int val)
{
	aqr_fota_debug = val;
#ifdef AQ_ENABLE_PRINT_IMPLEMENTATION
	if (val > 1)
		AQ_API_SetVerbose(val);
#endif
}

void debug_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	if (aqr_fota_debug)
		vprintf(format, args);

	va_end(args);
}

int32_t aqr_fota_check_and_update(uint8_t *filename)
{
	struct sockaddr_nl local, kernel;
	uint8_t *imageAddr = NULL;
	uint32_t imageLen = 0;
	FILE *firmware = NULL;
	AQ_API_Port port;
	uint8_t file_aq_version[AQ_VER_STRING_SIZE + 1];
	uint8_t dram_aq_version[AQ_VER_STRING_SIZE + 1];
	
	int fd, phyid, phy_is_supported = 0;
	int ret, i;

	struct aquantia_cld_header cld_header;
	unsigned int file_crc = 0, calculated_crc = 0;
	unsigned int primary_offset, dram_offset;

	/* parameter sanity */
	if (!filename)
		return -1;
	
	/* load firmware into memory */
	firmware = fopen((const char *)filename, "rb");
	if (!firmware) {
		debug_printf("Unable to open '%s' file...\n", filename);
		return -1;
	}

	fseek(firmware, 0, SEEK_END);
	imageLen = ftell(firmware);
	imageAddr = calloc(imageLen, sizeof(char));
	fseek(firmware, 0, SEEK_SET);
	fread(imageAddr, imageLen, 1, firmware);
	fclose(firmware);

	/* first sanity of the file */
	file_crc = *(char *)(imageAddr + imageLen - 2) << 8;
	file_crc |= *(char *)(imageAddr + imageLen - 1);
	calculated_crc = calculateCRC((const uint8_t *) imageAddr, 0, imageLen - 2);
	
	if (file_crc != calculated_crc) {
		debug_printf("Invalid file\n");
		return -1;
	}

	/* setup netlink sockets */
	fd = socket(AF_NETLINK, SOCK_RAW, NETLINK_USERSOCK);
	if (fd < 0) {
		perror("socket");
		return -1;
	}

	memset(&local, 0, sizeof(local));
	local.nl_family = AF_NETLINK;
	local.nl_pid = getpid();
	local.nl_groups = 0;

	if (bind(fd, (struct sockaddr *) &local, sizeof(local)) < 0) {
			perror("bind");
			return -1;
	}

	memset(&kernel, 0, sizeof(kernel));
	kernel.nl_family = AF_NETLINK;
	kernel.nl_pid = 0;
	kernel.nl_groups = 0;

	/* setup mdio bus, address */
	strncpy(port.PHY_ID.bus_name,
			MDIO_BUS_NAME,
			sizeof(port.PHY_ID.bus_name) - 1);
	port.PHY_ID.addr = AQR_MDIO_ADDR;
	port.PHY_ID.fd = fd;
	memcpy(&port.PHY_ID.saddr, &kernel, sizeof(struct sockaddr_nl));

	/* set default PHY type to HHD */
	port.device = AQ_DEVICE_HHD;

	/* check if we find a supported phy */
	phyid = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, 2);
	phyid = (phyid << 16) | AQ_API_MDIO_Read(port.PHY_ID, 0x1e, 3);
	for (i = 0; i < countof(aq_devs); i++) {
		if (aq_devs[i].id == phyid) {
			debug_printf("Found %s ethernet phy (%#x) !\n", aq_devs[i].name, phyid);
			port.device = aq_devs[i].dev;
			phy_is_supported = 1;
			break;
		}
	}

	if (!phy_is_supported) {
		debug_printf("PHY is not supported !\n");
		free(imageAddr);
		return -1;
	}

 	AQ_API_MemoryRead(&port, dram_aq_version, AQ_VER_STRING_SIZE, 0x3FFE0000 + 0x200);

	/* find the DRAM section within the firmware file */
	primary_offset = *(char *) (imageAddr + 9) & 0xf;
	primary_offset <<= 8;
	primary_offset |= *(char *) (imageAddr + 8);
	primary_offset <<= 12;

	memcpy(&cld_header,
		   imageAddr + primary_offset + AQ_HDR_OFFSET,
		   sizeof(cld_header));

#define AQUANTIA_HEADER_GET_BYTES(a)	((unsigned int)(((a)[2] << 16) + ((a)[1] << 8) + (a)[0]))

	/* compute dram section offset */
	dram_offset = primary_offset;
	dram_offset += AQUANTIA_HEADER_GET_BYTES(cld_header.dram_offset);

	/* get CLD string, used later for informing the user */
	memset(file_aq_version, 0, sizeof(file_aq_version));
	memcpy(file_aq_version,
		   imageAddr + dram_offset + AQ_VER_STRING_OFFSET,
		   AQ_VER_STRING_SIZE);
	
	debug_printf("File firmware version is '%s'\n", file_aq_version);
	debug_printf("Dram firmware version is '%s'\n", dram_aq_version);
	
	if (!memcmp(file_aq_version, dram_aq_version, AQ_VER_STRING_SIZE)) {
		debug_printf("No upgrade required.\n");
		free(imageAddr);
		return -1;
	}
	
	debug_printf("Upgrade required. Running firmware is different than %s !\n", filename);

	ret = AQ_API_WriteAndVerifyFlashImage (&port, &imageLen, imageAddr);
	free(imageAddr);
	
	switch (ret) {
	case 0:
		debug_printf("Device burned and verified\n");
		break;
	case 1:
		debug_printf("CRC check on supplied image failed (i.e. the image is corrupted)\n");
		break;
	case 2:
		debug_printf("CRC check on loaded image failed (i.e. the image did not load correctly)\n");
		break;
	case 3:
		debug_printf("Device timeout\n");
		break;
	case 4:
		debug_printf("Device not recognized or present\n");
		break;
	case 5:
		debug_printf("Device set to 264 byte page size - power cycle the target system\n");
		break;
	case 6:
		debug_printf("Image size is larger than FLASH\n");
		break;
	default:
		debug_printf("Invalid return code\n");
		break;
        }

	return (ret == 0) ? 0 : -1;
}

int32_t aqr_fota_image_upgrade_status(void)
{
	struct sockaddr_nl local, kernel;
	AQ_API_Port port;
	uint8_t dram_aq_version[AQ_VER_STRING_SIZE + 1];
	int fd, phyid, phy_is_supported = 0;
	int fault, fw1, fw2;
	struct firmware_version phy_ver, dram_ver;
	int i;

	/* setup netlink sockets */
	fd = socket(AF_NETLINK, SOCK_RAW, NETLINK_USERSOCK);
	if (fd < 0) {
		perror("socket");
		return -1;
	}

	memset(&local, 0, sizeof(local));
	local.nl_family = AF_NETLINK;
	local.nl_pid = getpid();
	local.nl_groups = 0;

	if (bind(fd, (struct sockaddr *) &local, sizeof(local)) < 0) {
			perror("bind");
			return -1;
	}

	memset(&kernel, 0, sizeof(kernel));
	kernel.nl_family = AF_NETLINK;
	kernel.nl_pid = 0; /* kernel expects 0 */
	kernel.nl_groups = 0;

	/* setup mdio bus, address */
	strncpy(port.PHY_ID.bus_name,
			MDIO_BUS_NAME,
			sizeof(port.PHY_ID.bus_name) - 1);
	port.PHY_ID.addr = AQR_MDIO_ADDR;
	port.PHY_ID.fd = fd;
	memcpy(&port.PHY_ID.saddr, &kernel, sizeof(struct sockaddr_nl));

	/* set default PHY type to HHD */
	port.device = AQ_DEVICE_HHD;

	/* check if we find a supported phy */
	phyid = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, 2);
	phyid = (phyid << 16) | AQ_API_MDIO_Read(port.PHY_ID, 0x1e, 3);
	for (i = 0; i < countof(aq_devs); i++) {
		if (aq_devs[i].id == phyid) {
			debug_printf("Found %s ethernet phy (%#x) !\n", aq_devs[i].name, phyid);
			port.device = aq_devs[i].dev;
			phy_is_supported = 1;
			break;
		}
	}

	if (!phy_is_supported) {
		debug_printf("PHY is not supported !\n");
		return -1;
	}

	fw1 = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, AQ_FW1_REG);
	fw2 = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, AQ_FW2_REG);
	fault = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, AQ_FAULT_REG);

	phy_ver.major = fw1 >> 8;
	phy_ver.minor = fw1 & 0xff;
	phy_ver.revision = (fw2 >> 4) & 0xf;

	if (fault != 0) {
		debug_printf("%s fault 0x%04x detected\n", aq_devs[i].name, fault);
		return -1;
	}

	AQ_API_MemoryRead(&port, dram_aq_version, AQ_VER_STRING_SIZE, 0x3FFE0000 + 0x200);
	sscanf(dram_aq_version, "v%x.%x.%x", &dram_ver.major, &dram_ver.minor, &dram_ver.revision);
	if ((phy_ver.major != dram_ver.major) ||
		(phy_ver.minor != dram_ver.minor) ||
		(phy_ver.revision != dram_ver.revision)) {
			debug_printf("DRAM signature and running firmare version mismatch !\n");
			return -1;
		}
	
	debug_printf("%s running firmware version %x.%x.%x\n",
		aq_devs[i].name,
		phy_ver.major,
		phy_ver.minor,
		phy_ver.revision);

	return 0;
}
