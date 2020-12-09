/* hwInterface.c */

/***********************************************************************
*                    Copyright Aquantia Corporation
*                                Freeware
*
* $File: //depot/icm/proj/Dena/rev1.0/c/Systems/tools/windows/hwInterface/generic/src/hwInterface.c $
*
* $Revision: #3 $
*
* $DateTime: 2011/09/28 14:37:11 $
*
* $Author: plangner $
*
* $Label:  $
*
***********************************************************************/

/*! \file
    This file contains the hardware interface function bodies, and the MDIO read and write stubs for the AQ1001 API. */

//#include "hwInterface.h"
//#include <miiphy.h>
//#include <phy.h>

#include <malloc.h>
//#include <net.h>

#ifdef __cplusplus
  extern "C" {
#endif

/*! \addtogroup HW_Interface
 @{*/

/* Define the global objects used to interface to the hardware */
static char** HW_AdapterList={"1","2"};


unsigned int HW_Initialize ()
{
  /********************************** Insert device initialization function here ******************/
  return 1;
}

unsigned int HW_NumberOfDevices ()
{
  /*declare local variables */
  unsigned int numberOfAdapters = 2;

  /********************************** Insert device number function here **************************/
  return numberOfAdapters;
}

char** HW_DeviceList ()
{
  /********************************** Insert device list function here ****************************/
  return HW_AdapterList;
}

unsigned int HW_Open (const char* boardName)
{
  /********************************** Insert open function here ***********************************/
  return 1;
}


void HW_Close ()
{
  /********************************** Insert close function here **********************************/
  return;
}

/*@}*/

/*! \defgroup External MDIO ExternalMDIO
  @{
*/

/*****************************************************************************

                                 ExternalMDIO

*****************************************************************************/


void AQ_API_MDIO_Write
(
    /*! The address of the PHY being addressed. */
  AQ_Port PHY_ID,
    /*! The address of the MMD within the AQ1001 being addressed.*/
  unsigned int MMD,
    /*! The 16-bit address being written to.*/
  unsigned int address,
    /*! The 16-bits of data being sent out with the write command. This may be either address or data.*/
  unsigned int data
)
{
	//struct phy_device* phy = (struct phy_device*) PHY_ID;
	//phy_write(phy ,MMD, address, data);
  /********************************** Insert write function here **********************************/
  return;
}



unsigned int AQ_API_MDIO_Read
(
    /*! The address of the PHY being addressed. */
  AQ_Port PHY_ID,
    /*! The address of the MMD within the AQ1001 being addressed.*/
  unsigned int MMD,
    /*! The 16-bit address being written to.*/
  unsigned int address
)
{
  /* declare local variables */
  unsigned int data;
	//struct phy_device* phy = (struct phy_device*) PHY_ID;
	//data = phy_read(phy ,MMD, address);
  /********************************** Insert read function here ***********************************/
  return data;
}

#if 1

#ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE

void AQ_API_MDIO_BlockWrite
(
    /*! The address of the PHY being addressed. This is ultimately some combination of the <BR>
        system address and the target PHY's MDIO Address, set by the pins Addr [4:0].*/
  unsigned long PHY_ID,
    /*! The address of the MMD within the Aquantia PHY being addressed.*/
  unsigned int MMD,
    /*! The 16-bit address being written to.*/
  unsigned int address,
    /*! The 16-bits of data being sent out with the write command. This may be either address or data.*/
  unsigned int data
)
{
  /********************************** Insert write function here **********************************/
  return;
}



void AQ_API_MDIO_BlockRead
(
    /*! The address of the PHY being addressed. This is ultimately some combination of the <BR>
        system address and the target PHY's MDIO Address, set by the pins Addr [4:0].*/
  unsigned long PHY_ID,
    /*! The address of the MMD within the Aquantia PHY being addressed.*/
  unsigned int MMD,
    /*! The 16-bit address being written to.*/
  unsigned int address
)
{
  /* declare local variables */
  unsigned int data;

  /********************************** Insert read function here ***********************************/
  return data;
}



unsigned int * AQ_API_MDIO_BlockOperationExecute
(
    /* The address of the PHY being addressed. */
  unsigned int PHY_ID
)
{
  /* declare local variables */
  unsigned int* blockDataPointer;

  /********************************** Insert execute function here ***********************************/
  return blockDataPointer;
}



unsigned int AQ_API_MDIO_MaxBlockOperations
(
)
{
  /********************************** Return the number here **********************************/
  return 1024;   /* 1024 is just an example */
}
#endif
#endif

#ifdef __cplusplus
  }
#endif

/*@}*/
