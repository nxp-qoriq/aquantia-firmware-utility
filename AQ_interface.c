// SPDX-License-Identifier: (BSD-2-Clause)
/* Copyright 2020 NXP
 */
#ifndef __AQ_INTERFACE_H
#define __AQ_INTERFACE_H
#include <linux/types.h>
#include <linux/netlink.h>
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <errno.h>
#include <net/if.h>
#include <linux/mdio.h>
#include <linux/sockios.h>

#include "AQ_API.h"
#include "mdio-common.h"

#define REG_TO_CL45(devad, regnum) \
                ((1<<30) | ((devad) << 16) | (regnum))

#ifdef AQ_ENABLE_PRINT_IMPLEMENTATION
unsigned int aq_verbose = 0;

void AQ_API_SetVerbose(unsigned int param)
{
	aq_verbose = param;
}

void AQ_API_Print(const char* printString, ...)
{
	va_list arglist;
	va_start(arglist, printString);
	if (aq_verbose)
		vprintf(printString, arglist);
	va_end(arglist);
}
#endif

int mdio_proxy_send(int fd, struct sockaddr_nl addr, struct mdio_message *mdio_msg)
{
	struct nlmsghdr *nlh = NULL;
        struct iovec iov;
        struct msghdr msg;

	nlh = malloc(NLMSG_SPACE(MAX_PAYLOAD));
        memset(nlh, 0, NLMSG_SPACE(MAX_PAYLOAD));
        nlh->nlmsg_len = NLMSG_SPACE(MAX_PAYLOAD);
        nlh->nlmsg_pid = getpid();
        nlh->nlmsg_flags = 0;
        memcpy(NLMSG_DATA(nlh), mdio_msg, sizeof(struct mdio_message));

        memset(&iov, 0, sizeof(iov));
        iov.iov_base = (void *) nlh;
        iov.iov_len = nlh->nlmsg_len;

        memset(&msg, 0, sizeof(msg));
        msg.msg_name = (void *) &addr;
        msg.msg_namelen = sizeof(addr);
        msg.msg_iov = &iov;
        msg.msg_iovlen = 1;

        sendmsg(fd, &msg, 0);
	free(nlh);

	return 0;
}

int mdio_proxy_recv(int fd, struct sockaddr_nl addr, struct mdio_message *mdio_msg)
{
	struct msghdr msg_reply;
	struct iovec iov_reply;
	struct nlmsghdr *nlh_reply = malloc(NLMSG_SPACE(MAX_PAYLOAD));

	memset(&iov_reply, 0, sizeof(iov_reply));
	iov_reply.iov_base = (void *) nlh_reply;
	iov_reply.iov_len = NLMSG_SPACE(MAX_PAYLOAD);

	memset(&msg_reply, 0, sizeof(msg_reply));
	msg_reply.msg_iov = &iov_reply;
	msg_reply.msg_iovlen = 1;
	msg_reply.msg_name = &addr;
	msg_reply.msg_namelen = sizeof(addr);
    
	while (!recvmsg(fd, &msg_reply, 0))
		usleep(1);

	memcpy(mdio_msg, NLMSG_DATA(nlh_reply), sizeof(struct mdio_message));
	free(nlh_reply);
	return 0;
}

static int mdio_bus_access_phy(AQ_Port *phy, int devad, uint16_t reg,
			       uint16_t *val, int cmd)
{
	struct mii_ioctl_data *mii;
	struct ifreq ifr;
	uint16_t phy_id;
	int err;

	mii = (struct mii_ioctl_data *)(&ifr.ifr_data);
	phy_id = mdio_phy_id_c45(phy->addr, devad);

	strncpy(ifr.ifr_name, phy->if_name, sizeof(ifr.ifr_name));

	mii->phy_id  = phy_id;
	mii->reg_num = reg;
	mii->val_in  = *val;
	mii->val_out = 0;

	err = ioctl(phy->sd, cmd, &ifr);
	if (err)
		return -errno;

	*val = mii->val_out;
	return 0;
}

static int mdio_bus_read_phy(AQ_Port *phy, int devad, uint16_t reg)
{
	uint16_t val = 0;
	int err;

	err = mdio_bus_access_phy(phy, devad, reg, &val, SIOCGMIIREG);
	if (err) {
		fprintf(stderr, "error: mdio_bus_read_phy (%d)\n", err);
		return err;
	}

	return val;
}

static int mdio_bus_write_phy(AQ_Port *phy, int devad, uint16_t reg, uint16_t val)
{
	int err = mdio_bus_access_phy(phy, devad, reg, &val, SIOCSMIIREG);
	if (err)
		fprintf(stderr, "error: mdio_bus_write_phy (%d)\n", err);

	return err;
}

void AQ_API_MDIO_Write(AQ_Port phy, unsigned int mmd, unsigned int reg, unsigned int data)
{
	if (phy.dev_ioctl) {
		mdio_bus_write_phy(&phy, mmd, reg, data);
	} else {
		struct mdio_message to_send, to_recv;

		memset(&to_send, 0, sizeof(struct mdio_message));
		memset(&to_recv, 0, sizeof(struct mdio_message));
		to_send.op = MDIO_OP_WRITE;
		strncpy(to_send.bus_name, phy.bus_name, 99);
		to_send.addr = phy.addr;
		to_send.reg = REG_TO_CL45(mmd, reg);
		to_send.data = data;

		mdio_proxy_send(phy.fd, phy.saddr, &to_send);
		//mdio_proxy_recv(phy.fd, phy.saddr, &to_recv);
	}
}

int AQ_API_MDIO_Read(AQ_Port phy, unsigned int mmd, unsigned int reg)
{
	if (phy.dev_ioctl) {
		int val = mdio_bus_read_phy(&phy, mmd, reg);

		return val;
	} else {
		struct mdio_message to_send, to_recv;

		memset(&to_send, 0, sizeof(struct mdio_message));
		memset(&to_recv, 0, sizeof(struct mdio_message));
		to_send.op = MDIO_OP_READ;
		strncpy(to_send.bus_name, phy.bus_name, 99);
		to_send.addr = phy.addr;
		to_send.reg = REG_TO_CL45(mmd, reg);

		mdio_proxy_send(phy.fd, phy.saddr, &to_send);
		mdio_proxy_recv(phy.fd, phy.saddr, &to_recv);

		return to_recv.data;
	}
}
#endif
