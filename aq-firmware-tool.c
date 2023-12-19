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
#include <string.h>

#include <AQ_API.h>
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
	{0x31c31c63, AQ_DEVICE_RHEA, "AQR115"},
	{-1, AQ_DEVICE_HHD, "generic 28nm"},
};

#define countof(array) (sizeof(array) / sizeof(array[0]))

/* structure for keeping firmware header */
struct aquantia_cld_header {
	int reserved;
	unsigned char iram_offset[3];
	unsigned char iram_size[3];
	unsigned char dram_offset[3];
	unsigned char dram_size[3];
};

/* firmware image format constants */
#define AQ_VER_STRING_SIZE	0x0040
#define AQ_VER_STRING_OFFSET	0x0200
#define AQ_HDR_OFFSET		0x0300

struct firmware_version {
	int major;
	int minor;
	int revision;
};

int main(int argc, char **argv)
{
	int fd, sd;
	struct sockaddr_nl local, kernel;

	AQ_API_Port port;
	FILE *firmware_file = NULL;
	uint8_t *imageAddr = NULL;
	uint32_t imageLen = 0;
	int phyid;
	int ret;
	int i;
	int phy_is_supported = 0;
	int fault, fw1, fw2;
	unsigned int primary_offset, dram_offset;
	struct aquantia_cld_header cld_header;
	unsigned char aq_version[AQ_VER_STRING_SIZE + 1];
	unsigned char dram_aq_version[AQ_VER_STRING_SIZE + 1];
	struct firmware_version phy_ver, file_ver;
	unsigned int file_crc = 0, calculated_crc = 0;

	printf("Aquantia firmware upgrade utility\n");

	/* parameter sanity */
	if (argc < 5) {
		printf("Usage:\n");
		printf("\t%s <firmware file> -m/--mdio-bus <bus name> <addr>\n", argv[0]);
		printf("\t%s <firmware file> -i/--interface <NIC name> <addr>\n", argv[0]);
		return -1;
	}

	if (!strcmp(argv[2], "-i") || !strcmp(argv[2], "--interface")) {
		port.PHY_ID.dev_ioctl = true;
	} else if (!strcmp(argv[2], "-m") || !strcmp(argv[2], "--mdio-bus")) {
		port.PHY_ID.dev_ioctl = false;
	} else {
		printf("Unknow parameter: %s\n", argv[2]);
		return -1;
	}

	/* load firmware into memory */
	firmware_file = fopen(argv[1], "rb");
	if (!firmware_file) {
		fprintf(stderr, "Unable to open '%s' file...\n", argv[1]);
		return -1;
	}

	fseek(firmware_file, 0, SEEK_END);
	imageLen = ftell(firmware_file);
	imageAddr = calloc(imageLen, sizeof(char));

	fseek(firmware_file, 0, SEEK_SET);
	fread(imageAddr, imageLen, 1, firmware_file);
	fclose(firmware_file);

	if (port.PHY_ID.dev_ioctl) {
		sd = socket(AF_INET, SOCK_DGRAM, 0);
		if (sd < 0) {
			printf("%s create socket failed\n", __func__);
			return -1;
		}
		port.PHY_ID.sd = sd;
		/* set the name of NIC */
		strncpy(port.PHY_ID.if_name, argv[3], 99);
	} else {
		/* setup netlink sockets */
		fd = socket(AF_NETLINK, SOCK_RAW, NETLINK_USERSOCK);

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

		port.PHY_ID.fd = fd;
		memcpy(&port.PHY_ID.saddr, &kernel, sizeof(struct sockaddr_nl));
		/* setup mdio bus name */
		strncpy(port.PHY_ID.bus_name, argv[3], 99);
	}
	port.PHY_ID.addr = strtol(argv[4], NULL, 16);
	port.device = AQ_DEVICE_HHD;

	phyid = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, 2);
	phyid = (phyid << 16) | AQ_API_MDIO_Read(port.PHY_ID, 0x1e, 3);
	for (i = 0; i < countof(aq_devs); i++) {
		if ((aq_devs[i].id & 0xfffffff0) == (phyid & 0xfffffff0)) {
			printf("Found %s ethernet phy (%#x) !\n", aq_devs[i].name, phyid);
			port.device = aq_devs[i].dev;
			phy_is_supported = 1;
			break;
		}
	}

	if (!phy_is_supported) {
		printf("PHY is not supported !\n");
		free(imageAddr);
		return -1;
	}

