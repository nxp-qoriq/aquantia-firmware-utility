/* ****************************** AQ_API Version 2.9.7 ****************************** */ 
/*AQ_API.c*/

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
*                     Copyright Aquantia Corp.
*                             Freeware
*
* Description:
*
*   This file contains the code for the API functions defined in AQ_API.h
*
************************************************************************************/


/*! \file
*   This file contains the code for the API functions defined in AQ_API.h
 */

#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#include "AQ_API.h"
#include "AQ_User.h"
#include "AQ_RegMacro.h"
#include "AQ_PlatformRoutines.h"
#include "AQ_RegMaps.h"
#include "AQ_ReturnCodes.h"
#include "AQ_Load.h"

#ifdef AQ_VERBOSE
  #include <stdio.h>
  //#include <assert.h>
#endif

//#include "hwInterface.h"

#define CLOCKS_PER_SEC 100
#define AQ_API_Wait(a, b); usleep(a);

#ifndef AQ_TIME_T_EXISTS
  #ifndef AQ_MDIO_READS_PER_SECOND
    #error AQ_MDIO_READS_PER_SECOND in AQ_User.h must be defined, as AQ_TIME_T_EXISTS is currently undefined!
  #endif
#endif

#ifdef AQ_TIME_T_EXISTS
  #include <time.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef AQ_ENABLE_UP_BUSY_CHECKS
  #ifdef AQ_VERBOSE
    #define AQ_API_UP_BUSY_PRINT_STATEMENT AQ_API_Print("uP-busy check timed out.\n");
  #else
    #define AQ_API_UP_BUSY_PRINT_STATEMENT /* nothing */ 
  #endif
  
  /* AQ_API_UP_BUSY_TIMEOUT - normal uP-busy timeout,
   * AQ_API_UP_BUSY_LONG_TIMEOUT - enlarged uP-busy timeout, used with
   * AQ_API_10G_LTP_10G_TestMode3 and initiateCableDiagnostics */
  #ifdef AQ_TIME_T_EXISTS
    #define AQ_API_UP_BUSY_TIMEOUT      (CLOCKS_PER_SEC / 10)
    #define AQ_API_UP_BUSY_LONG_TIMEOUT (CLOCKS_PER_SEC * 20)
  
    #define AQ_API_DECLARE_UP_BUSY_VARS AQ_API_Variable(AQ_GlobalGeneralStatus) \
                                        uint16_t uPbusy; \
                                        clock_t startTime; \
                                        AQ_boolean uPBusyTimeoutOccurred = False;
      
    #define AQ_API_CHECK_UP_NOT_BUSY_COMMON(timeout) AQ_API_Wait(1, port); \
                                     startTime = clock(); \
                                     do \
                                     { \
                                       AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralStatus, processorIntensiveMdioOperationIn_Progress, uPbusy); \
                                       if ((clock() - startTime) > timeout) \
                                       { \
                                         AQ_API_UP_BUSY_PRINT_STATEMENT \
                                         uPBusyTimeoutOccurred = True; \
                                         break; \
                                       } \
                                     } while (uPbusy != 0);
  #else
    #define AQ_API_UP_BUSY_TIMEOUT      (AQ_MDIO_READS_PER_SECOND / 10)
    #define AQ_API_UP_BUSY_LONG_TIMEOUT (AQ_MDIO_READS_PER_SECOND * 3)
  
    #define AQ_API_DECLARE_UP_BUSY_VARS AQ_API_Variable(AQ_GlobalGeneralStatus) \
                                        uint16_t uPbusy; \
                                        uint32_t numChecks; \
                                        AQ_boolean uPBusyTimeoutOccurred = False;
  
    #define AQ_API_CHECK_UP_NOT_BUSY_COMMON(maxChecks) AQ_API_Wait(1, port); \
                                     numChecks = 0; \
                                     do \
                                     { \
                                       AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralStatus, processorIntensiveMdioOperationIn_Progress, uPbusy); \
                                       if (numChecks++ > maxChecks) \
                                       { \
                                         AQ_API_UP_BUSY_PRINT_STATEMENT \
                                         uPBusyTimeoutOccurred = True; \
                                         break; \
                                       } \
                                     } while (uPbusy != 0);
  #endif

  #define AQ_API_CHECK_UP_NOT_BUSY      AQ_API_CHECK_UP_NOT_BUSY_COMMON(AQ_API_UP_BUSY_TIMEOUT)
  #define AQ_API_CHECK_UP_NOT_BUSY_LONG AQ_API_CHECK_UP_NOT_BUSY_COMMON(AQ_API_UP_BUSY_LONG_TIMEOUT)
  /* If a uP busy timeout occurred, return the corresponding return code; otherwise, return
   * retval.  retval should be a return code defined in AQ_ReturnCodes. */
  #define AQ_API_RETURN_UP_BUSY(retval) return (uPBusyTimeoutOccurred ? AQ_RET_UP_BUSY_TIMEOUT : retval);

#else
  #define AQ_API_DECLARE_UP_BUSY_VARS /* nothing */
  #define AQ_API_CHECK_UP_NOT_BUSY /* nothing */
  #define AQ_API_CHECK_UP_NOT_BUSY_LONG /* nothing */
  #define AQ_API_RETURN_UP_BUSY(retval) return retval;
#endif


/*! The byte address, in processor memory, of the start of the IRAM segment. */
#define AQ_IRAM_BASE_ADDRESS 0x40000000

/*! The byte address, in processor memory, of the start of the DRAM segment. */
#define AQ_DRAM_BASE_ADDRESS 0x3FFE0000

/*! The offset, from the start of DRAM, where the provisioning block begins. */
#define AQ_PHY_IMAGE_PROVTABLE_OFFSET 0x680

/*! The offset, from the start of DRAM, where the provisioning block's ending address is recorded. */
#define AQ_PHY_IMAGE_PROVTABLE_TERM_OFFSET 0x028C

/*! The size of the space alloted within the PHY image for the provisioning table. */
#define AQ_PHY_IMAGE_PROVTABLE_MAXSIZE 0x800

/*! The maximum number of ports that can be MDIO bootloaded at once. */
#define AQ_MAX_NUM_PHY_IDS 48

/*! The maximum allowed number of times to poll for debug-trace-freeze acknowledgement. */
#define AQ_MAX_FREEZE_CHECKS 2000

/*! The maximum size of the debug trace buffer. */
#define AQ_MAX_TRACE_BUFFER_LENGTH 8192

/*! The maximum allowed number of times to poll for SERDES Rx eye measurement done. */
#define AQ_SERDESEYE_MAX_DONE_CHECKS 50

/*! The maximum allowed number of times to poll for PIF mailbox status. */
#define MAX_NUM_COMMAND_STATUS_POLLS 700

/*! The maximum number of checks to get Rx Link up. */
#define MAX_RX_LINK_CHECKS 1000

#ifndef AQ_ENABLE_PRINT_IMPLEMENTATION
void AQ_API_Print
(
  const char* printString,
  ...     
)
{
  va_list arglist;
  va_start(arglist, printString);
  vprintf(printString, arglist);
  va_end(arglist);	
}
#endif

unsigned int AQ_API_MDIO_Read_Delegate
(
  AQ_Port PHY_ID,
  unsigned int MMD,
  unsigned int address
)
{
  AQ_API_Port port;
  #ifndef SERDES_DIRECT_REG_ACCESS
    unsigned int data;
  #endif

  /* SERDES_DIRECT_REG_ACCESS takes the 1B.xxxx directly to SerDes registers mailbox*/
  if (MMD == 0x1B)
  {
    port.device = AQ_DEVICE_RHEA;
    port.PHY_ID = PHY_ID;
    #ifdef SERDES_DIRECT_REG_ACCESS
      return AQ_API_MDIO_Read_SD_Syp(&port, MMD, address);
    #else
      AQ_API_MDIO_Read_PIFMailbox(&port, MMD, address, &data);
      return data;
    #endif
  }
  else      
    return AQ_API_MDIO_Read(PHY_ID, MMD, address);
}


void AQ_API_MDIO_Write_Delegate
(
  AQ_Port PHY_ID,
  unsigned int MMD,
  unsigned int address,
  unsigned int data
)
{
  AQ_API_Port port;
  
  if (MMD == 0x1B)
  {
    port.device = AQ_DEVICE_RHEA;
    port.PHY_ID = PHY_ID;

    #ifdef SERDES_DIRECT_REG_ACCESS
      AQ_API_MDIO_Write_SD_Syp(&port, MMD, address, data);
    #else
      AQ_API_MDIO_Write_PIFMailbox(&port, MMD, address, data);
    #endif
  }
  else
    AQ_API_MDIO_Write(PHY_ID, MMD, address, data);
}

unsigned int AQ_API_MDIO_Read_SD_Syp
(
  AQ_API_Port* port,
  unsigned int MMD,
  unsigned int address
)
{
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_SerdesParallelControlRegister)
/*  AQ_API_DeclareLocalStruct(RHEA, AQ_SerdesParallelControlRegister, serdesControl) */

  uint8_t busyBit;
  uint16_t sdAddress;
  uint16_t timeout;
  unsigned int data;

  /* REGDOC: Write register (RHEA: 1E.A108) */
  AQ_API_WriteRegister_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 8, address);
  
  /* REGDOC: Read bitfield (RHEA: 1E.A10D.0) */
  AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 
      crIfBusBusy, busyBit);

  timeout =0;

  while ((busyBit == 1) && (timeout < MAX_NUM_COMMAND_STATUS_POLLS))
  {
    /* REGDOC: Read bitfield (RHEA: 1E.A10D.0) */
    AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 
      crIfBusBusy, busyBit);
    AQ_API_Wait(1000, port);
    timeout += 1;
  }

  /* REGDOC: Read register (RHEA: 1E.A10A) */
  AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 
      crIfRdAckdAddr, sdAddress);

  if (address != sdAddress)
  {
    #ifdef AQ_VERBOSE
      AQ_API_Print("Failed to set SerDes register address\n");
    #endif

    return 0;
  }

  /* REGDOC: Read-Modify-Write bitfield (RHEA: 1E.A109) */
  AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 
      crIfRdData, data);

  return data;
}


void AQ_API_MDIO_Write_SD_Syp
(
  AQ_API_Port* port,
  unsigned int MMD,
  unsigned int address,
  unsigned int data
)
{   

  AQ_API_Variable_DeviceRestricted(RHEA, AQ_SerdesParallelControlRegister)

  uint8_t busyBit;
  uint16_t sdAddress;
  uint16_t timeout;

  /* REGDOC: Write register (RHEA: 1E.A104) */
  AQ_API_WriteRegister_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 4, address);

  /* REGDOC: Write register (RHEA: 1E.A105) */
  AQ_API_WriteRegister_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 5, data);

  timeout =0;
  /* REGDOC: Read bitfield (RHEA: 1E.A10D.0) */
  AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 
      crIfBusBusy, busyBit);

  while ((busyBit == 1) && (timeout < MAX_NUM_COMMAND_STATUS_POLLS))
  {
    /* REGDOC: Read bitfield (RHEA: 1E.A10D.0) */
    AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 
      crIfBusBusy, busyBit);
    AQ_API_Wait(1000, port);
    timeout += 1;
  }

  /* REGDOC: Read register (RHEA: 1E.A106) */
  AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 
      crIfWrAckdAddr, sdAddress);

  if (address != sdAddress)
  {
    #ifdef AQ_VERBOSE
      AQ_API_Print("Failed to set SerDes register address\n");
    #endif
  }

}

void AQ_API_Enable_SypSD_RegAccess
(
  AQ_API_Port* port
)
{
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_SerdesParallelControlRegister)
   /* REGDOC: Read-Modify-Write bitfield (RHEA: 1E.A100.0) */
  AQ_API_Set_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesParallelControlRegister, 
      crParaSel, 1);
}

/* REGDOC_START */

/**********************************************************************************************************************
*                                               Configuration
**********************************************************************************************************************/

/*! \addtogroup configuration
  @{
*/

AQ_Retcode AQ_API_GetConfiguration
(
  AQ_API_Port* port,
  AQ_API_Configuration* configuration
)
{
  AQ_API_Variable(AQ_AutonegotiationReservedVendorProvisioning)
  AQ_API_Variable(AQ_GlobalThermalProvisioning)
  AQ_API_Variable(AQ_PcsReceiveVendorProvisioning)
  AQ_API_Variable(AQ_GbePhyWolControl)
  AQ_API_Variable(AQ_GbePhyExtendedWolControl)

  AQ_API_DeclareLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning)

  uint16_t temperature;         /*the integer temperature converted to the internal XENPAK/PHY format*/
  uint16_t i, j, wakeUpFrameEnable, lsw, wakeUpMaskActive;
  uint32_t msw;


  /* get the thermal thresholds first: because it is an unsigned 16 bit number, the two's complementing has to be
     done manually */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C424.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalThermalProvisioning, lowTempWarningThreshold, temperature);
  temperature >>= 8;
  configuration->lowTemperatureWarningThreshold = (temperature & 0x80) ? (temperature - 0x100) : temperature;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C422.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalThermalProvisioning, lowTempFailureThreshold, temperature);
  temperature >>= 8;
  configuration->lowTemperatureFailureThreshold = (temperature & 0x80) ? (temperature - 0x100) : temperature;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C423.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalThermalProvisioning, highTempWarningThreshold, temperature);
  temperature >>= 8;
  configuration->highTemperatureWarningThreshold = (temperature & 0x80) ? (temperature - 0x100) : temperature;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C421.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalThermalProvisioning, highTempFailureThreshold, temperature);
  temperature >>= 8;
  configuration->highTemperatureFailureThreshold = (temperature & 0x80) ? (temperature - 0x100) : temperature;

  /*10G mode*/
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read bitfield (APPIA: 03.E400.F) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveVendorProvisioning, pcsRxLdpcDecoderControl, i);
      configuration->disableErrorCorrection = i ? False : True;  /* the inverse */
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* gone in HH */
      configuration->disableErrorCorrection = False;
      break;
  }

  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E400.0) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorProvisioning, pcsRxErrorLdpcFrameEnable, i);
  configuration->disableCRC8_FrameTrashing = i ? False : True;  /* the inverse */

  /*LED*/
  for (j = 0; j < 6; j++)
  {
    /*process each LED: just reuse word_0, as they are all the same */
    AQ_API_AssignWordOfLocalStruct(globalLedProvisioning, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C430 + j) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalLedProvisioning, j));

    configuration->LED_Control[j].LED_On = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.8) */
      AQ_API_BitfieldOfLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning, 
          led_0ManualSet) ? True : False;

    configuration->LED_Control[j].LED_On_When10G_LinkEstablished = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.7) */
      AQ_API_BitfieldOfLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning, 
          led_0_10Gb_sLinkEstablished) ? True : False;

    switch (port->device)
    {
      case AQ_DEVICE_APPIA:
        configuration->LED_Control[j].LED_On_When5G_LinkEstablished = False;
        configuration->LED_Control[j].LED_On_When2_5G_LinkEstablished = False;
        break;

      case AQ_DEVICE_HHD:
      case AQ_DEVICE_EUR:
      case AQ_DEVICE_CAL:
      case AQ_DEVICE_RHEA:
        configuration->LED_Control[j].LED_On_When5G_LinkEstablished = 
          /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C430.F) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalLedProvisioning, 
              globalLedProvisioning, led_0_5Gb_sLinkEstablished) ? True : False;

        configuration->LED_Control[j].LED_On_When2_5G_LinkEstablished = 
          /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C430.E) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalLedProvisioning, 
              globalLedProvisioning, led_0_2_5Gb_sLinkEstablished) ? True : False;
        
        break;
    }

    configuration->LED_Control[j].LED_On_When1G_LinkEstablished = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.6) */
      AQ_API_BitfieldOfLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning, 
          led_0_1Gb_sLinkEstablished) ? True : False;

    configuration->LED_Control[j].LED_On_When100M_LinkEstablished = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.5) */
      AQ_API_BitfieldOfLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning, 
          led_0_100Mb_sLinkEstablished) ? True : False;

    configuration->LED_Control[j].LED_On_WhenConnecting = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.4) */
      AQ_API_BitfieldOfLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning, 
          led_0Connecting) ? True : False;

    configuration->LED_Control[j].LED_TogglesOnReceiveActivity = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.3) */
      AQ_API_BitfieldOfLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning, 
          led_0ReceiveActivity) ? True : False;

    configuration->LED_Control[j].LED_TogglesOnTransmitActivity = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.2) */
      AQ_API_BitfieldOfLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning, 
          led_0TransmitActivity) ? True : False;
    
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.1:0) */
    switch (AQ_API_BitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0ActivityStretch))
    {
      case 0x0:
        configuration->LED_Control[j].LED_Stretch = AQ_API_LS_Off;
        break;

      case 0x1:
        configuration->LED_Control[j].LED_Stretch = AQ_API_LS_28ms;
        break;

      case 0x2:
        configuration->LED_Control[j].LED_Stretch = AQ_API_LS_60ms;
        break;

      case 0x3:
        configuration->LED_Control[j].LED_Stretch = AQ_API_LS_100ms;
        break;
    }
  }

  /*WoL*/
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.6) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, wolEnable, i);
  if (i)
  {
    /* WoL is enabled: get the rate */
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.7) */
    AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, wolMode, i);
    if (i) configuration->wolControl = AQ_API_WOL_1000BASE_T;
    else configuration->wolControl = AQ_API_WOL_100BASE_TX;
  }
  else configuration->wolControl = AQ_API_WOL_None;

  /* get the wake-up frame filter settings: note that there is a global enable, but individual frames can be disabled
     by setting their 128-bit filter mask to all-zero */

  /* NOTE! The following operations are required in reverse for reading the WoL filter FCS:
     (1)     take the one’s complement of the desired CRC,
     (2)     bit-reverse each byte of the result of step (1), and
     (3)     program the lower 16-bits of the result of step (2) in the lower CRC register,
             and the upper 16 bits in the upper CRC register.
  */
  wakeUpFrameEnable = 0;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.C305.0) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhyWolControl, 
          wakeUpFrameDetectionEnable, wakeUpFrameEnable);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      wakeUpFrameEnable = 0;
      break;
  }

  /* frame 0 */
  wakeUpMaskActive = 0;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30D.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_7, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30C.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_6, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[0].filter3 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30B.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_5, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30A.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_4, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[0].filter2 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C309.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_3, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C308.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_2, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[0].filter1 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C307.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_1, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C306.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_0, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[0].filter0 = (msw << 16) | lsw;

  /* load the CRC word reversed */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30F.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_0Word_1, msw);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30E.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_0Word_0, lsw);

  /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps and 1's complement at the end */
  msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
  msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
  msw = 0xFFFF & ~(((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
  lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
  lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
  lsw = 0xFFFF & ~(((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

  configuration->wakeUpFrame[0].crc32 = (msw << 16) | lsw;
  configuration->wakeUpFrame[0].enable = (wakeUpFrameEnable && wakeUpMaskActive) ? True : False;

  /* frame 1 */
  wakeUpMaskActive = 0;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C317.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_7, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C316.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_6, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[1].filter3 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C315.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_5, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C314.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_4, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[1].filter2 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C313.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_3, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C312.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_2, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[1].filter1 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C311.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_1, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C310.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_0, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[1].filter0 = (msw << 16) | lsw;

  /* load the CRC word reversed */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C319.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_1Word_1, msw);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C318.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_1Word_0, lsw);

  /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps and 1's complement at the end */
  msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
  msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
  msw = 0xFFFF & ~(((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
  lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
  lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
  lsw = 0xFFFF & ~(((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

  configuration->wakeUpFrame[1].crc32 = (msw << 16) | lsw;
  configuration->wakeUpFrame[1].enable = (wakeUpFrameEnable && wakeUpMaskActive) ? True : False;

  /* frame 2 */
  wakeUpMaskActive = 0;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C321.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_7, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C320.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_6, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[2].filter3 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31F.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_5, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31E.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_4, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[2].filter2 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31D.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_3, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31C.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_2, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[2].filter1 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31B.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_1, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31A.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_0, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[2].filter0 = (msw << 16) | lsw;

  /* load the CRC word reversed */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C323.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_2Word_1, msw);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C322.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_2Word_0, lsw);

  /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps and 1's complement at the end */
  msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
  msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
  msw = 0xFFFF & ~(((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
  lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
  lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
  lsw = 0xFFFF & ~(((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

  configuration->wakeUpFrame[2].crc32 = (msw << 16) | lsw;
  configuration->wakeUpFrame[2].enable = (wakeUpFrameEnable && wakeUpMaskActive) ? True : False;

  /* frame 3 */
  wakeUpMaskActive = 0;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32B.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_7, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32A.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_6, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[3].filter3 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C329.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_5, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C328.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_4, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[3].filter2 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C327.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_3, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C326.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_2, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[3].filter1 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C325.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_1, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C324.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_0, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[3].filter0 = (msw << 16) | lsw;

  /* load the CRC word reversed */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32D.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_3Word_1, msw);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32C.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_3Word_0, lsw);

  /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps and 1's complement at the end */
  msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
  msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
  msw = 0xFFFF & ~(((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
  lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
  lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
  lsw = 0xFFFF & ~(((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

  configuration->wakeUpFrame[3].crc32 = (msw << 16) | lsw;
  configuration->wakeUpFrame[3].enable = (wakeUpFrameEnable && wakeUpMaskActive) ? True : False;

  /* frame 4 */
  wakeUpMaskActive = 0;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C335.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_7, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C334.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_6, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[4].filter3 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C333.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_5, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C332.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_4, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[4].filter2 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C331.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_3, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C330.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_2, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[4].filter1 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32F.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_1, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32E.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_0, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[4].filter0 = (msw << 16) | lsw;

  /* load the CRC word reversed */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C337.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_4Word_1, msw);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C336.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_4Word_0, lsw);

  /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps and 1's complement at the end */
  msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
  msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
  msw = 0xFFFF & ~(((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
  lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
  lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
  lsw = 0xFFFF & ~(((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

  configuration->wakeUpFrame[4].crc32 = (msw << 16) | lsw;
  configuration->wakeUpFrame[4].enable = (wakeUpFrameEnable && wakeUpMaskActive) ? True : False;

  /* frame 5 */
  wakeUpMaskActive = 0;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C427.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_7, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C426.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_6, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[5].filter3 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C425.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_5, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C424.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_4, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[5].filter2 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C423.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_3, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C422.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_2, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[5].filter1 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C421.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_1, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C420.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_0, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[5].filter0 = (msw << 16) | lsw;

  /* load the CRC word reversed */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C429.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_5Word_1, msw);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C428.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_5Word_0, lsw);

  /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps and 1's complement at the end */
  msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
  msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
  msw = 0xFFFF & ~(((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
  lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
  lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
  lsw = 0xFFFF & ~(((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

  configuration->wakeUpFrame[5].crc32 = (msw << 16) | lsw;
  configuration->wakeUpFrame[5].enable = (wakeUpFrameEnable && wakeUpMaskActive) ? True : False;

  /* frame 6 */
  wakeUpMaskActive = 0;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C431.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_7, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C430.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_6, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[6].filter3 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42F.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_5, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42E.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_4, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[6].filter2 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42D.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_3, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42C.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_2, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[6].filter1 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42B.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_1, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42A.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_0, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[6].filter0 = (msw << 16) | lsw;

  /* load the CRC word reversed */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C433.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_6Word_1, msw);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C432.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_6Word_0, lsw);

  /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps and 1's complement at the end */
  msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
  msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
  msw = 0xFFFF & ~(((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
  lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
  lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
  lsw = 0xFFFF & ~(((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

  configuration->wakeUpFrame[6].crc32 = (msw << 16) | lsw;
  configuration->wakeUpFrame[6].enable = (wakeUpFrameEnable && wakeUpMaskActive) ? True : False;

  /* frame 7 */
  wakeUpMaskActive = 0;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43B.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_7, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43A.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_6, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[7].filter3 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C439.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_5, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C438.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_4, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[7].filter2 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C437.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_3, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C436.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_2, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[7].filter1 = (msw << 16) | lsw;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C435.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_1, i);
  msw = i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C434.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_0, lsw);
  if (msw | lsw) wakeUpMaskActive = 1;
  configuration->wakeUpFrame[7].filter0 = (msw << 16) | lsw;

  /* load the CRC word reversed */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43D.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_7Word_1, msw);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43C.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_7Word_0, lsw);

  /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps and 1's complement at the end */
  msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
  msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
  msw = 0xFFFF & ~(((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
  lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
  lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
  lsw = 0xFFFF & ~(((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

  configuration->wakeUpFrame[7].crc32 = (msw << 16) | lsw;
  configuration->wakeUpFrame[7].enable = (wakeUpFrameEnable && wakeUpMaskActive) ? True : False;

  /* magic packet frame: remember to byte reverse the MAC address */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C339.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, magicPacketFramePatternWord_0, i);
  configuration->magicPacketFrame.filter0 = ((i & 0xFF00) >> 8) | ((i & 0x00FF) << 8);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C33A.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, magicPacketFramePatternWord_1, i);
  configuration->magicPacketFrame.filter1 = ((i & 0xFF00) >> 8) | ((i & 0x00FF) << 8);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C33B.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhyWolControl, magicPacketFramePatternWord_2, i);
  configuration->magicPacketFrame.filter2 = ((i & 0xFF00) >> 8) | ((i & 0x00FF) << 8);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD: 
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.C338.0) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhyWolControl, 
          magicPacketFrameDetectionEnable, i);
      configuration->magicPacketFrame.enable = i ? True : False;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      configuration->magicPacketFrame.enable = False;
      break;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetConfiguration
(
  AQ_API_Port* port,
  AQ_API_Configuration* configuration
)
{
  AQ_API_DeclareLocalStruct(AQ_GlobalLedProvisioning, globalLedProvisioning)

  AQ_API_Variable(AQ_AutonegotiationReservedVendorProvisioning)
  AQ_API_Variable(AQ_PcsReceiveVendorProvisioning)
  AQ_API_Variable(AQ_GbePhyWolControl)
  AQ_API_Variable(AQ_GbePhyExtendedWolControl)

  uint16_t j, wakeUpMaskActive[8], wakeUpFrameEnable;
  uint16_t i, lsw, msw;


  /*update the thermal thresholds first: convert the negative numbers by negating, shifting, and two's complementing */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C420 + 4) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalThermalProvisioning, 4,
      (configuration->lowTemperatureWarningThreshold << 8));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C420 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalThermalProvisioning, 2,
      (configuration->lowTemperatureFailureThreshold << 8));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C420 + 3) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalThermalProvisioning, 3,
      (configuration->highTemperatureWarningThreshold << 8));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C420 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalThermalProvisioning, 1,
      (configuration->highTemperatureFailureThreshold << 8));

  /*10G mode*/
  switch (port->device)
  {
    /* disableErrorCorrection is APPIA-only */

    case AQ_DEVICE_APPIA:
      /* REGDOC: Read-Modify-Write bitfield (APPIA: 03.E400.F) */
      AQ_API_Set_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveVendorProvisioning, 
          pcsRxLdpcDecoderControl, (configuration->disableErrorCorrection ? 0 : 1));
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }

  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E400.0) */
  AQ_API_Set(port->PHY_ID, AQ_PcsReceiveVendorProvisioning, 
      pcsRxErrorLdpcFrameEnable, (configuration->disableCRC8_FrameTrashing ? 0 : 1));

  /* Loop over the LEDs */
  for (j = 0; j < 6; j++)
  {
    /* Set up the bitfields for each LED: just reuse word_0, as they are all the same */
    AQ_API_AssignWordOfLocalStruct( globalLedProvisioning, 0, 0x0000);

    if (configuration->LED_Control[j].LED_On) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.8) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0ManualSet, 1);

    if (configuration->LED_Control[j].LED_On_When10G_LinkEstablished) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.7) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0_10Gb_sLinkEstablished, 1);

    switch (port->device)
    {
      case AQ_DEVICE_APPIA:
        /* No AQRate in Appia. */
        break;

      case AQ_DEVICE_HHD:
      case AQ_DEVICE_EUR:
      case AQ_DEVICE_CAL:
      case AQ_DEVICE_RHEA:
        if (configuration->LED_Control[j].LED_On_When5G_LinkEstablished) 
          /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C430.F) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
              AQ_GlobalLedProvisioning, globalLedProvisioning, led_0_5Gb_sLinkEstablished, 1);

        if (configuration->LED_Control[j].LED_On_When2_5G_LinkEstablished) 
          /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C430.E) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
              AQ_GlobalLedProvisioning, globalLedProvisioning, led_0_2_5Gb_sLinkEstablished, 1);
        break;
    }

    if (configuration->LED_Control[j].LED_On_When1G_LinkEstablished) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.6) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0_1Gb_sLinkEstablished, 1);

    if (configuration->LED_Control[j].LED_On_When100M_LinkEstablished) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.5) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0_100Mb_sLinkEstablished, 1);

    if (configuration->LED_Control[j].LED_On_WhenConnecting) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.4) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0Connecting, 1);

    if (configuration->LED_Control[j].LED_TogglesOnReceiveActivity) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.3) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0ReceiveActivity, 1);

    if (configuration->LED_Control[j].LED_TogglesOnTransmitActivity) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.2) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0TransmitActivity, 1);

    if (configuration->LED_Control[j].LED_Stretch == AQ_API_LS_28ms) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.1:0) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0ActivityStretch, 0x1);
    else if (configuration->LED_Control[j].LED_Stretch == AQ_API_LS_60ms) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.1:0) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0ActivityStretch, 0x2);
    else if (configuration->LED_Control[j].LED_Stretch == AQ_API_LS_100ms) 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.1:0) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0ActivityStretch, 0x3);
    else 
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C430.1:0) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalLedProvisioning, 
          globalLedProvisioning, led_0ActivityStretch, 0x0);

    /* Write the control word for the LED */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C430 + (unsigned int) (j)) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalLedProvisioning,(unsigned int) (j), 
        AQ_API_WordOfLocalStruct(globalLedProvisioning, 0));
  }

  /*WoL*/
  switch (configuration->wolControl)
  {
    case AQ_API_WOL_None:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.6) */
      AQ_API_Set(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, wolEnable, 0);
      break;

    case AQ_API_WOL_100BASE_TX:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.7) */
      AQ_API_Set(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, wolMode, 0);
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.6) */
      AQ_API_Set(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, wolEnable, 1);
      break;

    case AQ_API_WOL_1000BASE_T:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.7) */
      AQ_API_Set(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, wolMode, 1);
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.6) */
      AQ_API_Set(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, wolEnable, 1);
      break;
  }

  /* For each wake-up filter, track whether the individual filter is enabled: this means that both the mask is non-zero
     and the enable flag for the structure is set.  This needs to be used at the end of processing the filters to
     determine whether or not to set the single wake-up frame enable bit.  The result of this is that if no filters
     are enabled, their masks do not have to be zero, but if any individual filter is enabled, all other non-enabled
     filters must have a zero mask */
  wakeUpFrameEnable = 0;
  for (j = 0; j < sizeof(wakeUpMaskActive) / sizeof(wakeUpMaskActive[0]); j++)
  {
    wakeUpMaskActive[j] = ((configuration->wakeUpFrame[j].filter0
                         || configuration->wakeUpFrame[j].filter1
                         || configuration->wakeUpFrame[j].filter2
                         || configuration->wakeUpFrame[j].filter3) && configuration->wakeUpFrame[j].enable) ? 1 : 0;
    if (wakeUpMaskActive[j])
      wakeUpFrameEnable = 1;
  }
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read-Modify-Write bitfield (APPIA/HHD: 1D.C305.0) */
      AQ_API_Set_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhyWolControl, 
          wakeUpFrameDetectionEnable, wakeUpFrameEnable);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      wakeUpFrameEnable = False;
      break;
  }

  /* frame 0 */
  /* write the mask only if the mask is active, or no wake-up frame is enabled */

  /* NOTE! The following operations are required for the WoL filter FCS:
     (1)     take the one’s complement of the desired CRC,
     (2)     bit-reverse each byte of the result of step (1), and
     (3)     program the lower 16-bits of the result of step (2) in the lower CRC register,
             and the upper 16 bits in the upper CRC register.
  */
  if (wakeUpMaskActive[0] || !wakeUpFrameEnable)
  {
    msw = (uint16_t) ((configuration->wakeUpFrame[0].filter3 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[0].filter3 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_7, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_6, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[0].filter2 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[0].filter2 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_5, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_4, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[0].filter1 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[0].filter1 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C309.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_3, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C308.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_2, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[0].filter0 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[0].filter0 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C307.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_1, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C306.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_0, lsw);

    /* CRC-32: one's complement */

    msw = (uint16_t) (~(configuration->wakeUpFrame[0].crc32 >> 16) & 0xFFFF);
    lsw = (uint16_t) (~(configuration->wakeUpFrame[0].crc32) & 0xFFFF);

    /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps */
    msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
    msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
    msw = (((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
    lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
    lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
    lsw = (((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

    /* load the CRC word reversed */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30E.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_0Word_0, lsw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30F.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_0Word_1, msw);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_7, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_6, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_5, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_4, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C309.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_3, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C308.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_2, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C307.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_1, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C306.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_0Word_0, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30E.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_0Word_0, 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C30F.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_0Word_1, 0xFFFF);
  }

  /* frame 1 */
  /* write the mask only if the mask is active, or no wake-up frame is enabled */
  if (wakeUpMaskActive[1] || !wakeUpFrameEnable)
  {
    msw = (uint16_t) ((configuration->wakeUpFrame[1].filter3 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[1].filter3 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C317.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_7, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C316.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_6, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[1].filter2 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[1].filter2 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C315.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_5, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C314.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_4, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[1].filter1 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[1].filter1 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C313.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_3, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C312.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_2, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[1].filter0 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[1].filter0 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C311.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_1, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C310.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_0, lsw);

    /* CRC-32: one's complement */

    msw = (uint16_t) (~(configuration->wakeUpFrame[1].crc32 >> 16) & 0xFFFF);
    lsw = (uint16_t) (~(configuration->wakeUpFrame[1].crc32) & 0xFFFF);

    /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps */
    msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
    msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
    msw = (((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
    lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
    lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
    lsw = (((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

    /* load the CRC word reversed */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C318.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_1Word_0, lsw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C319.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_1Word_1, msw);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C317.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_7, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C316.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_6, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C315.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_5, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C314.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_4, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C313.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_3, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C312.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_2, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C311.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_1, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C310.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_1Word_0, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C318.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_1Word_0, 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C319.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_1Word_1, 0xFFFF);
  }

  /* frame 2 */
  /* write the mask only if the mask is active, or no wake-up frame is enabled */
  if (wakeUpMaskActive[2] || !wakeUpFrameEnable)
  {
    msw = (uint16_t) ((configuration->wakeUpFrame[2].filter3 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[2].filter3 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C321.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_7, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C320.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_6, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[2].filter2 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[2].filter2 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31F.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_5, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31E.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_4, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[2].filter1 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[2].filter1 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_3, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_2, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[2].filter0 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[2].filter0 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_1, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_0, lsw);

    /* CRC-32: one's complement */

    msw = (uint16_t) (~(configuration->wakeUpFrame[2].crc32 >> 16) & 0xFFFF);
    lsw = (uint16_t) (~(configuration->wakeUpFrame[2].crc32) & 0xFFFF);

    /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps */
    msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
    msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
    msw = (((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
    lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
    lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
    lsw = (((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

    /* load the CRC word reversed */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C322.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_2Word_0, lsw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C323.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_2Word_1, msw);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C321.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_7, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C320.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_6, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31F.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_5, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31E.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_4, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_3, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_2, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_1, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C31A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_2Word_0, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C322.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_2Word_0, 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C323.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_2Word_1, 0xFFFF);
  }

  /* frame 3 */
  /* write the mask only if the mask is active, or no wake-up frame is enabled */
  if (wakeUpMaskActive[3] || !wakeUpFrameEnable)
  {
    msw = (uint16_t) ((configuration->wakeUpFrame[3].filter3 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[3].filter3 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_7, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_6, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[3].filter2 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[3].filter2 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C329.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_5, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C328.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_4, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[3].filter1 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[3].filter1 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C327.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_3, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C326.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_2, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[3].filter0 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[3].filter0 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C325.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_1, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C324.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_0, lsw);

    /* CRC-32: one's complement */

    msw = (uint16_t) (~(configuration->wakeUpFrame[3].crc32 >> 16) & 0xFFFF);
    lsw = (uint16_t) (~(configuration->wakeUpFrame[3].crc32) & 0xFFFF);

    /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps */
    msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
    msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
    msw = (((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
    lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
    lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
    lsw = (((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

    /* load the CRC word reversed */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_3Word_0, lsw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_3Word_1, msw);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_7, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_6, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C329.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_5, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C328.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_4, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C327.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_3, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C326.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_2, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C325.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_1, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C324.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_3Word_0, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_3Word_0, 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_3Word_1, 0xFFFF);
  }

  /* frame 4 */
  /* write the mask only if the mask is active, or no wake-up frame is enabled */
  if (wakeUpMaskActive[4] || !wakeUpFrameEnable)
  {
    msw = (uint16_t) ((configuration->wakeUpFrame[4].filter3 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[4].filter3 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C335.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_7, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C334.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_6, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[4].filter2 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[4].filter2 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C333.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_5, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C332.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_4, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[4].filter1 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[4].filter1 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C331.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_3, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C330.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_2, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[4].filter0 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[4].filter0 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32F.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_1, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32E.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_0, lsw);

    /* CRC-32: one's complement */

    msw = (uint16_t) (~(configuration->wakeUpFrame[4].crc32 >> 16) & 0xFFFF);
    lsw = (uint16_t) (~(configuration->wakeUpFrame[4].crc32) & 0xFFFF);

    /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps */
    msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
    msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
    msw = (((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
    lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
    lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
    lsw = (((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

    /* load the CRC word reversed */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C336.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_4Word_0, lsw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C337.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_4Word_1, msw);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C335.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_7, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C334.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_6, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C333.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_5, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C332.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_4, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C331.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_3, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C330.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_2, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32F.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_1, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C32E.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameMask_4Word_0, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C336.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_4Word_0, 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C337.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, wakeUpFrameCrc_4Word_1, 0xFFFF);
  }

  /* frame 5 */
  /* write the mask only if the mask is active, or no wake-up frame is enabled */
  if (wakeUpMaskActive[5] || !wakeUpFrameEnable)
  {
    msw = (uint16_t) ((configuration->wakeUpFrame[5].filter3 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[5].filter3 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C427.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_7, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C426.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_6, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[5].filter2 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[5].filter2 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C425.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_5, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C424.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_4, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[5].filter1 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[5].filter1 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C423.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_3, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C422.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_2, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[5].filter0 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[5].filter0 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C421.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_1, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C420.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_0, lsw);

    /* CRC-32: one's complement */

    msw = (uint16_t) (~(configuration->wakeUpFrame[5].crc32 >> 16) & 0xFFFF);
    lsw = (uint16_t) (~(configuration->wakeUpFrame[5].crc32) & 0xFFFF);

    /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps */
    msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
    msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
    msw = (((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
    lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
    lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
    lsw = (((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

    /* load the CRC word reversed */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C428.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_5Word_0, lsw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C429.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_5Word_1, msw);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C427.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_7, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C426.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_6, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C425.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_5, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C424.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_4, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C423.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_3, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C422.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_2, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C421.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_1, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C420.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_5Word_0, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C428.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_5Word_0, 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C429.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_5Word_1, 0xFFFF);
  }

  /* frame 6 */
  /* write the mask only if the mask is active, or no wake-up frame is enabled */
  if (wakeUpMaskActive[6] || !wakeUpFrameEnable)
  {
    msw = (uint16_t) ((configuration->wakeUpFrame[6].filter3 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[6].filter3 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C431.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_7, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C430.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_6, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[6].filter2 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[6].filter2 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42F.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_5, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42E.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_4, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[6].filter1 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[6].filter1 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_3, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_2, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[6].filter0 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[6].filter0 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_1, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_0, lsw);

    /* CRC-32: one's complement */

    msw = (uint16_t) (~(configuration->wakeUpFrame[6].crc32 >> 16) & 0xFFFF);
    lsw = (uint16_t) (~(configuration->wakeUpFrame[6].crc32) & 0xFFFF);

    /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps */
    msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
    msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
    msw = (((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
    lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
    lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
    lsw = (((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

    /* load the CRC word reversed */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C432.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_6Word_0, lsw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C433.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_6Word_1, msw);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C431.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_7, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C430.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_6, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42F.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_5, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42E.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_4, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_3, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_2, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_1, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C42A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_6Word_0, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C432.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_6Word_0, 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C433.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_6Word_1, 0xFFFF);
  }

  /* frame 7 */
  /* write the mask only if the mask is active, or no wake-up frame is enabled */
  if (wakeUpMaskActive[7] || !wakeUpFrameEnable)
  {
    msw = (uint16_t) ((configuration->wakeUpFrame[7].filter3 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[7].filter3 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_7, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_6, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[7].filter2 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[7].filter2 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C439.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_5, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C438.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_4, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[7].filter1 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[7].filter1 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C437.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_3, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C436.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_2, lsw);
    msw = (uint16_t) ((configuration->wakeUpFrame[7].filter0 >> 16) & 0xFFFF);
    lsw = (uint16_t) (configuration->wakeUpFrame[7].filter0 & 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C435.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_1, msw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C434.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_0, lsw);

    /* CRC-32: one's complement */

    msw = (uint16_t) (~(configuration->wakeUpFrame[7].crc32 >> 16) & 0xFFFF);
    lsw = (uint16_t) (~(configuration->wakeUpFrame[7].crc32) & 0xFFFF);

    /* bit reverse each byte through a sequence of bit, 2-bit, and nibble swaps */
    msw = (((msw & 0xaaaaaaaa) >> 1) | ((msw & 0x55555555) << 1));
    msw = (((msw & 0xcccccccc) >> 2) | ((msw & 0x33333333) << 2));
    msw = (((msw & 0xf0f0f0f0) >> 4) | ((msw & 0x0f0f0f0f) << 4));
    lsw = (((lsw & 0xaaaaaaaa) >> 1) | ((lsw & 0x55555555) << 1));
    lsw = (((lsw & 0xcccccccc) >> 2) | ((lsw & 0x33333333) << 2));
    lsw = (((lsw & 0xf0f0f0f0) >> 4) | ((lsw & 0x0f0f0f0f) << 4));

    /* load the CRC word reversed */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_7Word_0, lsw);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_7Word_1, msw);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43B.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_7, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43A.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_6, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C439.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_5, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C438.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_4, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C437.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_3, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C436.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_2, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C435.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_1, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C434.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameMask_7Word_0, 0x0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43C.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_7Word_0, 0xFFFF);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C43D.F:0) */
    AQ_API_Set(port->PHY_ID, AQ_GbePhyExtendedWolControl, wakeUpFrameCrc_7Word_1, 0xFFFF);
  }

  /* magic packet frame: remember to byte reverse the MAC address */
  i = ((configuration->magicPacketFrame.filter0 & 0xFF00) >> 8) | ((configuration->magicPacketFrame.filter0 & 0x00FF) << 8);
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C339.F:0) */
  AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, magicPacketFramePatternWord_0, i);
  i = ((configuration->magicPacketFrame.filter1 & 0xFF00) >> 8) | ((configuration->magicPacketFrame.filter1 & 0x00FF) << 8);
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C33A.F:0) */
  AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, magicPacketFramePatternWord_1, i);
  i = ((configuration->magicPacketFrame.filter2 & 0xFF00) >> 8) | ((configuration->magicPacketFrame.filter2 & 0x00FF) << 8);
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C33B.F:0) */
  AQ_API_Set(port->PHY_ID, AQ_GbePhyWolControl, magicPacketFramePatternWord_2, i);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      i = configuration->magicPacketFrame.enable ? 1 : 0;
      /* REGDOC: Read-Modify-Write bitfield (APPIA/HHD: 1D.C338.0) */
      AQ_API_Set_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhyWolControl, 
          magicPacketFrameDetectionEnable, i);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }

  return AQ_RET_OK;
}



AQ_Retcode AQ_API_GetOperatingModes
(
  AQ_API_Port* port,
  AQ_API_10G_SystemOperatingMode* _10G_SystemOperatingMode,
  AQ_API_10G_NetworkOperatingMode* _10G_NetworkOperatingMode,
  AQ_API_1G_NetworkOperatingMode* _1G_NetworkOperatingMode
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(APPIA_HHD, 
      AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, sysConfigReg)
  AQ_API_DeclareLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
      AQ_GlobalSystemConfigurationFor10G, _10GSysConfigReg)


  /* Get system interface operating modes */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA: 
    case AQ_DEVICE_HHD:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(APPIA_HHD, sysConfigReg, 1,
          /* REGDOC: Read register (APPIA/HHD: 04.C440 + 1) */
          AQ_API_ReadRegister_DeviceRestricted(APPIA_HHD, port->PHY_ID, 
            AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 1));
              /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.C441.F:E) */
      switch (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, 
            AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, sysConfigReg, systemI_f10G_OperatingMode))
      {
        case 0x0: /* XAUI */
          *_10G_SystemOperatingMode = AQ_API_10G_SOM_XAUI;
          break;
        case 0x1: /* RXAUI */
                  /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.C441.5) */
          switch (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, 
                AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, sysConfigReg, rxauiOperatingMode))
          {
            case 0x0: /* Marvell */
              *_10G_SystemOperatingMode = AQ_API_10G_SOM_RXAUI_Marvell;
              break;
            case 0x1: /* Dune */
              *_10G_SystemOperatingMode = AQ_API_10G_SOM_RXAUI_Dune;
              break;
            default:
              *_10G_SystemOperatingMode = AQ_API_10G_SOM_Other;
          }
          break;
        case 0x2: /* XFI */
          *_10G_SystemOperatingMode = AQ_API_10G_SOM_XFI;
          break;
        default:
          *_10G_SystemOperatingMode = AQ_API_10G_SOM_Other;
      }
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, _10GSysConfigReg, 0,
          /* REGDOC: Read register (EUR/CAL/RHEA: 1E.031F) */
          AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, 
            AQ_GlobalSystemConfigurationFor10G, 0));
              /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 1E.031F.2:0) */
      switch (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_GlobalSystemConfigurationFor10G, _10GSysConfigReg, serdesMode))
      {
        case 0x0:
          *_10G_SystemOperatingMode = AQ_API_10G_SOM_XFI;
          break;
        default:
          *_10G_SystemOperatingMode = AQ_API_10G_SOM_Other;
      }
      break;
  }

  /* Get network interface operating modes */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA: 
    case AQ_DEVICE_HHD:
              /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.C441.8:6) */
      switch (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, 
            AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, sysConfigReg, phyOperatingMode))
      {
        case 0x0: /* "Normal" network mode */
          *_10G_NetworkOperatingMode = AQ_API_10G_NOM_10GBASE_T;
          *_1G_NetworkOperatingMode = AQ_API_1G_NOM_1000BASE_T; 
          break;
        case 0x1: /* Look-aside mode */
          *_10G_NetworkOperatingMode = AQ_API_10G_NOM_XFI;
          *_1G_NetworkOperatingMode = AQ_API_1G_NOM_1000BASE_X; 
          break;
        default:
          *_10G_NetworkOperatingMode = AQ_API_10G_NOM_Other;
          *_1G_NetworkOperatingMode = AQ_API_1G_NOM_Other;
      }
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* Lookaside mode not supported in EUR */
      *_10G_NetworkOperatingMode = AQ_API_10G_NOM_10GBASE_T;
      *_1G_NetworkOperatingMode = AQ_API_1G_NOM_1000BASE_T;
      break;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetStaticConfiguration
(
  AQ_API_Port* port,
  AQ_API_StaticConfiguration* configuration
)
{
  AQ_API_Variable(AQ_GlobalPinStatus)
  AQ_API_Variable(AQ_GlobalFirmwareID)
  AQ_API_Variable(AQ_GlobalReservedStatus)
  AQ_API_Variable_DeviceRestricted(APPIA_HHD, AQ_AutonegotiationReservedVendorProvisioning)
  AQ_API_Variable(AQ_GlobalNvrProvisioning)
  AQ_API_Variable(AQ_PmaReceiveReservedVendorProvisioning)
  AQ_API_Variable(AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning)
  AQ_API_Variable(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning)
  AQ_API_Variable(AQ_GlobalGeneralProvisioning)
  
  uint16_t i, j;
  uint32_t deviceID;


  /* firmware ID */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0020.F:8) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalFirmwareID, firmwareMajorRevisionNumber, i);
  configuration->firmwareMajorRevisionNumber = (uint8_t) i;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0020.7:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalFirmwareID, firmwareMinorRevisionNumber, i);
  configuration->firmwareMinorRevisionNumber = (uint8_t) i;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read bitfield (APPIA: 1E.C885.7:0) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_GlobalReservedStatus, romRevision, i);
      configuration->firmwareROM_ID_Number = (uint8_t) i;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.C885.3:0) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, provisioningID, i);
      configuration->firmwareROM_ID_Number = (uint8_t) i;
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.C885.7:4) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, firmwareBuildID, i);
      configuration->firmwareROM_ID_Number |= (uint8_t)(i << 4);
      break;
  }

  /* load the chip OUI and model, and revision */
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0002) */
  i = AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardDeviceIdentifier, 0);   /* MSW */
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0002 + 1) */
  j = AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardDeviceIdentifier, 1);   /* LSW */
  configuration->IEEE_ModelNumber = (j >> 4) & 0x3F;
  configuration->IEEE_RevisionNumber = j & 0xF;

  /* Load bits 3 - 24 of the OUI into deviceID.  Then, because the OUI is an ITU number, so everything is left to right
     ordered (inluding the hex notation - i.e. 0xAC = 00110101) so the bytes need to be bit reversed.  The cleverest
     way to implement this is a series of swaps.  The first one swaps the bits, the second - pairs of bits, and the
     third nibbles */
  deviceID = i;
  deviceID = (deviceID << 6) | (j >> 10);
  deviceID = (((deviceID & 0xaaaaaaaa) >> 1) | ((deviceID & 0x55555555) << 1));
  deviceID = (((deviceID & 0xcccccccc) >> 2) | ((deviceID & 0x33333333) << 2));
  configuration->OUI = (((deviceID & 0xf0f0f0f0) >> 4) | ((deviceID & 0x0f0f0f0f) << 4));
  
  /* get the configuration pin settings */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read bitfield (APPIA: 1E.C840.E:D) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_GlobalPinStatus, mdioBootLoad, i);
      if (i == 0x2) configuration->daisyChainSetting = AQ_API_DC_Master;
      else configuration->daisyChainSetting = AQ_API_DC_Slave;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.C840.D) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalPinStatus, dcMasterN, i);
      if (i == 0x0) configuration->daisyChainSetting = AQ_API_DC_Master;
      else configuration->daisyChainSetting = AQ_API_DC_Slave;
      break;
  }

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
      /* REGDOC: Read bitfield (APPIA/HHD/EUR: 1E.C840.7) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD_EUR, port->PHY_ID, AQ_GlobalPinStatus, txEnable, i);
      configuration->txEnable = i ? True : False;
      break;
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* TODO Calypso add: get confirmation */
      configuration->txEnable = True;
      break;
  }

  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C840.5:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalPinStatus, ledPullupState, j);
  for (i = 0; i < 6; i++) configuration->LED[i] = ((j >> i) & 0x1) ? True : False;

  /* get the 10G/1G operating modes. */
  AQ_API_GetOperatingModes(port, &(configuration->_10G_SystemOperatingMode), 
      &(configuration->_10G_NetworkOperatingMode), &(configuration->_1G_NetworkOperatingMode));

  /* get the flashClockDivisor */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C451.7:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalNvrProvisioning, nvrClockDivide, configuration->flashClockDivisor);

  /* clocks */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read bitfield (APPIA: 04.C440.C) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, _25MhzDisable, i);
      configuration->_25MHzOutputDisable = i ? True : False;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      configuration->_25MHzOutputDisable = False;
      break;
  }

  /* MDIO */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C441.4) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralProvisioning, mdioDriveConfiguration, i);
  configuration->mdioOpenDrain = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C441.3) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralProvisioning, mdioPreambleDetectionDisable, i);
  configuration->mdioPreambleSuppression = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C441.E) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralProvisioning, mdioBroadcastModeEnable, i);
  configuration->address0_BroadcastEnable = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C441.D) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralProvisioning, mdioReadMSW_FirstEnable, i);
  configuration->MSW_ReadFirst = i ? True : False;

  /* MDI */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.E400.0) */
  AQ_API_Get(port->PHY_ID, AQ_PmaReceiveReservedVendorProvisioning, mdiConfiguration, i);
  configuration->mdiSwap = i ? True : False;

  /* XFI0 interface lane inversion */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* Since we're dealing only with "normal" XFI and lookaside XFI modes, XFI1 is 
       * implicitly the system XFI interface, and XFI0 is implicitly the lookaside
       * XFI interface. */
      /* REGDOC: Read bitfield (HHD/APPIA: 04.E411.A) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, lookasidePortTxInvert, i);
      configuration->XFI0_TxInvert = i ? True : False;
      /* REGDOC: Read bitfield (HHD/APPIA: 04.C443.A) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, lookasidePortRxInvert, i);
      configuration->XFI0_RxInvert = i ? True : False;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 04.E411.B) */
      AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, 
          systemKrTxInvert, i);
      configuration->XFI0_TxInvert = i ? True : False;
      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 04.C443.B) */
      AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
          systemKrRxInvert, i);
      configuration->XFI0_RxInvert =  i ? True : False;
      break;
  }

  /* XFI1 interface lane inversion */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read bitfield (APPIA: 04.E411.B) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, 
          systemXfiTxInvert, i);
      configuration->XFI1_TxInvert = i ? True : False;
      /* REGDOC: Read bitfield (APPIA: 04.C443.B) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
          systemXfiRxInvert, i);
      configuration->XFI1_RxInvert =  i ? True : False;
      break;

    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (HHD: 04.E411.B) */
      AQ_API_Get_DeviceRestricted(HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, 
          systemKrTxInvert, i);
      configuration->XFI1_TxInvert = i ? True : False;
      /* REGDOC: Read bitfield (HHD: 04.C443.B) */
      AQ_API_Get_DeviceRestricted(HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
          systemKrRxInvert, i);
      configuration->XFI1_RxInvert =  i ? True : False;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* No XFI1 in EUR */
      configuration->XFI1_TxInvert = False;
      configuration->XFI1_RxInvert = False;
      break;
  }

  /* get the XAUI Tx connectivity */                                                                                                              
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (HHD/APPIA: 04.E410.9:8) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, xauiTxLane_0Serdes, 
          configuration->XAUI_TxLane0_SERDES);
      /* REGDOC: Read bitfield (HHD/APPIA: 04.E410.B:A) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, xauiTxLane_1Serdes, 
          configuration->XAUI_TxLane1_SERDES);
      /* REGDOC: Read bitfield (HHD/APPIA: 04.E410.D:C) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, xauiTxLane_2Serdes, 
          configuration->XAUI_TxLane2_SERDES);
      /* REGDOC: Read bitfield (HHD/APPIA: 04.E410.F:E) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, xauiTxLane_3Serdes, 
          configuration->XAUI_TxLane3_SERDES);
      /* REGDOC: Read bitfield (HHD/APPIA: 04.E410.7:4) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, xauiTxLaneInvert, i);
      configuration->XAUI_TxLane0_Invert = (i & 0x1) ? True : False;
      configuration->XAUI_TxLane1_Invert = (i & 0x2) ? True : False;
      configuration->XAUI_TxLane2_Invert = (i & 0x4) ? True : False;
      configuration->XAUI_TxLane3_Invert = (i & 0x8) ? True : False;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* No XAUI in EUR */
      configuration->XAUI_TxLane0_SERDES = 0;
      configuration->XAUI_TxLane1_SERDES = 0;
      configuration->XAUI_TxLane2_SERDES = 0;
      configuration->XAUI_TxLane3_SERDES = 0;
      configuration->XAUI_TxLane0_Invert = False;
      configuration->XAUI_TxLane1_Invert = False;
      configuration->XAUI_TxLane2_Invert = False;
      configuration->XAUI_TxLane3_Invert = False;
      break;
  }

  /* get the XAUI Rx connectivity */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (HHD/APPIA: 04.C442.9:8) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, xauiRxLane_0Serdes, 
          configuration->XAUI_RxLane0_SERDES);
      /* REGDOC: Read bitfield (HHD/APPIA: 04.C442.B:A) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, xauiRxLane_1Serdes, 
          configuration->XAUI_RxLane1_SERDES);
      /* REGDOC: Read bitfield (HHD/APPIA: 04.C442.D:C) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, xauiRxLane_2Serdes, 
          configuration->XAUI_RxLane2_SERDES);
      /* REGDOC: Read bitfield (HHD/APPIA: 04.C442.F:E) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, xauiRxLane_3Serdes, 
          configuration->XAUI_RxLane3_SERDES);
      /* REGDOC: Read bitfield (HHD/APPIA: 04.C442.7:4) */
      AQ_API_Get_DeviceRestricted(HHD_APPIA, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, xauiRxLaneInvert, i);
      configuration->XAUI_RxLane0_Invert = (i & 0x1) ? True : False; 
      configuration->XAUI_RxLane1_Invert = (i & 0x2) ? True : False; 
      configuration->XAUI_RxLane2_Invert = (i & 0x4) ? True : False; 
      configuration->XAUI_RxLane3_Invert = (i & 0x8) ? True : False; 
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* No XAUI in EUR */
      configuration->XAUI_RxLane0_SERDES = 0;
      configuration->XAUI_RxLane1_SERDES = 0;
      configuration->XAUI_RxLane2_SERDES = 0;
      configuration->XAUI_RxLane3_SERDES = 0;
      configuration->XAUI_RxLane0_Invert = False;
      configuration->XAUI_RxLane1_Invert = False;
      configuration->XAUI_RxLane2_Invert = False;
      configuration->XAUI_RxLane3_Invert = False;
      break;
  }

  /* get the RXAUI connectivity */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* get the RXAUI Tx connectivity */                                                                                                              
      /* REGDOC: Read bitfield (APPIA: 04.E411.E) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, rxauiTxLane_0Serdes, 
          configuration->RXAUI_TxLane0_SERDES);
      /* REGDOC: Read bitfield (APPIA: 04.E411.F) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, rxauiTxLane_1Serdes, 
          configuration->RXAUI_TxLane1_SERDES);
      /* REGDOC: Read bitfield (APPIA: 04.E411.D:C) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, rxauiTxLaneInvert, i);
      configuration->RXAUI_TxLane0_Invert = (i & 0x1) ? True : False;
      configuration->RXAUI_TxLane1_Invert = (i & 0x2) ? True : False;

      /* get the RXAUI Rx connectivity */
      /* REGDOC: Read bitfield (APPIA: 04.C443.E) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, rxauiRxLane_0Serdes, 
          configuration->RXAUI_RxLane0_SERDES);
      /* REGDOC: Read bitfield (APPIA: 04.C443.F) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, rxauiRxLane_1Serdes, 
          configuration->RXAUI_RxLane1_SERDES);
      /* REGDOC: Read bitfield (APPIA: 04.C443.D:C) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, rxauiRxLaneInvert, i);
      configuration->RXAUI_RxLane0_Invert = (i & 0x1) ? True : False; 
      configuration->RXAUI_RxLane1_Invert = (i & 0x2) ? True : False; 
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* For 28nm PHYs, the XAUI lane mapping and inversion controls are also used for RXAUI. */
      configuration->RXAUI_TxLane0_SERDES = configuration->XAUI_TxLane0_SERDES;
      configuration->RXAUI_TxLane1_SERDES = configuration->XAUI_TxLane1_SERDES;
      configuration->RXAUI_TxLane0_Invert = configuration->XAUI_TxLane0_Invert;
      configuration->RXAUI_TxLane1_Invert = configuration->XAUI_TxLane1_Invert;
      configuration->RXAUI_RxLane0_SERDES = configuration->XAUI_RxLane0_SERDES;
      configuration->RXAUI_RxLane1_SERDES = configuration->XAUI_RxLane1_SERDES;
      configuration->RXAUI_RxLane0_Invert = configuration->XAUI_RxLane0_Invert;
      configuration->RXAUI_RxLane1_Invert = configuration->XAUI_RxLane1_Invert;
      break;
  }

  /* SGMII lane mapping and inversion */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (APPIA/HHD: 04.E410.3:2) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, systemSgmiiTxSerdes, 
          configuration->SGMII_TxSERDES);
      /* REGDOC: Read bitfield (APPIA/HHD: 04.C442.3:2) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, 
          AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, systemSgmiiRxSerdes, 
          configuration->SGMII_RxSERDES);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      configuration->SGMII_TxSERDES = 0;
      configuration->SGMII_RxSERDES = 0;
      break;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.E410.1) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, systemSgmiiTxInvert, i);
  configuration->SGMII_TxInvert = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.C442.1) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, systemSgmiiRxInvert, i);
  configuration->SGMII_RxInvert = i ? True : False;

  /* Start mode for the system interface */
  /* REGDOC: Read bitfield (APPIA: 07.C410.F:E) (HHD: 07.C410.F:D) */
  AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, 
      AQ_AutonegotiationReservedVendorProvisioning, serdesStart_upMode, i);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      switch (i) 
      { 
        case 0x0: 
          configuration->_10G_StartMode = AQ_API_SSSM_10G_On; 
          break; 

        case 0x1: 
          configuration->_10G_StartMode = AQ_API_SSSM_XSGMII_On; 
          break; 

        case 0x2: 
          configuration->_10G_StartMode = AQ_API_SSSM_1000BASE_X_On; 
          break; 

        case 0x3: 
          configuration->_10G_StartMode = AQ_API_SSSM_Off; 
          break; 
      } 
      break;

    case AQ_DEVICE_HHD:
      switch (i) 
      { 
        case 0x0: 
          configuration->_10G_StartMode = AQ_API_SSSM_10G_On; 
          break; 

        case 0x1: 
          configuration->_10G_StartMode = AQ_API_SSSM_Other; 
          break; 

        case 0x2: 
          configuration->_10G_StartMode = AQ_API_SSSM_XSGMII_On; 
          break; 

        case 0x3: 
          configuration->_10G_StartMode = AQ_API_SSSM_UXSGMII_On; 
          break; 

        case 0x4: 
          configuration->_10G_StartMode = AQ_API_SSSM_1000BASE_X_On; 
          break; 

        case 0x5: 
          configuration->_10G_StartMode = AQ_API_SSSM_Other; 
          break; 

        case 0x6: 
          configuration->_10G_StartMode = AQ_API_SSSM_Off; 
          break; 

        case 0x7: 
          configuration->_10G_StartMode = AQ_API_SSSM_Other; 
          break; 
      } 
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* 10G system startup mode is not applicable in EUR/CAL/RHEA */
      configuration->_10G_StartMode = AQ_API_SSSM_Other; 
      break;
  }
         
  return AQ_RET_OK;
}



/*@}*/


/*! \addtogroup chipStatus
  @{
*/

AQ_Retcode AQ_API_GetStatus
(
  AQ_API_Port* port,
  AQ_API_Status* status
)
{
  AQ_API_Variable (AQ_AutonegotiationReservedVendorStatus)
  AQ_API_Variable (AQ_GlobalThermalStatus)
  AQ_API_Variable (AQ_GlobalStandardControl_1)
  AQ_API_Variable (AQ_GlobalControl)
  
  unsigned int i;
  unsigned int hardReset = 0;
  unsigned int softReset;
  unsigned int runStall;
  unsigned int runStallOverride;
  uint32_t startAddress;
  uint32_t size;
  uint16_t temperatureReady;
  uint16_t temperature;
  uint8_t nullTerminatorFound = 0;
  uint8_t versionString[AQ_VERSION_STRING_SIZE];
  AQ_API_ConnectionState connectionState;


  /*get the temperature*/
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C821.0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalThermalStatus, temperatureReady, temperatureReady);
  if (temperatureReady)
  {
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C820.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_GlobalThermalStatus, temperature, temperature);
    temperature >>= 8;
    status->temperature = (temperature & 0x80) ? (temperature - 0x100) : temperature;
  }
  else status->temperature = -100;
 
  /* check the device status */
  /* connection state */
  /* check if we are in reset */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read bitfield (APPIA: 1E.0000.E) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_GlobalStandardControl_1, hardReset, hardReset);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      hardReset = 0;
      break;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0000.F) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalStandardControl_1, softReset, softReset);
  if (hardReset || softReset)
  {
    connectionState = AQ_API_ConnS_Reset;
      
    /* the uP is not running */
    status->loadedImageInformation.imageID_String[0] = 0x0;                  /* set up a null string */
    status->loadedImageInformation.imageMajorRevisionNumber = 0;
    status->loadedImageInformation.imageMinorRevisionNumber = 0;
    status->loadedImageInformation.imageROM_ID_Number = 0;
    status->loadedImageInformation.programmed = False;
    return AQ_RET_OK;
  }
  else
  {
    /* check if we are in stalled */
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
    AQ_API_Get(port->PHY_ID, AQ_GlobalControl, upRunStall, runStall);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
    AQ_API_Get(port->PHY_ID, AQ_GlobalControl, upRunStallOverride, runStallOverride);

    if (runStallOverride && runStall)
    {
      connectionState = AQ_API_ConnS_Stall;
      
      /* the uP is not running */
      status->loadedImageInformation.imageID_String[0] = 0x0;                  /* set up a null string */
      status->loadedImageInformation.imageMajorRevisionNumber = 0;
      status->loadedImageInformation.imageMinorRevisionNumber = 0;
      status->loadedImageInformation.imageROM_ID_Number = 0;
      status->loadedImageInformation.programmed = False;
      return AQ_RET_OK;
    }
    else
    {
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
      AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReservedVendorStatus, connectionState, connectionState);
      if (connectionState > 0xB) connectionState = AQ_API_ConnS_Invalid;
    }
  }
   
  /* get the loaded firmware if the device is running */
  if ((connectionState != AQ_API_ConnS_Reset)
   && (connectionState != AQ_API_ConnS_Stall)
   && (connectionState != AQ_API_ConnS_Invalid))
  {
    /*-------------------------------------------------------------------------------------------------------------------------------------*/
    /*                                         Load the version string from DRAM                                                */
    /*-------------------------------------------------------------------------------------------------------------------------------------*/
    /* read the version string out of RAM */
    size = AQ_VERSION_STRING_SIZE;
    startAddress = AQ_DRAM_BASE_ADDRESS + AQ_VERSION_STRING_BLOCK_OFFSET;
    AQ_API_MemoryRead(port, versionString, size, startAddress);
    
    for (i = 0; i < 61; i++)
    {
      status->loadedImageInformation.imageID_String[i] = (char) (versionString[i]);
      if (versionString[i] == 0x0) nullTerminatorFound = 1;      /* check for the existance of a NULL terminator */
    }
    if (!nullTerminatorFound) status->loadedImageInformation.imageID_String[61] = 0x0;       /* write the NULL terminator if required */
    
    status->loadedImageInformation.imageMajorRevisionNumber = versionString[62];
    status->loadedImageInformation.imageMinorRevisionNumber = versionString[63];
    status->loadedImageInformation.imageROM_ID_Number = versionString[61];
    status->loadedImageInformation.programmed = True;
  }
  else
  {
    /* the uP is not running */
    status->loadedImageInformation.imageID_String[0] = 0x0;                  /* set up a null string */
    status->loadedImageInformation.imageMajorRevisionNumber = 0;
    status->loadedImageInformation.imageMinorRevisionNumber = 0;
    status->loadedImageInformation.imageROM_ID_Number = 0;
    status->loadedImageInformation.programmed = False;
  }
  
  return AQ_RET_OK;
}


AQ_Retcode AQ_API_HardReset
(
  AQ_API_Port* port
)
{
  AQ_API_Variable_DeviceRestricted(APPIA, AQ_GlobalStandardControl_1)
  AQ_API_Variable_DeviceRestricted(APPIA, AQ_GlobalAlarms)

  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalCommonPorControl)

  AQ_boolean junk = False;


  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* Clear reset-completed flag. */
      /* REGDOC: Read bitfield (APPIA: 1E.CC00.6) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_GlobalAlarms, resetCompleted, junk);

      /* Request a hard reset */
      /* REGDOC: Read-Modify-Write bitfield (APPIA: 1E.0000.E) */
      AQ_API_Set_DeviceRestricted(APPIA, port->PHY_ID, AQ_GlobalStandardControl_1, hardReset, 0x1);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* Request a hard reset */
      /* REGDOC: Read-Modify-Write bitfield (HHD/EUR/CAL/RHEA: 1E.2681.0) */
      AQ_API_Set_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalCommonPorControl, phyReset, 0x1);
      break;
  }

  /* Avoid set-but-not-used variable warnings (intentionally does nothing) */
  if (junk);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SoftReset
(
  AQ_API_Port* port
)
{
  AQ_API_Variable(AQ_GlobalStandardControl_1)
  AQ_API_Variable(AQ_GlobalAlarms)

  AQ_boolean junk;


  /* Clear reset-completed flag. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.6) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalAlarms, resetCompleted, junk);

  /* Request a soft reset */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0000.F) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalStandardControl_1, softReset, 0x1);

  /* Avoid set-but-not-used variable warnings (intentionally does nothing) */
  if (junk);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetLowPower
(
  AQ_API_Port* port
)
{
  AQ_API_DECLARE_UP_BUSY_VARS
  AQ_API_DeclareLocalStruct(AQ_GlobalStandardControl_1, gsc1)


  /* Set the low-power mode flag */
  AQ_API_AssignWordOfLocalStruct(gsc1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0000) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalStandardControl_1, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0000.B) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalStandardControl_1, gsc1, lowPower, 0x1);
  /* Make sure that we don't accidentally trigger a reset with our 
   * read-modify-write sequence. */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0000.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalStandardControl_1, gsc1, softReset, 0x0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Assign to local representation of bitfield (APPIA: 1E.0000.E) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_GlobalStandardControl_1, gsc1, hardReset, 0x0);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalStandardControl_1, 0,
      AQ_API_WordOfLocalStruct(gsc1, 0));
  AQ_API_CHECK_UP_NOT_BUSY

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}


AQ_Retcode AQ_API_SetHighImpedance
(
  AQ_API_Port* port
)
{
  AQ_API_DECLARE_UP_BUSY_VARS
  AQ_API_Variable(AQ_PmdStandardTransmitDisableControl)


  /* Set the tx-disable bit. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0009.0) */
  AQ_API_Set(port->PHY_ID, AQ_PmdStandardTransmitDisableControl, pmdGlobalTransmitDisable, 1);
  AQ_API_CHECK_UP_NOT_BUSY

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}


AQ_Retcode AQ_API_RestartAutonegotiation
(
  AQ_API_Port* port
)
{
  AQ_API_DECLARE_UP_BUSY_VARS
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationStandardControl_1, asc1)


  /* restart autoneg */
  AQ_API_AssignWordOfLocalStruct(asc1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0000) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationStandardControl_1, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0000.9) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardControl_1, asc1, restartAutonegotiation, 0x1);
  /* Make sure that we don't accidentally trigger a reset with our 
   * read-modify-write sequence. */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0000.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardControl_1, asc1, reset, 0x0);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.0000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationStandardControl_1, 0,
      AQ_API_WordOfLocalStruct(asc1, 0));
  AQ_API_CHECK_UP_NOT_BUSY

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}


AQ_Retcode AQ_API_SetActive
(
  AQ_API_Port* port
)
{
  AQ_API_DECLARE_UP_BUSY_VARS
  AQ_API_Variable (AQ_AutonegotiationReservedVendorProvisioning)
  AQ_API_Variable (AQ_GlobalControl)
  AQ_API_Variable (AQ_Pma10GBaseT_TestModes)
  AQ_API_Variable (AQ_PcsReceiveVendorDebug)
  AQ_API_Variable (AQ_PhyXS_StandardXGXS_TestControl)
  AQ_API_Variable_DeviceRestricted (APPIA_HHD, AQ_PhyXS_Receive_xauiTx_VendorDebug)
  AQ_API_Variable (AQ_PhyXS_Transmit_xauiRx_VendorDebug)
  AQ_API_Variable (AQ_GbeReservedProvisioning)
  AQ_API_Variable_DeviceRestricted (APPIA_HHD, AQ_GbePhyWolControl)
  
  AQ_API_DeclareLocalStruct(AQ_GlobalStandardControl_1, gsc1)
  AQ_API_DeclareLocalStruct(AQ_PmaStandardControl_1, pmasc1)
  AQ_API_DeclareLocalStruct(AQ_PcsStandardControl_1, pcssc1)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1)

  uint16_t isStalled;
  AQ_Retcode retval = AQ_RET_OK;


  /* If processor is stalled, release the processor 
   * Doing this without this test causes the PHY to get stuck in
   * reset after performing a soft reset. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalControl, upRunStall, isStalled);
  if (isStalled)
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
    AQ_API_Set(port->PHY_ID, AQ_GlobalControl, upRunStall, 0);
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
    AQ_API_Set(port->PHY_ID, AQ_GlobalControl, upRunStallOverride, 1);
  }

  /*clear the low power / high-impedance states*/
  AQ_API_AssignWordOfLocalStruct(gsc1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0000) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalStandardControl_1, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0000.B) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalStandardControl_1, gsc1, lowPower, 0x0);
  /* Make sure that we don't accidentally trigger a reset with our 
   * read-modify-write sequence. */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0000.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalStandardControl_1, gsc1, softReset, 0x0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Assign to local representation of bitfield (APPIA: 1E.0000.E) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_GlobalStandardControl_1, gsc1, hardReset, 0x0);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalStandardControl_1, 0,
      AQ_API_WordOfLocalStruct(gsc1, 0));

  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 01.0009) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PmdStandardTransmitDisableControl, 0, 0x0000);
  AQ_API_CHECK_UP_NOT_BUSY

  /* clear any test modes */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
  AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0);
  AQ_API_CHECK_UP_NOT_BUSY

  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0019.2) */
  AQ_API_Set(port->PHY_ID, AQ_PhyXS_StandardXGXS_TestControl, receiveTest_PatternEnable, 0);
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D800.A) */
  AQ_API_Set(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorDebug, testPatternCheckEnable, 0);
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D801.3:0) */
  AQ_API_Set(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorDebug, testPatternChannelSelect, 0x0);
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
  AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x0);
  AQ_API_CHECK_UP_NOT_BUSY
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
  AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, 0x0);
  AQ_API_CHECK_UP_NOT_BUSY

  /* clear any loopbacks */
  /* PMA*/
  AQ_API_AssignWordOfLocalStruct(pmasc1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmasc1, loopback, 0x0);
  /* Make sure that we don't accidentally trigger a reset with our 
   * read-modify-write sequence. */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmasc1, reset, 0x0);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0,
      AQ_API_WordOfLocalStruct(pmasc1, 0));
  AQ_API_CHECK_UP_NOT_BUSY

  /* PCS*/
  AQ_API_AssignWordOfLocalStruct(pcssc1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.0000) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PcsStandardControl_1, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.0000.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PcsStandardControl_1, pcssc1, loopback, 0x0);
  /* Make sure that we don't accidentally trigger a reset with our 
   * read-modify-write sequence. */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.0000.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PcsStandardControl_1, pcssc1, reset, 0x0);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.0000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsStandardControl_1, 0,
      AQ_API_WordOfLocalStruct(pcssc1, 0));
  AQ_API_CHECK_UP_NOT_BUSY
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F800.0) */
  AQ_API_Set(port->PHY_ID, AQ_PcsReceiveVendorDebug, pcsNetworkLoopback, 0);

  /* PHY_XS*/
  AQ_API_AssignWordOfLocalStruct(phyxssc1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.0000) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_StandardControl_1, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1, loopback, 0x0);
  /* Make sure that we don't accidentally trigger a reset with our 
   * read-modify-write sequence. */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1, reset, 0x0);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.0000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_StandardControl_1, 0,
      AQ_API_WordOfLocalStruct(phyxssc1, 0));
  AQ_API_CHECK_UP_NOT_BUSY

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read-Modify-Write bitfield (APPIA/HHD: 04.F802.E) */
      AQ_API_Set_DeviceRestricted(APPIA_HHD, port->PHY_ID, 
          AQ_PhyXS_Receive_xauiTx_VendorDebug, phyXS_SystemLoopbackEnable, 0);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }

  /* clear FW-managed loopback control */
  retval = AQ_API_SetFWManagedLoopbackControl(port, AQ_FWMLC_No_LB, AQ_FWMLRate_Auto);

  /* clear any WoL and disable the filters */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.6) */
  AQ_API_Set(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, wolEnable, 0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read-Modify-Write bitfield (APPIA/HHD: 1D.C305.0) */
      AQ_API_Set_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhyWolControl, 
          wakeUpFrameDetectionEnable, 0);
      /* REGDOC: Read-Modify-Write bitfield (APPIA/HHD: 1D.C338.0) */
      AQ_API_Set_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhyWolControl, 
          magicPacketFrameDetectionEnable, 0);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }

  AQ_API_RETURN_UP_BUSY(retval)
}

/*@}*/


/**********************************************************************************************************************
*                                               Connection Status
**********************************************************************************************************************/

/*! \addtogroup connectionStatus
  @{
*/

AQ_Retcode AQ_API_GetConnectionStatus
(
  AQ_API_Port* port,
  AQ_API_ConnectionStatus* connectionStatus
)
{
  AQ_API_Variable(AQ_Autonegotiation10GBaseT_StatusRegister)
  AQ_API_Variable(AQ_GlobalStandardControl_1)
  AQ_API_Variable(AQ_GlobalControl)
  AQ_API_Variable(AQ_AutonegotiationReservedVendorStatus)
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_SystemInterfaceConnectionStatus)

  AQ_API_DeclareLocalStruct(AQ_AutonegotiationVendorStatus, angVendorStatus)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationReservedVendorStatus, angReservedVendorStatus)

  uint16_t i; 
  uint16_t runStallOverride; 
  uint16_t runStall; 
  uint16_t hardReset = 0; 
  uint16_t softReset;
  uint16_t systemInterfaceInUse;
  uint16_t systemInterfaceRate;
  uint16_t systemInterfaceAutonegStatus;
  uint16_t txReady;
  uint16_t rxLinkUp;


  /* load the 2 ANG state registers */
  AQ_API_AssignWordOfLocalStruct(angVendorStatus, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.C800) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationVendorStatus, 0));
  AQ_API_AssignWordOfLocalStruct(angReservedVendorStatus, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.C810) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationReservedVendorStatus, 0));

  /* energy on line */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.F) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
        angReservedVendorStatus, energyOnLine)) 
    connectionStatus->energyOnLine = True;
  else 
    connectionStatus->energyOnLine = False;

  /* far end device exists */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.E) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
        angReservedVendorStatus, devicePresent)) 
    connectionStatus->farEndDeviceExists = True;
  else 
    connectionStatus->farEndDeviceExists = False;

  /* number of connection attempts */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C811.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReservedVendorStatus, 
      autonegotiationAttempts, connectionStatus->numberOfConnectionAttempts);

  /* connection state */
  /* check if we are in reset */
  switch (port->device)
  { 
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read bitfield (APPIA: 1E.0000.E) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_GlobalStandardControl_1, hardReset, hardReset);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      hardReset = 0;
      break;
  }

  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0000.F) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalStandardControl_1, softReset, softReset);
  if (hardReset || softReset)
  {
    connectionStatus->state = AQ_API_ConnS_Reset;
  }
  else
  {
    /* check if we are in stalled */
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
    AQ_API_Get(port->PHY_ID, AQ_GlobalControl, upRunStall, runStall);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
    AQ_API_Get(port->PHY_ID, AQ_GlobalControl, upRunStallOverride, runStallOverride);

    if (runStallOverride && runStall)
    {
      connectionStatus->state = AQ_API_ConnS_Stall;
    }
    else
    {
              /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
      switch (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
            angReservedVendorStatus, connectionState))
      {
        case 0x0: connectionStatus->state = AQ_API_ConnS_Inactive;  break;
        case 0x1: connectionStatus->state = AQ_API_ConnS_CableDiagnostics; break;
        case 0x2:
                  /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
          switch (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
                angVendorStatus, connectRate))
          {
            case 0x0: 
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;
                
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_10M_Autoneg; 
                  break;
              }
            break;

            case 0x1: connectionStatus->state = AQ_API_ConnS_100M_Autoneg; break;
            case 0x2: connectionStatus->state = AQ_API_ConnS_1G_Autoneg; break;
            case 0x3: connectionStatus->state = AQ_API_ConnS_10G_Autoneg; break;
            case 0x4: 
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;

                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_2_5G_Autoneg;

                  break;
              }
              break;
            case 0x5:
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;

                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_5G_Autoneg; 
                  break;
              }
              break;
            default:  connectionStatus->state = AQ_API_ConnS_Invalid; break;
          }
          break;
    
        case 0x3:
                  /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
          switch (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
                angVendorStatus, connectRate))
          {
            case 0x0: 
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;
                
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_10M_Training; 
                  break;
              }
            break;

            case 0x1: connectionStatus->state = AQ_API_ConnS_100M_Training; break;
            case 0x2: connectionStatus->state = AQ_API_ConnS_1G_Training; break;
            case 0x3: connectionStatus->state = AQ_API_ConnS_10G_Training; break;
            case 0x4: 
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;

                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_2_5G_Training; 
                  break;
              }
              break;
            case 0x5:
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;

                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_5G_Training; 
                  break;
              }
              break;
            default:  connectionStatus->state = AQ_API_ConnS_Invalid; break;
          }
          break;
    
        case 0x4:
                  /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
          switch (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
                angVendorStatus, connectRate))
          {
            case 0x0: 
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;
                
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_10M_Connected; 
                  break;
              }
              break;

            case 0x1: connectionStatus->state = AQ_API_ConnS_100M_Connected; break;
            case 0x2: connectionStatus->state = AQ_API_ConnS_1G_Connected; break;
            case 0x3: connectionStatus->state = AQ_API_ConnS_10G_Connected; break;
            case 0x4: 
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;

                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_2_5G_Connected; 
                  break;
              }
              break;
            case 0x5:
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;

                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_5G_Connected; 
                  break;
              }
              break;
            default:  connectionStatus->state = AQ_API_ConnS_Invalid; break;
          }
          break;
    
        case 0x5: connectionStatus->state = AQ_API_ConnS_LinkBreak; break;
        case 0x6: connectionStatus->state = AQ_API_ConnS_TestMode; break;
        case 0x7: connectionStatus->state = AQ_API_ConnS_LoopbackMode; break;
        case 0x8: connectionStatus->state = AQ_API_ConnS_LowPowerMode; break;
        case 0x9:
                  /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
          switch (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
                angVendorStatus, connectRate))
          {
            case 0x0:
              switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                case AQ_DEVICE_HHD:
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                  connectionStatus->state = AQ_API_ConnS_Invalid;
                  break;

                case AQ_DEVICE_RHEA:
                  connectionStatus->state = AQ_API_ConnS_10M_WoL_Connected; 
                  break;
              }
              break;
              
            case 0x1: connectionStatus->state = AQ_API_ConnS_100M_WoL_Connected; break;
            case 0x2: connectionStatus->state = AQ_API_ConnS_1G_WoL_Connected; break;
            default:  connectionStatus->state = AQ_API_ConnS_Invalid; break;
          }
          break;

        case 0xA: connectionStatus->state = AQ_API_ConnS_SystemCalibrating; break;
        case 0xB: connectionStatus->state = AQ_API_ConnS_CableDisconnected; break;
        
        case 0x1F:
        default:  connectionStatus->state = AQ_API_ConnS_Invalid; break;
      }
    }
  }

  /* duplex */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C800.0) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
        angVendorStatus, connectType)) 
    connectionStatus->duplex = True;
  else 
    connectionStatus->duplex = False;

  /* MDI / MDI-X */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
        angReservedVendorStatus, connectionState) == 0x3  || 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
      AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
        angReservedVendorStatus, connectionState) == 0x4)
  {
    connectionStatus->MDI_MDI_X = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.8) */
      AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
          angReservedVendorStatus, mdi_mdi_x) 
      ? AQ_API_MS_MDI_X : AQ_API_MS_MDI;
  }
  else connectionStatus->MDI_MDI_X = AQ_API_MS_None;

  /* master / slave status */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0021.E) */
  AQ_API_Get(port->PHY_ID, AQ_Autonegotiation10GBaseT_StatusRegister, 
      master_slaveConfigurationResolution, i);
  connectionStatus->masterSlaveStatus = i ? AQ_API_MSS_Master : AQ_API_MSS_Slave;

  /* system interface status (HHD only, requires FW support) */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_Other;
      connectionStatus->sysIntfCurrentRate = AQ_API_SIR_Other;
      connectionStatus->sysIntfAutonegStatus = AQ_API_SIAS_Other;
      connectionStatus->txReady = False;
      connectionStatus->rxLinkUp = False;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* system interface operating mode */
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 04.E812.7:3) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_SystemInterfaceConnectionStatus, 
          systemInterfaceInUse, systemInterfaceInUse);
      switch (systemInterfaceInUse)
      {
        case 0x0:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_BackplaneKR; break;

        case 0x1:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_BackplaneKX; break;

        case 0x2:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_XFI; break;

        case 0x3:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_USXGMII; break;

        case 0x4:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_XAUI; break;

        case 0x5:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_XAUI_PauseBased; break;

        case 0x6:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_SGMII; break;

        case 0x7:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_RXAUI; break;

        case 0x8:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_MAC; break;

        case 0x9:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_OFF; break;

        case 0xA:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_OCSGMII; break;

        case 0xB:
          switch (port->device){
            case AQ_DEVICE_RHEA:
            case AQ_DEVICE_CAL:
              connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_XFI_5G; break;
            default:
              connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_Other;
          }
          break;

        case 0xC:
          switch (port->device){
            case AQ_DEVICE_RHEA:
            case AQ_DEVICE_CAL:
              connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_USX_5G; break;
            default:
              connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_Other;
          }
          break;

        case 0xD:
          switch (port->device){
            case AQ_DEVICE_RHEA:
              connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_XFI_20G; break;
            default:
              connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_Other;
          }
          break;

        case 0xE:
          switch (port->device){
            case AQ_DEVICE_RHEA:
              connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_USX_20G; break;
            default:
              connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_Other;
          }
          break;

        default:
          connectionStatus->sysIntfCurrentMode = AQ_API_SIOM_Other;
      }

      /* system interface operating mode */
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 04.E812.B:8) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_SystemInterfaceConnectionStatus, 
          systemInterfaceRate, systemInterfaceRate);

      switch (systemInterfaceRate)
      {
        case 0x0:
          switch (port->device)
              {
                case AQ_DEVICE_APPIA:
                connectionStatus->sysIntfCurrentRate = AQ_API_ConnS_Invalid;
                  break;
                  
                case AQ_DEVICE_HHD:
                  connectionStatus->sysIntfCurrentRate = AQ_API_SIR_10M;
                  break;
                
                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                case AQ_DEVICE_RHEA:
                  connectionStatus->sysIntfCurrentRate = AQ_API_SIR_PowerDown; 
                  break;
              }
              break;

        case 0x1:
          connectionStatus->sysIntfCurrentRate = AQ_API_SIR_100M; break;

        case 0x2:
          connectionStatus->sysIntfCurrentRate = AQ_API_SIR_1G; break;

        case 0x3:
          connectionStatus->sysIntfCurrentRate = AQ_API_SIR_10G; break;

        case 0x4:
          connectionStatus->sysIntfCurrentRate = AQ_API_SIR_2_5G; break;

        case 0x5:
          connectionStatus->sysIntfCurrentRate = AQ_API_SIR_5G; break;

        case 0x6:
          switch (port->device)
              {
                case AQ_DEVICE_APPIA:                
                  connectionStatus->sysIntfCurrentRate = AQ_API_ConnS_Invalid;
                  break;

                case AQ_DEVICE_HHD:                
                  connectionStatus->sysIntfCurrentRate = AQ_API_SIR_PowerDown; 
                  break;

                case AQ_DEVICE_EUR:
                case AQ_DEVICE_CAL:
                  connectionStatus->sysIntfCurrentRate = AQ_API_SIR_Other; 
                  break;

                case AQ_DEVICE_RHEA:
                  connectionStatus->sysIntfCurrentRate = AQ_API_SIR_10M;
              }
              break;

        default:
          connectionStatus->sysIntfCurrentRate = AQ_API_SIR_Other;
      }

      /* system interface autoneg status */
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 04.E812.F:E) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_SystemInterfaceConnectionStatus, 
          systemInterfaceAutonegStatus, systemInterfaceAutonegStatus);
      switch (systemInterfaceAutonegStatus)
      {
        case 0x0:
          connectionStatus->sysIntfAutonegStatus = AQ_API_SIAS_NA; break;

        case 0x1:
          connectionStatus->sysIntfAutonegStatus = AQ_API_SIAS_NotComplete; break;

        case 0x2:
          connectionStatus->sysIntfAutonegStatus = AQ_API_SIAS_Complete; break;

        default:
          connectionStatus->sysIntfAutonegStatus = AQ_API_SIAS_Other;
      }

      /* system interface tx ready */
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 04.E812.C) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_SystemInterfaceConnectionStatus, 
          txReady, txReady);
      connectionStatus->txReady = (txReady) ? True : False;
      
      /* system interface rx ready */
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 04.E812.D) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_SystemInterfaceConnectionStatus, 
          rxLinkUp, rxLinkUp);
      connectionStatus->rxLinkUp = (rxLinkUp) ? True : False;

      break;
  }

  return AQ_RET_OK;
}


static AQ_boolean AQ_API_Get10G_ConnectionState
(
  /* The target PHY port */
  AQ_API_Port* port
)
{
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationVendorStatus, angVendorStatus)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationReservedVendorStatus, angReservedVendorStatus)
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PmaReceiveVendorState)


  AQ_boolean appropriateSpeed = False;
  AQ_boolean linked = False;
  unsigned int counter;
  unsigned int connectionRate;
  unsigned int rxLinkUp = 0;

  /* load the 2 ANG state registers so we can check what state we are in*/
  AQ_API_AssignWordOfLocalStruct(angVendorStatus, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.C800) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationVendorStatus, 0));
  AQ_API_AssignWordOfLocalStruct(angReservedVendorStatus, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.C810) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationReservedVendorStatus, 0));

  /* check that link is up */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
          angReservedVendorStatus, connectionState) == 0x4)
  {
    linked = True;
  }
  else
  {
    linked = False;
  }

  /* Sometimes even with above check the link doesn't show up. Adding another step to make sure the link is up */

  counter = 0;
  /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.E800.0) */
  AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PmaReceiveVendorState, pmaReceiveLinkCurrentStatus, rxLinkUp)

  while ( rxLinkUp != 1){
    if (counter < 3000){
      AQ_API_Wait(10, port);
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.E800.0) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PmaReceiveVendorState, pmaReceiveLinkCurrentStatus, rxLinkUp)
      counter++;
    }
    else{
    #ifdef AQ_VERBOSE
      AQ_API_Print("Timed out on getting a good Rx Link \n");
    #endif
      linked = False;
      break;
    }
  }

  /* check that we are connected at 10G */
      /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
          angVendorStatus, connectRate) == 0x3)
  {
    appropriateSpeed = True;
  }
  else
  {
    appropriateSpeed = False;
  }
  /* ...or 5G/2.5G */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
          /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
              angVendorStatus, connectRate) == 0x4 || 
          /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
          AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
              angVendorStatus, connectRate) == 0x5)
      {
        appropriateSpeed = True;
      }
      break;
  }

  if (linked && appropriateSpeed)
  {
    /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
    connectionRate = AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
          angVendorStatus, connectRate);

  #ifndef LESS_VERBOSE
    #ifdef AQ_VERBOSE
    
    switch (connectionRate)
    {
      case 0x3:
            AQ_API_Print("   Connected at 10G\n");
            break;
       case 0x4:
            AQ_API_Print("   Connected at 2.5G\n");
            break;
       case 0x5:
            AQ_API_Print("   Connected at 5G\n");
            break;
    }
    #endif
  #endif
    /* mark the the connection status as connected */
    return True;
  }

  /* we are not connected at 10G */
  return False;
}


AQ_Retcode AQ_API_Get10G_ConnectionStatus
(
  AQ_API_Port* port,
  AQ_API_10G_ConnectionStatus* connectionStatus
)
{
  AQ_API_Variable(AQ_GlobalGeneralProvisioning)
  AQ_API_Variable(AQ_Pma10GBaseT_SkewDelay)
  AQ_API_Variable(AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting)
  AQ_API_Variable(AQ_PcsReceiveVendorUncorrectedFrameCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCrc_8ErrorCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter)
  AQ_API_Variable_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Receive_xauiTx_PcsStatus)
  AQ_API_Variable_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_PcsStatus)
  AQ_API_Variable(AQ_PcsReceiveXfi0VendorState)
  AQ_API_Variable(AQ_PcsTransmitXfi0VendorState)
  AQ_API_Variable_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveXfi1VendorState)
  AQ_API_Variable_DeviceRestricted(APPIA_HHD, AQ_PcsTransmitXfi1VendorState)
  AQ_API_Variable(AQ_PcsTransmitVendorFcsNoErrorFrameCounter)
  AQ_API_Variable(AQ_PcsTransmitVendorFcsErrorFrameCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorFcsNoErrorFrameCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorFcsErrorFrameCounter)

  AQ_API_DeclareLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, swapStatus)
  AQ_API_DeclareLocalStruct(AQ_Pma10GBaseT_SkewDelay, skewDelay)

  uint64_t sum, weightedSum;
  uint32_t msw;
  uint16_t i; 
  uint16_t mswFirst = 0; 
  uint16_t lsw; 
  uint16_t roundAdjust;
  AQ_API_10G_SystemOperatingMode _10G_SystemOperatingMode;
  AQ_API_10G_NetworkOperatingMode _10G_NetworkOperatingMode;
  AQ_API_1G_NetworkOperatingMode _1G_NetworkOperatingMode;


  connectionStatus->connected = AQ_API_Get10G_ConnectionState(port);
  if (connectionStatus->connected)
  {
    /* check whether we are in LSW or MSW read first on the tandem counters - i.e. you have to read the snapshot word
       first to get a correct answer */
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C441.D) */
    AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralProvisioning, mdioReadMSW_FirstEnable, mswFirst);
    if (mswFirst)
    {
      /*MSW first*/
      /*add up the number of errored frames*/
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E821.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorUncorrectedFrameCounter, uncorrectedFrameCounterMSW, msw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E820.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorUncorrectedFrameCounter, uncorrectedFrameCounterLSW, lsw);
      connectionStatus->erroredLDPC_Frames = (msw << 16) | lsw;

      /*get the number of CRC errors*/
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E811.5:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCrc_8ErrorCounter, crc_8ErrorCounterMSW, msw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E810.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCrc_8ErrorCounter, crc_8ErrorCounterLSW, lsw);
      connectionStatus->erroredCRC_Frames = (msw << 16) | lsw;

      /*get the good 10G frames*/
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E841.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter, correctedFrames_1IterationCounterMSW, msw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E840.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter, correctedFrames_1IterationCounterLSW, lsw);
      connectionStatus->Iteration1_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum = (uint64_t)connectionStatus->Iteration1_CorrectedLDPC_Frames;
      weightedSum = (uint64_t)sum;

      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E843.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter, correctedFrames_2IterationCounterMSW, msw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E842.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter, correctedFrames_2IterationCounterLSW, lsw);
      connectionStatus->Iteration2_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum += (uint64_t)connectionStatus->Iteration2_CorrectedLDPC_Frames;
      weightedSum += 2 * (uint64_t)(connectionStatus->Iteration2_CorrectedLDPC_Frames);

      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E845.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter, correctedFrames_3IterationCounterMSW, msw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E844.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter, correctedFrames_3IterationCounterLSW, lsw);
      connectionStatus->Iteration3_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum += (uint64_t)connectionStatus->Iteration3_CorrectedLDPC_Frames;
      weightedSum += 3 * (uint64_t)(connectionStatus->Iteration3_CorrectedLDPC_Frames);

      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E847.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter, correctedFrames_4IterationCounterMSW, msw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E846.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter, correctedFrames_4IterationCounterLSW, lsw);
      connectionStatus->Iteration4_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum += (uint64_t)connectionStatus->Iteration4_CorrectedLDPC_Frames;
      weightedSum += 4 * (uint64_t)(connectionStatus->Iteration4_CorrectedLDPC_Frames);

      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E849.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter, correctedFrames_5IterationCounterMSW, msw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E848.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter, correctedFrames_5IterationCounterLSW, lsw);
      connectionStatus->Iteration5_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum += (uint64_t)connectionStatus->Iteration5_CorrectedLDPC_Frames;
      weightedSum += 5 * (uint64_t)(connectionStatus->Iteration5_CorrectedLDPC_Frames);
    }
    else
    {
      /*LSW first*/
      /*add up the number of errored frames*/
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E820.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorUncorrectedFrameCounter, uncorrectedFrameCounterLSW, lsw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E821.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorUncorrectedFrameCounter, uncorrectedFrameCounterMSW, msw);
      connectionStatus->erroredLDPC_Frames = (msw << 16) | lsw;

      /*get the number of CRC errors*/
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E810.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCrc_8ErrorCounter, crc_8ErrorCounterLSW, lsw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E811.5:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCrc_8ErrorCounter, crc_8ErrorCounterMSW, msw);
      connectionStatus->erroredCRC_Frames = (msw << 16) | lsw;

      /* get the good frames, reading the LSW first */
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E840.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter, correctedFrames_1IterationCounterLSW, lsw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E841.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter, correctedFrames_1IterationCounterMSW, msw);
      connectionStatus->Iteration1_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum =(uint64_t) connectionStatus->Iteration1_CorrectedLDPC_Frames;
      weightedSum = (uint64_t)sum;

      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E842.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter, correctedFrames_2IterationCounterLSW, lsw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E843.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter, correctedFrames_2IterationCounterMSW, msw);
      connectionStatus->Iteration2_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum += (uint64_t)connectionStatus->Iteration2_CorrectedLDPC_Frames;
      weightedSum += 2 * (uint64_t)(connectionStatus->Iteration2_CorrectedLDPC_Frames);

      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E844.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter, correctedFrames_3IterationCounterLSW, lsw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E845.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter, correctedFrames_3IterationCounterMSW, msw);
      connectionStatus->Iteration3_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum += (uint64_t)connectionStatus->Iteration3_CorrectedLDPC_Frames;
      weightedSum += 3 * (uint64_t)(connectionStatus->Iteration3_CorrectedLDPC_Frames);

      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E846.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter, correctedFrames_4IterationCounterLSW, lsw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E847.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter, correctedFrames_4IterationCounterMSW, msw);
      connectionStatus->Iteration4_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum += (uint64_t)connectionStatus->Iteration4_CorrectedLDPC_Frames;
      weightedSum += 4 * (uint64_t)(connectionStatus->Iteration4_CorrectedLDPC_Frames);

      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E848.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter, correctedFrames_5IterationCounterLSW, lsw);
      /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E849.F:0) */
      AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter, correctedFrames_5IterationCounterMSW, msw);
      connectionStatus->Iteration5_CorrectedLDPC_Frames = (msw << 16) | lsw;
      sum += (uint64_t)connectionStatus->Iteration5_CorrectedLDPC_Frames;
      weightedSum += 5 * (uint64_t)(connectionStatus->Iteration5_CorrectedLDPC_Frames);
    }

    /*get the rest of the LDPC counts which are non-tandem registers, so LSW / MSW read order doesn't matter*/
    /* REGDOC: Read bitfield (EUR/CAL/RHEA: 03.E84A.F:0) (HHD/APPIA: 03.E850.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter, correctedFrames_6IterationCounter, i);
    connectionStatus->Iteration6_CorrectedLDPC_Frames = i;
    sum += (uint64_t)connectionStatus->Iteration6_CorrectedLDPC_Frames;
    weightedSum += 6 * (uint64_t)(connectionStatus->Iteration6_CorrectedLDPC_Frames);

    /* REGDOC: Read bitfield (EUR/CAL/RHEA: 03.E84B.F:0) (HHD/APPIA: 03.E851.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter, correctedFrames_7IterationCounter, i);
    connectionStatus->Iteration7_CorrectedLDPC_Frames = i;
    sum += (uint64_t)connectionStatus->Iteration7_CorrectedLDPC_Frames;
    weightedSum += 7 * (uint64_t)(connectionStatus->Iteration7_CorrectedLDPC_Frames);

    /* REGDOC: Read bitfield (EUR/CAL/RHEA: 03.E84C.F:0) (HHD/APPIA: 03.E852.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter, correctedFrames_8IterationCounter, i);
    connectionStatus->Iteration8_CorrectedLDPC_Frames = i;
    sum += (uint64_t)connectionStatus->Iteration8_CorrectedLDPC_Frames;
    weightedSum += 8 * (uint64_t)(connectionStatus->Iteration8_CorrectedLDPC_Frames);

    connectionStatus->goodLDPC_Frames = (uint32_t)sum;

    /*compute the weighted average and round (avoid divide-by-zero on uint overflow)*/
    if (sum != 0)
    {
      connectionStatus->averageNumberOfIterations = (uint8_t) ((((20 * weightedSum) / sum) + 1) >> 1);
    }
    else
    {
      connectionStatus->averageNumberOfIterations = 10;
    }

    /* read the local PBO settings */
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0083.C:A) */
    AQ_API_Get(port->PHY_ID, AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting, txPowerBackoff, i);

    /* set the power based on the backoff from a nominal 4.2 dBm - the +2 corresponds to .2*/
    connectionStatus->transmitPower = (4 - 2*i) * 10 + 2;

    /* read the link partner PBO settings */
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0083.F:D) */
    AQ_API_Get(port->PHY_ID, AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting, linkPartnerTxPowerBackoff, i);

    /* set the power based on the backoff from a nominal 4.2 dBm - the +2 corresponds to .2 */
    connectionStatus->linkPartnerTransmitPower = (4 - 2*i) * 10 + 3;

    /* get the signal quality */
    connectionStatus->pairA_OperatingMargin = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0085) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_OperatingMarginChannelA, 0) - 0x8000;
    connectionStatus->pairB_OperatingMargin = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0086) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_OperatingMarginChannelB, 0) - 0x8000;
    connectionStatus->pairC_OperatingMargin = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0087) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_OperatingMarginChannelC, 0) - 0x8000;
    connectionStatus->pairD_OperatingMargin = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0088) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_OperatingMarginChannelD, 0) - 0x8000;

    /* connectivity */
    AQ_API_AssignWordOfLocalStruct(swapStatus, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0082) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 0));
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.1:0) */
    switch (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
          swapStatus, mdi_Md_xConnectionState))
    {
      case 0x0:
        /* full reversal */
        connectionStatus->pairA_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x8) ? 
          AQ_API_PS_PairB_Inverted : AQ_API_PS_PairB;
        connectionStatus->pairB_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x4) ? 
          AQ_API_PS_PairA_Inverted : AQ_API_PS_PairA;
        connectionStatus->pairC_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x2) ? 
          AQ_API_PS_PairD_Inverted : AQ_API_PS_PairD;
        connectionStatus->pairD_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x1) ? 
          AQ_API_PS_PairC_Inverted : AQ_API_PS_PairC;
        break;

      case 0x1:
        /* C/D swap */
        connectionStatus->pairA_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x8) ? 
          AQ_API_PS_PairA_Inverted : AQ_API_PS_PairA;
        connectionStatus->pairB_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x4) ? 
          AQ_API_PS_PairB_Inverted : AQ_API_PS_PairB;
        connectionStatus->pairC_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x2) ? 
          AQ_API_PS_PairD_Inverted : AQ_API_PS_PairD;
        connectionStatus->pairD_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x1) ? 
          AQ_API_PS_PairC_Inverted : AQ_API_PS_PairC;
        break;

      case 0x2:
        /* A/B swap */
        connectionStatus->pairA_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x8) ? 
          AQ_API_PS_PairB_Inverted : AQ_API_PS_PairB;
        connectionStatus->pairB_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x4) ? 
          AQ_API_PS_PairA_Inverted : AQ_API_PS_PairA;
        connectionStatus->pairC_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x2) ? 
          AQ_API_PS_PairC_Inverted : AQ_API_PS_PairC;
        connectionStatus->pairD_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x1) ? 
          AQ_API_PS_PairD_Inverted : AQ_API_PS_PairD;
        break;

      case 0x3:
        /* no swap */
        connectionStatus->pairA_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x8) ? 
          AQ_API_PS_PairA_Inverted : AQ_API_PS_PairA;
        connectionStatus->pairB_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x4) ? 
          AQ_API_PS_PairB_Inverted : AQ_API_PS_PairB;
        connectionStatus->pairC_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x2) ? 
          AQ_API_PS_PairC_Inverted : AQ_API_PS_PairC;
        connectionStatus->pairD_LogicalConnectivity = 
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0082.B:8) */
          (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_PairSwapAndPolarityStatus, 
                                        swapStatus, pairPolarity) & 0x1) ? 
          AQ_API_PS_PairD_Inverted : AQ_API_PS_PairD;
        break;
    }

    /* Pair Skew step 1: Convert pair skew bitfields from 7-bit 2's complement
     * representation to int16_t representation.  This value represents
     * the number of 1.25ns steps away from 0 delay. */
    /* Pair B */
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0091.E:8) */
    AQ_API_Get(port->PHY_ID, AQ_Pma10GBaseT_SkewDelay, skewDelayB, i);
    connectionStatus->pairB_RelativeSkew = (i & 0x40) ? (i - 0x80) : i;
    /* Pair C */
    AQ_API_AssignWordOfLocalStruct(skewDelay, 1, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0091 + 1) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SkewDelay, 1));
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0092.6:0) */
    i = AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_SkewDelay, skewDelay, skewDelayC);
    connectionStatus->pairC_RelativeSkew = (i & 0x40) ? (i - 0x80) : i;
    /* Pair D */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0092.E:8) */
    i = AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_SkewDelay, skewDelay, skewDelayD);
    connectionStatus->pairD_RelativeSkew = (i & 0x40) ? (i - 0x80) : i;

    /* Pair Skew step 2: Convert number of 1.25ns steps to ns, rounded 
     * away from 0. */
    /* Pair B */
    roundAdjust = (abs(connectionStatus->pairB_RelativeSkew) & 0x2) ? 1 : 0;
    if (connectionStatus->pairB_RelativeSkew < 0) roundAdjust = 0 - roundAdjust;
    connectionStatus->pairB_RelativeSkew = connectionStatus->pairB_RelativeSkew + 
      (connectionStatus->pairB_RelativeSkew / 4) + roundAdjust;
    /* Pair C */
    roundAdjust = (abs(connectionStatus->pairC_RelativeSkew) & 0x2) ? 1 : 0;
    if (connectionStatus->pairC_RelativeSkew < 0) roundAdjust = 0 - roundAdjust;
    connectionStatus->pairC_RelativeSkew = connectionStatus->pairC_RelativeSkew + 
      (connectionStatus->pairC_RelativeSkew / 4) + roundAdjust;
    /* Pair D */
    roundAdjust = (abs(connectionStatus->pairD_RelativeSkew) & 0x2) ? 1 : 0;
    if (connectionStatus->pairD_RelativeSkew < 0) roundAdjust = 0 - roundAdjust;
    connectionStatus->pairD_RelativeSkew = connectionStatus->pairD_RelativeSkew + 
      (connectionStatus->pairD_RelativeSkew / 4) + roundAdjust;
  }
  else
  {
    /* we are not connected at 10G: zero all the fields */
    connectionStatus->erroredLDPC_Frames = 0;
    connectionStatus->erroredCRC_Frames = 0;
    connectionStatus->Iteration1_CorrectedLDPC_Frames = 0;
    connectionStatus->Iteration2_CorrectedLDPC_Frames = 0;
    connectionStatus->Iteration3_CorrectedLDPC_Frames = 0;
    connectionStatus->Iteration4_CorrectedLDPC_Frames = 0;
    connectionStatus->Iteration5_CorrectedLDPC_Frames = 0;
    connectionStatus->Iteration6_CorrectedLDPC_Frames = 0;
    connectionStatus->Iteration7_CorrectedLDPC_Frames = 0;
    connectionStatus->Iteration8_CorrectedLDPC_Frames = 0;
    connectionStatus->goodLDPC_Frames = 0;
    connectionStatus->averageNumberOfIterations = 0;
    connectionStatus->transmitPower = 0;
    connectionStatus->linkPartnerTransmitPower = 0;
    connectionStatus->pairA_OperatingMargin = 0;
    connectionStatus->pairB_OperatingMargin = 0;
    connectionStatus->pairC_OperatingMargin = 0;
    connectionStatus->pairD_OperatingMargin = 0;
    connectionStatus->pairA_LogicalConnectivity = 0;
    connectionStatus->pairB_LogicalConnectivity = 0;
    connectionStatus->pairC_LogicalConnectivity = 0;
    connectionStatus->pairD_LogicalConnectivity = 0;
    connectionStatus->pairB_RelativeSkew = 0;
    connectionStatus->pairC_RelativeSkew = 0;
    connectionStatus->pairD_RelativeSkew = 0;
  }

  /* get the Ethernet frame counts - these may be operational regardless of the link conditions */
        
  /* Get the system interface good and bad packet counters.  The appropriate
   * set of counters to read is determined by the 10G system interface 
   * operating mode. */
  AQ_API_GetOperatingModes(port, &_10G_SystemOperatingMode, 
      &_10G_NetworkOperatingMode, &_1G_NetworkOperatingMode);

  switch (_10G_SystemOperatingMode)
  {
    case AQ_API_10G_SOM_XAUI:
    case AQ_API_10G_SOM_RXAUI_Marvell:
    case AQ_API_10G_SOM_RXAUI_Dune:
      switch (port->device)
      {
        case AQ_DEVICE_APPIA:
        case AQ_DEVICE_HHD:
          if (mswFirst)
          {
            /*get the good Rx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 04.E803.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_PcsStatus, rxFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (APPIA/HHD: 04.E802.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_PcsStatus, rxFrameCounterLSW, lsw);
            connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Rx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 04.E805.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_PcsStatus, rxFrameErrorCounterMSW, msw);
            /* REGDOC: Read bitfield (APPIA/HHD: 04.E804.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_PcsStatus, rxFrameErrorCounterLSW, lsw);
            connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;
          
            /*get the good Tx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 04.C803.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_PcsStatus, txFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (APPIA/HHD: 04.C802.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_PcsStatus, txFrameCounterLSW, lsw);
            connectionStatus->sysIntfGoodTxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Tx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 04.C805.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_PcsStatus, txFrameErrorCounterMSW, msw);
            /* REGDOC: Read bitfield (APPIA/HHD: 04.C804.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_PcsStatus, txFrameErrorCounterLSW, lsw);
            connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;
          }
          else
          {
            /*get the good Rx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 04.E802.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_PcsStatus, rxFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (APPIA/HHD: 04.E803.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_PcsStatus, rxFrameCounterMSW, msw);
            connectionStatus->sysIntfGoodRxEthernetFrames  = (msw << 16) | lsw;
          
            /*get the bad Rx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 04.E804.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_PcsStatus, rxFrameErrorCounterLSW, lsw);
            /* REGDOC: Read bitfield (APPIA/HHD: 04.E805.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_PcsStatus, rxFrameErrorCounterMSW, msw);
            connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;
          
            /*get the good Tx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 04.C802.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_PcsStatus, txFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (APPIA/HHD: 04.C803.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_PcsStatus, txFrameCounterMSW, msw);
            connectionStatus->sysIntfGoodTxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Tx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 04.C804.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_PcsStatus, txFrameErrorCounterLSW, lsw);
            /* REGDOC: Read bitfield (APPIA/HHD: 04.C805.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_PcsStatus, txFrameErrorCounterMSW, msw);
            connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;
          }
          break;

        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
        case AQ_DEVICE_RHEA:
          /* No XAUI frame counters in EUR */
          connectionStatus->sysIntfGoodRxEthernetFrames = 0;
          connectionStatus->sysIntfBadRxEthernetFrames = 0;
          connectionStatus->sysIntfGoodTxEthernetFrames = 0;
          connectionStatus->sysIntfBadTxEthernetFrames = 0;
          break;
      }
      break; /* end: read XAUI/RXAUI frame counters */

    case AQ_API_10G_SOM_XFI:
      switch (port->device)
      {
        case AQ_DEVICE_APPIA:
        case AQ_DEVICE_HHD:
          /* "normal" XFI mode (as opposed to split-mode) uses XFI1 for both transmit 
           * and receive towards the system. */
          if (mswFirst)
          {
            /*get the good Tx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 03.E871.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveXfi1VendorState, xfi1GoodFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (APPIA/HHD: 03.E870.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveXfi1VendorState, xfi1GoodFrameCounterLSW, lsw);
            connectionStatus->sysIntfGoodTxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Tx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 03.E873.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveXfi1VendorState, xfi1BadFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (APPIA/HHD: 03.E872.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveXfi1VendorState, xfi1BadFrameCounterLSW, lsw);
            connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;
          
            /*get the good Rx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 03.C871.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsTransmitXfi1VendorState, xfi1GoodFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (APPIA/HHD: 03.C870.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsTransmitXfi1VendorState, xfi1GoodFrameCounterLSW, lsw);
            connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Rx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 03.C873.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsTransmitXfi1VendorState, xfi1BadFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (APPIA/HHD: 03.C872.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsTransmitXfi1VendorState, xfi1BadFrameCounterLSW, lsw);
            connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;
          }
          else
          {
            /*get the good Tx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 03.E870.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveXfi1VendorState, xfi1GoodFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (APPIA/HHD: 03.E871.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveXfi1VendorState, xfi1GoodFrameCounterMSW, msw);
            connectionStatus->sysIntfGoodTxEthernetFrames  = (msw << 16) | lsw;
          
            /*get the bad Tx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 03.E872.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveXfi1VendorState, xfi1BadFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (APPIA/HHD: 03.E873.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveXfi1VendorState, xfi1BadFrameCounterMSW, msw);
            connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;
          
            /*get the good Rx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 03.C870.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsTransmitXfi1VendorState, xfi1GoodFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (APPIA/HHD: 03.C871.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsTransmitXfi1VendorState, xfi1GoodFrameCounterMSW, msw);
            connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Rx Ethernet frames*/
            /* REGDOC: Read bitfield (APPIA/HHD: 03.C872.F:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsTransmitXfi1VendorState, xfi1BadFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (APPIA/HHD: 03.C873.9:0) */
            AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsTransmitXfi1VendorState, xfi1BadFrameCounterMSW, msw);
            connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;
          }
          break;

        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
        case AQ_DEVICE_RHEA:
          if (mswFirst)
          {
            /*get the good Tx Ethernet frames*/
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E861.9:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0GoodFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E860.F:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0GoodFrameCounterLSW, lsw);
            connectionStatus->sysIntfGoodTxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Tx Ethernet frames*/
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E863.9:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0BadFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E862.F:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0BadFrameCounterLSW, lsw);
            connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;
          
            /*get the good Rx Ethernet frames*/
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C861.9:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0GoodFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C860.F:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0GoodFrameCounterLSW, lsw);
            connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Rx Ethernet frames*/
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C863.9:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0BadFrameCounterMSW, msw);
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C862.F:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0BadFrameCounterLSW, lsw);
            connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;
          }
          else
          {
            /*get the good Tx Ethernet frames*/
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E860.F:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0GoodFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E861.9:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0GoodFrameCounterMSW, msw);
            connectionStatus->sysIntfGoodTxEthernetFrames  = (msw << 16) | lsw;
          
            /*get the bad Tx Ethernet frames*/
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E862.F:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0BadFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E863.9:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0BadFrameCounterMSW, msw);
            connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;
          
            /*get the good Rx Ethernet frames*/
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C860.F:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0GoodFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C861.9:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0GoodFrameCounterMSW, msw);
            connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;
          
            /*get the bad Rx Ethernet frames*/
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C862.F:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0BadFrameCounterLSW, lsw);
            /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C863.9:0) */
            AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0BadFrameCounterMSW, msw);
            connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;
          }
          break;
      }
      break; /* end: read system XFI interface frame counters */

    default:
      connectionStatus->sysIntfGoodTxEthernetFrames = 0;
      connectionStatus->sysIntfBadTxEthernetFrames = 0;
      connectionStatus->sysIntfGoodRxEthernetFrames = 0;
      connectionStatus->sysIntfBadRxEthernetFrames = 0;
      break;
  }

  /* Get the network interface good and bad packet counters.  The appropriate
   * set of counters to read is determined by the 10G network interface 
   * operating mode. */
  switch (_10G_NetworkOperatingMode)
  {
    case AQ_API_10G_NOM_10GBASE_T:
      if (mswFirst)
      {
        /*get the good Rx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E813.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorFcsNoErrorFrameCounter, _10gbase_tGoodFrameCounterMSW, msw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E812.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorFcsNoErrorFrameCounter, _10gbase_tGoodFrameCounterLSW, lsw);
        connectionStatus->netIntfGoodRxEthernetFrames = (msw << 16) | lsw;
      
        /*get the bad Rx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E815.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorFcsErrorFrameCounter, _10gbase_tErrorFrameCounterMSW, msw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E814.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorFcsErrorFrameCounter, _10gbase_tErrorFrameCounterLSW, lsw);
        connectionStatus->netIntfBadRxEthernetFrames = (msw << 16) | lsw;
      
        /*get the good Tx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C821.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitVendorFcsNoErrorFrameCounter, _10gbase_tGoodFrameCounterMSW, msw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C820.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitVendorFcsNoErrorFrameCounter, _10gbase_tGoodFrameCounterLSW, lsw);
        connectionStatus->netIntfGoodTxEthernetFrames = (msw << 16) | lsw;
      
        /*get the bad Tx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C823.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitVendorFcsErrorFrameCounter, _10gbase_tErrorFrameCounterMSW, msw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C822.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitVendorFcsErrorFrameCounter, _10gbase_tErrorFrameCounterLSW, lsw);
        connectionStatus->netIntfBadTxEthernetFrames = (msw << 16) | lsw;
      }
      else
      {
        /*get the good Rx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E812.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorFcsNoErrorFrameCounter, _10gbase_tGoodFrameCounterLSW, lsw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E813.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorFcsNoErrorFrameCounter, _10gbase_tGoodFrameCounterMSW, msw);
        connectionStatus->netIntfGoodRxEthernetFrames  = (msw << 16) | lsw;
      
        /*get the bad Rx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E814.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorFcsErrorFrameCounter, _10gbase_tErrorFrameCounterLSW, lsw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E815.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorFcsErrorFrameCounter, _10gbase_tErrorFrameCounterMSW, msw);
        connectionStatus->netIntfBadRxEthernetFrames = (msw << 16) | lsw;
      
        /*get the good Tx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C820.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitVendorFcsNoErrorFrameCounter, _10gbase_tGoodFrameCounterLSW, lsw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C821.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitVendorFcsNoErrorFrameCounter, _10gbase_tGoodFrameCounterMSW, msw);
        connectionStatus->netIntfGoodTxEthernetFrames = (msw << 16) | lsw;
      
        /*get the bad Tx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C822.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitVendorFcsErrorFrameCounter, _10gbase_tErrorFrameCounterLSW, lsw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C823.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitVendorFcsErrorFrameCounter, _10gbase_tErrorFrameCounterMSW, msw);
        connectionStatus->netIntfBadTxEthernetFrames = (msw << 16) | lsw;
      }
      break; /* end: read 10GBASE-T frame counters */

    case AQ_API_10G_NOM_XFI:
      /* In lookaside mode, XFI0 is used as the network interface. */
      if (mswFirst)
      {
        /*get the good Rx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E861.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0GoodFrameCounterMSW, msw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E860.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0GoodFrameCounterLSW, lsw);
        connectionStatus->netIntfGoodRxEthernetFrames = (msw << 16) | lsw;
      
        /*get the bad Rx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E863.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0BadFrameCounterMSW, msw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E862.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0BadFrameCounterLSW, lsw);
        connectionStatus->netIntfBadRxEthernetFrames = (msw << 16) | lsw;
      
        /*get the good Tx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C861.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0GoodFrameCounterMSW, msw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C860.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0GoodFrameCounterLSW, lsw);
        connectionStatus->netIntfGoodTxEthernetFrames = (msw << 16) | lsw;
      
        /*get the bad Tx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C863.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0BadFrameCounterMSW, msw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C862.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0BadFrameCounterLSW, lsw);
        connectionStatus->netIntfBadTxEthernetFrames = (msw << 16) | lsw;
      }
      else
      {
        /*get the good Rx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E860.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0GoodFrameCounterLSW, lsw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E861.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0GoodFrameCounterMSW, msw);
        connectionStatus->netIntfGoodRxEthernetFrames  = (msw << 16) | lsw;
      
        /*get the bad Rx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E862.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0BadFrameCounterLSW, lsw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E863.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsReceiveXfi0VendorState, xfi0BadFrameCounterMSW, msw);
        connectionStatus->netIntfBadRxEthernetFrames = (msw << 16) | lsw;
      
        /*get the good Tx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C860.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0GoodFrameCounterLSW, lsw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C861.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0GoodFrameCounterMSW, msw);
        connectionStatus->netIntfGoodTxEthernetFrames = (msw << 16) | lsw;
      
        /*get the bad Tx Ethernet frames*/
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C862.F:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0BadFrameCounterLSW, lsw);
        /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.C863.9:0) */
        AQ_API_Get(port->PHY_ID, AQ_PcsTransmitXfi0VendorState, xfi0BadFrameCounterMSW, msw);
        connectionStatus->netIntfBadTxEthernetFrames = (msw << 16) | lsw;
      }
      break; /* end: read network (lookaside) XFI interface frame counters */

    default:
      connectionStatus->netIntfGoodTxEthernetFrames = 0;
      connectionStatus->netIntfBadTxEthernetFrames = 0;
      connectionStatus->netIntfGoodRxEthernetFrames = 0;
      connectionStatus->netIntfBadRxEthernetFrames = 0;
      break;
  }

  return AQ_RET_OK;
}



AQ_Retcode AQ_API_Get100M_1G_ConnectionStatus
(
  AQ_API_Port* port,
  AQ_API_100M_1G_ConnectionStatus* connectionStatus
)
{
  AQ_API_Variable(AQ_GlobalGeneralProvisioning)               
  AQ_API_Variable_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmii1RxStatus)                          
  AQ_API_Variable_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmii1TxStatus)                          
  AQ_API_Variable_DeviceRestricted(EUR_CAL_RHEA, AQ_GbePhySgmii0RxStatus)                          
  AQ_API_Variable_DeviceRestricted(EUR_CAL_RHEA, AQ_GbePhySgmii0TxStatus)                          
  AQ_API_Variable(AQ_AutonegotiationVendorStatus)             

  AQ_API_DeclareLocalStruct(AQ_AutonegotiationVendorStatus, angVendorStatus)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationReservedVendorStatus, angReservedVendorStatus)

  uint32_t msw;                                                
  uint16_t i; 
  uint16_t lsw; 
  uint16_t mswFirst;                                   


  /* load the 2 ANG state registers so we can check what state we are in*/ 
  AQ_API_AssignWordOfLocalStruct(angVendorStatus, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.C800) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationVendorStatus, 0));
  AQ_API_AssignWordOfLocalStruct(angReservedVendorStatus, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.C810) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationReservedVendorStatus, 0));

  /* check that we are connected at 100M or 1G in either normal or Wake-On-LAN*/
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
  if (((AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
            angReservedVendorStatus, connectionState) == 0x4) || 
         /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
        (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReservedVendorStatus, 
                                      angReservedVendorStatus, connectionState) == 0x9)) 
           /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
      && ((AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
            angVendorStatus, connectRate) == 0x2) || 
         /* REGDOC: Get local representation of bitfield (APPIA: 07.C800.2:1) (HHD/EUR/CAL/RHEA: 07.C800.3:1) */
        (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorStatus, 
                                      angVendorStatus, connectRate) == 0x1)))
  {
    /*mark the the connection status as connected*/
    connectionStatus->connected = True;
  }
  else
  {
    connectionStatus->connected = False;
  }

  /* check whether we are in LSW or MSW read first on the tandem counters - i.e. you have to read the snapshot word
     first to get a correct answer */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C441.D) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralProvisioning, mdioReadMSW_FirstEnable, mswFirst);                                        
  if (mswFirst)                                                                                                            
  {                                                                                                                        
    /*MSW first*/                                                                                                          

    /* HHD/APPIA devices use the SGMII1 counters */
    /* EUR devices use the SGMII0 counters */

    switch (port->device)
    {
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        /*  get the good Tx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D283.9:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFrameCounterMSW, msw);                                                              
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D282.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFrameCounterLSW, lsw);                                                            
        connectionStatus->sysIntfGoodTxEthernetFrames = (msw << 16) | lsw;                                                            
                                                                                                                              
        /*  get the bad Tx Ethernet frames*/                                                                                     
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D285.9:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFrameErrorCounterMSW, msw);                                                         
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D284.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFrameErrorCounterLSW, lsw);                                                       
        connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;                                                             
                                                                                                                              
        /*get the good Rx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D304.9:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameCounterMSW, msw);                                                              
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D303.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameCounterLSW, lsw);                                                            
        connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;                                                            
                                                                                                                              
        /*get the bad Rx Ethernet frames*/                                                                                     
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D306.9:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameErrorCounterMSW, msw);                                                         
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D305.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameErrorCounterLSW, lsw);                                                       
        connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;                                                             
                                                                                                                              
        /*  get the runt frame events*/                                                                                          
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D30C.5:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxRuntFrameCounterMSW, msw);                                                          
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D30B.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxRuntFrameCounterLSW, lsw);                                                        
        connectionStatus->runtFrameEvents = (msw << 16) | lsw;                                                                 
        break;

      case AQ_DEVICE_EUR:
      case AQ_DEVICE_CAL:
      case AQ_DEVICE_RHEA:
        /*  get the good Tx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D293.9:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFrameCounterMSW, msw);                                                              
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D292.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFrameCounterLSW, lsw);                                                            
        connectionStatus->sysIntfGoodTxEthernetFrames = (msw << 16) | lsw;                                                            
                                                                                                                              
        /*  get the bad Tx Ethernet frames*/                                                                                     
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D295.9:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFrameErrorCounterMSW, msw);                                                         
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D294.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFrameErrorCounterLSW, lsw);                                                       
        connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;                                                             
                                                                                                                              
        /*get the good Rx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D314.9:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameCounterMSW, msw);                                                              
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D313.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameCounterLSW, lsw);                                                            
        connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;                                                            
                                                                                                                              
        /*get the bad Rx Ethernet frames*/                                                                                     
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D316.9:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameErrorCounterMSW, msw);                                                         
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D315.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameErrorCounterLSW, lsw);                                                       
        connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;                                                             
                                                                                                                              
        /*  get the runt frame events*/                                                                                          
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D31C.5:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxRuntFrameCounterMSW, msw);                                                          
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D31B.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxRuntFrameCounterLSW, lsw);                                                        
        connectionStatus->runtFrameEvents = (msw << 16) | lsw;                                                                 
        break;
    }
  }                                                                                                                        
  else                                                                                                                     
  {                                                                                                                        
    /*LSW first*/                                                                                                          

    /* HHD/APPIA devices use the SGMII1 counters */
    /* EUR devices use the SGMII0 counters */

    switch (port->device)
    {
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        /*get the good Tx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D282.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFrameCounterLSW, lsw);                                                            
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D283.9:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFrameCounterMSW, msw);                                                              
        connectionStatus->sysIntfGoodTxEthernetFrames = (msw << 16) | lsw;                                                            
                                                                                                                              
        /*get the bad Tx Ethernet frames*/                                                                                     
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D284.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFrameErrorCounterLSW, lsw);                                                       
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D285.9:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFrameErrorCounterMSW, msw);                                                         
        connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;                                                             
                                                                                                                              
        /*get the good Rx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D303.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameCounterLSW, lsw);                                                            
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D304.9:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameCounterMSW, msw);                                                              
        connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;                                                            
                                                                                                                              
        /*get the bad Rx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D305.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameErrorCounterLSW, lsw);                                                       
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D306.9:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameErrorCounterMSW, msw);                                                         
        connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;                                                             
                                                                                                                              
        /*get the runt frame events*/                                                                                          
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D30B.F:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxRuntFrameCounterLSW, lsw);                                                        
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D30C.5:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxRuntFrameCounterMSW, msw);                                                          
        connectionStatus->runtFrameEvents = (msw << 16) | lsw;                                                                 
        break;

      case AQ_DEVICE_EUR:
      case AQ_DEVICE_CAL:
      case AQ_DEVICE_RHEA:
        /*get the good Tx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D292.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFrameCounterLSW, lsw);                                                            
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D293.9:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFrameCounterMSW, msw);                                                              
        connectionStatus->sysIntfGoodTxEthernetFrames = (msw << 16) | lsw;                                                            
                                                                                                                              
        /*get the bad Tx Ethernet frames*/                                                                                     
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D294.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFrameErrorCounterLSW, lsw);                                                       
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D295.9:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFrameErrorCounterMSW, msw);                                                         
        connectionStatus->sysIntfBadTxEthernetFrames = (msw << 16) | lsw;                                                             
                                                                                                                              
        /*get the good Rx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D313.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameCounterLSW, lsw);                                                            
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D314.9:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameCounterMSW, msw);                                                              
        connectionStatus->sysIntfGoodRxEthernetFrames = (msw << 16) | lsw;                                                            
                                                                                                                              
        /*get the bad Rx Ethernet frames*/                                                                                    
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D315.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameErrorCounterLSW, lsw);                                                       
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D316.9:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameErrorCounterMSW, msw);                                                         
        connectionStatus->sysIntfBadRxEthernetFrames = (msw << 16) | lsw;                                                             
                                                                                                                              
        /*get the runt frame events*/                                                                                          
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D31B.F:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxRuntFrameCounterLSW, lsw);                                                        
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D31C.5:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxRuntFrameCounterMSW, msw);                                                          
        connectionStatus->runtFrameEvents = (msw << 16) | lsw;                                                                 
        break;
    }
  }                                                                                                                        

  /*get the rest of the non-tandem registers, so LSW / MSW read order doesn't matter*/                                     

  /* HHD/APPIA devices use the SGMII1 counters */
  /* EUR devices use the SGMII0 counters */

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.D307.7:0) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFalseCarrierCounter, 
          connectionStatus->sgmiiRxFalseCarrierEvents);                  
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.D287.7:0) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1RxStatus, sgmii1RxFalseCarrierCounter, 
          connectionStatus->rxFalseCarrierEvents);                       
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.D30A.F:0) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxFrameAlignmentCounter, 
          connectionStatus->frameAlignmentEvents);                     
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D317.7:0) */
      AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFalseCarrierCounter, 
          connectionStatus->sgmiiRxFalseCarrierEvents);                  
      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D297.7:0) */
      AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0RxStatus, sgmii0RxFalseCarrierCounter, 
          connectionStatus->rxFalseCarrierEvents);                       
      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D31A.F:0) */
      AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxFrameAlignmentCounter, 
          connectionStatus->frameAlignmentEvents);                     
      break;
  }
                                                                                                                          
  /* get collision information only if we are connected in half-duplex */                                                 
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C800.0) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationVendorStatus, connectType, i);                                                         
  if (!i)                                                                                                                  
  {                                                                                                                        
    /* half-duplex */                                                                                                     

    /* HHD/APPIA devices use the SGMII1 counters */
    /* EUR devices use the SGMII0 counters */

    switch (port->device)
    {
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D308.7:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxCollisionCounter, 
            connectionStatus->sgmiiCollisionEvents);                   
        /* REGDOC: Read bitfield (APPIA/HHD: 1D.D309.7:0) */
        AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmii1TxStatus, sgmii1TxLineCollisionCounter, 
            connectionStatus->collisionEvents);                         
        break;

      case AQ_DEVICE_EUR:
      case AQ_DEVICE_CAL:
      case AQ_DEVICE_RHEA:
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D318.7:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxCollisionCounter, 
            connectionStatus->sgmiiCollisionEvents);                   
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 1D.D319.7:0) */
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GbePhySgmii0TxStatus, sgmii0TxLineCollisionCounter, 
            connectionStatus->collisionEvents);                         
        break;
    }
  }                                                                                                                        
  else                                                                                                                     
  {                                                                                                                        
    connectionStatus->sgmiiCollisionEvents = 0;                                                                            
    connectionStatus->collisionEvents = 0;                                                                                 
  }                                                                                                                        

  return AQ_RET_OK;
}

/* Tx Phase related functions and definitions */

#define AQ_API_TXPHASE_PROV_BLOCK_PHASE_SIZE 12
#define AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE  32
#define AQ_API_TXPHASE_CABLE_LEN_MIN         80

/* This function unstalls the FW in case it was stalled*/
AQ_Retcode AQ_API_Unstall_FW_If_Stalled
(
  /* The target PHY port */
  AQ_API_Port* port
)
{

unsigned int stallState = 1;
unsigned int counter = 0;

AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalReservedStatus)
AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalReservedProvisioning)

  
  /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.C887.E) */
AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, powerUpStallStatus, stallState)

if (stallState){

    /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.C479.F) */
  AQ_API_Set_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedProvisioning, powerUpStall, 0) 
  AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, powerUpStallStatus, stallState)

  while ( stallState != 0 ){
    if (counter < 1000){
      AQ_API_Wait(10, port);
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, powerUpStallStatus, stallState)
      counter++;
    }
    else{
      #ifdef AQ_VERBOSE
        AQ_API_Print("Timed out trying to unstall the FW\n");
      #endif
      return AQ_RET_ERROR;
    }
  }
}

return AQ_RET_OK;
}

/* Compatibility: 28nm PHYs only */
static unsigned int AQ_API_GetHopCount
(
  /* The target PHY port */
  AQ_API_Port* port
)
{
  AQ_API_Variable(AQ_GlobalReservedProvisioning)

  uint16_t hopCountOverride;
  unsigned int hopCount;


  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C471.6) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalReservedProvisioning, enableDaisy_chainHop_countOverride, hopCountOverride);
  if (hopCountOverride)
  {
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C471.5:0) */
    AQ_API_Get(port->PHY_ID, AQ_GlobalReservedProvisioning, daisy_chainHop_countOverrideValue, hopCount);
  }
  else
  {
    AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalDaisyChainHopCount)
    
    
    /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.C84E.7:0) */
    AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalDaisyChainHopCount, daisyChainHopCount, hopCount);
  }
  return hopCount;
}

static AQ_Retcode GetProvTableTerm
(
  /* The target PHY port */
  AQ_API_Port* port,
  /* Current terminal location */
  unsigned int* provTerminal
)
{
  AQ_Retcode retCode;
  uint8_t buffer[2] = { 0 };

  retCode = AQ_API_MemoryRead(port, buffer, sizeof(buffer), AQ_DRAM_BASE_ADDRESS + AQ_PHY_IMAGE_PROVTABLE_TERM_OFFSET);
  if (retCode != AQ_RET_OK)
  {
    return retCode;
  }

  *provTerminal = (buffer[1] << 8) | buffer[0];
  return AQ_RET_OK;
}


/* This function makes sure there are no two bytes 0f 0x00 right before the provisioning terminal pointer*/
AQ_Retcode VerifyProvTerm
(
  /* The target PHY port */
  AQ_API_Port* port
)
{
  AQ_Retcode retCode;
  uint8_t buffer[2] = {0xFF, 0xFF};
  unsigned int provTerminal;

  retCode = GetProvTableTerm(port, &provTerminal);
  if (retCode != AQ_RET_OK)
  {
    return retCode;
  }

  retCode = AQ_API_MemoryRead(port, buffer, 2, AQ_DRAM_BASE_ADDRESS + provTerminal-2);

  if (retCode != AQ_RET_OK)
    return retCode;

  if ((buffer[0] == 0x00) && (buffer[1] == 0x00))
    {
        AQ_API_Print("Provisioning terminal isn't set properly. Found at offset 0x%04X, expected at offset 0x%04X\n", provTerminal-2, provTerminal);
        return AQ_RET_ERROR;
    }
  else
    return AQ_RET_OK;
}

static void AQ_API_Get10G_LinkAndCableLen
(
  /* The target PHY port */
  AQ_API_Port* port,
  /* Link is up */
  AQ_boolean* connected,
  /* Estimated cable length */
  unsigned int* cableLen
)
{
  AQ_API_DeclareLocalStruct(AQ_GlobalStatus, globalStatus)

  *connected = AQ_API_Get10G_ConnectionState(port);
  
  AQ_API_AssignWordOfLocalStruct(globalStatus, 0,
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C884) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalStatus, 0));

              /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C884.7:0) */
  *cableLen = AQ_API_BitfieldOfLocalStruct(AQ_GlobalStatus,
      globalStatus, cableLength);
}

static void AQ_API_Stall_uP
(
  /* The target PHY port */
  AQ_API_Port* port
)
{
  AQ_API_DeclareLocalStruct(AQ_GlobalControl, globalControl)


  AQ_API_AssignWordOfLocalStruct(globalControl, 1,
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalControl, 1));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStall, 1);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalControl, 1,
      AQ_API_WordOfLocalStruct(globalControl, 1));
}

static void AQ_API_Reset_uP
(
  /* The target PHY port */
  AQ_API_Port* port
)
{
  unsigned int counter, heartbeatBefore, heartbeatAfter;

  AQ_API_DeclareLocalStruct(AQ_GlobalControl, globalControl)
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalReservedStatus)

  
  AQ_API_AssignWordOfLocalStruct(globalControl, 1,
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalControl, 1));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upReset, 1);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
  AQ_API_WriteRegister(port->PHY_ID,AQ_GlobalControl, 1, 
      AQ_API_WordOfLocalStruct(globalControl, 1));
  
  /* Need to wait at least 100us. */
  AQ_API_Wait(1, port);
  
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upReset, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStall, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
  
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
  AQ_API_WriteRegister(port->PHY_ID,AQ_GlobalControl, 1, 
      AQ_API_WordOfLocalStruct(globalControl, 1));

  AQ_API_Wait(15 * 1000, port); 

  AQ_API_Unstall_FW_If_Stalled(port);

  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C886) */
  AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, nearlySecondsLSW, heartbeatBefore)
  AQ_API_Wait(20000, port);
  AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, nearlySecondsLSW, heartbeatAfter)

  counter = 0;
  /* Wait for maximum 50 seconds to get a heartbeat */ 
  while (heartbeatBefore != 0xffff && ((heartbeatAfter - heartbeatBefore) < 2)){
    if (counter < 50){
      counter++;
      AQ_API_Wait(10000, port);
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, nearlySecondsLSW, heartbeatAfter)
     }
     else{
      AQ_API_Print("Timed out on getting a heartbeat\n");
      return;
     }
  }
}

static AQ_Retcode SetProvTableTerm
(
  /* The target PHY port */
  AQ_API_Port* port,
  /* New terminal location */
  unsigned int provTerminal
)
{
  AQ_Retcode retCode = AQ_RET_OK;
  AQ_Retcode resultCode;
  uint8_t writeBuf[2];
  uint8_t readBuf[2] = { 0 };
  const uint8_t terminal[] = { 0x00, 0x00, 0x00, 0x00 };
  uint16_t provTerminalBack;

  writeBuf[0] = provTerminal & 0xFF;
  writeBuf[1] = provTerminal >> 8;
  resultCode = AQ_API_MemoryWrite(port, writeBuf, sizeof(writeBuf), AQ_DRAM_BASE_ADDRESS + AQ_PHY_IMAGE_PROVTABLE_TERM_OFFSET);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("!Error! Provisioning terminal shift resultCode : %d\n", resultCode);
  #endif
    return AQ_RET_ERROR;
  }

  resultCode = AQ_API_MemoryRead(port, readBuf, sizeof(readBuf), AQ_DRAM_BASE_ADDRESS + AQ_PHY_IMAGE_PROVTABLE_TERM_OFFSET);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("!Error! Provisioning terminal read back resultCode: %d\n", resultCode);
  #endif
    return AQ_RET_ERROR;
  }

  /* Fill provisioning terminal anyway */
  resultCode = AQ_API_MemoryWrite(port, (uint8_t*)terminal, sizeof(terminal), AQ_DRAM_BASE_ADDRESS + provTerminal);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("!Error! Failed to fill provisioning terminal: %d\n", resultCode);
  #endif
    retCode = AQ_RET_ERROR;
  }

  provTerminalBack = readBuf[0] | (readBuf[1] << 8);
  if (provTerminalBack != provTerminal)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("!Error! Provisioning terminal now at 0x%04X (expected 0x%04X)\n", provTerminalBack, provTerminal);
  #endif
    retCode = AQ_RET_ERROR;
  }
  return retCode;
}

/* This function advertises 10G or 5G. In case the link up capabilities wasn't provisioned. */
AQ_Retcode AQ_API_Advertise_10G_5G
(
/* The target PHY port */
  AQ_API_Port* port,
/* The target PHY port */
  AQ_boolean _5G
)
{

  unsigned int advertised = 0;
  unsigned int counter = 0;

  AQ_API_Variable_DeviceRestricted(EUR_CAL_RHEA, AQ_Autonegotiation10GBaseT_ControlRegister)

  if ( _5G ){

      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 07.0020.C) */
    AQ_API_Set_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, _5gbase_tAbility, 1)

    AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, _5gbase_tAbility, advertised)

    while( !advertised ){
      if (counter < 500){
        AQ_API_Wait(10, port);
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, _5gbase_tAbility, advertised)
        counter++;
      }
      else{
        #ifdef AQ_VERBOSE
          AQ_API_Print("Timed out trying to advertise 5G\n");
        #endif
        return AQ_RET_ERROR;
      }
    }
  }
  else{
        /* REGDOC: Read bitfield (EUR/CAL/RHEA: 07.0020.8) */
    AQ_API_Set_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, _10gbase_tAbility, 1)

    AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, _10gbase_tAbility, advertised)

    while( !advertised ){
      if (counter < 500){
        AQ_API_Wait(10, port);
        AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, _10gbase_tAbility, advertised)
        counter++;
      }
      else{
        #ifdef AQ_VERBOSE
          AQ_API_Print("Timed out trying to advertise 10G\n");
        #endif
        return AQ_RET_ERROR;
      }
    }
  }

  return AQ_RET_OK;
}

AQ_Retcode AQ_API_ExtendProvTableOnTheFly
(
  /* The target PHY port */
  AQ_API_Port* port, 
  /* The new Provisioning block size */
  unsigned int provExtensionSize,
  /* The new Provisioning image pointer */
  uint8_t* provTableExtensionImage
){

  unsigned int provTerminalOrg = 0;
  AQ_Retcode resultCode;
  
  /* Check whether there is enough space for new prov block*/
  resultCode = GetProvTableTerm(port, &provTerminalOrg);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Check provisioning terminal resultCode: %d\n", resultCode);
  #endif
    return AQ_RET_BOOTLOAD_PROVADDR_OOR; 
  }

#ifdef AQ_VERBOSE
  AQ_API_Print("Provisioning terminal at 0x%04X\n", provTerminalOrg);
#endif
  if (provTerminalOrg + provExtensionSize + 2 > AQ_PHY_IMAGE_PROVTABLE_OFFSET + AQ_PHY_IMAGE_PROVTABLE_MAXSIZE) 
  {
    return AQ_RET_BOOTLOAD_PROVTABLE_TOO_LARGE; 
  }

  AQ_API_Stall_uP(port);

  /* Set the new PROV Table terminal address */
  if (AQ_RET_OK != SetProvTableTerm(port, provTerminalOrg + provExtensionSize)) 
  {
    SetProvTableTerm(port, provTerminalOrg);
    return AQ_RET_ERROR; 
  }
  /* Write the new part of PROV Table */
  if (AQ_RET_OK != AQ_API_MemoryWrite(port, provTableExtensionImage, provExtensionSize, AQ_DRAM_BASE_ADDRESS + provTerminalOrg))
  {
    SetProvTableTerm(port, provTerminalOrg);
    return AQ_RET_ERROR; 
  }
  
  AQ_API_Reset_uP(port);

  return resultCode;

}


/* Compatibility: 28nm PHYs only */
AQ_Retcode ApplyTxPhase
(
  /* The target PHY port */
  AQ_API_Port* port, 
  /* Tx Phase settings number */
  int txPhaseNo, 
  /* Original prov terminal location */
  unsigned int provTerminalOrg,
  /* PHY's ID */
  unsigned int hopCount,
  /* Provisioning block size */
  uint16_t blockSize,
  /* Advertise 5G instead of 10G if True */
  AQ_boolean _5GAdvertisement
)
{
  AQ_API_DeclareLocalStruct(AQ_GlobalControl, globalControl)
  
  /* Phase settings */
  const uint16_t txPhaseProvs[] = {
    0xD104, 0xF594, 0x1A24, 0x3EB4,
    0x4344, 0x67D4, 0x8864, 0xACF4
  };
  const uint16_t clockControlReferences[] = {
    0xC840, 0xEA62, 0x0C84, 0x2EA6, 
    0x40C8, 0x62EA, 0x840C, 0xA62E
  };

  uint8_t buffer[] = {
    0x03, 0x23, 0x00, 0x00, 
    0x84, 0x00, 
    0x11, 0xC4, 0x00, 0x00, 0xFF, 0xFF,
    0xA8, 0x01, 
    0x24, 0x00, 0x01, 0x00, 0x01, 0x00, 
    0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 
    0x65, 0x00, 0x00, 0x00, 0x7F, 0x00,
    0x03, 0x31, 0x00, 0x00, 
    0x84, 0x00, 
    0x11, 0xC4, 0x00, 0x00, 0xFF, 0xFF,
    0xA8, 0x01, 
    0x24, 0x00, 0x01, 0x00, 0x01, 0x00, 
    0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 
    0x65, 0x00, 0x00, 0x00, 0x7F, 0x00,
    0x03, 0x32, 0x00, 0x00, 
    0x84, 0x00, 
    0x11, 0xC4, 0x00, 0x00, 0xFF, 0xFF,
    0xA8, 0x01, 
    0x24, 0x00, 0x01, 0x00, 0x01, 0x00, 
    0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 
    0x65, 0x00, 0x00, 0x00, 0x7F, 0x00
  };
  uint32_t clockControl, i;
  AQ_Retcode resultCode = AQ_RET_OK;
  AQ_Retcode advertisementResultCode = AQ_RET_OK;
  AQ_boolean connected;
  unsigned int counter;

  AQ_API_Variable(AQ_PmdStandardTransmitDisableControl)


  AQ_API_Stall_uP(port);

  buffer[8] = buffer[AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 8] = buffer[2*AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 8] = txPhaseProvs[txPhaseNo] & 0xFF;
  buffer[9] = buffer[AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 9] = buffer[2*AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 9] = txPhaseProvs[txPhaseNo] >> 8;

  if (txPhaseNo == 0)
  {
    uint16_t phyMask = 1 << hopCount;

    
    /* Append block */
    if (AQ_RET_OK != SetProvTableTerm(port, provTerminalOrg + 3*blockSize))
    {
      SetProvTableTerm(port, provTerminalOrg);
      resultCode = AQ_RET_TXPHASE_PROV_PREPARE_FAILED;
    }

    buffer[2] = buffer[AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 2] = buffer[2*AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 2] = phyMask & 0xFF;
    buffer[3] = buffer[AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 3] = buffer[2*AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 3] = phyMask >> 8;
    if (AQ_RET_OK != AQ_API_MemoryWrite(port, buffer, blockSize, AQ_DRAM_BASE_ADDRESS + provTerminalOrg) ||
        AQ_RET_OK != AQ_API_MemoryWrite(port, buffer + AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE, blockSize, AQ_DRAM_BASE_ADDRESS + provTerminalOrg + blockSize) ||
        AQ_RET_OK != AQ_API_MemoryWrite(port, buffer + 2*AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE, blockSize, AQ_DRAM_BASE_ADDRESS + provTerminalOrg + 2*blockSize))
    {
      SetProvTableTerm(port, provTerminalOrg);
      resultCode = AQ_RET_TXPHASE_PROV_PREPARE_FAILED;
    }
  }
  else
  {
    /* Modify provisioning value */
    if (AQ_RET_OK != AQ_API_MemoryWrite(port, buffer + 8, 2, AQ_DRAM_BASE_ADDRESS + provTerminalOrg + 8) ||
        AQ_RET_OK != AQ_API_MemoryWrite(port, buffer + AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 8, 2, AQ_DRAM_BASE_ADDRESS + provTerminalOrg + blockSize + 8) ||
        AQ_RET_OK != AQ_API_MemoryWrite(port, buffer + 2*AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE + 8, 2, AQ_DRAM_BASE_ADDRESS + provTerminalOrg + 2*blockSize + 8))
    {
      resultCode = AQ_RET_TXPHASE_PROV_SET_FAILED;
    }
  }

  AQ_API_Reset_uP(port);

  advertisementResultCode = AQ_API_Advertise_10G_5G(port, _5GAdvertisement);
  
  if ((resultCode != AQ_RET_OK) || (advertisementResultCode != AQ_RET_OK))
  {
      AQ_API_AssignWordOfLocalStruct(globalControl, 1,
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalControl, 1));
  
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 0);
  
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
      AQ_API_WriteRegister(port->PHY_ID,AQ_GlobalControl, 1, 
          AQ_API_WordOfLocalStruct(globalControl, 1));
    return resultCode;
  }

  /* Make sure Tx is enabled. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0009.0) */
  AQ_API_Set(port->PHY_ID, AQ_PmdStandardTransmitDisableControl, pmdGlobalTransmitDisable, 0);

  resultCode = AQ_API_RestartAutonegotiation(port);

  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Restart autonegotiation failed\n");
  #endif
    return resultCode;
  }

  counter = 0;
  connected = AQ_API_Get10G_ConnectionState(port);

  while (connected == False){
    if (counter < 300){
      counter++;
      AQ_API_Wait(100, port);
     }
     else{
      AQ_API_Print("Timed out trying to establish a connection\n");
      return AQ_RET_ERROR;
     }
    connected = AQ_API_Get10G_ConnectionState(port);
  }
  
  if (port->device == AQ_DEVICE_CAL || port->device == AQ_DEVICE_RHEA)
  {
    /* TODO Calypso and Rhea add: get alternative */
    /* do not have an ability to check applied phase, maybe add just check provision applied or find out new way */
    return AQ_RET_OK;
  }

  for (i = 0; i < 5; i++)
  {
    /* Check phase applied */
                   /* REGDOC: Read register (HHD/EUR: 01.C142) */
    clockControl = AQ_API_ReadRegister_DeviceRestricted(HHD_EUR, port->PHY_ID, AQ_PmaTransmitClockPhaseSelectionControl, 0);
    if (clockControl == clockControlReferences[txPhaseNo])
      break;

    AQ_API_Wait(3000, port);
  }

  if (clockControl != clockControlReferences[txPhaseNo])
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("!Error! clockControl = 0x%04X (expected 0x%04X)\n", clockControl, clockControlReferences[txPhaseNo]);
  #endif
    return AQ_RET_TXPHASE_PROV_APPLY_FAILED;
  }

  return AQ_RET_OK;
}

/* Compatibility: 28nm PHYs only */
static void AQ_API_GetLDPC_Values
(
  /* The target PHY port */
  AQ_API_Port* port, 
  /* Result structure */
  AQ_API_TxPhaseResults* txPhaseResults
)
{
  AQ_API_Variable(AQ_GlobalGeneralProvisioning)
  AQ_API_Variable(AQ_PcsReceiveVendorUncorrectedFrameCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCrc_8ErrorCounter)
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsReceiveReservedVendorState)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter)
  AQ_API_Variable(AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter)

  uint16_t mswFirst = 0;
  uint32_t msw;
  uint16_t lsw;


  /* Get Uncorrected LDPC_M, Uncorrected LDPC_L, CRC-8, average LDPC iteration, and count for each iteration */

  /* check whether we are in LSW or MSW read first on the tandem counters - i.e. you have to read the snapshot word
  first to get a correct answer */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C441.D) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalGeneralProvisioning, mdioReadMSW_FirstEnable, mswFirst);
  if (mswFirst)
  {
    /*MSW first*/
    /*add up the number of errored frames*/
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E821.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorUncorrectedFrameCounter, uncorrectedFrameCounterMSW, msw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E820.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorUncorrectedFrameCounter, uncorrectedFrameCounterLSW, lsw);
    if (txPhaseResults)
      txPhaseResults->erroredLDPC_Frames = (msw << 16) | lsw;

    /*get the number of CRC errors*/
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E811.5:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCrc_8ErrorCounter, crc_8ErrorCounterMSW, msw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E810.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCrc_8ErrorCounter, crc_8ErrorCounterLSW, lsw);
    if (txPhaseResults)
      txPhaseResults->erroredCRC_Frames = (msw << 16) | lsw;

    /*get the good 10G frames*/
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E841.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter, correctedFrames_1IterationCounterMSW, msw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E840.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter, correctedFrames_1IterationCounterLSW, lsw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[0] = (msw << 16) | lsw;

    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E843.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter, correctedFrames_2IterationCounterMSW, msw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E842.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter, correctedFrames_2IterationCounterLSW, lsw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[1] = (msw << 16) | lsw;

    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E845.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter, correctedFrames_3IterationCounterMSW, msw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E844.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter, correctedFrames_3IterationCounterLSW, lsw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[2] = (msw << 16) | lsw;

    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E847.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter, correctedFrames_4IterationCounterMSW, msw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E846.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter, correctedFrames_4IterationCounterLSW, lsw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[3] = (msw << 16) | lsw;

    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E849.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter, correctedFrames_5IterationCounterMSW, msw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E848.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter, correctedFrames_5IterationCounterLSW, lsw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[4] = (msw << 16) | lsw;
  }
  else
  {
    /*LSW first*/
    /*add up the number of errored frames*/
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E820.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorUncorrectedFrameCounter, uncorrectedFrameCounterLSW, lsw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E821.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorUncorrectedFrameCounter, uncorrectedFrameCounterMSW, msw);
    if (txPhaseResults)
      txPhaseResults->erroredLDPC_Frames = (msw << 16) | lsw;

    /*get the number of CRC errors*/
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E810.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCrc_8ErrorCounter, crc_8ErrorCounterLSW, lsw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E811.5:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCrc_8ErrorCounter, crc_8ErrorCounterMSW, msw);
    if (txPhaseResults)
      txPhaseResults->erroredCRC_Frames = (msw << 16) | lsw;

    /* get the good frames, reading the LSW first */
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E840.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter, correctedFrames_1IterationCounterLSW, lsw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E841.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter, correctedFrames_1IterationCounterMSW, msw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[0] = (msw << 16) | lsw;

    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E842.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter, correctedFrames_2IterationCounterLSW, lsw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E843.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter, correctedFrames_2IterationCounterMSW, msw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[1] = (msw << 16) | lsw;

    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E844.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter, correctedFrames_3IterationCounterLSW, lsw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E845.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter, correctedFrames_3IterationCounterMSW, msw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[2] = (msw << 16) | lsw;

    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E846.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter, correctedFrames_4IterationCounterLSW, lsw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E847.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter, correctedFrames_4IterationCounterMSW, msw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[3] = (msw << 16) | lsw;

    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E848.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter, correctedFrames_5IterationCounterLSW, lsw);
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.E849.F:0) */
    AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter, correctedFrames_5IterationCounterMSW, msw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[4] = (msw << 16) | lsw;
  }

  /*get the rest of the LDPC counts which are non-tandem registers, so LSW / MSW read order doesn't matter*/
  /* REGDOC: Read bitfield (EUR/CAL/RHEA: 03.E84A.F:0) (HHD/APPIA: 03.E850.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter, correctedFrames_6IterationCounter, lsw);
  if (txPhaseResults)
    txPhaseResults->IterationN_CorrectedLDPC_Frames[5] = lsw;

  /* REGDOC: Read bitfield (EUR/CAL/RHEA: 03.E84B.F:0) (HHD/APPIA: 03.E851.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter, correctedFrames_7IterationCounter, lsw);
  if (txPhaseResults)
    txPhaseResults->IterationN_CorrectedLDPC_Frames[6] = lsw;

  /* REGDOC: Read bitfield (EUR/CAL/RHEA: 03.E84C.F:0) (HHD/APPIA: 03.E852.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter, correctedFrames_8IterationCounter, lsw);
  if (txPhaseResults)
    txPhaseResults->IterationN_CorrectedLDPC_Frames[7] = lsw;

  if (port->device == AQ_DEVICE_EUR || port->device == AQ_DEVICE_CAL || port->device == AQ_DEVICE_RHEA)
  {
    AQ_API_Variable_DeviceRestricted(EUR_CAL_RHEA, AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter)
    AQ_API_Variable_DeviceRestricted(EUR_CAL_RHEA, AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter)

    
    /* REGDOC: Read bitfield (EUR/CAL/RHEA: 03.E84D.F:0) */
    AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter, correctedFrames_9IterationCounter, lsw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[8] = lsw;

    /* REGDOC: Read bitfield (EUR/CAL/RHEA: 03.E84E.F:0) */
    AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter, correctedFrames_10IterationCounter, lsw);
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[9] = lsw;
  }
  else
  {
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[8] = 0;
    if (txPhaseResults)
      txPhaseResults->IterationN_CorrectedLDPC_Frames[9] = 0;
  }

  /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.E808.F:0) */
  AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsReceiveReservedVendorState, averageLdpcIterationCount, lsw);
  if (txPhaseResults)
    txPhaseResults->averageLDPC_IterationsCount = lsw;
}

/* Compatibility: 28nm PHYs only */
static void AQ_API_GetTxPhaseResults
(
  /* The target PHY port */
  AQ_API_Port* port, 
  /* Consider link partner as one on the same chip as the target port */
  AQ_boolean commonClock,
  /* Iteration number */
  int32_t looptimes,
  /* Test duration */
  int32_t loopDuration,
  /* Result structure */
  AQ_API_TxPhaseResults* txPhaseResults
)
{
  AQ_API_DeclareLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, ancr)
  AQ_API_Variable(AQ_Autonegotiation10GBaseT_StatusRegister)

  const unsigned int SNR_Base = 0x8000;
  AQ_Retcode resultCode;
  uint16_t msResolution;
  AQ_boolean connected = False;
  unsigned int cableLen, i;
  const unsigned int connectCheckCount = 5;

  AQ_API_Print("   Loop Duration: %d s\n", loopDuration);


  /* Master/slave force */
  AQ_API_AssignWordOfLocalStruct(ancr, 0,
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0020) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, ancr, 
      master_slaveManualConfigurationEnable, 0x1);
  if (commonClock == True)
  {
    /* Set DUT port to slave */
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.E) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, ancr, 
        master_slaveConfiguration, 0);
  }
  else
  {
    /* Master/Slave every other time */
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.E) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, ancr, 
        master_slaveConfiguration, (looptimes & 1));
  }
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.0020) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, 0,
      AQ_API_WordOfLocalStruct(ancr, 0));

  /* Must re-autoneg */
  resultCode = AQ_API_RestartAutonegotiation(port);
  /* Allow link to come up*/
  AQ_API_Wait(10 * 1000, port);

  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Restart autonegotiation failed\n");
  #endif
    txPhaseResults->resultCode = AQ_RET_TXPHASE_LINK_FAILED;
    return;
  }
  
  for (i = 0; i < connectCheckCount; i++)
  {
    AQ_API_Get10G_LinkAndCableLen(port, &connected, &cableLen);
    if (connected == True)
      break;
    AQ_API_Wait(1000, port);
    if (i == connectCheckCount - 1)
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("Link up check failed\n");
    #endif
      txPhaseResults->resultCode = AQ_RET_TXPHASE_LINK_FAILED;
      return;
    }
  }
  
  if (cableLen < AQ_API_TXPHASE_CABLE_LEN_MIN)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Cable length check failed\n");
  #endif
    txPhaseResults->resultCode = AQ_RET_TXPHASE_LINK_FAILED;
    return;
  }

  txPhaseResults->resultCode = AQ_RET_OK;
  /* Link status */
  txPhaseResults->connected = connected;
  /* Cable length*/
  txPhaseResults->cableLength = cableLen;
  /* Master/Slave status */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0021.E) */
  AQ_API_Get(port->PHY_ID, AQ_Autonegotiation10GBaseT_StatusRegister,
      master_slaveConfigurationResolution, msResolution);
  txPhaseResults->masterSlaveStatus = msResolution ? AQ_API_MSS_Master : AQ_API_MSS_Slave;

  /*Clear the LDPC counters*/
  AQ_API_GetLDPC_Values(port, NULL);
  /* StartTraffic */
  AQ_API_Wait(loopDuration * 1000, port);
  /* StopTraffic */

  AQ_API_GetLDPC_Values(port, txPhaseResults);
  
  txPhaseResults->SNR_Avg[0] = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0085) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_OperatingMarginChannelA, 0) - SNR_Base;
  txPhaseResults->SNR_Min[0] = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0089) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA, 0) - SNR_Base;
  txPhaseResults->SNR_Avg[1] = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0086) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_OperatingMarginChannelB, 0) - SNR_Base;
  txPhaseResults->SNR_Min[1] = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.008A) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB, 0) - SNR_Base;
  txPhaseResults->SNR_Avg[2] = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0087) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_OperatingMarginChannelC, 0) - SNR_Base;
  txPhaseResults->SNR_Min[2] = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.008B) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC, 0) - SNR_Base;
  txPhaseResults->SNR_Avg[3] = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0088) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_OperatingMarginChannelD, 0) - SNR_Base;
  txPhaseResults->SNR_Min[3] = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.008C) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD, 0) - SNR_Base;
}

/* Compatibility: 28nm PHYs only */
AQ_Retcode AQ_API_GetTxPhaseStatistics
(
  /* The target PHY port */
  AQ_API_Port* port,
  /* Consider link partner as one on the same chip as the target port */
  AQ_boolean commonClock,
  /* The number of iterations for each Tx Phase not more than AQ_API_TXPHASE_ITERATION_COUNT */
 int32_t   iterationCount,
  /* The obtained results for each Tx Phase */
  AQ_API_TxPhaseResults txPhaseResults[AQ_API_TXPHASE_COUNT][AQ_API_TXPHASE_ITERATION_COUNT],
  /* Advertise 5G instead of 10G if True */
  AQ_boolean _5GAdvertisement,
  /* The duration of monitoring trafic for each loop */
 int32_t   loopDuration,
 /* When True continues to applying the phases even if the link check fails*/
 AQ_boolean debugMode
)
{
  AQ_API_Variable(AQ_Autonegotiation10GBaseT_ControlRegister)  
  AQ_API_DeclareLocalStruct(AQ_GlobalControl, globalControl)

  unsigned int hopCount;
  AQ_Retcode resultCode;
  unsigned int provTerminalOrg = 0;
  uint16_t blockSize;
  AQ_boolean connected;
  unsigned int cableLen;
  int txPhaseNo;
  unsigned int counter;
  /* Adds a piece of provisioning that writes 0xEEEE to 1e.0301 */
  uint8_t extend[] = {0x03, 0x03, 0xF8, 0x00, 0x01, 0x03, 0xEE, 0xEE, 0xFF, 0xFF };

  AQ_API_Variable(AQ_PmdStandardTransmitDisableControl)


  if ((port->device != AQ_DEVICE_HHD &&
      port->device != AQ_DEVICE_EUR &&
      port->device != AQ_DEVICE_CAL &&
      port->device != AQ_DEVICE_RHEA) ||
      iterationCount > AQ_API_TXPHASE_ITERATION_COUNT)
  {
    return AQ_RET_ERROR;
  }
  
  resultCode = AQ_API_Unstall_FW_If_Stalled(port);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Couldn't unstall FW: %d\n", resultCode);
  #endif
    return AQ_RET_ERROR;
  }
   
  if (!debugMode)
  {
    #ifdef AQ_VERBOSE
      AQ_API_Print("Verifying provisioning terminal\n");
    #endif
    resultCode = VerifyProvTerm(port);
    if (resultCode != AQ_RET_OK){
    #ifdef AQ_VERBOSE
      AQ_API_Print("Wrong provisioning terminal\n");
    #endif
      return AQ_RET_ERROR;
    }
  }  

  resultCode = AQ_API_ExtendProvTableOnTheFly(port, 10, extend);
  if (resultCode != AQ_RET_OK){
  #ifdef AQ_VERBOSE
    AQ_API_Print("Couldn't extend the prov table\n");
  #endif
    return AQ_RET_ERROR;
  }
  
  resultCode = AQ_API_Advertise_10G_5G(port, _5GAdvertisement);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Couldn't advertise desired speed: %d\n", resultCode);
  #endif
    return AQ_RET_ERROR;
  }

  
  /* Make sure Tx is enabled. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0009.0) */
  AQ_API_Set(port->PHY_ID, AQ_PmdStandardTransmitDisableControl, pmdGlobalTransmitDisable, 0);

  resultCode = AQ_API_RestartAutonegotiation(port);


  counter = 0;
  connected = AQ_API_Get10G_ConnectionState(port);

  while (connected == False){
	if (counter < 300){
	  counter++;
	  AQ_API_Wait(100, port);
	}
	else
	{
	  AQ_API_Print("Timed out trying to establish a connection\n");
	  if (!debugMode)
		return AQ_RET_ERROR;
	  else
		AQ_API_Print("Continuing for Debug Mode...\n");
	}
	connected = AQ_API_Get10G_ConnectionState(port);
  }


  /* Get PHY's Hop Count*/
  hopCount = AQ_API_GetHopCount(port);
#ifdef AQ_VERBOSE
  AQ_API_Print("hopCount = 0x%02X\n", hopCount);
#endif

  /* Check whether there is enough space for new prov block*/
  resultCode = GetProvTableTerm(port, &provTerminalOrg);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Check provisioning terminal resultCode: %d\n", resultCode);
  #endif
    return AQ_RET_TXPHASE_PROV_CHECK_FAILED;
  }
#ifdef AQ_VERBOSE
  AQ_API_Print("Provisioning terminal at 0x%04X\n", provTerminalOrg);
#endif
  blockSize = commonClock ? AQ_API_TXPHASE_PROV_BLOCK_FULL_SIZE : AQ_API_TXPHASE_PROV_BLOCK_PHASE_SIZE;
  if (provTerminalOrg + 3*blockSize + 2 > AQ_PHY_IMAGE_PROVTABLE_OFFSET + AQ_PHY_IMAGE_PROVTABLE_MAXSIZE)
  {
    return AQ_RET_TXPHASE_PROV_CHECK_FAILED;
  }
  
  if (!debugMode)
  {
	/* Check the link is up and cable is rather long */
	AQ_API_Get10G_LinkAndCableLen(port, &connected, &cableLen);
	#ifdef AQ_VERBOSE
	AQ_API_Print("connected = %d, cableLen = %d\n", connected, cableLen);
	#endif
	if (connected == False || cableLen < AQ_API_TXPHASE_CABLE_LEN_MIN)
	{
	return AQ_RET_TXPHASE_SANITYCHECK_FAILED;
	}
  }

  /* Repeat for all phases */
  for (txPhaseNo = 0; txPhaseNo < AQ_API_TXPHASE_COUNT; ++txPhaseNo)
  {
    int32_t looptimes;
    AQ_Retcode phaseCode;


  #ifdef AQ_VERBOSE
    AQ_API_Print("-> Tx Phase ID: %d\n", txPhaseNo);
  #endif
    
    phaseCode = ApplyTxPhase(port, txPhaseNo, provTerminalOrg, hopCount, blockSize,_5GAdvertisement);
    if (phaseCode == AQ_RET_TXPHASE_PROV_PREPARE_FAILED)
    {
      /* Provisioning table is restored and AQ_API_Reset_uP is done
      inside ApplyTxPhase in this case */
      return AQ_RET_TXPHASE_PROV_PREPARE_FAILED;
    }

    /* Several times for each phase */
    for (looptimes = 0; looptimes < iterationCount; ++looptimes)
    {
      txPhaseResults[txPhaseNo][looptimes].txPhase = txPhaseNo * 45;
      if (phaseCode != AQ_RET_OK)
      {
        txPhaseResults[txPhaseNo][looptimes].resultCode = phaseCode;
      }
      else
      {
      #ifdef AQ_VERBOSE
        AQ_API_Print("   Loop# %d\n", looptimes+1);
      #endif
        AQ_API_GetTxPhaseResults(port, commonClock, looptimes, loopDuration, &txPhaseResults[txPhaseNo][looptimes]);
      }
    }
  }

  /* Leave autoneg master/slave register in "unforced mode" */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.F) */
  AQ_API_Set(port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, master_slaveManualConfigurationEnable, 0);

  /* Put the provisioning table back to its original state and restart the PHY */
#ifdef AQ_VERBOSE
  AQ_API_Print("Returning to original provisioning table\n");
#endif
  AQ_API_Stall_uP(port);
  SetProvTableTerm(port, provTerminalOrg);
  AQ_API_Reset_uP(port);

  
  AQ_API_AssignWordOfLocalStruct(globalControl, 1,
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalControl, 1));
  
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 0);
  
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
  AQ_API_WriteRegister(port->PHY_ID,AQ_GlobalControl, 1, 
      AQ_API_WordOfLocalStruct(globalControl, 1));

  /* Re-autoneg so the link establishes if the speed advertisement is provisioned */
  AQ_API_RestartAutonegotiation(port);
 
  return AQ_RET_OK;
}

/*@}*/


/**********************************************************************************************************************
*                                               Autonegotiation
**********************************************************************************************************************/

/*! \addtogroup autonegotiation
  @{
*/

AQ_Retcode AQ_API_GetAutonegotiationControl
(
  AQ_API_Port* port,
  AQ_API_AutonegotiationControl* autonegotiationControl
)
{
  AQ_API_Variable(AQ_AutonegotiationReservedVendorProvisioning)
  AQ_API_Variable(AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting)
  AQ_API_Variable(AQ_AutonegotiationStandardControl_1)

  AQ_API_DeclareLocalStruct(AQ_AutonegotiationAdvertisementRegister, basePageRegister)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationVendorProvisioning, angVendorProvRegister)
  AQ_API_DeclareLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, _10G_ControlRegister)
  AQ_API_DeclareLocalStruct(AQ_PmaStandardControl_1, pmaStandardControl1)
  AQ_API_DeclareLocalStruct_DeviceRestricted
      (HHD, AQ_AutonegotiationReceiveReservedVendorProvisioning, angRxReserverdVendorProvisioning)
  AQ_API_DeclareLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_AutonegotiationEeeAdvertisement_2Register, angEeeAdvertisement)
  AQ_API_DeclareLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_Autonegotiation10GBaseT_Control_2Register, ang10GBaseTControl2)

  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_AutonegotiationEeeAdvertisementRegister, eeeAdvertisement)

  uint16_t i;


  /* get the base page 10 and 100M settings */
  AQ_API_AssignWordOfLocalStruct(basePageRegister, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0010) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationAdvertisementRegister, 0));
  autonegotiationControl->advertise10BASE_T_HalfDuplex = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0010.B:5) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationAdvertisementRegister, 
        basePageRegister, technologyAbilityField) & 0x1 ? True : False;
  autonegotiationControl->advertise10BASE_T_FullDuplex = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0010.B:5) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationAdvertisementRegister, 
        basePageRegister, technologyAbilityField) & 0x2 ? True : False;
  autonegotiationControl->advertise100BASE_TX_HalfDuplex = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0010.B:5) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationAdvertisementRegister, 
        basePageRegister, technologyAbilityField) & 0x4 ? True : False;
  autonegotiationControl->advertise100BASE_TX_FullDuplex = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0010.B:5) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationAdvertisementRegister, 
        basePageRegister, technologyAbilityField) & 0x8 ? True : False;

  /* get the PAUSE settings */
  autonegotiationControl->advertiseSymmetricPAUSE = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0010.B:5) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationAdvertisementRegister, 
        basePageRegister, technologyAbilityField) & 0x20 ? True : False;
  autonegotiationControl->advertiseAsymmetricPAUSE = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0010.B:5) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationAdvertisementRegister, 
        basePageRegister, technologyAbilityField) & 0x40 ? True : False;

  /* get the control settings */
  AQ_API_AssignWordOfLocalStruct(angVendorProvRegister, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.C400) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationVendorProvisioning, 0));

  /* 1G */
  autonegotiationControl->advertise1000BASE_T_HalfDuplex = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C400.E) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorProvisioning, 
        angVendorProvRegister, _1000base_tHalfDuplexAbility) ? True : False;
  autonegotiationControl->advertise1000BASE_T_FullDuplex = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C400.F) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorProvisioning, 
        angVendorProvRegister, _1000base_tFullDuplexAbility) ? True : False;

  /* get the 10G control settings */
  AQ_API_AssignWordOfLocalStruct(_10G_ControlRegister, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0020) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, 0));

  /* 5G / 2.5G / 1G / 10G */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* NBASE-T */
      autonegotiationControl->advertise5G = False;
      autonegotiationControl->advertise2_5G = False;
      /* IEEE 802.3bz */
      autonegotiationControl->bzCapabilities._2_5G = False;
      autonegotiationControl->bzCapabilities._5G = False;
      autonegotiationControl->bzCapabilities._2_5G_EEE = False;
      autonegotiationControl->bzCapabilities._5G_EEE = False;
      autonegotiationControl->bzCapabilities._2_5G_fastRetrain = False;
      autonegotiationControl->bzCapabilities._5G_fastRetrain = False;
      autonegotiationControl->bzCapabilities._2_5G_THP_BypassRequest = False;
      autonegotiationControl->bzCapabilities._5G_THP_BypassRequest = False;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* NBASE-T */
      autonegotiationControl->advertise5G = 
        /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.C400.B) */
        AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
            AQ_AutonegotiationVendorProvisioning, angVendorProvRegister, 
            _5g) ? True : False;
      autonegotiationControl->advertise2_5G = 
        /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.C400.A) */
        AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
            AQ_AutonegotiationVendorProvisioning, angVendorProvRegister, 
            _2_5g) ? True : False;

       /* get 1G 10G EEE advertisement settings */
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, eeeAdvertisement, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.003C) */
          AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_AutonegotiationEeeAdvertisementRegister, 0));


      /* EEE_1000BASE_T */
      autonegotiationControl->_1000_EEE = 
        /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.003C.2) */
        AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
            AQ_AutonegotiationEeeAdvertisementRegister, eeeAdvertisement, 
            _1000base_tEee) ? True : False;

      /* EEE_10GBASE_T */
      autonegotiationControl->_10G_EEE = 
        /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.003C.3) */
        AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
            AQ_AutonegotiationEeeAdvertisementRegister, eeeAdvertisement, 
            _10gbase_tEee) ? True : False;


      /* IEEE 802.3bz */
      if (port->device == AQ_DEVICE_HHD)
      {
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD, angRxReserverdVendorProvisioning, 0, 
            /* REGDOC: Read register (HHD: 07.E410) */
            AQ_API_ReadRegister_DeviceRestricted(HHD, port->PHY_ID, AQ_AutonegotiationReceiveReservedVendorProvisioning, 0));

        autonegotiationControl->bzCapabilities._2_5G = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E410.1) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorProvisioning, 
              angRxReserverdVendorProvisioning, _2_5gbase_tAbility) ? True : False;
        autonegotiationControl->bzCapabilities._5G = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E410.2) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorProvisioning, 
              angRxReserverdVendorProvisioning, _5gbase_tAbility) ? True : False;
        autonegotiationControl->bzCapabilities._2_5G_EEE = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E410.3) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorProvisioning, 
              angRxReserverdVendorProvisioning, _2_5gbase_tEee) ? True : False;
        autonegotiationControl->bzCapabilities._5G_EEE = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E410.4) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorProvisioning, 
              angRxReserverdVendorProvisioning, _5gbase_tEee) ? True : False;
        autonegotiationControl->bzCapabilities._2_5G_fastRetrain = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E410.5) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorProvisioning, 
              angRxReserverdVendorProvisioning, _2_5gbase_tFastRetrainAbility) ? True : False;
        autonegotiationControl->bzCapabilities._5G_fastRetrain = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E410.6) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorProvisioning, 
              angRxReserverdVendorProvisioning, _5gbase_tFastRetrainAbility) ? True : False;
        autonegotiationControl->bzCapabilities._2_5G_THP_BypassRequest = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E410.8) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorProvisioning, 
              angRxReserverdVendorProvisioning, _2_5gbase_tTHP_BypassRequest) ? True : False;
        autonegotiationControl->bzCapabilities._5G_THP_BypassRequest = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E410.7) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorProvisioning, 
              angRxReserverdVendorProvisioning, _5gbase_tTHP_BypassRequest) ? True : False;
      }
      else
      {
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, angEeeAdvertisement, 0, 
            /* REGDOC: Read register (EUR/CAL/RHEA: 07.003E) */
            AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_AutonegotiationEeeAdvertisement_2Register, 0));
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, ang10GBaseTControl2, 0, 
            /* REGDOC: Read register (EUR/CAL/RHEA: 07.0040) */
            AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_Control_2Register, 0));

        autonegotiationControl->bzCapabilities._2_5G = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0020.7) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_ControlRegister, 
              _10G_ControlRegister, _2_5gbase_tAbility) ? True : False;
        autonegotiationControl->bzCapabilities._5G = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0020.8) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_ControlRegister, 
              _10G_ControlRegister, _5gbase_tAbility) ? True : False;
        autonegotiationControl->bzCapabilities._2_5G_EEE = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.003E.0) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_AutonegotiationEeeAdvertisement_2Register, 
              angEeeAdvertisement, _2_5gbase_tEee) ? True : False;
        autonegotiationControl->bzCapabilities._5G_EEE = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.003E.1) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_AutonegotiationEeeAdvertisement_2Register, 
              angEeeAdvertisement, _5gbase_tEee) ? True : False;
        autonegotiationControl->bzCapabilities._2_5G_fastRetrain = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0020.5) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_ControlRegister, 
              _10G_ControlRegister, _2_5gbase_tFastRetrainAbility) ? True : False;
        autonegotiationControl->bzCapabilities._5G_fastRetrain = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0020.6) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_ControlRegister, 
              _10G_ControlRegister, _5gbase_tFastRetrainAbility) ? True : False;
        autonegotiationControl->bzCapabilities._2_5G_THP_BypassRequest = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0040.3) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_Control_2Register, 
              ang10GBaseTControl2, _2_5gbase_tTHP_BypassRequest) ? True : False;
        autonegotiationControl->bzCapabilities._5G_THP_BypassRequest = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0040.2) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_Control_2Register, 
              ang10GBaseTControl2, _5gbase_tTHP_BypassRequest) ? True : False;
      }
      break;
  }

  /* downshift */
  autonegotiationControl->enableAutomaticDownshift = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C400.4) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorProvisioning, 
        angVendorProvRegister, automaticDownshiftEnable) ? True : False;
  autonegotiationControl->automaticDownshiftRetryAttempts = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C400.3:0) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorProvisioning, 
        angVendorProvRegister, retryAttemptsBeforeDownshift);

  /* 10G */
  autonegotiationControl->advertise10GBASE_T = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.C) */
    AQ_API_BitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
        _10G_ControlRegister, _10gbase_tAbility) ? True : False;

  /* short reach */ 
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0083.0) */
  AQ_API_Get(port->PHY_ID, AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting, shortReachMode, i);
  autonegotiationControl->shortReach = i ? True : False;
  
  /* master / slave control */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.F) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
        _10G_ControlRegister, master_slaveManualConfigurationEnable))
  {
    /* manual control is enabled */
    autonegotiationControl->masterSlaveControl = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.E) */
      AQ_API_BitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
          _10G_ControlRegister, master_slaveConfiguration) ? AQ_API_AN_Master : AQ_API_AN_Slave;
  }
  else autonegotiationControl->masterSlaveControl = AQ_API_AN_Automatic;

  /* port type */
  autonegotiationControl->portType = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.D) */
    AQ_API_BitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
        _10G_ControlRegister, portType) ? AQ_API_AN_MultiPort : AQ_API_AN_SinglePort;

  /* MDI / MDI-X control */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.1:0) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, mdi_Mdi_xControl, i);
  switch (i)
  {
    case 0x0: autonegotiationControl->MDI_MDI_X_Control = AQ_API_MDC_Automatic; break;
    case 0x1: autonegotiationControl->MDI_MDI_X_Control = AQ_API_MDC_MDI; break;
    case 0x2: autonegotiationControl->MDI_MDI_X_Control = AQ_API_MDC_MDI_X; break;
  }

  /* Force connection rate vs. autonegotiate */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0000.C) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationStandardControl_1, autonegotiationEnable, i);
  if (i)
  {
    autonegotiationControl->forceConnRate = AQ_API_ForceConnRate_Autonegotiate;
  }
  else
  {
    AQ_API_AssignWordOfLocalStruct(pmaStandardControl1, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0));
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.D) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_PmaStandardControl_1, 
          pmaStandardControl1, speedSelectionLsb) == 1 && 
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.6) */
        AQ_API_BitfieldOfLocalStruct(AQ_PmaStandardControl_1, 
          pmaStandardControl1, speedSelectionMsb) == 0)
      autonegotiationControl->forceConnRate = AQ_API_ForceConnRate_100M;
    else
      autonegotiationControl->forceConnRate = AQ_API_ForceConnRate_Other;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetAutonegotiationControl
(
  AQ_API_Port* port,
  AQ_API_AutonegotiationControl* autonegotiationControl
)
{
  AQ_API_Variable(AQ_AutonegotiationReservedVendorProvisioning)
  AQ_API_Variable(AQ_AutonegotiationAdvertisementRegister)
  AQ_API_Variable(AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting)

  AQ_API_DeclareLocalStruct(AQ_AutonegotiationStandardControl_1, asc1)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationVendorProvisioning, angVendorProvRegister)
  AQ_API_DeclareLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, _10G_ControlRegister)
  AQ_API_DeclareLocalStruct(AQ_PmaStandardControl_1, pmaStandardControl1)
  AQ_API_DeclareLocalStruct_DeviceRestricted
      (HHD, AQ_AutonegotiationReceiveReservedVendorProvisioning, angRxReserverdVendorProvisioning)
  AQ_API_DeclareLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_AutonegotiationEeeAdvertisement_2Register, angEeeAdvertisement)
  AQ_API_DeclareLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_Autonegotiation10GBaseT_Control_2Register, ang10GBaseTControl2)

  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_AutonegotiationEeeAdvertisementRegister, eeeAdvertisement)

  uint16_t technologyAbilityField; 
  uint16_t i;


  /* set the technology ability field in 7.10 appropriately: by default this means no 100BASE-T4 */
  technologyAbilityField = 0x00;
  if (autonegotiationControl->advertise100BASE_TX_FullDuplex) technologyAbilityField |= 0x08;
  else technologyAbilityField &= 0x67;
  if (autonegotiationControl->advertise100BASE_TX_HalfDuplex) technologyAbilityField |= 0x04;
  else technologyAbilityField &= 0x6B;
  if (autonegotiationControl->advertise10BASE_T_FullDuplex) technologyAbilityField |= 0x02;
  else technologyAbilityField &= 0x6D;
  if (autonegotiationControl->advertise10BASE_T_HalfDuplex) technologyAbilityField |= 0x01;
  else technologyAbilityField &= 0x6E;
  if (autonegotiationControl->advertiseSymmetricPAUSE) technologyAbilityField |= 0x20;
  else technologyAbilityField &= 0x4F;
  if (autonegotiationControl->advertiseAsymmetricPAUSE) technologyAbilityField |= 0x40;
  else technologyAbilityField &= 0x2F;
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0010.B:5) */
  AQ_API_Set(port->PHY_ID, AQ_AutonegotiationAdvertisementRegister, 
      technologyAbilityField, technologyAbilityField);

  /* set up 10G ability, port type, and the master / slave control*/
  AQ_API_AssignWordOfLocalStruct(_10G_ControlRegister, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0020) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, 0));

  /* 10G */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.C) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
      _10G_ControlRegister, _10gbase_tAbility, 
      autonegotiationControl->advertise10GBASE_T ? 1 : 0);

  /* Master/Slave control */
  switch (autonegotiationControl->masterSlaveControl)
  {
    case AQ_API_AN_Master:
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.E) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
          _10G_ControlRegister, master_slaveConfiguration, 1);
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.F) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
          _10G_ControlRegister, master_slaveManualConfigurationEnable, 1);
      break;

    case AQ_API_AN_Slave:
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.E) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
          _10G_ControlRegister, 
          master_slaveConfiguration, 0);
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.F) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
          _10G_ControlRegister, 
          master_slaveManualConfigurationEnable, 1);
      break;

    case AQ_API_AN_Automatic:
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.F) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
          _10G_ControlRegister, master_slaveManualConfigurationEnable, 0);
      break;
  }

  /* port type */
  if (autonegotiationControl->portType == AQ_API_AN_MultiPort) 
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.D) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
        _10G_ControlRegister, portType, 1);
  else 
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0020.D) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_ControlRegister, 
        _10G_ControlRegister, portType, 0);

  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.0020) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, 0, 
      AQ_API_WordOfLocalStruct(_10G_ControlRegister, 0));

  /* short reach */ 
  i = autonegotiationControl->shortReach ? 1 : 0;
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0083.0) */
  AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting, shortReachMode, i);

  /* MDI / MDI-X control */
  i = 0;
  switch (autonegotiationControl->MDI_MDI_X_Control)
  {
    case AQ_API_MDC_Automatic: i = 0x0; break;
    case AQ_API_MDC_MDI: i = 0x1; break;
    case AQ_API_MDC_MDI_X: i = 0x2; break;
  }
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C410.1:0) */
  AQ_API_Set(port->PHY_ID, AQ_AutonegotiationReservedVendorProvisioning, mdi_Mdi_xControl, i);

  /* set the GbE capabilities and automatic downshift capabilities, and ensure the PHY is in the non-user control mode */
  AQ_API_AssignWordOfLocalStruct(angVendorProvRegister, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.C400) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationVendorProvisioning, 0));

  /* 1G */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C400.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationVendorProvisioning, angVendorProvRegister, 
      _1000base_tHalfDuplexAbility, autonegotiationControl->advertise1000BASE_T_HalfDuplex ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C400.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationVendorProvisioning, angVendorProvRegister, 
      _1000base_tFullDuplexAbility, autonegotiationControl->advertise1000BASE_T_FullDuplex ? 1 : 0);

  /* downshift */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C400.4) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationVendorProvisioning, angVendorProvRegister, 
      automaticDownshiftEnable, autonegotiationControl->enableAutomaticDownshift ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C400.3:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationVendorProvisioning, angVendorProvRegister, 
      retryAttemptsBeforeDownshift, autonegotiationControl->automaticDownshiftRetryAttempts);

  /* 5G / 2.5G / 1G / 10G */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;
      
    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* NBASE-T */
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 07.C400.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
          AQ_AutonegotiationVendorProvisioning, angVendorProvRegister, _5g, 
          autonegotiationControl->advertise5G ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 07.C400.A) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
          AQ_AutonegotiationVendorProvisioning, angVendorProvRegister, _2_5g, 
          autonegotiationControl->advertise2_5G ? 1 : 0);

      /* get 1G 10G EEE advertisement settings */
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, eeeAdvertisement, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.003C) */
          AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_AutonegotiationEeeAdvertisementRegister, 0));

      /* EEE_1000BASE_T */
      /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.003C.2) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
          AQ_AutonegotiationEeeAdvertisementRegister, eeeAdvertisement, 
          _1000base_tEee, autonegotiationControl->_1000_EEE ? 1 :0 );
      /* EEE_10GBASE_T */
      /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.003C.3) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
          AQ_AutonegotiationEeeAdvertisementRegister, eeeAdvertisement, 
          _10gbase_tEee, autonegotiationControl->_10G_EEE ? 1 : 0);
      /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 07.003C) */
        AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_AutonegotiationEeeAdvertisementRegister, 0, 
            AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, eeeAdvertisement, 0));



      /* IEEE 802.3bz */
      if (port->device == AQ_DEVICE_HHD)
      {
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD, angRxReserverdVendorProvisioning, 0, 
            /* REGDOC: Read register (HHD: 07.E410) */
            AQ_API_ReadRegister_DeviceRestricted(HHD, port->PHY_ID, AQ_AutonegotiationReceiveReservedVendorProvisioning, 0));

        /* REGDOC: Assign to local representation of bitfield (HHD: 07.E410.1) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, 
            AQ_AutonegotiationReceiveReservedVendorProvisioning, angRxReserverdVendorProvisioning, 
            _2_5gbase_tAbility, autonegotiationControl->bzCapabilities._2_5G ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (HHD: 07.E410.2) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, 
            AQ_AutonegotiationReceiveReservedVendorProvisioning, angRxReserverdVendorProvisioning,
            _5gbase_tAbility, autonegotiationControl->bzCapabilities._5G ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (HHD: 07.E410.3) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, 
            AQ_AutonegotiationReceiveReservedVendorProvisioning, angRxReserverdVendorProvisioning,
            _2_5gbase_tEee, autonegotiationControl->bzCapabilities._2_5G_EEE ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (HHD: 07.E410.4) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, 
            AQ_AutonegotiationReceiveReservedVendorProvisioning, angRxReserverdVendorProvisioning,
            _5gbase_tEee, autonegotiationControl->bzCapabilities._5G_EEE ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (HHD: 07.E410.5) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, 
            AQ_AutonegotiationReceiveReservedVendorProvisioning, 
            angRxReserverdVendorProvisioning, _2_5gbase_tFastRetrainAbility, 
            autonegotiationControl->bzCapabilities._2_5G_fastRetrain ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (HHD: 07.E410.6) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, 
            AQ_AutonegotiationReceiveReservedVendorProvisioning, 
            angRxReserverdVendorProvisioning, _5gbase_tFastRetrainAbility, 
            autonegotiationControl->bzCapabilities._5G_fastRetrain ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (HHD: 07.E410.8) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, 
            AQ_AutonegotiationReceiveReservedVendorProvisioning, 
            angRxReserverdVendorProvisioning, _2_5gbase_tTHP_BypassRequest, 
            autonegotiationControl->bzCapabilities._2_5G_THP_BypassRequest ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (HHD: 07.E410.7) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, 
            AQ_AutonegotiationReceiveReservedVendorProvisioning, 
            angRxReserverdVendorProvisioning, _5gbase_tTHP_BypassRequest, 
            autonegotiationControl->bzCapabilities._5G_THP_BypassRequest ? 1 : 0);

        /* REGDOC: Write register (HHD: 07.E410) */
        AQ_API_WriteRegister_DeviceRestricted(HHD, port->PHY_ID, AQ_AutonegotiationReceiveReservedVendorProvisioning, 0, 
            AQ_API_WordOfLocalStruct_DeviceRestricted(HHD, angRxReserverdVendorProvisioning, 0));
      }
      else
      {
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, angEeeAdvertisement, 0, 
            /* REGDOC: Read register (EUR/CAL/RHEA: 07.003E) */
            AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_AutonegotiationEeeAdvertisement_2Register, 0));
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, ang10GBaseTControl2, 0, 
            /* REGDOC: Read register (EUR/CAL/RHEA: 07.0040) */
            AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_Control_2Register, 0));

        /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 07.0020.7) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_Autonegotiation10GBaseT_ControlRegister, _10G_ControlRegister, 
            _2_5gbase_tAbility, autonegotiationControl->bzCapabilities._2_5G ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 07.0020.8) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_Autonegotiation10GBaseT_ControlRegister, _10G_ControlRegister,
            _5gbase_tAbility, autonegotiationControl->bzCapabilities._5G ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 07.003E.0) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_AutonegotiationEeeAdvertisement_2Register, angEeeAdvertisement,
            _2_5gbase_tEee, autonegotiationControl->bzCapabilities._2_5G_EEE ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 07.003E.1) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_AutonegotiationEeeAdvertisement_2Register, angEeeAdvertisement,
            _5gbase_tEee, autonegotiationControl->bzCapabilities._5G_EEE ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 07.0020.5) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_Autonegotiation10GBaseT_ControlRegister, 
            _10G_ControlRegister, _2_5gbase_tFastRetrainAbility, 
            autonegotiationControl->bzCapabilities._2_5G_fastRetrain ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 07.0020.6) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_Autonegotiation10GBaseT_ControlRegister, 
            _10G_ControlRegister, _5gbase_tFastRetrainAbility, 
            autonegotiationControl->bzCapabilities._5G_fastRetrain ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 07.0040.3) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_Autonegotiation10GBaseT_Control_2Register, 
            ang10GBaseTControl2, _2_5gbase_tTHP_BypassRequest, 
            autonegotiationControl->bzCapabilities._2_5G_THP_BypassRequest ? 1 : 0);
        /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 07.0040.2) */
        AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
            AQ_Autonegotiation10GBaseT_Control_2Register, 
            ang10GBaseTControl2, _5gbase_tTHP_BypassRequest, 
            autonegotiationControl->bzCapabilities._5G_THP_BypassRequest ? 1 : 0);

        /* REGDOC: Write register (EUR/CAL/RHEA: 07.003E) */
        AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_AutonegotiationEeeAdvertisement_2Register, 0, 
            AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, angEeeAdvertisement, 0));
        /* REGDOC: Write register (EUR/CAL/RHEA: 07.0040) */
        AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_Control_2Register, 0, 
            AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, ang10GBaseTControl2, 0));
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.0020) */
        AQ_API_WriteRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_ControlRegister, 0, 
            AQ_API_WordOfLocalStruct(_10G_ControlRegister, 0));
      }
      break;
  }

  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.C400) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationVendorProvisioning, 0, 
      AQ_API_WordOfLocalStruct(angVendorProvRegister, 0));

  /* Force connection rate vs. autonegotiate */
  switch (autonegotiationControl->forceConnRate)
  {
    case AQ_API_ForceConnRate_Autonegotiate:
      AQ_API_AssignWordOfLocalStruct(asc1, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0000) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationStandardControl_1, 0));
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0000.C) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardControl_1, asc1, 
          autonegotiationEnable, 0x1);
      /* Make sure that we don't accidentally trigger a reset with our 
       * read-modify-write sequence. */
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0000.F) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardControl_1, asc1, reset, 0x0);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.0000) */
      AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationStandardControl_1, 0, 
          AQ_API_WordOfLocalStruct(asc1, 0));
      break;

    case AQ_API_ForceConnRate_100M:
      /* Disable autonegotiation */
      AQ_API_AssignWordOfLocalStruct(asc1, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0000) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationStandardControl_1, 0));
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0000.C) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardControl_1, asc1, 
          autonegotiationEnable, 0x0);
      /* Make sure that we don't accidentally trigger a reset with our 
       * read-modify-write sequence. */
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0000.F) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardControl_1, asc1, 
          reset, 0x0);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.0000) */
      AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationStandardControl_1, 0, 
          AQ_API_WordOfLocalStruct(asc1, 0));

      /* Set manual speed selection to 100Mb */
      AQ_API_AssignWordOfLocalStruct(pmaStandardControl1, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0));
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.D) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmaStandardControl1, 
          speedSelectionLsb, 1);
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.6) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmaStandardControl1, 
          speedSelectionMsb, 0);
      /* Make sure that we don't accidentally trigger a reset with our 
       * read-modify-write sequence. */
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.F) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmaStandardControl1, 
          reset, 0x0);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
      AQ_API_WriteRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0, 
          AQ_API_WordOfLocalStruct(pmaStandardControl1, 0));
      break;

    default:
      /* nothing */
      break;
  }

  return AQ_RET_OK;
}

/*@}*/

  
/*! \addtogroup linkPartnerStatus
  @{
*/

AQ_Retcode AQ_API_GetLinkPartnerStatus
(
  AQ_API_Port* port,
  AQ_API_LinkPartnerStatus* linkPartnerStatus
)
{
  AQ_API_Variable(AQ_AutonegotiationLinkPartnerBasePageAbilityRegister)

  AQ_API_DeclareLocalStruct(AQ_AutonegotiationReceiveLinkPartnerStatus, angRxLinkPartnerStatus)
  AQ_API_DeclareLocalStruct(AQ_Autonegotiation10GBaseT_StatusRegister, ang10GBaseTStatus)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD, AQ_AutonegotiationReceiveReservedVendorStatus, angRxReserverdVendorStatus)
  AQ_API_DeclareLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_AutonegotiationEeeLinkPartnerAbility_2Register, angEeeLinkPartnerAbility)
  AQ_API_DeclareLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_Autonegotiation10GBaseT_Status_2Register, ang10GBaseTStatus2)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_AutonegotiationEeeLinkPartnerAbilityRegister, eeeLinkPartnerAbility)

  uint16_t technologyAbilityField; 


  /*get the link partner's 10GBASE-T capability*/
  AQ_API_AssignWordOfLocalStruct(ang10GBaseTStatus, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0021) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_StatusRegister, 0));
  linkPartnerStatus->_10GBASE_T = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0021.B) */
    AQ_API_BitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_StatusRegister, 
        ang10GBaseTStatus, linkPartner10GBaseT_Ability) ? True : False;

  /* get the link partner's technology ability field and set the 10, 100, and PAUSE capabilities */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0013.B:5) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationLinkPartnerBasePageAbilityRegister, 
      linkPartnerTechnologyAbilityField, technologyAbilityField);
  linkPartnerStatus->_10BASE_T_HalfDuplex = (technologyAbilityField & 0x01) ? True : False;
  linkPartnerStatus->_10BASE_T_FullDuplex = (technologyAbilityField & 0x02) ? True : False;
  linkPartnerStatus->_100BASE_TX_HalfDuplex = (technologyAbilityField & 0x04) ? True : False;
  linkPartnerStatus->_100BASE_TX_FullDuplex = (technologyAbilityField & 0x08) ? True : False;
  linkPartnerStatus->symmetricPAUSE = (technologyAbilityField & 0x20) ? True : False;
  linkPartnerStatus->asymmetricPAUSE = (technologyAbilityField & 0x40) ? True : False;

  /*get the GbE capabilities and Aquantia features if applicable*/
  AQ_API_AssignWordOfLocalStruct(angRxLinkPartnerStatus, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.E820) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationReceiveLinkPartnerStatus, 0));
  linkPartnerStatus->_1000BASE_T_HalfDuplex = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.E820.E) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReceiveLinkPartnerStatus, 
        angRxLinkPartnerStatus, linkPartner1000BaseT_HalfDuplexAbility) ? True : False;
  linkPartnerStatus->_1000BASE_T_FullDuplex = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.E820.F) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReceiveLinkPartnerStatus, 
        angRxLinkPartnerStatus, linkPartner1000BaseT_FullDuplexAbility) ? True : False;
  linkPartnerStatus->shortReach = 
    /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.E820.D) */
    AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReceiveLinkPartnerStatus, 
        angRxLinkPartnerStatus, linkPartnerShort_reach) ? True : False;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      linkPartnerStatus->aquantiaDevice = 
        /* REGDOC: Get local representation of bitfield (APPIA: 07.E820.2) */
        AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_AutonegotiationReceiveLinkPartnerStatus, 
            angRxLinkPartnerStatus, aquantia_TwinvilleLinkPartner) ? True : False;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      linkPartnerStatus->aquantiaDevice = 
        /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.E820.2) */
        AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_AutonegotiationReceiveLinkPartnerStatus, 
            angRxLinkPartnerStatus, aquantiaLinkPartner) ? True : False;

        /*get the link partner's 10G 1G EEE capability*/
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, eeeLinkPartnerAbility, 0, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.003D) */
            AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_AutonegotiationEeeLinkPartnerAbilityRegister, 0));

        /* 1000M EEE */
        linkPartnerStatus->_1000_EEE = 
          /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.003D.2) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
              AQ_AutonegotiationEeeLinkPartnerAbilityRegister, eeeLinkPartnerAbility, 
              linkPartner1000BaseT_Eee) ? True : False;

        /* 10G EEE */
        linkPartnerStatus->_10G_EEE = 
          /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.003D.3) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
              AQ_AutonegotiationEeeLinkPartnerAbilityRegister, eeeLinkPartnerAbility, 
              linkPartner10GBaseT_Eee) ? True : False;
      break;
  }

  /* get the link partner's 5G / 2.5G capability */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* NBASE-T */
      linkPartnerStatus->_5G = False;
      linkPartnerStatus->_2_5G = False;
      /* IEEE 802.3bz */
      linkPartnerStatus->bzCapabilities._2_5G = False;
      linkPartnerStatus->bzCapabilities._5G = False;
      linkPartnerStatus->bzCapabilities._2_5G_EEE = False;
      linkPartnerStatus->bzCapabilities._5G_EEE = False;
      linkPartnerStatus->bzCapabilities._2_5G_fastRetrain = False;
      linkPartnerStatus->bzCapabilities._5G_fastRetrain = False;
      linkPartnerStatus->bzCapabilities._2_5G_THP_BypassRequest = False;
      linkPartnerStatus->bzCapabilities._5G_THP_BypassRequest = False;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* NBASE-T */
      linkPartnerStatus->_5G = 
        /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.E820.B) */
        AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
            AQ_AutonegotiationReceiveLinkPartnerStatus, 
            angRxLinkPartnerStatus, linkPartner_5g) ? True : False;
      linkPartnerStatus->_2_5G = 
        /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 07.E820.A) */
        AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
            AQ_AutonegotiationReceiveLinkPartnerStatus, 
            angRxLinkPartnerStatus, linkPartner_2_5g) ? True : False;

      /* IEEE 802.3bz */
      if (port->device == AQ_DEVICE_HHD)
      {
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD, angRxReserverdVendorStatus, 3, 
            /* REGDOC: Read register (HHD: 07.E830 + 3) */
            AQ_API_ReadRegister_DeviceRestricted(HHD, port->PHY_ID, AQ_AutonegotiationReceiveReservedVendorStatus, 3));

        linkPartnerStatus->bzCapabilities._2_5G = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E833.1) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorStatus, 
              angRxReserverdVendorStatus, linkPartner_2_5gbase_tAbility) ? True : False;
        linkPartnerStatus->bzCapabilities._5G = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E833.2) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorStatus, 
              angRxReserverdVendorStatus, linkPartner_5gbase_tAbility) ? True : False;
        linkPartnerStatus->bzCapabilities._2_5G_EEE = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E833.3) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorStatus, 
              angRxReserverdVendorStatus, linkPartner_2_5gbase_tEee) ? True : False;
        linkPartnerStatus->bzCapabilities._5G_EEE = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E833.4) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorStatus, 
              angRxReserverdVendorStatus, linkPartner_5gbase_tEee) ? True : False;
        linkPartnerStatus->bzCapabilities._2_5G_fastRetrain = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E833.5) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorStatus, 
              angRxReserverdVendorStatus, linkPartner_2_5gbase_tFastRetrainAbility) ? True : False;
        linkPartnerStatus->bzCapabilities._5G_fastRetrain = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E833.6) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorStatus, 
              angRxReserverdVendorStatus, linkPartner_5gbase_tFastRetrainAbility) ? True : False;
        linkPartnerStatus->bzCapabilities._2_5G_THP_BypassRequest = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E833.8) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorStatus, 
              angRxReserverdVendorStatus, linkPartner_2_5gbase_tTHP_BypassRequest) ? True : False;
        linkPartnerStatus->bzCapabilities._5G_THP_BypassRequest = 
          /* REGDOC: Get local representation of bitfield (HHD: 07.E833.7) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD, 
              AQ_AutonegotiationReceiveReservedVendorStatus, 
              angRxReserverdVendorStatus, linkPartner_5gbase_tTHP_BypassRequest) ? True : False;
      }
      else
      {
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, angEeeLinkPartnerAbility, 0, 
            /* REGDOC: Read register (EUR/CAL/RHEA: 07.003F) */
            AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_AutonegotiationEeeLinkPartnerAbility_2Register, 0));
        AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, ang10GBaseTStatus2, 0, 
            /* REGDOC: Read register (EUR/CAL/RHEA: 07.0041) */
            AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_Autonegotiation10GBaseT_Status_2Register, 0));

        linkPartnerStatus->bzCapabilities._2_5G = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0021.5) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_StatusRegister, 
              ang10GBaseTStatus, linkPartner_2_5gbase_tAbility) ? True : False;
        linkPartnerStatus->bzCapabilities._5G = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0021.6) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_StatusRegister, 
              ang10GBaseTStatus, linkPartner_5gbase_tAbility) ? True : False;
        linkPartnerStatus->bzCapabilities._2_5G_EEE = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.003F.0) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_AutonegotiationEeeLinkPartnerAbility_2Register, 
              angEeeLinkPartnerAbility, linkPartner_2_5gbase_tEee) ? True : False;
        linkPartnerStatus->bzCapabilities._5G_EEE = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.003F.1) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_AutonegotiationEeeLinkPartnerAbility_2Register, 
              angEeeLinkPartnerAbility, linkPartner_5gbase_tEee) ? True : False;
        linkPartnerStatus->bzCapabilities._2_5G_fastRetrain = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0021.3) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_StatusRegister, 
              ang10GBaseTStatus, linkPartner_2_5gbase_tFastRetrainAbility) ? True : False;
        linkPartnerStatus->bzCapabilities._5G_fastRetrain = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0021.4) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_StatusRegister, 
              ang10GBaseTStatus, linkPartner_5gbase_tFastRetrainAbility) ? True : False;
        linkPartnerStatus->bzCapabilities._2_5G_THP_BypassRequest = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0041.3) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_Status_2Register, 
              ang10GBaseTStatus2, linkPartner_2_5gbase_tTHP_BypassRequest) ? True : False;
        linkPartnerStatus->bzCapabilities._5G_THP_BypassRequest = 
          /* REGDOC: Get local representation of bitfield (EUR/CAL/RHEA: 07.0041.2) */
          AQ_API_BitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, 
              AQ_Autonegotiation10GBaseT_Status_2Register, 
              ang10GBaseTStatus2, linkPartner_5gbase_tTHP_BypassRequest) ? True : False;
      }
      break;
  }
                                                                                                    
  if (linkPartnerStatus->aquantiaDevice)
  {
    AQ_API_AssignWordOfLocalStruct(angRxLinkPartnerStatus, 3, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.E820 + 3) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationReceiveLinkPartnerStatus, 3));
    linkPartnerStatus->firmwareVersionMajor = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.E823.F:8) */
      AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReceiveLinkPartnerStatus, 
          angRxLinkPartnerStatus, linkPartnerFirmwareMajorRevisionNumber);
    linkPartnerStatus->firmwareVersionMinor = 
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.E823.7:0) */
      AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReceiveLinkPartnerStatus, 
          angRxLinkPartnerStatus, linkPartnerFirmwareMinorRevisionNumber);
  }

  return AQ_RET_OK;
}

/*@}*/



/**********************************************************************************************************************
*                                               Alarms
**********************************************************************************************************************/

/*! \addtogroup alarms
  @{
*/

/*! \page page1 Interrupt Structure
\verbatim
  Interrupt and Mask Overview:

  There are two chains of interrupts and masks in the PHY: standard and vendor.  Ultimately, all of them end up
  triggering the INT* pin.  Prior to that, there are 2 levels are hierarchy on the standard interrupt side, and
  3 levels on the vendor side.  This can be diagrammed as follows:

    ------------------------------------------------------------------------------------------------------------------
                                                    Interrupts
    ------------------------------------------------------------------------------------------------------------------
    AQ_GlobalChip_wideStandardInterruptFlags
       ^
       |
       |<- 0x0 -- allVendorAlarmsInterrupt (AQ_GlobalChip_wideVendorInterruptFlags)
       |            ^
       |            |
       |            |<- 0x2 -- globalAlarms_1Interrupt (AQ_GlobalAlarms.word0)
       |            |
       |            |<- 0xB -- gbeVendorAlarmInterrupt (AQ_GbePhyVendorGlobalInterruptFlags)
       |            |             |
       |            |             |<- 0x2 -- vendorSpecificSgmiiRxAlarms_1Interrupt (AQ_GbePhySgmiiRxAlarms.word0)
       |            |             |<- 0x4 -- vendorSpecificSgmiiTxAlarms_1Interrupt (AQ_GbePhySgmiiTxAlarms.word0)
       |            |
       |            |<- 0xC -- autonegotiationVendorAlarmInterrupt (AQ_AutonegotiationVendorGlobalInterruptFlags)
       |            |             |
       |            |             |<- 0xA -- vendorSpecificAlarms_1Interrupt (AQ_AutonegotiationTransmitVendorAlarms.word0)
       |            |             |<- 0x0 -- vendorSpecificRxAlarms_3Interrupt (AQ_AutonegotiationReceiveVendorAlarms.word2)
       |            |
       |            |<- 0xD -- phyXS_VendorAlarmInterrupt (AQ_PhyXS_VendorGlobalInterruptFlags)
       |            |             |
       |            |             |<- 0xA -- vendorSpecificTxAlarms_1Interrupt (AQ_PhyXS_Transmit_xauiRx_VendorAlarms.word0)
       |            |             |<- 0x9 -- vendorSpecificTxAlarms_2Interrupt (AQ_PhyXS_Transmit_xauiRx_VendorAlarms.word1)
       |            |             |<- 0x8 -- vendorSpecificTxAlarms_3Interrupt (AQ_PhyXS_Transmit_xauiRx_VendorAlarms.word2)
       |            |
       |            |<- 0xE -- pcsVendorAlarmInterrupt (AQ_PcsVendorGlobalInterruptFlags)
       |                          |
       |                          |<- 0x5 -- vendorSpecificRxAlarms_1Interrupt (AQ_PcsReceiveVendorAlarms.word0)
       |                          |<- 0x1 -- vendorSpecificRxAlarms_6Interrupt (AQ_PcsReceiveVendorAlarms.word5)
       |                          |<- 0x0 -- vendorSpecificRxAlarms_7Interrupt (AQ_PcsReceiveVendorAlarms.word6)
       |
       |<- 0x8 -- autonegotiationStandardAlarms_1Interrupt (AQ_AutonegotiationStandardStatus_1)
       |<- 0x7 -- autonegotiationStandardAlarms_2Interrupt (AQ_Autonegotiation10GBaseT_StatusRegister)
       |
       |<- 0xA -- phyXS_StandardAlarms_1Interrupt (AQ_PhyXS_StandardStatus_1)
       |<- 0x9 -- phyXS_StandardAlarms_2Interrupt (AQ_PhyXS_StandardStatus_2)
       |
       |<- 0xD -- pcsStandardAlarm_1Interrupt (AQ_PcsStandardStatus_1)
       |<- 0xC -- pcsStandardAlarm_2Interrupt (AQ_PcsStandardStatus_2)
       |<- 0xB -- pcsStandardAlarm_3Interrupt (AQ_Pcs10GBaseT_Status)
       |
       |<- 0xF -- pmaStandardAlarm_1Interrupt (AQ_PmaStandardStatus_1)
       |<- 0xE -- pmaStandardAlarm_2Interrupt (AQ_PmaStandardStatus_2)

  NOTE!!! In the top level flags registers in each MMD, there are standard alarms reported, as well as vendor alarms.
          These are a duplication of the alarm at the top-level in AQ_GlobalChip_wideStandardInterruptFlags and so
          are superfluous.

    ------------------------------------------------------------------------------------------------------------------
                                                    Masks
    ------------------------------------------------------------------------------------------------------------------
    AQ_GlobalInterruptChip_wideStandardMask
       ^
       |
       |<- 0x0 -- allVendorAlarmsInterruptMask (AQ_GlobalChip_wideVendorInterruptMask)
       |            ^
       |            |
       |            |<- 0x2 -- globalAlarms_1InterruptMask (AQ_GlobalInterruptMask.word0)
       |            |
       |            |<- 0xB -- gbeVendorAlarmInterruptMask
       |            |             |
       |            |             |<---AQ_GbePhySgmiiRxInterruptMask.word0
       |            |             |<---AQ_GbePhySgmiiTxInterruptMask.word0
       |            |
       |            |<- 0xC -- autonegotiationVendorAlarmInterruptMask
       |            |             |
       |            |             |<---AQ_AutonegotiationTransmitVendorInterruptMask.word0
       |            |             |<---AQ_AutonegotiationReceiveVendorInterruptMask.word2
       |            |
       |            |<- 0xD -- phyXS_VendorAlarmInterruptMask
       |            |             |
       |            |             |<---AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.word0
       |            |             |<---AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.word1
       |            |             |<---AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.word2
       |            |
       |            |<- 0xE -- pcsVendorAlarmInterruptMask
       |                          |
       |                          |<---AQ_PcsReceiveVendorInterruptMask.word0
       |                          |<---AQ_PcsReceiveVendorInterruptMask.word5
       |                          |<---AQ_PcsReceiveVendorInterruptMask.word6
       |
       |<- 0x8 -- autonegotiationStandardAlarms_1InterruptMask (AQ_AutonegotiationStandardInterruptMask.word0)
       |<- 0x7 -- autonegotiationStandardAlarms_2InterruptMask (AQ_AutonegotiationStandardInterruptMask.word1)
       |
       |<- 0xA -- phyXS_StandardAlarms_1InterruptMask (AQ_PhyXS_Transmit_xauiRx_StandardLASI_InterruptMask.word0)
       |<- 0x9 -- phyXS_StandardAlarms_2InterruptMask (AQ_PhyXS_Transmit_xauiRx_StandardLASI_InterruptMask.word1)
       |
       |<- 0xD -- pcsStandardAlarm_1InterruptMask (AQ_PcsReceiveStandardInterruptMask.word0)
       |<- 0xC -- pcsStandardAlarm_2InterruptMask (AQ_PcsReceiveStandardInterruptMask.word1)
       |<- 0xB -- pcsStandardAlarm_3InterruptMask (AQ_PcsReceiveStandardInterruptMask.word2)
       |
       |<- 0xF -- pmaStandardAlarm_1InterruptMask (AQ_PmaTransmitStandardInterruptMask.word0)
       |<- 0xE -- pmaStandardAlarm_2InterruptMask (AQ_PmaTransmitStandardInterruptMask.word0)

  Given this, the strategy for responding to interrupts is to traverse the tree downwards, inspecting each of
  interrupt summary bits until the correct interrupt(s) at the bottom are isolated.  For standard interrupts, this can
  be done in two reads, and for vendor interrupts in 3 reads.

  Masking is done using the masks at the bottom, and when responding to interrupts, the top level register can be
  masked off so the sources of the interrupts can be understood.  The API uses this strategy and marks the top level as
  either "AllEnabledInterruptsOn" or "AllInterruptsOff".  The AllInterruptsOff function masks everything, and the
  AllEnabledInterruptsOn function intelligently restores the only those top-level interrupts that have unmasked
  interrupts underneath them, ensuring that only valid interrupts are queried, saving time in isolating multiple alarm
  sources.

  The relation of the alarms to the structures is given below:

  *******************************************************************************************************************
                                           Standard Interrupt Structure:
  *******************************************************************************************************************

    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.autonegotiationStandardAlarms_1Interrupt
    {
      AQ_AutonegotiationVendorGlobalInterruptFlags.u0.bits_0.standardAlarms_1Interrupt
      {
        AQ_AutonegotiationStandardStatus_1.u0.bits_0.linkStatus*                                          autonegotiationAlarms.linkFail
        AQ_AutonegotiationStandardStatus_1.u0.bits_0.remoteFault                                          autonegotiationAlarms.remoteFault
      }
    }
    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.autonegotiationStandardAlarms_2Interrupt
    {
      AQ_AutonegotiationVendorGlobalInterruptFlags.u0.bits_0.standardAlarms_2Interrupt
      {
        AQ_Autonegotiation10GBaseT_StatusRegister.u0.bits_0.master_slaveConfigurationFault                autonegotiationAlarms.masterSlaveConfigurationFault
      }
    }
    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.phyXS_StandardAlarms_1Interrupt
    {
      AQ_PhyXS_VendorGlobalInterruptFlags.u0.bits_0.standardAlarms_1Interrupt
      {
        AQ_PhyXS_StandardStatus_1.u0.bits_0.phyXS_TransmitLinkAlignmentStatus*                            XAUI_Alarms.lossOfLaneAlignment
      }
    }
    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.phyXS_StandardAlarms_2Interrupt
    {
      AQ_PhyXS_VendorGlobalInterruptFlags.u0.bits_0.standardAlarms_2Interrupt
      {
        AQ_PhyXS_StandardStatus_2.u0.bits_0.receiveFault                                                  XAUI_Alarms.PHY_XS_ReceiveFault
        AQ_PhyXS_StandardStatus_2.u0.bits_0.transmitFault                                                 XAUI_Alarms.PHY_XS_TransmitFault
      }
    }
    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.pcsStandardAlarm_1Interrupt
    {
      AQ_PcsVendorGlobalInterruptFlags.u0.bits_0.standardAlarm_1Interrupt
      {
        AQ_PcsStandardStatus_1.u0.bits_0.pcsReceiveLinkStatus*                                            _10GBASE_T_Alarms.PCS_LinkFail
      }
    }
    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.pcsStandardAlarm_2Interrupt
    {
      AQ_PcsVendorGlobalInterruptFlags.u0.bits_0.standardAlarm_2Interrupt
      {
        AQ_PcsStandardStatus_2.u0.bits_0.receiveFault                                                     _10GBASE_T_Alarms.PCS_ReceiveFault
        AQ_PcsStandardStatus_2.u0.bits_0.transmitFault                                                    _10GBASE_T_Alarms.PCS_TransmitFault
      }
    }
    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.pcsStandardAlarm_3Interrupt
    {
      AQ_PcsVendorGlobalInterruptFlags.u0.bits_0.standardAlarm_3Interrupt
      {
        AQ_Pcs10GBaseT_Status.u1.bits_1._10gbase_tHighBerLatched                                          _10GBASE_T_Alarms.highBER
        AQ_Pcs10GBaseT_Status.u1.bits_1._10gbase_tPcsBlockLockLatched*                                    _10GBASE_T_Alarms.lossOfBlockLock
      }
    }
    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.pmaStandardAlarm_1Interrupt
    {
      AQ_PmaVendorGlobalInterruptFlags.u0.bits_0.standardAlarm_1Interrupt
      {
        AQ_PmaStandardStatus_1.u0.bits_0.pmaReceiveLinkStatus*                                            _10GBASE_T_Alarms.PMA_LinkFail
      }
    }
    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.pmaStandardAlarm_2Interrupt
    {
      AQ_PmaVendorGlobalInterruptFlags.u0.bits_0.standardAlarm_2Interrupt
      {
        AQ_PmaStandardStatus_2.u0.bits_0.receiveFault                                                     _10GBASE_T_Alarms.PMA_ReceiveFault
        AQ_PmaStandardStatus_2.u0.bits_0.transmitFault                                                    _10GBASE_T_Alarms.PMA_TransmitFault
      }
    }


  *******************************************************************************************************************
                                           Vendor Interrupt Structure:
  *******************************************************************************************************************

    AQ_GlobalChip_wideStandardInterruptFlags.u0.bits_0.allVendorAlarmsInterrupt
    {
      AQ_GlobalChip_wideVendorInterruptFlags.u0.bits_0.globalAlarms_1Interrupt
      {
        AQ_GlobalAlarms.u0.bits_0.resetCompleted                                                             globalAlarms.resetComplete
        AQ_GlobalAlarms.u0.bits_0.deviceFault                                                                globalAlarms.deviceFault
        AQ_GlobalAlarms.u0.bits_0.highTemperatureFailure                                                     globalAlarms.highTemperatureFailure
        AQ_GlobalAlarms.u0.bits_0.highTemperatureWarning                                                     globalAlarms.highTemperatureWarning
        AQ_GlobalAlarms.u0.bits_0.lowTemperatureFailure                                                      globalAlarms.lowTemperatureFailure
        AQ_GlobalAlarms.u0.bits_0.lowTemperatureWarning                                                      globalAlarms.lowTemperatureWarning
      }
      AQ_GlobalChip_wideVendorInterruptFlags.u0.bits_0.gbeVendorAlarmInterrupt
      {
        AQ_GbePhyVendorGlobalInterruptFlags.u0.bits_0.vendorSpecificSgmiiRxAlarms_1Interrupt
        {
          AQ_GbePhySgmiiRxAlarms.u0.bits_0.sgmii0RxCodeViolationError                                        SGMII0_Alarms.codeViolationError
          AQ_GbePhySgmiiRxAlarms.u0.bits_0.sgmii0RxRunningDisparityError                                     SGMII0_Alarms.runningDisparityError
          AQ_GbePhySgmiiRxAlarms.u0.bits_0.sgmii0RxLossOfSignal                                              SGMII0_Alarms.lossOfSignal
          AQ_GbePhySgmiiRxAlarms.u0.bits_0.sgmii1RxCodeViolationError                                        SGMII1_Alarms.codeViolationError
          AQ_GbePhySgmiiRxAlarms.u0.bits_0.sgmii1RxRunningDisparityError                                     SGMII1_Alarms.runningDisparityError
          AQ_GbePhySgmiiRxAlarms.u0.bits_0.sgmii1RxLossOfSignal                                              SGMII1_Alarms.lossOfSignal
        }
        AQ_GbePhyVendorGlobalInterruptFlags.u0.bits_0.vendorSpecificSgmiiTxAlarms_1Interrupt
        {
          AQ_GbePhySgmiiTxAlarms.u0.bits_0.sgmii0WakeUpFrameDetected                                         autonegotiationAlarms.wakeUpFrameDetected
          AQ_GbePhySgmiiTxAlarms.u0.bits_0.sgmii0MagicPacketFrameDetected                                    autonegotiationAlarms.wakeUpPacketDetected
          AQ_GbePhySgmiiTxAlarms.u0.bits_0.sgmii1WakeUpFrameDetected                                         autonegotiationAlarms.wakeUpFrameDetected
          AQ_GbePhySgmiiTxAlarms.u0.bits_0.sgmii1MagicPacketFrameDetected                                    autonegotiationAlarms.wakeUpPacketDetected
        }
      }
      AQ_GlobalChip_wideVendorInterruptFlags.u0.bits_0.autonegotiationVendorAlarmInterrupt
      {
        AQ_AutonegotiationVendorGlobalInterruptFlags.u0.bits_0.vendorSpecificAlarms_1Interrupt
        {
          AQ_AutonegotiationTransmitVendorAlarms.u0.bits_0.connectionStateChange                             globalAlarms.stateChange
          AQ_AutonegotiationTransmitVendorAlarms.u0.bits_0.automaticDownshift                                autonegotiationAlarms.automaticDownshift
          AQ_AutonegotiationTransmitVendorAlarms.u0.bits_0.autonegotiationCompletedForSupportedRate          autonegotiationAlarms.autonegotiationCompletedForSupportedRate
          AQ_AutonegotiationTransmitVendorAlarms.u0.bits_0.autonegotiationCompletedForNon_supportedRate      autonegotiationAlarms.autonegotiationCompletedForNonSupportedRate
        }
        AQ_AutonegotiationVendorGlobalInterruptFlags.u0.bits_0.vendorSpecificRxAlarms_3Interrupt
        {
          AQ_AutonegotiationReceiveVendorAlarms.u2.bits_2._10base_tDeviceDetect*                             autonegotiationAlarms._10BASE_T_Detect
        }
      }
      AQ_GlobalChip_wideVendorInterruptFlags.u0.bits_0.phyXS_VendorAlarmInterrupt
      {
        AQ_PhyXS_VendorGlobalInterruptFlags.u0.bits_0.vendorSpecificTxAlarms_1Interrupt
        {
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u0.bits_0.prbsTestPatternCheckerSyncError[0]                 testAlarms.XAUI_PRBS_LossOfSynchronization[0]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u0.bits_0.prbsTestPatternCheckerSyncError[1]                 testAlarms.XAUI_PRBS_LossOfSynchronization[1]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u0.bits_0.prbsTestPatternCheckerSyncError[2]                 testAlarms.XAUI_PRBS_LossOfSynchronization[2]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u0.bits_0.prbsTestPatternCheckerSyncError[3]                 testAlarms.XAUI_PRBS_LossOfSynchronization[3]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u0.bits_0.crpatTestPatternCheckerSyncError                   testAlarms.CRPAT_LossOfSynchronization
        }
        AQ_PhyXS_VendorGlobalInterruptFlags.u0.bits_0.vendorSpecificTxAlarms_2Interrupt
        {
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxRunningDisparityError[0]                     XAUI_Alarms.runningDisparityError[0]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxRunningDisparityError[1]                     XAUI_Alarms.runningDisparityError[1]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxRunningDisparityError[2]                     XAUI_Alarms.runningDisparityError[2]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxRunningDisparityError[3]                     XAUI_Alarms.runningDisparityError[3]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxCodeViolationError[0]                        XAUI_Alarms.codeViolationError[0]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxCodeViolationError[1]                        XAUI_Alarms.codeViolationError[1]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxCodeViolationError[2]                        XAUI_Alarms.codeViolationError[2]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxCodeViolationError[3]                        XAUI_Alarms.codeViolationError[3]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u1.bits_1.xauiRxSequenceOrderedSetDeletion                   XAUI_Alarms.sequenceOrderedSetDeletion
        }
        AQ_PhyXS_VendorGlobalInterruptFlags.u0.bits_0.vendorSpecificTxAlarms_3Interrupt
        {
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u2.bits_2.lossOfSignal[0]                                    XAUI_Alarms.lossOfSignal[0]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u2.bits_2.lossOfSignal[1]                                    XAUI_Alarms.lossOfSignal[1]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u2.bits_2.lossOfSignal[2]                                    XAUI_Alarms.lossOfSignal[2]
          AQ_PhyXS_Transmit_xauiRx_VendorAlarms.u2.bits_2.lossOfSignal[3]                                    XAUI_Alarms.lossOfSignal[3]
        }
      }
      AQ_GlobalChip_wideVendorInterruptFlags.u0.bits_0.pcsVendorAlarmInterrupt
      {
        AQ_PcsVendorGlobalInterruptFlags.u0.bits_0.vendorSpecificRxAlarms_1Interrupt
        {
          AQ_PcsReceiveVendorAlarms.u0.bits_0.invalid_65bBlock                                               _10GBASE_T_Alarms.invalid65B_Block
          AQ_PcsReceiveVendorAlarms.u0.bits_0.ldpcDecodeFailure                                              _10GBASE_T_Alarms.LDPC_Error
          AQ_PcsReceiveVendorAlarms.u0.bits_0.crcError                                                       _10GBASE_T_Alarms.CRC8_Error
        }
        AQ_PcsVendorGlobalInterruptFlags.u0.bits_0.vendorSpecificRxAlarms_6Interrupt
        {
          AQ_PcsReceiveVendorAlarms.u5.bits_5.xfi0Invalid_66bCharacterReceived                               XFI0_Alarms.invalid66B_Block
          AQ_PcsReceiveVendorAlarms.u5.bits_5.xfi1Invalid_66bCharacterReceived                               XFI1_Alarms.invalid66B_Block
        }
        AQ_PcsVendorGlobalInterruptFlags.u0.bits_0.vendorSpecificRxAlarms_7Interrupt
        {
          AQ_PcsReceiveVendorAlarms.u6.bits_6.xfi0BlockLockStatus                                            XFI0_Alarms.lossOfBlockLock
          AQ_PcsReceiveVendorAlarms.u6.bits_6.xfi0HighBerStatus                                              XFI0_Alarms.highBer
          AQ_PcsReceiveVendorAlarms.u6.bits_6.xfi1BlockLockStatus                                            XFI1_Alarms.lossOfBlockLock
          AQ_PcsReceiveVendorAlarms.u6.bits_6.xfi1HighBerStatus                                              XFI1_Alarms.highBer
        }
      }
    }


  Similarly, the mask structures are:

  *******************************************************************************************************************
                                           Standard Mask Structure:
  *******************************************************************************************************************

    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.autonegotiationStandardAlarms_1InterruptMask
    {
      {
        AQ_AutonegotiationStandardInterruptMask.u0.bits_0.linkStatusMask                                     autonegotiationAlarmMask.linkFail
        AQ_AutonegotiationStandardInterruptMask.u0.bits_0.remoteFaultMask                                    autonegotiationAlarmMask.remoteFault
      }
    }
    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.autonegotiationStandardAlarms_2InterruptMask
    {
      {
        AQ_AutonegotiationStandardInterruptMask.u1.bits_1.master_slaveConfigurationFaultMask                 autonegotiationAlarmMask.masterSlaveConfigurationFault
      }
    }
    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.phyXS_StandardAlarms_1InterruptMask
    {
      {
        AQ_PhyXS_Transmit_xauiRx_StandardLASI_InterruptMask.u0.bits_0.phyXS_TransmitLinkAlignmentStatusMask  XAUI_AlarmMask.lossOfLaneAlignment
      }
    }
    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.phyXS_StandardAlarms_2InterruptMask
    {
      {
        AQ_PhyXS_Transmit_xauiRx_StandardLASI_InterruptMask.u1.bits_1.receiveFaultMask                       XAUI_AlarmMask.PHY_XS_ReceiveFault
        AQ_PhyXS_Transmit_xauiRx_StandardLASI_InterruptMask.u1.bits_1.transmitFaultMask                      XAUI_AlarmMask.PHY_XS_TransmitFault
      }
    }
    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.pcsStandardAlarm_1InterruptMask
    {
      {
        AQ_PcsReceiveStandardInterruptMask.u0.bits_0.pcsReceiveLinkStatusMask                                _10GBASE_T_AlarmMask.PCS_LinkFail
      }
    }
    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.pcsStandardAlarm_2InterruptMask
    {
      {
        AQ_PcsReceiveStandardInterruptMask.u1.bits_1.receiveFaultMask                                        _10GBASE_T_AlarmMask.PCS_ReceiveFault
        AQ_PcsReceiveStandardInterruptMask.u1.bits_1.transmitFaultMask                                       _10GBASE_T_AlarmMask.PCS_TransmitFault
      }
    }
    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.pcsStandardAlarm_3InterruptMask
    {
      {
        AQ_PcsReceiveStandardInterruptMask.u2.bits_2._10gbase_tHighBerLatchedMask                            _10GBASE_T_AlarmMask.highBER
        AQ_PcsReceiveStandardInterruptMask.u2.bits_2._10gbase_tPcsBlockLockLatchedMask                       _10GBASE_T_AlarmMask.lossOfBlockLock
      }
    }
    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.pmaStandardAlarm_1InterruptMask
    {
      {
        AQ_PmaTransmitStandardInterruptMask.u0.bits_0.pmaReceiveLinkStatusMask                               _10GBASE_T_AlarmMask.PMA_LinkFail
      }
    }
    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.pmaStandardAlarm_2InterruptMask
    {
      {
        AQ_PmaTransmitStandardInterruptMask.u1.bits_1.receiveFaultMask                                       _10GBASE_T_AlarmMask.PMA_ReceiveFault
        AQ_PmaTransmitStandardInterruptMask.u1.bits_1.transmitFaultMask                                      _10GBASE_T_AlarmMask.PMA_TransmitFault
      }
    }

  *******************************************************************************************************************
                                           Vendor Mask Structure:
  *******************************************************************************************************************

    AQ_GlobalInterruptChip_wideStandardMask.u0.bits_0.allVendorAlarmsInterruptMask
    {
      AQ_GlobalInterruptChip_wideVendorMask.u0.bits_0.globalAlarms_1InterruptMask
      {
        AQ_GlobalInterruptMask.u0.bits_0.resetCompletedMask                                                  globalAlarmMask.resetComplete
        AQ_GlobalInterruptMask.u0.bits_0.deviceFaultMask                                                     globalAlarmMask.deviceFault
        AQ_GlobalInterruptMask.u0.bits_0.highTemperatureFailureMask                                          globalAlarmMask.highTemperatureFailure
        AQ_GlobalInterruptMask.u0.bits_0.highTemperatureWarningMask                                          globalAlarmMask.highTemperatureWarning
        AQ_GlobalInterruptMask.u0.bits_0.lowTemperatureFailureMask                                           globalAlarmMask.lowTemperatureFailure
        AQ_GlobalInterruptMask.u0.bits_0.lowTemperatureWarningMask                                           globalAlarmMask.lowTemperatureWarning
      }
      AQ_GlobalInterruptChip_wideVendorMask.u0.bits_0.gbeVendorAlarmInterruptMask
      {
        {
          AQ_GbePhySgmiiRxInterruptMask.u0.bits_0.sgmii0RxCodeViolationErrorMask                             SGMII0_AlarmMask.codeViolationError
          AQ_GbePhySgmiiRxInterruptMask.u0.bits_0.sgmii0RxRunningDisparityErrorMask                          SGMII0_AlarmMask.runningDisparityError
          AQ_GbePhySgmiiRxInterruptMask.u0.bits_0.sgmii0RxLossOfSignalMask                                   SGMII0_AlarmMask.lossOfSignal
          AQ_GbePhySgmiiRxInterruptMask.u0.bits_0.sgmii1RxCodeViolationErrorMask                             SGMII1_AlarmMask.codeViolationError
          AQ_GbePhySgmiiRxInterruptMask.u0.bits_0.sgmii1RxRunningDisparityErrorMask                          SGMII1_AlarmMask.runningDisparityError
          AQ_GbePhySgmiiRxInterruptMask.u0.bits_0.sgmii1RxLossOfSignalMask                                   SGMII1_AlarmMask.lossOfSignal
        }
        {
          AQ_GbePhySgmiiTxInterruptMask.u0.bits_0.sgmii0WakeUpFrameDetectedMask                              autonegotiationAlarmMask.wakeUpFrameDetected
          AQ_GbePhySgmiiTxInterruptMask.u0.bits_0.sgmii0MagicPacketFrameDetectedMask                         autonegotiationAlarmMask.wakeUpPacketDetected
          AQ_GbePhySgmiiTxInterruptMask.u0.bits_0.sgmii1WakeUpFrameDetectedMask                              autonegotiationAlarmMask.wakeUpFrameDetected
          AQ_GbePhySgmiiTxInterruptMask.u0.bits_0.sgmii1MagicPacketFrameDetectedMask                         autonegotiationAlarmMask.wakeUpPacketDetected
        }
      }
      AQ_GlobalInterruptChip_wideVendorMask.u0.bits_0.autonegotiationVendorAlarmInterruptMask
      {
        {
          AQ_AutonegotiationTransmitVendorInterruptMask.u0.bits_0.connectionStateChangeMask                         globalAlarmMask.stateChange
          AQ_AutonegotiationTransmitVendorInterruptMask.u0.bits_0.automaticDownshiftMask                            autonegotiationAlarmMask.automaticDownshift
          AQ_AutonegotiationTransmitVendorInterruptMask.u0.bits_0.autonegotiationCompletedForSupportedRateMask      autonegotiationAlarmMask.autonegotiationCompletedForSupportedRate
          AQ_AutonegotiationTransmitVendorInterruptMask.u0.bits_0.autonegotiationCompletedForNon_supportedRateMask  autonegotiationAlarmMask.autonegotiationCompletedForNonSupportedRate
        }
        {
          AQ_AutonegotiationReceiveVendorInterruptMask.u2.bits_2._10base_tDeviceDetectMask                   autonegotiationAlarmMask._10BASE_T_Detect
        }
      }
      AQ_GlobalInterruptChip_wideVendorMask.u0.bits_0.phyXS_VendorAlarmInterruptMask
      {
        {
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u0.bits_0.prbsTestPatternCheckerSyncErrorMask[0]      testAlarmMask.XAUI_PRBS_LossOfSynchronization[0]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u0.bits_0.prbsTestPatternCheckerSyncErrorMask[1]      testAlarmMask.XAUI_PRBS_LossOfSynchronization[1]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u0.bits_0.prbsTestPatternCheckerSyncErrorMask[2]      testAlarmMask.XAUI_PRBS_LossOfSynchronization[2]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u0.bits_0.prbsTestPatternCheckerSyncErrorMask[3]      testAlarmMask.XAUI_PRBS_LossOfSynchronization[3]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u0.bits_0.crpatTestPatternCheckerSyncErrorMask        testAlarmMask.CRPAT_LossOfSynchronization
        }
        {
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxRunningDisparityErrorMask[0]          XAUI_AlarmMask.runningDisparityError[0]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxRunningDisparityErrorMask[1]          XAUI_AlarmMask.runningDisparityError[1]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxRunningDisparityErrorMask[2]          XAUI_AlarmMask.runningDisparityError[2]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxRunningDisparityErrorMask[3]          XAUI_AlarmMask.runningDisparityError[3]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxCodeViolationErrorMask[0]             XAUI_AlarmMask.codeViolationError[0]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxCodeViolationErrorMask[1]             XAUI_AlarmMask.codeViolationError[1]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxCodeViolationErrorMask[2]             XAUI_AlarmMask.codeViolationError[2]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxCodeViolationErrorMask[3]             XAUI_AlarmMask.codeViolationError[3]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u1.bits_1.xauiRxSequenceOrderedSetDeletionMask        XAUI_AlarmMask.sequenceOrderedSetDeletion
        }
        {
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u2.bits_2.lossOfSignalMask[0]                         XAUI_AlarmMask.lossOfSignal[0]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u2.bits_2.lossOfSignalMask[1]                         XAUI_AlarmMask.lossOfSignal[1]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u2.bits_2.lossOfSignalMask[2]                         XAUI_AlarmMask.lossOfSignal[2]
          AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask.u2.bits_2.lossOfSignalMask[3]                         XAUI_AlarmMask.lossOfSignal[3]
        }
      }
      AQ_GlobalInterruptChip_wideVendorMask.u0.bits_0.pcsVendorAlarmInterruptMask
      {
        {
          AQ_PcsReceiveVendorInterruptMask.u0.bits_0.invalid_65bBlockMask                                    _10GBASE_T_AlarmMask.invalid65B_Block
          AQ_PcsReceiveVendorInterruptMask.u0.bits_0.ldpcDecodeFailureMask                                   _10GBASE_T_AlarmMask.LDPC_Error
          AQ_PcsReceiveVendorInterruptMask.u0.bits_0.crcErrorMask                                            _10GBASE_T_AlarmMask.CRC8_Error
        }
        {
          AQ_PcsReceiveVendorInterruptMask.u5.bits_5.xfi0Invalid_66bCharacterReceivedMask                    XFI_AlarmMask.xfi0RxInvalid66bCharacter
          AQ_PcsReceiveVendorInterruptMask.u5.bits_5.xfi1Invalid_66bCharacterReceivedMask                    XFI_AlarmMask.xfi1RxInvalid66bCharacter
        }
        {
          AQ_PcsReceiveVendorInterruptMask.u6.bits_6.xfi0BlockLockStatusMask                                 XFI_AlarmMask.xfi0BlockLockStatus
          AQ_PcsReceiveVendorInterruptMask.u6.bits_6.xfi0HighBerStatusMask                                   XFI_AlarmMask.xfi0HighBerStatus
          AQ_PcsReceiveVendorInterruptMask.u6.bits_6.xfi1BlockLockStatusMask                                 XFI_AlarmMask.xfi1BlockLockStatus
          AQ_PcsReceiveVendorInterruptMask.u6.bits_6.xfi1HighBerStatusMask                                   XFI_AlarmMask.xfi1HighBerStatus
        }
      }
    }

    \endverbatim
*/

AQ_Retcode AQ_API_GetAlarmStatus
(
  AQ_API_Port* port,
  AQ_API_AlarmStatus* alarmStatus
)
{
  /* standard interrupts */
  AQ_API_DeclareLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationStandardStatus_1, autonegotiationStandardStatus_1)
  AQ_API_DeclareLocalStruct(AQ_Autonegotiation10GBaseT_StatusRegister, autonegotiation10GBaseT_StatusRegister)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_StandardStatus_1, phyXS_StandardStatus_1)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_StandardStatus_2, phyXS_StandardStatus_2)
  AQ_API_DeclareLocalStruct(AQ_PcsStandardStatus_1, pcsStandardStatus_1)
  AQ_API_DeclareLocalStruct(AQ_PcsStandardStatus_2, pcsStandardStatus_2)
  AQ_API_DeclareLocalStruct_DeviceRestricted(APPIA, AQ_Pcs10GBaseT_Status, pcs10GBaseT_Status)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_Pcs10G_Status, pcs10G_Status)
  AQ_API_DeclareLocalStruct(AQ_PmaStandardStatus_1, pmaStandardStatus_1)
  AQ_API_DeclareLocalStruct(AQ_PmaStandardStatus_2, pmaStandardStatus_2)
  /* vendor interrupts */
  AQ_API_DeclareLocalStruct(AQ_GlobalChip_wideVendorInterruptFlags, globalChip_wideVendorInterruptFlags)
  AQ_API_DeclareLocalStruct(AQ_GlobalAlarms, globalAlarms)
  AQ_API_DeclareLocalStruct(AQ_GbePhyVendorGlobalInterruptFlags, gbePhyVendorGlobalInterruptFlags)
  AQ_API_DeclareLocalStruct(AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms)
  AQ_API_DeclareLocalStruct(AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationVendorGlobalInterruptFlags, autonegotiationVendorGlobalInterruptFlags)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationReceiveVendorAlarms, autonegotiationReceiveVendorAlarms)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_VendorGlobalInterruptFlags, phyXS_VendorGlobalInterruptFlags)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorAlarms, phyXS_Receive_xauiTx_VendorAlarms)
  AQ_API_DeclareLocalStruct(AQ_PcsVendorGlobalInterruptFlags, pcsVendorGlobalInterruptFlags)
  AQ_API_DeclareLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms)
  AQ_API_DeclareLocalStruct(AQ_PmaVendorGlobalInterruptFlags, pmaVendorGlobalInterruptFlags)

  uint16_t readFlag;
  
  
  /* reset the standard interrupts */
  alarmStatus->autonegotiationAlarms.linkFail                                    = False;
  alarmStatus->autonegotiationAlarms.remoteFault                                 = False;
  alarmStatus->autonegotiationAlarms.masterSlaveConfigurationFault               = False;
  alarmStatus->XAUI_Alarms.lossOfLaneAlignment                                   = False;
  alarmStatus->XAUI_Alarms.PHY_XS_ReceiveFault                                   = False;
  alarmStatus->XAUI_Alarms.PHY_XS_TransmitFault                                  = False;
  alarmStatus->_10GBASE_T_Alarms.PCS_LinkFail                                    = False;
  alarmStatus->_10GBASE_T_Alarms.PCS_ReceiveFault                                = False;
  alarmStatus->_10GBASE_T_Alarms.PCS_TransmitFault                               = False;
  alarmStatus->_10GBASE_T_Alarms.highBER                                         = False;
  alarmStatus->_10GBASE_T_Alarms.lossOfBlockLock                                 = False;
  alarmStatus->_10GBASE_T_Alarms.PMA_LinkFail                                    = False;
  alarmStatus->_10GBASE_T_Alarms.PMA_ReceiveFault                                = False;
  alarmStatus->_10GBASE_T_Alarms.PMA_TransmitFault                               = False;

  /* reset the vendor interrupts */
  alarmStatus->globalAlarms.resetComplete                                        = False;
  alarmStatus->globalAlarms.deviceFault                                          = False;
  alarmStatus->globalAlarms.ipPhone                                              = False;
  alarmStatus->globalAlarms.MDIOCommandOverflow                                  = False;
  alarmStatus->globalAlarms.MDIOTimeout                                          = False;
  alarmStatus->globalAlarms.smartPowerDown                                       = False;
  alarmStatus->globalAlarms.watchdogTimer                                        = False;
  alarmStatus->globalAlarms.highTemperatureFailure                               = False;
  alarmStatus->globalAlarms.highTemperatureWarning                               = False;
  alarmStatus->globalAlarms.lowTemperatureFailure                                = False;
  alarmStatus->globalAlarms.lowTemperatureWarning                                = False;
  alarmStatus->SGMII0_Alarms.codeViolationError                                  = False;
  alarmStatus->SGMII0_Alarms.runningDisparityError                               = False;
  alarmStatus->SGMII0_Alarms.lossOfSignal                                        = False;
  alarmStatus->SGMII1_Alarms.codeViolationError                                  = False;
  alarmStatus->SGMII1_Alarms.runningDisparityError                               = False;
  alarmStatus->SGMII1_Alarms.lossOfSignal                                        = False;
  alarmStatus->autonegotiationAlarms.wakeUpFrameDetected                         = False;
  alarmStatus->autonegotiationAlarms.wakeUpPacketDetected                        = False;
  alarmStatus->globalAlarms.stateChange                                          = False;
  alarmStatus->autonegotiationAlarms.automaticDownshift                          = False;
  alarmStatus->autonegotiationAlarms.autonegotiationCompletedForSupportedRate    = False;
  alarmStatus->autonegotiationAlarms.autonegotiationCompletedForNonSupportedRate = False;
  alarmStatus->autonegotiationAlarms._10BASE_T_Detect                            = False;
  alarmStatus->autonegotiationAlarms.linkConnectOrDisconnect                     = False;
  alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[0]                     = False;
  alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[1]                     = False;
  alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[2]                     = False;
  alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[3]                     = False;
  alarmStatus->testAlarms.CRPAT_LossOfSynchronization                            = False;
  alarmStatus->XAUI_Alarms.runningDisparityError[0]                              = False;
  alarmStatus->XAUI_Alarms.runningDisparityError[1]                              = False;
  alarmStatus->XAUI_Alarms.runningDisparityError[2]                              = False;
  alarmStatus->XAUI_Alarms.runningDisparityError[3]                              = False;
  alarmStatus->XAUI_Alarms.codeViolationError[0]                                 = False;
  alarmStatus->XAUI_Alarms.codeViolationError[1]                                 = False;
  alarmStatus->XAUI_Alarms.codeViolationError[2]                                 = False;
  alarmStatus->XAUI_Alarms.codeViolationError[3]                                 = False;
  alarmStatus->XAUI_Alarms.sequenceOrderedSetDeletion                            = False;
  alarmStatus->XAUI_Alarms.lossOfSignal[0]                                       = False;
  alarmStatus->XAUI_Alarms.lossOfSignal[1]                                       = False;
  alarmStatus->XAUI_Alarms.lossOfSignal[2]                                       = False;
  alarmStatus->XAUI_Alarms.lossOfSignal[3]                                       = False;
  alarmStatus->_10GBASE_T_Alarms.invalid65B_Block                                = False;
  alarmStatus->_10GBASE_T_Alarms.LDPC_Error                                      = False;
  alarmStatus->_10GBASE_T_Alarms.CRC8_Error                                      = False;
  alarmStatus->XFI0_Alarms.invalid66B_Block                                      = False;
  alarmStatus->XFI0_Alarms.lossOfBlockLock                                       = False;
  alarmStatus->XFI0_Alarms.highBer                                               = False;
  alarmStatus->XFI1_Alarms.invalid66B_Block                                      = False;
  alarmStatus->XFI1_Alarms.lossOfBlockLock                                       = False;
  alarmStatus->XFI1_Alarms.highBer                                               = False;
  alarmStatus->SERDES_Alarms.sysIntfRxLinkDown                                   = False;
  alarmStatus->SERDES_Alarms.sysIntfRxLinkUp                                     = False;

  /* reset the top level summary alarms */
  alarmStatus->autonegotiationAlarmSet                                           = False;
  alarmStatus->_10GBASE_T_AlarmSet                                               = False;
  alarmStatus->XAUI_AlarmSet                                                     = False;
  alarmStatus->SGMII0_AlarmSet                                                   = False;
  alarmStatus->SGMII1_AlarmSet                                                   = False;
  alarmStatus->testAlarmSet                                                      = False;
  alarmStatus->globalAlarmSet                                                    = False;
  alarmStatus->XFI0_AlarmSet                                                     = False;
  alarmStatus->XFI1_AlarmSet                                                     = False;
  alarmStatus->SERDES_AlarmSet                                                   = False;

  /* reset the device fault code */
  alarmStatus->deviceFaultCode                                                   = 0;

  /*--------------------------------------------------------------------------------------------------------*/
  /*                                    Standard Interrupts                                                 */
  /*--------------------------------------------------------------------------------------------------------*/

  /* get the standard interrupts */
  AQ_API_AssignWordOfLocalStruct(globalChip_wideStandardInterruptFlags, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalChip_wideStandardInterruptFlags, 0));

  /* autonegotiation standard alarms */
  readFlag = 0;
  AQ_API_AssignWordOfLocalStruct(autonegotiationVendorGlobalInterruptFlags, 0, 0); /* Avoid uninitialized variable warning. */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.8) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, autonegotiationStandardAlarms_1Interrupt))
  {
    AQ_API_AssignWordOfLocalStruct(autonegotiationVendorGlobalInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.FC00) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationVendorGlobalInterruptFlags, 0));
    readFlag = 1;      /* indicate that autonegotiationVendorGlobalInterruptFlags has been read */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.FC00.F) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorGlobalInterruptFlags, autonegotiationVendorGlobalInterruptFlags, standardAlarms_1Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(autonegotiationStandardStatus_1, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0001) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationStandardStatus_1, 0));
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0001.2) */
      if (!AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationStandardStatus_1, autonegotiationStandardStatus_1, linkStatus)) alarmStatus->autonegotiationAlarms.linkFail = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0001.4) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationStandardStatus_1, autonegotiationStandardStatus_1, remoteFault)) alarmStatus->autonegotiationAlarms.remoteFault = True;
    }
  }
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.7) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, autonegotiationStandardAlarms_2Interrupt))
  {
    if (!readFlag) AQ_API_AssignWordOfLocalStruct(autonegotiationVendorGlobalInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.FC00) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationVendorGlobalInterruptFlags, 0));
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.FC00.E) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorGlobalInterruptFlags, autonegotiationVendorGlobalInterruptFlags, standardAlarms_2Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(autonegotiation10GBaseT_StatusRegister, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0021) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_StatusRegister, 0));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0021.F) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_StatusRegister, autonegotiation10GBaseT_StatusRegister, master_slaveConfigurationFault)) alarmStatus->autonegotiationAlarms.masterSlaveConfigurationFault = True;
    }
  }

  /* phyXS standard alarms */
  readFlag = 0;
  AQ_API_AssignWordOfLocalStruct(phyXS_VendorGlobalInterruptFlags, 0, 0); /* Avoid uninitialized variable warning. */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.A) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, phyXS_StandardAlarms_1Interrupt))
  {
    AQ_API_AssignWordOfLocalStruct(phyXS_VendorGlobalInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.FC00) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_VendorGlobalInterruptFlags, 0));
    readFlag = 1;      /* indicate that phyXS_VendorGlobalInterruptFlags has been read */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.FC00.F) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_VendorGlobalInterruptFlags, phyXS_VendorGlobalInterruptFlags, standardAlarms_1Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(phyXS_StandardStatus_1, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.0001) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_StandardStatus_1, 0));
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0001.2) */
      if (!AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_StandardStatus_1, phyXS_StandardStatus_1, phyXS_TransmitLinkAlignmentStatus)) alarmStatus->XAUI_Alarms.lossOfLaneAlignment = True;
    }
  }
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.9) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, phyXS_StandardAlarms_2Interrupt))
  {
    if (!readFlag) AQ_API_AssignWordOfLocalStruct(phyXS_VendorGlobalInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.FC00) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_VendorGlobalInterruptFlags, 0));
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.FC00.E) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_VendorGlobalInterruptFlags, phyXS_VendorGlobalInterruptFlags, standardAlarms_2Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(phyXS_StandardStatus_2, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.0008) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_StandardStatus_2, 0));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0008.A) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_StandardStatus_2, phyXS_StandardStatus_2, receiveFault)) alarmStatus->XAUI_Alarms.PHY_XS_ReceiveFault = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0008.B) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_StandardStatus_2, phyXS_StandardStatus_2, transmitFault)) alarmStatus->XAUI_Alarms.PHY_XS_TransmitFault = True;
    }
  }

  /* pcs standard alarms */
  readFlag = 0;
  AQ_API_AssignWordOfLocalStruct(pcsVendorGlobalInterruptFlags, 0, 0); /* Avoid uninitialized variable warning. */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.D) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, pcsStandardAlarm_1Interrupt))
  {
    AQ_API_AssignWordOfLocalStruct(pcsVendorGlobalInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.FC00) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_PcsVendorGlobalInterruptFlags, 0));
    readFlag = 1;      /* indicate that pcsVendorGlobalInterruptFlags has been read */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.FC00.F) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_PcsVendorGlobalInterruptFlags, pcsVendorGlobalInterruptFlags, standardAlarm_1Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(pcsStandardStatus_1, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.0001) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PcsStandardStatus_1, 0));
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.0001.2) */
      if (!AQ_API_BitfieldOfLocalStruct(AQ_PcsStandardStatus_1, pcsStandardStatus_1, pcsReceiveLinkStatus)) alarmStatus->_10GBASE_T_Alarms.PCS_LinkFail = True;
    }
  }
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.C) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, pcsStandardAlarm_2Interrupt))
  {
    if (!readFlag)
    {
      AQ_API_AssignWordOfLocalStruct(pcsVendorGlobalInterruptFlags, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.FC00) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PcsVendorGlobalInterruptFlags, 0));
      readFlag = 1;
    }
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.FC00.E) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_PcsVendorGlobalInterruptFlags, pcsVendorGlobalInterruptFlags, standardAlarm_2Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(pcsStandardStatus_2, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.0008) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PcsStandardStatus_2, 0));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.0008.A) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PcsStandardStatus_2, pcsStandardStatus_2, receiveFault)) alarmStatus->_10GBASE_T_Alarms.PCS_ReceiveFault = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.0008.B) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PcsStandardStatus_2, pcsStandardStatus_2, transmitFault)) alarmStatus->_10GBASE_T_Alarms.PCS_TransmitFault = True;
    }
  }
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, pcsStandardAlarm_3Interrupt))
  {
    if (!readFlag) AQ_API_AssignWordOfLocalStruct(pcsVendorGlobalInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.FC00) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_PcsVendorGlobalInterruptFlags, 0));
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.FC00.D) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_PcsVendorGlobalInterruptFlags, pcsVendorGlobalInterruptFlags, standardAlarm_3Interrupt))
    {
      switch (port->device)
      {
        case AQ_DEVICE_APPIA:
          AQ_API_AssignWordOfLocalStruct_DeviceRestricted(APPIA, pcs10GBaseT_Status, 1, 
              /* REGDOC: Read register (APPIA: 03.0020 + 1) */
              AQ_API_ReadRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_Pcs10GBaseT_Status, 1));
              /* REGDOC: Get local representation of bitfield (APPIA: 03.0021.E) */
          if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_Pcs10GBaseT_Status, pcs10GBaseT_Status, _10gbase_tHighBerLatched)) 
            alarmStatus->_10GBASE_T_Alarms.highBER = True;
               /* REGDOC: Get local representation of bitfield (APPIA: 03.0021.F) */
          if (!AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_Pcs10GBaseT_Status, pcs10GBaseT_Status, _10gbase_tPcsBlockLockLatched)) 
            alarmStatus->_10GBASE_T_Alarms.lossOfBlockLock = True;
          break;

        case AQ_DEVICE_HHD:
        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
        case AQ_DEVICE_RHEA:
          AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pcs10G_Status, 1, 
              /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 03.0020 + 1) */
              AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_Pcs10G_Status, 1));
              /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 03.0021.E) */
          if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_Pcs10G_Status, pcs10G_Status, highBerLatched)) 
            alarmStatus->_10GBASE_T_Alarms.highBER = True;
               /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 03.0021.F) */
          if (!AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_Pcs10G_Status, pcs10G_Status, pcsBlockLockLatched)) 
            alarmStatus->_10GBASE_T_Alarms.lossOfBlockLock = True;
          break;
      }
    }
  }

  /* pma standard alarms */
  readFlag = 0;
  AQ_API_AssignWordOfLocalStruct(pmaVendorGlobalInterruptFlags, 0, 0); /* Avoid uninitialized variable warning. */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.F) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, pmaStandardAlarm_1Interrupt))
  {
    AQ_API_AssignWordOfLocalStruct(pmaVendorGlobalInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.FC00) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_PmaVendorGlobalInterruptFlags, 0));
    readFlag = 1;      /* indicate that pmaVendorGlobalInterruptFlags has been read */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.FC00.B) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_PmaVendorGlobalInterruptFlags, pmaVendorGlobalInterruptFlags, standardAlarm_1Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(pmaStandardStatus_1, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0001) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardStatus_1, 0));
           /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0001.2) */
      if (!AQ_API_BitfieldOfLocalStruct(AQ_PmaStandardStatus_1, pmaStandardStatus_1, pmaReceiveLinkStatus)) alarmStatus->_10GBASE_T_Alarms.PMA_LinkFail = True;
    }
  }
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.E) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, pmaStandardAlarm_2Interrupt))
  {
    if (!readFlag) AQ_API_AssignWordOfLocalStruct(pmaVendorGlobalInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.FC00) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_PmaVendorGlobalInterruptFlags, 0));
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.FC00.A) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_PmaVendorGlobalInterruptFlags, pmaVendorGlobalInterruptFlags, standardAlarm_2Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(pmaStandardStatus_2, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0008) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardStatus_2, 0));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0008.A) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PmaStandardStatus_2, pmaStandardStatus_2, receiveFault)) alarmStatus->_10GBASE_T_Alarms.PMA_ReceiveFault = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0008.B) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PmaStandardStatus_2, pmaStandardStatus_2, transmitFault)) alarmStatus->_10GBASE_T_Alarms.PMA_TransmitFault =  True;
    }
  }

  /*--------------------------------------------------------------------------------------------------------*/
  /*                                    Vendor Interrupts                                                   */
  /*--------------------------------------------------------------------------------------------------------*/

  /* vendor interrupts */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC00.0) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideStandardInterruptFlags, globalChip_wideStandardInterruptFlags, allVendorAlarmsInterrupt))
  {
    AQ_API_AssignWordOfLocalStruct(globalChip_wideVendorInterruptFlags, 0, 
        /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.FC01) */
        AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalChip_wideVendorInterruptFlags, 0));

    /* global vendor alarms */
    /* global vendor alarms - word 0 */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC01.2) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideVendorInterruptFlags, globalChip_wideVendorInterruptFlags, globalAlarms_1Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(globalAlarms, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalAlarms, 0));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.6) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, resetCompleted)) alarmStatus->globalAlarms.resetComplete = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.4) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, deviceFault)) 
      {
        alarmStatus->globalAlarms.deviceFault = True;
        /* If a device fault has occurred, retrieve the fault code. */
        alarmStatus->deviceFaultCode = 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C850) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalFaultMessage, 0);
      }
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.E) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, highTemperatureFailure)) alarmStatus->globalAlarms.highTemperatureFailure = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.C) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, highTemperatureWarning)) alarmStatus->globalAlarms.highTemperatureWarning = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.D) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, lowTemperatureFailure)) alarmStatus->globalAlarms.lowTemperatureFailure = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.B) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, lowTemperatureWarning)) alarmStatus->globalAlarms.lowTemperatureWarning = True;
    }

    /* global vendor alarms - word 1 */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC01.1) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideVendorInterruptFlags, globalChip_wideVendorInterruptFlags, globalAlarms_2Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(globalAlarms, 1, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00 + 1) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalAlarms, 1));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC01.7) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, mdioCommandHandlingOverflow)) alarmStatus->globalAlarms.MDIOCommandOverflow = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC01.E) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, smartPower_downEntered)) alarmStatus->globalAlarms.smartPowerDown = True;
      switch (port->device)
      {
        case AQ_DEVICE_APPIA:
          break;

        case AQ_DEVICE_HHD:
        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
        case AQ_DEVICE_RHEA:
              /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.CC01.C) */
          if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalAlarms, globalAlarms, ipPhoneDetect)) 
            alarmStatus->globalAlarms.ipPhone = True;
          break;
      }
    }

    /* global vendor alarms - word 2 */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC01.0) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideVendorInterruptFlags, globalChip_wideVendorInterruptFlags, globalAlarms_3Interrupt))
    {
      AQ_API_AssignWordOfLocalStruct(globalAlarms, 2, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00 + 2) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalAlarms, 2));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC02.1) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, mdioTimeoutError)) alarmStatus->globalAlarms.MDIOTimeout = True;
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC02.0) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, watchdogTimerAlarm)) alarmStatus->globalAlarms.watchdogTimer = True;
    }

    /* gbe vendor alarms */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC01.B) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideVendorInterruptFlags, globalChip_wideVendorInterruptFlags, gbeVendorAlarmInterrupt))
    {
      AQ_API_AssignWordOfLocalStruct(gbePhyVendorGlobalInterruptFlags, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1D.FC00) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_GbePhyVendorGlobalInterruptFlags, 0));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.FC00.4) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhyVendorGlobalInterruptFlags, gbePhyVendorGlobalInterruptFlags, vendorSpecificSgmiiTxAlarms_1Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(gbePhyTxAlarms, 0, 
            /* REGDOC: Read register (APPIA: 1D.E020) (HHD/EUR/CAL/RHEA: 1D.EC20) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_GbePhySgmiiTxAlarms, 0));
            /* REGDOC: Get local representation of bitfield (APPIA: 1D.E020.4) (HHD/EUR/CAL/RHEA: 1D.EC20.4) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms, sgmii0WakeUpFrameDetected)) alarmStatus->autonegotiationAlarms.wakeUpFrameDetected = True;
            /* REGDOC: Get local representation of bitfield (APPIA: 1D.E020.5) (HHD/EUR/CAL/RHEA: 1D.EC20.5) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms, sgmii0MagicPacketFrameDetected)) alarmStatus->autonegotiationAlarms.wakeUpPacketDetected = True;
        switch (port->device)
        {
          case AQ_DEVICE_APPIA:
          case AQ_DEVICE_HHD:
                /* REGDOC: Get local representation of bitfield (APPIA: 1D.E020.0) (HHD: 1D.EC20.0) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms, sgmii1WakeUpFrameDetected)) alarmStatus->autonegotiationAlarms.wakeUpFrameDetected = True;
                /* REGDOC: Get local representation of bitfield (APPIA: 1D.E020.1) (HHD: 1D.EC20.1) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms, sgmii1MagicPacketFrameDetected)) alarmStatus->autonegotiationAlarms.wakeUpPacketDetected = True;
            break;

          case AQ_DEVICE_EUR:
          case AQ_DEVICE_CAL:
          case AQ_DEVICE_RHEA:
            break;
        }
      }
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.FC00.2) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhyVendorGlobalInterruptFlags, gbePhyVendorGlobalInterruptFlags, vendorSpecificSgmiiRxAlarms_1Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(gbePhyRxAlarms, 0, 
            /* REGDOC: Read register (APPIA: 1D.E010) (HHD/EUR/CAL/RHEA: 1D.EC10) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_GbePhySgmiiRxAlarms, 0));
            /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.4) (HHD/EUR/CAL/RHEA: 1D.EC10.4) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii0RxCodeViolationError)) alarmStatus->SGMII0_Alarms.codeViolationError = True;
            /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.5) (HHD/EUR/CAL/RHEA: 1D.EC10.5) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii0RxRunningDisparityError)) alarmStatus->SGMII0_Alarms.runningDisparityError = True;
            /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.7) (HHD/EUR/CAL/RHEA: 1D.EC10.7) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii0RxLossOfSignal)) alarmStatus->SGMII0_Alarms.lossOfSignal = True;
        switch (port->device)
        {
          case AQ_DEVICE_APPIA:
          case AQ_DEVICE_HHD:
                /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.0) (HHD: 1D.EC10.0) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii1RxCodeViolationError)) alarmStatus->SGMII1_Alarms.codeViolationError = True;
                /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.1) (HHD: 1D.EC10.1) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii1RxRunningDisparityError)) alarmStatus->SGMII1_Alarms.runningDisparityError = True;
                /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.3) (HHD: 1D.EC10.3) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii1RxLossOfSignal)) alarmStatus->SGMII1_Alarms.lossOfSignal = True;
            break;

          case AQ_DEVICE_EUR:
          case AQ_DEVICE_CAL:
          case AQ_DEVICE_RHEA:
            break;
        }
      }
    }

    /* autonegotiation vendor alarms */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC01.C) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideVendorInterruptFlags, globalChip_wideVendorInterruptFlags, autonegotiationVendorAlarmInterrupt))
    {
      AQ_API_AssignWordOfLocalStruct(autonegotiationVendorGlobalInterruptFlags, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.FC00) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationVendorGlobalInterruptFlags, 0));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.FC00.A) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorGlobalInterruptFlags, autonegotiationVendorGlobalInterruptFlags, vendorSpecificAlarms_1Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(autonegotiationTransmitVendorAlarms, 0, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.CC00) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationTransmitVendorAlarms, 0));
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC00.0) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, connectionStateChange)) alarmStatus->globalAlarms.stateChange = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC00.1) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, automaticDownshift)) alarmStatus->autonegotiationAlarms.automaticDownshift = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC00.2) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, autonegotiationCompletedForSupportedRate)) alarmStatus->autonegotiationAlarms.autonegotiationCompletedForSupportedRate = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC00.3) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, autonegotiationCompletedForNon_supportedRate)) alarmStatus->autonegotiationAlarms.autonegotiationCompletedForNonSupportedRate = True;
      }
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.FC00.9) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorGlobalInterruptFlags, autonegotiationVendorGlobalInterruptFlags, vendorSpecificAlarms_2Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(autonegotiationTransmitVendorAlarms, 1, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.CC00 + 1) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationTransmitVendorAlarms, 1));
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC01.0) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, linkConnect_Disconnect)) alarmStatus->autonegotiationAlarms.linkConnectOrDisconnect = True;
      }
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.FC00.1) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationVendorGlobalInterruptFlags, autonegotiationVendorGlobalInterruptFlags, vendorSpecificRxAlarms_3Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(autonegotiationReceiveVendorAlarms, 2, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.EC00 + 2) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationReceiveVendorAlarms, 2));
        /* this is latching low! */
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.EC02.2) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReceiveVendorAlarms, autonegotiationReceiveVendorAlarms, _10base_tDeviceDetect) == 0) alarmStatus->autonegotiationAlarms._10BASE_T_Detect = True;
      }
    }

    /* phyXS vendor alarms */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC01.D) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideVendorInterruptFlags, globalChip_wideVendorInterruptFlags, phyXS_VendorAlarmInterrupt))
    {
      AQ_API_AssignWordOfLocalStruct(phyXS_VendorGlobalInterruptFlags, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.FC00) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_VendorGlobalInterruptFlags, 0));
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.FC00.A) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_VendorGlobalInterruptFlags, phyXS_VendorGlobalInterruptFlags, vendorSpecificTxAlarms_1Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorAlarms, 0, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.CC00) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, 0));
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.E:B) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, prbsTestPatternCheckerSyncError) & 0x1) alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[0] = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.E:B) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, prbsTestPatternCheckerSyncError) & 0x2) alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[1] = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.E:B) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, prbsTestPatternCheckerSyncError) & 0x4) alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[2] = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.E:B) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, prbsTestPatternCheckerSyncError) & 0x8) alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[3] = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.F) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, crpatTestPatternCheckerSyncError)) alarmStatus->testAlarms.CRPAT_LossOfSynchronization = True;
      }
      switch (port->device)
      { 
        case AQ_DEVICE_APPIA:
        case AQ_DEVICE_HHD:
              /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.FC00.9) */
          if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_VendorGlobalInterruptFlags, phyXS_VendorGlobalInterruptFlags, vendorSpecificTxAlarms_2Interrupt))
          {
            AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorAlarms, 1, 
                /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.CC00 + 1) */
                AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, 1));
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.3:0) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxRunningDisparityError) & 0x1) alarmStatus->XAUI_Alarms.runningDisparityError[0] = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.3:0) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxRunningDisparityError) & 0x2) alarmStatus->XAUI_Alarms.runningDisparityError[1] = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.3:0) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxRunningDisparityError) & 0x4) alarmStatus->XAUI_Alarms.runningDisparityError[2] = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.3:0) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxRunningDisparityError) & 0x8) alarmStatus->XAUI_Alarms.runningDisparityError[3] = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.7:4) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxCodeViolationError) & 0x1) alarmStatus->XAUI_Alarms.codeViolationError[0] = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.7:4) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxCodeViolationError) & 0x2) alarmStatus->XAUI_Alarms.codeViolationError[1] = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.7:4) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxCodeViolationError) & 0x4) alarmStatus->XAUI_Alarms.codeViolationError[2] = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.7:4) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxCodeViolationError) & 0x8) alarmStatus->XAUI_Alarms.codeViolationError[3] = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.D) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxSequenceOrderedSetDeletion)) alarmStatus->XAUI_Alarms.sequenceOrderedSetDeletion = True;
          }
          break;

        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
        case AQ_DEVICE_RHEA:
          alarmStatus->XAUI_Alarms.runningDisparityError[0] = False;
          alarmStatus->XAUI_Alarms.runningDisparityError[1] = False;
          alarmStatus->XAUI_Alarms.runningDisparityError[2] = False;
          alarmStatus->XAUI_Alarms.runningDisparityError[3] = False;
          alarmStatus->XAUI_Alarms.codeViolationError[0] = False;
          alarmStatus->XAUI_Alarms.codeViolationError[1] = False;
          alarmStatus->XAUI_Alarms.codeViolationError[2] = False;
          alarmStatus->XAUI_Alarms.codeViolationError[3] = False;
          alarmStatus->XAUI_Alarms.sequenceOrderedSetDeletion = False;
          break;
      }
          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.FC00.8) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_VendorGlobalInterruptFlags, phyXS_VendorGlobalInterruptFlags, vendorSpecificTxAlarms_3Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorAlarms, 2, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.CC00 + 2) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, 2));
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC02.F:C) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, lossOfSignal) & 0x1) alarmStatus->XAUI_Alarms.lossOfSignal[0] = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC02.F:C) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, lossOfSignal) & 0x2) alarmStatus->XAUI_Alarms.lossOfSignal[1] = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC02.F:C) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, lossOfSignal) & 0x4) alarmStatus->XAUI_Alarms.lossOfSignal[2] = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC02.F:C) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, lossOfSignal) & 0x8) alarmStatus->XAUI_Alarms.lossOfSignal[3] = True;
      }
      switch (port->device)
      {
        case AQ_DEVICE_APPIA:
          break;

        case AQ_DEVICE_HHD:
        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
        case AQ_DEVICE_RHEA:
              /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 04.FC00.1) */
          if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_VendorGlobalInterruptFlags, phyXS_VendorGlobalInterruptFlags, vendorSpecificRxAlarms_2Interrupt))
          {
            AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, phyXS_Receive_xauiTx_VendorAlarms, 1, 
                /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 04.EC00 + 1) */
                AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_VendorAlarms, 1));
                /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 04.EC01.E) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorAlarms, phyXS_Receive_xauiTx_VendorAlarms, systemInterfaceRxLinkDown)) 
              alarmStatus->SERDES_Alarms.sysIntfRxLinkDown = True;
                /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 04.EC01.F) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorAlarms, phyXS_Receive_xauiTx_VendorAlarms, systemInterfaceRxLinkUp)) 
              alarmStatus->SERDES_Alarms.sysIntfRxLinkUp = True;
          }
          break;
      }
    }

    /* pcs vendor alarms */
        /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FC01.E) */
    if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalChip_wideVendorInterruptFlags, globalChip_wideVendorInterruptFlags, pcsVendorAlarmInterrupt))
    {
      AQ_API_AssignWordOfLocalStruct(pcsVendorGlobalInterruptFlags, 0, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.FC00) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PcsVendorGlobalInterruptFlags, 0));
      switch (port->device)
      {
        case AQ_DEVICE_APPIA:
          break;

        case AQ_DEVICE_HHD:
        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
        case AQ_DEVICE_RHEA:
          /* vendorSpecificRxAlarms_6Interrupt and vendorSpecificRxAlarms_7Interrupt moved to u2 in HHD */
          AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pcsVendorGlobalInterruptFlags, 2, 
              /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 03.FC00 + 2) */
              AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsVendorGlobalInterruptFlags, 2));
          break;
      }

          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.FC00.6) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PcsVendorGlobalInterruptFlags, pcsVendorGlobalInterruptFlags, vendorSpecificRxAlarms_1Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorAlarms, 0, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.EC00) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_PcsReceiveVendorAlarms, 0));
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC00.8) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, invalid_65bBlock)) alarmStatus->_10GBASE_T_Alarms.invalid65B_Block = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC00.E) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, ldpcDecodeFailure)) alarmStatus->_10GBASE_T_Alarms.LDPC_Error = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC00.F) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, crcError)) alarmStatus->_10GBASE_T_Alarms.CRC8_Error = True;
      }
          /* REGDOC: Get local representation of bitfield (APPIA: 03.FC00.1) (HHD/EUR/CAL/RHEA: 03.FC02.7) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PcsVendorGlobalInterruptFlags, pcsVendorGlobalInterruptFlags, vendorSpecificRxAlarms_6Interrupt))
      {
        AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorAlarms, 5, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.EC00 + 5) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_PcsReceiveVendorAlarms, 5));
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC05.3) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi0Invalid_66bCharacterReceived)) alarmStatus->XFI0_Alarms.invalid66B_Block = True;
        switch (port->device)
        {
          case AQ_DEVICE_APPIA:
          case AQ_DEVICE_HHD:
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 03.EC05.B) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi1Invalid_66bCharacterReceived)) alarmStatus->XFI1_Alarms.invalid66B_Block = True;
            break;

          case AQ_DEVICE_EUR:
          case AQ_DEVICE_CAL:
          case AQ_DEVICE_RHEA:
            break;
        }
      }
          /* REGDOC: Get local representation of bitfield (APPIA: 03.FC00.0) (HHD/EUR/CAL/RHEA: 03.FC02.6) */
      if (AQ_API_BitfieldOfLocalStruct(AQ_PcsVendorGlobalInterruptFlags, pcsVendorGlobalInterruptFlags, vendorSpecificRxAlarms_7Interrupt))
      {
        /* Note: block lock alarms are LL, so set lossOfBlockLock flag if 
         * corresponding alarm bit is 0. */
        AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorAlarms, 6, 
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.EC00 + 6) */
            AQ_API_ReadRegister(port->PHY_ID, AQ_PcsReceiveVendorAlarms, 6));
             /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC06.0) */
        if (!AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi0BlockLockStatus)) alarmStatus->XFI0_Alarms.lossOfBlockLock = True;
            /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC06.1) */
        if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi0HighBerStatus)) alarmStatus->XFI0_Alarms.highBer = True;
        switch (port->device)
        {
          case AQ_DEVICE_APPIA:
          case AQ_DEVICE_HHD:
                 /* REGDOC: Get local representation of bitfield (APPIA/HHD: 03.EC06.4) */
            if (!AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi1BlockLockStatus)) alarmStatus->XFI1_Alarms.lossOfBlockLock = True;
                /* REGDOC: Get local representation of bitfield (APPIA/HHD: 03.EC06.5) */
            if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi1HighBerStatus)) alarmStatus->XFI1_Alarms.highBer = True;
            break;

          case AQ_DEVICE_EUR:
          case AQ_DEVICE_CAL:
          case AQ_DEVICE_RHEA:
            break;
        }
      }
    }
  }

  /* set the summary alarms */
  if ((alarmStatus->autonegotiationAlarms.linkFail                                    == True) ||
      (alarmStatus->autonegotiationAlarms.remoteFault                                 == True) ||
      (alarmStatus->autonegotiationAlarms.masterSlaveConfigurationFault               == True) ||
      (alarmStatus->autonegotiationAlarms.wakeUpFrameDetected                         == True) ||
      (alarmStatus->autonegotiationAlarms.wakeUpPacketDetected                        == True) ||
      (alarmStatus->autonegotiationAlarms.automaticDownshift                          == True) ||
      (alarmStatus->autonegotiationAlarms.autonegotiationCompletedForSupportedRate    == True) ||
      (alarmStatus->autonegotiationAlarms.autonegotiationCompletedForNonSupportedRate == True) ||
      (alarmStatus->autonegotiationAlarms.linkConnectOrDisconnect                     == True) ||
      (alarmStatus->autonegotiationAlarms._10BASE_T_Detect                            == True)) alarmStatus->autonegotiationAlarmSet = True;

  if ((alarmStatus->_10GBASE_T_Alarms.PCS_LinkFail                                    == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PCS_ReceiveFault                                == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PCS_TransmitFault                               == True) || 
      (alarmStatus->_10GBASE_T_Alarms.highBER                                         == True) || 
      (alarmStatus->_10GBASE_T_Alarms.lossOfBlockLock                                 == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PMA_LinkFail                                    == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PMA_ReceiveFault                                == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PMA_TransmitFault                               == True) ||  
      (alarmStatus->_10GBASE_T_Alarms.invalid65B_Block                                == True) || 
      (alarmStatus->_10GBASE_T_Alarms.LDPC_Error                                      == True) || 
      (alarmStatus->_10GBASE_T_Alarms.CRC8_Error                                      == True)) alarmStatus->_10GBASE_T_AlarmSet = True;
      
  if ((alarmStatus->XAUI_Alarms.lossOfLaneAlignment                                   == True) || 
      (alarmStatus->XAUI_Alarms.PHY_XS_ReceiveFault                                   == True) || 
      (alarmStatus->XAUI_Alarms.PHY_XS_TransmitFault                                  == True) || 
      (alarmStatus->XAUI_Alarms.runningDisparityError[0]                              == True) || 
      (alarmStatus->XAUI_Alarms.runningDisparityError[1]                              == True) || 
      (alarmStatus->XAUI_Alarms.runningDisparityError[2]                              == True) || 
      (alarmStatus->XAUI_Alarms.runningDisparityError[3]                              == True) || 
      (alarmStatus->XAUI_Alarms.codeViolationError[0]                                 == True) || 
      (alarmStatus->XAUI_Alarms.codeViolationError[1]                                 == True) || 
      (alarmStatus->XAUI_Alarms.codeViolationError[2]                                 == True) || 
      (alarmStatus->XAUI_Alarms.codeViolationError[3]                                 == True) || 
      (alarmStatus->XAUI_Alarms.sequenceOrderedSetDeletion                            == True) || 
      (alarmStatus->XAUI_Alarms.lossOfSignal[0]                                       == True) || 
      (alarmStatus->XAUI_Alarms.lossOfSignal[1]                                       == True) || 
      (alarmStatus->XAUI_Alarms.lossOfSignal[2]                                       == True) || 
      (alarmStatus->XAUI_Alarms.lossOfSignal[3]                                       == True)) alarmStatus->XAUI_AlarmSet = True; 
      
  if ((alarmStatus->SGMII0_Alarms.codeViolationError                                  == True) || 
      (alarmStatus->SGMII0_Alarms.runningDisparityError                               == True) || 
      (alarmStatus->SGMII0_Alarms.lossOfSignal                                        == True)) alarmStatus->SGMII0_AlarmSet = True;
      
  if ((alarmStatus->SGMII1_Alarms.codeViolationError                                  == True) || 
      (alarmStatus->SGMII1_Alarms.runningDisparityError                               == True) || 
      (alarmStatus->SGMII1_Alarms.lossOfSignal                                        == True)) alarmStatus->SGMII1_AlarmSet = True;
      
  if ((alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[0]                     == True) || 
      (alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[1]                     == True) || 
      (alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[2]                     == True) || 
      (alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[3]                     == True) || 
      (alarmStatus->testAlarms.CRPAT_LossOfSynchronization                            == True)) alarmStatus->testAlarmSet = True;
      
  if ((alarmStatus->globalAlarms.resetComplete                                        == True) || 
      (alarmStatus->globalAlarms.deviceFault                                          == True) || 
      (alarmStatus->globalAlarms.ipPhone                                              == True) || 
      (alarmStatus->globalAlarms.MDIOCommandOverflow                                  == True) || 
      (alarmStatus->globalAlarms.MDIOTimeout                                          == True) || 
      (alarmStatus->globalAlarms.smartPowerDown                                       == True) || 
      (alarmStatus->globalAlarms.watchdogTimer                                        == True) || 
      (alarmStatus->globalAlarms.highTemperatureFailure                               == True) || 
      (alarmStatus->globalAlarms.highTemperatureWarning                               == True) || 
      (alarmStatus->globalAlarms.lowTemperatureFailure                                == True) || 
      (alarmStatus->globalAlarms.lowTemperatureWarning                                == True) || 
      (alarmStatus->globalAlarms.stateChange                                          == True)) alarmStatus->globalAlarmSet = True; 
  
  if ((alarmStatus->XFI0_Alarms.invalid66B_Block                                      == True) ||
      (alarmStatus->XFI0_Alarms.lossOfBlockLock                                       == True) ||
      (alarmStatus->XFI0_Alarms.highBer                                               == True)) alarmStatus->XFI0_AlarmSet = True; 

  if ((alarmStatus->XFI1_Alarms.invalid66B_Block                                      == True) ||
      (alarmStatus->XFI1_Alarms.lossOfBlockLock                                       == True) ||
      (alarmStatus->XFI1_Alarms.highBer                                               == True)) alarmStatus->XFI1_AlarmSet = True; 

  if ((alarmStatus->SERDES_Alarms.sysIntfRxLinkDown                                   == True) ||
      (alarmStatus->SERDES_Alarms.sysIntfRxLinkUp                                     == True)) alarmStatus->SERDES_AlarmSet = True; 

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetRawAlarmStatus
(
  AQ_API_Port* port,
  AQ_API_AlarmStatus* alarmStatus
)
{
  /* standard interrupts */
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationStandardStatus_1, autonegotiationStandardStatus_1)
  AQ_API_DeclareLocalStruct(AQ_Autonegotiation10GBaseT_StatusRegister, autonegotiation10GBaseT_StatusRegister)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_StandardStatus_1, phyXS_StandardStatus_1)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_StandardStatus_2, phyXS_StandardStatus_2)
  AQ_API_DeclareLocalStruct(AQ_PcsStandardStatus_1, pcsStandardStatus_1)
  AQ_API_DeclareLocalStruct(AQ_PcsStandardStatus_2, pcsStandardStatus_2)
  AQ_Pcs10GBaseT_Status_APPIA pcs10GBaseT_Status_APPIA;
  AQ_Pcs10G_Status_HHD pcs10G_Status_HHD;
  AQ_API_DeclareLocalStruct(AQ_PmaStandardStatus_1, pmaStandardStatus_1)
  AQ_API_DeclareLocalStruct(AQ_PmaStandardStatus_2, pmaStandardStatus_2)
  /* vendor interrupts */
  AQ_API_DeclareLocalStruct(AQ_GlobalAlarms, globalAlarms)
  AQ_API_DeclareLocalStruct(AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms)
  AQ_API_DeclareLocalStruct(AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationReceiveVendorAlarms, autonegotiationReceiveVendorAlarms)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorAlarms, phyXS_Receive_xauiTx_VendorAlarms)
  AQ_API_DeclareLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms)
  

  /* reset the standard interrupts */
  alarmStatus->autonegotiationAlarms.linkFail                                    = False;
  alarmStatus->autonegotiationAlarms.remoteFault                                 = False;
  alarmStatus->autonegotiationAlarms.masterSlaveConfigurationFault               = False;
  alarmStatus->XAUI_Alarms.lossOfLaneAlignment                                   = False;
  alarmStatus->XAUI_Alarms.PHY_XS_ReceiveFault                                   = False;
  alarmStatus->XAUI_Alarms.PHY_XS_TransmitFault                                  = False;
  alarmStatus->_10GBASE_T_Alarms.PCS_LinkFail                                    = False;
  alarmStatus->_10GBASE_T_Alarms.PCS_ReceiveFault                                = False;
  alarmStatus->_10GBASE_T_Alarms.PCS_TransmitFault                               = False;
  alarmStatus->_10GBASE_T_Alarms.highBER                                         = False;
  alarmStatus->_10GBASE_T_Alarms.lossOfBlockLock                                 = False;
  alarmStatus->_10GBASE_T_Alarms.PMA_LinkFail                                    = False;
  alarmStatus->_10GBASE_T_Alarms.PMA_ReceiveFault                                = False;
  alarmStatus->_10GBASE_T_Alarms.PMA_TransmitFault                               = False;

  /* reset the vendor interrupts */
  alarmStatus->globalAlarms.resetComplete                                        = False;
  alarmStatus->globalAlarms.deviceFault                                          = False;
  alarmStatus->globalAlarms.ipPhone                                              = False;
  alarmStatus->globalAlarms.MDIOCommandOverflow                                  = False;
  alarmStatus->globalAlarms.MDIOTimeout                                          = False;
  alarmStatus->globalAlarms.smartPowerDown                                       = False;
  alarmStatus->globalAlarms.watchdogTimer                                        = False;
  alarmStatus->globalAlarms.highTemperatureFailure                               = False;
  alarmStatus->globalAlarms.highTemperatureWarning                               = False;
  alarmStatus->globalAlarms.lowTemperatureFailure                                = False;
  alarmStatus->globalAlarms.lowTemperatureWarning                                = False;
  alarmStatus->SGMII0_Alarms.codeViolationError                                  = False;
  alarmStatus->SGMII0_Alarms.runningDisparityError                               = False;
  alarmStatus->SGMII0_Alarms.lossOfSignal                                        = False;
  alarmStatus->SGMII1_Alarms.codeViolationError                                  = False;
  alarmStatus->SGMII1_Alarms.runningDisparityError                               = False;
  alarmStatus->SGMII1_Alarms.lossOfSignal                                        = False;
  alarmStatus->autonegotiationAlarms.wakeUpFrameDetected                         = False;
  alarmStatus->autonegotiationAlarms.wakeUpPacketDetected                        = False;
  alarmStatus->globalAlarms.stateChange                                          = False;
  alarmStatus->autonegotiationAlarms.automaticDownshift                          = False;
  alarmStatus->autonegotiationAlarms.autonegotiationCompletedForSupportedRate    = False;
  alarmStatus->autonegotiationAlarms.autonegotiationCompletedForNonSupportedRate = False;
  alarmStatus->autonegotiationAlarms.linkConnectOrDisconnect                     = False;
  alarmStatus->autonegotiationAlarms._10BASE_T_Detect                            = False;
  alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[0]                     = False;
  alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[1]                     = False;
  alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[2]                     = False;
  alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[3]                     = False;
  alarmStatus->testAlarms.CRPAT_LossOfSynchronization                            = False;
  alarmStatus->XAUI_Alarms.runningDisparityError[0]                              = False;
  alarmStatus->XAUI_Alarms.runningDisparityError[1]                              = False;
  alarmStatus->XAUI_Alarms.runningDisparityError[2]                              = False;
  alarmStatus->XAUI_Alarms.runningDisparityError[3]                              = False;
  alarmStatus->XAUI_Alarms.codeViolationError[0]                                 = False;
  alarmStatus->XAUI_Alarms.codeViolationError[1]                                 = False;
  alarmStatus->XAUI_Alarms.codeViolationError[2]                                 = False;
  alarmStatus->XAUI_Alarms.codeViolationError[3]                                 = False;
  alarmStatus->XAUI_Alarms.sequenceOrderedSetDeletion                            = False;
  alarmStatus->XAUI_Alarms.lossOfSignal[0]                                       = False;
  alarmStatus->XAUI_Alarms.lossOfSignal[1]                                       = False;
  alarmStatus->XAUI_Alarms.lossOfSignal[2]                                       = False;
  alarmStatus->XAUI_Alarms.lossOfSignal[3]                                       = False;
  alarmStatus->_10GBASE_T_Alarms.invalid65B_Block                                = False;
  alarmStatus->_10GBASE_T_Alarms.LDPC_Error                                      = False;
  alarmStatus->_10GBASE_T_Alarms.CRC8_Error                                      = False;
  alarmStatus->XFI0_Alarms.invalid66B_Block                                      = False;
  alarmStatus->XFI0_Alarms.lossOfBlockLock                                       = False;
  alarmStatus->XFI0_Alarms.highBer                                               = False;
  alarmStatus->XFI1_Alarms.invalid66B_Block                                      = False;
  alarmStatus->XFI1_Alarms.lossOfBlockLock                                       = False;
  alarmStatus->XFI1_Alarms.highBer                                               = False;
  
  /* reset the top level summary alarms */
  alarmStatus->autonegotiationAlarmSet                                           = False;
  alarmStatus->_10GBASE_T_AlarmSet                                               = False;
  alarmStatus->XAUI_AlarmSet                                                     = False;
  alarmStatus->SGMII0_AlarmSet                                                   = False;
  alarmStatus->SGMII1_AlarmSet                                                   = False;
  alarmStatus->testAlarmSet                                                      = False;
  alarmStatus->globalAlarmSet                                                    = False;
  alarmStatus->XFI0_AlarmSet                                                     = False;
  alarmStatus->XFI1_AlarmSet                                                     = False;
  alarmStatus->SERDES_Alarms.sysIntfRxLinkDown                                   = False;
  alarmStatus->SERDES_Alarms.sysIntfRxLinkUp                                     = False;
  alarmStatus->SERDES_AlarmSet                                                   = False;

  /* reset the device fault code */
  alarmStatus->deviceFaultCode                                                   = 0;

  /*--------------------------------------------------------------------------------------------------------*/
  /*                                    Standard Interrupts                                                 */
  /*--------------------------------------------------------------------------------------------------------*/

  /* get the standard interrupts */

  /* autonegotiation standard alarms */
  AQ_API_AssignWordOfLocalStruct(autonegotiationStandardStatus_1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0001) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationStandardStatus_1, 0));
       /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0001.2) */
  if (!AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationStandardStatus_1, autonegotiationStandardStatus_1, linkStatus)) alarmStatus->autonegotiationAlarms.linkFail = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0001.4) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationStandardStatus_1, autonegotiationStandardStatus_1, remoteFault)) alarmStatus->autonegotiationAlarms.remoteFault = True;
  AQ_API_AssignWordOfLocalStruct(autonegotiation10GBaseT_StatusRegister, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.0021) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Autonegotiation10GBaseT_StatusRegister, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.0021.F) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_Autonegotiation10GBaseT_StatusRegister, autonegotiation10GBaseT_StatusRegister, master_slaveConfigurationFault)) alarmStatus->autonegotiationAlarms.masterSlaveConfigurationFault = True;

  /* phyXS standard alarms */
  AQ_API_AssignWordOfLocalStruct(phyXS_StandardStatus_1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.0001) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_StandardStatus_1, 0));
       /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0001.2) */
  if (!AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_StandardStatus_1, phyXS_StandardStatus_1, phyXS_TransmitLinkAlignmentStatus)) alarmStatus->XAUI_Alarms.lossOfLaneAlignment = True;
  AQ_API_AssignWordOfLocalStruct(phyXS_StandardStatus_2, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.0008) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_StandardStatus_2, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0008.A) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_StandardStatus_2, phyXS_StandardStatus_2, receiveFault)) alarmStatus->XAUI_Alarms.PHY_XS_ReceiveFault = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0008.B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_StandardStatus_2, phyXS_StandardStatus_2, transmitFault)) alarmStatus->XAUI_Alarms.PHY_XS_TransmitFault = True;

  /* pcs standard alarms */
  AQ_API_AssignWordOfLocalStruct(pcsStandardStatus_1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.0001) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PcsStandardStatus_1, 0));
       /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.0001.2) */
  if (!AQ_API_BitfieldOfLocalStruct(AQ_PcsStandardStatus_1, pcsStandardStatus_1, pcsReceiveLinkStatus)) alarmStatus->_10GBASE_T_Alarms.PCS_LinkFail = True;
  AQ_API_AssignWordOfLocalStruct(pcsStandardStatus_2, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.0008) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PcsStandardStatus_2, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.0008.A) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PcsStandardStatus_2, pcsStandardStatus_2, receiveFault)) alarmStatus->_10GBASE_T_Alarms.PCS_ReceiveFault = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.0008.B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PcsStandardStatus_2, pcsStandardStatus_2, transmitFault)) alarmStatus->_10GBASE_T_Alarms.PCS_TransmitFault = True;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      pcs10GBaseT_Status_APPIA.u1.word_1 = 
        /* REGDOC: Read register (APPIA: 03.0020 + 1) */
        AQ_API_ReadRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_Pcs10GBaseT_Status, 1);
      if (pcs10GBaseT_Status_APPIA.u1.bits_1._10gbase_tHighBerLatched) 
        alarmStatus->_10GBASE_T_Alarms.highBER = True;
      if (!pcs10GBaseT_Status_APPIA.u1.bits_1._10gbase_tPcsBlockLockLatched) 
        alarmStatus->_10GBASE_T_Alarms.lossOfBlockLock = True;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      pcs10G_Status_HHD.u1.word_1 = 
        /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 03.0020 + 1) */
        AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_Pcs10G_Status, 1);
      if (pcs10G_Status_HHD.u1.bits_1.highBerLatched) 
        alarmStatus->_10GBASE_T_Alarms.highBER = True;
      if (!pcs10G_Status_HHD.u1.bits_1.pcsBlockLockLatched) 
        alarmStatus->_10GBASE_T_Alarms.lossOfBlockLock = True;
      break;
  }  

  /* pma standard alarms */
  AQ_API_AssignWordOfLocalStruct(pmaStandardStatus_1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0001) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardStatus_1, 0));
       /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0001.2) */
  if (!AQ_API_BitfieldOfLocalStruct(AQ_PmaStandardStatus_1, pmaStandardStatus_1, pmaReceiveLinkStatus)) alarmStatus->_10GBASE_T_Alarms.PMA_LinkFail = True;
  AQ_API_AssignWordOfLocalStruct(pmaStandardStatus_2, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0008) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardStatus_2, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0008.A) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PmaStandardStatus_2, pmaStandardStatus_2, receiveFault)) alarmStatus->_10GBASE_T_Alarms.PMA_ReceiveFault = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0008.B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PmaStandardStatus_2, pmaStandardStatus_2, transmitFault)) alarmStatus->_10GBASE_T_Alarms.PMA_TransmitFault =  True;

  /*--------------------------------------------------------------------------------------------------------*/
  /*                                    Vendor Interrupts                                                   */
  /*--------------------------------------------------------------------------------------------------------*/

  /* vendor interrupts */

  /* global vendor alarms */
  AQ_API_AssignWordOfLocalStruct(globalAlarms, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalAlarms, 0));
  AQ_API_AssignWordOfLocalStruct(globalAlarms, 1, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00 + 1) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalAlarms, 1));
  AQ_API_AssignWordOfLocalStruct(globalAlarms, 2, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00 + 2) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalAlarms, 2));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.6) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, resetCompleted)) alarmStatus->globalAlarms.resetComplete = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.4) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, deviceFault)) 
  {
    alarmStatus->globalAlarms.deviceFault = True;
    /* If a device fault has occurred, retrieve the fault code. */
    alarmStatus->deviceFaultCode = 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C850) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalFaultMessage, 0);
  }
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
          /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.CC01.C) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalAlarms, globalAlarms, ipPhoneDetect)) 
        alarmStatus->globalAlarms.ipPhone = True;
      break;
  }
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC01.7) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, mdioCommandHandlingOverflow)) alarmStatus->globalAlarms.MDIOCommandOverflow = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC02.1) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, mdioTimeoutError)) alarmStatus->globalAlarms.MDIOTimeout = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC01.E) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, smartPower_downEntered)) alarmStatus->globalAlarms.smartPowerDown = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC02.0) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, watchdogTimerAlarm)) alarmStatus->globalAlarms.watchdogTimer = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.E) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, highTemperatureFailure)) alarmStatus->globalAlarms.highTemperatureFailure = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.C) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, highTemperatureWarning)) alarmStatus->globalAlarms.highTemperatureWarning = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.D) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, lowTemperatureFailure)) alarmStatus->globalAlarms.lowTemperatureFailure = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.CC00.B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalAlarms, globalAlarms, lowTemperatureWarning)) alarmStatus->globalAlarms.lowTemperatureWarning = True;

  /* gbe vendor alarms */
  AQ_API_AssignWordOfLocalStruct(gbePhyTxAlarms, 0, 
      /* REGDOC: Read register (APPIA: 1D.E020) (HHD/EUR/CAL/RHEA: 1D.EC20) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GbePhySgmiiTxAlarms, 0));
      /* REGDOC: Get local representation of bitfield (APPIA: 1D.E020.4) (HHD/EUR/CAL/RHEA: 1D.EC20.4) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms, sgmii0WakeUpFrameDetected)) alarmStatus->autonegotiationAlarms.wakeUpFrameDetected = True;
      /* REGDOC: Get local representation of bitfield (APPIA: 1D.E020.5) (HHD/EUR/CAL/RHEA: 1D.EC20.5) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms, sgmii0MagicPacketFrameDetected)) alarmStatus->autonegotiationAlarms.wakeUpPacketDetected = True;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
          /* REGDOC: Get local representation of bitfield (APPIA: 1D.E020.0) (HHD: 1D.EC20.0) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms, sgmii1WakeUpFrameDetected)) alarmStatus->autonegotiationAlarms.wakeUpFrameDetected = True;
          /* REGDOC: Get local representation of bitfield (APPIA: 1D.E020.1) (HHD: 1D.EC20.1) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiTxAlarms, gbePhyTxAlarms, sgmii1MagicPacketFrameDetected)) alarmStatus->autonegotiationAlarms.wakeUpPacketDetected = True;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }

  AQ_API_AssignWordOfLocalStruct(gbePhyRxAlarms, 0, 
      /* REGDOC: Read register (APPIA: 1D.E010) (HHD/EUR/CAL/RHEA: 1D.EC10) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GbePhySgmiiRxAlarms, 0));
      /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.4) (HHD/EUR/CAL/RHEA: 1D.EC10.4) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii0RxCodeViolationError)) alarmStatus->SGMII0_Alarms.codeViolationError = True;
      /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.5) (HHD/EUR/CAL/RHEA: 1D.EC10.5) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii0RxRunningDisparityError)) alarmStatus->SGMII0_Alarms.runningDisparityError = True;
      /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.7) (HHD/EUR/CAL/RHEA: 1D.EC10.7) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii0RxLossOfSignal)) alarmStatus->SGMII0_Alarms.lossOfSignal = True;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
          /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.0) (HHD: 1D.EC10.0) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii1RxCodeViolationError)) alarmStatus->SGMII1_Alarms.codeViolationError = True;
          /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.1) (HHD: 1D.EC10.1) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii1RxRunningDisparityError)) alarmStatus->SGMII1_Alarms.runningDisparityError = True;
          /* REGDOC: Get local representation of bitfield (APPIA: 1D.E010.3) (HHD: 1D.EC10.3) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxAlarms, gbePhyRxAlarms, sgmii1RxLossOfSignal)) alarmStatus->SGMII1_Alarms.lossOfSignal = True;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      alarmStatus->SGMII1_Alarms.codeViolationError = False;
      alarmStatus->SGMII1_Alarms.runningDisparityError = False;
      alarmStatus->SGMII1_Alarms.lossOfSignal = False;
      break;
  }

  /* autonegotiation vendor alarms */
  AQ_API_AssignWordOfLocalStruct(autonegotiationTransmitVendorAlarms, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.CC00) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationTransmitVendorAlarms, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC00.0) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, connectionStateChange)) alarmStatus->globalAlarms.stateChange = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC00.1) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, automaticDownshift)) alarmStatus->autonegotiationAlarms.automaticDownshift = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC00.2) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, autonegotiationCompletedForSupportedRate)) alarmStatus->autonegotiationAlarms.autonegotiationCompletedForSupportedRate = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC00.3) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, autonegotiationCompletedForNon_supportedRate)) alarmStatus->autonegotiationAlarms.autonegotiationCompletedForNonSupportedRate = True;

  AQ_API_AssignWordOfLocalStruct(autonegotiationTransmitVendorAlarms, 1, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.CC00 + 1) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationTransmitVendorAlarms, 1));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.CC01.0) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorAlarms, autonegotiationTransmitVendorAlarms, linkConnect_Disconnect)) alarmStatus->autonegotiationAlarms.linkConnectOrDisconnect = True;

  AQ_API_AssignWordOfLocalStruct(autonegotiationReceiveVendorAlarms, 2, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 07.EC00 + 2) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_AutonegotiationReceiveVendorAlarms, 2));
  /* this is latching low! */
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.EC02.2) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_AutonegotiationReceiveVendorAlarms, autonegotiationReceiveVendorAlarms, _10base_tDeviceDetect) == 0) alarmStatus->autonegotiationAlarms._10BASE_T_Detect = True;

  /* phyXS vendor alarms */
  AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorAlarms, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.CC00) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.E:B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, prbsTestPatternCheckerSyncError) & 0x1) alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[0] = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.E:B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, prbsTestPatternCheckerSyncError) & 0x2) alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[1] = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.E:B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, prbsTestPatternCheckerSyncError) & 0x4) alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[2] = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.E:B) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, prbsTestPatternCheckerSyncError) & 0x8) alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[3] = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC00.F) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, crpatTestPatternCheckerSyncError)) alarmStatus->testAlarms.CRPAT_LossOfSynchronization = True;

  switch (port->device)
  { 
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorAlarms, 1, 
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.CC00 + 1) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, 1));
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.3:0) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxRunningDisparityError) & 0x1) alarmStatus->XAUI_Alarms.runningDisparityError[0] = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.3:0) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxRunningDisparityError) & 0x2) alarmStatus->XAUI_Alarms.runningDisparityError[1] = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.3:0) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxRunningDisparityError) & 0x4) alarmStatus->XAUI_Alarms.runningDisparityError[2] = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.3:0) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxRunningDisparityError) & 0x8) alarmStatus->XAUI_Alarms.runningDisparityError[3] = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.7:4) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxCodeViolationError) & 0x1) alarmStatus->XAUI_Alarms.codeViolationError[0] = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.7:4) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxCodeViolationError) & 0x2) alarmStatus->XAUI_Alarms.codeViolationError[1] = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.7:4) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxCodeViolationError) & 0x4) alarmStatus->XAUI_Alarms.codeViolationError[2] = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.7:4) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxCodeViolationError) & 0x8) alarmStatus->XAUI_Alarms.codeViolationError[3] = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 04.CC01.D) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, xauiRxSequenceOrderedSetDeletion)) alarmStatus->XAUI_Alarms.sequenceOrderedSetDeletion = True;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      alarmStatus->XAUI_Alarms.runningDisparityError[0] = False;
      alarmStatus->XAUI_Alarms.runningDisparityError[1] = False;
      alarmStatus->XAUI_Alarms.runningDisparityError[2] = False;
      alarmStatus->XAUI_Alarms.runningDisparityError[3] = False;
      alarmStatus->XAUI_Alarms.codeViolationError[0] = False;
      alarmStatus->XAUI_Alarms.codeViolationError[1] = False;
      alarmStatus->XAUI_Alarms.codeViolationError[2] = False;
      alarmStatus->XAUI_Alarms.codeViolationError[3] = False;
      alarmStatus->XAUI_Alarms.sequenceOrderedSetDeletion = False;
      break;
  }

  AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorAlarms, 2, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.CC00 + 2) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorAlarms, 2));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC02.F:C) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, lossOfSignal) & 0x1) alarmStatus->XAUI_Alarms.lossOfSignal[0] = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC02.F:C) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, lossOfSignal) & 0x2) alarmStatus->XAUI_Alarms.lossOfSignal[1] = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC02.F:C) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, lossOfSignal) & 0x4) alarmStatus->XAUI_Alarms.lossOfSignal[2] = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.CC02.F:C) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorAlarms, phyXS_Transmit_xauiRx_VendorAlarms, lossOfSignal) & 0x8) alarmStatus->XAUI_Alarms.lossOfSignal[3] = True;

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;
      
    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, phyXS_Receive_xauiTx_VendorAlarms, 1, 
          /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 04.EC00 + 1) */
          AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_VendorAlarms, 1));
          /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 04.EC01.E) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorAlarms, phyXS_Receive_xauiTx_VendorAlarms, systemInterfaceRxLinkDown)) 
        alarmStatus->SERDES_Alarms.sysIntfRxLinkDown = True;
          /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 04.EC01.F) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorAlarms, phyXS_Receive_xauiTx_VendorAlarms, systemInterfaceRxLinkUp)) 
        alarmStatus->SERDES_Alarms.sysIntfRxLinkUp = True;
      break;
  }

  /* pcs vendor alarms */
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorAlarms, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.EC00) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PcsReceiveVendorAlarms, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC00.8) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, invalid_65bBlock)) alarmStatus->_10GBASE_T_Alarms.invalid65B_Block = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC00.E) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, ldpcDecodeFailure)) alarmStatus->_10GBASE_T_Alarms.LDPC_Error = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC00.F) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, crcError)) alarmStatus->_10GBASE_T_Alarms.CRC8_Error = True;

  /* XFI alarms */
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorAlarms, 5, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.EC00 + 5) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PcsReceiveVendorAlarms, 5));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC05.3) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi0Invalid_66bCharacterReceived)) alarmStatus->XFI0_Alarms.invalid66B_Block = True;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 03.EC05.B) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi1Invalid_66bCharacterReceived)) alarmStatus->XFI1_Alarms.invalid66B_Block = True;
      break;

    case AQ_DEVICE_EUR:      
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      alarmStatus->XFI1_Alarms.invalid66B_Block = False;
      break;
  }

  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorAlarms, 6, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 03.EC00 + 6) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PcsReceiveVendorAlarms, 6));
  /* Note: block lock alarms are LL, so set lossOfBlockLock flag if 
   * corresponding alarm bit is 0. */
       /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC06.0) */
  if (!AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi0BlockLockStatus)) alarmStatus->XFI0_Alarms.lossOfBlockLock = True;
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.EC06.1) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi0HighBerStatus)) alarmStatus->XFI0_Alarms.highBer = True;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
           /* REGDOC: Get local representation of bitfield (APPIA/HHD: 03.EC06.4) */
      if (!AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi1BlockLockStatus)) alarmStatus->XFI1_Alarms.lossOfBlockLock = True;
          /* REGDOC: Get local representation of bitfield (APPIA/HHD: 03.EC06.5) */
      if (AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorAlarms, pcsReceiveVendorAlarms, xfi1HighBerStatus)) alarmStatus->XFI1_Alarms.highBer = True;
      break;

    case AQ_DEVICE_EUR:      
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:      
      alarmStatus->XFI1_Alarms.lossOfBlockLock = False;
      alarmStatus->XFI1_Alarms.highBer = False;
      break;
  }

  /* set the summary alarms */
  if ((alarmStatus->autonegotiationAlarms.linkFail                                    == True) ||
      (alarmStatus->autonegotiationAlarms.remoteFault                                 == True) ||
      (alarmStatus->autonegotiationAlarms.masterSlaveConfigurationFault               == True) ||
      (alarmStatus->autonegotiationAlarms.wakeUpFrameDetected                         == True) ||
      (alarmStatus->autonegotiationAlarms.wakeUpPacketDetected                        == True) ||
      (alarmStatus->autonegotiationAlarms.automaticDownshift                          == True) ||
      (alarmStatus->autonegotiationAlarms.autonegotiationCompletedForSupportedRate    == True) ||
      (alarmStatus->autonegotiationAlarms.autonegotiationCompletedForNonSupportedRate == True) ||
      (alarmStatus->autonegotiationAlarms.linkConnectOrDisconnect                     == True) ||
      (alarmStatus->autonegotiationAlarms._10BASE_T_Detect                            == True)) 
    alarmStatus->autonegotiationAlarmSet = True;

  if ((alarmStatus->_10GBASE_T_Alarms.PCS_LinkFail                                    == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PCS_ReceiveFault                                == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PCS_TransmitFault                               == True) || 
      (alarmStatus->_10GBASE_T_Alarms.highBER                                         == True) || 
      (alarmStatus->_10GBASE_T_Alarms.lossOfBlockLock                                 == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PMA_LinkFail                                    == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PMA_ReceiveFault                                == True) || 
      (alarmStatus->_10GBASE_T_Alarms.PMA_TransmitFault                               == True) ||  
      (alarmStatus->_10GBASE_T_Alarms.invalid65B_Block                                == True) || 
      (alarmStatus->_10GBASE_T_Alarms.LDPC_Error                                      == True) || 
      (alarmStatus->_10GBASE_T_Alarms.CRC8_Error                                      == True)) 
    alarmStatus->_10GBASE_T_AlarmSet = True;
      
  if ((alarmStatus->XAUI_Alarms.lossOfLaneAlignment                                   == True) || 
      (alarmStatus->XAUI_Alarms.PHY_XS_ReceiveFault                                   == True) || 
      (alarmStatus->XAUI_Alarms.PHY_XS_TransmitFault                                  == True) || 
      (alarmStatus->XAUI_Alarms.runningDisparityError[0]                              == True) || 
      (alarmStatus->XAUI_Alarms.runningDisparityError[1]                              == True) || 
      (alarmStatus->XAUI_Alarms.runningDisparityError[2]                              == True) || 
      (alarmStatus->XAUI_Alarms.runningDisparityError[3]                              == True) || 
      (alarmStatus->XAUI_Alarms.codeViolationError[0]                                 == True) || 
      (alarmStatus->XAUI_Alarms.codeViolationError[1]                                 == True) || 
      (alarmStatus->XAUI_Alarms.codeViolationError[2]                                 == True) || 
      (alarmStatus->XAUI_Alarms.codeViolationError[3]                                 == True) || 
      (alarmStatus->XAUI_Alarms.sequenceOrderedSetDeletion                            == True) || 
      (alarmStatus->XAUI_Alarms.lossOfSignal[0]                                       == True) || 
      (alarmStatus->XAUI_Alarms.lossOfSignal[1]                                       == True) || 
      (alarmStatus->XAUI_Alarms.lossOfSignal[2]                                       == True) || 
      (alarmStatus->XAUI_Alarms.lossOfSignal[3]                                       == True)) 
    alarmStatus->XAUI_AlarmSet = True; 
      
  if ((alarmStatus->SGMII0_Alarms.codeViolationError                                  == True) || 
      (alarmStatus->SGMII0_Alarms.runningDisparityError                               == True) || 
      (alarmStatus->SGMII0_Alarms.lossOfSignal                                        == True)) 
    alarmStatus->SGMII0_AlarmSet = True;
      
  if ((alarmStatus->SGMII1_Alarms.codeViolationError                                  == True) || 
      (alarmStatus->SGMII1_Alarms.runningDisparityError                               == True) || 
      (alarmStatus->SGMII1_Alarms.lossOfSignal                                        == True)) 
    alarmStatus->SGMII1_AlarmSet = True;
      
  if ((alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[0]                     == True) || 
      (alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[1]                     == True) || 
      (alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[2]                     == True) || 
      (alarmStatus->testAlarms.XAUI_PRBS_LossOfSynchronization[3]                     == True) || 
      (alarmStatus->testAlarms.CRPAT_LossOfSynchronization                            == True)) 
    alarmStatus->testAlarmSet = True;
      
  if ((alarmStatus->globalAlarms.resetComplete                                        == True) || 
      (alarmStatus->globalAlarms.deviceFault                                          == True) || 
      (alarmStatus->globalAlarms.ipPhone                                              == True) || 
      (alarmStatus->globalAlarms.MDIOCommandOverflow                                  == True) || 
      (alarmStatus->globalAlarms.MDIOTimeout                                          == True) || 
      (alarmStatus->globalAlarms.smartPowerDown                                       == True) || 
      (alarmStatus->globalAlarms.watchdogTimer                                        == True) || 
      (alarmStatus->globalAlarms.highTemperatureFailure                               == True) || 
      (alarmStatus->globalAlarms.highTemperatureWarning                               == True) || 
      (alarmStatus->globalAlarms.lowTemperatureFailure                                == True) || 
      (alarmStatus->globalAlarms.lowTemperatureWarning                                == True) || 
      (alarmStatus->globalAlarms.stateChange                                          == True)) 
    alarmStatus->globalAlarmSet = True; 

  if ((alarmStatus->XFI0_Alarms.invalid66B_Block                                      == True) ||
      (alarmStatus->XFI0_Alarms.lossOfBlockLock                                       == True) ||
      (alarmStatus->XFI0_Alarms.highBer                                               == True)) 
    alarmStatus->XFI0_AlarmSet = True; 

  if ((alarmStatus->XFI1_Alarms.invalid66B_Block                                      == True) ||
      (alarmStatus->XFI1_Alarms.lossOfBlockLock                                       == True) ||
      (alarmStatus->XFI1_Alarms.highBer                                               == True)) 
    alarmStatus->XFI1_AlarmSet = True; 

  if ((alarmStatus->SERDES_Alarms.sysIntfRxLinkDown                                   == True) ||
      (alarmStatus->SERDES_Alarms.sysIntfRxLinkUp                                     == True)) 
    alarmStatus->SERDES_AlarmSet = True; 

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetAlarmControl
(
  AQ_API_Port* port,
  AQ_API_AlarmControl* alarmControl
)
{
  /*standard masks*/
  AQ_API_Variable(AQ_AutonegotiationStandardInterruptMask)
  AQ_API_Variable(AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask)
  AQ_API_Variable_DeviceRestricted(APPIA, AQ_PcsReceiveStandardInterruptMask)
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsStandardInterruptMask)
  AQ_API_Variable(AQ_PmaTransmitStandardInterruptMask)
  /*vendor masks*/
  AQ_API_Variable(AQ_GlobalInterruptMask)
  AQ_API_Variable(AQ_GbePhySgmiiTxInterruptMask)
  AQ_API_Variable(AQ_GbePhySgmiiRxInterruptMask)
  AQ_API_Variable(AQ_AutonegotiationTransmitVendorInterruptMask)
  AQ_API_Variable(AQ_AutonegotiationReceiveVendorInterruptMask)
  AQ_API_Variable(AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask)
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorInterruptMask)
  AQ_API_Variable(AQ_PcsReceiveVendorInterruptMask)

  uint16_t i;


  /*get the standard mask settings*/
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D000.2) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationStandardInterruptMask, linkStatusMask, i);
  alarmControl->autonegotiationAlarmMask.linkFail = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D000.4) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationStandardInterruptMask, remoteFaultMask, i);
  alarmControl->autonegotiationAlarmMask.remoteFault = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D000.2) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationStandardInterruptMask, linkStatusMask, i);
  alarmControl->autonegotiationAlarmMask.masterSlaveConfigurationFault = i ? True : False;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (APPIA/HHD: 04.D000.2) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, phyXS_TransmitLinkAlignmentStatusMask, i);
      alarmControl->XAUI_AlarmMask.lossOfLaneAlignment = i ? True : False;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      alarmControl->XAUI_AlarmMask.lossOfLaneAlignment = False;
      break;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D001.A) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, receiveFaultMask, i);
  alarmControl->XAUI_AlarmMask.PHY_XS_ReceiveFault = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D001.B) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, transmitFaultMask, i);
  alarmControl->XAUI_AlarmMask.PHY_XS_TransmitFault = i ? True : False;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read bitfield (APPIA: 03.F000.2) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveStandardInterruptMask, pcsReceiveLinkStatusMask, i);
      alarmControl->_10GBASE_T_AlarmMask.PCS_LinkFail = i ? True : False;
      /* REGDOC: Read bitfield (APPIA: 03.F001.A) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveStandardInterruptMask, receiveFaultMask, i);
      alarmControl->_10GBASE_T_AlarmMask.PCS_ReceiveFault = i ? True : False;
      /* REGDOC: Read bitfield (APPIA: 03.F001.B) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveStandardInterruptMask, transmitFaultMask, i);
      alarmControl->_10GBASE_T_AlarmMask.PCS_TransmitFault = i ? True : False;
      /* REGDOC: Read bitfield (APPIA: 03.F002.E) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveStandardInterruptMask, _10gbase_tHighBerLatchedMask, i);
      alarmControl->_10GBASE_T_AlarmMask.highBER = i ? True : False;
      /* REGDOC: Read bitfield (APPIA: 03.F002.F) */
      AQ_API_Get_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveStandardInterruptMask, _10gbase_tPcsBlockLockLatchedMask, i);
      alarmControl->_10GBASE_T_AlarmMask.lossOfBlockLock = i ? True : False;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.D000.2) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsStandardInterruptMask, pcsReceiveLinkStatusMask, i);
      alarmControl->_10GBASE_T_AlarmMask.PCS_LinkFail = i ? True : False;
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.D001.A) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsStandardInterruptMask, receiveFaultMask, i);
      alarmControl->_10GBASE_T_AlarmMask.PCS_ReceiveFault = i ? True : False;
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.D001.B) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsStandardInterruptMask, transmitFaultMask, i);
      alarmControl->_10GBASE_T_AlarmMask.PCS_TransmitFault = i ? True : False;
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.D002.E) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsStandardInterruptMask, _10gbase_tHighBerLatchedMask, i);
      alarmControl->_10GBASE_T_AlarmMask.highBER = i ? True : False;
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.D002.F) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsStandardInterruptMask, _10gbase_tPcsBlockLockLatchedMask, i);
      alarmControl->_10GBASE_T_AlarmMask.lossOfBlockLock = i ? True : False;
      break;
  }  
  /* REGDOC: Read bitfield (APPIA: 01.F000.2) (HHD/EUR/CAL/RHEA: 01.D000.2) */
  AQ_API_Get(port->PHY_ID, AQ_PmaTransmitStandardInterruptMask, pmaReceiveLinkStatusMask, i);
  alarmControl->_10GBASE_T_AlarmMask.PMA_LinkFail = i ? True : False;
  /* REGDOC: Read bitfield (APPIA: 01.F001.A) (HHD/EUR/CAL/RHEA: 01.D001.A) */
  AQ_API_Get(port->PHY_ID, AQ_PmaTransmitStandardInterruptMask, receiveFaultMask, i);
  alarmControl->_10GBASE_T_AlarmMask.PMA_ReceiveFault = i ? True : False;
  /* REGDOC: Read bitfield (APPIA: 01.F001.B) (HHD/EUR/CAL/RHEA: 01.D001.B) */
  AQ_API_Get(port->PHY_ID, AQ_PmaTransmitStandardInterruptMask, transmitFaultMask, i);
  alarmControl->_10GBASE_T_AlarmMask.PMA_TransmitFault = i ? True : False;

  /*get the vendor mask settings*/
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.6) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, resetCompletedMask, i);
  alarmControl->globalAlarmMask.resetComplete = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.4) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, deviceFaultMask, i);
  alarmControl->globalAlarmMask.deviceFault = i ? True : False;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      alarmControl->globalAlarmMask.ipPhone = False;
      break;
      
    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.D401.C) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalInterruptMask, ipPhoneDetectMask, i);
      alarmControl->globalAlarmMask.ipPhone = i ? True : False;
      break;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D401.7) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, mdioCommandHandlingOverflowMask, i);
  alarmControl->globalAlarmMask.MDIOCommandOverflow = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D402.1) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, mdioTimeoutErrorMask, i);
  alarmControl->globalAlarmMask.MDIOTimeout = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D401.E) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, smartPower_downEnteredMask, i);
  alarmControl->globalAlarmMask.smartPowerDown = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D402.0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, watchdogTimerAlarmMask, i);
  alarmControl->globalAlarmMask.watchdogTimer = i ? True : False;

  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.E) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, highTemperatureFailureMask, i);
  alarmControl->globalAlarmMask.highTemperatureFailure = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.C) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, highTemperatureWarningMask, i);
  alarmControl->globalAlarmMask.highTemperatureWarning = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.D) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, lowTemperatureFailureMask, i);
  alarmControl->globalAlarmMask.lowTemperatureFailure = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.B) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalInterruptMask, lowTemperatureWarningMask, i);
  alarmControl->globalAlarmMask.lowTemperatureWarning = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F410.4) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhySgmiiRxInterruptMask, sgmii0RxCodeViolationErrorMask, i);
  alarmControl->SGMII0_AlarmMask.codeViolationError = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F410.5) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhySgmiiRxInterruptMask, sgmii0RxRunningDisparityErrorMask, i);
  alarmControl->SGMII0_AlarmMask.runningDisparityError = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F410.7) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhySgmiiRxInterruptMask, sgmii0RxLossOfSignalMask, i);
  alarmControl->SGMII0_AlarmMask.lossOfSignal = i ? True : False;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.F410.0) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmiiRxInterruptMask, sgmii1RxCodeViolationErrorMask, i);
      alarmControl->SGMII1_AlarmMask.codeViolationError = i ? True : False;
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.F410.1) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmiiRxInterruptMask, sgmii1RxRunningDisparityErrorMask, i);
      alarmControl->SGMII1_AlarmMask.runningDisparityError = i ? True : False;
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.F410.3) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmiiRxInterruptMask, sgmii1RxLossOfSignalMask, i);
      alarmControl->SGMII1_AlarmMask.lossOfSignal = i ? True : False;
      break;

    case AQ_DEVICE_EUR:      
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      alarmControl->SGMII1_AlarmMask.codeViolationError = False;
      alarmControl->SGMII1_AlarmMask.runningDisparityError = False;
      alarmControl->SGMII1_AlarmMask.lossOfSignal = False;
      break;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F420.4) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhySgmiiTxInterruptMask, sgmii0WakeUpFrameDetectedMask, i);
  alarmControl->autonegotiationAlarmMask.wakeUpFrameDetected = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F420.5) */
  AQ_API_Get(port->PHY_ID, AQ_GbePhySgmiiTxInterruptMask, sgmii0MagicPacketFrameDetectedMask, i);
  alarmControl->autonegotiationAlarmMask.wakeUpPacketDetected = i ? True : False;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.F420.0) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmiiTxInterruptMask, sgmii1WakeUpFrameDetectedMask, i);
      alarmControl->autonegotiationAlarmMask.wakeUpFrameDetected |= (i ? True : False);
      /* REGDOC: Read bitfield (APPIA/HHD: 1D.F420.1) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_GbePhySgmiiTxInterruptMask, sgmii1MagicPacketFrameDetectedMask, i);
      alarmControl->autonegotiationAlarmMask.wakeUpPacketDetected |= (i ? True : False);
      break;

    case AQ_DEVICE_EUR:      
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D400.0) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationTransmitVendorInterruptMask, connectionStateChangeMask, i);
  alarmControl->globalAlarmMask.stateChange = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D400.1) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationTransmitVendorInterruptMask, automaticDownshiftMask, i);
  alarmControl->autonegotiationAlarmMask.automaticDownshift = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D400.2) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationTransmitVendorInterruptMask, autonegotiationCompletedForSupportedRateMask, i);
  alarmControl->autonegotiationAlarmMask.autonegotiationCompletedForSupportedRate = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D400.3) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationTransmitVendorInterruptMask, autonegotiationCompletedForNon_supportedRateMask, i);
  alarmControl->autonegotiationAlarmMask.autonegotiationCompletedForNonSupportedRate = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D401.0) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationTransmitVendorInterruptMask, linkConnect_DisconnectMask, i);
  alarmControl->autonegotiationAlarmMask.linkConnectOrDisconnect = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.F402.2) */
  AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReceiveVendorInterruptMask, _10base_tDeviceDetectMask, i);
  alarmControl->autonegotiationAlarmMask._10BASE_T_Detect = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D400.E:B) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, prbsTestPatternCheckerSyncErrorMask, i);
  alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[0] = (i & 0x1) ? True : False;
  alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[1] = (i & 0x2) ? True : False;
  alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[2] = (i & 0x4) ? True : False;
  alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[3] = (i & 0x8) ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D400.F) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, crpatTestPatternCheckerSyncErrorMask, i);
  alarmControl->testAlarmMask.CRPAT_LossOfSynchronization = i ? True : False;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (APPIA/HHD: 04.D401.3:0) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, xauiRxRunningDisparityErrorMask, i);
      alarmControl->XAUI_AlarmMask.runningDisparityError[0] = (i & 0x1) ? True : False;
      alarmControl->XAUI_AlarmMask.runningDisparityError[1] = (i & 0x2) ? True : False;
      alarmControl->XAUI_AlarmMask.runningDisparityError[2] = (i & 0x4) ? True : False;
      alarmControl->XAUI_AlarmMask.runningDisparityError[3] = (i & 0x8) ? True : False;
      /* REGDOC: Read bitfield (APPIA/HHD: 04.D401.7:4) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, xauiRxCodeViolationErrorMask, i);
      alarmControl->XAUI_AlarmMask.codeViolationError[0] = (i & 0x1) ? True : False;
      alarmControl->XAUI_AlarmMask.codeViolationError[1] = (i & 0x2) ? True : False;
      alarmControl->XAUI_AlarmMask.codeViolationError[2] = (i & 0x4) ? True : False;
      alarmControl->XAUI_AlarmMask.codeViolationError[3] = (i & 0x8) ? True : False;
      /* REGDOC: Read bitfield (APPIA/HHD: 04.D401.D) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, xauiRxSequenceOrderedSetDeletionMask, i);
      alarmControl->XAUI_AlarmMask.sequenceOrderedSetDeletion = i ? True : False;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      alarmControl->XAUI_AlarmMask.runningDisparityError[0] = False;
      alarmControl->XAUI_AlarmMask.runningDisparityError[1] = False;
      alarmControl->XAUI_AlarmMask.runningDisparityError[2] = False;
      alarmControl->XAUI_AlarmMask.runningDisparityError[3] = False;
      alarmControl->XAUI_AlarmMask.codeViolationError[0] = False;
      alarmControl->XAUI_AlarmMask.codeViolationError[1] = False;
      alarmControl->XAUI_AlarmMask.codeViolationError[2] = False;
      alarmControl->XAUI_AlarmMask.codeViolationError[3] = False;
      alarmControl->XAUI_AlarmMask.sequenceOrderedSetDeletion = False;
      break;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D402.F:C) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, lossOfSignalMask, i);
  alarmControl->XAUI_AlarmMask.lossOfSignal[0] = (i & 0x1) ? True : False;
  alarmControl->XAUI_AlarmMask.lossOfSignal[1] = (i & 0x2) ? True : False;
  alarmControl->XAUI_AlarmMask.lossOfSignal[2] = (i & 0x4) ? True : False;
  alarmControl->XAUI_AlarmMask.lossOfSignal[3] = (i & 0x8) ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F400.8) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, invalid_65bBlockMask, i);
  alarmControl->_10GBASE_T_AlarmMask.invalid65B_Block = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F400.E) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, ldpcDecodeFailureMask, i);
  alarmControl->_10GBASE_T_AlarmMask.LDPC_Error = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F400.F) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, crcErrorMask, i);
  alarmControl->_10GBASE_T_AlarmMask.CRC8_Error = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F405.3) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, xfi0Invalid_66bCharacterReceivedMask, i);
  alarmControl->XFI0_AlarmMask.invalid66B_Block = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F406.0) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, xfi0BlockLockStatusMask, i);
  alarmControl->XFI0_AlarmMask.lossOfBlockLock = i ? True : False;
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F406.1) */
  AQ_API_Get(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, xfi0HighBerStatusMask, i);
  alarmControl->XFI0_AlarmMask.highBer = i ? True : False;
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Read bitfield (APPIA/HHD: 03.F405.B) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, xfi1Invalid_66bCharacterReceivedMask, i);
      alarmControl->XFI1_AlarmMask.invalid66B_Block = i ? True : False;
      /* REGDOC: Read bitfield (APPIA/HHD: 03.F406.4) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, xfi1BlockLockStatusMask, i);
      alarmControl->XFI1_AlarmMask.lossOfBlockLock = i ? True : False;
      /* REGDOC: Read bitfield (APPIA/HHD: 03.F406.5) */
      AQ_API_Get_DeviceRestricted(APPIA_HHD, port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, xfi1HighBerStatusMask, i);
      alarmControl->XFI1_AlarmMask.highBer = i ? True : False;
      break;

    case AQ_DEVICE_EUR:      
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      alarmControl->XFI1_AlarmMask.invalid66B_Block = False;
      alarmControl->XFI1_AlarmMask.lossOfBlockLock = False;
      alarmControl->XFI1_AlarmMask.highBer = False;
      break;
  }

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      alarmControl->SERDES_AlarmMask.sysIntfRxLinkDown = False;
      alarmControl->SERDES_AlarmMask.sysIntfRxLinkUp = False;
      break;
      
    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 04.F401.E) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_VendorInterruptMask, systemInterfaceRxLinkDownMask, i);
      alarmControl->SERDES_AlarmMask.sysIntfRxLinkDown = i ? True : False;
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 04.F401.F) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_VendorInterruptMask, systemInterfaceRxLinkUpMask, i);
      alarmControl->SERDES_AlarmMask.sysIntfRxLinkUp = i ? True : False;
      break;
  }

  return AQ_RET_OK;
}



AQ_Retcode AQ_API_SetAlarmControl
(
  AQ_API_Port* port,
  AQ_API_AlarmControl* alarmControl
)
{
  /*standard masks*/
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationStandardInterruptMask, autonegotiationStandardInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, phyXS_Transmit_xauiRx_StandardInterruptMask)
  AQ_API_DeclareLocalStruct_DeviceRestricted(APPIA, AQ_PcsReceiveStandardInterruptMask, pcsReceiveStandardInterruptMask)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsStandardInterruptMask, pcsStandardInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_PmaTransmitStandardInterruptMask, pmaTransmitStandardInterruptMask)
  /* leaf-node vendor masks*/
  AQ_API_DeclareLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_GbePhySgmiiTxInterruptMask, gbePhyTxInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_GbePhySgmiiRxInterruptMask, gbePhyRxInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationTransmitVendorInterruptMask, autonegotiationTransmitVendorInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_AutonegotiationReceiveVendorInterruptMask, autonegotiationReceiveVendorInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, phyXS_Transmit_xauiRx_VendorInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_Receive_xauiTx_VendorInterruptMask, phyXS_Receive_xauiTx_VendorInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_PcsTransmitVendorInterruptMask, pcsTransmitVendorInterruptMask)
  AQ_API_DeclareLocalStruct(AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask)
  /* intermediate node vendor masks */
  AQ_API_DeclareLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask)

  uint16_t bit0; 
  uint16_t bit1; 
  uint16_t bit2; 
  uint16_t bit3;


  /* zero out all of the low-level masks */
  AQ_API_AssignWordOfLocalStruct(autonegotiationStandardInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(autonegotiationStandardInterruptMask, 1, 0x0000);
  AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_StandardInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_StandardInterruptMask, 1, 0x0000);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(APPIA, pcsReceiveStandardInterruptMask, 0, 0x0000);
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(APPIA, pcsReceiveStandardInterruptMask, 1, 0x0000);
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(APPIA, pcsReceiveStandardInterruptMask, 2, 0x0000);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pcsStandardInterruptMask, 0, 0x0000);
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pcsStandardInterruptMask, 1, 0x0000);
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pcsStandardInterruptMask, 2, 0x0000);
      break;
  }  
  AQ_API_AssignWordOfLocalStruct(pmaTransmitStandardInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pmaTransmitStandardInterruptMask, 1, 0x0000);

  AQ_API_AssignWordOfLocalStruct(globalInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(globalInterruptMask, 1, 0x0000);
  AQ_API_AssignWordOfLocalStruct(globalInterruptMask, 2, 0x0000);
  AQ_API_AssignWordOfLocalStruct(gbePhyTxInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(gbePhyRxInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(autonegotiationTransmitVendorInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(autonegotiationTransmitVendorInterruptMask, 1, 0x0000);
  AQ_API_AssignWordOfLocalStruct(autonegotiationTransmitVendorInterruptMask, 2, 0x0000);
  AQ_API_AssignWordOfLocalStruct(autonegotiationReceiveVendorInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(autonegotiationReceiveVendorInterruptMask, 1, 0x0000);
  AQ_API_AssignWordOfLocalStruct(autonegotiationReceiveVendorInterruptMask, 2, 0x0000);
  AQ_API_AssignWordOfLocalStruct(autonegotiationReceiveVendorInterruptMask, 3, 0x0000);
  AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorInterruptMask, 1, 0x0000);
  AQ_API_AssignWordOfLocalStruct(phyXS_Transmit_xauiRx_VendorInterruptMask, 2, 0x0000);
  AQ_API_AssignWordOfLocalStruct(phyXS_Receive_xauiTx_VendorInterruptMask, 0, 0x0000);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, phyXS_Receive_xauiTx_VendorInterruptMask, 1, 0x0000);
      break;
  }  
  AQ_API_AssignWordOfLocalStruct(pcsTransmitVendorInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsTransmitVendorInterruptMask, 1, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsTransmitVendorInterruptMask, 2, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsTransmitVendorInterruptMask, 3, 0x0000);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(APPIA, pcsTransmitVendorInterruptMask, 4, 0x0000);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }  
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorInterruptMask, 0, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorInterruptMask, 1, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorInterruptMask, 2, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorInterruptMask, 3, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorInterruptMask, 4, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorInterruptMask, 5, 0x0000);
  AQ_API_AssignWordOfLocalStruct(pcsReceiveVendorInterruptMask, 6, 0x0000);

  /* Zero out the intermediate node vendor masks. */
  AQ_API_AssignWordOfLocalStruct(globalInterruptChip_wideVendorMask, 0, 0x0000);

  /* set the desired low-level masks */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D000.2) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardInterruptMask, autonegotiationStandardInterruptMask, linkStatusMask, alarmControl->autonegotiationAlarmMask.linkFail ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D000.4) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardInterruptMask, autonegotiationStandardInterruptMask, remoteFaultMask, alarmControl->autonegotiationAlarmMask.remoteFault ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D001.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationStandardInterruptMask, autonegotiationStandardInterruptMask, master_slaveConfigurationFaultMask, alarmControl->autonegotiationAlarmMask.masterSlaveConfigurationFault ? 1 : 0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 04.D000.2) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, phyXS_Transmit_xauiRx_StandardInterruptMask, phyXS_TransmitLinkAlignmentStatusMask, alarmControl->XAUI_AlarmMask.lossOfLaneAlignment ? 1 : 0);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D001.A) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, phyXS_Transmit_xauiRx_StandardInterruptMask, receiveFaultMask, alarmControl->XAUI_AlarmMask.PHY_XS_ReceiveFault ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D001.B) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, phyXS_Transmit_xauiRx_StandardInterruptMask, transmitFaultMask, alarmControl->XAUI_AlarmMask.PHY_XS_TransmitFault ? 1 : 0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Assign to local representation of bitfield (APPIA: 03.F000.2) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_PcsReceiveStandardInterruptMask, pcsReceiveStandardInterruptMask, pcsReceiveLinkStatusMask, alarmControl->_10GBASE_T_AlarmMask.PCS_LinkFail ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA: 03.F001.A) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_PcsReceiveStandardInterruptMask, pcsReceiveStandardInterruptMask, receiveFaultMask, alarmControl->_10GBASE_T_AlarmMask.PCS_ReceiveFault ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA: 03.F001.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_PcsReceiveStandardInterruptMask, pcsReceiveStandardInterruptMask, transmitFaultMask, alarmControl->_10GBASE_T_AlarmMask.PCS_TransmitFault ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA: 03.F002.E) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_PcsReceiveStandardInterruptMask, pcsReceiveStandardInterruptMask, _10gbase_tHighBerLatchedMask, alarmControl->_10GBASE_T_AlarmMask.highBER ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA: 03.F002.F) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_PcsReceiveStandardInterruptMask, pcsReceiveStandardInterruptMask, _10gbase_tPcsBlockLockLatchedMask, alarmControl->_10GBASE_T_AlarmMask.lossOfBlockLock ? 1 : 0);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 03.D000.2) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsStandardInterruptMask, pcsStandardInterruptMask, pcsReceiveLinkStatusMask, alarmControl->_10GBASE_T_AlarmMask.PCS_LinkFail ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 03.D001.A) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsStandardInterruptMask, pcsStandardInterruptMask, receiveFaultMask, alarmControl->_10GBASE_T_AlarmMask.PCS_ReceiveFault ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 03.D001.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsStandardInterruptMask, pcsStandardInterruptMask, transmitFaultMask, alarmControl->_10GBASE_T_AlarmMask.PCS_TransmitFault ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 03.D002.E) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsStandardInterruptMask, pcsStandardInterruptMask, _10gbase_tHighBerLatchedMask, alarmControl->_10GBASE_T_AlarmMask.highBER ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 03.D002.F) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsStandardInterruptMask, pcsStandardInterruptMask, _10gbase_tPcsBlockLockLatchedMask, alarmControl->_10GBASE_T_AlarmMask.lossOfBlockLock ? 1 : 0);
      break;
  }  
  /* REGDOC: Assign to local representation of bitfield (APPIA: 01.F000.2) (HHD/EUR/CAL/RHEA: 01.D000.2) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaTransmitStandardInterruptMask, pmaTransmitStandardInterruptMask, pmaReceiveLinkStatusMask, alarmControl->_10GBASE_T_AlarmMask.PMA_LinkFail ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (APPIA: 01.F001.A) (HHD/EUR/CAL/RHEA: 01.D001.A) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaTransmitStandardInterruptMask, pmaTransmitStandardInterruptMask, receiveFaultMask, alarmControl->_10GBASE_T_AlarmMask.PMA_ReceiveFault ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (APPIA: 01.F001.B) (HHD/EUR/CAL/RHEA: 01.D001.B) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaTransmitStandardInterruptMask, pmaTransmitStandardInterruptMask, transmitFaultMask, alarmControl->_10GBASE_T_AlarmMask.PMA_TransmitFault ? 1 : 0);

  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, resetCompletedMask, alarmControl->globalAlarmMask.resetComplete ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.4) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, deviceFaultMask, alarmControl->globalAlarmMask.deviceFault ? 1 : 0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.D401.C) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalInterruptMask, globalInterruptMask, ipPhoneDetectMask, alarmControl->globalAlarmMask.ipPhone ? 1 : 0);
      break;
  }  
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D401.7) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, mdioCommandHandlingOverflowMask, alarmControl->globalAlarmMask.MDIOCommandOverflow ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D402.1) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, mdioTimeoutErrorMask, alarmControl->globalAlarmMask.MDIOTimeout ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D401.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, smartPower_downEnteredMask, alarmControl->globalAlarmMask.smartPowerDown ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D402.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, watchdogTimerAlarmMask, alarmControl->globalAlarmMask.watchdogTimer ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, highTemperatureFailureMask, alarmControl->globalAlarmMask.highTemperatureFailure ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.C) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, highTemperatureWarningMask, alarmControl->globalAlarmMask.highTemperatureWarning ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.D) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, lowTemperatureFailureMask, alarmControl->globalAlarmMask.lowTemperatureFailure ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.D400.B) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptMask, globalInterruptMask, lowTemperatureWarningMask, alarmControl->globalAlarmMask.lowTemperatureWarning ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F410.4) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GbePhySgmiiRxInterruptMask, gbePhyRxInterruptMask, sgmii0RxCodeViolationErrorMask, alarmControl->SGMII0_AlarmMask.codeViolationError ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F410.5) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GbePhySgmiiRxInterruptMask, gbePhyRxInterruptMask, sgmii0RxRunningDisparityErrorMask, alarmControl->SGMII0_AlarmMask.runningDisparityError ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F410.7) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GbePhySgmiiRxInterruptMask, gbePhyRxInterruptMask, sgmii0RxLossOfSignalMask, alarmControl->SGMII0_AlarmMask.lossOfSignal ? 1 : 0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 1D.F410.0) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxInterruptMask, gbePhyRxInterruptMask, sgmii1RxCodeViolationErrorMask, alarmControl->SGMII1_AlarmMask.codeViolationError ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 1D.F410.1) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxInterruptMask, gbePhyRxInterruptMask, sgmii1RxRunningDisparityErrorMask, alarmControl->SGMII1_AlarmMask.runningDisparityError ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 1D.F410.3) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiRxInterruptMask, gbePhyRxInterruptMask, sgmii1RxLossOfSignalMask, alarmControl->SGMII1_AlarmMask.lossOfSignal ? 1 : 0);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F420.4) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GbePhySgmiiTxInterruptMask, gbePhyTxInterruptMask, sgmii0WakeUpFrameDetectedMask, alarmControl->autonegotiationAlarmMask.wakeUpFrameDetected ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.F420.5) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GbePhySgmiiTxInterruptMask, gbePhyTxInterruptMask, sgmii0MagicPacketFrameDetectedMask, alarmControl->autonegotiationAlarmMask.wakeUpPacketDetected ? 1 : 0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 1D.F420.0) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiTxInterruptMask, gbePhyTxInterruptMask, sgmii1WakeUpFrameDetectedMask, alarmControl->autonegotiationAlarmMask.wakeUpFrameDetected ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 1D.F420.1) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_GbePhySgmiiTxInterruptMask, gbePhyTxInterruptMask, sgmii1MagicPacketFrameDetectedMask, alarmControl->autonegotiationAlarmMask.wakeUpPacketDetected ? 1 : 0);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D400.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorInterruptMask, autonegotiationTransmitVendorInterruptMask, connectionStateChangeMask, alarmControl->globalAlarmMask.stateChange ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D400.1) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorInterruptMask, autonegotiationTransmitVendorInterruptMask, automaticDownshiftMask, alarmControl->autonegotiationAlarmMask.automaticDownshift ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D400.2) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorInterruptMask, autonegotiationTransmitVendorInterruptMask, autonegotiationCompletedForSupportedRateMask, alarmControl->autonegotiationAlarmMask.autonegotiationCompletedForSupportedRate ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D400.3) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorInterruptMask, autonegotiationTransmitVendorInterruptMask, autonegotiationCompletedForNon_supportedRateMask, alarmControl->autonegotiationAlarmMask.autonegotiationCompletedForNonSupportedRate ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.D401.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationTransmitVendorInterruptMask, autonegotiationTransmitVendorInterruptMask, linkConnect_DisconnectMask, alarmControl->autonegotiationAlarmMask.linkConnectOrDisconnect ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.F402.2) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_AutonegotiationReceiveVendorInterruptMask, autonegotiationReceiveVendorInterruptMask, _10base_tDeviceDetectMask, alarmControl->autonegotiationAlarmMask._10BASE_T_Detect ? 1 : 0);

  bit0 = alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[0] ? 1 : 0;
  bit1 = alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[1] ? 1 : 0;
  bit2 = alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[2] ? 1 : 0;
  bit3 = alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[3] ? 1 : 0;
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D400.E:B) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, phyXS_Transmit_xauiRx_VendorInterruptMask, prbsTestPatternCheckerSyncErrorMask, bit0 | (bit1 << 1) | (bit2 << 2) | (bit3 << 3));

  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D400.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, phyXS_Transmit_xauiRx_VendorInterruptMask, crpatTestPatternCheckerSyncErrorMask, alarmControl->testAlarmMask.CRPAT_LossOfSynchronization ? 1 : 0);

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      bit0 = alarmControl->XAUI_AlarmMask.runningDisparityError[0] ? 1 : 0;
      bit1 = alarmControl->XAUI_AlarmMask.runningDisparityError[1] ? 1 : 0;
      bit2 = alarmControl->XAUI_AlarmMask.runningDisparityError[2] ? 1 : 0;
      bit3 = alarmControl->XAUI_AlarmMask.runningDisparityError[3] ? 1 : 0;
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 04.D401.3:0) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, phyXS_Transmit_xauiRx_VendorInterruptMask, xauiRxRunningDisparityErrorMask, bit0 | (bit1 << 1) | (bit2 << 2) | (bit3 << 3));

      bit0 = alarmControl->XAUI_AlarmMask.codeViolationError[0] ? 1 : 0;
      bit1 = alarmControl->XAUI_AlarmMask.codeViolationError[1] ? 1 : 0;
      bit2 = alarmControl->XAUI_AlarmMask.codeViolationError[2] ? 1 : 0;
      bit3 = alarmControl->XAUI_AlarmMask.codeViolationError[3] ? 1 : 0;
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 04.D401.7:4) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, phyXS_Transmit_xauiRx_VendorInterruptMask, xauiRxCodeViolationErrorMask, bit0 | (bit1 << 1) | (bit2 << 2) | (bit3 << 3));

      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 04.D401.D) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, phyXS_Transmit_xauiRx_VendorInterruptMask, xauiRxSequenceOrderedSetDeletionMask, alarmControl->XAUI_AlarmMask.sequenceOrderedSetDeletion ? 1 : 0);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }

  bit0 = alarmControl->XAUI_AlarmMask.lossOfSignal[0] ? 1 : 0;
  bit1 = alarmControl->XAUI_AlarmMask.lossOfSignal[1] ? 1 : 0;
  bit2 = alarmControl->XAUI_AlarmMask.lossOfSignal[2] ? 1 : 0;
  bit3 = alarmControl->XAUI_AlarmMask.lossOfSignal[3] ? 1 : 0;
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.D402.F:C) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, phyXS_Transmit_xauiRx_VendorInterruptMask, lossOfSignalMask, bit0 | (bit1 << 1) | (bit2 << 2) | (bit3 << 3));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F400.8) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, invalid_65bBlockMask, alarmControl->_10GBASE_T_AlarmMask.invalid65B_Block ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F400.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, ldpcDecodeFailureMask, alarmControl->_10GBASE_T_AlarmMask.LDPC_Error ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F400.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, crcErrorMask, alarmControl->_10GBASE_T_AlarmMask.CRC8_Error ? 1 : 0);

  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F405.3) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, xfi0Invalid_66bCharacterReceivedMask, alarmControl->XFI0_AlarmMask.invalid66B_Block ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F406.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, xfi0BlockLockStatusMask, alarmControl->XFI0_AlarmMask.lossOfBlockLock ? 1 : 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 03.F406.1) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, xfi0HighBerStatusMask, alarmControl->XFI0_AlarmMask.highBer ? 1 : 0);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 03.F405.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, xfi1Invalid_66bCharacterReceivedMask, alarmControl->XFI1_AlarmMask.invalid66B_Block ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 03.F406.4) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, xfi1BlockLockStatusMask, alarmControl->XFI1_AlarmMask.lossOfBlockLock ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (APPIA/HHD: 03.F406.5) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD, AQ_PcsReceiveVendorInterruptMask, pcsReceiveVendorInterruptMask, xfi1HighBerStatusMask, alarmControl->XFI1_AlarmMask.highBer ? 1 : 0);
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 04.F401.E) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorInterruptMask, phyXS_Receive_xauiTx_VendorInterruptMask, systemInterfaceRxLinkDownMask, alarmControl->SERDES_AlarmMask.sysIntfRxLinkDown ? 1 : 0);
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 04.F401.F) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PhyXS_Receive_xauiTx_VendorInterruptMask, phyXS_Receive_xauiTx_VendorInterruptMask, systemInterfaceRxLinkUpMask, alarmControl->SERDES_AlarmMask.sysIntfRxLinkUp ? 1 : 0);
      break;
  }  

  /* Set the intermediate mask bits based on the leaf nodes. */
  if (alarmControl->globalAlarmMask.resetComplete ||
      alarmControl->globalAlarmMask.deviceFault ||
      alarmControl->globalAlarmMask.MDIOTimeout ||
      alarmControl->globalAlarmMask.watchdogTimer ||
      alarmControl->globalAlarmMask.highTemperatureFailure ||
      alarmControl->globalAlarmMask.highTemperatureWarning ||
      alarmControl->globalAlarmMask.lowTemperatureFailure ||
      alarmControl->globalAlarmMask.lowTemperatureWarning) 
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.2) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, globalAlarms_1InterruptMask, 1);
  else
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.2) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, globalAlarms_1InterruptMask, 0);

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.1) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, globalAlarms_2InterruptMask, 0);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      if (alarmControl->globalAlarmMask.ipPhone ||
          alarmControl->globalAlarmMask.smartPowerDown ||
          alarmControl->globalAlarmMask.MDIOCommandOverflow) 
        /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.1) */
        AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, globalAlarms_2InterruptMask, 1);
      else
        /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.1) */
        AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, globalAlarms_2InterruptMask, 0);
      break;
  }  

  if (alarmControl->globalAlarmMask.MDIOTimeout ||
      alarmControl->globalAlarmMask.watchdogTimer) 
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.0) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, globalAlarms_3InterruptMask, 1);
  else
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.0) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, globalAlarms_3InterruptMask, 0);

  if (alarmControl->SGMII0_AlarmMask.codeViolationError ||
      alarmControl->SGMII0_AlarmMask.runningDisparityError ||
      alarmControl->SGMII0_AlarmMask.lossOfSignal ||
      alarmControl->SGMII1_AlarmMask.codeViolationError ||
      alarmControl->SGMII1_AlarmMask.runningDisparityError ||
      alarmControl->SGMII1_AlarmMask.lossOfSignal ||
      alarmControl->autonegotiationAlarmMask.wakeUpFrameDetected ||
      alarmControl->autonegotiationAlarmMask.wakeUpPacketDetected)
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.B) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, gbeVendorAlarmInterruptMask, 1);
  else
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.B) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, gbeVendorAlarmInterruptMask, 0);

  if (alarmControl->globalAlarmMask.stateChange ||
      alarmControl->autonegotiationAlarmMask.automaticDownshift ||
      alarmControl->autonegotiationAlarmMask.autonegotiationCompletedForSupportedRate ||
      alarmControl->autonegotiationAlarmMask.autonegotiationCompletedForNonSupportedRate ||
      alarmControl->autonegotiationAlarmMask.linkConnectOrDisconnect ||
      alarmControl->autonegotiationAlarmMask._10BASE_T_Detect)
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.C) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, autonegotiationVendorAlarmInterruptMask, 1);
  else
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.C) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, autonegotiationVendorAlarmInterruptMask, 0);

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      if (alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[0] ||
          alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[1] ||
          alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[2] ||
          alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[3] ||
          alarmControl->testAlarmMask.CRPAT_LossOfSynchronization ||
          alarmControl->XAUI_AlarmMask.runningDisparityError[0] ||
          alarmControl->XAUI_AlarmMask.runningDisparityError[1] ||
          alarmControl->XAUI_AlarmMask.runningDisparityError[2] ||
          alarmControl->XAUI_AlarmMask.runningDisparityError[3] ||
          alarmControl->XAUI_AlarmMask.codeViolationError[0] ||
          alarmControl->XAUI_AlarmMask.codeViolationError[1] ||
          alarmControl->XAUI_AlarmMask.codeViolationError[2] ||
          alarmControl->XAUI_AlarmMask.codeViolationError[3] ||
          alarmControl->XAUI_AlarmMask.sequenceOrderedSetDeletion ||
          alarmControl->XAUI_AlarmMask.lossOfSignal[0] ||
          alarmControl->XAUI_AlarmMask.lossOfSignal[1] ||
          alarmControl->XAUI_AlarmMask.lossOfSignal[2] ||
          alarmControl->XAUI_AlarmMask.lossOfSignal[3])
        /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.D) */
        AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, phyXS_VendorAlarmInterruptMask, 1);
      else
        /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.D) */
        AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, phyXS_VendorAlarmInterruptMask, 0);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      if (alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[0] ||
          alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[1] ||
          alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[2] ||
          alarmControl->testAlarmMask.XAUI_PRBS_LossOfSynchronization[3] ||
          alarmControl->testAlarmMask.CRPAT_LossOfSynchronization ||
          alarmControl->XAUI_AlarmMask.runningDisparityError[0] ||
          alarmControl->XAUI_AlarmMask.runningDisparityError[1] ||
          alarmControl->XAUI_AlarmMask.runningDisparityError[2] ||
          alarmControl->XAUI_AlarmMask.runningDisparityError[3] ||
          alarmControl->XAUI_AlarmMask.codeViolationError[0] ||
          alarmControl->XAUI_AlarmMask.codeViolationError[1] ||
          alarmControl->XAUI_AlarmMask.codeViolationError[2] ||
          alarmControl->XAUI_AlarmMask.codeViolationError[3] ||
          alarmControl->XAUI_AlarmMask.sequenceOrderedSetDeletion ||
          alarmControl->XAUI_AlarmMask.lossOfSignal[0] ||
          alarmControl->XAUI_AlarmMask.lossOfSignal[1] ||
          alarmControl->XAUI_AlarmMask.lossOfSignal[2] ||
          alarmControl->XAUI_AlarmMask.lossOfSignal[3] ||
          alarmControl->SERDES_AlarmMask.sysIntfRxLinkDown ||
          alarmControl->SERDES_AlarmMask.sysIntfRxLinkUp)
        /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.D) */
        AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, phyXS_VendorAlarmInterruptMask, 1);
      else
        /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.D) */
        AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, phyXS_VendorAlarmInterruptMask, 0);
      break;
  }  

  if (alarmControl->_10GBASE_T_AlarmMask.invalid65B_Block ||
      alarmControl->_10GBASE_T_AlarmMask.LDPC_Error ||
      alarmControl->_10GBASE_T_AlarmMask.CRC8_Error ||
      alarmControl->XFI0_AlarmMask.invalid66B_Block ||
      alarmControl->XFI0_AlarmMask.lossOfBlockLock ||
      alarmControl->XFI0_AlarmMask.highBer ||
      alarmControl->XFI1_AlarmMask.invalid66B_Block ||
      alarmControl->XFI1_AlarmMask.lossOfBlockLock ||
      alarmControl->XFI1_AlarmMask.highBer)
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.E) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, pcsVendorAlarmInterruptMask, 1);
  else
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01.E) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalInterruptChip_wideVendorMask, globalInterruptChip_wideVendorMask, pcsVendorAlarmInterruptMask, 0);

  /* write the masks */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.D000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationStandardInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(autonegotiationStandardInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.D000 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationStandardInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(autonegotiationStandardInterruptMask, 1));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.D000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(phyXS_Transmit_xauiRx_StandardInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.D000 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(phyXS_Transmit_xauiRx_StandardInterruptMask, 1));
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Write register (APPIA: 03.F000) */
      AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveStandardInterruptMask, 0, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(APPIA, pcsReceiveStandardInterruptMask, 0));
      /* REGDOC: Write register (APPIA: 03.F000 + 1) */
      AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveStandardInterruptMask, 1, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(APPIA, pcsReceiveStandardInterruptMask, 1));
      /* REGDOC: Write register (APPIA: 03.F000 + 2) */
      AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsReceiveStandardInterruptMask, 2, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(APPIA, pcsReceiveStandardInterruptMask, 2));
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 03.D000) */
      AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsStandardInterruptMask, 0, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pcsStandardInterruptMask, 0));
      /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 03.D000 + 1) */
      AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsStandardInterruptMask, 1, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pcsStandardInterruptMask, 1));
      /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 03.D000 + 2) */
      AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PcsStandardInterruptMask, 2, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pcsStandardInterruptMask, 2));
      break;
  }  
  /* REGDOC: Write register (APPIA: 01.F000) (HHD/EUR/CAL/RHEA: 01.D000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PmaTransmitStandardInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(pmaTransmitStandardInterruptMask, 0));
  /* REGDOC: Write register (APPIA: 01.F000 + 1) (HHD/EUR/CAL/RHEA: 01.D000 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PmaTransmitStandardInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(pmaTransmitStandardInterruptMask, 1));

  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.D400) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(globalInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.D400 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(globalInterruptMask, 1));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.D400 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalInterruptMask, 2, 
      AQ_API_WordOfLocalStruct(globalInterruptMask, 2));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1D.F420) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GbePhySgmiiTxInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(gbePhyTxInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1D.F410) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GbePhySgmiiRxInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(gbePhyRxInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.D400) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationTransmitVendorInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(autonegotiationTransmitVendorInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.D400 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationTransmitVendorInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(autonegotiationTransmitVendorInterruptMask, 1));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.D400 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationTransmitVendorInterruptMask, 2, 
      AQ_API_WordOfLocalStruct(autonegotiationTransmitVendorInterruptMask, 2));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.F400) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationReceiveVendorInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(autonegotiationReceiveVendorInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.F400 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationReceiveVendorInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(autonegotiationReceiveVendorInterruptMask, 1));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.F400 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationReceiveVendorInterruptMask, 2, 
      AQ_API_WordOfLocalStruct(autonegotiationReceiveVendorInterruptMask, 2));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 07.F400 + 3) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_AutonegotiationReceiveVendorInterruptMask, 3, 
      AQ_API_WordOfLocalStruct(autonegotiationReceiveVendorInterruptMask, 3));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.D400) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(phyXS_Transmit_xauiRx_VendorInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.D400 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(phyXS_Transmit_xauiRx_VendorInterruptMask, 1));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.D400 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask, 2, 
      AQ_API_WordOfLocalStruct(phyXS_Transmit_xauiRx_VendorInterruptMask, 2));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.F400) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_Receive_xauiTx_VendorInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(phyXS_Receive_xauiTx_VendorInterruptMask, 0));
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 04.F400 + 1) */
      AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_VendorInterruptMask, 1, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, phyXS_Receive_xauiTx_VendorInterruptMask, 1));
      break;
  }  
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.D400) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsTransmitVendorInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(pcsTransmitVendorInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.D400 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsTransmitVendorInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(pcsTransmitVendorInterruptMask, 1));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.D400 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsTransmitVendorInterruptMask, 2, 
      AQ_API_WordOfLocalStruct(pcsTransmitVendorInterruptMask, 2));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.D400 + 3) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsTransmitVendorInterruptMask, 3, 
      AQ_API_WordOfLocalStruct(pcsTransmitVendorInterruptMask, 3));
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Write register (APPIA: 03.D400 + 4) */
      AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PcsTransmitVendorInterruptMask, 4, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(APPIA, pcsTransmitVendorInterruptMask, 4));
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;
  }  
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.F400) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, 0, 
      AQ_API_WordOfLocalStruct(pcsReceiveVendorInterruptMask, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.F400 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, 1, 
      AQ_API_WordOfLocalStruct(pcsReceiveVendorInterruptMask, 1));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.F400 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, 2, 
      AQ_API_WordOfLocalStruct(pcsReceiveVendorInterruptMask, 2));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.F400 + 3) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, 3, 
      AQ_API_WordOfLocalStruct(pcsReceiveVendorInterruptMask, 3));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.F400 + 4) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, 4, 
      AQ_API_WordOfLocalStruct(pcsReceiveVendorInterruptMask, 4));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.F400 + 5) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, 5, 
      AQ_API_WordOfLocalStruct(pcsReceiveVendorInterruptMask, 5));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 03.F400 + 6) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PcsReceiveVendorInterruptMask, 6, 
      AQ_API_WordOfLocalStruct(pcsReceiveVendorInterruptMask, 6));

  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.FF01) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalInterruptChip_wideVendorMask, 0, 
      AQ_API_WordOfLocalStruct(globalInterruptChip_wideVendorMask, 0));

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_MaskAllAlarms
(
  AQ_API_Port* port
)
{
  /* Disables all alarms by masking off all bits at the root node of the mask tree. */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.FF00) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalInterruptChip_wideStandardMask, 0, 0x0000);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_UnMaskAllAlarms
(
  AQ_API_Port* port
)
{
  /* Unmask all bits at the root node of the interrupt tree. 
   *
   * Note that this doesn't enable all alarms, since the other levels of the mask tree
   * are not modified.  The mask bits of the other levels can be configured by calling
   * AQ_API_SetAlarmControl. */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.FF00) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalInterruptChip_wideStandardMask, 0, 0xFFFF);

  return AQ_RET_OK;
}

       
/*@}*/


/**********************************************************************************************************************
*                                               MDIO Boot Load
**********************************************************************************************************************/

/*! \addtogroup writingImages
  @{
*/

/*! Prepare the specified port for MDIO bootloading.  Disables the daisy-chain,
 * and explicitly sets the port's provisioningAddress. */
void AQ_API_EnableMDIO_BootLoadMode 
(
    /*! The target PHY port.*/
  AQ_API_Port* port,
    /*! The provisioning address to use when the FW starts and applies the 
     * bootloaded image's provisioned values. */
  unsigned int provisioningAddress
)
{
  AQ_API_Variable(AQ_GlobalNvrProvisioning)

  AQ_API_DeclareLocalStruct(AQ_GlobalReservedProvisioning, globalReservedProvisioning)


  /* disable the daisy-chain */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C452.0) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalNvrProvisioning, nvrDaisyChainDisable, 1);

  /* override the hop-count */
  AQ_API_AssignWordOfLocalStruct(globalReservedProvisioning, 1, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C470 + 1) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalReservedProvisioning, 1));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C471.5:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalReservedProvisioning, globalReservedProvisioning, 
      daisy_chainHop_countOverrideValue, provisioningAddress);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C471.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalReservedProvisioning, globalReservedProvisioning, 
      enableDaisy_chainHop_countOverride, 1);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C470 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalReservedProvisioning, 1, 
      AQ_API_WordOfLocalStruct(globalReservedProvisioning, 1));
  
  return;
}


/*! Prepare the specified port for MDIO bootloading, and set the temporary MDIO
 * address to be used during the bootload process.  Disables the daisy-chain,
 * and explicitly sets the port's provisioningAddress. */
void AQ_API_EnableGangLoadMode 
(
    /*! The target PHY port.*/
  AQ_API_Port* port,
    /*! The provisioning address to use when the FW starts and applies the 
     * bootloaded image's provisioned values. */
  unsigned int provisioningAddress, 
    /*! The PHY's MDIO address will be changed to this value during the 
     * bootload process. */
  unsigned int gangLoadAddress
)
{
  /*AQ_API_Variable_DeviceRestricted(APPIA, AQ_GlobalGeneralProvisioning)*/
  AQ_API_Variable(AQ_GlobalGeneralProvisioning)

  /* Enable gangload mode.  After doing this, the PHY will be 
   * addressable at the MDIO address indicated by gangLoadAddress.
   * Now that the PHY is in gangload mode, MDIO reads are prohibited
   * until AQ_API_DisableGangLoadMode is called. */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Read-Modify-Write bitfield (APPIA: 1E.C440.8:4) */
      AQ_API_Set_DeviceRestricted(APPIA, port->PHY_ID, AQ_GlobalGeneralProvisioning, 
          gangLoadMdioAddress, gangLoadAddress);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read-Modify-Write bitfield (HHD/EUR/CAL/RHEA: 1E.C447.4:0) */
      AQ_API_Set_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalGeneralProvisioning, 
          mdioBroadcastAddressConfiguration, gangLoadAddress);
      /* REGDOC: Read-Modify-Write bitfield (HHD/EUR/CAL/RHEA: 1E.C441.E) */
      AQ_API_Set_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalGeneralProvisioning, 
          mdioBroadcastModeEnable, 1);
      break;
  }
  
  return;
}


/*! Restore the PHY's MDIO address to the pin-specified value.  Should be 
 * called when MDIO bootloading is complete, to return to normal MDIO 
 * addressing.
 * <b>This is a gang-load function, hence write-only!</b> */
void AQ_API_DisableGangLoadMode 
(
    /*! The target PHY port.*/
  AQ_API_Port* port,
    /*! The value to write to of AQ_GlobalGeneralProvisioning.u1.word_1. */
  uint16_t origVal_GGP1
)
{
  AQ_API_DeclareLocalStruct(AQ_GlobalGeneralProvisioning, globalGeneralProvisioning)


  /* Restore the original value of globalGeneralProvisioning.u1, and set 
   * the MDIO address reset bit.  This will cause the MDIO address to be
   * reset to the value indicated by the pins. */
  AQ_API_AssignWordOfLocalStruct(globalGeneralProvisioning, 1, origVal_GGP1);
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      /* REGDOC: Assign to local representation of bitfield (APPIA: 1E.C441.2) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA, AQ_GlobalGeneralProvisioning, 
          globalGeneralProvisioning, mdioAddressReset, 1);
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C441.E) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalGeneralProvisioning, 
          globalGeneralProvisioning, mdioBroadcastModeEnable, 0);
      break;
  }

  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C440 + 1) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalGeneralProvisioning, 1, 
      AQ_API_WordOfLocalStruct(globalGeneralProvisioning, 1));

  /* The PHY has now exited gang-load mode. */
  return;
}


/* Common implementation of MDIO bootload routine, for the entry points:
 * AQ_API_WriteBootLoadImage
 * AQ_API_WriteBootLoadImageWithProvTable
 * AQ_API_WriteBootLoadImageDRAMOnly
 * AQ_API_WriteBootLoadImageWithProvTableDRAMOnly */
AQ_Retcode AQ_API_WriteBootLoadImage_impl
(
  AQ_API_Port** ports,
  unsigned int numPorts,
  const unsigned int* provisioningAddresses,
  AQ_Retcode* resultCodes,
  const uint32_t* imageSizePointer,
  const uint8_t* image,
  uint8_t gangload_MDIO_address,
  AQ_API_Port* gangloadPort,
  const uint32_t* provTableSizePointer,
  const uint8_t* provTableImage,
  AQ_boolean dramOnly
)
{
  /*------------------------------------- NOTE!!!!!!!!!! ----------------------------------------------------------*/
  /* This function uses word level writes here as in gang-load mode we cannot do a read in a read-modify-write     */
  /* operation                                                                                                     */
  /*---------------------------------------------------------------------------------------------------------------*/

  AQ_API_Variable_DeviceRestricted(APPIA, AQ_GlobalPinStatus)

  AQ_API_DeclareLocalStruct(AQ_GlobalControl, globalControl)
  AQ_API_DeclareLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface)

  AQ_API_Port* port;
  uint32_t primaryHeaderPtr = 0x00000000;
  uint32_t primaryIramPtr = 0x00000000;
  uint32_t primaryDramPtr = 0x00000000;
  uint32_t primaryIramSize = 0x00000000;
  uint32_t primaryDramSize = 0x00000000;
  uint32_t terminatorPtr = 0x00000000;
  uint32_t phyImageHeaderContentOffset = 0x00000000;
  uint32_t i; 
  uint32_t j;
  uint32_t imageSize;
  uint32_t provTableImageSize = 0;
  uint32_t bytePointer;
  uint32_t byteSize; 
  uint32_t dWordSize;
#ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE 
  uint32_t countPendingOps;                          /* A count of block MDIO operation pending... necessary to keep a count
                                                        in order to ensure we don't exceed the maximum pending operations. */
#endif
  uint16_t msw; 
  uint16_t lsw;
  uint16_t crc16Calculated; 
  uint16_t provTableCrc16Calculated; 
  uint16_t fileCRC; 
  uint16_t provTableFileCRC; 
  uint16_t mailboxCRC;
  uint16_t mailboxWrite;
  uint16_t bootLoadMode;
  uint16_t recordedGGP1Values[AQ_MAX_NUM_PHY_IDS];      /* When entering/exiting gangload mode, we record and restore
                                                        the AQ_GlobalGeneralProvisioning.u1 register values. */


  /* store the CRC-16 for the image, which is the last two bytes */
  imageSize = *imageSizePointer;
  
   /* 
   * If the imageSize is less than 2, we don't do anything
   */
  
  if  (imageSize < 2)
    return AQ_RET_FLASH_IMAGE_CORRUPT;

  
  fileCRC = image[imageSize-2] << 8 | image[imageSize-1];

  /*------------------------------------- Check the image integrity ------------------------------------------------*/
  crc16Calculated = 0x0000;
  for (i = 0; i < imageSize-2; i++)
  {
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ image[i]];
  }

  if (crc16Calculated != fileCRC)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("CRC check failed on image file (expected 0x%X, found 0x%X)\n",
        fileCRC, crc16Calculated);
  #endif
    for (j = 0; j < numPorts; j++) 
    {
      /* Before returning, set ALL result codes to indicate "bad image". */
      resultCodes[j] = AQ_RET_FLASH_IMAGE_CORRUPT;
    }
    return AQ_RET_ERROR;
  }
#ifdef AQ_VERBOSE
  else
  {
    AQ_API_Print("CRC check good on image file (0x%04X)\n", crc16Calculated);
  }
#endif

  /*-------------------------------- Check the provisioning table image integrity ----------------------------------*/
  if (provTableSizePointer != NULL && provTableImage != NULL)
  {
    provTableImageSize = (*provTableSizePointer) - 2;
    provTableFileCRC = provTableImage[provTableImageSize + 1] << 8 | 
        provTableImage[provTableImageSize];

    provTableCrc16Calculated = 0x0000;
    for (i = 0; i < provTableImageSize; i++)
    {
      provTableCrc16Calculated = ((provTableCrc16Calculated & 0xFF) << 8) ^ 
          AQ_CRC16Table[(provTableCrc16Calculated >> 8) ^ provTableImage[i]];
    }

    if (provTableCrc16Calculated != provTableFileCRC)
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("CRC check failed on provisioning table file (expected 0x%X, found 0x%X)\n",
          provTableFileCRC, provTableCrc16Calculated);
    #endif
      for (j = 0; j < numPorts; j++) 
      {
        /* Before returning, set ALL result codes to indicate "bad image". */
        resultCodes[j] = AQ_RET_FLASH_IMAGE_CORRUPT;
      }
      return AQ_RET_ERROR;
    }
  #ifdef AQ_VERBOSE
    else
    {
      AQ_API_Print("CRC check good on provisioning table file (0x%04X)\n", 
          provTableCrc16Calculated);
    }
  #endif
  }

  /*------------------------ Check that all provisioning addresses are in the proper range. ------------------------*/
  for (j = 0; j < numPorts; j++) 
  {
    if (provisioningAddresses[j] > 47)
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("Provisioning address out of range 0-47 (index %u: %d)\n", j, provisioningAddresses[j]);
    #endif
      for (j = 0; j < numPorts; j++) 
      {
        /* Before returning, set ALL result codes to indicate "provisioning address out-of-range". */
        resultCodes[j] = AQ_RET_BOOTLOAD_PROVADDR_OOR;
      }
      return AQ_RET_ERROR;
    }
  }

  /*--------------------------- Store 1E.C441 values for later use.  Enforce uniformity. ---------------------------*/
  for (j = 0; j < numPorts; j++) 
  {
    /* Record the original value of AQ_GlobalGeneralProvisioning.u1.word_1, 
     * so that we can restore it later after exiting gangload mode. */
    port = ports[j];
                            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C440 + 1) */
    recordedGGP1Values[j] = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalGeneralProvisioning, 1);

    /* If any of the PHYs' GGP1 values don't match the others, set the appropriate
     * error code and return. */
    if (j > 0 && recordedGGP1Values[j] != recordedGGP1Values[0])
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("Non-uniform value of 1E.C441 found (expected 0x%X, found 0x%X)\n", 
          recordedGGP1Values[0], recordedGGP1Values[j]);
    #endif
      for (j = 0; j < numPorts; j++) 
      {
        /* Before returning, set ALL result codes to indicate "non-uniform GGP1 values". */
        resultCodes[j] = AQ_RET_BOOTLOAD_NONUNIFORM_REGVALS;
      }
      return AQ_RET_ERROR;
    }
  }

  /*--------------------------- Put each PHY into gangload mode at the specified address ---------------------------*/
  for (j = 0; j < numPorts; j++) 
  {
    /* Get ready for MDIO bootloading. */
    AQ_API_EnableMDIO_BootLoadMode(ports[j], provisioningAddresses[j]);
    AQ_API_EnableGangLoadMode(ports[j], provisioningAddresses[j], gangload_MDIO_address);
  }
  /* Set up the port context for using device-restricted macros while in
   * gangload mode. */
  port = gangloadPort;

  /*------------------------------------- Stall the uP  ------------------------------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalControl, 1, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStall, 1);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
  AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalControl, 1, 
      AQ_API_WordOfLocalStruct(globalControl, 1));

  /*------------------------------------- Initialize the mailbox write command -------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 0, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxWriteMode, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxExecuteOperation, 1);
  mailboxWrite = AQ_API_WordOfLocalStruct(globalMailboxInterface, 0);

  /*------------------------------------- Read the segment addresses and sizes -------------------------------------*/
  primaryHeaderPtr = (((image[0x9] & 0x0F) << 8) | image[0x8]) << 12;

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      phyImageHeaderContentOffset = AQ_PHY_IMAGE_HEADER_CONTENT_OFFSET_APPIA;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      phyImageHeaderContentOffset = AQ_PHY_IMAGE_HEADER_CONTENT_OFFSET_HHD;
      break;
  }

  primaryIramPtr =  (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x4 + 2] << 16) |
                    (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x4 + 1] << 8)  |
                     image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x4];
  primaryIramSize = (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x7 + 2] << 16) |
                    (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x7 + 1] << 8)  |
                     image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x7];
  primaryDramPtr =  (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xA + 2] << 16) |
                    (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xA + 1] << 8)  |
                     image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xA];
  primaryDramSize = (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xD + 2] << 16) |
                    (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xD + 1] << 8)  |
                     image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xD];

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      primaryIramPtr += primaryHeaderPtr;
      primaryDramPtr += primaryHeaderPtr;
      break;
  }

#ifdef AQ_VERBOSE
  AQ_API_Print("\nSegment Addresses and Sizes as read from the PHY ROM image header:\n\n");
  AQ_API_Print("Primary Iram Address: 0x%x\n", primaryIramPtr);
  AQ_API_Print("Primary Iram Size: 0x%x\n", primaryIramSize);
  AQ_API_Print("Primary Dram Address: 0x%x\n", primaryDramPtr);
  AQ_API_Print("Primary Dram Size: 0x%x\n\n", primaryDramSize);
#endif

  /*------------------ Prepare to merge the provisioning table into the main image ---------------------------------*/
  if (provTableSizePointer != NULL && provTableImage != NULL)
  {
    /* Locate the terminator of the built-in provisioning table */
    terminatorPtr = primaryDramPtr + 
        ((image[primaryDramPtr + AQ_PHY_IMAGE_PROVTABLE_TERM_OFFSET + 1] << 8) | 
        image[primaryDramPtr + AQ_PHY_IMAGE_PROVTABLE_TERM_OFFSET]);

  #ifdef AQ_VERBOSE
    AQ_API_Print("Supplied Provisioning Table At Address: 0x%x\n\n", terminatorPtr);
  #endif

    /* Check that the supplied provisioning table will fit within the alloted
     * space. */
    if (terminatorPtr - (primaryDramPtr + AQ_PHY_IMAGE_PROVTABLE_OFFSET) + 
        provTableImageSize > AQ_PHY_IMAGE_PROVTABLE_MAXSIZE)
    {
      for (j = 0; j < numPorts; j++) 
      {
        /* Before returning, set ALL result codes to indicate "provisioning 
         * table too large". */
        resultCodes[j] = AQ_RET_BOOTLOAD_PROVTABLE_TOO_LARGE;
      }
      return AQ_RET_ERROR;
    }
  }

  /*------------------------------------- Load IRAM and DRAM -------------------------------------------------------*/
  /* clear the mailbox CRC */
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 0, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.C) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, resetUpMailboxCrc, 1);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
  AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, 
      AQ_API_WordOfLocalStruct(globalMailboxInterface, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
  AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, 0x0000);
  
  crc16Calculated = 0;         /* This is to calculate what was written through the mailbox */

  if (!dramOnly)
  {
    /* load the IRAM */
  #ifdef AQ_VERBOSE
    AQ_API_Print("\nLoading IRAM:\n\n");
  #endif
    
    /* dWord align the address: note the image addressing is byte based, but is properly aligned on dWord
       boundaries, so the 2 LSbits of the block start are always zero. */
    msw = (uint16_t) (AQ_IRAM_BASE_ADDRESS >> 16);
    AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 3, 0x0000);
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0203.1:0) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, 
        upMailboxAddressLSW , (AQ_IRAM_BASE_ADDRESS & 0xFFFF) >> 2);
    lsw = AQ_API_WordOfLocalStruct(globalMailboxInterface, 3);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
    AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 2, msw);              /* MSW */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
    AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 3, lsw);              /* LSW */


    /* set block size so that there are from 0-3 bytes remaining */
    byteSize = primaryIramSize;
    dWordSize = byteSize >> 2;

    bytePointer = primaryIramPtr;
  #ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE 
    countPendingOps = 0;
  #endif
    for (i = 0; i < dWordSize; i++)
    {
      /* write 4 bytes of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];

      if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
        lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
      else
        lsw |= image[bytePointer+1] << 8;

      bytePointer += 2;

      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        msw = provTableImage[bytePointer - terminatorPtr];
      else
        msw = image[bytePointer];

      if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
        msw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
      else
        msw |= image[bytePointer+1] << 8;

      bytePointer += 2;

    #ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE 
      AQ_API_BlockWriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
      AQ_API_BlockWriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);
      AQ_API_BlockWriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
            
      countPendingOps += 3;
      /* Check if we've filled our output buffer, and if so, flush. */
      if (countPendingOps >= AQ_API_MDIO_MaxBlockOperations() - 3 )
      {
        AQ_API_MDIO_BlockOperationExecute (gangloadPort->PHY_ID); 
        countPendingOps = 0;
      }
    #else
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
    #endif
    
      /* update the calculated CRC */
      crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw >> 8)];
      crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw & 0xFF)];
      crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw >> 8)];
      crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw & 0xFF)];
    
    #ifdef AQ_VERBOSE
      if (i && ((i % 512) == 0)) AQ_API_Print("    Byte: %X:\n", i << 2);
    #endif
    }
    
  #ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE 
    /* flush the output buffer one last time. */
    AQ_API_MDIO_BlockOperationExecute(gangloadPort->PHY_ID); 
    countPendingOps = 0;
  #endif

    /* Note: this final write right-justifies non-dWord data in the final dWord */
    switch (byteSize & 0x3)
    {
      case 0x1:
        /* write 1 byte of data */
        if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
          lsw = provTableImage[bytePointer - terminatorPtr];
        else
          lsw = image[bytePointer];
        bytePointer += 1;
        msw = 0x0000;
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);

        /* no polling */
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
        break;

      case 0x2:
        /* write 2 bytes of data */
        if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
          lsw = provTableImage[bytePointer - terminatorPtr];
        else
          lsw = image[bytePointer];

        if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
          lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
        else
          lsw |= image[bytePointer+1] << 8;

        bytePointer += 2;
        msw = 0x0000;
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);

        /* no polling */
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
        break;

      case 0x3:
        /* write 3 bytes of data */
        if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
          lsw = provTableImage[bytePointer - terminatorPtr];
        else
          lsw = image[bytePointer];

        if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
          lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
        else
          lsw |= image[bytePointer+1] << 8;

        bytePointer += 2;

        if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
          msw = provTableImage[bytePointer - terminatorPtr];
        else
          msw = image[bytePointer];

        bytePointer += 1;
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);

        /* no polling */
        /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
        AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
        break;
    }
    
    if (byteSize & 0x3)
    {
     /* update the calculated CRC */
      crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw >> 8)];
      crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw & 0xFF)];
      crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw >> 8)];
      crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw & 0xFF)];    
    }

    #ifdef AQ_VERBOSE
      AQ_API_Print("\nCRC-16 after loading IRAM: 0x%X\n", crc16Calculated);
    #endif
  }
  
  /* load the DRAM */
#ifdef AQ_VERBOSE
  AQ_API_Print("\nLoading DRAM:\n\n");
#endif
  
  /* dWord align the address: note the image addressing is byte based, but is properly aligned on dWord
     boundaries, so the 2 LSbits of the block start are always zero. */
  msw = (uint16_t) (AQ_DRAM_BASE_ADDRESS >> 16);
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 3, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0203.1:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, 
      upMailboxAddressLSW, (AQ_DRAM_BASE_ADDRESS & 0xFFFF) >> 2);
  lsw = AQ_API_WordOfLocalStruct(globalMailboxInterface, 3);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
  AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 2, msw);              /* MSW */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
  AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 3, lsw);              /* LSW */


  /* set block size so that there are from 0-3 bytes remaining */
  byteSize = primaryDramSize;
  dWordSize = byteSize >> 2;

  bytePointer = primaryDramPtr;
#ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE 
  countPendingOps = 0;
#endif
  for (i = 0; i < dWordSize; i++)
  {
    /* write 4 bytes of data */
    if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
      lsw = provTableImage[bytePointer - terminatorPtr];
    else
      lsw = image[bytePointer];

    if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
      lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
    else
      lsw |= image[bytePointer+1] << 8;

    bytePointer += 2;
    if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
      msw = provTableImage[bytePointer - terminatorPtr];
    else
      msw = image[bytePointer];

    if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
      msw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
    else
      msw |= image[bytePointer+1] << 8;

    bytePointer += 2;

  #ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE 
    AQ_API_BlockWriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
    AQ_API_BlockWriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);
    AQ_API_BlockWriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
          
    countPendingOps += 3;
    /* Check if we've filled our output buffer, and if so, flush. */
    if (countPendingOps >= AQ_API_MDIO_MaxBlockOperations() - 3 )
    {
      AQ_API_MDIO_BlockOperationExecute (gangloadPort->PHY_ID); 
      countPendingOps = 0;
    }
  #else
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
    AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
    AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
    AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
  #endif
  
    /* update the calculated CRC */
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw & 0xFF)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw & 0xFF)];
  
  #ifdef AQ_VERBOSE
    if (i && ((i % 512) == 0)) AQ_API_Print("    Byte: %X:\n", i << 2);
  #endif
  }
  
#ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE 
  /* flush the output buffer one last time. */
  AQ_API_MDIO_BlockOperationExecute(gangloadPort->PHY_ID); 
  countPendingOps = 0;
#endif
  
  /* Note: this final write right-justifies non-dWord data in the final dWord */
  switch (byteSize & 0x3)
  {
    case 0x1:
      /* write 1 byte of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];
      bytePointer += 1;
      msw = 0x0000;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;

    case 0x2:
      /* write 2 bytes of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];

      if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
        lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
      else
        lsw |= image[bytePointer+1] << 8;

      bytePointer += 2;
      msw = 0x0000;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;

    case 0x3:
      /* write 3 bytes of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];

      if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
        lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
      else
        lsw |= image[bytePointer+1] << 8;

      bytePointer += 2;

      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        msw = provTableImage[bytePointer - terminatorPtr];
      else
        msw = image[bytePointer];

      bytePointer += 1;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_WriteRegister(gangloadPort->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;
  }
  
  if (byteSize & 0x3)
  {
   /* update the calculated CRC */
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw & 0xFF)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw & 0xFF)];    
  }

  /*------------------------------------- Exit gangload mode -------------------------------------------------------*/
  AQ_API_DisableGangLoadMode(gangloadPort, recordedGGP1Values[0]);

  /*------------------------------------- Check mailbox CRCs -------------------------------------------------------*/
  /* check to make sure the mailbox CRC matches the calculated CRC */
  /*foundMailboxCRCMismatch = False;*/
  for (j = 0; j < numPorts; j++) 
  {
                 /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 1) */
    mailboxCRC = AQ_API_ReadRegister(ports[j]->PHY_ID,AQ_GlobalMailboxInterface, 1);
    if (mailboxCRC != crc16Calculated)
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("\n%uth port: Mailbox CRC-16 (0x%X) does not match calculated CRC-16 (0x%X)\n", 
          j, mailboxCRC, crc16Calculated);
    #endif
      /* Note that we can't just return here, because we still need to 
       * release the uPs for the other PHYs that might have been
       * bootloaded successfully. */
      resultCodes[j] = AQ_RET_BOOTLOAD_CRC_MISMATCH;
    }
    else
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("\n%uth port: Image load good - mailbox CRC-16 matches (0x%X)\n", 
          j, mailboxCRC);
    #endif
      resultCodes[j] = AQ_RET_OK;
    }
  }

  /*------------------------------------- Clear any resets ---------------------------------------------------------*/
  for (j = 0; j < numPorts; j++) 
  {
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0000) */
    AQ_API_WriteRegister(ports[j]->PHY_ID,AQ_GlobalStandardControl_1, 0, 0x0000);
  }

  /*------------------------------------- Release the uP -----------------------------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalControl, 1, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStall, 1);
  for (j = 0; j < numPorts; j++) 
  {
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.F) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upReset, 0);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
    AQ_API_WriteRegister(ports[j]->PHY_ID,AQ_GlobalControl, 1, 
        AQ_API_WordOfLocalStruct(globalControl, 1));
    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.F) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upReset, 1);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
    AQ_API_WriteRegister(ports[j]->PHY_ID,AQ_GlobalControl, 1, 
        AQ_API_WordOfLocalStruct(globalControl, 1));
  }
  
  /* Need to wait at least 100us. */
  AQ_API_Wait(1, ports[0]);
  
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upReset, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStall, 0);
  for (j = 0; j < numPorts; j++) 
  {
    switch (port->device)
    {
      case AQ_DEVICE_APPIA:
        /* If the BOOT_LD pins are set to MDIO boot load mode, we can't clear the
         * uP run stall override bit.  If we did, the uP would stall. */
        /* REGDOC: Read bitfield (APPIA: 1E.C840.E:D) */
        AQ_API_Get_DeviceRestricted(APPIA, ports[j]->PHY_ID, AQ_GlobalPinStatus, mdioBootLoad, bootLoadMode);
        if (bootLoadMode == 0x1)
        {
          /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
          AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
        }
        else
        {
          /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
          AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 0);
        }
        break;

      case AQ_DEVICE_HHD:
      case AQ_DEVICE_EUR:
      case AQ_DEVICE_CAL:
      case AQ_DEVICE_RHEA:
        /* For post-APPIA devices, always set the uP stall override bit to 
         * smooth over any packaging differences WRT the boot load pin. */
        /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
        AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
        break;
    }

    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
    AQ_API_WriteRegister(ports[j]->PHY_ID,AQ_GlobalControl, 1, 
        AQ_API_WordOfLocalStruct(globalControl, 1));
  }
  
  /* NOTE!!! We can't re-enable the daisy-chain here, as this will overwrite the IRAM and DRAM with the FLASH contents*/

  /* If any of the ports was not bootloaded successfully, return AQ_RET_ERROR */
  for (j = 0; j < numPorts; j++) 
  {
    if (resultCodes[j] != AQ_RET_OK)
      return AQ_RET_ERROR;
  }

  /* All ports were bootloaded successfully. */
  return AQ_RET_OK;
}

#ifdef AQ_MDIO_WRITE_MULTI

AQ_Retcode   AQ_API_WriteBootLoadImageWithProvTableMulti 
(    
 AQ_API_Port**  ports, 
 unsigned int  numPorts, 
 const unsigned int*  provisioningAddresses, 
 AQ_Retcode*  resultCodes, 
 const uint32_t*  imageSizePointer, 
 const uint8_t*  image, 
 const uint32_t*  provTableSizePointer, 
 const uint8_t*  provTableImage 
)
{

  AQ_API_DeclareLocalStruct(AQ_GlobalControl, globalControl)
  AQ_API_DeclareLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface)

  AQ_API_Port* port;
  uint32_t primaryHeaderPtr = 0x00000000;
  uint32_t primaryIramPtr = 0x00000000;
  uint32_t primaryDramPtr = 0x00000000;
  uint32_t primaryIramSize = 0x00000000;
  uint32_t primaryDramSize = 0x00000000;
  uint32_t terminatorPtr = 0x00000000;
  uint32_t phyImageHeaderContentOffset = 0x00000000;
  uint32_t i; 
  uint32_t j;
  uint32_t imageSize;
  uint32_t provTableImageSize = 0;
  uint32_t bytePointer;
  uint32_t byteSize; 
  uint32_t dWordSize;

  uint16_t msw; 
  uint16_t lsw;
  uint16_t crc16Calculated; 
  uint16_t provTableCrc16Calculated; 
  uint16_t fileCRC; 
  uint16_t provTableFileCRC; 
  uint16_t mailboxCRC;
  uint16_t mailboxWrite;
  AQ_Port PHY_ID_List[AQ_MAX_NUM_PHY_IDS];



  /* store the CRC-16 for the image, which is the last two bytes */
  imageSize = *imageSizePointer;
  port = ports[0];

  for (i = 0; i < numPorts; i++)
    PHY_ID_List[i] = ports[i]->PHY_ID;

  
   /* 
   * If the imageSize is less than 2, we don't do anything
   */
  
  if  (imageSize < 2)
    return AQ_RET_FLASH_IMAGE_CORRUPT;

  
  fileCRC = image[imageSize-2] << 8 | image[imageSize-1];

  /*------------------------------------- Check the image integrity ------------------------------------------------*/
  crc16Calculated = 0x0000;
  for (i = 0; i < imageSize-2; i++)
  {
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ image[i]];
  }

  if (crc16Calculated != fileCRC)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("CRC check failed on image file (expected 0x%X, found 0x%X)\n",
        fileCRC, crc16Calculated);
  #endif
    for (j = 0; j < numPorts; j++) 
    {
      /* Before returning, set ALL result codes to indicate "bad image". */
      resultCodes[j] = AQ_RET_FLASH_IMAGE_CORRUPT;
    }
    return AQ_RET_ERROR;
  }
#ifdef AQ_VERBOSE
  else
  {
    AQ_API_Print("CRC check good on image file (0x%04X)\n", crc16Calculated);
  }
#endif

  /*-------------------------------- Check the provisioning table image integrity ----------------------------------*/
  if (provTableSizePointer != NULL && provTableImage != NULL)
  {
    provTableImageSize = (*provTableSizePointer) - 2;
    provTableFileCRC = provTableImage[provTableImageSize + 1] << 8 | 
        provTableImage[provTableImageSize];

    provTableCrc16Calculated = 0x0000;
    for (i = 0; i < provTableImageSize; i++)
    {
      provTableCrc16Calculated = ((provTableCrc16Calculated & 0xFF) << 8) ^ 
          AQ_CRC16Table[(provTableCrc16Calculated >> 8) ^ provTableImage[i]];
    }

    if (provTableCrc16Calculated != provTableFileCRC)
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("CRC check failed on provisioning table file (expected 0x%X, found 0x%X)\n",
          provTableFileCRC, provTableCrc16Calculated);
    #endif
      for (j = 0; j < numPorts; j++) 
      {
        /* Before returning, set ALL result codes to indicate "bad image". */
        resultCodes[j] = AQ_RET_FLASH_IMAGE_CORRUPT;
      }
      return AQ_RET_ERROR;
    }
  #ifdef AQ_VERBOSE
    else
    {
      AQ_API_Print("CRC check good on provisioning table file (0x%04X)\n", 
          provTableCrc16Calculated);
    }
  #endif
  }

  /*------------------------ Check that all provisioning addresses are in the proper range. ------------------------*/
  for (j = 0; j < numPorts; j++) 
  {
    if (provisioningAddresses[j] > 47)
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("Provisioning address out of range 0-47 (index %u: %d)\n", j, provisioningAddresses[j]);
    #endif
      for (j = 0; j < numPorts; j++) 
      {
        /* Before returning, set ALL result codes to indicate "provisioning address out-of-range". */
        resultCodes[j] = AQ_RET_BOOTLOAD_PROVADDR_OOR;
      }
      return AQ_RET_ERROR;
    }
  }

  /*------------------------------------- Stall the uP  ------------------------------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalControl, 1, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStall, 1);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
  AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalControl, 1, 
        AQ_API_WordOfLocalStruct(globalControl, 1));

  /*------------------------------------- Initialize the mailbox write command -------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 0, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxWriteMode, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxExecuteOperation, 1);
  mailboxWrite = AQ_API_WordOfLocalStruct(globalMailboxInterface, 0);

  /*------------------------------------- Read the segment addresses and sizes -------------------------------------*/
  primaryHeaderPtr = (((image[0x9] & 0x0F) << 8) | image[0x8]) << 12;

  switch (ports[0]->device) /* Assuming all the ports have the same device*/
  {
    case AQ_DEVICE_APPIA:
      phyImageHeaderContentOffset = AQ_PHY_IMAGE_HEADER_CONTENT_OFFSET_APPIA;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      phyImageHeaderContentOffset = AQ_PHY_IMAGE_HEADER_CONTENT_OFFSET_HHD;
      break;
  }

  primaryIramPtr =  (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x4 + 2] << 16) |
                    (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x4 + 1] << 8)  |
                     image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x4];
  primaryIramSize = (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x7 + 2] << 16) |
                    (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x7 + 1] << 8)  |
                     image[primaryHeaderPtr + phyImageHeaderContentOffset + 0x7];
  primaryDramPtr =  (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xA + 2] << 16) |
                    (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xA + 1] << 8)  |
                     image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xA];
  primaryDramSize = (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xD + 2] << 16) |
                    (image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xD + 1] << 8)  |
                     image[primaryHeaderPtr + phyImageHeaderContentOffset + 0xD];

  switch (ports[0]->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      primaryIramPtr += primaryHeaderPtr;
      primaryDramPtr += primaryHeaderPtr;
      break;
  }

#ifdef AQ_VERBOSE
  AQ_API_Print("\nSegment Addresses and Sizes as read from the PHY ROM image header:\n\n");
  AQ_API_Print("Primary Iram Address: 0x%x\n", primaryIramPtr);
  AQ_API_Print("Primary Iram Size: 0x%x\n", primaryIramSize);
  AQ_API_Print("Primary Dram Address: 0x%x\n", primaryDramPtr);
  AQ_API_Print("Primary Dram Size: 0x%x\n\n", primaryDramSize);
#endif

  /*------------------ Prepare to merge the provisioning table into the main image ---------------------------------*/
  if (provTableSizePointer != NULL && provTableImage != NULL)
  {
    /* Locate the terminator of the built-in provisioning table */
    terminatorPtr = primaryDramPtr + 
        ((image[primaryDramPtr + AQ_PHY_IMAGE_PROVTABLE_TERM_OFFSET + 1] << 8) | 
        image[primaryDramPtr + AQ_PHY_IMAGE_PROVTABLE_TERM_OFFSET]);

  #ifdef AQ_VERBOSE
    AQ_API_Print("Supplied Provisioning Table At Address: 0x%x\n\n", terminatorPtr);
  #endif

    /* Check that the supplied provisioning table will fit within the alloted
     * space. */
    if (terminatorPtr - (primaryDramPtr + AQ_PHY_IMAGE_PROVTABLE_OFFSET) + 
        provTableImageSize > AQ_PHY_IMAGE_PROVTABLE_MAXSIZE)
    {
      for (j = 0; j < numPorts; j++) 
      {
        /* Before returning, set ALL result codes to indicate "provisioning 
         * table too large". */
        resultCodes[j] = AQ_RET_BOOTLOAD_PROVTABLE_TOO_LARGE;
      }
      return AQ_RET_ERROR;
    }
  }

  /*------------------------------------- Load IRAM and DRAM -------------------------------------------------------*/
  /* clear the mailbox CRC */
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 0, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.C) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, resetUpMailboxCrc, 1);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
  AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, 
        AQ_API_WordOfLocalStruct(globalMailboxInterface, 0));
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
  AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, 0x0000);

  crc16Calculated = 0;         /* This is to calculate what was written through the mailbox */

  /* load the IRAM */
#ifdef AQ_VERBOSE
  AQ_API_Print("\nLoading IRAM:\n\n");
#endif
  
  /* dWord align the address: note the image addressing is byte based, but is properly aligned on dWord
     boundaries, so the 2 LSbits of the block start are always zero. */
  msw = (uint16_t) (AQ_IRAM_BASE_ADDRESS >> 16);
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 3, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR: 1E.0203.1:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, 
      upMailboxAddressLSW , (AQ_IRAM_BASE_ADDRESS & 0xFFFF) >> 2);
  lsw = AQ_API_WordOfLocalStruct(globalMailboxInterface, 3);

   /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 2, msw);              /* MSW */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 3, lsw);              /* LSW */


  /* set block size so that there are from 0-3 bytes remaining */
  byteSize = primaryIramSize;
  dWordSize = byteSize >> 2;

  bytePointer = primaryIramPtr;

  for (i = 0; i < dWordSize; i++)
  {
    /* write 4 bytes of data */
    if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
      lsw = provTableImage[bytePointer - terminatorPtr];
    else
      lsw = image[bytePointer];

    if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
      lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
    else
      lsw |= image[bytePointer+1] << 8;

    bytePointer += 2;

    if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
      msw = provTableImage[bytePointer - terminatorPtr];
    else
      msw = image[bytePointer];

    if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
      msw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
    else
      msw |= image[bytePointer+1] << 8;

    bytePointer += 2;

  
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 4, msw); /*  CHANGEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 5, lsw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, mailboxWrite);
  
    /* update the calculated CRC */
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw & 0xFF)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw & 0xFF)];
  
  #ifdef AQ_VERBOSE
    if (i && ((i % 512) == 0)) AQ_API_Print("    Byte: %X:\n", i << 2);
  #endif
  }

  /* Note: this final write right-justifies non-dWord data in the final dWord */
  switch (byteSize & 0x3)
  {
    case 0x1:
      /* write 1 byte of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];
      bytePointer += 1;
      msw = 0x0000;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;

    case 0x2:
      /* write 2 bytes of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];

      if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
        lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
      else
        lsw |= image[bytePointer+1] << 8;

      bytePointer += 2;
      msw = 0x0000;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;

    case 0x3:
      /* write 3 bytes of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];

      if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
        lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
      else
        lsw |= image[bytePointer+1] << 8;

      bytePointer += 2;

      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        msw = provTableImage[bytePointer - terminatorPtr];
      else
        msw = image[bytePointer];

      bytePointer += 1;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;
  }
  
  if (byteSize & 0x3)
  {
   /* update the calculated CRC */
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw & 0xFF)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw & 0xFF)];    
  }

  #ifdef AQ_VERBOSE
    AQ_API_Print("\nCRC-16 after loading IRAM: 0x%X\n", crc16Calculated);
  #endif
  
  
  /* load the DRAM */
#ifdef AQ_VERBOSE
  AQ_API_Print("\nLoading DRAM:\n\n");
#endif
  
  /* dWord align the address: note the image addressing is byte based, but is properly aligned on dWord
     boundaries, so the 2 LSbits of the block start are always zero. */
  msw = (uint16_t) (AQ_DRAM_BASE_ADDRESS >> 16);
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 3, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR: 1E.0203.1:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, 
      upMailboxAddressLSW, (AQ_DRAM_BASE_ADDRESS & 0xFFFF) >> 2);
  lsw = AQ_API_WordOfLocalStruct(globalMailboxInterface, 3);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
  AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 2, msw);              /* MSW */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
  AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 3, lsw);              /* LSW */


  /* set block size so that there are from 0-3 bytes remaining */
  byteSize = primaryDramSize;
  dWordSize = byteSize >> 2;

  bytePointer = primaryDramPtr;

  for (i = 0; i < dWordSize; i++)
  {
    /* write 4 bytes of data */
    if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
      lsw = provTableImage[bytePointer - terminatorPtr];
    else
      lsw = image[bytePointer];

    if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
      lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
    else
      lsw |= image[bytePointer+1] << 8;

    bytePointer += 2;
    if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
      msw = provTableImage[bytePointer - terminatorPtr];
    else
      msw = image[bytePointer];

    if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
      msw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
    else
      msw |= image[bytePointer+1] << 8;

    bytePointer += 2;

  
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 4, msw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 5, lsw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, mailboxWrite);
  
    /* update the calculated CRC */
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw & 0xFF)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw & 0xFF)];
  
  #ifdef AQ_VERBOSE
    if (i && ((i % 512) == 0)) AQ_API_Print("    Byte: %X:\n", i << 2);
  #endif
  }
    
  /* Note: this final write right-justifies non-dWord data in the final dWord */
  switch (byteSize & 0x3)
  {
    case 0x1:
      /* write 1 byte of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];
      bytePointer += 1;
      msw = 0x0000;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;

    case 0x2:
      /* write 2 bytes of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];

      if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
        lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
      else
        lsw |= image[bytePointer+1] << 8;

      bytePointer += 2;
      msw = 0x0000;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;

    case 0x3:
      /* write 3 bytes of data */
      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        lsw = provTableImage[bytePointer - terminatorPtr];
      else
        lsw = image[bytePointer];

      if (terminatorPtr && ((bytePointer+1) >= terminatorPtr) && ((bytePointer+1) < terminatorPtr + provTableImageSize))
        lsw |= provTableImage[bytePointer + 1 - terminatorPtr] << 8;
      else
        lsw |= image[bytePointer+1] << 8;

      bytePointer += 2;

      if (terminatorPtr && (bytePointer >= terminatorPtr) && (bytePointer < terminatorPtr + provTableImageSize))
        msw = provTableImage[bytePointer - terminatorPtr];
      else
        msw = image[bytePointer];

      bytePointer += 1;
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 4, msw);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 5, lsw);

      /* no polling */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalMailboxInterface, 0, mailboxWrite);
      break;
  }
  
  if (byteSize & 0x3)
  {
   /* update the calculated CRC */
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (msw & 0xFF)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw >> 8)];
    crc16Calculated = ((crc16Calculated & 0xFF) << 8) ^ AQ_CRC16Table[(crc16Calculated >> 8) ^ (lsw & 0xFF)];    
  }

  /*------------------------------------- Check mailbox CRCs -------------------------------------------------------*/
  /* check to make sure the mailbox CRC matches the calculated CRC */
  /*foundMailboxCRCMismatch = False;*/
  for (j = 0; j < numPorts; j++) 
  {
                 /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 1) */
    mailboxCRC = AQ_API_ReadRegister(ports[j]->PHY_ID,AQ_GlobalMailboxInterface, 1);
    if (mailboxCRC != crc16Calculated)
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("\n%uth port: Mailbox CRC-16 (0x%X) does not match calculated CRC-16 (0x%X)\n", 
          j, mailboxCRC, crc16Calculated);
    #endif
      /* Note that we can't just return here, because we still need to 
       * release the uPs for the other PHYs that might have been
       * bootloaded successfully. */
      resultCodes[j] = AQ_RET_BOOTLOAD_CRC_MISMATCH;
    }
    else
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("\n%uth port: Image load good - mailbox CRC-16 matches (0x%X)\n", 
          j, mailboxCRC);
    #endif
      resultCodes[j] = AQ_RET_OK;
    }
  }

  /*------------------------------------- Clear any resets ---------------------------------------------------------*/

  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0000) */
    AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalStandardControl_1, 0, 0x0000); 

  /*------------------------------------- Release the uP -----------------------------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalControl, 1, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR: 1E.C001.6) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR: 1E.C001.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStall, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR: 1E.C001.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upReset, 0);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
  AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalControl, 1, 
      AQ_API_WordOfLocalStruct(globalControl, 1));

  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR: 1E.C001.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upReset, 1);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
  AQ_API_MultiWriteRegister(PHY_ID_List, numPorts, AQ_GlobalControl, 1, 
      AQ_API_WordOfLocalStruct(globalControl, 1));
  
  /* Need to wait at least 100us. */
  AQ_API_Wait(1, ports[0]);
  
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upReset, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStall, 0);

  /* Assuming all the ports have the same device and we don't need to support this for APPIA */ 
  switch (ports[0]->device)
  {
    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* For post-APPIA devices, always set the uP stall override bit to 
       * smooth over any packaging differences WRT the boot load pin. */
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C001.6) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalControl, globalControl, upRunStallOverride, 1);
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C000 + 1) */
      AQ_API_MultiWriteRegister(PHY_ID_List, numPorts,AQ_GlobalControl, 1, 
        AQ_API_WordOfLocalStruct(globalControl, 1));
      break;
    case AQ_DEVICE_APPIA:
      break;
  }
  
  /* NOTE!!! We can't re-enable the daisy-chain here, as this will overwrite the IRAM and DRAM with the FLASH contents*/

  /* If any of the ports was not bootloaded successfully, return AQ_RET_ERROR */
  for (j = 0; j < numPorts; j++) 
  {
    if (resultCodes[j] != AQ_RET_OK)
      return AQ_RET_ERROR;
  }

  /* All ports were bootloaded successfully. */
  return AQ_RET_OK;

}        

#endif

AQ_Retcode AQ_API_WriteBootLoadImage
(
  AQ_API_Port** ports,
  unsigned int numPorts,
  const unsigned int* provisioningAddresses,
  AQ_Retcode* resultCodes,
  const uint32_t* imageSizePointer,
  const uint8_t* image,
  uint8_t gangload_MDIO_address,
  AQ_API_Port* gangloadPort
)
{
  return AQ_API_WriteBootLoadImage_impl(ports, numPorts, 
      provisioningAddresses, resultCodes, imageSizePointer, image, 
      gangload_MDIO_address, gangloadPort, NULL, NULL, False);
}


AQ_Retcode AQ_API_WriteBootLoadImageWithProvTable
(
  AQ_API_Port** ports,
  unsigned int numPorts,
  const unsigned int* provisioningAddresses,
  AQ_Retcode* resultCodes,
  const uint32_t* imageSizePointer,
  const uint8_t* image,
  uint8_t gangload_MDIO_address,
  AQ_API_Port* gangloadPort,
  const uint32_t* provTableSizePointer,
  const uint8_t* provTableImage
)
{
  return AQ_API_WriteBootLoadImage_impl(ports, numPorts, 
      provisioningAddresses, resultCodes, imageSizePointer, image, 
      gangload_MDIO_address, gangloadPort, provTableSizePointer, 
      provTableImage, False);
}


AQ_Retcode AQ_API_WriteBootLoadImageDRAMOnly
(
  AQ_API_Port** ports,
  unsigned int numPorts,
  const unsigned int* provisioningAddresses,
  AQ_Retcode* resultCodes,
  const uint32_t* imageSizePointer,
  const uint8_t* image,
  uint8_t gangload_MDIO_address,
  AQ_API_Port* gangloadPort
)
{
  return AQ_API_WriteBootLoadImage_impl(ports, numPorts, 
      provisioningAddresses, resultCodes, imageSizePointer, image, 
      gangload_MDIO_address, gangloadPort, NULL, NULL, True);
}


AQ_Retcode AQ_API_WriteBootLoadImageWithProvTableDRAMOnly
(
  AQ_API_Port** ports,
  unsigned int numPorts,
  const unsigned int* provisioningAddresses,
  AQ_Retcode* resultCodes,
  const uint32_t* imageSizePointer,
  const uint8_t* image,
  uint8_t gangload_MDIO_address,
  AQ_API_Port* gangloadPort,
  const uint32_t* provTableSizePointer,
  const uint8_t* provTableImage
)
{
  return AQ_API_WriteBootLoadImage_impl(ports, numPorts, 
      provisioningAddresses, resultCodes, imageSizePointer, image, 
      gangload_MDIO_address, gangloadPort, provTableSizePointer, 
      provTableImage, True);
}


AQ_Retcode AQ_API_ExtendProvTable
(
  /* The target PHY port */
  AQ_API_Port* port, 
  /* The new Provisioning block size */
  unsigned int provExtensionSize,
  /* The new Provisioning image pointer */
  uint8_t* provTableExtensionImage
)
{
  
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalReservedStatus)
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalReservedProvisioning)

  unsigned int provTerminalOrg = 0;
  unsigned int stallState = 0;
  AQ_Retcode resultCode;

  
  /* Check whether there is enough space for new prov block*/
  resultCode = GetProvTableTerm(port, &provTerminalOrg);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Check provisioning terminal resultCode: %d\n", resultCode);
  #endif
    return AQ_RET_BOOTLOAD_PROVADDR_OOR; 
  }

#ifdef AQ_VERBOSE
  AQ_API_Print("Provisioning terminal at 0x%04X\n", provTerminalOrg);
#endif
  if (provTerminalOrg + provExtensionSize + 2 > AQ_PHY_IMAGE_PROVTABLE_OFFSET + AQ_PHY_IMAGE_PROVTABLE_MAXSIZE) 
  {
    return AQ_RET_BOOTLOAD_PROVTABLE_TOO_LARGE; 
  }
  
  /* Check if the FW is stalled */
  AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, powerUpStallStatus, stallState)
  
  if (!stallState){
    return AQ_RET_FW_NOT_STALLED; 
  }

  /* Set the new PROV Table terminal address */
  if (AQ_RET_OK != SetProvTableTerm(port, provTerminalOrg + provExtensionSize)) 
  {
    SetProvTableTerm(port, provTerminalOrg);
    return AQ_RET_ERROR; 
  }
  /* Write the new part of PROV Table */
  if (AQ_RET_OK != AQ_API_MemoryWrite(port, provTableExtensionImage, provExtensionSize, AQ_DRAM_BASE_ADDRESS + provTerminalOrg))
  {
    SetProvTableTerm(port, provTerminalOrg);
    return AQ_RET_ERROR; 
  }
  /* unstall the FW */
  AQ_API_Set_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedProvisioning, powerUpStall, 0)
  return resultCode;
}


AQ_Retcode AQ_API_EnableDaisyChain
(
    /*! The target PHY port.*/
  AQ_API_Port* port
)
{
  
  /* declare local variables */
  AQ_API_Variable(AQ_GlobalNvrProvisioning)
  AQ_API_Variable(AQ_GlobalReservedProvisioning)

  /* disable the hop-count override */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C471.6) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, enableDaisy_chainHop_countOverride, 0);

  /* enable the daisy-chain */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C452.0) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalNvrProvisioning, nvrDaisyChainDisable, 0);
  
  return AQ_RET_OK;
}

/*@}*/

/**********************************************************************************************************************
*                                               SERDES (40nm devices)
**********************************************************************************************************************/

/*! \addtogroup SERDES_40nm
  @{
*/


/*! This function performs bit-reversal on an 8-bit or smaller field with a specified size, and returns the
 *  bit-reversed field. 
 *  Compatibility: 40nm only */
AQ_Retcode AQ_API_BitReverse
(
  unsigned int field,                  /*!< INPUT  - the integer containing the left-justified field */
  unsigned int size                    /*!< INPUT  - the size of the field */
)
{
  field = (((field & 0xAA) >> 1) | ((field & 0x55) << 1));
  field = (((field & 0xCC) >> 2) | ((field & 0x33) << 2));
  field = (((field & 0xF0) >> 4) | ((field & 0x0F) << 4));
  field >>= 8-size;
  return field;
}


/*! This function sets the bits within a given byte.  If the start of field is less than the end-of-field,
 *  bit-reversal is performed. 
 *  Compatibility: 40nm only */
AQ_Retcode AQ_API_SetBitsWithinByte
(
  unsigned int* byte,                  /*!< INPUT  - a pointer to the target byte */
  unsigned int startOfField,           /*!< INPUT  - the starting bit of the field                               */
  unsigned int endOfField,             /*!< INPUT  - the ending bit of the field.  If endOfField is greater than
                                                     startOfField, the field is bit-reversed                     */
  unsigned int data                    /*!< INPUT  - the field data to write                                     */
)
{
  /* declare local variables */
  unsigned int shift, mask, i;

  /* perform a sanity check */
  if ((startOfField < 8) && (endOfField < 8))
  {
    /* set the mask and bit reverse the data if necessary */
    if (endOfField > startOfField)
    {
      /* perform bit reversal */
      data = AQ_API_BitReverse (data, endOfField - startOfField + 1);

      /* set the shift and mask */
      shift = startOfField;
      mask = 0xFF;
      for (i = startOfField; i <= endOfField; i++) mask ^= 1 << i;
    }
    else if (endOfField == startOfField)
    {
      /* set the shift and field size */
      shift = startOfField;
      mask = 0xFF ^ (1 << startOfField);
    }
    else
    {
      /* no bit reversal: set the shift and field size */
      shift = endOfField;
      mask = 0xFF;
      for (i = endOfField; i <= startOfField; i++) mask ^= 1 << i;
    }

    /* set the bits */
    *byte = (*byte & mask) | (data << shift);
  }

  return AQ_RET_OK;
}


/*! This enumeration is used to specify what the target is within the 40nm AHB SERDES interface.*/
typedef enum
{
    /*! This indicates the clock multiplier unit of the SERDES.*/
  AQ_API_SERDES_CMU,
    /*! This indicates Lane 0 of the SERDES.*/
  AQ_API_SERDES_Lane0,
    /*! This indicates Lane 1 of the SERDES.*/
  AQ_API_SERDES_Lane1,
    /*! This indicates Lane 2 of the SERDES.*/
  AQ_API_SERDES_Lane2,
    /*! This indicates Lane 3 of the SERDES.*/
  AQ_API_SERDES_Lane3,
    /*! This indicates the common block of the SERDES.*/
  AQ_API_SERDES_Common
} AQ_API_SERDES_Target;


/* This function writes an 8-bit value to the specified block and address within the SERDES. 
 * Compatibility: 40nm only */
void AQ_API_SERDES_Write
(
  AQ_API_Port* port,                 /*!< INPUT  - the PHY address                    */
  AQ_API_SERDES_Target target,         /*!< INPUT  - the target block within the SERDES */
  unsigned int address,                /*!< INPUT  - the 8-bit target address           */
  unsigned int data                    /*!< INPUT  - the 8-bit data to write            */
)
{
  
  /* declare local variables */
  unsigned int x, newX;
  switch(port->device){

    case AQ_DEVICE_APPIA:

      /* set the SERDES target block pointer using a read-modify-write */
          /* REGDOC: Read register (APPIA: 04.C180) */
      x = AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_SerdesConfiguration, 0);
      switch (target)
      {
        case AQ_API_SERDES_CMU:    newX = (x & 0xFFF8) | 0;    break;
        case AQ_API_SERDES_Lane0:  newX = (x & 0xFFF8) | 1;    break;
        case AQ_API_SERDES_Lane1:  newX = (x & 0xFFF8) | 2;    break;
        case AQ_API_SERDES_Lane2:  newX = (x & 0xFFF8) | 3;    break;
        case AQ_API_SERDES_Lane3:  newX = (x & 0xFFF8) | 4;    break;
        case AQ_API_SERDES_Common: default: newX = (x & 0xFFF8) | 5;    break;
      }
                     /* REGDOC: Write register (APPIA: 04.C180) */
      if (newX != x) AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesConfiguration, 0, newX);

      /* write the data */
      /* REGDOC: Write register (APPIA: 04.C200 + (address & 0xFF)) */
      AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesLut,(address & 0xFF),data);
      break;

    default:
    #ifdef AQ_VERBOSE
      AQ_API_Print("40nm Compatibility Only\n");
    #endif
      break;
  }
}


/* This function reads an 8-bit value from the specified block and address within the SERDES. 
 * Compatibility: 40nm only */
unsigned int AQ_API_SERDES_Read
(
  AQ_API_Port* port,                 /*!< INPUT  - the PHY address                    */
  AQ_API_SERDES_Target target,         /*!< INPUT  - the target block within the SERDES */
  unsigned int address                 /*!< INPUT  - the 8-bit target address           */
)
{
  
  /* declare local variables */
  unsigned int x, newX;

  switch(port->device){

    case AQ_DEVICE_APPIA:
      /* set the SERDES target block pointer using a read-modify-write */
          /* REGDOC: Read register (APPIA: 04.C180) */
      x = AQ_API_ReadRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesConfiguration, 0);
      switch (target)
      {
        case AQ_API_SERDES_CMU:    newX = (x & 0xFFF8) | 0;    break;
        case AQ_API_SERDES_Lane0:  newX = (x & 0xFFF8) | 1;    break;
        case AQ_API_SERDES_Lane1:  newX = (x & 0xFFF8) | 2;    break;
        case AQ_API_SERDES_Lane2:  newX = (x & 0xFFF8) | 3;    break;
        case AQ_API_SERDES_Lane3:  newX = (x & 0xFFF8) | 4;    break;
        case AQ_API_SERDES_Common: default: newX = (x & 0xFFF8) | 5;    break;
      }
                     /* REGDOC: Write register (APPIA: 04.C180) */
      if (newX != x) AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesConfiguration, 0, newX);

      /* read the data */
             /* REGDOC: Read register (APPIA: 04.C200 + (address & 0xFF) */
      return AQ_API_ReadRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesLut, (address & 0xFF));

    default:
    #ifdef AQ_VERBOSE
      AQ_API_Print("40nm Compatibility Only\n");
    #endif
      return AQ_RET_ERROR;
  }
}


/* This function writes a field within the register at the specified block and address within the SERDES. 
 * Compatibility: 40nm only */
void AQ_API_SERDES_WriteField
(
  AQ_API_Port* port,                 /*!< INPUT  - the PHY address                    */
  AQ_API_SERDES_Target target,         /*!< INPUT  - the target block within the SERDES                          */
  unsigned int address,                /*!< INPUT  - the 8-bit target address                                    */
  unsigned int startOfField,           /*!< INPUT  - the starting bit of the field                               */
  unsigned int endOfField,             /*!< INPUT  - the ending bit of the field.  If endOfField is greater than
                                                     startOfField, the field is bit-reversed                     */
  unsigned int data                    /*!< INPUT  - the field data to write                                     */
)
{
  
  /* declare local variables */
  unsigned int x, newX;
  switch(port->device){

    case AQ_DEVICE_APPIA:
      /* perform a sanity check */
      if ((startOfField < 8) && (endOfField < 8) & (address <= 0xFF))
      {
        /* set the SERDES target block pointer using a read-modify-write */
            /* REGDOC: Read register (APPIA: 04.C180) */
        x = AQ_API_ReadRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesConfiguration, 0);
        switch (target)
        {
          case AQ_API_SERDES_CMU:    newX = (x & 0xFFF8) | 0;    break;
          case AQ_API_SERDES_Lane0:  newX = (x & 0xFFF8) | 1;    break;
          case AQ_API_SERDES_Lane1:  newX = (x & 0xFFF8) | 2;    break;
          case AQ_API_SERDES_Lane2:  newX = (x & 0xFFF8) | 3;    break;
          case AQ_API_SERDES_Lane3:  newX = (x & 0xFFF8) | 4;    break;
          case AQ_API_SERDES_Common: default: newX = (x & 0xFFF8) | 5;    break;
        }
                       /* REGDOC: Write register (APPIA: 04.C180) */
        if (newX != x) AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesConfiguration, 0, newX);

        /* read the current value at this location */
            /* REGDOC: Read register APPIA: 04.C200 + (address & 0xFF) */
        x = AQ_API_ReadRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesLut, (address & 0xFF));

        /* set the bits */
        AQ_API_SetBitsWithinByte(&x, startOfField, endOfField, data);

        /* write the data */
        /* REGDOC: Write register (APPIA: 04.C200 + (address & 0xFF)) */
        AQ_API_WriteRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesLut, (address & 0xFF), x);
      }
      break;

    default:
     #ifdef AQ_VERBOSE
      AQ_API_Print("40nm Compatibility Only\n");
    #endif
      break;
  }
  return;
}


/* This function reads a 12-bit value from the specified test-bus block and address within the SERDES. 
 * Compatibility: 40nm only */
unsigned int AQ_API_SERDES_TestBusRead
(
  AQ_API_Port* port,                 /*!< INPUT  - the PHY address                    */
  AQ_API_SERDES_Target target,         /*!< INPUT  - the target block within the SERDES */
  unsigned int address                 /*!< INPUT  - the 5-bit target address           */
)
{
  
  /* declare local variables */
  unsigned int byte, lsByte, msByte;

  switch(port->device){

    case AQ_DEVICE_APPIA:

      switch (target)
      {
        case AQ_API_SERDES_CMU:    byte = address;               break;
        case AQ_API_SERDES_Lane0:  byte = address | (1 << 5);    break;
        case AQ_API_SERDES_Lane1:  byte = address | (2 << 5);    break;
        case AQ_API_SERDES_Lane2:  byte = address | (3 << 5);    break;
        case AQ_API_SERDES_Lane3:  byte = address | (4 << 5);    break;
        case AQ_API_SERDES_Common: default: byte = address | (5 << 5);    break;
      }

      /* write the SERDES test-bus indirection register in the CMU with the target test-bus address */
      AQ_API_SERDES_WriteField(port, AQ_API_SERDES_CMU, 0xB, 0, 7, byte);

      /* read the data */
               /* REGDOC: Read register (APPIA: 04.C200 + 0xEF) */
      lsByte = AQ_API_ReadRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesLut, 0xEF);
               /* REGDOC: Read register (APPIA: 04.C200 + 0xFF) */
      msByte = AQ_API_ReadRegister_DeviceRestricted(APPIA, port->PHY_ID, AQ_PhyXS_SerdesLut, 0xFF);

      return ((msByte & 0xF) << 8) | lsByte;

    default:
    #ifdef AQ_VERBOSE
      AQ_API_Print("40nm Compatibility Only\n");
    #endif
      return AQ_RET_ERROR;
  }
}

/*@}*/

/**********************************************************************************************************************
*                                               Loopbacks
**********************************************************************************************************************/

/*! \addtogroup loopbacks
  @{
*/


AQ_Retcode AQ_API_GetLoopbackControl
(
  AQ_API_Port* port,
  AQ_API_LoopbackControl* loopback
)
{
  AQ_API_Variable(AQ_PmaStandardControl_1)
  AQ_API_Variable(AQ_PhyXS_StandardControl_1)

  uint16_t pmaSystemLoopbackFlag;
  uint16_t phyxsNetworkLoopbackFlag;


  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.0) */
  AQ_API_Get(port->PHY_ID, AQ_PmaStandardControl_1, loopback, pmaSystemLoopbackFlag);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.E) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_StandardControl_1, loopback, phyxsNetworkLoopbackFlag);

  if (pmaSystemLoopbackFlag)
  {
    *loopback = NetworkInterface_SystemLoopback;
  }
  else if (phyxsNetworkLoopbackFlag)
  {
    *loopback = SystemInterface_NetworkLoopback;
  }
  else
  {
    *loopback = No_Loopback;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetLoopbackControl
(
  AQ_API_Port* port,
  AQ_API_LoopbackControl loopback
)
{
  AQ_API_DECLARE_UP_BUSY_VARS

  AQ_API_DeclareLocalStruct(AQ_PmaStandardControl_1, pmasc1)
  AQ_API_DeclareLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1)

  AQ_API_ConnectionStatus connStatus;


  /* Clear any loopback that may already be set */
  /* PMA */
  AQ_API_AssignWordOfLocalStruct(pmasc1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmasc1, loopback, 0x0);
  /* Make sure that we don't accidentally trigger a reset with our 
   * read-modify-write sequence. */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmasc1, reset, 0x0);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0, 
      AQ_API_WordOfLocalStruct(pmasc1, 0));
  AQ_API_CHECK_UP_NOT_BUSY

  /* PHY XS */
  AQ_API_AssignWordOfLocalStruct(phyxssc1, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.0000) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_StandardControl_1, 0));
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1, loopback, 0x0);
  /* Make sure that we don't accidentally trigger a reset with our 
   * read-modify-write sequence. */
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1, reset, 0x0);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.0000) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_StandardControl_1, 0, 
      AQ_API_WordOfLocalStruct(phyxssc1, 0));
  AQ_API_CHECK_UP_NOT_BUSY

  AQ_API_GetConnectionStatus(port, &connStatus);

  switch (loopback)
  {
    case No_Loopback:
      /* Nothing to do */
      break;

    case SystemInterface_NetworkLoopback:
      switch (connStatus.state)
      {
        case AQ_API_ConnS_10G_Connected:
          /* Set 10G system loopback */
          AQ_API_AssignWordOfLocalStruct(phyxssc1, 0, 
              /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.0000) */
              AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_StandardControl_1, 0));
          /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.E) */
          AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1, loopback, 0x1);
          /* Make sure that we don't accidentally trigger a reset with our 
           * read-modify-write sequence. */
          /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.F) */
          AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1, reset, 0x0);
          /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.0000) */
          AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_StandardControl_1, 0, 
              AQ_API_WordOfLocalStruct(phyxssc1, 0));
          AQ_API_CHECK_UP_NOT_BUSY
          break;

        case AQ_API_ConnS_1G_Connected:
        case AQ_API_ConnS_100M_Connected:
        case AQ_API_ConnS_10M_Connected:
          /* Set 1G/100M system loopback */
          AQ_API_AssignWordOfLocalStruct(phyxssc1, 0, 
              /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.0000) */
              AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_StandardControl_1, 0));
          /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.E) */
          AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1, loopback, 0x1);
          /* Make sure that we don't accidentally trigger a reset with our 
           * read-modify-write sequence. */
          /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.0000.F) */
          AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_StandardControl_1, phyxssc1, reset, 0x0);
          /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.0000) */
          AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_StandardControl_1, 0,
              AQ_API_WordOfLocalStruct(phyxssc1, 0));
          AQ_API_CHECK_UP_NOT_BUSY
          break;

        default:
          /* Not a suitable state for entering loopback, so do nothing. */
          return AQ_RET_LOOPBACK_BAD_ENTRY_STATE;
      }
      break;

    case NetworkInterface_SystemLoopback:
      switch (connStatus.state)
      {
        case AQ_API_ConnS_10G_Connected:
        case AQ_API_ConnS_1G_Connected:
        case AQ_API_ConnS_100M_Connected:
        case AQ_API_ConnS_10M_Connected:
          /* Set PMA system loopback */
          AQ_API_AssignWordOfLocalStruct(pmasc1, 0, 
              /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
              AQ_API_ReadRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0));
          /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.0) */
          AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmasc1, loopback, 0x1);
          /* Make sure that we don't accidentally trigger a reset with our 
           * read-modify-write sequence. */
          /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0000.F) */
          AQ_API_AssignBitfieldOfLocalStruct(AQ_PmaStandardControl_1, pmasc1, reset, 0x0);
          /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 01.0000) */
          AQ_API_WriteRegister(port->PHY_ID, AQ_PmaStandardControl_1, 0, 
              AQ_API_WordOfLocalStruct(pmasc1, 0));
          AQ_API_CHECK_UP_NOT_BUSY
          break;

        default:
          /* Not a suitable state for entering loopback, so do nothing. */
          break;
          return AQ_RET_LOOPBACK_BAD_ENTRY_STATE;
      }
      break;
  }

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}


AQ_Retcode AQ_API_GetFWManagedLoopbackControl
(
  AQ_API_Port* port,
  AQ_API_FWManagedLoopbackControl* loopback,
  AQ_API_FWManagedLoopbackRate*   rate
)
{
  AQ_API_Variable(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning)

  uint16_t loopbackControl;
  uint16_t rateVal;

  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.C444.F:B) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning,
      loopbackControl, loopbackControl);
  /* REGDOC: Read bitfield (APPIA: 04.C444.1:0) (HHD/EUR/CAL/RHEA: 04.C444.2:0) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning,
      rate, rateVal);

  switch (loopbackControl)
  {
    case 0x0: *loopback = AQ_FWMLC_No_LB; break;
    case 0x1: *loopback = AQ_FWMLC_SysIntf_SysLB; break;
    case 0x2: *loopback = AQ_FWMLC_SysIntf_SysLB_Passthrough; break;
    case 0x3: *loopback = AQ_FWMLC_SysIntf_NetLB; break;
    case 0x4: *loopback = AQ_FWMLC_SysIntf_NetLB_Passthrough; break;
    case 0x5: *loopback = AQ_FWMLC_SysIntf_NetLB_PassthroughMerge; break;
    case 0x9: *loopback = AQ_FWMLC_NetIntf_SysLB; break;
    case 0xA: *loopback = AQ_FWMLC_NetIntf_SysLB_Passthrough; break;
    case 0xB: *loopback = AQ_FWMLC_NetIntf_NetLB; break;
    case 0xC: *loopback = AQ_FWMLC_NetIntf_NetLB_Passthrough; break;
    case 0x10: *loopback = AQ_FWMLC_CrossConnect_SysLB; break;
    case 0x11: *loopback = AQ_FWMLC_CrossConnect_NetLB; break;
    case 0x14: *loopback = AQ_FWMLC_NetIntf_SysLB_Plug; break;
    default: *loopback = AQ_FWMLC_Other;
  }

  switch (rateVal)
  {
    case 0:
      switch (port->device)
      {
        case AQ_DEVICE_APPIA:
        case AQ_DEVICE_HHD:
        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
          *rate = AQ_FWMLRate_Auto;
          break;

        case AQ_DEVICE_RHEA:
          *rate = AQ_FWMLRate_10M;
          break;
      }
    case 3: *rate = AQ_FWMLRate_10G; break;
    case 5: *rate = AQ_FWMLRate_5G; break;
    case 4: *rate = AQ_FWMLRate_2_5G; break;
    case 2: *rate = AQ_FWMLRate_1G; break;
    case 1: *rate = AQ_FWMLRate_100M; break;
    default: *rate = AQ_FWMLRate_Other;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetFWManagedLoopbackControl
(
  AQ_API_Port* port,
  AQ_API_FWManagedLoopbackControl loopback,
  AQ_API_FWManagedLoopbackRate   rate
)
{
  AQ_API_DECLARE_UP_BUSY_VARS

  uint16_t loopbackVal = 0;
  uint16_t rateVal = 0;

  AQ_API_DeclareLocalStruct(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, regGroup)

  /* Read the register that contains the loopback and rate bitfields. */
  AQ_API_AssignWordOfLocalStruct(regGroup, 4, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.C440 + 4) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 4));

  switch (loopback)
  {
    case AQ_FWMLC_No_LB: loopbackVal = 0x0; break;
    case AQ_FWMLC_Other: loopbackVal = 0x0; break;
    case AQ_FWMLC_SysIntf_SysLB: loopbackVal = 0x1; break;
    case AQ_FWMLC_SysIntf_SysLB_Passthrough: loopbackVal = 0x2; break;
    case AQ_FWMLC_SysIntf_NetLB: loopbackVal = 0x3; break;
    case AQ_FWMLC_SysIntf_NetLB_Passthrough: loopbackVal = 0x4; break;
    case AQ_FWMLC_SysIntf_NetLB_PassthroughMerge: loopbackVal = 0x5; break;
    case AQ_FWMLC_NetIntf_SysLB: loopbackVal = 0x9; break;
    case AQ_FWMLC_NetIntf_SysLB_Passthrough: loopbackVal = 0xA; break;
    case AQ_FWMLC_NetIntf_NetLB: loopbackVal = 0xB; break;
    case AQ_FWMLC_NetIntf_NetLB_Passthrough: loopbackVal = 0xC; break;
    case AQ_FWMLC_CrossConnect_SysLB: loopbackVal = 0x10; break;
    case AQ_FWMLC_CrossConnect_NetLB: loopbackVal = 0x11; break;
    case AQ_FWMLC_NetIntf_SysLB_Plug: loopbackVal = 0x14; break;
  }
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 04.C444.F:B) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
      regGroup, loopbackControl, loopbackVal);

  /* Set the rate. */
  switch (rate)
  {
    case AQ_FWMLRate_Auto: rateVal = 0; break;
    case AQ_FWMLRate_10G: rateVal = 3; break;
    case AQ_FWMLRate_5G: rateVal = 5; break;
    case AQ_FWMLRate_2_5G: rateVal = 4; break;
    case AQ_FWMLRate_1G: rateVal = 2; break;
    case AQ_FWMLRate_100M: rateVal = 1; break;
    case AQ_FWMLRate_10M: 
      switch (port->device)
      {
        case AQ_DEVICE_APPIA:
        case AQ_DEVICE_HHD:
        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
          rateVal = 0;
          #ifdef AQ_VERBOSE
            AQ_API_Print("10Mb is not a valid rate for this PHY\n");
          #endif
          break;

        case AQ_DEVICE_RHEA:
          rateVal = 0; 
          break;
      }

    case AQ_FWMLRate_Other: rateVal = 0; break;
  }
  /* REGDOC: Assign to local representation of bitfield (APPIA: 04.C444.1:0) (HHD/EUR/CAL/RHEA: 04.C444.2:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
      regGroup, rate, rateVal);
  
  /* Write the register that contains the loopback and rate bitfields. */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.C440 + 4) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 4, 
      AQ_API_WordOfLocalStruct(regGroup, 4));

  AQ_API_CHECK_UP_NOT_BUSY

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}

/*@}*/

/**********************************************************************************************************************
*                                               Packet Generation
**********************************************************************************************************************/

/*! \addtogroup packetGeneration
  @{
*/

AQ_Retcode   AQ_API_GetPktGenControl 
(    
 AQ_API_Port*  port, 
 AQ_API_PktGenControl*   pktGen,
 AQ_API_PktGenRate*   pktGenRate
)    
{
  uint16_t enableToMDI;
  uint16_t enableToLookaside;
  uint16_t enableToSystem;
  uint16_t rate;
  AQ_API_10G_SystemOperatingMode _10G_SystemOperatingMode;
  AQ_API_10G_NetworkOperatingMode _10G_NetworkOperatingMode = AQ_API_10G_NOM_Other;
  AQ_API_1G_NetworkOperatingMode _1G_NetworkOperatingMode = AQ_API_1G_NOM_Other;

  AQ_API_Variable(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning)


  /* Get the network/system operating modes to determine lookaside vs. MDI */
  AQ_API_GetOperatingModes(port, &_10G_SystemOperatingMode, 
      &_10G_NetworkOperatingMode, &_1G_NetworkOperatingMode);

  /* Read the packet generation flags */
  /* REGDOC: Read bitfield (APPIA: 04.C444.4) (HHD/EUR/CAL/RHEA: 04.C444.5) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning,
    mdiPacketGeneration, enableToMDI);
  /* REGDOC: Read bitfield (APPIA: 04.C444.3) (HHD/EUR/CAL/RHEA: 04.C444.4) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning,
    look_asidePortPacketGeneration, enableToLookaside);
  /* REGDOC: Read bitfield (APPIA: 04.C444.2) (HHD/EUR/CAL/RHEA: 04.C444.3) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning,
    systemI_fPacketGeneration, enableToSystem);
  /* REGDOC: Read bitfield (APPIA: 04.C444.1:0) (HHD/EUR/CAL/RHEA: 04.C444.2:0) */
  AQ_API_Get(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning,
    rate, rate);

  /* Only one of the three packet generation bits should be 1. */
  if ((enableToMDI && enableToLookaside) || 
      (enableToMDI && enableToSystem) || 
      (enableToSystem && enableToLookaside))
  {
    *pktGen = AQ_PktGen_Other;
  }
  else
  {
    if (enableToSystem)
    {
      *pktGen = AQ_PktGen_Enable_ToSysIntf;
    }
    else
    {
      if (_10G_NetworkOperatingMode == AQ_API_10G_NOM_XFI ||
          _1G_NetworkOperatingMode == AQ_API_1G_NOM_1000BASE_X)
      {
        /* Lookaside mode */
        if (enableToLookaside) *pktGen = AQ_PktGen_Enable_ToNetIntf;
        else *pktGen = AQ_PktGen_Disable;
      }
      else
      {
        /* MDI mode */
        if (enableToMDI) *pktGen = AQ_PktGen_Enable_ToNetIntf;
        else *pktGen = AQ_PktGen_Disable;
      }
    }
  }

  switch (rate)
  {
    case 0: *pktGenRate = AQ_PktGenRate_Auto; break;
    case 3: *pktGenRate = AQ_PktGenRate_10G; break;
    case 5: *pktGenRate = AQ_PktGenRate_5G; break;
    case 4: *pktGenRate = AQ_PktGenRate_2_5G; break;
    case 2: *pktGenRate = AQ_PktGenRate_1G; break;
    case 1: *pktGenRate = AQ_PktGenRate_100M; break;
    default: *pktGenRate = AQ_PktGenRate_Other;
  }

  return AQ_RET_OK;
}


AQ_Retcode   AQ_API_SetPktGenControl 
(    
 AQ_API_Port*  port, 
 AQ_API_PktGenControl   pktGen,
 AQ_API_PktGenRate   pktGenRate
)    
{
  AQ_API_DECLARE_UP_BUSY_VARS

  uint16_t sysIntfPktGenFlag = 0;
  uint16_t lookasidePktGenFlag = 0;
  uint16_t netIntfPktGenFlag = 0;
  uint16_t rateVal = 0;
  AQ_API_10G_SystemOperatingMode _10G_SystemOperatingMode;
  AQ_API_10G_NetworkOperatingMode _10G_NetworkOperatingMode;
  AQ_API_1G_NetworkOperatingMode _1G_NetworkOperatingMode;

  AQ_API_DeclareLocalStruct(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, regGroup)


  /* Get the network/system operating modes to determine lookaside vs. MDI */
  AQ_API_GetOperatingModes(port, &_10G_SystemOperatingMode, 
      &_10G_NetworkOperatingMode, &_1G_NetworkOperatingMode);

  /* Read the register that contains the packet generation flags. */
  AQ_API_AssignWordOfLocalStruct(regGroup, 4, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 04.C440 + 4) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 4));

  /* Set the packet generation flags as per the current operating mode and specified
   * packet generation mode. */
  switch (pktGen)
  {
    case AQ_PktGen_Enable_ToSysIntf:
      sysIntfPktGenFlag = 1;
      lookasidePktGenFlag = 0;
      netIntfPktGenFlag = 0;
      break;

    case AQ_PktGen_Enable_ToNetIntf:
      if (_10G_NetworkOperatingMode == AQ_API_10G_NOM_XFI ||
          _1G_NetworkOperatingMode == AQ_API_1G_NOM_1000BASE_X)
      {
        /* Lookaside mode */
        sysIntfPktGenFlag = 0;
        lookasidePktGenFlag = 1;
        netIntfPktGenFlag = 0;
      }
      else
      {
        /* MDI mode */
        sysIntfPktGenFlag = 0;
        lookasidePktGenFlag = 0;
        netIntfPktGenFlag = 1;
      }
      break;

    case AQ_PktGen_Disable:
      sysIntfPktGenFlag = 0;
      lookasidePktGenFlag = 0;
      netIntfPktGenFlag = 0;
      break;

    case AQ_PktGen_Other:
      sysIntfPktGenFlag = 0;
      lookasidePktGenFlag = 0;
      netIntfPktGenFlag = 0;
      break;
  }
  /* REGDOC: Assign to local representation of bitfield (APPIA: 04.C444.2) (HHD/EUR/CAL/RHEA: 04.C444.3) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
      regGroup, systemI_fPacketGeneration, sysIntfPktGenFlag);
  /* REGDOC: Assign to local representation of bitfield (APPIA: 04.C444.3) (HHD/EUR/CAL/RHEA: 04.C444.4) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
      regGroup, look_asidePortPacketGeneration, lookasidePktGenFlag);
  /* REGDOC: Assign to local representation of bitfield (APPIA: 04.C444.4) (HHD/EUR/CAL/RHEA: 04.C444.5) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
      regGroup, mdiPacketGeneration, netIntfPktGenFlag);

  /* Set the packet generation rate. */
  switch (pktGenRate)
  {
    case AQ_PktGenRate_Auto: rateVal = 0; break;
    case AQ_PktGenRate_10G: rateVal = 3; break;
    case AQ_PktGenRate_5G: rateVal = 5; break;
    case AQ_PktGenRate_2_5G: rateVal = 4; break;
    case AQ_PktGenRate_1G: rateVal = 2; break;
    case AQ_PktGenRate_100M: rateVal = 1; break;
    case AQ_PktGenRate_Other: rateVal = 0; break;
  }
  /* REGDOC: Assign to local representation of bitfield (APPIA: 04.C444.1:0) (HHD/EUR/CAL/RHEA: 04.C444.2:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 
      regGroup, rate, rateVal);

  /* Write the register that contains the packet generation flags. */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 04.C440 + 4) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning, 4, 
      AQ_API_WordOfLocalStruct(regGroup, 4));

  AQ_API_CHECK_UP_NOT_BUSY

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}

/*@}*/

/**********************************************************************************************************************
*                                               Test Patterns
**********************************************************************************************************************/

/*! \addtogroup testPatterns
  @{
*/

/*! \addtogroup _10GTestPatterns
  @{
*/

AQ_Retcode AQ_API_Get10G_LineTestPattern
(
  AQ_API_Port* port,
  AQ_API_10G_LineTestPattern* testPattern
)
{
  AQ_API_DeclareLocalStruct(AQ_Pma10GBaseT_TestModes, lineTestModes)


  /* check if we are in a test mode in the PMA*/
  AQ_API_AssignWordOfLocalStruct(lineTestModes, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 01.0084) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_Pma10GBaseT_TestModes, 0));

          /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
  switch (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_TestModes, 
        lineTestModes, testModeControl))
  {
    case 0x0: *testPattern = AQ_API_10G_LTP_None; break;
    case 0x1: *testPattern = AQ_API_10G_LTP_10G_TestMode1; break;
    case 0x2: *testPattern = AQ_API_10G_LTP_10G_TestMode2; break;
    case 0x3: *testPattern = AQ_API_10G_LTP_10G_TestMode3; break;

    case 0x4:
              /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.C:A) */
      switch (AQ_API_BitfieldOfLocalStruct(AQ_Pma10GBaseT_TestModes, 
            lineTestModes, transmitterTestFrequencies))
      {
        case 0x1: *testPattern = AQ_API_10G_LTP_10G_TestMode4_1; break;
        case 0x2: *testPattern = AQ_API_10G_LTP_10G_TestMode4_2; break;
        case 0x4: *testPattern = AQ_API_10G_LTP_10G_TestMode4_4; break;
        case 0x5: *testPattern = AQ_API_10G_LTP_10G_TestMode4_5; break;
        case 0x6: *testPattern = AQ_API_10G_LTP_10G_TestMode4_6; break;
        default:  *testPattern = AQ_API_10G_LTP_None; break;
      }
      break;

    case 0x5: *testPattern = AQ_API_10G_LTP_10G_TestMode5; break;
    case 0x6: *testPattern = AQ_API_10G_LTP_10G_TestMode6; break;
    case 0x7: *testPattern = AQ_API_10G_LTP_10G_TestMode7; break;
    default:  
      *testPattern = AQ_API_10G_LTP_None; 
      break;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_Set10G_LineTestPattern
(
  AQ_API_Port* port,
  AQ_API_10G_LineTestPattern testPattern
)
{
  AQ_API_DECLARE_UP_BUSY_VARS

  AQ_API_Variable (AQ_Pma10GBaseT_TestModes)
  AQ_API_Variable (AQ_GbeReservedProvisioning)
  AQ_API_Variable (AQ_AutonegotiationReservedVendorStatus)

  unsigned int connState;


  /* clear any test modes that may be set */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
  AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0);
  AQ_API_CHECK_UP_NOT_BUSY
  
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
  AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x0);
  AQ_API_CHECK_UP_NOT_BUSY
 
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
  AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, 0x0);
  AQ_API_CHECK_UP_NOT_BUSY

  /* Poll PHY connection status, don't proceed until PHY exits previous test mode. */
  do
  {
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
    AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReservedVendorStatus, connectionState, connState);
  } while (connState == 0x06 || connState == 0x0 || connState == 0x1F);

  /* set up any line tests */
  switch (testPattern)
  {
    case AQ_API_10G_LTP_None: 
      break;
    
    case AQ_API_10G_LTP_10G_TestMode1: 
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x1); 
      AQ_API_CHECK_UP_NOT_BUSY
      break;
    
    case AQ_API_10G_LTP_10G_TestMode2: 
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x2); 
      AQ_API_CHECK_UP_NOT_BUSY
      break;
    
    case AQ_API_10G_LTP_10G_TestMode3: 
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x3); 
      AQ_API_CHECK_UP_NOT_BUSY_LONG
      break;

    case AQ_API_10G_LTP_10G_TestMode4_1:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x4);
      AQ_API_CHECK_UP_NOT_BUSY
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.C:A) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, transmitterTestFrequencies, 0x1);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_10G_LTP_10G_TestMode4_2:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x4);
      AQ_API_CHECK_UP_NOT_BUSY
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.C:A) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, transmitterTestFrequencies, 0x2);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_10G_LTP_10G_TestMode4_4:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x4);
      AQ_API_CHECK_UP_NOT_BUSY
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.C:A) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, transmitterTestFrequencies, 0x4);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_10G_LTP_10G_TestMode4_5:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x4);
      AQ_API_CHECK_UP_NOT_BUSY
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.C:A) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, transmitterTestFrequencies, 0x5);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_10G_LTP_10G_TestMode4_6:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x4);
      AQ_API_CHECK_UP_NOT_BUSY
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.C:A) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, transmitterTestFrequencies, 0x6);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_10G_LTP_10G_TestMode5: 
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x5); 
      AQ_API_CHECK_UP_NOT_BUSY
      break;
    
    case AQ_API_10G_LTP_10G_TestMode6: 
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x6); 
      AQ_API_CHECK_UP_NOT_BUSY
      break;
    
    case AQ_API_10G_LTP_10G_TestMode7:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0x7);
      AQ_API_CHECK_UP_NOT_BUSY
      break;
  }

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}


AQ_Retcode   AQ_API_GetAQRate_LineTestPattern 
(    
 AQ_API_Port*  port, 
 AQ_API_10G_LineTestPattern*   testPattern,
 AQ_API_AQRate_LineTestDataRate*   dataRate
)
{
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning)

  uint16_t rate;
  AQ_Retcode retval;


  /* Read the 10GBase-T test pattern. */
  retval = AQ_API_Get10G_LineTestPattern(port, testPattern);

  /* Read the data rate used with the 10GBase-T test pattern. */
  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      *dataRate = AQ_API_AQRate_LTDR_10G;
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 01.C412.F:E) */
      AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PmaTransmitReservedVendorProvisioning, testModeRate, rate);
      switch (rate)
      {
        case 2: *dataRate = AQ_API_AQRate_LTDR_2_5G; break;
        case 1: *dataRate = AQ_API_AQRate_LTDR_5G; break;
        case 0: *dataRate = AQ_API_AQRate_LTDR_10G; break;
        default: *dataRate = AQ_API_AQRate_LTDR_Other;
      }
      break;
  }

  return retval;
}


AQ_Retcode   AQ_API_SetAQRate_LineTestPattern 
(    
 AQ_API_Port*  port, 
 AQ_API_10G_LineTestPattern   testPattern,
 AQ_API_AQRate_LineTestDataRate   dataRate
)
{
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning)

  uint16_t rate = 0;


  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      break;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* Write the data rate used with the 10GBase-T test pattern. */
      switch (dataRate)
      {
        case AQ_API_AQRate_LTDR_2_5G: rate = 2; break;
        case AQ_API_AQRate_LTDR_5G: rate = 1; break;
        case AQ_API_AQRate_LTDR_10G: rate = 0; break;
        case AQ_API_AQRate_LTDR_Other: rate = 0; break;
      }
      /* REGDOC: Read-Modify-Write bitfield (HHD/EUR/CAL/RHEA: 01.C412.F:E) */
      AQ_API_Set_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PmaTransmitReservedVendorProvisioning, testModeRate, rate);
      break;
  }

  /* Write the 10GBase-T test pattern. */
  return AQ_API_Set10G_LineTestPattern(port, testPattern);
}

/*@}*/

/*! \addtogroup _1GTestPatterns
  @{
*/

AQ_Retcode AQ_API_Get1G_LineTestPattern
(
  AQ_API_Port* port,
  AQ_API_1G_LineTestPattern* testPattern
)
{
  AQ_API_Variable (AQ_GbeReservedProvisioning)

  uint16_t i;


  /* get the mode */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
  AQ_API_Get(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, i);
  switch (i)
  {
    case 0x0:
    default:
      *testPattern = AQ_API_1G_LTP_None;
      break;

    case 0x1:
      *testPattern = AQ_API_1G_LTP_TestMode1;
      break;

    case 0x2:
      *testPattern = AQ_API_1G_LTP_TestMode2;
      break;

    case 0x3:
      *testPattern = AQ_API_1G_LTP_TestMode3;
      break;

    case 0x4:
      *testPattern = AQ_API_1G_LTP_TestMode4;
      break;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_Set1G_LineTestPattern
(
  AQ_API_Port* port,
  AQ_API_1G_LineTestPattern testPattern
)
{
  AQ_API_DECLARE_UP_BUSY_VARS

  AQ_API_Variable (AQ_Pma10GBaseT_TestModes)
  AQ_API_Variable (AQ_GbeReservedProvisioning)
  AQ_API_Variable (AQ_AutonegotiationReservedVendorStatus)

  unsigned int connState;


  /* clear any test modes that may be set */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
  AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0);
  AQ_API_CHECK_UP_NOT_BUSY
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
  AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x0);
  AQ_API_CHECK_UP_NOT_BUSY
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
  AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, 0x0);
  AQ_API_CHECK_UP_NOT_BUSY

  /* Poll PHY connection status, don't proceed until PHY exits previous test mode. */
  do
  {
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
    AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReservedVendorStatus, connectionState, connState);
  } while (connState == 0x06); /* connection state is Test Mode */

  /* set the mode */
  switch (testPattern)
  {
    case AQ_API_1G_LTP_None:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x0);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_1G_LTP_TestMode1:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x1);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_1G_LTP_TestMode2:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x2);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_1G_LTP_TestMode3:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x3);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_1G_LTP_TestMode4:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x4);
      AQ_API_CHECK_UP_NOT_BUSY
      break;
  }

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}

/*@}*/

/*! \addtogroup _100MTestPatterns
  @{
*/

AQ_Retcode AQ_API_Get100M_LineTestPattern
(
  AQ_API_Port* port,
  AQ_API_100M_LineTestPattern* testPattern
)
{
  AQ_API_Variable (AQ_GbeReservedProvisioning)

  uint16_t i;


  /* get the mode */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
  AQ_API_Get(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, i);
  switch (i)
  {
    case 0x0:
    default:
      *testPattern = AQ_API_100M_LTP_None;
      break;

    case 0x1:
      *testPattern = AQ_API_100M_LTP_IEEE_TestMode;
      break;

    case 0x2:
      *testPattern = AQ_API_100M_LTP_ANSI_Jitter_TestMode;
      break;

    case 0x3:
      *testPattern = AQ_API_100M_LTP_ANSI_Droop_TestMode;
      break;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_Set100M_LineTestPattern
(
  AQ_API_Port* port,
  AQ_API_100M_LineTestPattern testPattern
)
{
  AQ_API_DECLARE_UP_BUSY_VARS

  AQ_API_Variable (AQ_Pma10GBaseT_TestModes)
  AQ_API_Variable (AQ_GbeReservedProvisioning)
  AQ_API_Variable (AQ_AutonegotiationReservedVendorStatus)

  unsigned int connState;


  /* clear any test modes that may be set */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 01.0084.F:D) */
  AQ_API_Set(port->PHY_ID, AQ_Pma10GBaseT_TestModes, testModeControl, 0);
  AQ_API_CHECK_UP_NOT_BUSY
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.F:D) */
  AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, testMode, 0x0);
  AQ_API_CHECK_UP_NOT_BUSY
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
  AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, 0x0);
  AQ_API_CHECK_UP_NOT_BUSY

  /* Poll PHY connection status, don't proceed until PHY exits previous test mode. */
  do
  {
    /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 07.C810.D:9) */
    AQ_API_Get(port->PHY_ID, AQ_AutonegotiationReservedVendorStatus, connectionState, connState);
  } while (connState == 0x06); /* connection state is Test Mode */

  /* set the mode */
  switch (testPattern)
  {
    case AQ_API_100M_LTP_None:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, 0x0);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_100M_LTP_IEEE_TestMode:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, 0x1);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_100M_LTP_ANSI_Jitter_TestMode:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, 0x2);
      AQ_API_CHECK_UP_NOT_BUSY
      break;

    case AQ_API_100M_LTP_ANSI_Droop_TestMode:
      /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1D.C501.1:0) */
      AQ_API_Set(port->PHY_ID, AQ_GbeReservedProvisioning, _100base_txTestMode, 0x3);
      AQ_API_CHECK_UP_NOT_BUSY
      break;
  }

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}

/*@}*/

/*@}*/

/**********************************************************************************************************************
*                                               Memory Access
**********************************************************************************************************************/

/*! \addtogroup memoryAccess
  @{
*/

/* This function guarantees no reads when the data is word-aligned. The behavior should be kept this way because 
   AQ_API_GangloadProvTable function relies on it. */
AQ_Retcode AQ_API_MemoryWrite
(
  AQ_API_Port* port,
  uint8_t* data,
  uint32_t numBytesToWrite,
  uint32_t startAddress
)
{
  AQ_API_DeclareLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface)
 
  uint32_t i;
  uint32_t bytePointer;
  uint32_t remainingBytes;
  uint32_t dWordSize;
  uint16_t msw; 
  uint16_t lsw;
  uint16_t mswAddress; 
  uint16_t lswAddress;
  uint16_t mailboxWrite;
  uint16_t mailboxRead;


  /* write the data */
  /*------------------------------------- Initialize the mailbox write command -------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 0, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxWriteMode, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxExecuteOperation, 1);
  mailboxWrite = AQ_API_WordOfLocalStruct(globalMailboxInterface, 0);
  
  /*------------------------------------- Initialize the mailbox read command -------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 0, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxWriteMode, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxExecuteOperation, 1);
  mailboxRead = AQ_API_WordOfLocalStruct(globalMailboxInterface, 0);

  
  /* set the starting address */
  mswAddress = (uint16_t) (startAddress >> 16);
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 3, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0203.1:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxAddressLSW , (startAddress & 0xFFFF) >> 2);
  lswAddress = AQ_API_WordOfLocalStruct(globalMailboxInterface, 3);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 2, mswAddress);              /* MSW */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 3, lswAddress);              /* LSW */
  
  /* check for non-dWord aligned write */
  bytePointer = 0;
  if (startAddress & 0x3)
  {
    /* we have to do a read-modify-write */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxRead);
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
    msw = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 4);
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
    lsw = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 5);
    
    /* rewrite the address as it advanced during the read */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 2, mswAddress);              /* MSW */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 3, lswAddress);              /* LSW */
    
    /* overwrite the appropriate bytes */
    for (i = startAddress & 0x3; (i < 4) && (bytePointer < numBytesToWrite); i++)
    {
      switch (i)
      {
        case 0x1:
          lsw = (data[bytePointer++] << 8) | (lsw & 0x00FF);
          break;
        
        case 0x2:
          msw = (msw & 0xFF00) | data[bytePointer++];
          break;
          
        case 0x3:
          msw = (data[bytePointer++] << 8) | (msw & 0x00FF);
          break;          
      }
    }
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
  }
    
  /* we are now dWord aligned - set block size so that there are from 0-3 bytes remaining */
  dWordSize = (numBytesToWrite - bytePointer) >> 2;
  remainingBytes = (numBytesToWrite - bytePointer) & 0x3;

  for (i = 0; i < dWordSize; i++)
  {
    /* write 4 bytes of data */
    lsw = (data[bytePointer+1] << 8) | data[bytePointer];
    bytePointer += 2;
    msw = (data[bytePointer+1] << 8) | data[bytePointer];
    bytePointer += 2;

    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
  }

  if (remainingBytes)
  {
    /* we have to do a read-modify-write - store the starting address */
                 /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
    mswAddress = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 2);
                 /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
    lswAddress = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 3);
    
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxRead);
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
    msw = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 4);
          /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
    lsw = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 5);
    
    /* rewrite the address as it advanced during the read */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 2, mswAddress);              /* MSW */
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 3, lswAddress);              /* LSW */
    
    switch (remainingBytes)
    {
      case 0x1:
        lsw = (lsw & 0xFF00) | data[bytePointer];
        break;
        
      case 0x2:
        lsw = (data[bytePointer+1] << 8) | data[bytePointer];
        break;
        
      case 0x3:
        lsw = (data[bytePointer+1] << 8) | data[bytePointer];
        msw = (msw & 0xFF00) | data[bytePointer+2];
        break;
    }
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 4, msw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 5, lsw);
    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxWrite);
  }

  return AQ_RET_OK; 
}


AQ_Retcode AQ_API_MemoryRead
(
  AQ_API_Port* port,
  uint8_t* data,
  uint32_t numBytesToRead,
  uint32_t startAddress
)
{
  AQ_API_DeclareLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface)

  uint32_t bytePointer;
  uint32_t currentAddress;
  uint16_t msw; 
  uint16_t lsw;
  uint16_t mailboxRead;


  /* read the data */
  /*------------------------------------- Initialize the mailbox read command -------------------------------------*/
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 0, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.E) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxWriteMode, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0200.F) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxExecuteOperation, 1);
  mailboxRead = AQ_API_WordOfLocalStruct(globalMailboxInterface, 0);

  /* set the starting address */
  msw = (uint16_t) (startAddress >> 16);
  AQ_API_AssignWordOfLocalStruct(globalMailboxInterface, 3, 0x0000);
  /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.0203.1:0) */
  AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalMailboxInterface, globalMailboxInterface, upMailboxAddressLSW , (startAddress & 0xFFFF) >> 2);
  lsw = AQ_API_WordOfLocalStruct(globalMailboxInterface, 3);
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 2) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 2, msw);              /* MSW */
  /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 3) */
  AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 3, lsw);              /* LSW */
 
  /* check for non-dWord aligned read */
  bytePointer = 0;
  for (bytePointer = 0; bytePointer < numBytesToRead; bytePointer++)
  {
    currentAddress = bytePointer + startAddress;
    if ((currentAddress % 4 == 0) || (bytePointer == 0))  /* the first and every fourth thereafter */
    { 
      /* get a new dWord */
      /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200) */
      AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 0, mailboxRead);
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 4) */
      msw = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 4);
            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.0200 + 5) */
      lsw = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalMailboxInterface, 5);
    }
    
    switch (currentAddress & 3)
    {
      case 0x0: data[bytePointer] = lsw & 0xFF;        break;
      case 0x1: data[bytePointer] = (lsw >> 8) & 0xFF; break;
      case 0x2: data[bytePointer] = msw & 0xFF;        break;
      case 0x3: data[bytePointer] = (msw >> 8) & 0xFF; break;
    }
  }

  return AQ_RET_OK;
}

/*@}*/

/**********************************************************************************************************************
*                                               DEBUG ASSISTANCE 
**********************************************************************************************************************/

/*! \addtogroup debugAssistance
  @{
*/

void AQ_API_WriteHex1Byte(char *destStr, uint8_t byte)
{
  uint8_t loNibble, hiNibble;

  loNibble = byte & 0xf;
  hiNibble = (byte >> 4) & 0xf;

  if (hiNibble < 10)
  {
    *destStr = ((uint8_t)'0') + hiNibble;
  }
  else
  {
    *destStr = ((uint8_t)'A') + (hiNibble - 10);
  }

  if (loNibble < 10)
  {
    *(destStr + 1) = ((uint8_t)'0') + loNibble;
  }
  else
  {
    *(destStr + 1) = ((uint8_t)'A') + (loNibble - 10);
  }

  return; 
}


void AQ_API_WriteHex2Bytes(char *destStr, uint16_t bytes)
{
  AQ_API_WriteHex1Byte(destStr, (bytes >> 8) & 0xff);
  AQ_API_WriteHex1Byte(destStr + 2, bytes & 0xff);

  return;
}


void AQ_API_RegDump
(
  AQ_API_Port* port,
  char *destStr, 
  uint8_t mmd, 
  uint16_t address
) 
{
  AQ_API_WriteHex1Byte(destStr, mmd);
  destStr += 2;

  *destStr = '.';
  destStr += 1;

  AQ_API_WriteHex2Bytes(destStr, address);
  destStr += 4;

  strcpy(destStr, ", 0x");
  destStr += 4;

  AQ_API_WriteHex2Bytes(destStr, AQ_API_MDIO_Read(port->PHY_ID, mmd, address));
  destStr += 4;

  *destStr = '\n';
  destStr += 1;
  *destStr = '\0';
  destStr += 1;

  return;
}


AQ_Retcode AQ_API_PrintDebugRegisters
(
    /*! The target PHY port.*/
  AQ_API_Port* port,
    /*! The register addresses and values will be formatted as a null-terminated string and <BR>
        written to this buffer. The buffer capacity must be at least 5025 characters.*/
  char* regDump
)
{
  unsigned int i;
  char *regDumpCursor;


  regDumpCursor = regDump;

  /* We need to read the scratchpad registers first since later in this 
   * procedure we might wait by writing to the scratchpad. */
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x0300);
  regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x0301);
  regDumpCursor += 16;
  /*2*/

  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x0); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x1); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x8); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x9); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x82); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x83); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x85); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x86); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x87); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x88); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x89); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x8A); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x8B); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0x8C); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC021); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC022); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC023); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC024); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC025); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC026); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC027); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC028); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC100); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC112); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC113); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC116); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC124); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC125); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC126); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC127); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC128); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC129); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC134); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC135); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC136); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC137); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC138); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC141); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC142); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC152); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC153); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC154); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC155); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC410); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC810); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xC811); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xCC00); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xD800); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE400); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE800); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE810); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE811); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE920); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE921); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE922); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE923); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE924); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE925); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE926); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xE927); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xEC01); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xEC02); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xEC03); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xEC04); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xEC05); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xEC06); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1, 0xEC07); regDumpCursor += 16;
  /*67*/

  AQ_API_RegDump(port, regDumpCursor, 0x7, 0x0); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0x1); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0x10 ); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0x13 ); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0x17 ); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0x20 ); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0x21 ); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xC400); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xC410); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xC411); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xC800); regDumpCursor += 16;
  /*11*/

  for (i = 0; i < 70; i++)
  {
    /* wait at least 0.1s */
    AQ_API_Wait(100, port);
    AQ_API_RegDump(port, regDumpCursor, 0x7, 0xC810); regDumpCursor += 16;
  }
  /*70*/

  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xC811); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xCC00); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xE820); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xE821); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xE822); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xE823); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xE830); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x7, 0xE832); regDumpCursor += 16;
  /*8*/

  AQ_API_RegDump(port, regDumpCursor, 0x3, 0x0); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0x8); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0x20); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0x21); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xD800); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xD801); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE810); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE811); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE820); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE821); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE822); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE823); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE840); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE841); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE842); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE843); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE844); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE845); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE846); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE847); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE848); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE849); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE84A); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE84B); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE84C); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE84D); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE84E); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE84F); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE850); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE851); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xE852); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x3, 0xF800); regDumpCursor += 16;
  /*32*/

  AQ_API_RegDump(port, regDumpCursor, 0x4, 0x0); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0x1); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0x8); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0x18); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xC802); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xC803); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xC804); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xC805); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xCC01); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xCC03); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xCC04); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xE402); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xE403); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xE404); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xE405); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xE802); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xE803); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xE804); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xE805); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xEC00); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xEC02); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xF801); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x4, 0xF802); regDumpCursor += 16;
  /*23*/

  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xC280); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xC500); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD280); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD282); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD283); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD284); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD285); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD300); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD302); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD303); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD304); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD305); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD30B); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xD30C); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xE010); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1D, 0xE030); regDumpCursor += 16;
  /*16*/

  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x0); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x20); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1000); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1001); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1002); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1003); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1004); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1005); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1200); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1201); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1202); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1203); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1204); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0x1205); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC001); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC472); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC473); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC474); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC475); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC476); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC477); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC820); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC821); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC840); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC841); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC842); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC843); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC844); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC845); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC846); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC847); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC848); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC849); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC84A); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC84B); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC84C); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC84D); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC84E); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC84F); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC850); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC851); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC870); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC880); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC881); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC882); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC883); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC884); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC885); regDumpCursor += 16;
  /*48*/

  for (i = 0; i < 30; i++)
  {
    /* wait at least 0.1s */
    AQ_API_Wait(100, port);
    AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC886); regDumpCursor += 16;
  }
  /*30*/

  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC890); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC891); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC892); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC893); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xC894); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xCC01); regDumpCursor += 16;
  AQ_API_RegDump(port, regDumpCursor, 0x1E, 0xCC02); 
  /*7*/

  /*310*/
  return AQ_RET_OK;
}



AQ_Retcode AQ_API_PrintDebugTrace
(
  AQ_API_Port* port,
  char* traceDump
)
{
  /* Polling loop counters used when waiting for freeze/unfreeze requests
   * to be granted. */
  unsigned int numFreezeChecks; 
  unsigned numUnfreezeChecks;
  /* Loop counter used when writing trace buffer data and parameters to traceDump. */
  unsigned int i;
  /* The target address in the PHY's memory space for memory reads and writes. */
  uint32_t targetAddress;
  /* Trace parameters read from memory. */
  uint16_t traceLength; 
  uint16_t traceDepth; 
  uint16_t traceReadCursor; 
  uint16_t traceBufAddrLSW; 
  uint16_t traceBufAddrMSW;
  /* Target byte buffer used when reading trace parameters from memory. */
  uint8_t regData[] = {0, 0};
  /* Byte buffer written to memory to request trace freeze. */
  uint8_t freezeReqBuf[] = {0x4, 0x0};
  /* Byte buffer written to memory to request trace unfreeze. */
  uint8_t unfreezeReqBuf[] = {0x5, 0x0};
  /* Target byte buffer used when reading trace buffer from the PHY's memory. */
  uint8_t traceBuffer[AQ_MAX_TRACE_BUFFER_LENGTH];


  /* Send request to FW to freeze debug trace */
  targetAddress = 0x3FFE0480 + (0x43 << 1);
  AQ_API_MemoryWrite(port, freezeReqBuf, 2, targetAddress);

  /* Poll until we see the freeze-request-granted code in the 
   * appropriate bitfield, or we pass our max poll count. */
  numFreezeChecks = 0;
  while (numFreezeChecks < AQ_MAX_FREEZE_CHECKS)
  {
    /* Wait at least 1ms */
    AQ_API_Wait(1, port);
    AQ_API_MemoryRead(port, regData, 2, targetAddress);
    if (regData[1] == 0x04) break;
    numFreezeChecks++;
  }

  if (numFreezeChecks >= AQ_MAX_FREEZE_CHECKS) 
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Trace freeze request was not acknowledged.");
  #endif
    return AQ_RET_DEBUGTRACE_FREEZE_TIMEOUT;
  }


  /* Read trace parameters from memory. */
  targetAddress = 0x3FFE0480 + (0x45 << 1);
  AQ_API_MemoryRead(port, regData, 2, targetAddress);
  traceBufAddrLSW = (regData[1] << 8) | regData[0];

  targetAddress = 0x3FFE0480 + (0x46 << 1);
  AQ_API_MemoryRead(port, regData, 2, targetAddress);
  traceBufAddrMSW = (regData[1] << 8) | regData[0];

  targetAddress = 0x3FFE0480 + (0x47 << 1);
  AQ_API_MemoryRead(port, regData, 2, targetAddress);
  traceLength = (regData[1] << 8) | regData[0];

  targetAddress = 0x3FFE0480 + (0x48 << 1);
  AQ_API_MemoryRead(port, regData, 2, targetAddress);
  traceDepth = (regData[1] << 8) | regData[0];

  targetAddress = 0x3FFE0480 + (0x49 << 1);
  AQ_API_MemoryRead(port, regData, 2, targetAddress);
  traceReadCursor = (regData[1] << 8) | regData[0];

  /* Read trace buffer from memory. */
  targetAddress = (traceBufAddrMSW << 16) | traceBufAddrLSW;
  AQ_API_MemoryRead(port, traceBuffer, traceLength, targetAddress);

  
  /* Print trace parameters and buffer to traceDump string. */
  strcpy(traceDump, "\n\n0xA0047, 0x");
  traceDump += 12;
  AQ_API_WriteHex2Bytes(traceDump, traceLength);
  traceDump += 4;
  strcpy(traceDump, "\n0xA0048, 0x");
  traceDump += 11;
  AQ_API_WriteHex2Bytes(traceDump, traceDepth);
  traceDump += 4;
  strcpy(traceDump, "\n0xA0049, 0x");
  traceDump += 11;
  AQ_API_WriteHex2Bytes(traceDump, traceReadCursor);
  traceDump += 4;
  strcpy(traceDump, "\n\n\n");
  traceDump += 3;

  for (i = 0; i < (traceLength / 4); i++)
  {
    AQ_API_WriteHex1Byte(traceDump, traceBuffer[i * 4 + 3]);
    AQ_API_WriteHex1Byte(traceDump + 2, traceBuffer[i * 4 + 2]);
    AQ_API_WriteHex1Byte(traceDump + 4, traceBuffer[i * 4 + 1]);
    AQ_API_WriteHex1Byte(traceDump + 6, traceBuffer[i * 4]);
    traceDump += 8;
    strcpy(traceDump, "\n");
    traceDump += 1;
  }

  /* Send request to FW to un-freeze debug trace */
  targetAddress = 0x3FFE0480 + (0x43 << 1);
  AQ_API_MemoryWrite(port, unfreezeReqBuf, 2, targetAddress);

  /* Poll until we see the unfreeze-request-granted code in the 
   * appropriate bitfield, or we pass our max poll count.  */
  numUnfreezeChecks = 0;
  while (numUnfreezeChecks < AQ_MAX_FREEZE_CHECKS)
  {
    /* Wait at least 1ms */
    AQ_API_Wait(1, port);
    AQ_API_MemoryRead(port, regData, 2, targetAddress);
    if (regData[1] == 0x05) break;
    numUnfreezeChecks++;
  }

  if (numUnfreezeChecks >= AQ_MAX_FREEZE_CHECKS) 
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Trace unfreeze request was not acknowledged.");
  #endif
    return AQ_RET_DEBUGTRACE_UNFREEZE_TIMEOUT;
  }
        
  return AQ_RET_OK;
}

/*@}*/

/**********************************************************************************************************************
*                                               Cable Diagnostics
**********************************************************************************************************************/

/*! \addtogroup diagnostics
  @{
*/

/*! \addtogroup basicCableDiags
  @{
*/

AQ_Retcode AQ_API_RunBasicCableDiags
(
  AQ_API_Port* port
)
{
  AQ_API_DECLARE_UP_BUSY_VARS
  
  AQ_API_Variable(AQ_GlobalReservedProvisioning)


  /* Select "normal" cable diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, diagnosticsSelect, 0);
  AQ_API_CHECK_UP_NOT_BUSY

  /* Set the bit to start the diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.4) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, initiateCableDiagnostics, 1);
  AQ_API_CHECK_UP_NOT_BUSY_LONG

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}

AQ_Retcode AQ_API_RunBasicCableDiagsWithBaudRateSelect
(
  AQ_API_Port* port,
  AQ_API_DiagBaudRate baud
)
{
  AQ_API_Variable_DeviceRestricted(EUR_CAL_RHEA, AQ_GlobalReservedProvisioning)
  unsigned int baudRate;

  baudRate = 0;
  switch(port->device)
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      return AQ_RET_UNSUPPORTED_DEVICE;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      break;   
  }

  switch(baud)
  {
    case AQ_API_BAUD_800M:
      baudRate = 0;
      break;

    case AQ_API_BAUD_400M:
      baudRate = 1;
      break;

    case AQ_API_BAUD_200M:
      baudRate = 2;
      break;

    default:
      switch(port->device)
      {
        case AQ_DEVICE_APPIA:
        case AQ_DEVICE_HHD:
          return AQ_RET_UNSUPPORTED_DEVICE;

        case AQ_DEVICE_EUR:
        case AQ_DEVICE_CAL:
          baudRate = 0;
          break;

        case AQ_DEVICE_RHEA:
          baudRate = 2;
          break;   
      }
      break;
  }

  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.1:0) */
  AQ_API_Set_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedProvisioning, cableDiagnosticBaudRate, baudRate);

  return AQ_API_RunBasicCableDiags(port);
}

AQ_Retcode AQ_API_GetBasicCableDiagsResults
(
  AQ_API_Port* port,
  AQ_API_BasicCableDiagResults* results
)
{
  AQ_API_Variable(AQ_GlobalReservedProvisioning)
  AQ_API_Variable(AQ_GlobalCableDiagnosticStatus)

  uint16_t diagsRunning; 
  uint16_t aStatus; 
  uint16_t bStatus; 
  uint16_t cStatus; 
  uint16_t dStatus;


  /* Check whether the diagnostics are currently being run.  If so, return
   * the appropriate return code immediately. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.4) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalReservedProvisioning, initiateCableDiagnostics, diagsRunning);
  if (diagsRunning)
  {
    return AQ_RET_CABLEDIAG_STILL_RUNNING; 
  }

  /* Diags are not currently running, so we assume that they have been completed.
   * Retrieve the results. */

  /* Get the pair A status and reflection distances. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C800.E:C) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairAStatus, aStatus);
  switch (aStatus)
  {
    case 0x0: results->pairAResult.status = AQ_API_BasicPairStatus_OK; break;
    case 0x1: results->pairAResult.status = AQ_API_BasicPairStatus_CrossoverB; break;
    case 0x2: results->pairAResult.status = AQ_API_BasicPairStatus_CrossoverC; break;
    case 0x3: results->pairAResult.status = AQ_API_BasicPairStatus_CrossoverD; break;
    case 0x4: results->pairAResult.status = AQ_API_BasicPairStatus_Short; break;
    case 0x5: results->pairAResult.status = AQ_API_BasicPairStatus_LowMismatch; break;
    case 0x6: results->pairAResult.status = AQ_API_BasicPairStatus_HighMismatch; break;
    case 0x7: results->pairAResult.status = AQ_API_BasicPairStatus_Open; break;
    default: return AQ_RET_CABLEDIAG_BAD_PAIRSTATUS;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C801.F:8) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairAReflection_1, 
      results->pairAResult.reflection_1_Distance);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C801.7:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairAReflection_2, 
      results->pairAResult.reflection_2_Distance);

  /* Get the pair B status and reflection distances. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C800.A:8) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairBStatus, bStatus);
  switch (bStatus)
  {
    case 0x0: results->pairBResult.status = AQ_API_BasicPairStatus_OK; break;
    case 0x1: results->pairBResult.status = AQ_API_BasicPairStatus_CrossoverC; break;
    case 0x2: results->pairBResult.status = AQ_API_BasicPairStatus_CrossoverD; break;
    case 0x3: results->pairBResult.status = AQ_API_BasicPairStatus_CrossoverA; break;
    case 0x4: results->pairBResult.status = AQ_API_BasicPairStatus_Short; break;
    case 0x5: results->pairBResult.status = AQ_API_BasicPairStatus_LowMismatch; break;
    case 0x6: results->pairBResult.status = AQ_API_BasicPairStatus_HighMismatch; break;
    case 0x7: results->pairBResult.status = AQ_API_BasicPairStatus_Open; break;
    default: return AQ_RET_CABLEDIAG_BAD_PAIRSTATUS;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C803.F:8) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairBReflection_1, 
      results->pairBResult.reflection_1_Distance);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C803.7:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairBReflection_2, 
      results->pairBResult.reflection_2_Distance);

  /* Get the pair C status and reflection distances. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C800.6:4) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairCStatus, cStatus);
  switch (cStatus)
  {
    case 0x0: results->pairCResult.status = AQ_API_BasicPairStatus_OK; break;
    case 0x1: results->pairCResult.status = AQ_API_BasicPairStatus_CrossoverD; break;
    case 0x2: results->pairCResult.status = AQ_API_BasicPairStatus_CrossoverA; break;
    case 0x3: results->pairCResult.status = AQ_API_BasicPairStatus_CrossoverB; break;
    case 0x4: results->pairCResult.status = AQ_API_BasicPairStatus_Short; break;
    case 0x5: results->pairCResult.status = AQ_API_BasicPairStatus_LowMismatch; break;
    case 0x6: results->pairCResult.status = AQ_API_BasicPairStatus_HighMismatch; break;
    case 0x7: results->pairCResult.status = AQ_API_BasicPairStatus_Open; break;
    default: return AQ_RET_CABLEDIAG_BAD_PAIRSTATUS;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C805.F:8) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairCReflection_1, 
      results->pairCResult.reflection_1_Distance);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C805.7:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairCReflection_2, 
      results->pairCResult.reflection_2_Distance);

  /* Get the pair D status and reflection distances. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C800.2:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairDStatus, dStatus);
  switch (dStatus)
  {
    case 0x0: results->pairDResult.status = AQ_API_BasicPairStatus_OK; break;
    case 0x1: results->pairDResult.status = AQ_API_BasicPairStatus_CrossoverA; break;
    case 0x2: results->pairDResult.status = AQ_API_BasicPairStatus_CrossoverB; break;
    case 0x3: results->pairDResult.status = AQ_API_BasicPairStatus_CrossoverC; break;
    case 0x4: results->pairDResult.status = AQ_API_BasicPairStatus_Short; break;
    case 0x5: results->pairDResult.status = AQ_API_BasicPairStatus_LowMismatch; break;
    case 0x6: results->pairDResult.status = AQ_API_BasicPairStatus_HighMismatch; break;
    case 0x7: results->pairDResult.status = AQ_API_BasicPairStatus_Open; break;
    default: return AQ_RET_CABLEDIAG_BAD_PAIRSTATUS;
  }
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C807.F:8) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairDReflection_1, 
      results->pairDResult.reflection_1_Distance);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C807.7:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, pairDReflection_2, 
      results->pairDResult.reflection_2_Distance);

  return AQ_RET_OK;
}

/*@}*/

/*! \addtogroup TDRCableDiags
  @{
*/

AQ_Retcode AQ_API_RunTDRCableDiags
(
  AQ_API_Port* port
)
{
  AQ_API_DECLARE_UP_BUSY_VARS
  AQ_API_Variable(AQ_GlobalReservedProvisioning)

  uint16_t diagsRunning;


  /* Confirm that diags aren't already running. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.4) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalReservedProvisioning, initiateCableDiagnostics, diagsRunning);
  if (diagsRunning)
  {
    return AQ_RET_CABLEDIAG_ALREADY_RUNNING;
  }

  /* Select "extended" cable diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, diagnosticsSelect, 1);

  /* Select "TDR Data" type of extended diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.E:D) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, extendedMdiDiagnosticsSelect, 0);

  /* Set the bit to start the diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.4) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, initiateCableDiagnostics, 1);
  AQ_API_CHECK_UP_NOT_BUSY_LONG

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}


/*! Convert the 2's complement byte-pairs in bytes to 16-bit signed integers, 
 * and store the results * in ints.  bytes[0] is the LSB of ints[0] and 
 * bytes[1] is the MSB of ints[0]. Signed integers in bytes are encoded as 
 * 2's complement.  numInts specifies the length of the ints and bytes arrays
 * (bytes is twice as long as ints). */
void convertBytesToInts(int16_t* ints, uint8_t* bytes, unsigned int numInts)
{
  unsigned int i;
  uint32_t x;


  for (i = 0; i < numInts; i++)
  {
    x = bytes[i * 2] | (bytes[i * 2 + 1] << 8);
    ints[i] = x - ((x & 0x8000) << 1);
  }
}


#define NUM_BYTES_TDR_RESULTS_HEADER 4

AQ_Retcode AQ_API_GetTDRCableDiagsResults
(
  AQ_API_Port* port,
  AQ_API_TDRCableDiagResults* results
)
{
  AQ_API_Variable(AQ_GlobalReservedProvisioning)
  AQ_API_Variable(AQ_GlobalCableDiagnosticStatus)

  uint32_t address;
  uint16_t diagsRunning; 
  uint16_t txPair; 
  uint16_t addrMSW; 
  uint16_t addrLSW;
  uint16_t reportedNumPairSamples;
  uint16_t reportedTxPair;
  uint8_t header[NUM_BYTES_TDR_RESULTS_HEADER];
  uint8_t rawResultsBytes[MAX_NUM_TDR_SAMPLES * 2];
  AQ_API_TDRPairResult *pairResult;


  /* Check whether the diagnostics are currently being run.  If so, return
   * the appropriate return code immediately. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalReservedProvisioning, diagnosticsSelect, diagsRunning);
  if (diagsRunning)
  {
    return AQ_RET_CABLEDIAG_STILL_RUNNING; 
  }

  /* TDR samples are collected after transmitting on each pair.  Sequence must go:
   * pair A -> pair B -> pair C -> pair D. */

  /* Figure out which tx pair we should be collecting TDR data for. */
  if (!results->pairAResultsCollected) txPair = 0;
  else if (!results->pairBResultsCollected) txPair = 1;
  else if (!results->pairCResultsCollected) txPair = 2;
  else if (!results->pairDResultsCollected) txPair = 3;
  else return AQ_RET_CABLEDIAG_RESULTS_ALREDY_COLLECTED;

  /* Get the address of the extended cable diag data */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C802.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, impulseResponseMSW, addrMSW);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C804.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, impulseResponseLSW, addrLSW);
  address = (addrMSW << 16) | addrLSW;

  /* Read the diag result header data out of memory. */
  AQ_API_MemoryRead(port, header, NUM_BYTES_TDR_RESULTS_HEADER, address);
  address += NUM_BYTES_TDR_RESULTS_HEADER;

  /* Confirm that the reported number of samples is as expected. */
  reportedNumPairSamples = (header[3] << 8) | header[2];
  if (reportedNumPairSamples > MAX_NUM_TDR_SAMPLES) return AQ_RET_CABLEDIAG_BAD_NUM_SAMPLES;
  
  /* Confirm that the reported tx pair is as expected. */
  reportedTxPair = header[0] & 0xF;
  if (reportedTxPair != txPair) return AQ_RET_CABLEDIAG_REPORTEDPAIR_MISMATCH;

  switch (txPair)
  {
    case 0:
      pairResult = &(results->pairAResult);
      results->pairAResultsCollected = True;
      break;
    case 1:
      pairResult = &(results->pairBResult);
      results->pairBResultsCollected = True;
      break;
    case 2:
      pairResult = &(results->pairCResult);
      results->pairCResultsCollected = True;
      break;
    case 3:
      pairResult = &(results->pairDResult);
      results->pairDResultsCollected = True;
      break;
    default:
      return AQ_RET_CABLEDIAG_REPORTEDPAIR_OOR;
  }

  /* Read the samples recorded for pair A from memory and convert to signed integers. */
  AQ_API_MemoryRead(port, rawResultsBytes, reportedNumPairSamples * 2, address);
  convertBytesToInts(pairResult->pairA_TDRSamples, rawResultsBytes, reportedNumPairSamples);
  pairResult->pairA_numSamples = reportedNumPairSamples;
  address += reportedNumPairSamples * 2;

  /* Read the samples recorded for pair B from memory and convert to signed integers. */
  AQ_API_MemoryRead(port, rawResultsBytes, reportedNumPairSamples * 2, address);
  convertBytesToInts(pairResult->pairB_TDRSamples, rawResultsBytes, reportedNumPairSamples);
  pairResult->pairB_numSamples = reportedNumPairSamples;
  address += reportedNumPairSamples * 2;

  /* Read the samples recorded for pair C from memory and convert to signed integers. */
  AQ_API_MemoryRead(port, rawResultsBytes, reportedNumPairSamples * 2, address);
  convertBytesToInts(pairResult->pairC_TDRSamples, rawResultsBytes, reportedNumPairSamples);
  pairResult->pairC_numSamples = reportedNumPairSamples;
  address += reportedNumPairSamples * 2;

  /* Read the samples recorded for pair D from memory and convert to signed integers. */
  AQ_API_MemoryRead(port, rawResultsBytes, reportedNumPairSamples * 2, address);
  convertBytesToInts(pairResult->pairD_TDRSamples, rawResultsBytes, reportedNumPairSamples);
  pairResult->pairD_numSamples = reportedNumPairSamples;

  if (txPair == 3)
  {
    /* We've collected data for all pairs, so we're done with the entire sequence. */
    return AQ_RET_OK;
  }
  else
  {
    /* Start the extended diags process for the next pair. */
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
    AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, diagnosticsSelect, 1);
    /* Wait at least 3ms. */
    AQ_API_Wait(3, port);

    if (txPair == 0) return AQ_RET_CABLEDIAG_STARTED_PAIR_B;
    if (txPair == 1) return AQ_RET_CABLEDIAG_STARTED_PAIR_C;
    if (txPair == 2) return AQ_RET_CABLEDIAG_STARTED_PAIR_D;
  }

  /* This shouldn't be reachable, since we constrained txPair earlier. */
  return AQ_RET_ERROR;
}

/*@}*/


/*! \addtogroup NoisePSDCableDiags
  @{
*/

AQ_Retcode AQ_API_RunNoisePSDCableDiags
(
  AQ_API_Port* port,
  AQ_boolean txEnable
)
{
  AQ_API_DECLARE_UP_BUSY_VARS
  AQ_API_Variable(AQ_GlobalReservedProvisioning)

  uint16_t diagsRunning;


  /* Confirm that diags aren't already running. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.4) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalReservedProvisioning, initiateCableDiagnostics, diagsRunning);
  if (diagsRunning)
  {
    return AQ_RET_CABLEDIAG_ALREADY_RUNNING;
  }

  /* Select "extended" cable diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, diagnosticsSelect, 1);

  /* Select "Noise PSD" type of extended diagnostics, with tx enabled or disabled. */
  if (txEnable)
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.E:D) */
    AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, extendedMdiDiagnosticsSelect, 0x3);
  }
  else
  {
    /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.E:D) */
    AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, extendedMdiDiagnosticsSelect, 0x2);
  }

  /* Set the bit to start the diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.4) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, initiateCableDiagnostics, 1);
  AQ_API_CHECK_UP_NOT_BUSY_LONG

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}


#define NUM_BYTES_NOISE_PSD_RESULTS_HEADER 4

AQ_Retcode AQ_API_GetNoisePSDCableDiagsResults
(
  AQ_API_Port* port,
  AQ_boolean txEnable,
  AQ_API_NoisePSDCableDiagResults* results
)
{
  AQ_API_Variable(AQ_GlobalCableDiagnosticStatus)

  AQ_API_DeclareLocalStruct(AQ_GlobalReservedProvisioning, diagsControlReg)
  
  unsigned int *pairNumSamples;
  uint32_t address;
  uint16_t txPair; 
  uint16_t addrMSW; 
  uint16_t addrLSW;
  uint16_t reportedNumPairSamples;
  uint16_t reportedTxPair;
  uint16_t reportedTxEnabled;
  int16_t *pairResult;
  uint8_t header[MAX_NUM_NOISE_PSD_SAMPLES];
  uint8_t rawResultsBytes[MAX_NUM_NOISE_PSD_SAMPLES * 2];


  /* Check whether the diagnostics are currently being run.  If so, return
   * the appropriate return code immediately. */
  AQ_API_AssignWordOfLocalStruct(diagsControlReg, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C470) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalReservedProvisioning, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalReservedProvisioning, 
        diagsControlReg, diagnosticsSelect))
  {
    return AQ_RET_CABLEDIAG_STILL_RUNNING; 
  }

  /* Slicer samples are collected after for each pair.  Sequence must go:
   * pair A -> pair B -> pair C -> pair D. */

  /* Figure out which tx pair we should be collectign Noise PSD data for. */
  if (!results->pairAResultsCollected) txPair = 0;
  else if (!results->pairBResultsCollected) txPair = 1;
  else if (!results->pairCResultsCollected) txPair = 2;
  else if (!results->pairDResultsCollected) txPair = 3;
  else return AQ_RET_CABLEDIAG_RESULTS_ALREDY_COLLECTED;

  /* Get the address of the extended cable diag data */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C802.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, impulseResponseMSW, addrMSW);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C804.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, impulseResponseLSW, addrLSW);
  address = (addrMSW << 16) | addrLSW;

  /* Read the diag result header data out of memory. */
  AQ_API_MemoryRead(port, header, NUM_BYTES_NOISE_PSD_RESULTS_HEADER, address);
  address += NUM_BYTES_NOISE_PSD_RESULTS_HEADER;

  /* Confirm that the reported number of samples is as expected. */
  reportedNumPairSamples = (header[3] << 8) | header[2];
  if (reportedNumPairSamples > MAX_NUM_NOISE_PSD_SAMPLES) return AQ_RET_CABLEDIAG_BAD_NUM_SAMPLES;
  
  /* Confirm that the reported tx pair is as expected. */
  reportedTxPair = header[0] & 0xF;
  if (reportedTxPair != txPair) return AQ_RET_CABLEDIAG_REPORTEDPAIR_MISMATCH;

  /* Confirm that tx is enabled or disabled as expected. */
  reportedTxEnabled = header[1] & 0xF;
  if (txEnable)
  { 
    if (reportedTxEnabled != 0x1) return AQ_RET_CABLEDIAG_TXENABLE_MISMATCH;
    results->txEnabled = True;
  }
  else
  {
    if (reportedTxEnabled != 0x0) return AQ_RET_CABLEDIAG_TXENABLE_MISMATCH;
    results->txEnabled = False;
  }

  switch (txPair)
  {
    case 0:
      pairResult = results->pairA_NoisePSDSamples;
      pairNumSamples = &(results->pairA_numSamples);
      results->pairAResultsCollected = True;
      break;
    case 1:
      pairResult = results->pairB_NoisePSDSamples;
      pairNumSamples = &(results->pairB_numSamples);
      results->pairBResultsCollected = True;
      break;
    case 2:
      pairResult = results->pairC_NoisePSDSamples;
      pairNumSamples = &(results->pairC_numSamples);
      results->pairCResultsCollected = True;
      break;
    case 3:
      pairResult = results->pairD_NoisePSDSamples;
      pairNumSamples = &(results->pairD_numSamples);
      results->pairDResultsCollected = True;
      break;
    default:
      return AQ_RET_CABLEDIAG_REPORTEDPAIR_OOR;
  }

  /* Read the samples recorded for the current pair from memory and convert to signed integers. */
  AQ_API_MemoryRead(port, rawResultsBytes, reportedNumPairSamples * 2, address);
  convertBytesToInts(pairResult, rawResultsBytes, reportedNumPairSamples);
  *pairNumSamples = reportedNumPairSamples;

  if (txPair == 3)
  {
    /* We've collected data for all pairs, so we're done with the entire sequence. */
    return AQ_RET_OK;
  }
  else
  {
    /* Start the extended diags process for the next pair.  Note that we need to set
     * all these setting with a single register write, since setting either of these
     * bitfields to a non-zero value will cause the diags process to start up again. */
    if (txEnable)
    {
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.E:D) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalReservedProvisioning, 
          diagsControlReg, extendedMdiDiagnosticsSelect, 0x3);
    }
    else
    {
      /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.E:D) */
      AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalReservedProvisioning, 
          diagsControlReg, extendedMdiDiagnosticsSelect, 0x2);
    }

    /* REGDOC: Assign to local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
    AQ_API_AssignBitfieldOfLocalStruct(AQ_GlobalReservedProvisioning, 
        diagsControlReg, diagnosticsSelect, 1);

    /* REGDOC: Write register (HHD/APPIA/EUR/CAL/RHEA: 1E.C470) */
    AQ_API_WriteRegister(port->PHY_ID, AQ_GlobalReservedProvisioning, 0, 
        AQ_API_WordOfLocalStruct(diagsControlReg, 0));
    /* We need to wait a bit here.  If we don't, then occasionally the first subsequent read
     * of the diagnostics select bit will be 0, even though the data for the next pair
     * has not actually been collected yet. */
    AQ_API_Wait(100, port);

    if (txPair == 0) return AQ_RET_CABLEDIAG_STARTED_PAIR_B;
    if (txPair == 1) return AQ_RET_CABLEDIAG_STARTED_PAIR_C;
    if (txPair == 2) return AQ_RET_CABLEDIAG_STARTED_PAIR_D;
  }

  /* This shouldn't be reachable, since we constrained txPair earlier. */
  return AQ_RET_ERROR;
}

/*@}*/

/*! \addtogroup RFIPSDCableDiags
  @{
*/

AQ_Retcode AQ_API_RunRFIPSDCableDiags
(
  AQ_API_Port* port
)
{
  AQ_API_DECLARE_UP_BUSY_VARS
  AQ_API_Variable(AQ_GlobalReservedProvisioning)

  uint16_t diagsRunning;


  /* Confirm that diags aren't already running. */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.4) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalReservedProvisioning, initiateCableDiagnostics, diagsRunning);
  if (diagsRunning)
  {
    return AQ_RET_CABLEDIAG_ALREADY_RUNNING;
  }

  /* Select "extended" cable diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, diagnosticsSelect, 1);

  /* Select "RFI PSD" type of extended diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.E:D) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, extendedMdiDiagnosticsSelect, 0x1);

  /* Set the bit to start the diagnostics. */
  /* REGDOC: Read-Modify-Write bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.4) */
  AQ_API_Set(port->PHY_ID, AQ_GlobalReservedProvisioning, initiateCableDiagnostics, 1);
  AQ_API_CHECK_UP_NOT_BUSY_LONG

  AQ_API_RETURN_UP_BUSY(AQ_RET_OK)
}


#define NUM_BYTES_RFI_PSD_RESULTS_HEADER 4

AQ_Retcode AQ_API_GetRFIPSDCableDiagsResults
(
  AQ_API_Port* port,
  AQ_API_RFIPSDCableDiagResults * results
)
{
  AQ_API_Variable(AQ_GlobalCableDiagnosticStatus)
  
  AQ_API_DeclareLocalStruct(AQ_GlobalReservedProvisioning, diagsControlReg)

  uint32_t address;
  uint16_t addrMSW; 
  uint16_t addrLSW;
  uint16_t reportedNumPairSamples;
  uint16_t reportedTxPair;
  uint8_t header[MAX_NUM_RFI_PSD_SAMPLES];
  uint8_t rawResultsBytes[MAX_NUM_RFI_PSD_SAMPLES * 2];


  /* Check whether the diagnostics are currently being run.  If so, return
   * the appropriate return code immediately. */
  AQ_API_AssignWordOfLocalStruct(diagsControlReg, 0, 
      /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C470) */
      AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalReservedProvisioning, 0));
      /* REGDOC: Get local representation of bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C470.F) */
  if (AQ_API_BitfieldOfLocalStruct(AQ_GlobalReservedProvisioning, 
        diagsControlReg, diagnosticsSelect))
  {
    return AQ_RET_CABLEDIAG_STILL_RUNNING; 
  }

  /* Get the address of the extended cable diag data */
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C802.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, impulseResponseMSW, addrMSW);
  /* REGDOC: Read bitfield (HHD/APPIA/EUR/CAL/RHEA: 1E.C804.F:0) */
  AQ_API_Get(port->PHY_ID, AQ_GlobalCableDiagnosticStatus, impulseResponseLSW, addrLSW);
  address = (addrMSW << 16) | addrLSW;

  /* Read the diag result header data out of memory. */
  AQ_API_MemoryRead(port, header, NUM_BYTES_RFI_PSD_RESULTS_HEADER, address);
  address += NUM_BYTES_RFI_PSD_RESULTS_HEADER;

  /* Confirm that the reported number of samples is as expected. */
  reportedNumPairSamples = (header[3] << 8) | header[2];
  if (reportedNumPairSamples > MAX_NUM_RFI_PSD_SAMPLES) return AQ_RET_CABLEDIAG_BAD_NUM_SAMPLES;
  
  /* Confirm that the reported tx pair is as expected. */
  reportedTxPair = header[0] & 0xF;
  if (reportedTxPair != 5) return AQ_RET_CABLEDIAG_REPORTEDPAIR_MISMATCH;

  /* Read the samples recorded for the current pair from memory and convert to signed integers. */
  AQ_API_MemoryRead(port, rawResultsBytes, reportedNumPairSamples * 2, address);
  convertBytesToInts(results->RFIPSDSamples, rawResultsBytes, reportedNumPairSamples);
  results->RFInumSamples = reportedNumPairSamples;

  return AQ_RET_OK;
}

/*@}*/

/*@}*/

/**********************************************************************************************************************
*                                               PIF delegation
**********************************************************************************************************************/

/*! \addtogroup pifdelgation
  @{
*/

AQ_Retcode   AQ_API_MDIO_Write_PIFMailbox 
(    
 AQ_API_Port*   port,
 unsigned int   MMD,
 unsigned int   address,
 unsigned int   data
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PifMailboxControl, pmc)

  unsigned int commandStatus = 0;
  unsigned int numCommandStatusPolls = 0;


  /* Clear the command status register */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 3) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 3, 0);

  /* Write the target address */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 0, address);

  /* Write the data */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 1) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 1, data);

  /* Write the target MMD and "write" command-type */
  AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA,pmc, 2, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.7:0) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, pifMailboxMMD, MMD);
  /* Command 2 means "write" */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.B:8) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, pifMailboxCommandType, 2);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.C) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, serviceSecondRegister, 0);
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 2) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 2, 
      AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 2));

  /* Poll the command-status register until we see "done" or "error", or exceed
   * the poll limit. */
  commandStatus = 0;
  numCommandStatusPolls = 0;
  while (1)
  {
    AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 3, 
        /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 1E.C47C + 3) */
        AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PifMailboxControl, 3));
                    /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47F.3:0) */
    commandStatus = AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA,
        AQ_PifMailboxControl, pmc, pifMailboxCommandStatus);
    numCommandStatusPolls++;

    if (commandStatus == 1)
      return AQ_RET_OK;

    if (commandStatus == 2)
      return AQ_RET_PIFMAILBOX_ERROR;

    if (numCommandStatusPolls >= MAX_NUM_COMMAND_STATUS_POLLS)
      return AQ_RET_PIFMAILBOX_TIMEOUT;
  }
}


AQ_Retcode   AQ_API_MDIO_Write_PIFMailbox2 
(    
 AQ_API_Port*   port,
 unsigned int   MMD_reg1,
 unsigned int   address_reg1,
 unsigned int   data_reg1,
 unsigned int   MMD_reg2,
 unsigned int   address_reg2,
 unsigned int   data_reg2
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PifMailboxControl, pmc)

  unsigned int commandStatus = 0;
  unsigned int numCommandStatusPolls = 0;


  /* Clear the command status register */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 3) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 3, 0);

  /* Write the first target register address */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 0, address_reg1);

  /* Write the first target register data */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 1) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 1, data_reg1);

  /* Write the second target register address */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 04.E41D) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxExtra, 0, address_reg2);

  /* Write the second target register data */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 04.E41D + 1) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxExtra, 1, data_reg2);

  /* Write the second target register MMD */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 04.E41D + 2) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxExtra, 2, MMD_reg2);

  /* Write the first target register MMD and "write" command-type */
  AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 2, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.7:0) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, pifMailboxMMD, MMD_reg1);
  /* Command 2 means "write" */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.B:8) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, pifMailboxCommandType, 2);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.C) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, serviceSecondRegister, 1);
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 2) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 2, 
      AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 2));

  /* Poll the command-status register until we see "done" or "error", or exceed
   * the poll limit. */
  commandStatus = 0;
  numCommandStatusPolls = 0;
  while (1)
  {
    AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 3, 
        /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 1E.C47C + 3) */
        AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PifMailboxControl, 3));
                    /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47F.3:0) */
    commandStatus = AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA,
        AQ_PifMailboxControl, pmc, pifMailboxCommandStatus);
    numCommandStatusPolls++;

    if (commandStatus == 1)
      return AQ_RET_OK;

    if (commandStatus == 2)
      return AQ_RET_PIFMAILBOX_ERROR;

    if (numCommandStatusPolls >= MAX_NUM_COMMAND_STATUS_POLLS)
      return AQ_RET_PIFMAILBOX_TIMEOUT;
  }
}


AQ_Retcode   AQ_API_MDIO_Read_PIFMailbox 
(    
 AQ_API_Port*   port,
 unsigned int   MMD,
 unsigned int   address,
 unsigned int*   data
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PifMailboxControl, pmc)

  unsigned int commandStatus = 0;
  unsigned int numCommandStatusPolls = 0;


  /* Clear the command status register */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 3) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 3, 0);

  /* Write the target address */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 0, address);

  /* Write the target MMD and "read" command-type */
  AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 2, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.7:0) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, pifMailboxMMD, MMD);
  /* Command 1 means "read" */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.B:8) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, pifMailboxCommandType, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.C) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, serviceSecondRegister, 0);
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 2) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 2, 
      AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 2));

  /* Poll the command-status register until we see "done" or "error", or exceed
   * the poll limit. */
  commandStatus = 0;
  numCommandStatusPolls = 0;
  while (1)
  {
    AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 3, 
        /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 1E.C47C + 3) */
        AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PifMailboxControl, 3));
                    /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47F.3:0) */
    commandStatus = AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA,
        AQ_PifMailboxControl, pmc, pifMailboxCommandStatus);
    numCommandStatusPolls++;

    if (commandStatus == 1)
    {
              /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 1E.C47C + 1) */
      *data = AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PifMailboxControl, 1);
      return AQ_RET_OK;
    }

    if (commandStatus == 2)
      return AQ_RET_PIFMAILBOX_ERROR;

    if (numCommandStatusPolls >= MAX_NUM_COMMAND_STATUS_POLLS)
      return AQ_RET_PIFMAILBOX_TIMEOUT;
  }
}


AQ_Retcode   AQ_API_MDIO_Read_PIFMailbox2 
(    
 AQ_API_Port*   port,
 unsigned int   MMD_reg1,
 unsigned int   address_reg1,
 unsigned int*   data_reg1,
 unsigned int   MMD_reg2,
 unsigned int   address_reg2,
 unsigned int*   data_reg2
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PifMailboxControl, pmc)

  unsigned int commandStatus = 0;
  unsigned int numCommandStatusPolls = 0;


  /* Clear the command status register */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 3) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 3, 0);

  /* Write the first target register address */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 0, address_reg1);

  /* Write the second target register address */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 04.E41D) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxExtra, 0, address_reg2);

  /* Write the second target register MMD */
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 04.E41D + 2) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxExtra, 2, MMD_reg2);  
  
  /* Write the first target register MMD and "read" command-type */
  AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 2, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.7:0) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, pifMailboxMMD, MMD_reg1);
  /* Command 1 means "read" */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.B:8) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, pifMailboxCommandType, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47E.C) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_PifMailboxControl, pmc, serviceSecondRegister, 1);
  /* REGDOC: Write register (HHD/EUR/CAL/RHEA: 1E.C47C + 2) */
  AQ_API_WriteRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
      AQ_PifMailboxControl, 2, 
      AQ_API_WordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 2));

  /* Poll the command-status register until we see "done" or "error", or exceed
   * the poll limit. */
  commandStatus = 0;
  numCommandStatusPolls = 0;
  while (1)
  {
    AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, pmc, 3, 
        /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 1E.C47C + 3) */
        AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PifMailboxControl, 3));
                    /* REGDOC: Get local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.C47F.3:0) */
    commandStatus = AQ_API_BitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA,
        AQ_PifMailboxControl, pmc, pifMailboxCommandStatus);
    numCommandStatusPolls++;

    if (commandStatus == 1)
    {
                   /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 1E.C47C + 1) */
      *data_reg1 = AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PifMailboxControl, 1);
                   /* REGDOC: Read register (HHD/EUR/CAL/RHEA: 04.E41D + 1) */
      *data_reg2 = AQ_API_ReadRegister_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
          AQ_PifMailboxExtra, 1);
      return AQ_RET_OK;
    }

    if (commandStatus == 2)
      return AQ_RET_PIFMAILBOX_ERROR;

    if (numCommandStatusPolls >= MAX_NUM_COMMAND_STATUS_POLLS)
      return AQ_RET_PIFMAILBOX_TIMEOUT;
  }
}

/*@}*/

/**********************************************************************************************************************
*                                               SERDES Tuning
**********************************************************************************************************************/


/*! \addtogroup sERDESTuning
  @{
*/

/*! Returns the internal SERDES lane number for the specified lane. 
 *  Compatibility: 28nm only. */
uint8_t AQ_API_GetSERDESInternalRxLane
(
  /*! The target PHY port.*/
  AQ_API_Port* port,
  /*! The specified lane number (0 through 3). */
  uint8_t lane
)
{
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_PcsSerdesMuxSwapTxrxRegister)               

  uint16_t swapVal;

  switch (port->device)
  {
    case AQ_DEVICE_APPIA:
      return 0;

    case AQ_DEVICE_HHD:
    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      switch (lane)
      {
        case 0:
          /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.C4F0.1:0) */
          AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
              AQ_PcsSerdesMuxSwapTxrxRegister, serdesMuxSwapRxLane_0, swapVal)
          switch (swapVal)                                        
          {
            case 0: return 0;
            case 1: return 1;
            case 2: return 2;
            case 3: return 3;
            default: return 0;
          }

        case 1:
          /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.C4F0.3:2) */
          AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
              AQ_PcsSerdesMuxSwapTxrxRegister, serdesMuxSwapRxLane_1, swapVal);                                        
          switch (swapVal)                                        
          {
            case 0: return 1;
            case 1: return 2;
            case 2: return 3;
            case 3: return 0;
            default: return 0;
          }

        case 2:
          /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.C4F0.5:4) */
          AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
              AQ_PcsSerdesMuxSwapTxrxRegister, serdesMuxSwapRxLane_2, swapVal);                                        
          switch (swapVal)                                        
          {
            case 0: return 2;
            case 1: return 3;
            case 2: return 0;
            case 3: return 1;
            default: return 0;
          }

        case 3:
          /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 03.C4F0.7:6) */
          AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, 
              AQ_PcsSerdesMuxSwapTxrxRegister, serdesMuxSwapRxLane_3, swapVal);                                        
          switch (swapVal)                                        
          {
            case 0: return 3;
            case 1: return 0;
            case 2: return 1;
            case 3: return 2;
            default: return 0;
          }

        default:
          return 0;
      }
      break;
  }

  return 0; /* Unreachable */
}


AQ_Retcode AQ_API_BeginSERDESRxEyeDiagram
(
  AQ_API_Port* port,
  const uint8_t lane
)
{
  unsigned int laneAddrOffset;
  unsigned int pifMailboxReadVal;
  uint8_t serdesRegVal;
  AQ_Retcode pifMailboxRetcode;


  if (lane > 3) return AQ_RET_SERDESEYE_LANE_OOR;

  laneAddrOffset = 0x2000 * AQ_API_GetSERDESInternalRxLane(port, lane);

  /* Prepare to make measurements. */
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x57, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x57, (~1) & serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x56, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x56, (~(1 << 7)) & serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x56, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x56, (~(1 << 6)) & serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x27, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x27, (~(1 << 2)) & serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetSERDESRxEyeMeasurement
(
  AQ_API_Port* port,
  const uint8_t lane,
  const uint8_t x,
  const uint8_t y,
  uint16_t* numErrors,
  uint16_t* maxErrors
)
{
  unsigned int laneAddrOffset;
  unsigned int numDoneChecks;
  unsigned int pifMailboxReadVal;
  uint8_t done;
  uint8_t yAdjustment;
  int8_t xCodeOffset;
  uint8_t serdesRegVal;
  uint16_t measCount; /* The number of measurements taken for each grid point. */
  uint16_t dataWidth = 0; /* The number of bits comapared by each measurement. */
  AQ_Retcode pifMailboxRetcode;

  AQ_API_ConnectionStatus connStatus;


  if (lane > 3) return AQ_RET_SERDESEYE_LANE_OOR;

  if (x >= AQ_API_SERDESEYE_GRIDSIZE_X || y >= AQ_API_SERDESEYE_GRIDSIZE_Y) 
    return AQ_RET_SERDESEYE_COORD_OOR;

  laneAddrOffset = 0x2000 * AQ_API_GetSERDESInternalRxLane(port, lane);

  /* Get the current system interface operating mode to determine the data 
   * width. */
  connStatus.sysIntfCurrentMode = AQ_API_SIOM_Other;
  AQ_API_GetConnectionStatus(port, &connStatus);
  switch (connStatus.sysIntfCurrentMode)
  {
    case AQ_API_SIOM_XFI:
    case AQ_API_SIOM_BackplaneKR:
    case AQ_API_SIOM_BackplaneKX:
      dataWidth = 32;
      break;

    case AQ_API_SIOM_XAUI:
    case AQ_API_SIOM_XAUI_PauseBased:
      dataWidth = 10;
      break;

    case AQ_API_SIOM_RXAUI:
      dataWidth = 20;
      break;

    case AQ_API_SIOM_SGMII:
    case AQ_API_SIOM_OCSGMII:
      dataWidth = 10;
      break;

    case AQ_API_SIOM_USXGMII:
      dataWidth = 32;
      break;

    case AQ_API_SIOM_MAC:
    case AQ_API_SIOM_OFF:
    case AQ_API_SIOM_Other:
    case AQ_API_SIOM_XFI_5G:
    case AQ_API_SIOM_USX_5G:   
    case AQ_API_SIOM_XFI_20G:
    case AQ_API_SIOM_USX_20G:  
      return AQ_RET_SERDESEYE_BAD_SERDES_MODE;
  }

  /* Read the measCount. */
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      0x8097, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  measCount = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      0x8096, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  measCount |= (pifMailboxReadVal & 0xFF) << 8;
  if (measCount == 0) return AQ_RET_SERDESEYE_BAD_MEAS_COUNT;

  /* Determine the maximum number of possible errored bits */
  *maxErrors = dataWidth * measCount;


  /* Set the vertical coordinate of the selected data point. */
  if (y < 32) yAdjustment = 63 - y;
  else yAdjustment = y - 32;
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x22, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  serdesRegVal = (~(0x3f) & serdesRegVal) | yAdjustment;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x22, serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  /* Read the X code offset. */
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      0x827F, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  xCodeOffset = (serdesRegVal & 0x80) ? (serdesRegVal - 0x100) : serdesRegVal;

  /* Set the horizontal coordinate of the selected data point. */
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x21, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  serdesRegVal = (~(0x7f) & serdesRegVal) | (x + 47 - xCodeOffset);
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x21, serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  /* Perform measurements for the selected data point. */
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x1F, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x1F, (1 << 2) | serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  numDoneChecks = 0;
  while (1)
  {
    pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
        laneAddrOffset + 0x20, &pifMailboxReadVal);
    if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
    serdesRegVal = pifMailboxReadVal & 0xFF;
    done = (serdesRegVal >> 2) & 1;
    numDoneChecks++;

    if (done) break;

    if (numDoneChecks > AQ_SERDESEYE_MAX_DONE_CHECKS) 
      return AQ_RET_SERDESEYE_MEAS_TIMEOUT;
  }

  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x1F, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x1f, (~(1 << 2)) & serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  /* Read the number of errors for the measurement. */
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x26, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  *numErrors = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x25, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  *numErrors |= (pifMailboxReadVal & 0xFF) << 8;

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_EndSERDESRxEyeDiagram
(
  AQ_API_Port* port,
  const uint8_t lane
)
{
  unsigned int laneAddrOffset;
  unsigned int pifMailboxReadVal;
  uint8_t serdesRegVal;
  AQ_Retcode pifMailboxRetcode;


  if (lane > 3) return AQ_RET_SERDESEYE_LANE_OOR;

  laneAddrOffset = 0x2000 * AQ_API_GetSERDESInternalRxLane(port, lane);

  /* Clean up SERDES registers. */
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x57, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x57, 1 | serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
        
  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x56, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x56, (1 << 7) | serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x56, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  serdesRegVal = pifMailboxReadVal & 0xFF;
  pifMailboxRetcode = AQ_API_MDIO_Write_PIFMailbox(port, 0x1C, 
      laneAddrOffset + 0x56, (1 << 6) | serdesRegVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;

  return AQ_RET_OK;
}  

static AQ_Retcode sdRegRead(AQ_API_Port* port, uint16_t address, uint16_t* val)
{
  unsigned int pifMailboxReadVal;
  AQ_Retcode pifMailboxRetcode;


  pifMailboxRetcode = AQ_API_MDIO_Read_PIFMailbox(port, 0x1C,
    address, &pifMailboxReadVal);
  if (pifMailboxRetcode != AQ_RET_OK) return pifMailboxRetcode;
  *val = pifMailboxReadVal & 0xFFFF;
  return AQ_RET_OK;
}

static AQ_Retcode sdRegWrite(AQ_API_Port* port, uint16_t address, uint16_t val)
{
  return AQ_API_MDIO_Write_PIFMailbox(port, 0x1C,
    address, val);
}

/* Rambus SERDES functions */
static AQ_Retcode sdGetCdrDataSamplerPhaseOffset(AQ_API_Port* port, uint8_t* offset)
{
  AQ_Retcode sdRetCode;
  uint16_t val;

  /* Read CDR data sampler phase offset - cdroffset,adp. Lane Reg 0x38[14:8] */
  sdRetCode = sdRegRead(port, 0x38, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  *offset = (val & (0x7f << 8)) >> 8;
  
  return AQ_RET_OK;
}

static AQ_Retcode sdSetCdrDataSamplerPhaseOffset(AQ_API_Port* port, uint8_t offset)
{
  AQ_Retcode sdRetCode;
  uint16_t val = 0;

  /* Set CDR data sampler phase offset - cdroffset,adp. Lane Reg 0x38[14:8]
   * Is applied only if ovr is set first. sdSetCdrDataSamplerPhaseOffsetOvr()
  */
  sdRetCode = sdRegRead(port, 0x38, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  val &= ~(0x7f << 8);
  return sdRegWrite(port, 0x38, val | ((offset & 0x7f) << 8));
}

static AQ_Retcode sdSetCdrDataSamplerPhaseOffsetOvr(AQ_API_Port* port, uint8_t override)
{
  AQ_Retcode sdRetCode;
  uint16_t val;

  /* Override bit for CDR data sampler phase offset - cdroffset,adp_ovr. Lane Reg 0x38[15] */
  sdRetCode = sdRegRead(port, 0x38, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  val &= ~(0x1 << 15);
  return sdRegWrite(port, 0x38, val | ((override & 0x1) << 15));
}

static AQ_Retcode sdGetAdaptationSamplerOffset(AQ_API_Port* port, uint8_t* offset)
{
  AQ_Retcode sdRetCode;
  uint16_t val;
  
  /* Read adaptation sampler offset - dfectrl6,adpos. Lane Reg 0x94[8:1] */
  sdRetCode = sdRegRead(port, 0x94, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  *offset = (val & (0xff << 1)) >> 1;
  
  return AQ_RET_OK;
}

static AQ_Retcode sdSetAdaptationSamplerOffset(AQ_API_Port* port, uint8_t offset)
{
  AQ_Retcode sdRetCode;
  uint16_t val = 0;
  
  /* Set adaptation sampler offset - dfectrl6,adpos. Lane Reg 0x94[8:1]
   * Is applied only if ovr is set first. sdSetAdaptationSamplerOffsetOvr()
  */
  sdRetCode = sdRegRead(port, 0x94, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  val &= ~(0xff << 1);
  return sdRegWrite(port, 0x94, val | (offset << 1));
}

static AQ_Retcode sdSetAdaptationSamplerOffsetOvr(AQ_API_Port* port, uint8_t override)
{
  AQ_Retcode sdRetCode;
  uint16_t val;

  /* Set adaptation sampler offset - dfectrl6,adposovr. Lane Reg 0x94[0] */
  sdRetCode = sdRegRead(port, 0x94, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  val &= ~(0x1);
  return sdRegWrite(port, 0x94, val | (override & 0x1));
}

static AQ_Retcode sdSetAdaptationDacLatch(AQ_API_Port* port, uint8_t latch)
{
  AQ_Retcode sdRetCode;
  uint16_t val;

  /* Set adaptation DAC latch. Lane Reg 0x28[9] */
  sdRetCode = sdRegRead(port, 0x28, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  val &= ~(0x1 << 9);
  return sdRegWrite(port, 0x28, val | ((latch & 0x1) << 9));
}

static AQ_Retcode sdSetAdaptationDacLatchOvr(AQ_API_Port* port, uint8_t override)
{
  AQ_Retcode sdRetCode;
  uint16_t val;

  /* Set adaptation DAC latch. Lane Reg 0x28[8] */
  sdRetCode = sdRegRead(port, 0x28, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  val &= ~(0x1 << 8);
  return sdRegWrite(port, 0x28, val | ((override & 0x1) << 8));
}

static AQ_Retcode sdSetEscopeEnable(AQ_API_Port* port, uint8_t enable)
{
  AQ_Retcode sdRetCode;
  uint16_t val;

  /* Set escope enable. Lane Reg 0x28[0] */
  sdRetCode = sdRegRead(port, 0x28, &val);
  if (sdRetCode != AQ_RET_OK)
    return sdRetCode;
  val &= ~(0x1);
  return sdRegWrite(port, 0x28, val | (enable & 0x1));
}

static AQ_Retcode sdGetEscopeErrorCounter(AQ_API_Port* port, uint16_t* count)
{
  /* Escope error counter. Lane Reg 0x2A[15:0] */
  return sdRegRead(port, 0x2A, count);
}

AQ_Retcode AQ_API_EUR_BeginSERDESRxEyeDiagram
(
AQ_API_Port* port,
uint8_t* levelOffset,
uint8_t* phaseOffset
)
{
  AQ_Retcode sdRetCode;

  if (port->device != AQ_DEVICE_EUR &&
      port->device != AQ_DEVICE_CAL &&
      port->device != AQ_DEVICE_RHEA)
    return AQ_RET_ERROR;
  
  /* Read original sample level offset */
  if ((sdRetCode = sdGetAdaptationSamplerOffset(port, levelOffset)) /* dfectrl6,adpos */
      != AQ_RET_OK) return sdRetCode;
  
  /* Read original phase sample point */
  if ((sdRetCode = sdGetCdrDataSamplerPhaseOffset(port, phaseOffset)) /* cdroffset,adp */
      != AQ_RET_OK) return sdRetCode;
  
  /* EScope Mode enable */
  if ((sdRetCode = sdSetAdaptationSamplerOffsetOvr(port, 1)) /* adposovr 1 */
      != AQ_RET_OK ||
      (sdRetCode = sdSetAdaptationDacLatchOvr(port, 0)) /* dac_lat_ovr 0 */
      != AQ_RET_OK ||
      (sdRetCode = sdSetAdaptationDacLatch(port, 1)) /* dac_lat 1 */
      != AQ_RET_OK ||
      (sdRetCode = sdSetEscopeEnable(port, 1)) /* escope_en 1 */
      != AQ_RET_OK ||
      (sdRetCode = sdSetCdrDataSamplerPhaseOffsetOvr(port, 1)) /* adp_ovr 1 */
      != AQ_RET_OK)
    return sdRetCode;

  return AQ_RET_OK;
}

AQ_Retcode AQ_API_EUR_EndSERDESRxEyeDiagram
(
AQ_API_Port* port,
const uint8_t levelOffset,
const uint8_t phaseOffset
)
{
  AQ_Retcode retCode = AQ_RET_OK;
  AQ_Retcode sdRetCode;
  
  if (port->device != AQ_DEVICE_EUR &&
      port->device != AQ_DEVICE_CAL &&
      port->device != AQ_DEVICE_RHEA)
    return AQ_RET_ERROR;

  if ((sdRetCode = sdSetAdaptationSamplerOffset(port, levelOffset)) /* dfectrl6,adpos */
      != AQ_RET_OK) retCode = sdRetCode;
  if ((sdRetCode = sdSetAdaptationSamplerOffsetOvr(port, 0)) /* dfectrl6,adposovr */
      != AQ_RET_OK) retCode = sdRetCode;
  if ((sdRetCode = sdSetCdrDataSamplerPhaseOffset(port, phaseOffset)) /* cdroffset,adp */
      != AQ_RET_OK) retCode = sdRetCode;
  if ((sdRetCode = sdSetCdrDataSamplerPhaseOffsetOvr(port, 0)) /* cdroffset,adp_ovr */
      != AQ_RET_OK) retCode = sdRetCode;
  
  if ((sdRetCode = sdSetAdaptationDacLatchOvr(port, 1)) /* dac_lat_ovr 1 */
      != AQ_RET_OK) retCode = sdRetCode;
  if ((sdRetCode = sdSetAdaptationDacLatch(port, 0)) /* dac_lat 0 */
      != AQ_RET_OK) retCode = sdRetCode;
  if ((sdRetCode = sdSetAdaptationDacLatch(port, 1)) /* dac_lat 1 */
      != AQ_RET_OK) retCode = sdRetCode;
  if ((sdRetCode = sdSetAdaptationDacLatch(port, 0)) /* dac_lat 0 */
      != AQ_RET_OK) retCode = sdRetCode;
  if ((sdRetCode = sdSetAdaptationDacLatchOvr(port, 0)) /* dac_lat_ovr 0 */
      != AQ_RET_OK) retCode = sdRetCode;
  if ((sdRetCode = sdSetEscopeEnable(port, 0)) /* escope_en 0 */
      != AQ_RET_OK) retCode = sdRetCode;
  
  return retCode;
}

static AQ_Retcode SetSERDESRxEyeLevel
(
AQ_API_Port* port,
const uint8_t y
)
{
  int16_t levelOffset;

  AQ_Retcode sdRetCode;

  levelOffset = AQ_API_EUR_SERDESEYE_GRIDSIZE_Y / 2 - y;
  if (levelOffset < 0)
    levelOffset = 128 - levelOffset;
  if ((sdRetCode = sdSetAdaptationSamplerOffset(port, (uint8_t)levelOffset)) /* dfectrl6,adpos */
      != AQ_RET_OK ||
      (sdRetCode = sdSetAdaptationDacLatchOvr(port, 1)) /* dac_lat_ovr 1 */
      != AQ_RET_OK ||
      (sdRetCode = sdSetAdaptationDacLatchOvr(port, 0)) /* dac_lat_ovr 0 */
      != AQ_RET_OK)
    return sdRetCode;

  return sdRetCode;
}

static AQ_Retcode SetSERDESRxEyePhase
(
AQ_API_Port* port,
const uint8_t phaseOffsetOrg,
const uint8_t x
)
{
  const uint8_t CenterValue = 128;
  int16_t phaseInt;
  int8_t phaseOffsetOrg_int;
  AQ_Retcode sdRetCode;

  phaseOffsetOrg_int = (phaseOffsetOrg > 63) ? (phaseOffsetOrg - 128) :
      phaseOffsetOrg;
  phaseInt = CenterValue - AQ_API_EUR_SERDESEYE_GRIDSIZE_X / 2 + x;
  sdRetCode = sdSetCdrDataSamplerPhaseOffset(port, phaseInt + phaseOffsetOrg_int); /* cdroffset,adp */
  if (sdRetCode == AQ_RET_OK)
    AQ_API_Wait(10, port);
  return sdRetCode;
}

static AQ_Retcode GetSERDESRxEyeErrorCount
(
AQ_API_Port* port,
uint16_t* numErrors
)
{
  const uint32_t WaitTime = 10;
  uint16_t errorCount = 0;

  AQ_Retcode sdRetCode;

  /* clear errors */
  if ((sdRetCode = sdGetEscopeErrorCounter(port, &errorCount)) /* escount */
      != AQ_RET_OK)
    return sdRetCode;
  /* wait */
  AQ_API_Wait(WaitTime, port);

  if ((sdRetCode = sdGetEscopeErrorCounter(port, &errorCount)) /*escount */
      != AQ_RET_OK)
    return sdRetCode;

  *numErrors = errorCount;
  return sdRetCode;
}

AQ_Retcode AQ_API_EUR_GetSERDESRxEyeMeasurement
(
AQ_API_Port* port,
const uint8_t phaseOffsetOrg,
const uint8_t x,
const uint8_t y,
uint16_t* numErrors,
uint16_t* maxErrors
)
{
  AQ_Retcode retCode;

  if (port->device != AQ_DEVICE_EUR &&
      port->device != AQ_DEVICE_CAL &&
      port->device != AQ_DEVICE_RHEA)
    return AQ_RET_ERROR;
  
  if (x >= AQ_API_EUR_SERDESEYE_GRIDSIZE_X || y >= AQ_API_EUR_SERDESEYE_GRIDSIZE_Y)
    return AQ_RET_SERDESEYE_COORD_OOR;
  
  if ((retCode = SetSERDESRxEyeLevel(port, y))
      != AQ_RET_OK ||
      (retCode = SetSERDESRxEyePhase(port, phaseOffsetOrg, x))
      != AQ_RET_OK)
    return retCode;

  retCode = GetSERDESRxEyeErrorCount(port, numErrors);
  *maxErrors = 0xFFFF;
  return retCode;
}

AQ_Retcode AQ_API_EUR_CaptureSERDESRxEyeDiagram
(
AQ_API_Port*  port,
uint16_t*  numErrors,
AQ_Retcode*  retCodes,
const uint8_t yBufferSize,
const uint8_t xBufferSize,
const uint8_t yStepSize,
const uint8_t xStepSize,
uint8_t*  yCount,
uint8_t*  xCount,
uint16_t*  maxErrors
)
{
  uint8_t levelOffset, phaseOffset;
  unsigned int x, y;
  uint16_t errorCount;
  uint8_t rightOrder = 1;
  AQ_Retcode operationCode, retCode = AQ_RET_OK;
  

  if (port->device != AQ_DEVICE_EUR &&
      port->device != AQ_DEVICE_CAL &&
      port->device != AQ_DEVICE_RHEA)
    return AQ_RET_ERROR;

  *yCount = ((AQ_API_EUR_SERDESEYE_GRIDSIZE_Y + yStepSize - 1) / yStepSize);
  *xCount = ((AQ_API_EUR_SERDESEYE_GRIDSIZE_X + xStepSize - 1) / xStepSize);

  if (*yCount > yBufferSize || *xCount > xBufferSize)
    return AQ_RET_SERDESEYE_COORD_OOR;
  
  operationCode = AQ_API_EUR_BeginSERDESRxEyeDiagram(port, &levelOffset, &phaseOffset);
 
  if (operationCode == AQ_RET_OK) 
  {
    *maxErrors = 0xFFFF;
    for (y = 0; y < AQ_API_EUR_SERDESEYE_GRIDSIZE_Y; y += yStepSize)
    {
      operationCode = SetSERDESRxEyeLevel(port, y);
      if (operationCode == AQ_RET_OK)
      {
        /* @note snake through eye to avoid large step in phase offset at the end of the row */
        if (rightOrder)
          for (x = 0; x < AQ_API_EUR_SERDESEYE_GRIDSIZE_X; x += xStepSize)
          {
            if ((operationCode = SetSERDESRxEyePhase(port, phaseOffset, x)) == AQ_RET_OK &&
                (operationCode = GetSERDESRxEyeErrorCount(port, &errorCount)) == AQ_RET_OK) 
            {
              *((numErrors + y / yStepSize * xBufferSize) + x / xStepSize) = errorCount;
            }
            else
              retCode = operationCode;
            *((retCodes + y / yStepSize * xBufferSize) + x / xStepSize) = operationCode;
          }
        else
          for (x = (AQ_API_EUR_SERDESEYE_GRIDSIZE_X - 1) / xStepSize * xStepSize; 
              (int)x >= 0; x -= xStepSize)
          {
            if ((operationCode = SetSERDESRxEyePhase(port, phaseOffset, x)) == AQ_RET_OK &&
                (operationCode = GetSERDESRxEyeErrorCount(port, &errorCount)) == AQ_RET_OK)
            {
              *((numErrors + y / yStepSize * xBufferSize) + x / xStepSize) = errorCount;
            }
            else
              retCode = operationCode;
            *((retCodes + y / yStepSize * xBufferSize) + x / xStepSize) = operationCode;
          }
        rightOrder = !rightOrder;
      }
      else
      {
        retCode = operationCode;
        for (x = 0; x < AQ_API_EUR_SERDESEYE_GRIDSIZE_X; x += xStepSize)
          *((retCodes + y / yStepSize * xBufferSize) + x / xStepSize) = operationCode;
      }
    }
  }
  else
    retCode = operationCode;
  
  operationCode = AQ_API_EUR_EndSERDESRxEyeDiagram(port, levelOffset, phaseOffset);
  if (retCode == AQ_RET_OK) 
    retCode = operationCode;

  return retCode;
}

AQ_Retcode AQ_API_InitSerDesTestMode
(
  AQ_API_Port* port,
  AQ_API_SysIntfOpMode serdesMode
)
{
  AQ_Retcode ret;

  ret = AQ_API_EnableSerDesPRBSTestMode(port, serdesMode);
  if (ret != AQ_RET_OK)
    return ret;

  return AQ_API_EnsureSerDesUp(port);  
}

AQ_Retcode AQ_API_EnableSerDesPRBSTestMode
(
AQ_API_Port*  port,
AQ_API_SysIntfOpMode testModeConfiguration
)
{
  unsigned int testMode; 
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning)

  if (port->device != AQ_DEVICE_RHEA)
    return AQ_RET_UNSUPPORTED_DEVICE;

  switch(testModeConfiguration)
  {
    case AQ_API_SIOM_XFI:
      testMode = 0x0;
      break;
      
    case AQ_API_SIOM_SGMII:
      testMode = 0x3;
      break;

    case AQ_API_SIOM_OCSGMII:
      testMode = 0x4;
      break;

    case AQ_API_SIOM_XFI_20G:
      testMode = 0x7;
      break;

    default:
      return AQ_RET_UNSUPPORTED_SERDES_MODE;
  }

  /* REGDOC: Write bitfield (RHEA: 4.E414.7:4) */
  AQ_API_Set_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesTestModeConfiguration, testMode);
  /* REGDOC: Write bitfield (RHEA: 4.E414.3:0) */
  AQ_API_Set_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesTestMode, 0x1);

  return AQ_RET_OK;
}

AQ_Retcode AQ_API_SetPRBSPattern
(
AQ_API_Port*  port,
AQ_API_PRBS_Patterns pattern
)
{
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning)  

  /* REGDOC: Write bitfield (RHEA: 4.E415.3:0) */
  AQ_API_Set_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesPrbsTestPattern, pattern);
  return AQ_RET_OK;
}

AQ_Retcode AQ_API_EnsureSerDesUp
(
AQ_API_Port*  port
)
{
  uint16_t rxLinkUp;
  unsigned int counter;

  AQ_API_Variable_DeviceRestricted(RHEA, AQ_PhyXS_SystemInterfaceConnectionStatus)
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning)

  /* Check if system interface rx ready */
  AQ_API_Wait(100, port);
  /* REGDOC: Read bitfield (RHEA: 04.E812.D) */
  AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_SystemInterfaceConnectionStatus, 
      rxLinkUp, rxLinkUp);
  
  if (!rxLinkUp)
  {
    /* REGDOC: Write bitfield (RHEA: 4.E414.F) */
    AQ_API_Adjust_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesForceRxLinkRecovery, 0);
    AQ_API_Wait(1, port);
    /* REGDOC: Write bitfield (RHEA: 4.E414.F) */
    AQ_API_Adjust_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesForceRxLinkRecovery, 1);
    AQ_API_Wait(1, port);
    /* REGDOC: Write bitfield (RHEA: 4.E414.F) */
    AQ_API_Adjust_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesForceRxLinkRecovery, 0);

    counter = 0;
    while (!rxLinkUp)
    {
      if (counter < MAX_RX_LINK_CHECKS)
      {
        /* REGDOC: Read bitfield (RHEA: 04.E812.D) */
        AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_SystemInterfaceConnectionStatus, 
            rxLinkUp, rxLinkUp);
        counter++;
        AQ_API_Wait(1, port);
      }
      else
      {
        #ifdef AQ_VERBOSE
          AQ_API_Print("Timed out getting a SerDes Rx link");
        #endif

        return AQ_RET_ERROR;
      }      
    }
  }
  return AQ_RET_OK;
}



AQ_Retcode AQ_API_InjectPRBSError
(
AQ_API_Port*  port
)
{
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning)

  /* REGDOC: Write bitfield (RHEA: 4.E415.5) */
  AQ_API_Adjust_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesPrbsBitErrorInjector, 1);

  return AQ_RET_OK;
}

AQ_Retcode AQ_API_PRBSBitErrorCount
(
AQ_API_Port*  port,
uint16_t* errorCount
)
{
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_PhyXS_Receive_xauiTx_ReservedVendorState)

  /* REGDOC: Read bitfield (RHEA: 4.E811.E:0) */
  AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorState, serdesPrbsBitErrorCount, *errorCount);

  return AQ_RET_OK;
}

AQ_Retcode AQ_API_ClearPRBSCounter
(
AQ_API_Port*  port
)
{
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning)

  /* REGDOC: Write bitfield (RHEA: 4.E415.5) */
  AQ_API_Adjust_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesPrbsForceSyncPatternMonitor, 1);

  return AQ_RET_OK;
}

AQ_Retcode AQ_API_DisableSerDesTestMode
(
AQ_API_Port*  port
)
{
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning)

  /* REGDOC: Write bitfield (RHEA: 4.E415.3:0) */
  AQ_API_Set_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesPrbsTestPattern, 0x0);
  /* REGDOC: Write bitfield (RHEA: 4.E414.3:0) */
  AQ_API_Set_DeviceRestricted(RHEA, port->PHY_ID, AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning, serdesTestMode, 0x0);

  return AQ_RET_OK;
}


AQ_Retcode  AQ_API_GetFOM_RHEA 
(    
 AQ_API_Port*  port,
 uint16_t* fom 
)
{
  AQ_API_Variable_DeviceRestricted(RHEA, AQ_SerdesRcvrAdaptation)

  /* REGDOC: Read bitfield (RHEA: 1E.A074.F:8) */
  AQ_API_Get_DeviceRestricted(RHEA, port->PHY_ID, AQ_SerdesRcvrAdaptation, rx0AdaptFom, *fom);
  return AQ_RET_OK;
}


/*@}*/


/**********************************************************************************************************************
*                                               MACSEC config and status
**********************************************************************************************************************/

/*! \addtogroup mACsec
  @{
*/


/*! Write packedRecVal to the specified Ingress LUT table row. */
AQ_Retcode AQ_API_SetRawSECIngressRecordVal
(
  /*! The target PHY port.*/
  AQ_API_Port* port,
  /*! [IN] Array of 16 bit words to be written to the table row. */
  uint16_t* packedRecVal,
  /*! Number of 16-bit words in packedRecVal. */
  uint8_t numWords, 
  /*! Specifies the table to be written to. */
  uint8_t tableID, 
  /*! Specifies the row to be written to. */
  uint16_t tableIndex
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutAddressControlRegister, tableSelReg)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutControlRegister, readWriteReg)

  unsigned int i;
  AQ_Retcode retval;

  /* NOTE: MSS registers must always be read/written as adjacent pairs.
   * For instance, to write either or both 1E.80A0 and 1E.80A1, we have to:
   * 1. Write 1E.80A0 first
   * 2. Then write 1E.80A1 
   *
   * For HHD devices: These writes need to be performed consecutively, and 
   * to ensure this we use the PIF mailbox to delegate the reads/writes to 
   * the FW. 
   *
   * For EUR devices: Not need to use the PIF mailbox; it is safe to
   * write to the registers directly.
   * */

  /* Write the packed record words to the data buffer registers. */
  for (i = 0; i < numWords; i += 2)
  {
    switch (port->device)
    {    
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
            AQ_MssIngressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssIngressLutDataControlRegister_HHD_baseRegisterAddress + i, 
            packedRecVal[i],
            AQ_MssIngressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssIngressLutDataControlRegister_HHD_baseRegisterAddress + i + 1, 
            packedRecVal[i + 1]);
        if (retval != AQ_RET_OK) return retval;
        break;

      case AQ_DEVICE_EUR:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssIngressLutDataControlRegister_EUR_baseRegisterAddress + i, 
            packedRecVal[i]);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssIngressLutDataControlRegister_EUR_baseRegisterAddress + i + 1, 
            packedRecVal[i + 1]);
        break;

      case AQ_DEVICE_CAL:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssIngressLutDataControlRegister_CAL_baseRegisterAddress + i, 
            packedRecVal[i]);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssIngressLutDataControlRegister_CAL_baseRegisterAddress + i + 1, 
            packedRecVal[i + 1]);
        break;

        case AQ_DEVICE_RHEA:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssIngressLutDataControlRegister_RHEA_baseRegisterAddress + i, 
            packedRecVal[i]);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssIngressLutDataControlRegister_RHEA_baseRegisterAddress + i + 1, 
            packedRecVal[i + 1]);
        break;
    }
  }

  /* Clear out the unused data buffer registers. */
  for (i = numWords; i < 24; i += 2)
  {
    switch (port->device)
    {    
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
            AQ_MssIngressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssIngressLutDataControlRegister_HHD_baseRegisterAddress + i, 
            0,
            AQ_MssIngressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssIngressLutDataControlRegister_HHD_baseRegisterAddress + i + 1, 
            0);
        if (retval != AQ_RET_OK) return retval;
        break;

      case AQ_DEVICE_EUR:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssIngressLutDataControlRegister_EUR_baseRegisterAddress + i, 
            0);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssIngressLutDataControlRegister_EUR_baseRegisterAddress + i + 1, 
            0);
        break;

      case AQ_DEVICE_CAL:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssIngressLutDataControlRegister_CAL_baseRegisterAddress + i, 
            0);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssIngressLutDataControlRegister_CAL_baseRegisterAddress + i + 1, 
            0);
        break;

      case AQ_DEVICE_RHEA:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssIngressLutDataControlRegister_RHEA_baseRegisterAddress + i, 
            0);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssIngressLutDataControlRegister_RHEA_baseRegisterAddress + i + 1, 
            0);
        break;
    }
  }

  /* Select the table and row index to write to */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.8080.F:C) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutAddressControlRegister, tableSelReg, mssIngressLutSelect, tableID);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.8080.8:0) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutAddressControlRegister, tableSelReg, mssIngressLutAddress, tableIndex);

  /* Set the write bit to copy the raw record data buffer into the table */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.8081.E) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutControlRegister, readWriteReg, mssIngressLutRead, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.8081.F) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutControlRegister, readWriteReg, mssIngressLutWrite, 1);

  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssIngressLutAddressControlRegister_HHD_mmdAddress,
          AQ_MssIngressLutAddressControlRegister_HHD_baseRegisterAddress, 
          tableSelReg_HHD->u0.word_0,
          AQ_MssIngressLutControlRegister_HHD_mmdAddress,
          AQ_MssIngressLutControlRegister_HHD_baseRegisterAddress, 
          readWriteReg_HHD->u0.word_0);
      if (retval != AQ_RET_OK) return retval;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.8080) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressLutAddressControlRegister, 
          0, AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, tableSelReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.8081) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressLutControlRegister, 
          0, AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, readWriteReg, 0));
      break;
  }

  return AQ_RET_OK;
}


/*! Read the specified Ingress LUT table row.  packedRecVal holds the row data. */
AQ_Retcode AQ_API_GetRawSECIngressRecordVal
(
  /*! The target PHY port.*/
  AQ_API_Port* port,
  /*! [OUT] Array of 16 bit words holding the results of reading the table row. */
  uint16_t* packedRecVal,
  /*! Number of 16-bit words in packedRecVal. */
  uint8_t numWords,
  /*! Specifies the table to be read from. */
  uint8_t tableID, 
  /*! Specifies the row to be read from. */
  uint16_t tableIndex
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutAddressControlRegister, tableSelReg)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutControlRegister, readWriteReg)

  unsigned int i;
  AQ_Retcode retval;
  unsigned int word0 = 0, word1 = 0;

  /* NOTE: MSS registers must always be read/written as adjacent pairs.
   * For instance, to write either or both 1E.80A0 and 1E.80A1, we have to:
   * 1. Write 1E.80A0 first
   * 2. Then write 1E.80A1 
   *
   * For HHD devices: These writes need to be performed consecutively, and 
   * to ensure this we use the PIF mailbox to delegate the reads/writes to 
   * the FW. 
   *
   * For EUR devices: Not need to use the PIF mailbox; it is safe to
   * write to the registers directly.
   * */

  /* Select the table and row index to read */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.8080.F:C) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutAddressControlRegister, tableSelReg, mssIngressLutSelect, tableID);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.8080.8:0) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutAddressControlRegister, tableSelReg, mssIngressLutAddress, tableIndex);

  /* Set the read bit to copy the table record into the raw record data buffer
   * registers. */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.8081.E) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutControlRegister, readWriteReg, mssIngressLutRead, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.8081.F) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressLutControlRegister, readWriteReg, mssIngressLutWrite, 0);

  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssIngressLutAddressControlRegister_HHD_mmdAddress,
          AQ_MssIngressLutAddressControlRegister_HHD_baseRegisterAddress, 
          tableSelReg_HHD->u0.word_0,
          AQ_MssIngressLutControlRegister_HHD_mmdAddress,
          AQ_MssIngressLutControlRegister_HHD_baseRegisterAddress, 
          readWriteReg_HHD->u0.word_0);
      if (retval != AQ_RET_OK) return retval;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.8080) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressLutAddressControlRegister, 
          0, AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, tableSelReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.8081) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressLutControlRegister, 
          0, AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, readWriteReg, 0));
      break;
  }
  
  memset(packedRecVal, 0, sizeof(uint16_t) * numWords);

  /* Read the data buffer registers into the packed record words. */
  for (i = 0; i < numWords; i += 2)
  {
    switch (port->device)
    {    
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        retval = AQ_API_MDIO_Read_PIFMailbox2(port, 
            AQ_MssIngressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssIngressLutDataControlRegister_HHD_baseRegisterAddress + i, 
            &word0,
            AQ_MssIngressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssIngressLutDataControlRegister_HHD_baseRegisterAddress + i + 1, 
            &word1);
        packedRecVal[i] = word0;
        packedRecVal[i + 1] = word1;
        if (retval != AQ_RET_OK) return retval;
        break;

      case AQ_DEVICE_EUR:
        packedRecVal[i] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssIngressLutDataControlRegister_EUR_baseRegisterAddress + i);
        packedRecVal[i + 1] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssIngressLutDataControlRegister_EUR_baseRegisterAddress + i + 1);
        break;

      case AQ_DEVICE_CAL:
        packedRecVal[i] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssIngressLutDataControlRegister_CAL_baseRegisterAddress + i);
        packedRecVal[i + 1] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssIngressLutDataControlRegister_CAL_baseRegisterAddress + i + 1);
        break;

      case AQ_DEVICE_RHEA:
        packedRecVal[i] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssIngressLutDataControlRegister_RHEA_baseRegisterAddress + i);
        packedRecVal[i + 1] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssIngressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssIngressLutDataControlRegister_RHEA_baseRegisterAddress + i + 1);
        break;

    }
  }

  return AQ_RET_OK;
}


/*! Write packedRecVal to the specified Egress LUT table row. */
AQ_Retcode AQ_API_SetRawSECEgressRecordVal
(
  /*! The target PHY port.*/
  AQ_API_Port* port,
  /*! [IN] Array of 16 bit words to be written to the table row. */
  uint16_t* packedRecVal,
  /*! Number of 16-bit words in packedRecVal. */
  uint8_t numWords, 
  /*! Specifies the table to be written to. */
  uint8_t tableID, 
  /*! Specifies the row to be written to. */
  uint16_t tableIndex
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutAddressControlRegister, tableSelReg)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutControlRegister, readWriteReg)

  unsigned int i;
  AQ_Retcode retval;

  /* NOTE: MSS registers must always be read/written as adjacent pairs.
   * For instance, to write either or both 1E.80A0 and 1E.80A1, we have to:
   * 1. Write 1E.80A0 first
   * 2. Then write 1E.80A1 
   *
   * For HHD devices: These writes need to be performed consecutively, and 
   * to ensure this we use the PIF mailbox to delegate the reads/writes to 
   * the FW. 
   *
   * For EUR devices: Not need to use the PIF mailbox; it is safe to
   * write to the registers directly.
   * */

  /* Write the packed record words to the data buffer registers. */
  for (i = 0; i < numWords; i += 2)
  {
    switch (port->device)
    {    
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
            AQ_MssEgressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssEgressLutDataControlRegister_HHD_baseRegisterAddress + i, 
            packedRecVal[i],
            AQ_MssEgressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssEgressLutDataControlRegister_HHD_baseRegisterAddress + i + 1, 
            packedRecVal[i + 1]);
        if (retval != AQ_RET_OK) return retval;
        break;

      case AQ_DEVICE_EUR:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssEgressLutDataControlRegister_EUR_baseRegisterAddress + i, 
            packedRecVal[i]);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssEgressLutDataControlRegister_EUR_baseRegisterAddress + i + 1, 
            packedRecVal[i + 1]);
        break;

      case AQ_DEVICE_CAL:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssEgressLutDataControlRegister_CAL_baseRegisterAddress + i, 
            packedRecVal[i]);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssEgressLutDataControlRegister_CAL_baseRegisterAddress + i + 1, 
            packedRecVal[i + 1]);
        break;

      case AQ_DEVICE_RHEA:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssEgressLutDataControlRegister_RHEA_baseRegisterAddress + i, 
            packedRecVal[i]);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssEgressLutDataControlRegister_RHEA_baseRegisterAddress + i + 1, 
            packedRecVal[i + 1]);
        break;
    }
  }

  /* Clear out the unused data buffer registers. */
  for (i = numWords; i < 28; i += 2)
  {
    switch (port->device)
    {    
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
            AQ_MssEgressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssEgressLutDataControlRegister_HHD_baseRegisterAddress + i, 
            0,
            AQ_MssEgressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssEgressLutDataControlRegister_HHD_baseRegisterAddress + i + 1, 
            0);
        if (retval != AQ_RET_OK) return retval;
        break;

      case AQ_DEVICE_EUR:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssEgressLutDataControlRegister_EUR_baseRegisterAddress + i, 
            0);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssEgressLutDataControlRegister_EUR_baseRegisterAddress + i + 1, 
            0);
        break;

      case AQ_DEVICE_CAL:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssEgressLutDataControlRegister_CAL_baseRegisterAddress + i, 
            0);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssEgressLutDataControlRegister_CAL_baseRegisterAddress + i + 1, 
            0);
        break;

      case AQ_DEVICE_RHEA:
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssEgressLutDataControlRegister_RHEA_baseRegisterAddress + i, 
            0);
        AQ_API_MDIO_Write(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssEgressLutDataControlRegister_RHEA_baseRegisterAddress + i + 1, 
            0);
        break;
    }
  }

  /* Select the table and row index to write to */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.5080.F:C) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutAddressControlRegister, tableSelReg, mssEgressLutSelect, tableID);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.5080.8:0) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutAddressControlRegister, tableSelReg, mssEgressLutAddress, tableIndex);

  /* Set the write bit to copy the raw record data buffer into the table */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.5081.E) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutControlRegister, readWriteReg, mssEgressLutRead, 0);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.5081.F) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutControlRegister, readWriteReg, mssEgressLutWrite, 1);

  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssEgressLutAddressControlRegister_HHD_mmdAddress,
          AQ_MssEgressLutAddressControlRegister_HHD_baseRegisterAddress, 
          tableSelReg_HHD->u0.word_0,
          AQ_MssEgressLutControlRegister_HHD_mmdAddress,
          AQ_MssEgressLutControlRegister_HHD_baseRegisterAddress, 
          readWriteReg_HHD->u0.word_0);
      if (retval != AQ_RET_OK) return retval;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5080) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressLutAddressControlRegister, 
          0, AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, tableSelReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5081) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressLutControlRegister, 
          0, AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, readWriteReg, 0));
      break;
  }

  return AQ_RET_OK;
}


/*! Read the specified Egress LUT table row.  packedRecVal holds the row data. */
AQ_Retcode AQ_API_GetRawSECEgressRecordVal
(
  /*! The target PHY port.*/
  AQ_API_Port* port,
  /*! [OUT] Array of 16 bit words holding the results of reading the table row. */
  uint16_t* packedRecVal,
  /*! Number of 16-bit words in packedRecVal. */
  uint8_t numWords,
  /*! Specifies the table to be read from. */
  uint8_t tableID, 
  /*! Specifies the row to be read from. */
  uint16_t tableIndex
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutAddressControlRegister, tableSelReg)
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutControlRegister, readWriteReg)

  unsigned int i;
  AQ_Retcode retval;
  unsigned int word0 = 0, word1 = 0;

  /* NOTE: MSS registers must always be read/written as adjacent pairs.
   * For instance, to write either or both 1E.80A0 and 1E.80A1, we have to:
   * 1. Write 1E.80A0 first
   * 2. Then write 1E.80A1 
   *
   * For HHD devices: These writes need to be performed consecutively, and 
   * to ensure this we use the PIF mailbox to delegate the reads/writes to 
   * the FW. 
   *
   * For EUR devices: Not need to use the PIF mailbox; it is safe to
   * write to the registers directly.
   * */

  /* Select the table and row index to read */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.5080.F:C) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutAddressControlRegister, tableSelReg, mssEgressLutSelect, tableID);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.5080.8:0) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutAddressControlRegister, tableSelReg, mssEgressLutAddress, tableIndex);

  /* Set the read bit to copy the table record into the raw record data buffer
   * registers. */
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.5081.E) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutControlRegister, readWriteReg, mssEgressLutRead, 1);
  /* REGDOC: Assign to local representation of bitfield (HHD/EUR/CAL/RHEA: 1E.5081.F) */
  AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressLutControlRegister, readWriteReg, mssEgressLutWrite, 0);

  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssEgressLutAddressControlRegister_HHD_mmdAddress,
          AQ_MssEgressLutAddressControlRegister_HHD_baseRegisterAddress, 
          tableSelReg_HHD->u0.word_0,
          AQ_MssEgressLutControlRegister_HHD_mmdAddress,
          AQ_MssEgressLutControlRegister_HHD_baseRegisterAddress, 
          readWriteReg_HHD->u0.word_0);
      if (retval != AQ_RET_OK) return retval;
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5080) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressLutAddressControlRegister, 
          0, AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, tableSelReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5081) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressLutControlRegister, 
          0, AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, readWriteReg, 0));
      break;
  }
  
  memset(packedRecVal, 0, sizeof(uint16_t) * numWords);

  /* Read the data buffer registers into the packed record words. */
  for (i = 0; i < numWords; i += 2)
  {
    switch (port->device)
    {    
      case AQ_DEVICE_APPIA:
      case AQ_DEVICE_HHD:
        retval = AQ_API_MDIO_Read_PIFMailbox2(port, 
            AQ_MssEgressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssEgressLutDataControlRegister_HHD_baseRegisterAddress + i, 
            &word0,
            AQ_MssEgressLutDataControlRegister_HHD_mmdAddress,
            AQ_MssEgressLutDataControlRegister_HHD_baseRegisterAddress + i + 1, 
            &word1);
        packedRecVal[i] = word0;
        packedRecVal[i + 1] = word1;
        if (retval != AQ_RET_OK) return retval;
        break;

      case AQ_DEVICE_EUR:
        packedRecVal[i] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssEgressLutDataControlRegister_EUR_baseRegisterAddress + i);
        packedRecVal[i + 1] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_EUR_mmdAddress,
            AQ_MssEgressLutDataControlRegister_EUR_baseRegisterAddress + i + 1);
        break;

      case AQ_DEVICE_CAL:
        packedRecVal[i] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssEgressLutDataControlRegister_CAL_baseRegisterAddress + i);
        packedRecVal[i + 1] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_CAL_mmdAddress,
            AQ_MssEgressLutDataControlRegister_CAL_baseRegisterAddress + i + 1);
        break;

      case AQ_DEVICE_RHEA:
        packedRecVal[i] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssEgressLutDataControlRegister_RHEA_baseRegisterAddress + i);
        packedRecVal[i + 1] = AQ_API_MDIO_Read(port->PHY_ID, 
            AQ_MssEgressLutDataControlRegister_RHEA_mmdAddress,
            AQ_MssEgressLutDataControlRegister_RHEA_baseRegisterAddress + i + 1);
        break;
    }
  }

  return AQ_RET_OK;
}


#define AQ_API_NUMROWS_INGRESSPRECTLFRECORD 24
#define AQ_API_ROWOFFSET_INGRESSPRECTLFRECORD 0

#define AQ_API_NUMROWS_INGRESSPRECLASSRECORD 48
#define AQ_API_ROWOFFSET_INGRESSPRECLASSRECORD 0

#define AQ_API_NUMROWS_INGRESSPOSTCLASSRECORD 48
#define AQ_API_ROWOFFSET_INGRESSPOSTCLASSRECORD 0

#define AQ_API_NUMROWS_INGRESSSCRECORD 32
#define AQ_API_ROWOFFSET_INGRESSSCRECORD 0
 
#define AQ_API_NUMROWS_INGRESSSARECORD 32
#define AQ_API_ROWOFFSET_INGRESSSARECORD 32

#define AQ_API_NUMROWS_INGRESSSAKEYRECORD 32
#define AQ_API_ROWOFFSET_INGRESSSAKEYRECORD 0

#define AQ_API_NUMROWS_INGRESSPOSTCTLFRECORD 24
#define AQ_API_ROWOFFSET_INGRESSPOSTCTLFRECORD 0

#define AQ_API_NUMROWS_EGRESSCTLFRECORD 24
#define AQ_API_ROWOFFSET_EGRESSCTLFRECORD 0

#define AQ_API_NUMROWS_EGRESSCLASSRECORD 48
#define AQ_API_ROWOFFSET_EGRESSCLASSRECORD 0

#define AQ_API_NUMROWS_EGRESSSCRECORD 32
#define AQ_API_ROWOFFSET_EGRESSSCRECORD 0

#define AQ_API_NUMROWS_EGRESSSARECORD 32
#define AQ_API_ROWOFFSET_EGRESSSARECORD 32

#define AQ_API_NUMROWS_EGRESSSAKEYRECORD 32
#define AQ_API_ROWOFFSET_EGRESSSAKEYRECORD 96


/* Start packfuncs */

AQ_Retcode AQ_API_SetIngressPreCTLFRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_IngressPreCTLFRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[6];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSPRECTLFRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 6);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->sa_da[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->sa_da[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->sa_da[1] >> 0) & 0xFFFF) << 0);

  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->eth_type >> 0) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0x0000) | (((rec->match_mask >> 0) & 0xFFFF) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0xFFF0) | (((rec->match_type >> 0) & 0xF) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0xFFEF) | (((rec->action >> 0) & 0x1) << 4);


  AQ_API_SetRawSECIngressRecordVal(port, packedRecVal, 6, 0, AQ_API_ROWOFFSET_INGRESSPRECTLFRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressPreCTLFRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressPreCTLFRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[6];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSPRECTLFRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  switch (port->device) 
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* If the row that we want to read is odd, first read the previous even 
       * row, throw that value away, and finally read the desired row.
       * This is a workaround for EUR devices that allows us to read 
       * odd-numbered rows.  For HHD devices: this workaround will not work, 
       * so don't bother; odd-numbered rows are not readable. */
      if ((tableIndex % 2) > 0)
      {
        AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 6, 0, 
            AQ_API_ROWOFFSET_INGRESSPRECTLFRECORD + tableIndex - 1);
      }
      break;
  }

  memset(rec, 0, sizeof(AQ_API_SEC_IngressPreCTLFRecord));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 6, 0, AQ_API_ROWOFFSET_INGRESSPRECTLFRECORD + tableIndex);

  rec->sa_da[0] = (rec->sa_da[0] & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->sa_da[0] = (rec->sa_da[0] & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->sa_da[1] = (rec->sa_da[1] & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);

  rec->eth_type = (rec->eth_type & 0xFFFF0000) | (((packedRecVal[3] >> 0) & 0xFFFF) << 0);

  rec->match_mask = (rec->match_mask & 0xFFFF0000) | (((packedRecVal[4] >> 0) & 0xFFFF) << 0);

  rec->match_type = (rec->match_type & 0xFFFFFFF0) | (((packedRecVal[5] >> 0) & 0xF) << 0);

  rec->action = (rec->action & 0xFFFFFFFE) | (((packedRecVal[5] >> 4) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetIngressPreClassRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_IngressPreClassRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[20];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSPRECLASSRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 20);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->sci[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->sci[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->sci[1] >> 0) & 0xFFFF) << 0);
  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->sci[1] >> 16) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0xFF00) | (((rec->tci >> 0) & 0xFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0x00FF) | (((rec->encr_offset >> 0) & 0xFF) << 8);

  packedRecVal[5] = (packedRecVal[5] & 0x0000) | (((rec->eth_type >> 0) & 0xFFFF) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0x0000) | (((rec->snap[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[7] = (packedRecVal[7] & 0x0000) | (((rec->snap[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[8] = (packedRecVal[8] & 0xFF00) | (((rec->snap[1] >> 0) & 0xFF) << 0);

  packedRecVal[8] = (packedRecVal[8] & 0x00FF) | (((rec->llc >> 0) & 0xFF) << 8);
  packedRecVal[9] = (packedRecVal[9] & 0x0000) | (((rec->llc >> 8) & 0xFFFF) << 0);

  packedRecVal[10] = (packedRecVal[10] & 0x0000) | (((rec->mac_sa[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[11] = (packedRecVal[11] & 0x0000) | (((rec->mac_sa[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[12] = (packedRecVal[12] & 0x0000) | (((rec->mac_sa[1] >> 0) & 0xFFFF) << 0);

  packedRecVal[13] = (packedRecVal[13] & 0x0000) | (((rec->mac_da[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[14] = (packedRecVal[14] & 0x0000) | (((rec->mac_da[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[15] = (packedRecVal[15] & 0x0000) | (((rec->mac_da[1] >> 0) & 0xFFFF) << 0);

  packedRecVal[16] = (packedRecVal[16] & 0xFFFE) | (((rec->lpbk_packet >> 0) & 0x1) << 0);

  packedRecVal[16] = (packedRecVal[16] & 0xFFF9) | (((rec->an_mask >> 0) & 0x3) << 1);

  packedRecVal[16] = (packedRecVal[16] & 0xFE07) | (((rec->tci_mask >> 0) & 0x3F) << 3);

  packedRecVal[16] = (packedRecVal[16] & 0x01FF) | (((rec->sci_mask >> 0) & 0x7F) << 9);
  packedRecVal[17] = (packedRecVal[17] & 0xFFFE) | (((rec->sci_mask >> 7) & 0x1) << 0);

  packedRecVal[17] = (packedRecVal[17] & 0xFFF9) | (((rec->eth_type_mask >> 0) & 0x3) << 1);

  packedRecVal[17] = (packedRecVal[17] & 0xFF07) | (((rec->snap_mask >> 0) & 0x1F) << 3);

  packedRecVal[17] = (packedRecVal[17] & 0xF8FF) | (((rec->llc_mask >> 0) & 0x7) << 8);

  packedRecVal[17] = (packedRecVal[17] & 0xF7FF) | (((rec->_802_2_encapsulate >> 0) & 0x1) << 11);

  packedRecVal[17] = (packedRecVal[17] & 0x0FFF) | (((rec->sa_mask >> 0) & 0xF) << 12);
  packedRecVal[18] = (packedRecVal[18] & 0xFFFC) | (((rec->sa_mask >> 4) & 0x3) << 0);

  packedRecVal[18] = (packedRecVal[18] & 0xFF03) | (((rec->da_mask >> 0) & 0x3F) << 2);

  packedRecVal[18] = (packedRecVal[18] & 0xFEFF) | (((rec->lpbk_mask >> 0) & 0x1) << 8);

  packedRecVal[18] = (packedRecVal[18] & 0xC1FF) | (((rec->sc_idx >> 0) & 0x1F) << 9);

  packedRecVal[18] = (packedRecVal[18] & 0xBFFF) | (((rec->proc_dest >> 0) & 0x1) << 14);

  packedRecVal[18] = (packedRecVal[18] & 0x7FFF) | (((rec->action >> 0) & 0x1) << 15);
  packedRecVal[19] = (packedRecVal[19] & 0xFFFE) | (((rec->action >> 1) & 0x1) << 0);

  packedRecVal[19] = (packedRecVal[19] & 0xFFFD) | (((rec->ctrl_unctrl >> 0) & 0x1) << 1);

  packedRecVal[19] = (packedRecVal[19] & 0xFFFB) | (((rec->sci_from_table >> 0) & 0x1) << 2);

  packedRecVal[19] = (packedRecVal[19] & 0xFF87) | (((rec->reserved >> 0) & 0xF) << 3);

  packedRecVal[19] = (packedRecVal[19] & 0xFF7F) | (((rec->valid >> 0) & 0x1) << 7);


  AQ_API_SetRawSECIngressRecordVal(port, packedRecVal, 20, 1, AQ_API_ROWOFFSET_INGRESSPRECLASSRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressPreClassRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressPreClassRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[20];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSPRECLASSRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  switch (port->device) 
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* If the row that we want to read is odd, first read the previous even 
       * row, throw that value away, and finally read the desired row.
       * This is a workaround for EUR devices that allows us to read 
       * odd-numbered rows.  For HHD devices: this workaround will not work, 
       * so don't bother; odd-numbered rows are not readable. */
      if ((tableIndex % 2) > 0)
      {
        AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 20, 1, 
            AQ_API_ROWOFFSET_INGRESSPRECLASSRECORD + tableIndex - 1);
      }
      break;
  }

  memset(rec, 0, sizeof(AQ_API_SEC_IngressPreClassRecord));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 20, 1, AQ_API_ROWOFFSET_INGRESSPRECLASSRECORD + tableIndex);

  rec->sci[0] = (rec->sci[0] & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->sci[0] = (rec->sci[0] & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->sci[1] = (rec->sci[1] & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);
  rec->sci[1] = (rec->sci[1] & 0x0000FFFF) | (((packedRecVal[3] >> 0) & 0xFFFF) << 16);

  rec->tci = (rec->tci & 0xFFFFFF00) | (((packedRecVal[4] >> 0) & 0xFF) << 0);

  rec->encr_offset = (rec->encr_offset & 0xFFFFFF00) | (((packedRecVal[4] >> 8) & 0xFF) << 0);

  rec->eth_type = (rec->eth_type & 0xFFFF0000) | (((packedRecVal[5] >> 0) & 0xFFFF) << 0);

  rec->snap[0] = (rec->snap[0] & 0xFFFF0000) | (((packedRecVal[6] >> 0) & 0xFFFF) << 0);
  rec->snap[0] = (rec->snap[0] & 0x0000FFFF) | (((packedRecVal[7] >> 0) & 0xFFFF) << 16);

  rec->snap[1] = (rec->snap[1] & 0xFFFFFF00) | (((packedRecVal[8] >> 0) & 0xFF) << 0);

  rec->llc = (rec->llc & 0xFFFFFF00) | (((packedRecVal[8] >> 8) & 0xFF) << 0);
  rec->llc = (rec->llc & 0xFF0000FF) | (((packedRecVal[9] >> 0) & 0xFFFF) << 8);

  rec->mac_sa[0] = (rec->mac_sa[0] & 0xFFFF0000) | (((packedRecVal[10] >> 0) & 0xFFFF) << 0);
  rec->mac_sa[0] = (rec->mac_sa[0] & 0x0000FFFF) | (((packedRecVal[11] >> 0) & 0xFFFF) << 16);

  rec->mac_sa[1] = (rec->mac_sa[1] & 0xFFFF0000) | (((packedRecVal[12] >> 0) & 0xFFFF) << 0);

  rec->mac_da[0] = (rec->mac_da[0] & 0xFFFF0000) | (((packedRecVal[13] >> 0) & 0xFFFF) << 0);
  rec->mac_da[0] = (rec->mac_da[0] & 0x0000FFFF) | (((packedRecVal[14] >> 0) & 0xFFFF) << 16);

  rec->mac_da[1] = (rec->mac_da[1] & 0xFFFF0000) | (((packedRecVal[15] >> 0) & 0xFFFF) << 0);

  rec->lpbk_packet = (rec->lpbk_packet & 0xFFFFFFFE) | (((packedRecVal[16] >> 0) & 0x1) << 0);

  rec->an_mask = (rec->an_mask & 0xFFFFFFFC) | (((packedRecVal[16] >> 1) & 0x3) << 0);

  rec->tci_mask = (rec->tci_mask & 0xFFFFFFC0) | (((packedRecVal[16] >> 3) & 0x3F) << 0);

  rec->sci_mask = (rec->sci_mask & 0xFFFFFF80) | (((packedRecVal[16] >> 9) & 0x7F) << 0);
  rec->sci_mask = (rec->sci_mask & 0xFFFFFF7F) | (((packedRecVal[17] >> 0) & 0x1) << 7);

  rec->eth_type_mask = (rec->eth_type_mask & 0xFFFFFFFC) | (((packedRecVal[17] >> 1) & 0x3) << 0);

  rec->snap_mask = (rec->snap_mask & 0xFFFFFFE0) | (((packedRecVal[17] >> 3) & 0x1F) << 0);

  rec->llc_mask = (rec->llc_mask & 0xFFFFFFF8) | (((packedRecVal[17] >> 8) & 0x7) << 0);

  rec->_802_2_encapsulate = (rec->_802_2_encapsulate & 0xFFFFFFFE) | (((packedRecVal[17] >> 11) & 0x1) << 0);

  rec->sa_mask = (rec->sa_mask & 0xFFFFFFF0) | (((packedRecVal[17] >> 12) & 0xF) << 0);
  rec->sa_mask = (rec->sa_mask & 0xFFFFFFCF) | (((packedRecVal[18] >> 0) & 0x3) << 4);

  rec->da_mask = (rec->da_mask & 0xFFFFFFC0) | (((packedRecVal[18] >> 2) & 0x3F) << 0);

  rec->lpbk_mask = (rec->lpbk_mask & 0xFFFFFFFE) | (((packedRecVal[18] >> 8) & 0x1) << 0);

  rec->sc_idx = (rec->sc_idx & 0xFFFFFFE0) | (((packedRecVal[18] >> 9) & 0x1F) << 0);

  rec->proc_dest = (rec->proc_dest & 0xFFFFFFFE) | (((packedRecVal[18] >> 14) & 0x1) << 0);

  rec->action = (rec->action & 0xFFFFFFFE) | (((packedRecVal[18] >> 15) & 0x1) << 0);
  rec->action = (rec->action & 0xFFFFFFFD) | (((packedRecVal[19] >> 0) & 0x1) << 1);

  rec->ctrl_unctrl = (rec->ctrl_unctrl & 0xFFFFFFFE) | (((packedRecVal[19] >> 1) & 0x1) << 0);

  rec->sci_from_table = (rec->sci_from_table & 0xFFFFFFFE) | (((packedRecVal[19] >> 2) & 0x1) << 0);

  rec->reserved = (rec->reserved & 0xFFFFFFF0) | (((packedRecVal[19] >> 3) & 0xF) << 0);

  rec->valid = (rec->valid & 0xFFFFFFFE) | (((packedRecVal[19] >> 7) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetIngressSCRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_IngressSCRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSSCRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 8);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->stop_time >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->stop_time >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->start_time >> 0) & 0xFFFF) << 0);
  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->start_time >> 16) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0xFFFC) | (((rec->validate_frames >> 0) & 0x3) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0xFFFB) | (((rec->replay_protect >> 0) & 0x1) << 2);

  packedRecVal[4] = (packedRecVal[4] & 0x0007) | (((rec->anti_replay_window >> 0) & 0x1FFF) << 3);
  packedRecVal[5] = (packedRecVal[5] & 0x0000) | (((rec->anti_replay_window >> 13) & 0xFFFF) << 0);
  packedRecVal[6] = (packedRecVal[6] & 0xFFF8) | (((rec->anti_replay_window >> 29) & 0x7) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0xFFF7) | (((rec->receiving >> 0) & 0x1) << 3);

  packedRecVal[6] = (packedRecVal[6] & 0xFFEF) | (((rec->fresh >> 0) & 0x1) << 4);

  packedRecVal[6] = (packedRecVal[6] & 0xFFDF) | (((rec->an_rol >> 0) & 0x1) << 5);

  packedRecVal[6] = (packedRecVal[6] & 0x003F) | (((rec->reserved >> 0) & 0x3FF) << 6);
  packedRecVal[7] = (packedRecVal[7] & 0x8000) | (((rec->reserved >> 10) & 0x7FFF) << 0);

  packedRecVal[7] = (packedRecVal[7] & 0x7FFF) | (((rec->valid >> 0) & 0x1) << 15);


  AQ_API_SetRawSECIngressRecordVal(port, packedRecVal, 8, 3, AQ_API_ROWOFFSET_INGRESSSCRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressSCRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressSCRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSSCRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(rec, 0, sizeof(AQ_API_SEC_IngressSCRecord));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 8, 3, AQ_API_ROWOFFSET_INGRESSSCRECORD + tableIndex);

  rec->stop_time = (rec->stop_time & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->stop_time = (rec->stop_time & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->start_time = (rec->start_time & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);
  rec->start_time = (rec->start_time & 0x0000FFFF) | (((packedRecVal[3] >> 0) & 0xFFFF) << 16);

  rec->validate_frames = (rec->validate_frames & 0xFFFFFFFC) | (((packedRecVal[4] >> 0) & 0x3) << 0);

  rec->replay_protect = (rec->replay_protect & 0xFFFFFFFE) | (((packedRecVal[4] >> 2) & 0x1) << 0);

  rec->anti_replay_window = (rec->anti_replay_window & 0xFFFFE000) | (((packedRecVal[4] >> 3) & 0x1FFF) << 0);
  rec->anti_replay_window = (rec->anti_replay_window & 0xE0001FFF) | (((packedRecVal[5] >> 0) & 0xFFFF) << 13);
  rec->anti_replay_window = (rec->anti_replay_window & 0x1FFFFFFF) | (((packedRecVal[6] >> 0) & 0x7) << 29);

  rec->receiving = (rec->receiving & 0xFFFFFFFE) | (((packedRecVal[6] >> 3) & 0x1) << 0);

  rec->fresh = (rec->fresh & 0xFFFFFFFE) | (((packedRecVal[6] >> 4) & 0x1) << 0);

  rec->an_rol = (rec->an_rol & 0xFFFFFFFE) | (((packedRecVal[6] >> 5) & 0x1) << 0);

  rec->reserved = (rec->reserved & 0xFFFFFC00) | (((packedRecVal[6] >> 6) & 0x3FF) << 0);
  rec->reserved = (rec->reserved & 0xFE0003FF) | (((packedRecVal[7] >> 0) & 0x7FFF) << 10);

  rec->valid = (rec->valid & 0xFFFFFFFE) | (((packedRecVal[7] >> 15) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetIngressSARecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_IngressSARecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSSARECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 8);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->stop_time >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->stop_time >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->start_time >> 0) & 0xFFFF) << 0);
  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->start_time >> 16) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0x0000) | (((rec->next_pn >> 0) & 0xFFFF) << 0);
  packedRecVal[5] = (packedRecVal[5] & 0x0000) | (((rec->next_pn >> 16) & 0xFFFF) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0xFFFE) | (((rec->sat_nextpn >> 0) & 0x1) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0xFFFD) | (((rec->in_use >> 0) & 0x1) << 1);

  packedRecVal[6] = (packedRecVal[6] & 0xFFFB) | (((rec->fresh >> 0) & 0x1) << 2);

  packedRecVal[6] = (packedRecVal[6] & 0x0007) | (((rec->reserved >> 0) & 0x1FFF) << 3);
  packedRecVal[7] = (packedRecVal[7] & 0x8000) | (((rec->reserved >> 13) & 0x7FFF) << 0);

  packedRecVal[7] = (packedRecVal[7] & 0x7FFF) | (((rec->valid >> 0) & 0x1) << 15);


  AQ_API_SetRawSECIngressRecordVal(port, packedRecVal, 8, 3, AQ_API_ROWOFFSET_INGRESSSARECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressSARecord
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressSARecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSSARECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(rec, 0, sizeof(AQ_API_SEC_IngressSARecord));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 8, 3, AQ_API_ROWOFFSET_INGRESSSARECORD + tableIndex);

  rec->stop_time = (rec->stop_time & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->stop_time = (rec->stop_time & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->start_time = (rec->start_time & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);
  rec->start_time = (rec->start_time & 0x0000FFFF) | (((packedRecVal[3] >> 0) & 0xFFFF) << 16);

  rec->next_pn = (rec->next_pn & 0xFFFF0000) | (((packedRecVal[4] >> 0) & 0xFFFF) << 0);
  rec->next_pn = (rec->next_pn & 0x0000FFFF) | (((packedRecVal[5] >> 0) & 0xFFFF) << 16);

  rec->sat_nextpn = (rec->sat_nextpn & 0xFFFFFFFE) | (((packedRecVal[6] >> 0) & 0x1) << 0);

  rec->in_use = (rec->in_use & 0xFFFFFFFE) | (((packedRecVal[6] >> 1) & 0x1) << 0);

  rec->fresh = (rec->fresh & 0xFFFFFFFE) | (((packedRecVal[6] >> 2) & 0x1) << 0);

  rec->reserved = (rec->reserved & 0xFFFFE000) | (((packedRecVal[6] >> 3) & 0x1FFF) << 0);
  rec->reserved = (rec->reserved & 0xF0001FFF) | (((packedRecVal[7] >> 0) & 0x7FFF) << 13);

  rec->valid = (rec->valid & 0xFFFFFFFE) | (((packedRecVal[7] >> 15) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetIngressSAKeyRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_IngressSAKeyRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[18];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSSAKEYRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 18);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->key[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->key[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->key[1] >> 0) & 0xFFFF) << 0);
  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->key[1] >> 16) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0x0000) | (((rec->key[2] >> 0) & 0xFFFF) << 0);
  packedRecVal[5] = (packedRecVal[5] & 0x0000) | (((rec->key[2] >> 16) & 0xFFFF) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0x0000) | (((rec->key[3] >> 0) & 0xFFFF) << 0);
  packedRecVal[7] = (packedRecVal[7] & 0x0000) | (((rec->key[3] >> 16) & 0xFFFF) << 0);

  packedRecVal[8] = (packedRecVal[8] & 0x0000) | (((rec->key[4] >> 0) & 0xFFFF) << 0);
  packedRecVal[9] = (packedRecVal[9] & 0x0000) | (((rec->key[4] >> 16) & 0xFFFF) << 0);

  packedRecVal[10] = (packedRecVal[10] & 0x0000) | (((rec->key[5] >> 0) & 0xFFFF) << 0);
  packedRecVal[11] = (packedRecVal[11] & 0x0000) | (((rec->key[5] >> 16) & 0xFFFF) << 0);

  packedRecVal[12] = (packedRecVal[12] & 0x0000) | (((rec->key[6] >> 0) & 0xFFFF) << 0);
  packedRecVal[13] = (packedRecVal[13] & 0x0000) | (((rec->key[6] >> 16) & 0xFFFF) << 0);

  packedRecVal[14] = (packedRecVal[14] & 0x0000) | (((rec->key[7] >> 0) & 0xFFFF) << 0);
  packedRecVal[15] = (packedRecVal[15] & 0x0000) | (((rec->key[7] >> 16) & 0xFFFF) << 0);

  packedRecVal[16] = (packedRecVal[16] & 0xFFFC) | (((rec->key_len >> 0) & 0x3) << 0);


  AQ_API_SetRawSECIngressRecordVal(port, packedRecVal, 18, 2, AQ_API_ROWOFFSET_INGRESSSAKEYRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressSAKeyRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressSAKeyRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[18];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSSAKEYRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(rec, 0, sizeof(AQ_API_SEC_IngressSAKeyRecord));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 18, 2, AQ_API_ROWOFFSET_INGRESSSAKEYRECORD + tableIndex);

  rec->key[0] = (rec->key[0] & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->key[0] = (rec->key[0] & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->key[1] = (rec->key[1] & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);
  rec->key[1] = (rec->key[1] & 0x0000FFFF) | (((packedRecVal[3] >> 0) & 0xFFFF) << 16);

  rec->key[2] = (rec->key[2] & 0xFFFF0000) | (((packedRecVal[4] >> 0) & 0xFFFF) << 0);
  rec->key[2] = (rec->key[2] & 0x0000FFFF) | (((packedRecVal[5] >> 0) & 0xFFFF) << 16);

  rec->key[3] = (rec->key[3] & 0xFFFF0000) | (((packedRecVal[6] >> 0) & 0xFFFF) << 0);
  rec->key[3] = (rec->key[3] & 0x0000FFFF) | (((packedRecVal[7] >> 0) & 0xFFFF) << 16);

  rec->key[4] = (rec->key[4] & 0xFFFF0000) | (((packedRecVal[8] >> 0) & 0xFFFF) << 0);
  rec->key[4] = (rec->key[4] & 0x0000FFFF) | (((packedRecVal[9] >> 0) & 0xFFFF) << 16);

  rec->key[5] = (rec->key[5] & 0xFFFF0000) | (((packedRecVal[10] >> 0) & 0xFFFF) << 0);
  rec->key[5] = (rec->key[5] & 0x0000FFFF) | (((packedRecVal[11] >> 0) & 0xFFFF) << 16);

  rec->key[6] = (rec->key[6] & 0xFFFF0000) | (((packedRecVal[12] >> 0) & 0xFFFF) << 0);
  rec->key[6] = (rec->key[6] & 0x0000FFFF) | (((packedRecVal[13] >> 0) & 0xFFFF) << 16);

  rec->key[7] = (rec->key[7] & 0xFFFF0000) | (((packedRecVal[14] >> 0) & 0xFFFF) << 0);
  rec->key[7] = (rec->key[7] & 0x0000FFFF) | (((packedRecVal[15] >> 0) & 0xFFFF) << 16);

  rec->key_len = (rec->key_len & 0xFFFFFFFC) | (((packedRecVal[16] >> 0) & 0x3) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetIngressPostClassRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_IngressPostClassRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSPOSTCLASSRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 8);

  packedRecVal[0] = (packedRecVal[0] & 0xFF00) | (((rec->byte0 >> 0) & 0xFF) << 0);

  packedRecVal[0] = (packedRecVal[0] & 0x00FF) | (((rec->byte1 >> 0) & 0xFF) << 8);

  packedRecVal[1] = (packedRecVal[1] & 0xFF00) | (((rec->byte2 >> 0) & 0xFF) << 0);

  packedRecVal[1] = (packedRecVal[1] & 0x00FF) | (((rec->byte3 >> 0) & 0xFF) << 8);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->eth_type >> 0) & 0xFFFF) << 0);

  packedRecVal[3] = (packedRecVal[3] & 0xFFFE) | (((rec->eth_type_valid >> 0) & 0x1) << 0);

  packedRecVal[3] = (packedRecVal[3] & 0xE001) | (((rec->vlan_id >> 0) & 0xFFF) << 1);

  packedRecVal[3] = (packedRecVal[3] & 0x1FFF) | (((rec->vlan_up >> 0) & 0x7) << 13);

  packedRecVal[4] = (packedRecVal[4] & 0xFFFE) | (((rec->vlan_valid >> 0) & 0x1) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0xFFC1) | (((rec->sai >> 0) & 0x1F) << 1);

  packedRecVal[4] = (packedRecVal[4] & 0xFFBF) | (((rec->sai_hit >> 0) & 0x1) << 6);

  packedRecVal[4] = (packedRecVal[4] & 0xF87F) | (((rec->eth_type_mask >> 0) & 0xF) << 7);

  packedRecVal[4] = (packedRecVal[4] & 0x07FF) | (((rec->byte3_location >> 0) & 0x1F) << 11);
  packedRecVal[5] = (packedRecVal[5] & 0xFFFE) | (((rec->byte3_location >> 5) & 0x1) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0xFFF9) | (((rec->byte3_mask >> 0) & 0x3) << 1);

  packedRecVal[5] = (packedRecVal[5] & 0xFE07) | (((rec->byte2_location >> 0) & 0x3F) << 3);

  packedRecVal[5] = (packedRecVal[5] & 0xF9FF) | (((rec->byte2_mask >> 0) & 0x3) << 9);

  packedRecVal[5] = (packedRecVal[5] & 0x07FF) | (((rec->byte1_location >> 0) & 0x1F) << 11);
  packedRecVal[6] = (packedRecVal[6] & 0xFFFE) | (((rec->byte1_location >> 5) & 0x1) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0xFFF9) | (((rec->byte1_mask >> 0) & 0x3) << 1);

  packedRecVal[6] = (packedRecVal[6] & 0xFE07) | (((rec->byte0_location >> 0) & 0x3F) << 3);

  packedRecVal[6] = (packedRecVal[6] & 0xF9FF) | (((rec->byte0_mask >> 0) & 0x3) << 9);

  packedRecVal[6] = (packedRecVal[6] & 0xE7FF) | (((rec->eth_type_valid_mask >> 0) & 0x3) << 11);

  packedRecVal[6] = (packedRecVal[6] & 0x1FFF) | (((rec->vlan_id_mask >> 0) & 0x7) << 13);
  packedRecVal[7] = (packedRecVal[7] & 0xFFFE) | (((rec->vlan_id_mask >> 3) & 0x1) << 0);

  packedRecVal[7] = (packedRecVal[7] & 0xFFF9) | (((rec->vlan_up_mask >> 0) & 0x3) << 1);

  packedRecVal[7] = (packedRecVal[7] & 0xFFE7) | (((rec->vlan_valid_mask >> 0) & 0x3) << 3);

  packedRecVal[7] = (packedRecVal[7] & 0xFF9F) | (((rec->sai_mask >> 0) & 0x3) << 5);

  packedRecVal[7] = (packedRecVal[7] & 0xFE7F) | (((rec->sai_hit_mask >> 0) & 0x3) << 7);

  packedRecVal[7] = (packedRecVal[7] & 0xFDFF) | (((rec->firstlevel_actions >> 0) & 0x1) << 9);

  packedRecVal[7] = (packedRecVal[7] & 0xFBFF) | (((rec->secondlevel_actions >> 0) & 0x1) << 10);

  packedRecVal[7] = (packedRecVal[7] & 0x87FF) | (((rec->reserved >> 0) & 0xF) << 11);

  packedRecVal[7] = (packedRecVal[7] & 0x7FFF) | (((rec->valid >> 0) & 0x1) << 15);


  AQ_API_SetRawSECIngressRecordVal(port, packedRecVal, 8, 4, AQ_API_ROWOFFSET_INGRESSPOSTCLASSRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressPostClassRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressPostClassRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSPOSTCLASSRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  switch (port->device) 
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* If the row that we want to read is odd, first read the previous even 
       * row, throw that value away, and finally read the desired row.
       * This is a workaround for EUR devices that allows us to read 
       * odd-numbered rows.  For HHD devices: this workaround will not work, 
       * so don't bother; odd-numbered rows are not readable. */
      if ((tableIndex % 2) > 0)
      {
        AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 8, 4, 
            AQ_API_ROWOFFSET_INGRESSPOSTCLASSRECORD + tableIndex - 1);
      }
      break;
  }

  memset(rec, 0, sizeof(AQ_API_SEC_IngressPostClassRecord));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 8, 4, AQ_API_ROWOFFSET_INGRESSPOSTCLASSRECORD + tableIndex);

  rec->byte0 = (rec->byte0 & 0xFFFFFF00) | (((packedRecVal[0] >> 0) & 0xFF) << 0);

  rec->byte1 = (rec->byte1 & 0xFFFFFF00) | (((packedRecVal[0] >> 8) & 0xFF) << 0);

  rec->byte2 = (rec->byte2 & 0xFFFFFF00) | (((packedRecVal[1] >> 0) & 0xFF) << 0);

  rec->byte3 = (rec->byte3 & 0xFFFFFF00) | (((packedRecVal[1] >> 8) & 0xFF) << 0);

  rec->eth_type = (rec->eth_type & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);

  rec->eth_type_valid = (rec->eth_type_valid & 0xFFFFFFFE) | (((packedRecVal[3] >> 0) & 0x1) << 0);

  rec->vlan_id = (rec->vlan_id & 0xFFFFF000) | (((packedRecVal[3] >> 1) & 0xFFF) << 0);

  rec->vlan_up = (rec->vlan_up & 0xFFFFFFF8) | (((packedRecVal[3] >> 13) & 0x7) << 0);

  rec->vlan_valid = (rec->vlan_valid & 0xFFFFFFFE) | (((packedRecVal[4] >> 0) & 0x1) << 0);

  rec->sai = (rec->sai & 0xFFFFFFE0) | (((packedRecVal[4] >> 1) & 0x1F) << 0);

  rec->sai_hit = (rec->sai_hit & 0xFFFFFFFE) | (((packedRecVal[4] >> 6) & 0x1) << 0);

  rec->eth_type_mask = (rec->eth_type_mask & 0xFFFFFFF0) | (((packedRecVal[4] >> 7) & 0xF) << 0);

  rec->byte3_location = (rec->byte3_location & 0xFFFFFFE0) | (((packedRecVal[4] >> 11) & 0x1F) << 0);
  rec->byte3_location = (rec->byte3_location & 0xFFFFFFDF) | (((packedRecVal[5] >> 0) & 0x1) << 5);

  rec->byte3_mask = (rec->byte3_mask & 0xFFFFFFFC) | (((packedRecVal[5] >> 1) & 0x3) << 0);

  rec->byte2_location = (rec->byte2_location & 0xFFFFFFC0) | (((packedRecVal[5] >> 3) & 0x3F) << 0);

  rec->byte2_mask = (rec->byte2_mask & 0xFFFFFFFC) | (((packedRecVal[5] >> 9) & 0x3) << 0);

  rec->byte1_location = (rec->byte1_location & 0xFFFFFFE0) | (((packedRecVal[5] >> 11) & 0x1F) << 0);
  rec->byte1_location = (rec->byte1_location & 0xFFFFFFDF) | (((packedRecVal[6] >> 0) & 0x1) << 5);

  rec->byte1_mask = (rec->byte1_mask & 0xFFFFFFFC) | (((packedRecVal[6] >> 1) & 0x3) << 0);

  rec->byte0_location = (rec->byte0_location & 0xFFFFFFC0) | (((packedRecVal[6] >> 3) & 0x3F) << 0);

  rec->byte0_mask = (rec->byte0_mask & 0xFFFFFFFC) | (((packedRecVal[6] >> 9) & 0x3) << 0);

  rec->eth_type_valid_mask = (rec->eth_type_valid_mask & 0xFFFFFFFC) | (((packedRecVal[6] >> 11) & 0x3) << 0);

  rec->vlan_id_mask = (rec->vlan_id_mask & 0xFFFFFFF8) | (((packedRecVal[6] >> 13) & 0x7) << 0);
  rec->vlan_id_mask = (rec->vlan_id_mask & 0xFFFFFFF7) | (((packedRecVal[7] >> 0) & 0x1) << 3);

  rec->vlan_up_mask = (rec->vlan_up_mask & 0xFFFFFFFC) | (((packedRecVal[7] >> 1) & 0x3) << 0);

  rec->vlan_valid_mask = (rec->vlan_valid_mask & 0xFFFFFFFC) | (((packedRecVal[7] >> 3) & 0x3) << 0);

  rec->sai_mask = (rec->sai_mask & 0xFFFFFFFC) | (((packedRecVal[7] >> 5) & 0x3) << 0);

  rec->sai_hit_mask = (rec->sai_hit_mask & 0xFFFFFFFC) | (((packedRecVal[7] >> 7) & 0x3) << 0);

  rec->firstlevel_actions = (rec->firstlevel_actions & 0xFFFFFFFE) | (((packedRecVal[7] >> 9) & 0x1) << 0);

  rec->secondlevel_actions = (rec->secondlevel_actions & 0xFFFFFFFE) | (((packedRecVal[7] >> 10) & 0x1) << 0);

  rec->reserved = (rec->reserved & 0xFFFFFFF0) | (((packedRecVal[7] >> 11) & 0xF) << 0);

  rec->valid = (rec->valid & 0xFFFFFFFE) | (((packedRecVal[7] >> 15) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetIngressPostCTLFRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_IngressPostCTLFRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[6];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSPOSTCTLFRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 6);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->sa_da[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->sa_da[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->sa_da[1] >> 0) & 0xFFFF) << 0);

  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->eth_type >> 0) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0x0000) | (((rec->match_mask >> 0) & 0xFFFF) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0xFFF0) | (((rec->match_type >> 0) & 0xF) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0xFFEF) | (((rec->action >> 0) & 0x1) << 4);


  AQ_API_SetRawSECIngressRecordVal(port, packedRecVal, 6, 5, AQ_API_ROWOFFSET_INGRESSPOSTCTLFRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressPostCTLFRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressPostCTLFRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[6];


  if (tableIndex >= AQ_API_NUMROWS_INGRESSPOSTCTLFRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  switch (port->device) 
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* If the row that we want to read is odd, first read the previous even 
       * row, throw that value away, and finally read the desired row.
       * This is a workaround for EUR devices that allows us to read 
       * odd-numbered rows.  For HHD devices: this workaround will not work, 
       * so don't bother; odd-numbered rows are not readable. */
      if ((tableIndex % 2) > 0)
      {
        AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 6, 5, 
            AQ_API_ROWOFFSET_INGRESSPOSTCTLFRECORD + tableIndex - 1);
      }
      break;
  }

  memset(rec, 0, sizeof(AQ_API_SEC_IngressPostCTLFRecord));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 6, 5, AQ_API_ROWOFFSET_INGRESSPOSTCTLFRECORD + tableIndex);

  rec->sa_da[0] = (rec->sa_da[0] & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->sa_da[0] = (rec->sa_da[0] & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->sa_da[1] = (rec->sa_da[1] & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);

  rec->eth_type = (rec->eth_type & 0xFFFF0000) | (((packedRecVal[3] >> 0) & 0xFFFF) << 0);

  rec->match_mask = (rec->match_mask & 0xFFFF0000) | (((packedRecVal[4] >> 0) & 0xFFFF) << 0);

  rec->match_type = (rec->match_type & 0xFFFFFFF0) | (((packedRecVal[5] >> 0) & 0xF) << 0);

  rec->action = (rec->action & 0xFFFFFFFE) | (((packedRecVal[5] >> 4) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetEgressCTLFRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_EgressCTLFRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[6];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSCTLFRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 6);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->sa_da[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->sa_da[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->sa_da[1] >> 0) & 0xFFFF) << 0);

  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->eth_type >> 0) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0x0000) | (((rec->match_mask >> 0) & 0xFFFF) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0xFFF0) | (((rec->match_type >> 0) & 0xF) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0xFFEF) | (((rec->action >> 0) & 0x1) << 4);


  AQ_API_SetRawSECEgressRecordVal(port, packedRecVal, 6, 0, AQ_API_ROWOFFSET_EGRESSCTLFRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetEgressCTLFRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_EgressCTLFRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[6];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSCTLFRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  switch (port->device) 
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* If the row that we want to read is odd, first read the previous even 
       * row, throw that value away, and finally read the desired row.
       * This is a workaround for EUR devices that allows us to read 
       * odd-numbered rows.  For HHD devices: this workaround will not work, 
       * so don't bother; odd-numbered rows are not readable. */
      if ((tableIndex % 2) > 0)
      {
        AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 6, 0, 
            AQ_API_ROWOFFSET_EGRESSCTLFRECORD + tableIndex - 1);
      }
      break;
  }

  memset(rec, 0, sizeof(AQ_API_SEC_EgressCTLFRecord));

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 6, 0, AQ_API_ROWOFFSET_EGRESSCTLFRECORD + tableIndex);

  rec->sa_da[0] = (rec->sa_da[0] & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->sa_da[0] = (rec->sa_da[0] & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->sa_da[1] = (rec->sa_da[1] & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);

  rec->eth_type = (rec->eth_type & 0xFFFF0000) | (((packedRecVal[3] >> 0) & 0xFFFF) << 0);

  rec->match_mask = (rec->match_mask & 0xFFFF0000) | (((packedRecVal[4] >> 0) & 0xFFFF) << 0);

  rec->match_type = (rec->match_type & 0xFFFFFFF0) | (((packedRecVal[5] >> 0) & 0xF) << 0);

  rec->action = (rec->action & 0xFFFFFFFE) | (((packedRecVal[5] >> 4) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetEgressClassRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_EgressClassRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[28];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSCLASSRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 28);

  packedRecVal[0] = (packedRecVal[0] & 0xF000) | (((rec->vlan_id >> 0) & 0xFFF) << 0);

  packedRecVal[0] = (packedRecVal[0] & 0x8FFF) | (((rec->vlan_up >> 0) & 0x7) << 12);

  packedRecVal[0] = (packedRecVal[0] & 0x7FFF) | (((rec->vlan_valid >> 0) & 0x1) << 15);

  packedRecVal[1] = (packedRecVal[1] & 0xFF00) | (((rec->byte3 >> 0) & 0xFF) << 0);

  packedRecVal[1] = (packedRecVal[1] & 0x00FF) | (((rec->byte2 >> 0) & 0xFF) << 8);

  packedRecVal[2] = (packedRecVal[2] & 0xFF00) | (((rec->byte1 >> 0) & 0xFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x00FF) | (((rec->byte0 >> 0) & 0xFF) << 8);

  packedRecVal[3] = (packedRecVal[3] & 0xFF00) | (((rec->tci >> 0) & 0xFF) << 0);

  packedRecVal[3] = (packedRecVal[3] & 0x00FF) | (((rec->sci[0] >> 0) & 0xFF) << 8);
  packedRecVal[4] = (packedRecVal[4] & 0x0000) | (((rec->sci[0] >> 8) & 0xFFFF) << 0);
  packedRecVal[5] = (packedRecVal[5] & 0xFF00) | (((rec->sci[0] >> 24) & 0xFF) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0x00FF) | (((rec->sci[1] >> 0) & 0xFF) << 8);
  packedRecVal[6] = (packedRecVal[6] & 0x0000) | (((rec->sci[1] >> 8) & 0xFFFF) << 0);
  packedRecVal[7] = (packedRecVal[7] & 0xFF00) | (((rec->sci[1] >> 24) & 0xFF) << 0);

  packedRecVal[7] = (packedRecVal[7] & 0x00FF) | (((rec->eth_type >> 0) & 0xFF) << 8);
  packedRecVal[8] = (packedRecVal[8] & 0xFF00) | (((rec->eth_type >> 8) & 0xFF) << 0);

  packedRecVal[8] = (packedRecVal[8] & 0x00FF) | (((rec->snap[0] >> 0) & 0xFF) << 8);
  packedRecVal[9] = (packedRecVal[9] & 0x0000) | (((rec->snap[0] >> 8) & 0xFFFF) << 0);
  packedRecVal[10] = (packedRecVal[10] & 0xFF00) | (((rec->snap[0] >> 24) & 0xFF) << 0);

  packedRecVal[10] = (packedRecVal[10] & 0x00FF) | (((rec->snap[1] >> 0) & 0xFF) << 8);

  packedRecVal[11] = (packedRecVal[11] & 0x0000) | (((rec->llc >> 0) & 0xFFFF) << 0);
  packedRecVal[12] = (packedRecVal[12] & 0xFF00) | (((rec->llc >> 16) & 0xFF) << 0);

  packedRecVal[12] = (packedRecVal[12] & 0x00FF) | (((rec->mac_sa[0] >> 0) & 0xFF) << 8);
  packedRecVal[13] = (packedRecVal[13] & 0x0000) | (((rec->mac_sa[0] >> 8) & 0xFFFF) << 0);
  packedRecVal[14] = (packedRecVal[14] & 0xFF00) | (((rec->mac_sa[0] >> 24) & 0xFF) << 0);

  packedRecVal[14] = (packedRecVal[14] & 0x00FF) | (((rec->mac_sa[1] >> 0) & 0xFF) << 8);
  packedRecVal[15] = (packedRecVal[15] & 0xFF00) | (((rec->mac_sa[1] >> 8) & 0xFF) << 0);

  packedRecVal[15] = (packedRecVal[15] & 0x00FF) | (((rec->mac_da[0] >> 0) & 0xFF) << 8);
  packedRecVal[16] = (packedRecVal[16] & 0x0000) | (((rec->mac_da[0] >> 8) & 0xFFFF) << 0);
  packedRecVal[17] = (packedRecVal[17] & 0xFF00) | (((rec->mac_da[0] >> 24) & 0xFF) << 0);

  packedRecVal[17] = (packedRecVal[17] & 0x00FF) | (((rec->mac_da[1] >> 0) & 0xFF) << 8);
  packedRecVal[18] = (packedRecVal[18] & 0xFF00) | (((rec->mac_da[1] >> 8) & 0xFF) << 0);

  packedRecVal[18] = (packedRecVal[18] & 0x00FF) | (((rec->pn >> 0) & 0xFF) << 8);
  packedRecVal[19] = (packedRecVal[19] & 0x0000) | (((rec->pn >> 8) & 0xFFFF) << 0);
  packedRecVal[20] = (packedRecVal[20] & 0xFF00) | (((rec->pn >> 24) & 0xFF) << 0);

  packedRecVal[20] = (packedRecVal[20] & 0xC0FF) | (((rec->byte3_location >> 0) & 0x3F) << 8);

  packedRecVal[20] = (packedRecVal[20] & 0xBFFF) | (((rec->byte3_mask >> 0) & 0x1) << 14);

  packedRecVal[20] = (packedRecVal[20] & 0x7FFF) | (((rec->byte2_location >> 0) & 0x1) << 15);
  packedRecVal[21] = (packedRecVal[21] & 0xFFE0) | (((rec->byte2_location >> 1) & 0x1F) << 0);

  packedRecVal[21] = (packedRecVal[21] & 0xFFDF) | (((rec->byte2_mask >> 0) & 0x1) << 5);

  packedRecVal[21] = (packedRecVal[21] & 0xF03F) | (((rec->byte1_location >> 0) & 0x3F) << 6);

  packedRecVal[21] = (packedRecVal[21] & 0xEFFF) | (((rec->byte1_mask >> 0) & 0x1) << 12);

  packedRecVal[21] = (packedRecVal[21] & 0x1FFF) | (((rec->byte0_location >> 0) & 0x7) << 13);
  packedRecVal[22] = (packedRecVal[22] & 0xFFF8) | (((rec->byte0_location >> 3) & 0x7) << 0);

  packedRecVal[22] = (packedRecVal[22] & 0xFFF7) | (((rec->byte0_mask >> 0) & 0x1) << 3);

  packedRecVal[22] = (packedRecVal[22] & 0xFFCF) | (((rec->vlan_id_mask >> 0) & 0x3) << 4);

  packedRecVal[22] = (packedRecVal[22] & 0xFFBF) | (((rec->vlan_up_mask >> 0) & 0x1) << 6);

  packedRecVal[22] = (packedRecVal[22] & 0xFF7F) | (((rec->vlan_valid_mask >> 0) & 0x1) << 7);

  packedRecVal[22] = (packedRecVal[22] & 0x00FF) | (((rec->tci_mask >> 0) & 0xFF) << 8);

  packedRecVal[23] = (packedRecVal[23] & 0xFF00) | (((rec->sci_mask >> 0) & 0xFF) << 0);

  packedRecVal[23] = (packedRecVal[23] & 0xFCFF) | (((rec->eth_type_mask >> 0) & 0x3) << 8);

  packedRecVal[23] = (packedRecVal[23] & 0x83FF) | (((rec->snap_mask >> 0) & 0x1F) << 10);

  packedRecVal[23] = (packedRecVal[23] & 0x7FFF) | (((rec->llc_mask >> 0) & 0x1) << 15);
  packedRecVal[24] = (packedRecVal[24] & 0xFFFC) | (((rec->llc_mask >> 1) & 0x3) << 0);

  packedRecVal[24] = (packedRecVal[24] & 0xFF03) | (((rec->sa_mask >> 0) & 0x3F) << 2);

  packedRecVal[24] = (packedRecVal[24] & 0xC0FF) | (((rec->da_mask >> 0) & 0x3F) << 8);

  packedRecVal[24] = (packedRecVal[24] & 0x3FFF) | (((rec->pn_mask >> 0) & 0x3) << 14);
  packedRecVal[25] = (packedRecVal[25] & 0xFFFC) | (((rec->pn_mask >> 2) & 0x3) << 0);

  packedRecVal[25] = (packedRecVal[25] & 0xFFFB) | (((rec->eight02dot2 >> 0) & 0x1) << 2);

  packedRecVal[25] = (packedRecVal[25] & 0xFFF7) | (((rec->tci_sc >> 0) & 0x1) << 3);

  packedRecVal[25] = (packedRecVal[25] & 0xFFEF) | (((rec->tci_87543 >> 0) & 0x1) << 4);

  packedRecVal[25] = (packedRecVal[25] & 0xFFDF) | (((rec->exp_sectag_en >> 0) & 0x1) << 5);

  packedRecVal[25] = (packedRecVal[25] & 0xF83F) | (((rec->sc_idx >> 0) & 0x1F) << 6);

  packedRecVal[25] = (packedRecVal[25] & 0xE7FF) | (((rec->sc_sa >> 0) & 0x3) << 11);

  packedRecVal[25] = (packedRecVal[25] & 0xDFFF) | (((rec->debug >> 0) & 0x1) << 13);

  packedRecVal[25] = (packedRecVal[25] & 0x3FFF) | (((rec->action >> 0) & 0x3) << 14);

  packedRecVal[26] = (packedRecVal[26] & 0xFFF7) | (((rec->valid >> 0) & 0x1) << 3);


  AQ_API_SetRawSECEgressRecordVal(port, packedRecVal, 28, 1, AQ_API_ROWOFFSET_EGRESSCLASSRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetEgressClassRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_EgressClassRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[28];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSCLASSRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  switch (port->device) 
  {
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      /* If the row that we want to read is odd, first read the previous even 
       * row, throw that value away, and finally read the desired row.
       * This is a workaround for EUR devices that allows us to read 
       * odd-numbered rows.  For HHD devices: this workaround will not work, 
       * so don't bother; odd-numbered rows are not readable. */
      if ((tableIndex % 2) > 0)
      {
        AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 28, 1, 
            AQ_API_ROWOFFSET_EGRESSCLASSRECORD + tableIndex - 1);
      }
      break;
  }

  memset(rec, 0, sizeof(AQ_API_SEC_EgressClassRecord));

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 28, 1, AQ_API_ROWOFFSET_EGRESSCLASSRECORD + tableIndex);

  rec->vlan_id = (rec->vlan_id & 0xFFFFF000) | (((packedRecVal[0] >> 0) & 0xFFF) << 0);

  rec->vlan_up = (rec->vlan_up & 0xFFFFFFF8) | (((packedRecVal[0] >> 12) & 0x7) << 0);

  rec->vlan_valid = (rec->vlan_valid & 0xFFFFFFFE) | (((packedRecVal[0] >> 15) & 0x1) << 0);

  rec->byte3 = (rec->byte3 & 0xFFFFFF00) | (((packedRecVal[1] >> 0) & 0xFF) << 0);

  rec->byte2 = (rec->byte2 & 0xFFFFFF00) | (((packedRecVal[1] >> 8) & 0xFF) << 0);

  rec->byte1 = (rec->byte1 & 0xFFFFFF00) | (((packedRecVal[2] >> 0) & 0xFF) << 0);

  rec->byte0 = (rec->byte0 & 0xFFFFFF00) | (((packedRecVal[2] >> 8) & 0xFF) << 0);

  rec->tci = (rec->tci & 0xFFFFFF00) | (((packedRecVal[3] >> 0) & 0xFF) << 0);

  rec->sci[0] = (rec->sci[0] & 0xFFFFFF00) | (((packedRecVal[3] >> 8) & 0xFF) << 0);
  rec->sci[0] = (rec->sci[0] & 0xFF0000FF) | (((packedRecVal[4] >> 0) & 0xFFFF) << 8);
  rec->sci[0] = (rec->sci[0] & 0x00FFFFFF) | (((packedRecVal[5] >> 0) & 0xFF) << 24);

  rec->sci[1] = (rec->sci[1] & 0xFFFFFF00) | (((packedRecVal[5] >> 8) & 0xFF) << 0);
  rec->sci[1] = (rec->sci[1] & 0xFF0000FF) | (((packedRecVal[6] >> 0) & 0xFFFF) << 8);
  rec->sci[1] = (rec->sci[1] & 0x00FFFFFF) | (((packedRecVal[7] >> 0) & 0xFF) << 24);

  rec->eth_type = (rec->eth_type & 0xFFFFFF00) | (((packedRecVal[7] >> 8) & 0xFF) << 0);
  rec->eth_type = (rec->eth_type & 0xFFFF00FF) | (((packedRecVal[8] >> 0) & 0xFF) << 8);

  rec->snap[0] = (rec->snap[0] & 0xFFFFFF00) | (((packedRecVal[8] >> 8) & 0xFF) << 0);
  rec->snap[0] = (rec->snap[0] & 0xFF0000FF) | (((packedRecVal[9] >> 0) & 0xFFFF) << 8);
  rec->snap[0] = (rec->snap[0] & 0x00FFFFFF) | (((packedRecVal[10] >> 0) & 0xFF) << 24);

  rec->snap[1] = (rec->snap[1] & 0xFFFFFF00) | (((packedRecVal[10] >> 8) & 0xFF) << 0);

  rec->llc = (rec->llc & 0xFFFF0000) | (((packedRecVal[11] >> 0) & 0xFFFF) << 0);
  rec->llc = (rec->llc & 0xFF00FFFF) | (((packedRecVal[12] >> 0) & 0xFF) << 16);

  rec->mac_sa[0] = (rec->mac_sa[0] & 0xFFFFFF00) | (((packedRecVal[12] >> 8) & 0xFF) << 0);
  rec->mac_sa[0] = (rec->mac_sa[0] & 0xFF0000FF) | (((packedRecVal[13] >> 0) & 0xFFFF) << 8);
  rec->mac_sa[0] = (rec->mac_sa[0] & 0x00FFFFFF) | (((packedRecVal[14] >> 0) & 0xFF) << 24);

  rec->mac_sa[1] = (rec->mac_sa[1] & 0xFFFFFF00) | (((packedRecVal[14] >> 8) & 0xFF) << 0);
  rec->mac_sa[1] = (rec->mac_sa[1] & 0xFFFF00FF) | (((packedRecVal[15] >> 0) & 0xFF) << 8);

  rec->mac_da[0] = (rec->mac_da[0] & 0xFFFFFF00) | (((packedRecVal[15] >> 8) & 0xFF) << 0);
  rec->mac_da[0] = (rec->mac_da[0] & 0xFF0000FF) | (((packedRecVal[16] >> 0) & 0xFFFF) << 8);
  rec->mac_da[0] = (rec->mac_da[0] & 0x00FFFFFF) | (((packedRecVal[17] >> 0) & 0xFF) << 24);

  rec->mac_da[1] = (rec->mac_da[1] & 0xFFFFFF00) | (((packedRecVal[17] >> 8) & 0xFF) << 0);
  rec->mac_da[1] = (rec->mac_da[1] & 0xFFFF00FF) | (((packedRecVal[18] >> 0) & 0xFF) << 8);

  rec->pn = (rec->pn & 0xFFFFFF00) | (((packedRecVal[18] >> 8) & 0xFF) << 0);
  rec->pn = (rec->pn & 0xFF0000FF) | (((packedRecVal[19] >> 0) & 0xFFFF) << 8);
  rec->pn = (rec->pn & 0x00FFFFFF) | (((packedRecVal[20] >> 0) & 0xFF) << 24);

  rec->byte3_location = (rec->byte3_location & 0xFFFFFFC0) | (((packedRecVal[20] >> 8) & 0x3F) << 0);

  rec->byte3_mask = (rec->byte3_mask & 0xFFFFFFFE) | (((packedRecVal[20] >> 14) & 0x1) << 0);

  rec->byte2_location = (rec->byte2_location & 0xFFFFFFFE) | (((packedRecVal[20] >> 15) & 0x1) << 0);
  rec->byte2_location = (rec->byte2_location & 0xFFFFFFC1) | (((packedRecVal[21] >> 0) & 0x1F) << 1);

  rec->byte2_mask = (rec->byte2_mask & 0xFFFFFFFE) | (((packedRecVal[21] >> 5) & 0x1) << 0);

  rec->byte1_location = (rec->byte1_location & 0xFFFFFFC0) | (((packedRecVal[21] >> 6) & 0x3F) << 0);

  rec->byte1_mask = (rec->byte1_mask & 0xFFFFFFFE) | (((packedRecVal[21] >> 12) & 0x1) << 0);

  rec->byte0_location = (rec->byte0_location & 0xFFFFFFF8) | (((packedRecVal[21] >> 13) & 0x7) << 0);
  rec->byte0_location = (rec->byte0_location & 0xFFFFFFC7) | (((packedRecVal[22] >> 0) & 0x7) << 3);

  rec->byte0_mask = (rec->byte0_mask & 0xFFFFFFFE) | (((packedRecVal[22] >> 3) & 0x1) << 0);

  rec->vlan_id_mask = (rec->vlan_id_mask & 0xFFFFFFFC) | (((packedRecVal[22] >> 4) & 0x3) << 0);

  rec->vlan_up_mask = (rec->vlan_up_mask & 0xFFFFFFFE) | (((packedRecVal[22] >> 6) & 0x1) << 0);

  rec->vlan_valid_mask = (rec->vlan_valid_mask & 0xFFFFFFFE) | (((packedRecVal[22] >> 7) & 0x1) << 0);

  rec->tci_mask = (rec->tci_mask & 0xFFFFFF00) | (((packedRecVal[22] >> 8) & 0xFF) << 0);

  rec->sci_mask = (rec->sci_mask & 0xFFFFFF00) | (((packedRecVal[23] >> 0) & 0xFF) << 0);

  rec->eth_type_mask = (rec->eth_type_mask & 0xFFFFFFFC) | (((packedRecVal[23] >> 8) & 0x3) << 0);

  rec->snap_mask = (rec->snap_mask & 0xFFFFFFE0) | (((packedRecVal[23] >> 10) & 0x1F) << 0);

  rec->llc_mask = (rec->llc_mask & 0xFFFFFFFE) | (((packedRecVal[23] >> 15) & 0x1) << 0);
  rec->llc_mask = (rec->llc_mask & 0xFFFFFFF9) | (((packedRecVal[24] >> 0) & 0x3) << 1);

  rec->sa_mask = (rec->sa_mask & 0xFFFFFFC0) | (((packedRecVal[24] >> 2) & 0x3F) << 0);

  rec->da_mask = (rec->da_mask & 0xFFFFFFC0) | (((packedRecVal[24] >> 8) & 0x3F) << 0);

  rec->pn_mask = (rec->pn_mask & 0xFFFFFFFC) | (((packedRecVal[24] >> 14) & 0x3) << 0);
  rec->pn_mask = (rec->pn_mask & 0xFFFFFFF3) | (((packedRecVal[25] >> 0) & 0x3) << 2);

  rec->eight02dot2 = (rec->eight02dot2 & 0xFFFFFFFE) | (((packedRecVal[25] >> 2) & 0x1) << 0);

  rec->tci_sc = (rec->tci_sc & 0xFFFFFFFE) | (((packedRecVal[25] >> 3) & 0x1) << 0);

  rec->tci_87543 = (rec->tci_87543 & 0xFFFFFFFE) | (((packedRecVal[25] >> 4) & 0x1) << 0);

  rec->exp_sectag_en = (rec->exp_sectag_en & 0xFFFFFFFE) | (((packedRecVal[25] >> 5) & 0x1) << 0);

  rec->sc_idx = (rec->sc_idx & 0xFFFFFFE0) | (((packedRecVal[25] >> 6) & 0x1F) << 0);

  rec->sc_sa = (rec->sc_sa & 0xFFFFFFFC) | (((packedRecVal[25] >> 11) & 0x3) << 0);

  rec->debug = (rec->debug & 0xFFFFFFFE) | (((packedRecVal[25] >> 13) & 0x1) << 0);

  rec->action = (rec->action & 0xFFFFFFFC) | (((packedRecVal[25] >> 14) & 0x3) << 0);

  rec->valid = (rec->valid & 0xFFFFFFFE) | (((packedRecVal[26] >> 3) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetEgressSCRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_EgressSCRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSSCRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 8);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->start_time >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->start_time >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->stop_time >> 0) & 0xFFFF) << 0);
  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->stop_time >> 16) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0xFFFC) | (((rec->curr_an >> 0) & 0x3) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0xFFFB) | (((rec->an_roll >> 0) & 0x1) << 2);

  packedRecVal[4] = (packedRecVal[4] & 0xFE07) | (((rec->tci >> 0) & 0x3F) << 3);

  packedRecVal[4] = (packedRecVal[4] & 0x01FF) | (((rec->enc_off >> 0) & 0x7F) << 9);
  packedRecVal[5] = (packedRecVal[5] & 0xFFFE) | (((rec->enc_off >> 7) & 0x1) << 0);

  packedRecVal[5] = (packedRecVal[5] & 0xFFFD) | (((rec->protect >> 0) & 0x1) << 1);

  packedRecVal[5] = (packedRecVal[5] & 0xFFFB) | (((rec->recv >> 0) & 0x1) << 2);

  packedRecVal[5] = (packedRecVal[5] & 0xFFF7) | (((rec->fresh >> 0) & 0x1) << 3);

  packedRecVal[5] = (packedRecVal[5] & 0xFFCF) | (((rec->sak_len >> 0) & 0x3) << 4);

  packedRecVal[7] = (packedRecVal[7] & 0x7FFF) | (((rec->valid >> 0) & 0x1) << 15);


  AQ_API_SetRawSECEgressRecordVal(port, packedRecVal, 8, 2, AQ_API_ROWOFFSET_EGRESSSCRECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetEgressSCRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_EgressSCRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSSCRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(rec, 0, sizeof(AQ_API_SEC_EgressSCRecord));

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 8, 2, AQ_API_ROWOFFSET_EGRESSSCRECORD + tableIndex);

  rec->start_time = (rec->start_time & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->start_time = (rec->start_time & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->stop_time = (rec->stop_time & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);
  rec->stop_time = (rec->stop_time & 0x0000FFFF) | (((packedRecVal[3] >> 0) & 0xFFFF) << 16);

  rec->curr_an = (rec->curr_an & 0xFFFFFFFC) | (((packedRecVal[4] >> 0) & 0x3) << 0);

  rec->an_roll = (rec->an_roll & 0xFFFFFFFE) | (((packedRecVal[4] >> 2) & 0x1) << 0);

  rec->tci = (rec->tci & 0xFFFFFFC0) | (((packedRecVal[4] >> 3) & 0x3F) << 0);

  rec->enc_off = (rec->enc_off & 0xFFFFFF80) | (((packedRecVal[4] >> 9) & 0x7F) << 0);
  rec->enc_off = (rec->enc_off & 0xFFFFFF7F) | (((packedRecVal[5] >> 0) & 0x1) << 7);

  rec->protect = (rec->protect & 0xFFFFFFFE) | (((packedRecVal[5] >> 1) & 0x1) << 0);

  rec->recv = (rec->recv & 0xFFFFFFFE) | (((packedRecVal[5] >> 2) & 0x1) << 0);

  rec->fresh = (rec->fresh & 0xFFFFFFFE) | (((packedRecVal[5] >> 3) & 0x1) << 0);

  rec->sak_len = (rec->sak_len & 0xFFFFFFFC) | (((packedRecVal[5] >> 4) & 0x3) << 0);

  rec->valid = (rec->valid & 0xFFFFFFFE) | (((packedRecVal[7] >> 15) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetEgressSARecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_EgressSARecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSSARECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 8);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->start_time >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->start_time >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->stop_time >> 0) & 0xFFFF) << 0);
  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->stop_time >> 16) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0x0000) | (((rec->next_pn >> 0) & 0xFFFF) << 0);
  packedRecVal[5] = (packedRecVal[5] & 0x0000) | (((rec->next_pn >> 16) & 0xFFFF) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0xFFFE) | (((rec->sat_pn >> 0) & 0x1) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0xFFFD) | (((rec->fresh >> 0) & 0x1) << 1);

  packedRecVal[7] = (packedRecVal[7] & 0x7FFF) | (((rec->valid >> 0) & 0x1) << 15);


  AQ_API_SetRawSECEgressRecordVal(port, packedRecVal, 8, 2, AQ_API_ROWOFFSET_EGRESSSARECORD + tableIndex);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetEgressSARecord
(
  AQ_API_Port* port,
  AQ_API_SEC_EgressSARecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[8];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSSARECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(rec, 0, sizeof(AQ_API_SEC_EgressSARecord));

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 8, 2, AQ_API_ROWOFFSET_EGRESSSARECORD + tableIndex);

  rec->start_time = (rec->start_time & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->start_time = (rec->start_time & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->stop_time = (rec->stop_time & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);
  rec->stop_time = (rec->stop_time & 0x0000FFFF) | (((packedRecVal[3] >> 0) & 0xFFFF) << 16);

  rec->next_pn = (rec->next_pn & 0xFFFF0000) | (((packedRecVal[4] >> 0) & 0xFFFF) << 0);
  rec->next_pn = (rec->next_pn & 0x0000FFFF) | (((packedRecVal[5] >> 0) & 0xFFFF) << 16);

  rec->sat_pn = (rec->sat_pn & 0xFFFFFFFE) | (((packedRecVal[6] >> 0) & 0x1) << 0);

  rec->fresh = (rec->fresh & 0xFFFFFFFE) | (((packedRecVal[6] >> 1) & 0x1) << 0);

  rec->valid = (rec->valid & 0xFFFFFFFE) | (((packedRecVal[7] >> 15) & 0x1) << 0);


  return AQ_RET_OK;
}


AQ_Retcode AQ_API_SetEgressSAKeyRecord
(
  AQ_API_Port* port,
  const AQ_API_SEC_EgressSAKeyRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[16];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSSAKEYRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(packedRecVal, 0, sizeof(uint16_t) * 16);

  packedRecVal[0] = (packedRecVal[0] & 0x0000) | (((rec->key[0] >> 0) & 0xFFFF) << 0);
  packedRecVal[1] = (packedRecVal[1] & 0x0000) | (((rec->key[0] >> 16) & 0xFFFF) << 0);

  packedRecVal[2] = (packedRecVal[2] & 0x0000) | (((rec->key[1] >> 0) & 0xFFFF) << 0);
  packedRecVal[3] = (packedRecVal[3] & 0x0000) | (((rec->key[1] >> 16) & 0xFFFF) << 0);

  packedRecVal[4] = (packedRecVal[4] & 0x0000) | (((rec->key[2] >> 0) & 0xFFFF) << 0);
  packedRecVal[5] = (packedRecVal[5] & 0x0000) | (((rec->key[2] >> 16) & 0xFFFF) << 0);

  packedRecVal[6] = (packedRecVal[6] & 0x0000) | (((rec->key[3] >> 0) & 0xFFFF) << 0);
  packedRecVal[7] = (packedRecVal[7] & 0x0000) | (((rec->key[3] >> 16) & 0xFFFF) << 0);

  packedRecVal[8] = (packedRecVal[8] & 0x0000) | (((rec->key[4] >> 0) & 0xFFFF) << 0);
  packedRecVal[9] = (packedRecVal[9] & 0x0000) | (((rec->key[4] >> 16) & 0xFFFF) << 0);

  packedRecVal[10] = (packedRecVal[10] & 0x0000) | (((rec->key[5] >> 0) & 0xFFFF) << 0);
  packedRecVal[11] = (packedRecVal[11] & 0x0000) | (((rec->key[5] >> 16) & 0xFFFF) << 0);

  packedRecVal[12] = (packedRecVal[12] & 0x0000) | (((rec->key[6] >> 0) & 0xFFFF) << 0);
  packedRecVal[13] = (packedRecVal[13] & 0x0000) | (((rec->key[6] >> 16) & 0xFFFF) << 0);

  packedRecVal[14] = (packedRecVal[14] & 0x0000) | (((rec->key[7] >> 0) & 0xFFFF) << 0);
  packedRecVal[15] = (packedRecVal[15] & 0x0000) | (((rec->key[7] >> 16) & 0xFFFF) << 0);


  AQ_API_SetRawSECEgressRecordVal(port, packedRecVal, 8, 2, AQ_API_ROWOFFSET_EGRESSSAKEYRECORD + tableIndex);
  AQ_API_SetRawSECEgressRecordVal(port, packedRecVal + 8, 8, 2, AQ_API_ROWOFFSET_EGRESSSAKEYRECORD + tableIndex - 32);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetEgressSAKeyRecord
(
  AQ_API_Port* port,
  AQ_API_SEC_EgressSAKeyRecord* rec,
  uint16_t tableIndex
)
{
  uint16_t packedRecVal[16];


  if (tableIndex >= AQ_API_NUMROWS_EGRESSSAKEYRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(rec, 0, sizeof(AQ_API_SEC_EgressSAKeyRecord));

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 8, 2, AQ_API_ROWOFFSET_EGRESSSAKEYRECORD + tableIndex);
  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal + 8, 8, 2, AQ_API_ROWOFFSET_EGRESSSAKEYRECORD + tableIndex - 32);

  rec->key[0] = (rec->key[0] & 0xFFFF0000) | (((packedRecVal[0] >> 0) & 0xFFFF) << 0);
  rec->key[0] = (rec->key[0] & 0x0000FFFF) | (((packedRecVal[1] >> 0) & 0xFFFF) << 16);

  rec->key[1] = (rec->key[1] & 0xFFFF0000) | (((packedRecVal[2] >> 0) & 0xFFFF) << 0);
  rec->key[1] = (rec->key[1] & 0x0000FFFF) | (((packedRecVal[3] >> 0) & 0xFFFF) << 16);

  rec->key[2] = (rec->key[2] & 0xFFFF0000) | (((packedRecVal[4] >> 0) & 0xFFFF) << 0);
  rec->key[2] = (rec->key[2] & 0x0000FFFF) | (((packedRecVal[5] >> 0) & 0xFFFF) << 16);

  rec->key[3] = (rec->key[3] & 0xFFFF0000) | (((packedRecVal[6] >> 0) & 0xFFFF) << 0);
  rec->key[3] = (rec->key[3] & 0x0000FFFF) | (((packedRecVal[7] >> 0) & 0xFFFF) << 16);

  rec->key[4] = (rec->key[4] & 0xFFFF0000) | (((packedRecVal[8] >> 0) & 0xFFFF) << 0);
  rec->key[4] = (rec->key[4] & 0x0000FFFF) | (((packedRecVal[9] >> 0) & 0xFFFF) << 16);

  rec->key[5] = (rec->key[5] & 0xFFFF0000) | (((packedRecVal[10] >> 0) & 0xFFFF) << 0);
  rec->key[5] = (rec->key[5] & 0x0000FFFF) | (((packedRecVal[11] >> 0) & 0xFFFF) << 16);

  rec->key[6] = (rec->key[6] & 0xFFFF0000) | (((packedRecVal[12] >> 0) & 0xFFFF) << 0);
  rec->key[6] = (rec->key[6] & 0x0000FFFF) | (((packedRecVal[13] >> 0) & 0xFFFF) << 16);

  rec->key[7] = (rec->key[7] & 0xFFFF0000) | (((packedRecVal[14] >> 0) & 0xFFFF) << 0);
  rec->key[7] = (rec->key[7] & 0x0000FFFF) | (((packedRecVal[15] >> 0) & 0xFFFF) << 16);


  return AQ_RET_OK;
}

/* End packfuncs */

AQ_Retcode AQ_API_GetEgressSCCounters
(
  AQ_API_Port* port,
  AQ_API_SEC_EgressSCCounters* counters,
  uint16_t SCIndex
)
{
  uint16_t packedRecVal[4];


  if (SCIndex >= AQ_API_NUMROWS_EGRESSSCRECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(counters, 0, sizeof(AQ_API_SEC_EgressSCCounters));

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, SCIndex * 8 + 4);
  counters->sc_protected_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->sc_protected_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, SCIndex * 8 + 5);
  counters->sc_encrypted_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->sc_encrypted_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, SCIndex * 8 + 6);
  counters->sc_protected_octets[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->sc_protected_octets[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, SCIndex * 8 + 7);
  counters->sc_encrypted_octets[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->sc_encrypted_octets[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetEgressSACounters
(
  AQ_API_Port* port,
  AQ_API_SEC_EgressSACounters* counters,
  uint16_t SAIndex
)
{
  uint16_t packedRecVal[4];


  if (SAIndex >= AQ_API_NUMROWS_EGRESSSARECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(counters, 0, sizeof(AQ_API_SEC_EgressSACounters));

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, SAIndex * 8 + 0);
  counters->sa_hit_drop_redirect[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->sa_hit_drop_redirect[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, SAIndex * 8 + 1);
  counters->sa_protected2_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->sa_protected2_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, SAIndex * 8 + 2);
  counters->sa_protected_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->sa_protected_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, SAIndex * 8 + 3);
  counters->sa_encrypted_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->sa_encrypted_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetEgressCommonCounters
(
  AQ_API_Port* port,
  AQ_API_SEC_EgressCommonCounters* counters
)
{
  uint16_t packedRecVal[4];


  memset(counters, 0, sizeof(AQ_API_SEC_EgressCommonCounters));

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, 256 + 0);
  counters->ctl_pkt[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->ctl_pkt[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, 256 + 1);
  counters->unknown_sa_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->unknown_sa_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, 256 + 2);
  counters->untagged_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->untagged_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, 256 + 3);
  counters->too_long[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->too_long[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, 256 + 4);
  counters->ecc_error_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->ecc_error_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECEgressRecordVal(port, packedRecVal, 4, 3, 256 + 5);
  counters->unctrl_hit_drop_redir[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->unctrl_hit_drop_redir[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  return AQ_RET_OK;
}


AQ_Retcode   AQ_API_ClearEgressCounters 
(    
 AQ_API_Port*   port
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssEgressControlRegister, controlReg)

  AQ_Retcode retval;
  unsigned int word0 = 0;
  unsigned int word1 = 0;
  
  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD: 
      memset(controlReg_space, 0, sizeof(AQ_MssEgressControlRegister_HHD));
      break;

    case AQ_DEVICE_EUR:
      memset(controlReg_space, 0, sizeof(AQ_MssEgressControlRegister_EUR));
      break;

    case AQ_DEVICE_CAL:
      memset(controlReg_space, 0, sizeof(AQ_MssEgressControlRegister_CAL));
      break;

    case AQ_DEVICE_RHEA:
      memset(controlReg_space, 0, sizeof(AQ_MssEgressControlRegister_RHEA));
      break;
  }

  /* NOTE: MSS registers must always be read/written as adjacent pairs.
   * For instance, to write either or both 1E.80A0 and 1E.80A1, we have to:
   * 1. Write 1E.80A0 first
   * 2. Then write 1E.80A1 
   * These writes need to be performed consecutively, and to ensure this
   * we use the PIF mailbox to delegate the reads/writes to the FW (HHD only; 
   * on EUR, it is not necessary to use the PIF mailbox.). */

  /* Toggle the Egress MIB clear bit 0->1->0 */

  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      retval = AQ_API_MDIO_Read_PIFMailbox2(port, 
          AQ_MssEgressControlRegister_HHD_mmdAddress,
          AQ_MssEgressControlRegister_HHD_baseRegisterAddress, 
          &word0,
          AQ_MssEgressControlRegister_HHD_mmdAddress,
          AQ_MssEgressControlRegister_HHD_baseRegisterAddress + 1, 
          &word1);
      if (retval != AQ_RET_OK) return retval;
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD, controlReg, 0, word0);
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD, controlReg, 1, word1);

      /* REGDOC: Assign to local representation of bitfield (HHD: 1E.5002.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, AQ_MssEgressControlRegister, 
          controlReg, mssEgressClearCounter, 0);
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssEgressControlRegister_HHD_mmdAddress,
          AQ_MssEgressControlRegister_HHD_baseRegisterAddress, 
          controlReg_HHD->u0.word_0,
          AQ_MssEgressControlRegister_HHD_mmdAddress,
          AQ_MssEgressControlRegister_HHD_baseRegisterAddress + 1, 
          controlReg_HHD->u1.word_1);
      if (retval != AQ_RET_OK) return retval;

      /* REGDOC: Assign to local representation of bitfield (HHD: 1E.5002.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, AQ_MssEgressControlRegister, 
          controlReg, mssEgressClearCounter, 1);
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssEgressControlRegister_HHD_mmdAddress,
          AQ_MssEgressControlRegister_HHD_baseRegisterAddress, 
          controlReg_HHD->u0.word_0,
          AQ_MssEgressControlRegister_HHD_mmdAddress,
          AQ_MssEgressControlRegister_HHD_baseRegisterAddress + 1, 
          controlReg_HHD->u1.word_1);
      if (retval != AQ_RET_OK) return retval;

      /* REGDOC: Assign to local representation of bitfield (HHD: 1E.5002.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, AQ_MssEgressControlRegister, 
          controlReg, mssEgressClearCounter, 0);
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssEgressControlRegister_HHD_mmdAddress,
          AQ_MssEgressControlRegister_HHD_baseRegisterAddress, 
          controlReg_HHD->u0.word_0,
          AQ_MssEgressControlRegister_HHD_mmdAddress,
          AQ_MssEgressControlRegister_HHD_baseRegisterAddress + 1, 
          controlReg_HHD->u1.word_1);
      if (retval != AQ_RET_OK) return retval;
      
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 0, 
          /* REGDOC: Read register (EUR/CAL/RHEA: 1E.5002) */
          AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressControlRegister, 0));
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 1, 
          /* REGDOC: Read register (EUR/CAL/RHEA: 1E.5002 + 1) */
          AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressControlRegister, 1));

      /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 1E.5002.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_MssEgressControlRegister, 
          controlReg, mssEgressClearCounter, 0);
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5002) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressControlRegister, 0,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5002 + 1) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressControlRegister, 1,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 1));

      /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 1E.5002.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_MssEgressControlRegister, 
          controlReg, mssEgressClearCounter, 1);
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5002) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressControlRegister, 0,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5002 + 1) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressControlRegister, 1,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 1));

      /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 1E.5002.B) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_MssEgressControlRegister, 
          controlReg, mssEgressClearCounter, 0);
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5002) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressControlRegister, 0,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.5002 + 1) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssEgressControlRegister, 1,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 1));

      break;
  }

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressSACounters
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressSACounters* counters,
  uint16_t SAIndex
)
{
  uint16_t packedRecVal[4];


  if (SAIndex >= AQ_API_NUMROWS_INGRESSSARECORD)
    return AQ_RET_SEC_TABLE_INDEX_OOR;

  memset(counters, 0, sizeof(AQ_API_SEC_IngressSACounters));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 0);
  counters->untagged_hit_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->untagged_hit_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 1);
  counters->ctrl_hit_drop_redir_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->ctrl_hit_drop_redir_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 2);
  counters->not_using_sa[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->not_using_sa[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 3);
  counters->unused_sa[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->unused_sa[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 4);
  counters->not_valid_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->not_valid_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 5);
  counters->invalid_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->invalid_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 6);
  counters->ok_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->ok_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 7);
  counters->late_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->late_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 8);
  counters->delayed_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->delayed_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 9);
  counters->unchecked_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->unchecked_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 10);
  counters->validated_octets[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->validated_octets[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, SAIndex * 12 + 11);
  counters->decrypted_octets[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->decrypted_octets[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  return AQ_RET_OK;
}


AQ_Retcode AQ_API_GetIngressCommonCounters
(
  AQ_API_Port* port,
  AQ_API_SEC_IngressCommonCounters* counters
)
{
  uint16_t packedRecVal[4];


  memset(counters, 0, sizeof(AQ_API_SEC_IngressCommonCounters));

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 0);
  counters->ctl_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->ctl_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 1);
  counters->tagged_miss_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->tagged_miss_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 2);
  counters->untagged_miss_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->untagged_miss_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 3);
  counters->notag_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->notag_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 4);
  counters->untagged_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->untagged_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 5);
  counters->bad_tag_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->bad_tag_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 6);
  counters->no_sci_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->no_sci_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 7);
  counters->unknown_sci_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->unknown_sci_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 8);
  counters->ctrl_prt_pass_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->ctrl_prt_pass_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 9);
  counters->unctrl_prt_pass_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->unctrl_prt_pass_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 10);
  counters->ctrl_prt_fail_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->ctrl_prt_fail_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 11);
  counters->unctrl_prt_fail_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->unctrl_prt_fail_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 12);
  counters->too_long_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->too_long_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 13);
  counters->igpoc_ctl_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->igpoc_ctl_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 14);
  counters->ecc_error_pkts[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->ecc_error_pkts[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  AQ_API_GetRawSECIngressRecordVal(port, packedRecVal, 4, 6, 385 + 15);
  counters->unctrl_hit_drop_redir[0] = packedRecVal[0] | (packedRecVal[1] << 16);
  counters->unctrl_hit_drop_redir[1] = packedRecVal[2] | (packedRecVal[3] << 16);

  return AQ_RET_OK;
}


AQ_Retcode   AQ_API_ClearIngressCounters 
(    
 AQ_API_Port*   port
)
{
  AQ_API_DeclareLocalStruct_DeviceRestricted(HHD_EUR_CAL_RHEA, 
      AQ_MssIngressControlRegister, controlReg)

  AQ_Retcode retval;
  unsigned int word0 = 0;
  unsigned int word1 = 0;
  
  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD: 
      memset(controlReg_space, 0, sizeof(AQ_MssIngressControlRegister_HHD));
      break;

    case AQ_DEVICE_EUR:
      memset(controlReg_space, 0, sizeof(AQ_MssIngressControlRegister_EUR));
      break;

    case AQ_DEVICE_CAL:
      memset(controlReg_space, 0, sizeof(AQ_MssIngressControlRegister_CAL));
      break;

    case AQ_DEVICE_RHEA:
      memset(controlReg_space, 0, sizeof(AQ_MssIngressControlRegister_RHEA));
      break;
  }

  /* NOTE: MSS registers must always be read/written as adjacent pairs.
   * For instance, to write either or both 1E.80A0 and 1E.80A1, we have to:
   * 1. Write 1E.80A0 first
   * 2. Then write 1E.80A1 
   * These writes need to be performed consecutively, and to ensure this
   * we use the PIF mailbox to delegate the reads/writes to the FW (HHD only; 
   * on EUR, it is not necessary to use the PIF mailbox.). */

  /* Toggle the Ingress MIB clear bit 0->1->0 */
    
  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      retval = AQ_API_MDIO_Read_PIFMailbox2(port, 
          AQ_MssIngressControlRegister_HHD_mmdAddress,
          AQ_MssIngressControlRegister_HHD_baseRegisterAddress, 
          &word0,
          AQ_MssIngressControlRegister_HHD_mmdAddress,
          AQ_MssIngressControlRegister_HHD_baseRegisterAddress + 1, 
          &word1);
      if (retval != AQ_RET_OK) return retval;
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD, controlReg, 0, word0);
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(HHD, controlReg, 1, word1);

      /* REGDOC: Assign to local representation of bitfield (HHD: 1E.800E.8) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, AQ_MssIngressControlRegister, 
          controlReg, mssIngressClearCount, 0);
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssIngressControlRegister_HHD_mmdAddress,
          AQ_MssIngressControlRegister_HHD_baseRegisterAddress, 
          controlReg_HHD->u0.word_0,
          AQ_MssIngressControlRegister_HHD_mmdAddress,
          AQ_MssIngressControlRegister_HHD_baseRegisterAddress + 1, 
          controlReg_HHD->u1.word_1);
      if (retval != AQ_RET_OK) return retval;

      /* REGDOC: Assign to local representation of bitfield (HHD: 1E.800E.8) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, AQ_MssIngressControlRegister, 
          controlReg, mssIngressClearCount, 1);
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssIngressControlRegister_HHD_mmdAddress,
          AQ_MssIngressControlRegister_HHD_baseRegisterAddress, 
          controlReg_HHD->u0.word_0,
          AQ_MssIngressControlRegister_HHD_mmdAddress,
          AQ_MssIngressControlRegister_HHD_baseRegisterAddress + 1, 
          controlReg_HHD->u1.word_1);
      if (retval != AQ_RET_OK) return retval;

      /* REGDOC: Assign to local representation of bitfield (HHD: 1E.800E.8) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(HHD, AQ_MssIngressControlRegister, 
          controlReg, mssIngressClearCount, 0);
      retval = AQ_API_MDIO_Write_PIFMailbox2(port, 
          AQ_MssIngressControlRegister_HHD_mmdAddress,
          AQ_MssIngressControlRegister_HHD_baseRegisterAddress, 
          controlReg_HHD->u0.word_0,
          AQ_MssIngressControlRegister_HHD_mmdAddress,
          AQ_MssIngressControlRegister_HHD_baseRegisterAddress + 1, 
          controlReg_HHD->u1.word_1);
      if (retval != AQ_RET_OK) return retval;
      
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA:
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 0, 
          /* REGDOC: Read register (EUR/CAL/RHEA: 1E.800E) */
          AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressControlRegister, 0));
      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 1, 
          /* REGDOC: Read register (EUR/CAL/RHEA: 1E.800E + 1) */
          AQ_API_ReadRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressControlRegister, 1));

      /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 1E.800E.8) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_MssIngressControlRegister, 
          controlReg, mssIngressClearCount, 0);
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.800E) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressControlRegister, 0,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.800E + 1) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressControlRegister, 1,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 1));

      /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 1E.800E.8) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_MssIngressControlRegister, 
          controlReg, mssIngressClearCount, 1);
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.800E) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressControlRegister, 0,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.800E + 1) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressControlRegister, 1,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 1));

      /* REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 1E.800E.8) */
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_MssIngressControlRegister, 
          controlReg, mssIngressClearCount, 0);
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.800E) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressControlRegister, 0,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 0));
      /* REGDOC: Write register (EUR/CAL/RHEA: 1E.800E + 1) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_MssIngressControlRegister, 1,
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, controlReg, 1));

      break;
  }

  return AQ_RET_OK;
}

AQ_Retcode AQ_API_SetTestModeControl
(
  AQ_API_Port*  port,
  AQ_API_TestModeControl testModeControl
)
{
  unsigned int channelMaskValue;

  AQ_API_DeclareLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister)

  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA: 

      AQ_API_AssignWordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, testModeControlRegister, 8, 
          /* REGDOC: Read register (EUR/CAL/RHEA: 01.C41A) */
          AQ_API_ReadRegister(port->PHY_ID, AQ_PmaTransmitReservedVendorProvisioning, 8));
      
      switch (testModeControl.testModeBaudRate)
      {
        case AQ_API_BAUD_AUTO:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 0);
          break;
        case AQ_API_BAUD_125:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 1);
          break;
        case AQ_API_BAUD_160:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 2);
          break;
        case AQ_API_BAUD_200:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 3);
          break;
        case AQ_API_BAUD_250:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 4);
          break;
        case AQ_API_BAUD_300:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 5);
          break;
        case AQ_API_BAUD_320:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 6);
          break;
        case AQ_API_BAUD_400:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 7);
          break;
        case AQ_API_BAUD_500:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 8);
          break;
        case AQ_API_BAUD_800:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 9);
          break;
        case AQ_API_BAUD_UNKNOWN:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeBaudRate, 0);
          break;
      }

      switch (testModeControl.testModeConstellation)
      {
        case AQ_API_CONSTELLATION_AUTO:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 0);
          break;
        case AQ_API_PAM16:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 1);
          break;
        case AQ_API_DSQ128:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 2);
          break;
        case AQ_API_RESERVED:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 3);
          break;
        case AQ_API_SQ64:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 4);
          break;
        case AQ_API_1000BASE_T:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 5);
          break;
        case AQ_API_100BASE_TX:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 6);
          break;
        case AQ_API_DSQ32:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 7);
          break;
        case AQ_API_DSQ8:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 8);
          break;
        case AQ_API_SQ256:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 9);
          break;
        case AQ_API_SQ16:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 10);
          break;
        case AQ_API_PAM4:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 11);
          break;
        case AQ_API_CONSTELLATION_UNKNOWN:
          /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
          AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeConstellation, 0);
          break;
      }

      /* For backward compatibility True interprets as Enabled but the actual bit value is 0, so we invert the bits before writing*/
      channelMaskValue = (testModeControl.testModeDisableMask.channelD ^ 1) << 3 | (testModeControl.testModeDisableMask.channelC ^ 1) << 2 | 
                    (testModeControl.testModeDisableMask.channelB ^ 1) << 1 | (testModeControl.testModeDisableMask.channelA ^ 1);

      /* REGDOC: REGDOC: Assign to local representation of bitfield (EUR/CAL/RHEA: 01.C41A.3:0) */ 
      AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning, testModeControlRegister, testModeActivePairDisableMask, channelMaskValue);

      /* REGDOC: Write register (EUR/CAL/RHEA: 01.C41A) */
      AQ_API_WriteRegister_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_PmaTransmitReservedVendorProvisioning, 8, 
          AQ_API_WordOfLocalStruct_DeviceRestricted(EUR_CAL_RHEA, testModeControlRegister, 8));
    }

  return AQ_RET_OK;

}


AQ_Retcode AQ_API_GetTestModeControl
(
  AQ_API_Port*  port,
  AQ_API_TestModeControl* testModeControl
)
{

  AQ_API_Variable_DeviceRestricted(EUR_CAL_RHEA, AQ_PmaTransmitReservedVendorProvisioning)

  unsigned int baudRateValue;
  unsigned int constellationValue;
  unsigned int channelMaskValue;

  switch (port->device)
  {    
    case AQ_DEVICE_APPIA:
    case AQ_DEVICE_HHD:
      break;

    case AQ_DEVICE_EUR:
    case AQ_DEVICE_CAL:
    case AQ_DEVICE_RHEA: 

      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 01.C41A.B:8) */
      AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_PmaTransmitReservedVendorProvisioning, testModeBaudRate, baudRateValue);
      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 01.C41A.7:4) */
      AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_PmaTransmitReservedVendorProvisioning, testModeConstellation, constellationValue);
      /* REGDOC: Read bitfield (EUR/CAL/RHEA: 01.C41A.3:0) */
      AQ_API_Get_DeviceRestricted(EUR_CAL_RHEA, port->PHY_ID, AQ_PmaTransmitReservedVendorProvisioning, testModeActivePairDisableMask, channelMaskValue);

      switch (baudRateValue)
      {
        case 0:
          testModeControl->testModeBaudRate = AQ_API_BAUD_AUTO;
          break;
        case 1:
          testModeControl->testModeBaudRate = AQ_API_BAUD_125;
          break;
        case 2:
          testModeControl->testModeBaudRate = AQ_API_BAUD_160;
          break;
        case 3:
          testModeControl->testModeBaudRate = AQ_API_BAUD_200;
          break;
        case 4:
          testModeControl->testModeBaudRate = AQ_API_BAUD_250;
          break;
        case 5:
          testModeControl->testModeBaudRate = AQ_API_BAUD_300;
          break;
        case 6:
          testModeControl->testModeBaudRate = AQ_API_BAUD_320;
          break;
        case 7:
          testModeControl->testModeBaudRate = AQ_API_BAUD_400;
          break;
        case 8:
          testModeControl->testModeBaudRate = AQ_API_BAUD_500;
          break;
        case 9:
          testModeControl->testModeBaudRate = AQ_API_BAUD_800;
          break;
        default:
          testModeControl->testModeBaudRate = AQ_API_BAUD_UNKNOWN;
          break;

      }

      switch (constellationValue)
      {
        case 0:
          testModeControl->testModeConstellation = AQ_API_CONSTELLATION_AUTO;
          break;
        case 1:
          testModeControl->testModeConstellation = AQ_API_PAM16;
          break;
        case 2:
          testModeControl->testModeConstellation = AQ_API_DSQ128;
          break;
        case 3:
          testModeControl->testModeConstellation = AQ_API_RESERVED;
          break;
        case 4:
          testModeControl->testModeConstellation = AQ_API_SQ64;
          break;
        case 5:
          testModeControl->testModeConstellation = AQ_API_1000BASE_T;
          break;
        case 6:
          testModeControl->testModeConstellation = AQ_API_100BASE_TX;
          break;
        case 7:
          testModeControl->testModeConstellation = AQ_API_DSQ32;
          break;
        case 8:
          testModeControl->testModeConstellation = AQ_API_DSQ8;
          break;
        case 9:
          testModeControl->testModeConstellation = AQ_API_SQ256;
          break;
        case 10:
          testModeControl->testModeConstellation = AQ_API_SQ16;
          break;
        case 11:
          testModeControl->testModeConstellation = AQ_API_PAM4;
          break;
        default:
          testModeControl->testModeConstellation = AQ_API_CONSTELLATION_UNKNOWN;
          break;
      }

      /* For both backward compatibility and being humanly logical channelx = True means the channel is Enabled but the actual bit value is 0 */
      /* If bit 0 is 1*/
      if (channelMaskValue & 0x1) 
        testModeControl->testModeDisableMask.channelA = False;
      else 
        testModeControl->testModeDisableMask.channelA = True;

      /* If bit 1 is 1*/
      if (channelMaskValue & 0x2) 
        testModeControl->testModeDisableMask.channelB = False;
      else 
        testModeControl->testModeDisableMask.channelB = True;

      /* If bit 2 is 1*/
      if (channelMaskValue & 0x4) 
          testModeControl->testModeDisableMask.channelC = False;
      else 
          testModeControl->testModeDisableMask.channelC = True;

      /* If bit 3 is 1*/
      if (channelMaskValue & 0x8) 
          testModeControl->testModeDisableMask.channelD = False;
      else 
          testModeControl->testModeDisableMask.channelD = True;
    }

  return AQ_RET_OK;

}


AQ_Retcode AQ_API_GangloadProvTableExtension
(
  AQ_API_Port** ports,
  unsigned int numPorts,
  unsigned int* provisioningAddresses,
  uint8_t gangload_MDIO_address,
  AQ_API_Port* gangloadPort,
  unsigned int provExtensionSize,
  uint8_t* provTableExtensionImage
)
{
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalReservedStatus)
  AQ_API_Variable_DeviceRestricted(HHD_EUR_CAL_RHEA, AQ_GlobalReservedProvisioning)
  
  unsigned int provTerminalOrg = 0;
  unsigned int stallState = 0;
  AQ_Retcode resultCode;
  int i;
  uint8_t provBuffer[AQ_PHY_IMAGE_PROVTABLE_MAXSIZE];
  uint16_t recordedGGP1Values[AQ_MAX_NUM_PHY_IDS];
  uint16_t currentSize, remainBytes;
  AQ_API_Port* port = NULL;

  /* Check if the FW is stalled */
  for (i = 0; i < numPorts; i++)
  {
    port = ports[i];
    /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.C887.E) */
    AQ_API_Get_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedStatus, powerUpStallStatus, stallState);
  
    if (!stallState)
    { 
    #ifdef AQ_VERBOSE
      AQ_API_Print("Phy %d is not stalled.\n", i);
    #endif

      return AQ_RET_FW_NOT_STALLED; 
    }
  }

  /* Check whether there is enough space for new prov block*/
  resultCode = GetProvTableTerm(ports[0], &provTerminalOrg);
  if (resultCode != AQ_RET_OK)
  {
  #ifdef AQ_VERBOSE
    AQ_API_Print("Check provisioning terminal resultCode: %d\n", resultCode);
  #endif
    return AQ_RET_BOOTLOAD_PROVADDR_OOR; 
  }

  #ifdef AQ_VERBOSE
    AQ_API_Print("Provisioning terminal at 0x%04X\n", provTerminalOrg);
  #endif
  if (provTerminalOrg + provExtensionSize + 2 > AQ_PHY_IMAGE_PROVTABLE_OFFSET + AQ_PHY_IMAGE_PROVTABLE_MAXSIZE) 
  {
    return AQ_RET_BOOTLOAD_PROVTABLE_TOO_LARGE; 
  }
  
  currentSize = provTerminalOrg - AQ_PHY_IMAGE_PROVTABLE_OFFSET;
  
  /* Read the current provisining table */
  if (AQ_RET_OK != AQ_API_MemoryRead(ports[0], provBuffer, currentSize, AQ_DRAM_BASE_ADDRESS + AQ_PHY_IMAGE_PROVTABLE_OFFSET))
  {
    return AQ_RET_ERROR; 
  }

  /* Appened the new provisioning to the current one. */
  memcpy(provBuffer + currentSize, provTableExtensionImage, provExtensionSize);

  /* Word-align the provisiong to make sure no reads happen in AQ_API_MemoryWrite function*/
  remainBytes = (currentSize + provExtensionSize) % 4;
  if (remainBytes)
  {
    for (i = 0; i < 4 - remainBytes; i++) 
      provBuffer[currentSize + provExtensionSize + i] = 0;
  }

  /*--------------------------- Store 1E.C441 values for later use.  Enforce uniformity. ---------------------------*/
  for (i = 0; i < numPorts; i++) 
  {
    /* Record the original value of AQ_GlobalGeneralProvisioning.u1.word_1, 
     * so that we can restore it later after exiting gangload mode. */
    port = ports[i];
                            /* REGDOC: Read register (HHD/APPIA/EUR/CAL/RHEA: 1E.C440 + 1) */
    recordedGGP1Values[i] = AQ_API_ReadRegister(port->PHY_ID, AQ_GlobalGeneralProvisioning, 1);

    /* If any of the PHYs' GGP1 values don't match the others, set the appropriate
     * error code and return. */
    if (i > 0 && recordedGGP1Values[i] != recordedGGP1Values[0])
    {
    #ifdef AQ_VERBOSE
      AQ_API_Print("Non-uniform value of 1E.C441 found (expected 0x%X, found 0x%X)\n", 
          recordedGGP1Values[0], recordedGGP1Values[i]);
    #endif
      return AQ_RET_ERROR;
    }
  }
  
  /* Put all PHYs in gangload mode. */
  for (i = 0; i < numPorts; i++) 
  {
    AQ_API_EnableGangLoadMode(ports[i], provisioningAddresses[i], gangload_MDIO_address);
  }

  /* Write the whole new PROV Table */
  if (AQ_RET_OK != AQ_API_MemoryWrite(gangloadPort, provBuffer, provExtensionSize + currentSize + 4 - remainBytes, AQ_DRAM_BASE_ADDRESS + AQ_PHY_IMAGE_PROVTABLE_OFFSET))
  {
    AQ_API_DisableGangLoadMode(gangloadPort, recordedGGP1Values[0]);
    return AQ_RET_ERROR; 
  }

  AQ_API_DisableGangLoadMode(gangloadPort, recordedGGP1Values[0]);

  /* Set the new PROV Table terminal address */
  for (i = 0; i < numPorts; i++)
  {
    port = ports[i];
    if (AQ_RET_OK != SetProvTableTerm(port, provTerminalOrg + provExtensionSize)) 
    {
      SetProvTableTerm(port, provTerminalOrg);
      return AQ_RET_ERROR; 
    }
    else
      /* unstall the FW */
      /* REGDOC: Read bitfield (HHD/EUR/CAL/RHEA: 1E.C479.F) */
      AQ_API_Set_DeviceRestricted(HHD_EUR_CAL_RHEA, port->PHY_ID, AQ_GlobalReservedProvisioning, powerUpStall, 0);
  }
  
  return resultCode;
}

/*@}*/

#ifdef __cplusplus
}
#endif
