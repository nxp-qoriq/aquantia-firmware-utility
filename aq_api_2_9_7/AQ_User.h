/* ****************************** AQ_API Version 2.9.7 ****************************** */ 
/*AQ_User.h*/

/************************************************************************************
*
* Copyright (c) 2017 Aquantia Corp.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions are met: 
*
* 1. Redistributions of source code must retain the above copyright notice, 
* this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright 
* notice, this list of conditions and the following disclaimer in the 
* documentation and/or other materials provided with the distribution.
*
* THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND ANY 
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
* DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE FOR ANY 
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY 
* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH 
* DAMAGE.
*
************************************************************************************/

/************************************************************************************
*                      Copyright Aquantia Corp.
*                              Freeware
*
* Description:
*
*   This file contains preprocessor symbol definitions and type definitions 
*   for the platform-integrator controlled compile-time AQ_API options.
*
************************************************************************************/

/*! \file
  This file contains preprocessor symbol definitions and type definitions 
  for the platform-integrator controlled compile-time AQ_API options.
*/

#ifndef AQ_USER_TOKEN
#define AQ_USER_TOKEN

#include <linux/types.h>
#include <linux/netlink.h>
#include <sys/socket.h>
#include <stdbool.h>

/*! \defgroup User User Definitions
This module contains the definitions used to configure AQ_API behavior as desired. */
/*@{*/


/*! Specify the proper data type for AQ_Port. This will depend on the
 * platform-specific implementation of the PHY register read/write functions.*/
typedef struct {
	bool dev_ioctl;
	union {
		char bus_name[100];
		char if_name[100];
	};
	uint16_t addr;
	union {
		int fd;
		int sd;
	};
	struct sockaddr_nl saddr;
} AQ_Port;

#define AQ_ENABLE_PRINT_IMPLEMENTATION

/*! If defined, AQ_API functions will print various error and info messages 
 * to stdout.  If not, nothing will be printed and AQ_API.c will NOT include
 * stdio.h. */
#define AQ_VERBOSE


/*! If defined, the PHY interface supports block (asynchronous) read/write 
 * operation. If AQ_PHY_SUPPORTS_BLOCK_READ_WRITE is defined, then 
 * the API will call the block-operation functions and so implementations 
 * for each must be provided. If AQ_PHY_SUPPORTS_BLOCK_READ_WRITE is not 
 * defined, they will not be called, and need not be implemented. */
//#define AQ_PHY_SUPPORTS_BLOCK_READ_WRITE


/*! If defined, time.h exists, and so the associated functions wil be used to 
 * compute the elapsed time spent in a polling loop, to ensure that the 
 * maximum time-out period will not be exceeded.  If not defined, then 
 * AQ_MDIO_READS_PER_SECOND will be used to calculate the minimum possible 
 * elapsed time. */
//#define AQ_TIME_T_EXISTS


/*! The maximum number of synchronous PHY register reads that can be performed 
 * per second. A worst case number can be derived as follows: 
 *
 * AQ_MDIO_READS_PER_SECOND = MDIO Clock Frequency / 64 
 *
 * If using MDIO preamble suppression, multiply this number by 2 
 *
 * For instance, if a 5MHz MDIO clock is being used without preamble supression 
 * AQ_MDIO_READS_PER_SECOND = 78125 
 *
 * If AQ_TIME_T_EXISTS is defined, this will be ignored and need not be 
 * defined.  If AQ_TIME_T_EXISTS is not defined, this must be defined. */
#define AQ_MDIO_READS_PER_SECOND 78125

/*! If defined, NVR Busy bit will be polling between NVR Operations */
/* #define AQ_MDIO_CLOCK_EXCEEDS_NVR */

/*! Defines whether flash progress should be verbosed every page or rarely */
#define AQ_VERBOSE_FLASH_PROGRESS 0x10000

/*! Defines whether full chip erase should be used for Adesto flashes */
/* #define AQ_FLASH_ADESTO_FULL_ERASE */

/*! If defined, after writing to one of the registers that can trigger a 
 * processor-intensive MDIO operation, AQ_API functions will poll the 
 * the "processor intensive MDIO operation in progress" bit and wait for it
 * to be zero before proceeding. */
//#define AQ_ENABLE_UP_BUSY_CHECKS


/*! If defined, the register map header files containing reverse-packed
 * structs will be included.  If not, the register map header files containing 
 * non-reverse-packed structs will be included.  The proper choice is typically
 * a function of the endianness of the platform; on big-endian systems the 
 * reverse-packed structs should be used, and on little-endian systems the 
 * non-reverse-packed structs should be used. */
#if __BYTE_ORDER == __BIG_ENDIAN
#define AQ_REVERSED_BITFIELD_ORDERING
#endif

/*! If defined, AQ_API_MDIO_Write_Multi function in AQ_PhyInterface needs to be 
 * implemented. 
 * This function is only being used by AQ_API_WriteBootLoadImageWithProvTableMulti
 * function of the API.
 */
/* #define AQ_MDIO_WRITE_MULTI */

/*! If defined, the system designer needs to implement clause 22 mdio read and wrires. 
 *  AQ_PhyInterface.h would need the implemetation of AQ_API_MDIO_Read_C22 and 
 * AQ_API_MDIO_Write_C22 functions.
 */
/*  define AQ_CLAUSE_22_ENABLE */

/*! If defined, the system designer needs to implement AQ_API_Print function
 * in AQ_PlatformRoutines to redirect the outputs of AQ_VERBOSE mode to where 
 * they want. */

/* #define AQ_ENABLE_PRINT_IMPLEMENTATION */

/*! If defined, Rhea SerDes register read/writes would be done directly and not 
  through PIF mailbox. This is necessary if FW is not running. */
 
/* #define SERDES_DIRECT_REG_ACCESS */

/*@}*/
#endif