#ifdef AQ_ENABLE_PRINT_IMPLEMENTATION
	AQ_API_SetVerbose(1);
#endif

	fw1 = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, AQ_FW1_REG);
	fw2 = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, AQ_FW2_REG);
	fault = AQ_API_MDIO_Read(port.PHY_ID, 0x1e, AQ_FAULT_REG);

	phy_ver.major = fw1 >> 8;
	phy_ver.minor = fw1 & 0xff;
	phy_ver.revision = (fw2 >> 4) & 0xf;

	printf("%s running firmware version %x.%x.%x\n",
		aq_devs[i].name,
		phy_ver.major,
		phy_ver.minor,
		phy_ver.revision);

 	AQ_API_MemoryRead(&port, dram_aq_version, AQ_VER_STRING_SIZE, 0x3FFE0000 + 0x200);
	for (i = 0; i < AQ_VER_STRING_SIZE; i++)
                printf("%c", dram_aq_version[i]);
	printf("\n\n");

	if (fault != 0)
			printf("%s fault %#x detected\n", aq_devs[i].name, fault);

	file_crc = *(char *)(imageAddr + imageLen - 2) << 8;
	file_crc |= *(char *)(imageAddr + imageLen - 1);
	calculated_crc =  calculateCRC((const unsigned char *) imageAddr, 0, imageLen - 2);

#if 0
	printf("file crc = %#x, calculated = %#x, imageAddr=%#x, imageLen=%#x\n", file_crc, calculated_crc, imageAddr, imageLen);
#endif
	/* find the DRAM section in firmware binary */
	primary_offset = *(char *) (imageAddr + 9) & 0xf;
	primary_offset <<= 8;
	primary_offset |= *(char *) (imageAddr + 8);
	primary_offset <<= 12;

	memcpy(&cld_header, imageAddr + primary_offset + AQ_HDR_OFFSET, sizeof(cld_header));

#define AQUANTIA_HEADER_GET_BYTES(a)	((unsigned int)(((a)[2] << 16) + ((a)[1] << 8) + (a)[0]))

	/* compute dram section offset */
	dram_offset = primary_offset;
	dram_offset += AQUANTIA_HEADER_GET_BYTES(cld_header.dram_offset);

	/* get CLD string, used later for informing the user */
	memset(&aq_version, 0, sizeof(aq_version));
	memcpy(aq_version, imageAddr + dram_offset + AQ_VER_STRING_OFFSET, AQ_VER_STRING_SIZE);
	sscanf(aq_version, "v%x.%x.%x", &file_ver.major, &file_ver.minor, &file_ver.revision);
	for (i = 0; i < AQ_VER_STRING_SIZE; i++)
		if (aq_version[i] == ' ')
			break;

	printf("File firmware version is %x.%x.%x (%s)\n",
			file_ver.major,
			file_ver.minor,
			file_ver.revision,
			aq_version + i + 1);

	/* best way to tell whether running firmware is differnet than file is to compare*/
	if (memcmp(aq_version, dram_aq_version, AQ_VER_STRING_SIZE))
		printf("Running firmware is different than %s.\n", argv[1]);
	else {
		printf("No upgrade required.\n");
		goto finish;
	}

	ret = AQ_API_WriteAndVerifyFlashImage (&port, &imageLen, imageAddr);
	switch (ret) {
	case 0:
		printf("Device burned and verified\n");
		break;
	case 1:
		printf("CRC check on supplied image failed (i.e. the image is corrupted)\n");
		break;
	case 2:
		printf("CRC check on loaded image failed (i.e. the image did not load correctly)\n");
		break;
	case 3:
		printf("Device timeout\n");
		break;
	case 4:
		printf("Device not recognized or present\n");
		break;
	case 5:
		printf("Device set to 264 byte page size - power cycle the target system\n");
		break;
	case 6:
		printf("Image size is larger than FLASH\n");
		break;
	default:
		printf("Invalid return code\n");
		break;
	}

finish:
	free(imageAddr);
	return 0;
}

