/* ****************************** AQ_API Version 2.9.7 ****************************** */ 
/* AQ_Clause22.h */

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

#ifndef AQ_CLAUSE22_TOKEN
#define AQ_CLAUSE22_TOKEN
 
/*! Provides generic clause 22 synchronous PHY register write functionality. It is the
 * responsibility of the system designer to provide the specific MDIO address 
 * pointer updates, etc. in order to accomplish this write operation. 
 * It will be assumed that the write has been completed by the time this 
 * function returns.*/
void AQ_API_MDIO_Write_C22
(
    /*! Uniquely identifies the port within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port PHY_ID,
    /*! The 5-bit address of the PHY register being written. */
  unsigned int address,
    /*! The 16-bits of data to write to the specified PHY register. */
  unsigned int data
);

/*! Provides generic clause 22 synchronous PHY register read functionality. It is the
 * responsibility of the system designer to provide the specific MDIO address 
 * pointer updates, etc. in order to accomplish this read operation.*/
unsigned int AQ_API_MDIO_Read_C22
(
    /*! Uniquely identifies the port within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port PHY_ID,
    /*! The 5-bit address of the PHY register being read. */
  unsigned int address
);

/*! This is a wrapper for AQ_API_MDIO_Write_C22 to provide access  
 * to the whole set of caluse 45 registers via clause 22 protocol.
*/
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
)
{
  AQ_API_MDIO_Write_C22(PHY_ID, 13, 0x001F & MMD); /* 00...MMD */
  AQ_API_MDIO_Write_C22(PHY_ID, 14, address);
  AQ_API_MDIO_Write_C22(PHY_ID, 13, 0x4000 | (0x1F & MMD)); /* 01...MMD */
  AQ_API_MDIO_Write_C22(PHY_ID, 14, data);
}

/*! This is a wrapper for AQ_API_MDIO_Read_C22 to provide access  
 * to the whole set of caluse 45 registers via clause 22 protocol.
*/
unsigned int AQ_API_MDIO_Read
(
    /*! Uniquely identifies the port within the system. AQ_Port must be 
     * defined to a whatever data type is suitable for the platform.*/
  AQ_Port PHY_ID,
    /*! The address of the MMD within the target PHY. */
  unsigned int MMD,
    /*! The 16-bit address of the PHY register being read. */
  unsigned int address
)
{
  AQ_API_MDIO_Write_C22(PHY_ID, 13, 0x001F & MMD); /* 00...MMD */
  AQ_API_MDIO_Write_C22(PHY_ID, 14, address);
  AQ_API_MDIO_Write_C22(PHY_ID, 13, 0x4000 | (0x1F & MMD)); /* 01...MMD */
  return AQ_API_MDIO_Read_C22(PHY_ID, 14);  
}

#endif