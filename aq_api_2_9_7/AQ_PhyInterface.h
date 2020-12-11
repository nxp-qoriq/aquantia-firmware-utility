/* ****************************** AQ_API Version 2.9.7 ****************************** */ 
/* AQ_PhyInterface.h */

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

/***********************************************************************
*                     Copyright Aquantia Corp.
*                             Freeware
*
* Description:
*
*   Declares the base PHY register read and write functions that are 
*   called by the API functions. The platform integrator must provide 
*   the implementation of these routines.
*
***********************************************************************/


/*! \file 
 * Declares the base PHY register read and write functions that are 
 * called by the API functions. The platform integrator must provide 
 * the implementation of these routines. */


#ifndef AQ_PHY_INTERFACE_TOKEN
#define AQ_PHY_INTERFACE_TOKEN


#include "AQ_API.h"
#include "AQ_User.h"

#ifdef AQ_CLAUSE_22_ENABLE
#include "AQ_Clause22.h"
#endif


#ifdef __cplusplus
extern "C" {
#endif


/*******************************************************************
                        MDIO Access Functions
*******************************************************************/

/*! \defgroup mdioAccessFunctions MDIO Access Functions
The MDIO access functions are required by the API to access the register space
of each Aquantia PHY deployed in a system. The body of these functions needs to 
be written by the system designer, as the method of accessing the PHY will 
be unique to the target system. They are designed to be generic read and 
write access functions, as the MDIO addressing scheme relies on each 
MMD to maintain a 16 bit address pointer that determines the register where 
the next read or write is coming from. Consequently, various levels of 
optimization of the MDIO interface are possible: from re-writing the MMD 
address pointer on every transaction, to storing shadow copies of the MMD 
address pointers and only updating the MMD address pointer as necessary. 
Thus these functions leave the MDIO optimization to the system engineer.
 */
/*@{*/


/*! Provides generic synchronous PHY register write functionality. It is the
 * responsibility of the system designer to provide the specific MDIO address 
 * pointer updates, etc. in order to accomplish this write operation. 
 * It will be assumed that the write has been completed by the time this 
 * function returns.*/
void AQ_API_MDIO_Write
(
    /*! Uniquely identifies the port within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port PHY_ID,
    /*! The address of the MMD within the target PHY. */
  unsigned int MMD,
    /*! The 16-bit address of the PHY register being written. */
  unsigned int address,
    /*! The 16-bits of data to write to the specified PHY register. */
  unsigned int data
);

/*! Provides generic synchronous PHY register read functionality. It is the
 * responsibility of the system designer to provide the specific MDIO address 
 * pointer updates, etc. in order to accomplish this read operation.*/
unsigned int AQ_API_MDIO_Read
(
    /*! Uniquely identifies the port within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port PHY_ID,
    /*! The address of the MMD within the target PHY. */
  unsigned int MMD,
    /*! The 16-bit address of the PHY register being read. */
  unsigned int address
);


#ifdef AQ_MDIO_WRITE_MULTI
/*! Provides generic writes to registers in multiple PHYs. It is the
 * responsibility of the system designer to provide the specific MDIO address 
 * pointer updates, etc. in order to accomplish these write operations. 
 * It will be assumed that the writes have been completed by the time this 
 * function returns.*/
void AQ_API_MDIO_Write_Multi
(
    /*! Identifies a list of ports within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port* PHY_ID,
    /*! The number of ports. */
  unsigned int numberOfPorts,
    /*! The address of the MMD within the target PHY. */
  unsigned int MMD,
    /*! The 16-bit address of the PHY register being written. */
  unsigned int address,
    /*! The 16-bits of data to write to the specified PHY register. */
  unsigned int data
);
#endif


#ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE

/*! Provides generic asynchronous/buffered PHY register write functionality. 
 * It is the responsibility of the system designer to provide the specific 
 * MDIO address pointer updates, etc. in order to accomplish this write 
 * operation.  The write need not necessarily have been completed by the time 
 * this function returns.  All register reads and writes to a particular PHY_ID 
 * that are requested by calling AQ_API_MDIO_BlockWrite or AQ_API_MDIO_BlockRead
 * MUST be performed in the order that the calls are made. */
void AQ_API_MDIO_BlockWrite
(
    /*! Uniquely identifies the port within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port PHY_ID,
    /*! The address of the MMD within the target PHY. */
  unsigned int MMD,
    /*! The 16-bit address of the PHY register being written. */
  unsigned int address,
    /*! The 16-bits of data to write to the specified PHY register. */
  unsigned int data
);

/*! Provides generic asynchronous/buffered PHY register read functionality. 
 * It is the responsibility of the system designer to provide the specific 
 * MDIO address pointer updates, etc. in order to accomplish this read 
 * operation.  All register reads and writes to a particular PHY_ID that 
 * are requested by calling AQ_API_MDIO_BlockWrite or AQ_API_MDIO_BlockRead 
 * MUST be performed in the order that the calls are made. The register value 
 * may subsequently be fetched by calling AQ_API_MDIO_BlockOperationExecute.*/
void AQ_API_MDIO_BlockRead
(
    /*! Uniquely identifies the port within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port PHY_ID,
    /*! The address of the MMD within the target PHY. */
  unsigned int MMD,
    /*! The 16-bit address of the PHY register being read. */
  unsigned int address
);

/* Retrieve the results of all PHY register reads to PHY_ID previously 
 * requested via calls to AQ_API_MDIO_BlockRead.  The read and write 
 * operations previously performed by calls to AQ_API_MDIO_BlockRead and 
 * AQ_API_MDIO_BlockRead must have all been completed by the time this 
 * function returns, in the order that the calls were performed. The 
 * return value is an array representing the fetched results of all 
 * pending calls to AQ_API_MDIO_BlockRead, in the order that the calls 
 * were performed.  Callers should track the number of pending block
 * reads to determine the size of the returned array. */
unsigned int * AQ_API_MDIO_BlockOperationExecute
(
    /*! Uniquely identifies the port within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port PHY_ID
);

/* Returns the maximum number of asynchronous/buffered PHY register 
 * read/write operations.  Callers will call AQ_API_MDIO_BlockOperationExecute 
 * before issuing additional calls to AQ_API_MDIO_BlockWrite or 
 * AQ_API_MDIO_BlockRead to avoid a buffer overflow. */
unsigned int AQ_API_MDIO_MaxBlockOperations
(
);

#endif

/*@}*/


#ifdef __cplusplus
}
#endif

#endif
