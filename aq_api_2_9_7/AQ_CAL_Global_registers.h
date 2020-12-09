/* ****************************** AQ_API Version 2.9.7 ****************************** */ 
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

/*! \file 
*   This file contains the data structures and doxygen comments
*   for the Global Registers block.
 */        

/*! \addtogroup registerMap
  @{
*/

/*! \defgroup Global_registers Global Registers
*   This module contains the data structures and doxygen comments
*   for the Global Registers block.
 */        
/***********************************************************************
*                     Copyright Aquantia Corp.
*                             Freeware
*
* $Date: 2017/11/09 $
*
* $Label: $
*
* Description:
*
*   This file contains the c header structures for the registers contained in the Global Registers block.
*
*   The bit fields in this structure are from LSbit to MSbit
*
***********************************************************************/


/*@{*/
#ifndef AQ_CAL_GLOBAL_REGS_HEADER
#define AQ_CAL_GLOBAL_REGS_HEADER


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Control 1: 1E.0000 */
/*                  Global Standard Control 1: 1E.0000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Control 1 */
  union
  {
    struct
    {
      unsigned int   reserved1 : 11;
                    /*! \brief 1E.0000.B R/WPD Low Power
                        AQ_GlobalStandardControl_1_CAL.u0.bits_0.lowPower

                        Provisionable Default = 0x0

                        1 = Low-power mode
                        0 = Normal operation
                        

                 <B>Notes:</B>
                        A one written to this register causes the chip to enter low-power mode. This bit puts the entire chip in low-power mode, with only the MDIO and microprocessor functioning, and turns off the analog front-end: i.e. places it in high-impedance mode. Setting this bit also sets all of the Low Power bits in the other MMDs.  */
      unsigned int   lowPower : 1;    /* 1E.0000.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Low-power mode
                        0 = Normal operation
                          */
      unsigned int   reserved0 : 3;
                    /*! \brief 1E.0000.F R/WSC Soft Reset
                        AQ_GlobalStandardControl_1_CAL.u0.bits_0.softReset

                        Default = 0x1

                        1 = Global soft reset
                        0 = Normal operation
                        

                 <B>Notes:</B>
                        Resets the entire PHY.
                        Setting this bit initiates a global soft reset on all of the digital logic not including the microprocessor (i.e. microprocessor is not reset). Upon completion of the reset sequence, this bit is set back to 0by the microprocessor. Note this bit is OR'ed with the individual MMD resets. This bit should be set to 0 before setting the individual MMD resets.  */
      unsigned int   softReset : 1;    /* 1E.0000.F  R/WSC      Default = 0x1 */
                     /* 1 = Global soft reset
                        0 = Normal operation
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStandardControl_1_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Device Identifier: 1E.0002 */
/*                  Global Standard Device Identifier: 1E.0002 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Device Identifier */
  union
  {
    struct
    {
                    /*! \brief 1E.0002.F:0 RO Device ID MSW [1F:10]
                        AQ_GlobalStandardDeviceIdentifier_CAL.u0.bits_0.deviceIdMSW

                        

                        Bits 31 - 16 of Device ID
  */
      unsigned int   deviceIdMSW : 16;    /* 1E.0002.F:0  RO       */
                     /* Bits 31 - 16 of Device ID  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Standard Device Identifier */
  union
  {
    struct
    {
                    /*! \brief 1E.0003.F:0 RO Device ID LSW [F:0]
                        AQ_GlobalStandardDeviceIdentifier_CAL.u1.bits_1.deviceIdLSW

                        

                        Bits 15 - 0 of Device ID
  */
      unsigned int   deviceIdLSW : 16;    /* 1E.0003.F:0  RO       */
                     /* Bits 15 - 0 of Device ID  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalStandardDeviceIdentifier_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Devices in Package: 1E.0005 */
/*                  Global Standard Devices in Package: 1E.0005 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Devices in Package */
  union
  {
    struct
    {
                    /*! \brief 1E.0005.0 ROS Clause 22 Registers Present
                        AQ_GlobalStandardDevicesInPackage_CAL.u0.bits_0.clause_22RegistersPresent

                        Default = 0x1

                        1 = Clause 22 registers are present in package
                        0 = Clause 22 registers are not present in package

                 <B>Notes:</B>
                        This is always set to 1 in the PHY, as there are Clause 22 registers in the device.  */
      unsigned int   clause_22RegistersPresent : 1;    /* 1E.0005.0  ROS      Default = 0x1 */
                     /* 1 = Clause 22 registers are present in package
                        0 = Clause 22 registers are not present in package  */
                    /*! \brief 1E.0005.1 ROS PMA Present
                        AQ_GlobalStandardDevicesInPackage_CAL.u0.bits_0.pmaPresent

                        Default = 0x1

                        1 = PMA is present in package
                        0 = PMA is not present 

                 <B>Notes:</B>
                        This is always set to 1 as there is PMA functionality in the PHY.  */
      unsigned int   pmaPresent : 1;    /* 1E.0005.1  ROS      Default = 0x1 */
                     /* 1 = PMA is present in package
                        0 = PMA is not present   */
                    /*! \brief 1E.0005.2 ROS WIS Present
                        AQ_GlobalStandardDevicesInPackage_CAL.u0.bits_0.wisPresent

                        Default = 0x0

                        1 = WIS is present in package
                        0 = WIS is not present in package

                 <B>Notes:</B>
                        This is always set to 0, as there is no WIS functionality in the PHY.  */
      unsigned int   wisPresent : 1;    /* 1E.0005.2  ROS      Default = 0x0 */
                     /* 1 = WIS is present in package
                        0 = WIS is not present in package  */
                    /*! \brief 1E.0005.3 ROS PCS Present
                        AQ_GlobalStandardDevicesInPackage_CAL.u0.bits_0.pcsPresent

                        Default = 0x1

                        1 = PCS is present in package
                        0 = PCS is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as there is PCS functionality in the PHY.  */
      unsigned int   pcsPresent : 1;    /* 1E.0005.3  ROS      Default = 0x1 */
                     /* 1 = PCS is present in package
                        0 = PCS is not present in package  */
                    /*! \brief 1E.0005.4 ROS PHY XS Present
                        AQ_GlobalStandardDevicesInPackage_CAL.u0.bits_0.phyXS_Present

                        Default = 0x1

                        1 = PHY XS is present in package
                        0 = PHY XS is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as there is a PHY XS interface in the PHY.  */
      unsigned int   phyXS_Present : 1;    /* 1E.0005.4  ROS      Default = 0x1 */
                     /* 1 = PHY XS is present in package
                        0 = PHY XS is not present in package  */
                    /*! \brief 1E.0005.5 ROS DTE XS Present
                        AQ_GlobalStandardDevicesInPackage_CAL.u0.bits_0.dteXsPresent

                        Default = 0x0

                        1 = DTE XS is present in package
                        0 = DTE XS is not present in package
                        

                 <B>Notes:</B>
                        This is always set to 0, as there is no DTE XAUI interface in the PHY.  */
      unsigned int   dteXsPresent : 1;    /* 1E.0005.5  ROS      Default = 0x0 */
                     /* 1 = DTE XS is present in package
                        0 = DTE XS is not present in package
                          */
                    /*! \brief 1E.0005.6 ROS TC Present
                        AQ_GlobalStandardDevicesInPackage_CAL.u0.bits_0.tcPresent

                        Default = 0x0

                        1 = TC is present in package
                        0 = TC is not present in package

                 <B>Notes:</B>
                        This is always set to 0, as there is no TC functionality in the PHY.  */
      unsigned int   tcPresent : 1;    /* 1E.0005.6  ROS      Default = 0x0 */
                     /* 1 = TC is present in package
                        0 = TC is not present in package  */
                    /*! \brief 1E.0005.7 ROS Autonegotiation Present
                        AQ_GlobalStandardDevicesInPackage_CAL.u0.bits_0.autonegotiationPresent

                        Default = 0x1

                        1 = Autonegotiation is present in package
                        0 = Autonegotiation is not present in package

                 <B>Notes:</B>
                        This is always set to 1, as there is Autonegotiation in the PHY.  */
      unsigned int   autonegotiationPresent : 1;    /* 1E.0005.7  ROS      Default = 0x1 */
                     /* 1 = Autonegotiation is present in package
                        0 = Autonegotiation is not present in package  */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStandardDevicesInPackage_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Vendor Devices in Package: 1E.0006 */
/*                  Global Standard Vendor Devices in Package: 1E.0006 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Vendor Devices in Package */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 1E.0006.D ROS Clause 22 Extension Present
                        AQ_GlobalStandardVendorDevicesInPackage_CAL.u0.bits_0.clause_22ExtensionPresent

                        Default = 0x1

                        1 = Clause 22 Extension is present in package
                        0 = Clause 22 Extension is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the GbE registers.  */
      unsigned int   clause_22ExtensionPresent : 1;    /* 1E.0006.D  ROS      Default = 0x1 */
                     /* 1 = Clause 22 Extension is present in package
                        0 = Clause 22 Extension is not present in package  */
                    /*! \brief 1E.0006.E ROS Vendor Specific Device #1 Present
                        AQ_GlobalStandardVendorDevicesInPackage_CAL.u0.bits_0.vendorSpecificDevice_1Present

                        Default = 0x1

                        1 = Device #1 is present in package
                        0 = Device #1 is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the global control registers.  */
      unsigned int   vendorSpecificDevice_1Present : 1;    /* 1E.0006.E  ROS      Default = 0x1 */
                     /* 1 = Device #1 is present in package
                        0 = Device #1 is not present in package  */
                    /*! \brief 1E.0006.F ROS Vendor Specific Device #2 Present
                        AQ_GlobalStandardVendorDevicesInPackage_CAL.u0.bits_0.vendorSpecificDevice_2Present

                        Default = 0x1

                        1 = Device #2 is present in package
                        0 = Device #2 is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the DSP PMA registers.  */
      unsigned int   vendorSpecificDevice_2Present : 1;    /* 1E.0006.F  ROS      Default = 0x1 */
                     /* 1 = Device #2 is present in package
                        0 = Device #2 is not present in package  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStandardVendorDevicesInPackage_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Status 2: 1E.0008 */
/*                  Global Standard Status 2: 1E.0008 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Status 2 */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 1E.0008.F:E ROS Device Present [1:0]
                        AQ_GlobalStandardStatus_2_CAL.u0.bits_0.devicePresent

                        Default = 0x2

                        [F:E]
                        0x3 = No device at this address
                        0x2 = Device present at this address
                        0x1 = No device at this address
                        0x0 = No device at this address

                 <B>Notes:</B>
                        This field is always set to 0x2, as the Global MMD resides here in the PHY.  */
      unsigned int   devicePresent : 2;    /* 1E.0008.F:E  ROS      Default = 0x2 */
                     /* [F:E]
                        0x3 = No device at this address
                        0x2 = Device present at this address
                        0x1 = No device at this address
                        0x0 = No device at this address  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStandardStatus_2_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common RAMBUS PMA Rx Idle Detect Control/Status: 1E.000D */
/*                  Global Common RAMBUS PMA Rx Idle Detect Control/Status: 1E.000D */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common RAMBUS PMA Rx Idle Detect Control/Status */
  union
  {
    struct
    {
                    /*! \brief 1E.000D.0 R/W Rambus PMA Rx Idle Detect Enable
                        AQ_GlobalCommonRambusPmaRxIdleDetectControl_status_CAL.u0.bits_0.rambusPmaRxIdleDetectEnable

                        Default = 0x0

                        Rx Idle Detect Enable
                        

                 <B>Notes:</B>
                        Rx Idle Detect Enable  */
      unsigned int   rambusPmaRxIdleDetectEnable : 1;    /* 1E.000D.0  R/W      Default = 0x0 */
                     /* Rx Idle Detect Enable
                          */
      unsigned int   reserved0 : 14;
                    /*! \brief 1E.000D.F RO Rambus PMA Rx Idle
                        AQ_GlobalCommonRambusPmaRxIdleDetectControl_status_CAL.u0.bits_0.rambusPmaRxIdle

                        

                        Rx Idle
                        

                 <B>Notes:</B>
                        Rx Idle  */
      unsigned int   rambusPmaRxIdle : 1;    /* 1E.000D.F  RO       */
                     /* Rx Idle
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonRambusPmaRxIdleDetectControl_status_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Package Identifier: 1E.000E */
/*                  Global Standard Package Identifier: 1E.000E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Package Identifier */
  union
  {
    struct
    {
                    /*! \brief 1E.000E.F:0 RO Package ID MSW [1F:10]
                        AQ_GlobalStandardPackageIdentifier_CAL.u0.bits_0.packageIdMSW

                        

                        Bits 31- 16 of Package ID
  */
      unsigned int   packageIdMSW : 16;    /* 1E.000E.F:0  RO       */
                     /* Bits 31- 16 of Package ID  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Standard Package Identifier */
  union
  {
    struct
    {
                    /*! \brief 1E.000F.F:0 RO Package ID LSW [F:0]
                        AQ_GlobalStandardPackageIdentifier_CAL.u1.bits_1.packageIdLSW

                        

                        Bits 15 - 0 of Package ID
  */
      unsigned int   packageIdLSW : 16;    /* 1E.000F.F:0  RO       */
                     /* Bits 15 - 0 of Package ID  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalStandardPackageIdentifier_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Firmware ID: 1E.0020 */
/*                  Global Firmware ID: 1E.0020 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Firmware ID */
  union
  {
    struct
    {
                    /*! \brief 1E.0020.7:0 RO Firmware Minor Revision Number [7:0]
                        AQ_GlobalFirmwareID_CAL.u0.bits_0.firmwareMinorRevisionNumber

                        

                        [7:0] = Minor revision number

                 <B>Notes:</B>
                        
                        
                        The lower six bits of major and minor firmware revision are exchanged in autonegotiation when the PHYID message is sent.  */
      unsigned int   firmwareMinorRevisionNumber : 8;    /* 1E.0020.7:0  RO       */
                     /* [7:0] = Minor revision number  */
                    /*! \brief 1E.0020.F:8 RO Firmware Major Revision Number [7:0]
                        AQ_GlobalFirmwareID_CAL.u0.bits_0.firmwareMajorRevisionNumber

                        

                        [F:8] = Major revision number

                 <B>Notes:</B>
                        
                        
                        The lower six bits of major and minor firmware revision are exchanged in autonegotiation when the PHYID message is sent.  */
      unsigned int   firmwareMajorRevisionNumber : 8;    /* 1E.0020.F:8  RO       */
                     /* [F:8] = Major revision number  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalFirmwareID_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Programmable MMD Register: 1E.0080 */
/*                  Global Programmable MMD Register: 1E.0080 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0080.A:0 R/W Remapped MMD Address 0 [A:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u0.bits_0.remappedMMD_Address_0

                        Default = 0x318

                        Remapped MMD Address
                        

                 <B>Notes:</B>
                        Global register address to remap
                          */
      unsigned int   remappedMMD_Address_0 : 11;    /* 1E.0080.A:0  R/W      Default = 0x318 */
                     /* Remapped MMD Address
                          */
                    /*! \brief 1E.0080.F:B R/W Matching Device Address 0 [F:B]
                        AQ_GlobalProgrammableMMD_Register_CAL.u0.bits_0.matchingDeviceAddress_0

                        Default = 0x0F

                        Programmable Device Address
                        

                 <B>Notes:</B>
                        MDIO device address to match
                          */
      unsigned int   matchingDeviceAddress_0 : 5;    /* 1E.0080.F:B  R/W      Default = 0x0F */
                     /* Programmable Device Address
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0081.F:0 R/W Matching MMD Address 0 [F:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u1.bits_1.matchingMMD_Address_0

                        Default = 0xFFFF

                        Programmable MMD Address
                        

                 <B>Notes:</B>
                        MDIO MMD address to match
                          */
      unsigned int   matchingMMD_Address_0 : 16;    /* 1E.0081.F:0  R/W      Default = 0xFFFF */
                     /* Programmable MMD Address
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0082.A:0 R/W Remapped MMD Address 1 [A:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u2.bits_2.remappedMMD_Address_1

                        Default = 0x319

                        Remapped MMD Address
                        

                 <B>Notes:</B>
                        Global register address to remap
                          */
      unsigned int   remappedMMD_Address_1 : 11;    /* 1E.0082.A:0  R/W      Default = 0x319 */
                     /* Remapped MMD Address
                          */
                    /*! \brief 1E.0082.F:B R/W Matching Device Address 1 [F:B]
                        AQ_GlobalProgrammableMMD_Register_CAL.u2.bits_2.matchingDeviceAddress_1

                        Default = 0x0F

                        Programmable Device Address
                        

                 <B>Notes:</B>
                        MDIO device address to match
                          */
      unsigned int   matchingDeviceAddress_1 : 5;    /* 1E.0082.F:B  R/W      Default = 0x0F */
                     /* Programmable Device Address
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0083.F:0 R/W Matching MMD Address 1 [F:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u3.bits_3.matchingMMD_Address_1

                        Default = 0xFFFF

                        Programmable MMD Address
                        

                 <B>Notes:</B>
                        MDIO MMD address to match
                          */
      unsigned int   matchingMMD_Address_1 : 16;    /* 1E.0083.F:0  R/W      Default = 0xFFFF */
                     /* Programmable MMD Address
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0084.A:0 R/W Remapped MMD Address 2 [A:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u4.bits_4.remappedMMD_Address_2

                        Default = 0x31A

                        Remapped MMD Address
                        

                 <B>Notes:</B>
                        Global register address to remap
                          */
      unsigned int   remappedMMD_Address_2 : 11;    /* 1E.0084.A:0  R/W      Default = 0x31A */
                     /* Remapped MMD Address
                          */
                    /*! \brief 1E.0084.F:B R/W Matching Device Address 2 [F:B]
                        AQ_GlobalProgrammableMMD_Register_CAL.u4.bits_4.matchingDeviceAddress_2

                        Default = 0x0F

                        Programmable Device Address
                        

                 <B>Notes:</B>
                        MDIO device address to match
                          */
      unsigned int   matchingDeviceAddress_2 : 5;    /* 1E.0084.F:B  R/W      Default = 0x0F */
                     /* Programmable Device Address
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0085.F:0 R/W Matching MMD Address 2 [F:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u5.bits_5.matchingMMD_Address_2

                        Default = 0xFFFF

                        Programmable MMD Address
                        

                 <B>Notes:</B>
                        MDIO MMD address to match
                          */
      unsigned int   matchingMMD_Address_2 : 16;    /* 1E.0085.F:0  R/W      Default = 0xFFFF */
                     /* Programmable MMD Address
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0086.A:0 R/W Remapped MMD Address 3 [A:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u6.bits_6.remappedMMD_Address_3

                        Default = 0x31B

                        Remapped MMD Address
                        

                 <B>Notes:</B>
                        Global register address to remap
                          */
      unsigned int   remappedMMD_Address_3 : 11;    /* 1E.0086.A:0  R/W      Default = 0x31B */
                     /* Remapped MMD Address
                          */
                    /*! \brief 1E.0086.F:B R/W Matching Device Address 3 [F:B]
                        AQ_GlobalProgrammableMMD_Register_CAL.u6.bits_6.matchingDeviceAddress_3

                        Default = 0x0F

                        Programmable Device Address
                        

                 <B>Notes:</B>
                        MDIO device address to match
                          */
      unsigned int   matchingDeviceAddress_3 : 5;    /* 1E.0086.F:B  R/W      Default = 0x0F */
                     /* Programmable Device Address
                          */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0087.F:0 R/W Matching MMD Address 3 [F:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u7.bits_7.matchingMMD_Address_3

                        Default = 0xFFFF

                        Programmable MMD Address
                        

                 <B>Notes:</B>
                        MDIO MMD address to match
                          */
      unsigned int   matchingMMD_Address_3 : 16;    /* 1E.0087.F:0  R/W      Default = 0xFFFF */
                     /* Programmable MMD Address
                          */
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0088.A:0 R/W Remapped MMD Address 4 [A:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u8.bits_8.remappedMMD_Address_4

                        Default = 0x31C

                        Remapped MMD Address
                        

                 <B>Notes:</B>
                        Global register address to remap
                          */
      unsigned int   remappedMMD_Address_4 : 11;    /* 1E.0088.A:0  R/W      Default = 0x31C */
                     /* Remapped MMD Address
                          */
                    /*! \brief 1E.0088.F:B R/W Matching Device Address 4 [F:B]
                        AQ_GlobalProgrammableMMD_Register_CAL.u8.bits_8.matchingDeviceAddress_4

                        Default = 0x0F

                        Programmable Device Address
                        

                 <B>Notes:</B>
                        MDIO device address to match
                          */
      unsigned int   matchingDeviceAddress_4 : 5;    /* 1E.0088.F:B  R/W      Default = 0x0F */
                     /* Programmable Device Address
                          */
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.0089.F:0 R/W Matching MMD Address 4 [F:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u9.bits_9.matchingMMD_Address_4

                        Default = 0xFFFF

                        Programmable MMD Address
                        

                 <B>Notes:</B>
                        MDIO MMD address to match
                          */
      unsigned int   matchingMMD_Address_4 : 16;    /* 1E.0089.F:0  R/W      Default = 0xFFFF */
                     /* Programmable MMD Address
                          */
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.008A.A:0 R/W Remapped MMD Address 5 [A:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u10.bits_10.remappedMMD_Address_5

                        Default = 0x31D

                        Remapped MMD Address
                        

                 <B>Notes:</B>
                        Global register address to remap
                          */
      unsigned int   remappedMMD_Address_5 : 11;    /* 1E.008A.A:0  R/W      Default = 0x31D */
                     /* Remapped MMD Address
                          */
                    /*! \brief 1E.008A.F:B R/W Matching Device Address 5 [F:B]
                        AQ_GlobalProgrammableMMD_Register_CAL.u10.bits_10.matchingDeviceAddress_5

                        Default = 0x0F

                        Programmable Device Address
                        

                 <B>Notes:</B>
                        MDIO device address to match
                          */
      unsigned int   matchingDeviceAddress_5 : 5;    /* 1E.008A.F:B  R/W      Default = 0x0F */
                     /* Programmable Device Address
                          */
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Union for bit and word level access of word 11 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.008B.F:0 R/W Matching MMD Address 5 [F:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u11.bits_11.matchingMMD_Address_5

                        Default = 0xFFFF

                        Programmable MMD Address
                        

                 <B>Notes:</B>
                        MDIO MMD address to match
                          */
      unsigned int   matchingMMD_Address_5 : 16;    /* 1E.008B.F:0  R/W      Default = 0xFFFF */
                     /* Programmable MMD Address
                          */
    } bits_11;
    uint16_t word_11;
  } u11;
  /*! \brief Union for bit and word level access of word 12 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.008C.A:0 R/W Remapped MMD Address 6 [A:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u12.bits_12.remappedMMD_Address_6

                        Default = 0x31E

                        Remapped MMD Address
                        

                 <B>Notes:</B>
                        Global register address to remap
                          */
      unsigned int   remappedMMD_Address_6 : 11;    /* 1E.008C.A:0  R/W      Default = 0x31E */
                     /* Remapped MMD Address
                          */
                    /*! \brief 1E.008C.F:B R/W Matching Device Address 6 [F:B]
                        AQ_GlobalProgrammableMMD_Register_CAL.u12.bits_12.matchingDeviceAddress_6

                        Default = 0x0F

                        Programmable Device Address
                        

                 <B>Notes:</B>
                        MDIO device address to match
                          */
      unsigned int   matchingDeviceAddress_6 : 5;    /* 1E.008C.F:B  R/W      Default = 0x0F */
                     /* Programmable Device Address
                          */
    } bits_12;
    uint16_t word_12;
  } u12;
  /*! \brief Union for bit and word level access of word 13 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.008D.F:0 R/W Matching MMD Address 6 [F:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u13.bits_13.matchingMMD_Address_6

                        Default = 0xFFFF

                        Programmable MMD Address
                        

                 <B>Notes:</B>
                        MDIO MMD address to match
                          */
      unsigned int   matchingMMD_Address_6 : 16;    /* 1E.008D.F:0  R/W      Default = 0xFFFF */
                     /* Programmable MMD Address
                          */
    } bits_13;
    uint16_t word_13;
  } u13;
  /*! \brief Union for bit and word level access of word 14 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.008E.A:0 R/W Remapped MMD Address 7 [A:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u14.bits_14.remappedMMD_Address_7

                        Default = 0x31F

                        Remapped MMD Address
                        

                 <B>Notes:</B>
                        Global register address to remap
                          */
      unsigned int   remappedMMD_Address_7 : 11;    /* 1E.008E.A:0  R/W      Default = 0x31F */
                     /* Remapped MMD Address
                          */
                    /*! \brief 1E.008E.F:B R/W Matching Device Address 7 [F:B]
                        AQ_GlobalProgrammableMMD_Register_CAL.u14.bits_14.matchingDeviceAddress_7

                        Default = 0x0F

                        Programmable Device Address
                        

                 <B>Notes:</B>
                        MDIO device address to match
                          */
      unsigned int   matchingDeviceAddress_7 : 5;    /* 1E.008E.F:B  R/W      Default = 0x0F */
                     /* Programmable Device Address
                          */
    } bits_14;
    uint16_t word_14;
  } u14;
  /*! \brief Union for bit and word level access of word 15 of Global Programmable MMD Register */
  union
  {
    struct
    {
                    /*! \brief 1E.008F.F:0 R/W Matching MMD Address 7 [F:0]
                        AQ_GlobalProgrammableMMD_Register_CAL.u15.bits_15.matchingMMD_Address_7

                        Default = 0xFFFF

                        Programmable MMD Address
                        

                 <B>Notes:</B>
                        MDIO MMD address to match
                          */
      unsigned int   matchingMMD_Address_7 : 16;    /* 1E.008F.F:0  R/W      Default = 0xFFFF */
                     /* Programmable MMD Address
                          */
    } bits_15;
    uint16_t word_15;
  } u15;
} AQ_GlobalProgrammableMMD_Register_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global NVR Interface: 1E.0100 */
/*                  Global NVR Interface: 1E.0100 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0100.7:0 R/W NVR Opcode [7:0]
                        AQ_GlobalNvrInterface_CAL.u0.bits_0.nvrOpcode

                        Default = 0x03

                        NVR instruction opcode
                        
  */
      unsigned int   nvrOpcode : 8;    /* 1E.0100.7:0  R/W      Default = 0x03 */
                     /* NVR instruction opcode
                          */
                    /*! \brief 1E.0100.8 RO NVR Busy
                        AQ_GlobalNvrInterface_CAL.u0.bits_0.nvrBusy

                        

                        1 = NVR is busy
                        0 = NVR is ready
                        

                 <B>Notes:</B>
                        When set to 1, the NVR is busy. A new NVR operation should not occur until this bit is 0. If the NVR clock is greater than 64/63 of the MDIO clock, this bit never needs to be polled when operating over the MDIO.   */
      unsigned int   nvrBusy : 1;    /* 1E.0100.8  RO       */
                     /* 1 = NVR is busy
                        0 = NVR is ready
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.0100.A R/W NVR Burst
                        AQ_GlobalNvrInterface_CAL.u0.bits_0.nvrBurst

                        Default = 0x0

                        0 = Single read or write operation of up to 4 bytes
                        1 = Burst operation
                        

                 <B>Notes:</B>
                        When this bit is set, the operation is a burst operation where more than 32-bits is read from the NVR or written to the NVR. This bit should be set to one until the last burst in the read or write operation, when it should be set to zero. It operates by gating the SPI clock, and not restarting it until new data is ready to be written, or the previous contents have been read. Each burst of data requires the NVR Execute Operation bit to be set to initiate the next phase.  */
      unsigned int   nvrBurst : 1;    /* 1E.0100.A  R/W      Default = 0x0 */
                     /* 0 = Single read or write operation of up to 4 bytes
                        1 = Burst operation
                          */
      unsigned int   reserved0 : 1;
                    /*! \brief 1E.0100.C R/WSC Reset NVR CRC
                        AQ_GlobalNvrInterface_CAL.u0.bits_0.resetNvrCrc

                        Default = 0x0

                        1 = Reset NVR Mailbox CRC calculation register
                        
                        

                 <B>Notes:</B>
                        To prevent an erroneous answer, this bit should not be set at the same time the  See NVR Operation Valid bit is set.  */
      unsigned int   resetNvrCrc : 1;    /* 1E.0100.C  R/WSC      Default = 0x0 */
                     /* 1 = Reset NVR Mailbox CRC calculation register
                        
                          */
                    /*! \brief 1E.0100.D R/W Freeze NVR CRC
                        AQ_GlobalNvrInterface_CAL.u0.bits_0.freezeNvrCrc

                        Default = 0x0

                        1 = Freeze NVR Mailbox CRC calculation register
                        

                 <B>Notes:</B>
                        To prevent an erroneous answer, this bit should not be set at the same time the  See NVR Operation Valid bit is set.  */
      unsigned int   freezeNvrCrc : 1;    /* 1E.0100.D  R/W      Default = 0x0 */
                     /* 1 = Freeze NVR Mailbox CRC calculation register
                          */
                    /*! \brief 1E.0100.E R/W NVR Write Mode
                        AQ_GlobalNvrInterface_CAL.u0.bits_0.nvrWriteMode

                        Default = 0x0

                        1 = Write to NVR
                        0 = Read from NVR
                        
  */
      unsigned int   nvrWriteMode : 1;    /* 1E.0100.E  R/W      Default = 0x0 */
                     /* 1 = Write to NVR
                        0 = Read from NVR
                          */
                    /*! \brief 1E.0100.F R/WSC NVR Execute Operation
                        AQ_GlobalNvrInterface_CAL.u0.bits_0.nvrExecuteOperation

                        Default = 0x0

                        1 = Start NVR Operation
                        
                        

                 <B>Notes:</B>
                        When set to 1, the NVR operation will begin. Ensure that the uP is stalled using the  See MCP Run Stall bit to ensure no NVR contention.  */
      unsigned int   nvrExecuteOperation : 1;    /* 1E.0100.F  R/WSC      Default = 0x0 */
                     /* 1 = Start NVR Operation
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0101.F:0 RO NVR Mailbox CRC [F:0]
                        AQ_GlobalNvrInterface_CAL.u1.bits_1.nvrMailboxCrc

                        

                        The running CRC-16 of everything passing through the NVR interface
                        

                 <B>Notes:</B>
                        The CRC-16 over all data written or read through the NVR interface. The CRC-16 is calculated by dividing the data by:
                        x^16 + x^12 + x^5 + 1  */
      unsigned int   nvrMailboxCrc : 16;    /* 1E.0101.F:0  RO       */
                     /* The running CRC-16 of everything passing through the NVR interface
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0102.7:0 R/W NVR Address MSW [17:10]
                        AQ_GlobalNvrInterface_CAL.u2.bits_2.nvrAddressMSW

                        Default = 0x00

                        NVR address MSW bits [17:10]
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the NVR. This is self-incrementing and will automatically increment after each read or write operation. The increment amount is based on the data length (i.e. increments by 4 if the data length is 4 bytes)  */
      unsigned int   nvrAddressMSW : 8;    /* 1E.0102.7:0  R/W      Default = 0x00 */
                     /* NVR address MSW bits [17:10]
                          */
      unsigned int   reserved0 : 8;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0103.F:0 R/W NVR Address LSW [F:0]
                        AQ_GlobalNvrInterface_CAL.u3.bits_3.nvrAddressLSW

                        Default = 0x0000

                        NVR address LSW bits [F:0]
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the NVR. This is self-incrementing and will automatically increment after each read or write operation.  */
      unsigned int   nvrAddressLSW : 16;    /* 1E.0103.F:0  R/W      Default = 0x0000 */
                     /* NVR address LSW bits [F:0]
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0104.F:0 R/W NVR Data MSW [1F:10]
                        AQ_GlobalNvrInterface_CAL.u4.bits_4.nvrDataMSW

                        Default = 0x0000

                        NVR data MSW bits [1F:10]
                        

                 <B>Notes:</B>
                        Data is stored and read-out from these registers in little-endian format for operations such as FLASH device ID, and for programming the processor.
                        
                        For instance the 64K Atmel device code reads out as two bytes 0x651F into the LSW register, whereas the datasheet indicates that 1F is the first byte read, followed by 65 as the second byte.
                        
                        To burst read and write these 4 bytes in the correct order (where DD is written to address x), they should be stored as:
                        
                        AA BB in the MSW
                        CC DD in the LSW.  */
      unsigned int   nvrDataMSW : 16;    /* 1E.0104.F:0  R/W      Default = 0x0000 */
                     /* NVR data MSW bits [1F:10]
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0105.F:0 R/W NVR Data LSW [F:0]
                        AQ_GlobalNvrInterface_CAL.u5.bits_5.nvrDataLSW

                        Default = 0x0000

                        NVR data LSW bits [F:0]
                        

                 <B>Notes:</B>
                        Data is stored and read-out from these registers in little-endian format for operations such as FLASH device ID, and for programming the processor.
                        
                        For instance the 64K Atmel device code reads out as two bytes 0x651F into the LSW register, whereas the datasheet indicates that 1F is the first byte read, followed by 65 as the second byte.
                        To burst read and write these 4 bytes in the correct order (where DD is written to address x), they should be stored as:
                        
                        AA BB in the MSW
                        CC DD in the LSW.  */
      unsigned int   nvrDataLSW : 16;    /* 1E.0105.F:0  R/W      Default = 0x0000 */
                     /* NVR data LSW bits [F:0]
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
} AQ_GlobalNvrInterface_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Mailbox Interface: 1E.0200 */
/*                  Global Mailbox Interface: 1E.0200 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Mailbox Interface */
  union
  {
    struct
    {
      unsigned int   reserved2 : 8;
                    /*! \brief 1E.0200.8 RO uP Mailbox Busy
                        AQ_GlobalMailboxInterface_CAL.u0.bits_0.upMailboxBusy

                        

                        1 = uP mailbox busy
                        0 = uP mailbox ready
                        

                 <B>Notes:</B>
                        In general the uP will respond within a few processor cycles to any PIF slave request, much faster than the MDIO. If the busy is asserted over multiple MDIO polling cycles, then a H/W error may have occurred and a Global S/W reset or uP reset is required.  */
      unsigned int   upMailboxBusy : 1;    /* 1E.0200.8  RO       */
                     /* 1 = uP mailbox busy
                        0 = uP mailbox ready
                          */
      unsigned int   reserved1 : 3;
                    /*! \brief 1E.0200.C R/WSC Reset uP Mailbox CRC
                        AQ_GlobalMailboxInterface_CAL.u0.bits_0.resetUpMailboxCrc

                        Default = 0x0

                        1 = Reset uP mailbox CRC calculation register
                        
                        
  */
      unsigned int   resetUpMailboxCrc : 1;    /* 1E.0200.C  R/WSC      Default = 0x0 */
                     /* 1 = Reset uP mailbox CRC calculation register
                        
                          */
      unsigned int   reserved0 : 1;
                    /*! \brief 1E.0200.E R/W uP Mailbox Write Mode
                        AQ_GlobalMailboxInterface_CAL.u0.bits_0.upMailboxWriteMode

                        Default = 0x0

                        1 = Write
                        0 = Read
                        

                 <B>Notes:</B>
                        Mailbox direction  */
      unsigned int   upMailboxWriteMode : 1;    /* 1E.0200.E  R/W      Default = 0x0 */
                     /* 1 = Write
                        0 = Read
                          */
                    /*! \brief 1E.0200.F R/WSC uP Mailbox Execute Operation
                        AQ_GlobalMailboxInterface_CAL.u0.bits_0.upMailboxExecuteOperation

                        Default = 0x0

                        1 = Start of mailbox Operation
                        
                        

                 <B>Notes:</B>
                        Indicates mailbox is loaded and ready  */
      unsigned int   upMailboxExecuteOperation : 1;    /* 1E.0200.F  R/WSC      Default = 0x0 */
                     /* 1 = Start of mailbox Operation
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0201.F:0 RO uP Mailbox CRC [F:0]
                        AQ_GlobalMailboxInterface_CAL.u1.bits_1.upMailboxCrc

                        

                        The running CRC-16 of everything passing through the mailbox interface
                        
  */
      unsigned int   upMailboxCrc : 16;    /* 1E.0201.F:0  RO       */
                     /* The running CRC-16 of everything passing through the mailbox interface
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0202.F:0 R/W uP Mailbox Address MSW [1F:10]
                        AQ_GlobalMailboxInterface_CAL.u2.bits_2.upMailboxAddressMSW

                        Default = 0x0000

                        uP Mailbox MSW address
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the Microcontroller Mailbox. This is self-incrementing and automatically increments after each read and write operation.PHY  */
      unsigned int   upMailboxAddressMSW : 16;    /* 1E.0202.F:0  R/W      Default = 0x0000 */
                     /* uP Mailbox MSW address
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0203.1:0 RO uP Mailbox Address LSW Don't Care [1:0]
                        AQ_GlobalMailboxInterface_CAL.u3.bits_3.upMailboxAddressLSW_Don_tCare

                        

                        Least significant uP LSW Mailbox address bits [1:0]
                        

                 <B>Notes:</B>
                        These bits are always set to 0 since each memory access is on a 4-byte boundary.  */
      unsigned int   upMailboxAddressLSW_Don_tCare : 2;    /* 1E.0203.1:0  RO       */
                     /* Least significant uP LSW Mailbox address bits [1:0]
                          */
                    /*! \brief 1E.0203.F:2 R/W uP Mailbox Address LSW [F:2]
                        AQ_GlobalMailboxInterface_CAL.u3.bits_3.upMailboxAddressLSW

                        Default = 0x0000

                        uP LSW Mailbox address [F:2]
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the Microcontroller Mailbox. This is self-incrementing and automatically increments after each read and write operation.PHY  */
      unsigned int   upMailboxAddressLSW : 14;    /* 1E.0203.F:2  R/W      Default = 0x0000 */
                     /* uP LSW Mailbox address [F:2]
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0204.F:0 R/W uP Mailbox Data MSW [1F:10]
                        AQ_GlobalMailboxInterface_CAL.u4.bits_4.upMailboxDataMSW

                        Default = 0x0000

                        uP Mailbox data MSW
                        
  */
      unsigned int   upMailboxDataMSW : 16;    /* 1E.0204.F:0  R/W      Default = 0x0000 */
                     /* uP Mailbox data MSW
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0205.F:0 R/W uP Mailbox Data LSW [F:0]
                        AQ_GlobalMailboxInterface_CAL.u5.bits_5.upMailboxDataLSW

                        Default = 0x0000

                        uP Mailbox data LSW
                        
  */
      unsigned int   upMailboxDataLSW : 16;    /* 1E.0205.F:0  R/W      Default = 0x0000 */
                     /* uP Mailbox data LSW
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global Mailbox Interface */
  union
  {
    struct
    {
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.0206.1 R/W uP Mailbox CRC Read Enable
                        AQ_GlobalMailboxInterface_CAL.u6.bits_6.upMailboxCrcReadEnable

                        Default = 0x0

                        1 = Update uP mailbox CRC on read
                        
  */
      unsigned int   upMailboxCrcReadEnable : 1;    /* 1E.0206.1  R/W      Default = 0x0 */
                     /* 1 = Update uP mailbox CRC on read
                          */
      unsigned int   reserved0 : 14;
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_GlobalMailboxInterface_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Microprocessor Scratch Pad: 1E.0300 */
/*                  Global Microprocessor Scratch Pad: 1E.0300 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Microprocessor Scratch Pad */
  union
  {
    struct
    {
                    /*! \brief 1E.0300.F:0 R/W Scratch Pad 1[F:0]
                        AQ_GlobalMicroprocessorScratchPad_CAL.u0.bits_0.scratchPad_1

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_1 : 16;    /* 1E.0300.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Microprocessor Scratch Pad */
  union
  {
    struct
    {
                    /*! \brief 1E.0301.F:0 R/W Scratch Pad 2 [F:0]
                        AQ_GlobalMicroprocessorScratchPad_CAL.u1.bits_1.scratchPad_2

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_2 : 16;    /* 1E.0301.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalMicroprocessorScratchPad_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Tone Generation And Detection: 1E.0311 */
/*                  Global Tone Generation And Detection: 1E.0311 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Tone Generation And Detection */
  union
  {
    struct
    {
                    /*! \brief 1E.0311.0 R/W Generate Tone
                        AQ_GlobalToneGenerationAndDetection_CAL.u0.bits_0.generateTone

                        Default = 0x0

                        1 = Enable tone generation
                        0 = Disable tone generation
                        

                 <B>Notes:</B>
                        This bit is the main control for the tone generation command. When it is set, tone generation starts on the specified channel and frequency. Tone generation will continue until this bit is cleared.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can also be monitored via 1E.C831.F  */
      unsigned int   generateTone : 1;    /* 1E.0311.0  R/W      Default = 0x0 */
                     /* 1 = Enable tone generation
                        0 = Disable tone generation
                          */
                    /*! \brief 1E.0311.2:1 R/W Channel For Generate Tone [1:0]
                        AQ_GlobalToneGenerationAndDetection_CAL.u0.bits_0.channelForGenerateTone

                        Default = 0x0

                        Channel on which tone will be generated
                        
  */
      unsigned int   channelForGenerateTone : 2;    /* 1E.0311.2:1  R/W      Default = 0x0 */
                     /* Channel on which tone will be generated
                          */
                    /*! \brief 1E.0311.3 R/W Reserved_sp18_1
                        AQ_GlobalToneGenerationAndDetection_CAL.u0.bits_0.reservedSp181

                        Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedSp181 : 1;    /* 1E.0311.3  R/W      Default = 0x0 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.0311.C:4 R/W Frequency For Generate Tone [8:0]
                        AQ_GlobalToneGenerationAndDetection_CAL.u0.bits_0.frequencyForGenerateTone

                        Default = 0x000

                        Frequency of the generated tone
                        

                 <B>Notes:</B>
                        Frequency value expressed as a multiple of 0.78125 MHz (800 / 1024 MHz).  */
      unsigned int   frequencyForGenerateTone : 9;    /* 1E.0311.C:4  R/W      Default = 0x000 */
                     /* Frequency of the generated tone
                          */
                    /*! \brief 1E.0311.F:D R/W Reserved_sp18_2 [2:0]
                        AQ_GlobalToneGenerationAndDetection_CAL.u0.bits_0.reservedSp182

                        Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedSp182 : 3;    /* 1E.0311.F:D  R/W      Default = 0x0 */
                     /* Reserved for future use
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Tone Generation And Detection */
  union
  {
    struct
    {
                    /*! \brief 1E.0312.0 R/WSC Detect Tone
                        AQ_GlobalToneGenerationAndDetection_CAL.u1.bits_1.detectTone

                        Default = 0x0

                        1 = Enable tone detection
                        0 = Disable tone detection
                        

                 <B>Notes:</B>
                        This bit is the main control for the tone detection command. When it is set, tone detection starts on the specified channel and frequency. This bit is self-clearing and clears on its own after tone power is reported in 1E.0313.7:0.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can also be monitored via 1E.C831.F  */
      unsigned int   detectTone : 1;    /* 1E.0312.0  R/WSC      Default = 0x0 */
                     /* 1 = Enable tone detection
                        0 = Disable tone detection
                          */
                    /*! \brief 1E.0312.2:1 R/W Channel For Detect Tone [1:0]
                        AQ_GlobalToneGenerationAndDetection_CAL.u1.bits_1.channelForDetectTone

                        Default = 0x0

                        Channel on which tone will be detected
                        
  */
      unsigned int   channelForDetectTone : 2;    /* 1E.0312.2:1  R/W      Default = 0x0 */
                     /* Channel on which tone will be detected
                          */
                    /*! \brief 1E.0312.3 R/W Reserved_sp19_1
                        AQ_GlobalToneGenerationAndDetection_CAL.u1.bits_1.reservedSp191

                        Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedSp191 : 1;    /* 1E.0312.3  R/W      Default = 0x0 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.0312.C:4 R/W Frequency For Detect Tone [8:0]
                        AQ_GlobalToneGenerationAndDetection_CAL.u1.bits_1.frequencyForDetectTone

                        Default = 0x000

                        Frequency of the detected tone
                        

                 <B>Notes:</B>
                        Frequency value expressed as a multiple of 0.78125 MHz (800 / 1024 MHz).  */
      unsigned int   frequencyForDetectTone : 9;    /* 1E.0312.C:4  R/W      Default = 0x000 */
                     /* Frequency of the detected tone
                          */
                    /*! \brief 1E.0312.F:D R/W Reserved_sp19_2 [2:0]
                        AQ_GlobalToneGenerationAndDetection_CAL.u1.bits_1.reservedSp192

                        Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedSp192 : 3;    /* 1E.0312.F:D  R/W      Default = 0x0 */
                     /* Reserved for future use
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Tone Generation And Detection */
  union
  {
    struct
    {
                    /*! \brief 1E.0313.7:0 R/WSC Detected Tone Power Dbm [7:0]
                        AQ_GlobalToneGenerationAndDetection_CAL.u2.bits_2.detectedTonePowerDbm

                        Default = 0x00

                        The amount of power detected on the specified channel and frequency by the tone detection command.
                        

                 <B>Notes:</B>
                        This is a signed number, expressed as a 2's complement value with the LSb representing 0.5 dBm.  */
      unsigned int   detectedTonePowerDbm : 8;    /* 1E.0313.7:0  R/WSC      Default = 0x00 */
                     /* The amount of power detected on the specified channel and frequency by the tone detection command.
                          */
                    /*! \brief 1E.0313.B:8 R/W Pair Polarity 1G
                        AQ_GlobalToneGenerationAndDetection_CAL.u2.bits_2.pairPolarity1G

                        Default = 0x0

                        Reports the polarity status of pairs in 1G mode. For each bit, 1 means the polarity of the pair is reversed, while 0 means it is normal.
                        
                        Bit0 is the LSB.
                        [3] = Pair D Polarity
                        [2] = Pair C Polarity
                        [1] = Pair B Polarity
                        [0] = Pair A Polarity
                        

                 <B>Notes:</B>
                        After 1G link up these status bits are initialized from the internal status of the 1G core, so it is valid only after 1G linkup.  */
      unsigned int   pairPolarity1G : 4;    /* 1E.0313.B:8  R/W      Default = 0x0 */
                     /* Reports the polarity status of pairs in 1G mode. For each bit, 1 means the polarity of the pair is reversed, while 0 means it is normal.
                        
                        Bit0 is the LSB.
                        [3] = Pair D Polarity
                        [2] = Pair C Polarity
                        [1] = Pair B Polarity
                        [0] = Pair A Polarity
                          */
                    /*! \brief 1E.0313.D:C R/W MDI / MDI-X Connection State 1G
                        AQ_GlobalToneGenerationAndDetection_CAL.u2.bits_2.mdi_Mdi_xConnectionState1G

                        Default = 0x0

                        Bit0 of this field shows the MDI/MDI-X status of A/B channel pair.
                        0 = MDI
                        1 = MDI-X
                        
                        Bit1 of this field shows the MDI/MDI-X status of C/D channel pair.
                        0 = MDI
                        1 = MDI-X
                        

                 <B>Notes:</B>
                        After 1G link up these status bits are initialized from the internal status of the 1G core, so it is valid only after 1G linkup.
                                                
                        To determine the cable crossover, these bits can be XOR'ed with those of the Aquantia link partner device:
                                                
                        0x3 = The cable's A/B and C/D pairs are straight.
                        0x2 = The cable's A/B pairs are crossed, and the C/D pairs are straight.
                        0x1 = The cable's A/B pairs are straight, and the C/D pairs are crossed.
                        0x0 = The cable's A/B and C/D pairs are crossed.  */
      unsigned int   mdi_Mdi_xConnectionState1G : 2;    /* 1E.0313.D:C  R/W      Default = 0x0 */
                     /* Bit0 of this field shows the MDI/MDI-X status of A/B channel pair.
                        0 = MDI
                        1 = MDI-X
                        
                        Bit1 of this field shows the MDI/MDI-X status of C/D channel pair.
                        0 = MDI
                        1 = MDI-X
                          */
                    /*! \brief 1E.0313.F:E R/W Reserved_sp20_1 [1:0]
                        AQ_GlobalToneGenerationAndDetection_CAL.u2.bits_2.reservedSp201

                        Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedSp201 : 2;    /* 1E.0313.F:E  R/W      Default = 0x0 */
                     /* Reserved for future use
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_GlobalToneGenerationAndDetection_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Startup Rate: 1E.031A */
/*                  Global Startup Rate: 1E.031A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Startup Rate */
  union
  {
    struct
    {
                    /*! \brief 1E.031A.3:0 R/W Startup Rate [3:0]
                        AQ_GlobalStartupRate_CAL.u0.bits_0.startupRate

                        Default = 0x0

                        5 = 5G
                        4 = 2.5G
                        3 = 10G
                        2 = 1G
                        1 = 100M
                        0 = Low Power
                        
  */
      unsigned int   startupRate : 4;    /* 1E.031A.3:0  R/W      Default = 0x0 */
                     /* 5 = 5G
                        4 = 2.5G
                        3 = 10G
                        2 = 1G
                        1 = 100M
                        0 = Low Power
                          */
                    /*! \brief 1E.031A.F:4 R/W Reserved_sp27 [B:0]
                        AQ_GlobalStartupRate_CAL.u0.bits_0.reservedSp27

                        Default = 0x000

                        Reserved for future use
                        
  */
      unsigned int   reservedSp27 : 12;    /* 1E.031A.F:4  R/W      Default = 0x000 */
                     /* Reserved for future use
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStartupRate_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global System Configuration For 100M: 1E.031B */
/*                  Global System Configuration For 100M: 1E.031B */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global System Configuration For 100M */
  union
  {
    struct
    {
                    /*! \brief 1E.031B.2:0 R/W SERDES Mode [2:0]
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.serdesMode

                        Default = 0x0

                        0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                        
  */
      unsigned int   serdesMode : 3;    /* 1E.031B.2:0  R/W      Default = 0x0 */
                     /* 0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                          */
                    /*! \brief 1E.031B.3 R/W Autoneg Enable
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.autonegEnable

                        Default = 0x0

                        0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                        
  */
      unsigned int   autonegEnable : 1;    /* 1E.031B.3  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                          */
                    /*! \brief 1E.031B.4 R/W Training Enable
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.trainingEnable

                        Default = 0x0

                        0 = Disable System Interface Training
                        1 = Enable System Interface Training
                        
  */
      unsigned int   trainingEnable : 1;    /* 1E.031B.4  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Training
                        1 = Enable System Interface Training
                          */
                    /*! \brief 1E.031B.5 R/W Reset On Transition Enable
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.resetOnTransitionEnable

                        Default = 0x0

                        0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                        
  */
      unsigned int   resetOnTransitionEnable : 1;    /* 1E.031B.5  R/W      Default = 0x0 */
                     /* 0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                          */
                    /*! \brief 1E.031B.6 R/W SERDES Silence Enable
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.serdesSilenceEnable

                        Default = 0x0

                        1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                        
  */
      unsigned int   serdesSilenceEnable : 1;    /* 1E.031B.6  R/W      Default = 0x0 */
                     /* 1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                          */
                    /*! \brief 1E.031B.8:7 R/W Rate Adaptation Method [1:0]
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.rateAdaptationMethod

                        Default = 0x0

                        0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                        
  */
      unsigned int   rateAdaptationMethod : 2;    /* 1E.031B.8:7  R/W      Default = 0x0 */
                     /* 0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                          */
                    /*! \brief 1E.031B.9 R/W Security Enable
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.securityEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   securityEnable : 1;    /* 1E.031B.9  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031B.A R/W PTP Enable
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.ptpEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   ptpEnable : 1;    /* 1E.031B.A  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031B.F:B R/W Reserved_sp28 [4:0]
                        AQ_GlobalSystemConfigurationFor100M_CAL.u0.bits_0.reservedSp28

                        Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedSp28 : 5;    /* 1E.031B.F:B  R/W      Default = 0x00 */
                     /* Reserved for future use
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSystemConfigurationFor100M_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global System Configuration For 1G: 1E.031C */
/*                  Global System Configuration For 1G: 1E.031C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global System Configuration For 1G */
  union
  {
    struct
    {
                    /*! \brief 1E.031C.2:0 R/W SERDES Mode [2:0]
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.serdesMode

                        Default = 0x0

                        0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                        
  */
      unsigned int   serdesMode : 3;    /* 1E.031C.2:0  R/W      Default = 0x0 */
                     /* 0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                          */
                    /*! \brief 1E.031C.3 R/W Autoneg Enable
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.autonegEnable

                        Default = 0x0

                        0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                        
  */
      unsigned int   autonegEnable : 1;    /* 1E.031C.3  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                          */
                    /*! \brief 1E.031C.4 R/W Training Enable
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.trainingEnable

                        Default = 0x0

                        0 = Disable System Interface Training
                        1 = Enable System Interface Training
                        
  */
      unsigned int   trainingEnable : 1;    /* 1E.031C.4  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Training
                        1 = Enable System Interface Training
                          */
                    /*! \brief 1E.031C.5 R/W Reset On Transition Enable
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.resetOnTransitionEnable

                        Default = 0x0

                        0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                        
  */
      unsigned int   resetOnTransitionEnable : 1;    /* 1E.031C.5  R/W      Default = 0x0 */
                     /* 0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                          */
                    /*! \brief 1E.031C.6 R/W SERDES Silence Enable
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.serdesSilenceEnable

                        Default = 0x0

                        1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                        
  */
      unsigned int   serdesSilenceEnable : 1;    /* 1E.031C.6  R/W      Default = 0x0 */
                     /* 1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                          */
                    /*! \brief 1E.031C.8:7 R/W Rate Adaptation Method [1:0]
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.rateAdaptationMethod

                        Default = 0x0

                        0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                        
  */
      unsigned int   rateAdaptationMethod : 2;    /* 1E.031C.8:7  R/W      Default = 0x0 */
                     /* 0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                          */
                    /*! \brief 1E.031C.9 R/W Security Enable
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.securityEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   securityEnable : 1;    /* 1E.031C.9  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031C.A R/W PTP Enable
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.ptpEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   ptpEnable : 1;    /* 1E.031C.A  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031C.F:B R/W Reserved_sp29 [4:0]
                        AQ_GlobalSystemConfigurationFor1G_CAL.u0.bits_0.reservedSp29

                        Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedSp29 : 5;    /* 1E.031C.F:B  R/W      Default = 0x00 */
                     /* Reserved for future use
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSystemConfigurationFor1G_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global System Configuration For 2.5G: 1E.031D */
/*                  Global System Configuration For 2.5G: 1E.031D */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global System Configuration For 2.5G */
  union
  {
    struct
    {
                    /*! \brief 1E.031D.2:0 R/W SERDES Mode [2:0]
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.serdesMode

                        Default = 0x0

                        0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                        
  */
      unsigned int   serdesMode : 3;    /* 1E.031D.2:0  R/W      Default = 0x0 */
                     /* 0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                          */
                    /*! \brief 1E.031D.3 R/W Autoneg Enable
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.autonegEnable

                        Default = 0x0

                        0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                        
  */
      unsigned int   autonegEnable : 1;    /* 1E.031D.3  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                          */
                    /*! \brief 1E.031D.4 R/W Training Enable
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.trainingEnable

                        Default = 0x0

                        0 = Disable System Interface Training
                        1 = Enable System Interface Training
                        
  */
      unsigned int   trainingEnable : 1;    /* 1E.031D.4  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Training
                        1 = Enable System Interface Training
                          */
                    /*! \brief 1E.031D.5 R/W Reset On Transition Enable
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.resetOnTransitionEnable

                        Default = 0x0

                        0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                        
  */
      unsigned int   resetOnTransitionEnable : 1;    /* 1E.031D.5  R/W      Default = 0x0 */
                     /* 0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                          */
                    /*! \brief 1E.031D.6 R/W SERDES Silence Enable
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.serdesSilenceEnable

                        Default = 0x0

                        1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                        
  */
      unsigned int   serdesSilenceEnable : 1;    /* 1E.031D.6  R/W      Default = 0x0 */
                     /* 1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                          */
                    /*! \brief 1E.031D.8:7 R/W Rate Adaptation Method [1:0]
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.rateAdaptationMethod

                        Default = 0x0

                        0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                        
  */
      unsigned int   rateAdaptationMethod : 2;    /* 1E.031D.8:7  R/W      Default = 0x0 */
                     /* 0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                          */
                    /*! \brief 1E.031D.9 R/W Security Enable
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.securityEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   securityEnable : 1;    /* 1E.031D.9  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031D.A R/W PTP Enable
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.ptpEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   ptpEnable : 1;    /* 1E.031D.A  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031D.F:B R/W Reserved_sp30 [4:0]
                        AQ_GlobalSystemConfigurationFor_2_5g_CAL.u0.bits_0.reservedSp30

                        Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedSp30 : 5;    /* 1E.031D.F:B  R/W      Default = 0x00 */
                     /* Reserved for future use
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSystemConfigurationFor_2_5g_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global System Configuration For 5G: 1E.031E */
/*                  Global System Configuration For 5G: 1E.031E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global System Configuration For 5G */
  union
  {
    struct
    {
                    /*! \brief 1E.031E.2:0 R/W SERDES Mode [2:0]
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.serdesMode

                        Default = 0x0

                        0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                        
  */
      unsigned int   serdesMode : 3;    /* 1E.031E.2:0  R/W      Default = 0x0 */
                     /* 0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                          */
                    /*! \brief 1E.031E.3 R/W Autoneg Enable
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.autonegEnable

                        Default = 0x0

                        0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                        
  */
      unsigned int   autonegEnable : 1;    /* 1E.031E.3  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                          */
                    /*! \brief 1E.031E.4 R/W Training Enable
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.trainingEnable

                        Default = 0x0

                        0 = Disable System Interface Training
                        1 = Enable System Interface Training
                        
  */
      unsigned int   trainingEnable : 1;    /* 1E.031E.4  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Training
                        1 = Enable System Interface Training
                          */
                    /*! \brief 1E.031E.5 R/W Reset On Transition Enable
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.resetOnTransitionEnable

                        Default = 0x0

                        0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                        
  */
      unsigned int   resetOnTransitionEnable : 1;    /* 1E.031E.5  R/W      Default = 0x0 */
                     /* 0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                          */
                    /*! \brief 1E.031E.6 R/W SERDES Silence Enable
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.serdesSilenceEnable

                        Default = 0x0

                        1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                        
  */
      unsigned int   serdesSilenceEnable : 1;    /* 1E.031E.6  R/W      Default = 0x0 */
                     /* 1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                          */
                    /*! \brief 1E.031E.8:7 R/W Rate Adaptation Method [1:0]
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.rateAdaptationMethod

                        Default = 0x0

                        0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                        
  */
      unsigned int   rateAdaptationMethod : 2;    /* 1E.031E.8:7  R/W      Default = 0x0 */
                     /* 0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                          */
                    /*! \brief 1E.031E.9 R/W Security Enable
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.securityEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   securityEnable : 1;    /* 1E.031E.9  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031E.A R/W PTP Enable
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.ptpEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   ptpEnable : 1;    /* 1E.031E.A  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031E.F:B R/W Reserved_sp31 [4:0]
                        AQ_GlobalSystemConfigurationFor_5g_CAL.u0.bits_0.reservedSp31

                        Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedSp31 : 5;    /* 1E.031E.F:B  R/W      Default = 0x00 */
                     /* Reserved for future use
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSystemConfigurationFor_5g_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global System Configuration For 10G: 1E.031F */
/*                  Global System Configuration For 10G: 1E.031F */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global System Configuration For 10G */
  union
  {
    struct
    {
                    /*! \brief 1E.031F.2:0 R/W SERDES Mode [2:0]
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.serdesMode

                        Default = 0x0

                        0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                        
  */
      unsigned int   serdesMode : 3;    /* 1E.031F.2:0  R/W      Default = 0x0 */
                     /* 0 = XFI
                        1 = XAUI
                        2 = RXAUI
                        3 = SGMII
                        4 = OCSGMII
                        5 = Low Power
                          */
                    /*! \brief 1E.031F.3 R/W Autoneg Enable
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.autonegEnable

                        Default = 0x0

                        0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                        
  */
      unsigned int   autonegEnable : 1;    /* 1E.031F.3  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Autonegotiation
                        1 = Enable System Interface Autonegotiation
                          */
                    /*! \brief 1E.031F.4 R/W Training Enable
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.trainingEnable

                        Default = 0x0

                        0 = Disable System Interface Training
                        1 = Enable System Interface Training
                        
  */
      unsigned int   trainingEnable : 1;    /* 1E.031F.4  R/W      Default = 0x0 */
                     /* 0 = Disable System Interface Training
                        1 = Enable System Interface Training
                          */
                    /*! \brief 1E.031F.5 R/W Reset On Transition Enable
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.resetOnTransitionEnable

                        Default = 0x0

                        0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                        
  */
      unsigned int   resetOnTransitionEnable : 1;    /* 1E.031F.5  R/W      Default = 0x0 */
                     /* 0 = Do Not Reset System Interface For Every Transition
                        1 = Reset System Interface For Every Transition
                          */
                    /*! \brief 1E.031F.6 R/W SERDES Silence Enable
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.serdesSilenceEnable

                        Default = 0x0

                        1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                        
  */
      unsigned int   serdesSilenceEnable : 1;    /* 1E.031F.6  R/W      Default = 0x0 */
                     /* 1 = Keep SERDES Silent During Transition
                        0 = Do Not Keep SERDES Silent During Transition
                          */
                    /*! \brief 1E.031F.8:7 R/W Rate Adaptation Method [1:0]
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.rateAdaptationMethod

                        Default = 0x0

                        0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                        
  */
      unsigned int   rateAdaptationMethod : 2;    /* 1E.031F.8:7  R/W      Default = 0x0 */
                     /* 0 = No Rate Adaptation
                        1 = USX Rate Adaptation
                        2 = Pause Rate Adaptation
                          */
                    /*! \brief 1E.031F.9 R/W Security Enable
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.securityEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   securityEnable : 1;    /* 1E.031F.9  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031F.A R/W PTP Enable
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.ptpEnable

                        Default = 0x0

                        1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                        
  */
      unsigned int   ptpEnable : 1;    /* 1E.031F.A  R/W      Default = 0x0 */
                     /* 1 = MACSec Security Enabled
                        0 = MACSec Security Disabled
                          */
                    /*! \brief 1E.031F.F:B R/W Reserved_sp32 [4:0]
                        AQ_GlobalSystemConfigurationFor10G_CAL.u0.bits_0.reservedSp32

                        Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedSp32 : 5;    /* 1E.031F.F:B  R/W      Default = 0x00 */
                     /* Reserved for future use
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSystemConfigurationFor10G_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Microprocessor Scratch Pad 2 -: 1E.0380 */
/*                  Global Microprocessor Scratch Pad 2 -: 1E.0380 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0380.F:0 R/W Scratch Pad 33[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u0.bits_0.scratchPad_33

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_33 : 16;    /* 1E.0380.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0381.F:0 R/W Scratch Pad 34[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u1.bits_1.scratchPad_34

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_34 : 16;    /* 1E.0381.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0382.F:0 R/W Scratch Pad 35[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u2.bits_2.scratchPad_35

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_35 : 16;    /* 1E.0382.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0383.F:0 R/W Scratch Pad 36[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u3.bits_3.scratchPad_36

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_36 : 16;    /* 1E.0383.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0384.F:0 R/W Scratch Pad 37[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u4.bits_4.scratchPad_37

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_37 : 16;    /* 1E.0384.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0385.F:0 R/W Scratch Pad 38[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u5.bits_5.scratchPad_38

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_38 : 16;    /* 1E.0385.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0386.F:0 R/W Scratch Pad 39[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u6.bits_6.scratchPad_39

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_39 : 16;    /* 1E.0386.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0387.F:0 R/W Scratch Pad 40[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u7.bits_7.scratchPad_40

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_40 : 16;    /* 1E.0387.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0388.F:0 R/W Scratch Pad 41[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u8.bits_8.scratchPad_41

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_41 : 16;    /* 1E.0388.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0389.F:0 R/W Scratch Pad 42[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u9.bits_9.scratchPad_42

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_42 : 16;    /* 1E.0389.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.038A.F:0 R/W Scratch Pad 43[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u10.bits_10.scratchPad_43

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_43 : 16;    /* 1E.038A.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Union for bit and word level access of word 11 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.038B.F:0 R/W Scratch Pad 44[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u11.bits_11.scratchPad_44

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_44 : 16;    /* 1E.038B.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_11;
    uint16_t word_11;
  } u11;
  /*! \brief Union for bit and word level access of word 12 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.038C.F:0 R/W Scratch Pad 45[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u12.bits_12.scratchPad_45

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_45 : 16;    /* 1E.038C.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_12;
    uint16_t word_12;
  } u12;
  /*! \brief Union for bit and word level access of word 13 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.038D.F:0 R/W Scratch Pad 46[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u13.bits_13.scratchPad_46

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_46 : 16;    /* 1E.038D.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_13;
    uint16_t word_13;
  } u13;
  /*! \brief Union for bit and word level access of word 14 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.038E.F:0 R/W Scratch Pad 47[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u14.bits_14.scratchPad_47

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_47 : 16;    /* 1E.038E.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_14;
    uint16_t word_14;
  } u14;
  /*! \brief Union for bit and word level access of word 15 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.038F.F:0 R/W Scratch Pad 48[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u15.bits_15.scratchPad_48

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_48 : 16;    /* 1E.038F.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_15;
    uint16_t word_15;
  } u15;
  /*! \brief Union for bit and word level access of word 16 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0390.F:0 R/W Scratch Pad 49[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u16.bits_16.scratchPad_49

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_49 : 16;    /* 1E.0390.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_16;
    uint16_t word_16;
  } u16;
  /*! \brief Union for bit and word level access of word 17 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0391.F:0 R/W Scratch Pad 50[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u17.bits_17.scratchPad_50

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_50 : 16;    /* 1E.0391.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_17;
    uint16_t word_17;
  } u17;
  /*! \brief Union for bit and word level access of word 18 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0392.F:0 R/W Scratch Pad 51[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u18.bits_18.scratchPad_51

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_51 : 16;    /* 1E.0392.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_18;
    uint16_t word_18;
  } u18;
  /*! \brief Union for bit and word level access of word 19 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0393.F:0 R/W Scratch Pad 52[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u19.bits_19.scratchPad_52

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_52 : 16;    /* 1E.0393.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_19;
    uint16_t word_19;
  } u19;
  /*! \brief Union for bit and word level access of word 20 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0394.F:0 R/W Scratch Pad 53[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u20.bits_20.scratchPad_53

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_53 : 16;    /* 1E.0394.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_20;
    uint16_t word_20;
  } u20;
  /*! \brief Union for bit and word level access of word 21 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0395.F:0 R/W Scratch Pad 54[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u21.bits_21.scratchPad_54

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_54 : 16;    /* 1E.0395.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_21;
    uint16_t word_21;
  } u21;
  /*! \brief Union for bit and word level access of word 22 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0396.F:0 R/W Scratch Pad 55[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u22.bits_22.scratchPad_55

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_55 : 16;    /* 1E.0396.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_22;
    uint16_t word_22;
  } u22;
  /*! \brief Union for bit and word level access of word 23 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0397.F:0 R/W Scratch Pad 56[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u23.bits_23.scratchPad_56

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_56 : 16;    /* 1E.0397.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_23;
    uint16_t word_23;
  } u23;
  /*! \brief Union for bit and word level access of word 24 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0398.F:0 R/W Scratch Pad 57[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u24.bits_24.scratchPad_57

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_57 : 16;    /* 1E.0398.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_24;
    uint16_t word_24;
  } u24;
  /*! \brief Union for bit and word level access of word 25 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.0399.F:0 R/W Scratch Pad 58[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u25.bits_25.scratchPad_58

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_58 : 16;    /* 1E.0399.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_25;
    uint16_t word_25;
  } u25;
  /*! \brief Union for bit and word level access of word 26 of Global Microprocessor Scratch Pad 2 - */
  union
  {
    struct
    {
                    /*! \brief 1E.039A.F:0 R/W Scratch Pad 59[F:0]
                        AQ_GlobalMicroprocessorScratchPad_2_CAL.u26.bits_26.scratchPad_59

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_59 : 16;    /* 1E.039A.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_26;
    uint16_t word_26;
  } u26;
} AQ_GlobalMicroprocessorScratchPad_2_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global MDI Cable Insertion Loss Characteristics: 1E.039B */
/*                  Global MDI Cable Insertion Loss Characteristics: 1E.039B */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global MDI Cable Insertion Loss Characteristics */
  union
  {
    struct
    {
                    /*! \brief 1E.039B.F:0 R/W Insertion Loss Per Unit Length [F:0]
                        AQ_GlobalMdiCableInsertionLossCharacteristics_CAL.u0.bits_0.insertionLossPerUnitLength

                        Default = 0x0000

                        This is "insertion loss of cable" / "meter length" measured at 100Mhz. The LSB weight should be equal to 1/16384 of a dB.
                        
  */
      unsigned int   insertionLossPerUnitLength : 16;    /* 1E.039B.F:0  R/W      Default = 0x0000 */
                     /* This is "insertion loss of cable" / "meter length" measured at 100Mhz. The LSB weight should be equal to 1/16384 of a dB.
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalMdiCableInsertionLossCharacteristics_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global System Uptime: 1E.039C */
/*                  Global System Uptime: 1E.039C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global System Uptime */
  union
  {
    struct
    {
                    /*! \brief 1E.039C.F:0 R/W System Uptime 15:0 [F:0]
                        AQ_GlobalSystemUptime_CAL.u0.bits_0.systemUptime_15_0

                        Default = 0x0000

                        Bits 15:0 of the System Uptime (in milliseconds). Time tracked by software.
                        
  */
      unsigned int   systemUptime_15_0 : 16;    /* 1E.039C.F:0  R/W      Default = 0x0000 */
                     /* Bits 15:0 of the System Uptime (in milliseconds). Time tracked by software.
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global System Uptime */
  union
  {
    struct
    {
                    /*! \brief 1E.039D.F:0 R/W System Uptime 31:16 [1F:10]
                        AQ_GlobalSystemUptime_CAL.u1.bits_1.systemUptime_31_16

                        Default = 0x0000

                        Bits 31:16 of the System Uptime (in milliseconds). Time tracked by software.
                        
  */
      unsigned int   systemUptime_31_16 : 16;    /* 1E.039D.F:0  R/W      Default = 0x0000 */
                     /* Bits 31:16 of the System Uptime (in milliseconds). Time tracked by software.
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global System Uptime */
  union
  {
    struct
    {
                    /*! \brief 1E.039E.F:0 R/W System Uptime 47:32 [2F:20]
                        AQ_GlobalSystemUptime_CAL.u2.bits_2.systemUptime_47_32

                        Default = 0x0000

                        Bits 47:32 of the System Uptime (in milliseconds). Time tracked by software.
                        
  */
      unsigned int   systemUptime_47_32 : 16;    /* 1E.039E.F:0  R/W      Default = 0x0000 */
                     /* Bits 47:32 of the System Uptime (in milliseconds). Time tracked by software.
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global System Uptime */
  union
  {
    struct
    {
                    /*! \brief 1E.039F.F:0 R/W Reserved 4
                        AQ_GlobalSystemUptime_CAL.u3.bits_3.reserved_4

                        Default = 0x0000

                        Reserved
                        
  */
      unsigned int   reserved_4 : 16;    /* 1E.039F.F:0  R/W      Default = 0x0000 */
                     /* Reserved
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_GlobalSystemUptime_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common POR Control: 1E.2681 */
/*                  Global Common POR Control: 1E.2681 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common POR Control */
  union
  {
    struct
    {
                    /*! \brief 1E.2681.0 R/W PHY Reset
                        AQ_GlobalCommonPorControl_CAL.u0.bits_0.phyReset

                        Default = 0x0

                        1 = PHY Reset
                        RTL_PIF_CFG="invalid"
                        

                 <B>Notes:</B>
                        Asserting this bit will reset the respective PHY. Equivalent to an external reset for PHY.  */
      unsigned int   phyReset : 1;    /* 1E.2681.0  R/W      Default = 0x0 */
                     /* 1 = PHY Reset
                        RTL_PIF_CFG="invalid"
                          */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonPorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common SERDES Lane0 RX EQ Start: 1E.2D14 */
/*                  Global Common SERDES Lane0 RX EQ Start: 1E.2D14 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common SERDES Lane0 RX EQ Start */
  union
  {
    struct
    {
                    /*! \brief 1E.2D14.0 R/W SERDES Lane0 RX EQ
                        AQ_GlobalCommonSerdesLane0RxEqStart_CAL.u0.bits_0.serdesLane0RxEq

                        Default = 0x0

                        SERDES Lane0 RX EQ
                        1 - Start adaptive RX equalization
                        0 - Stop adaptive RX equalization
                        
  */
      unsigned int   serdesLane0RxEq : 1;    /* 1E.2D14.0  R/W      Default = 0x0 */
                     /* SERDES Lane0 RX EQ
                        1 - Start adaptive RX equalization
                        0 - Stop adaptive RX equalization
                          */
                    /*! \brief 1E.2D14.1 R/W SERDES Lane0 RX EQ bit_32
                        AQ_GlobalCommonSerdesLane0RxEqStart_CAL.u0.bits_0.serdesLane0RxEqBit32

                        Default = 0x0

                        SERDES Lane0 RX EQ bit [32]
                        Rx Equalization control setting
                        Rx Equalization control setting:
                        [2:0]: Low Freq AGC DC Gain
                        [5:3]: Hi Freq AGC DC Gain
                        [10:6]: Hi Freq AGC AC Boost
                        [13:11]: DFE Pulse-Shaping DFE Tap F3dB Frequency
                        [16:14]: DFE Pulse-Shaping DFE Tap Gain
                        [20:17]: DFE Roaming N-1 Tap Gain
                        [24:21]: DFE Roaming N-2 Tap Gain
                        [28:25]: DFE Roaming N-3 Tap Gain
                        [32:29]: DFE Roaming N-4 Tap Gain
                        Maximum Update Rate - (500ns minimum).
                        
  */
      unsigned int   serdesLane0RxEqBit32 : 1;    /* 1E.2D14.1  R/W      Default = 0x0 */
                     /* SERDES Lane0 RX EQ bit [32]
                        Rx Equalization control setting
                        Rx Equalization control setting:
                        [2:0]: Low Freq AGC DC Gain
                        [5:3]: Hi Freq AGC DC Gain
                        [10:6]: Hi Freq AGC AC Boost
                        [13:11]: DFE Pulse-Shaping DFE Tap F3dB Frequency
                        [16:14]: DFE Pulse-Shaping DFE Tap Gain
                        [20:17]: DFE Roaming N-1 Tap Gain
                        [24:21]: DFE Roaming N-2 Tap Gain
                        [28:25]: DFE Roaming N-3 Tap Gain
                        [32:29]: DFE Roaming N-4 Tap Gain
                        Maximum Update Rate - (500ns minimum).
                          */
      unsigned int   reserved0 : 14;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonSerdesLane0RxEqStart_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common SERDES lane0 RX EQ: 1E.2D55 */
/*                  Global Common SERDES lane0 RX EQ: 1E.2D55 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common SERDES lane0 RX EQ */
  union
  {
    struct
    {
                    /*! \brief 1E.2D55.D:0 RO SERDES lane0 RX EQ Best EYE Value[D:0]
                        AQ_GlobalCommonSerdesLane0RxEq_CAL.u0.bits_0.serdesLane0RxEqBestEyeValue

                        

                        SERDES lane0 Optimum Receive Eye diagram Figure of Merit signal. Safe for sampling when OCTL_PCS_RXEQ_DONE_Lx_A is asserted: 
                        14'h0000  Completely Closed Eye 14'hFFFF  Completely Open Eye.
                        
  */
      unsigned int   serdesLane0RxEqBestEyeValue : 14;    /* 1E.2D55.D:0  RO       */
                     /* SERDES lane0 Optimum Receive Eye diagram Figure of Merit signal. Safe for sampling when OCTL_PCS_RXEQ_DONE_Lx_A is asserted: 
                        14'h0000  Completely Closed Eye 14'hFFFF  Completely Open Eye.
                          */
                    /*! \brief 1E.2D55.E RO SERDES lane0 RX EQ DONE
                        AQ_GlobalCommonSerdesLane0RxEq_CAL.u0.bits_0.serdesLane0RxEqDone

                        

                        SERDES lane0 PMA Adaptive Equalization Status Signal 
                        0  Indicates adaptive equalization results are not valid for sampling 
                        1  Indicates adaptive equalization is complete and results are valid for sampling. Optional pin module.
                        
  */
      unsigned int   serdesLane0RxEqDone : 1;    /* 1E.2D55.E  RO       */
                     /* SERDES lane0 PMA Adaptive Equalization Status Signal 
                        0  Indicates adaptive equalization results are not valid for sampling 
                        1  Indicates adaptive equalization is complete and results are valid for sampling. Optional pin module.
                          */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonSerdesLane0RxEq_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common RAMBUS PMA Register Address: 1E.2E00 */
/*                  Global Common RAMBUS PMA Register Address: 1E.2E00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common RAMBUS PMA Register Address */
  union
  {
    struct
    {
                    /*! \brief 1E.2E00.F:0 R/W Rambus PMA Register Address[F:0]
                        AQ_GlobalCommonRambusPmaRegisterAddress_CAL.u0.bits_0.rambusPmaRegisterAddress

                        Default = 0x0000

                        SERDES Register Address
                        

                 <B>Notes:</B>
                        SERDES address  */
      unsigned int   rambusPmaRegisterAddress : 16;    /* 1E.2E00.F:0  R/W      Default = 0x0000 */
                     /* SERDES Register Address
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonRambusPmaRegisterAddress_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common RAMBUS PMA Write/Read Control: 1E.2E01 */
/*                  Global Common RAMBUS PMA Write/Read Control: 1E.2E01 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common RAMBUS PMA Write/Read Control */
  union
  {
    struct
    {
                    /*! \brief 1E.2E01.0 RO Rambus PMA Reg Ready
                        AQ_GlobalCommonRambusPmaWrite_readControl_CAL.u0.bits_0.rambusPmaRegReady

                        

                        All accesses are complete and interface is ready for new access
                        

                 <B>Notes:</B>
                        PMA register access acknowledgement. Set 1 when read or write transaction has finished.  */
      unsigned int   rambusPmaRegReady : 1;    /* 1E.2E01.0  RO       */
                     /* All accesses are complete and interface is ready for new access
                          */
                    /*! \brief 1E.2E01.1 RO Rambus PMA Access Invalid
                        AQ_GlobalCommonRambusPmaWrite_readControl_CAL.u0.bits_0.rambusPmaAccessInvalid

                        

                        Previous Access was invalid
                        

                 <B>Notes:</B>
                        Set 1 when read or write transaction has terminated due to invalid address/timeout.  */
      unsigned int   rambusPmaAccessInvalid : 1;    /* 1E.2E01.1  RO       */
                     /* Previous Access was invalid
                          */
      unsigned int   reserved0 : 12;
                    /*! \brief 1E.2E01.E R/WSC Rambus PMA Read Enable
                        AQ_GlobalCommonRambusPmaWrite_readControl_CAL.u0.bits_0.rambusPmaReadEnable

                        Default = 0x0

                        SERDES Read Enable
                        

                 <B>Notes:</B>
                        SERDES read enable - auto clear  */
      unsigned int   rambusPmaReadEnable : 1;    /* 1E.2E01.E  R/WSC      Default = 0x0 */
                     /* SERDES Read Enable
                          */
                    /*! \brief 1E.2E01.F R/WSC Rambus PMA Write Enable
                        AQ_GlobalCommonRambusPmaWrite_readControl_CAL.u0.bits_0.rambusPmaWriteEnable

                        Default = 0x0

                        SERDES Write Enable
                        

                 <B>Notes:</B>
                        SERDES write enable - auto clear  */
      unsigned int   rambusPmaWriteEnable : 1;    /* 1E.2E01.F  R/WSC      Default = 0x0 */
                     /* SERDES Write Enable
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonRambusPmaWrite_readControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common RAMBUS PMA Register Write Data: 1E.2E02 */
/*                  Global Common RAMBUS PMA Register Write Data: 1E.2E02 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common RAMBUS PMA Register Write Data */
  union
  {
    struct
    {
                    /*! \brief 1E.2E02.F:0 R/W Rambus PMA Register Write Data[F:0]
                        AQ_GlobalCommonRambusPmaRegisterWriteData_CAL.u0.bits_0.rambusPmaRegisterWriteData

                        Default = 0x0000

                        PMA Register Write Data
                        

                 <B>Notes:</B>
                        SERDES register write data  */
      unsigned int   rambusPmaRegisterWriteData : 16;    /* 1E.2E02.F:0  R/W      Default = 0x0000 */
                     /* PMA Register Write Data
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonRambusPmaRegisterWriteData_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common RAMBUS PMA Register Read Data: 1E.2E03 */
/*                  Global Common RAMBUS PMA Register Read Data: 1E.2E03 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common RAMBUS PMA Register Read Data */
  union
  {
    struct
    {
                    /*! \brief 1E.2E03.F:0 RO Rambus PMA Register Read Data[F:0]
                        AQ_GlobalCommonRambusPmaRegisterReadData_CAL.u0.bits_0.rambusPmaRegisterReadData

                        

                        PMA Register Read Data
                        NOSYNC=

                 <B>Notes:</B>
                        PMA register access read data. The PMA register access when ready indicates that previous read data has completed.  */
      unsigned int   rambusPmaRegisterReadData : 16;    /* 1E.2E03.F:0  RO       */
                     /* PMA Register Read Data
                        NOSYNC=  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonRambusPmaRegisterReadData_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSS Egress Control Register: 1E.5002 */
/*                  MSS Egress Control Register: 1E.5002 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSS Egress Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.5002.0 R/W MSS Egress Soft Reset
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressSoftReset

                        Default = 0x0

                        1 = Soft reset
                        

                 <B>Notes:</B>
                        S/W reset  */
      unsigned int   mssEgressSoftReset : 1;    /* 1E.5002.0  R/W      Default = 0x0 */
                     /* 1 = Soft reset
                          */
                    /*! \brief 1E.5002.1 R/W MSS Egress Drop KAY Packet
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressDropKayPacket

                        Default = 0x0

                        1 = Drop KAY packet
                        

                 <B>Notes:</B>
                        Decides whether KAY packets have to be dropped  */
      unsigned int   mssEgressDropKayPacket : 1;    /* 1E.5002.1  R/W      Default = 0x0 */
                     /* 1 = Drop KAY packet
                          */
                    /*! \brief 1E.5002.2 R/W MSS Egress Drop EGPRC LUT Miss
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressDropEgprcLutMiss

                        Default = 0x0

                        1 = Drop Egress Classification LUT miss packets
                        
                        

                 <B>Notes:</B>
                        Decides whether Egress Pre-Security Classification (EGPRC) LUT miss packets are to be dropped  */
      unsigned int   mssEgressDropEgprcLutMiss : 1;    /* 1E.5002.2  R/W      Default = 0x0 */
                     /* 1 = Drop Egress Classification LUT miss packets
                        
                          */
                    /*! \brief 1E.5002.3 R/W MSS Egress GCM Start
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressGcmStart

                        Default = 0x0

                        1 = Start GCM
                        
                        

                 <B>Notes:</B>
                        Indicates GCM to start  */
      unsigned int   mssEgressGcmStart : 1;    /* 1E.5002.3  R/W      Default = 0x0 */
                     /* 1 = Start GCM
                        
                          */
                    /*! \brief 1E.5002.4 R/W MSS Egresss GCM Test Mode
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgresssGcmTestMode

                        Default = 0x0

                        1 = Enable GCM test mode
                        
                        

                 <B>Notes:</B>
                        Enables GCM test mode  */
      unsigned int   mssEgresssGcmTestMode : 1;    /* 1E.5002.4  R/W      Default = 0x0 */
                     /* 1 = Enable GCM test mode
                        
                          */
                    /*! \brief 1E.5002.5 R/W MSS Egress Unmatched Use SC 0
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressUnmatchedUseSc_0

                        Default = 0x0

                        1 = Use SC 0 for unmatched packets
                        0 = Unmatched packets are uncontrolled packets
                        
                        

                 <B>Notes:</B>
                        Use SC-Index 0 as default SC for unmatched packets. Otherwise the packets are treated as uncontrolled packets.  */
      unsigned int   mssEgressUnmatchedUseSc_0 : 1;    /* 1E.5002.5  R/W      Default = 0x0 */
                     /* 1 = Use SC 0 for unmatched packets
                        0 = Unmatched packets are uncontrolled packets
                        
                          */
                    /*! \brief 1E.5002.6 R/W MSS Egress Drop Invalid SA/SC Packets
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressDropInvalidSa_scPackets

                        Default = 0x0

                        1 = Drop invalid SA/SC packets
                        
                        

                 <B>Notes:</B>
                        Enables dropping of invalid SA/SC packets.  */
      unsigned int   mssEgressDropInvalidSa_scPackets : 1;    /* 1E.5002.6  R/W      Default = 0x0 */
                     /* 1 = Drop invalid SA/SC packets
                        
                          */
                    /*! \brief 1E.5002.7 R/W MSS Egress Explicit SECTag Report Short Length
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressExplicitSectagReportShortLength

                        Default = 0x0

                        Reserved
                        
                        

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   mssEgressExplicitSectagReportShortLength : 1;    /* 1E.5002.7  R/W      Default = 0x0 */
                     /* Reserved
                        
                          */
                    /*! \brief 1E.5002.8 R/W MSS Egress External Classification Enable
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressExternalClassificationEnable

                        Default = 0x0

                        1 = Drop EGPRC miss packets
                        
                        

                 <B>Notes:</B>
                        If set, internal classification is bypassed. Should always be set to 0.  */
      unsigned int   mssEgressExternalClassificationEnable : 1;    /* 1E.5002.8  R/W      Default = 0x0 */
                     /* 1 = Drop EGPRC miss packets
                        
                          */
                    /*! \brief 1E.5002.9 R/W MSS Egress ICV LSB 8 Bytes Enable
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressIcvLsb_8BytesEnable

                        Default = 0x0

                        1 = Use LSB
                        0 = Use MSB
                        
                        

                 <B>Notes:</B>
                        This bit selects MSB or LSB 8 bytes selection in the case where the ICV is 8 bytes.
                        0 = MSB is used.  */
      unsigned int   mssEgressIcvLsb_8BytesEnable : 1;    /* 1E.5002.9  R/W      Default = 0x0 */
                     /* 1 = Use LSB
                        0 = Use MSB
                        
                          */
                    /*! \brief 1E.5002.A R/W MSS Egress High Priority
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressHighPriority

                        Default = 0x0

                        1 = MIB counter clear on read enable
                        
                        

                 <B>Notes:</B>
                        If this bit is set to 1, read is given high priority and the MIB count value becomes 0 after read.  */
      unsigned int   mssEgressHighPriority : 1;    /* 1E.5002.A  R/W      Default = 0x0 */
                     /* 1 = MIB counter clear on read enable
                        
                          */
                    /*! \brief 1E.5002.B R/W MSS Egress Clear Counter
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressClearCounter

                        Default = 0x0

                        1 = Clear all MIB counters
                        
                        

                 <B>Notes:</B>
                        If this bit is set to 1, all MIB counters will be cleared.  */
      unsigned int   mssEgressClearCounter : 1;    /* 1E.5002.B  R/W      Default = 0x0 */
                     /* 1 = Clear all MIB counters
                        
                          */
                    /*! \brief 1E.5002.C R/W MSS Egress Clear Global Time
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressClearGlobalTime

                        Default = 0x0

                        1 = Clear global time
                        
                        

                 <B>Notes:</B>
                        Clear global time.  */
      unsigned int   mssEgressClearGlobalTime : 1;    /* 1E.5002.C  R/W      Default = 0x0 */
                     /* 1 = Clear global time
                        
                          */
                    /*! \brief 1E.5002.F:D R/W MSS Egress Ethertype Explicit SECTag LSB [2:0]
                        AQ_MssEgressControlRegister_CAL.u0.bits_0.mssEgressEthertypeExplicitSectagLsb

                        Default = 0x0

                        Ethertype for explicit SECTag bits 2:0.
                        

                 <B>Notes:</B>
                        Ethertype for explicity SECTag.  */
      unsigned int   mssEgressEthertypeExplicitSectagLsb : 3;    /* 1E.5002.F:D  R/W      Default = 0x0 */
                     /* Ethertype for explicit SECTag bits 2:0.
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSS Egress Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.5003.C:0 R/W MSS Egress Ethertype Explicit SECTag MSB  [F:3]
                        AQ_MssEgressControlRegister_CAL.u1.bits_1.mssEgressEthertypeExplicitSectagMsb

                        Default = 0x0000

                        Ethertype for explicit SECTag bits 15:3.
                        

                 <B>Notes:</B>
                        Ethertype for explicity SECTag.  */
      unsigned int   mssEgressEthertypeExplicitSectagMsb : 13;    /* 1E.5003.C:0  R/W      Default = 0x0000 */
                     /* Ethertype for explicit SECTag bits 15:3.
                          */
      unsigned int   reserved0 : 3;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MssEgressControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSS Egress LUT Address Control Register: 1E.5080 */
/*                  MSS Egress LUT Address Control Register: 1E.5080 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSS Egress LUT Address Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.5080.8:0 R/W MSS Egress LUT Address [8:0]
                        AQ_MssEgressLutAddressControlRegister_CAL.u0.bits_0.mssEgressLutAddress

                        Default = 0x000

                        LUT address
                        
  */
      unsigned int   mssEgressLutAddress : 9;    /* 1E.5080.8:0  R/W      Default = 0x000 */
                     /* LUT address
                          */
      unsigned int   reserved0 : 3;
                    /*! \brief 1E.5080.F:C R/W MSS Egress LUT Select [3:0]
                        AQ_MssEgressLutAddressControlRegister_CAL.u0.bits_0.mssEgressLutSelect

                        Default = 0x0

                        LUT select
                        

                 <B>Notes:</B>
                        0x0 : Egress MAC Control FIlter (CTLF) LUT
                        0x1 : Egress Classification LUT
                        0x2 : Egress SC/SA LUT
                        0x3 : Egress SMIB  */
      unsigned int   mssEgressLutSelect : 4;    /* 1E.5080.F:C  R/W      Default = 0x0 */
                     /* LUT select
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_MssEgressLutAddressControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSS Egress LUT Control Register: 1E.5081 */
/*                  MSS Egress LUT Control Register: 1E.5081 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSS Egress LUT Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 1E.5081.E R/W MSS Egress LUT Read
                        AQ_MssEgressLutControlRegister_CAL.u0.bits_0.mssEgressLutRead

                        Default = 0x0

                        1 = LUT read
                        

                 <B>Notes:</B>
                        Setting this bit to 1, will read the LUT. This bit will automatically clear to 0.  */
      unsigned int   mssEgressLutRead : 1;    /* 1E.5081.E  R/W      Default = 0x0 */
                     /* 1 = LUT read
                          */
                    /*! \brief 1E.5081.F R/W MSS Egress LUT Write
                        AQ_MssEgressLutControlRegister_CAL.u0.bits_0.mssEgressLutWrite

                        Default = 0x0

                        1 = LUT write
                        

                 <B>Notes:</B>
                        Setting this bit to 1, will write the LUT. This bit will automatically clear to 0.  */
      unsigned int   mssEgressLutWrite : 1;    /* 1E.5081.F  R/W      Default = 0x0 */
                     /* 1 = LUT write
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_MssEgressLutControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSS Egress LUT Data Control Register: 1E.50A0 */
/*                  MSS Egress LUT Data Control Register: 1E.50A0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSS Egress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.50A0.F:0 R/W MSS Egress LUT Data 0 [F:0]
                        AQ_MssEgressLutDataControlRegister_CAL.u0.bits_0.mssEgressLutData_0

                        Default = 0x0000

                        LUT data bits 15:0
                        
  */
      unsigned int   mssEgressLutData_0 : 16;    /* 1E.50A0.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 15:0
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_MssEgressLutDataControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Revision Register: 1E.6000 */
/*                  MSM System Revision Register: 1E.6000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Revision Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6000.7:0 ROS MSM System Core Version [7:0]
                        AQ_MsmSystemRevisionRegister_CAL.u0.bits_0.msmSystemCoreVersion

                        Default = 0x03

                        Core version
  */
      unsigned int   msmSystemCoreVersion : 8;    /* 1E.6000.7:0  ROS      Default = 0x03 */
                     /* Core version  */
                    /*! \brief 1E.6000.F:8 ROS MSM System Core Revision [7:0]
                        AQ_MsmSystemRevisionRegister_CAL.u0.bits_0.msmSystemCoreRevision

                        Default = 0x01

                        Core revision
  */
      unsigned int   msmSystemCoreRevision : 8;    /* 1E.6000.F:8  ROS      Default = 0x01 */
                     /* Core revision  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Revision Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6001.F:0 ROS MSM System Customer Revision [F:0]
                        AQ_MsmSystemRevisionRegister_CAL.u1.bits_1.msmSystemCustomerRevision

                        Default = 0x0001

                        Customer revision
  */
      unsigned int   msmSystemCustomerRevision : 16;    /* 1E.6001.F:0  ROS      Default = 0x0001 */
                     /* Customer revision  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRevisionRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Scratchpad Register: 1E.6002 */
/*                  MSM System Scratchpad Register: 1E.6002 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Scratchpad Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6002.F:0 R/W MSM System Scratch 0 [F:0]
                        AQ_MsmSystemScratchpadRegister_CAL.u0.bits_0.msmSystemScratch_0

                        Default = 0x0000

                        Scratch register
  */
      unsigned int   msmSystemScratch_0 : 16;    /* 1E.6002.F:0  R/W      Default = 0x0000 */
                     /* Scratch register  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Scratchpad Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6003.F:0 R/W MSM System Scratch 1 [F:0]
                        AQ_MsmSystemScratchpadRegister_CAL.u1.bits_1.msmSystemScratch_1

                        Default = 0x0000

                        Scratch register
  */
      unsigned int   msmSystemScratch_1 : 16;    /* 1E.6003.F:0  R/W      Default = 0x0000 */
                     /* Scratch register  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemScratchpadRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System General Control Register: 1E.6004 */
/*                  MSM System General Control Register: 1E.6004 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System General Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6004.0 R/W MSM System Tx Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemTxEnable

                        Default = 0x0

                        1 = Tx enable

                 <B>Notes:</B>
                        MAC Rx path enable. Should be set to 1 to enable the MAC Rx path. Should be set to 0 to disable the MAC Rx path.  */
      unsigned int   msmSystemTxEnable : 1;    /* 1E.6004.0  R/W      Default = 0x0 */
                     /* 1 = Tx enable  */
                    /*! \brief 1E.6004.1 R/W MSM System Rx Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemRxEnable

                        Default = 0x0

                        1 = Rx enable

                 <B>Notes:</B>
                        MAC Tx path enable. Should be set to 1 to enable the MAC Tx path. Should be set to 0 to disable the MAC Tx path.  */
      unsigned int   msmSystemRxEnable : 1;    /* 1E.6004.1  R/W      Default = 0x0 */
                     /* 1 = Rx enable  */
      unsigned int   reserved0 : 1;
                    /*! \brief 1E.6004.3 R/W MSM System WAN Mode
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemWanMode

                        Default = 0x0

                        1 = WAN mode
                        0 = LAN mode
                        

                 <B>Notes:</B>
                        WAN mode enable. Sets WAN mode when set to 1 and LAN mode when set to 0. Note: When changing the mode, verifiy correct setting of the Tx IPG.  */
      unsigned int   msmSystemWanMode : 1;    /* 1E.6004.3  R/W      Default = 0x0 */
                     /* 1 = WAN mode
                        0 = LAN mode
                          */
                    /*! \brief 1E.6004.4 R/W MSM System Promiscuous Mode
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemPromiscuousMode

                        Default = 0x0

                        1 = Promiscuous mode
                        

                 <B>Notes:</B>
                        When set to 1, all frames are received without any MAC address filtering.  */
      unsigned int   msmSystemPromiscuousMode : 1;    /* 1E.6004.4  R/W      Default = 0x0 */
                     /* 1 = Promiscuous mode
                          */
                    /*! \brief 1E.6004.5 R/W MSM System PAD Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemPadEnable

                        Default = 0x0

                        1 = Enable frame padding removal on Rx
                        

                 <B>Notes:</B>
                        When set to 1, enable frame padding removal on the Rx path. If enabled, padding is removed before the frame is transferred to the MAC client application. If disabled, no padding is removed on the Rx by the MAC.
                        Note : On Tx, the MAC always adds padding as required.  */
      unsigned int   msmSystemPadEnable : 1;    /* 1E.6004.5  R/W      Default = 0x0 */
                     /* 1 = Enable frame padding removal on Rx
                          */
                    /*! \brief 1E.6004.6 R/W MSM System CRC Forward
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemCrcForward

                        Default = 0x0

                        1 = Enable CRC forwarding
                        

                 <B>Notes:</B>
                        When set to 1, the CRC field of the received frames is forwarded with the frame to the user application. If disabled, the CRC field is stripped from the frame.
                        Note : If padding is enabled ( See MAC PAD Enable  set to 1), this bit is ignored.  */
      unsigned int   msmSystemCrcForward : 1;    /* 1E.6004.6  R/W      Default = 0x0 */
                     /* 1 = Enable CRC forwarding
                          */
                    /*! \brief 1E.6004.7 R/W MSM System Pause Forward
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemPauseForward

                        Default = 0x0

                        1 = Enable Pause forwarding
                        

                 <B>Notes:</B>
                        Terminate or forward pause frames. If set to 1, pause frames are forwarded to the user application. In normal mode, when set to 0, pause frames are terminated and discarded within the MAC.  */
      unsigned int   msmSystemPauseForward : 1;    /* 1E.6004.7  R/W      Default = 0x0 */
                     /* 1 = Enable Pause forwarding
                          */
                    /*! \brief 1E.6004.8 R/W MSM System Pause Ignore
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemPauseIgnore

                        Default = 0x0

                        1 = Ignore pause frames
                        

                 <B>Notes:</B>
                        Ignore pause frame quanta. If set to 1, received pause frames are ignored by the MAC. When set to 0, the Tx is stopped for the amount of time specified in the pause quanta received within the pause frame.  */
      unsigned int   msmSystemPauseIgnore : 1;    /* 1E.6004.8  R/W      Default = 0x0 */
                     /* 1 = Ignore pause frames
                          */
                    /*! \brief 1E.6004.9 R/W MSM System Tx Address Insert Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemTxAddressInsertEnable

                        Default = 0x0

                        1 = Insert Tx MAC source address
                        

                 <B>Notes:</B>
                        Set the source MAC address on transmit. If set to 1, the MAC overwrites the source MAC address with the MAC programmed address in all transmitted frames. When set to 0, the source MAC address is transmitted unmodified from the MAC Tx client application.  */
      unsigned int   msmSystemTxAddressInsertEnable : 1;    /* 1E.6004.9  R/W      Default = 0x0 */
                     /* 1 = Insert Tx MAC source address
                          */
                    /*! \brief 1E.6004.A R/W MSM System Tx CRC Append
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemTxCrcAppend

                        Default = 0x0

                        1 = Append Tx CRC
                        

                 <B>Notes:</B>
                        Permanently enable CRC append on transmit. If set to 1, the Tx will append a CRC to all transmitted frames. If set to 0, CRC append can be controlled on a per frame basis using the pin ff_tx_crc.
                        This configuration bit is OR'ed with the external ff_tx_crc pin to instruct the Tx to append a CRC to transmitted frames. The ff_tx_crc pin is tied to 0.  */
      unsigned int   msmSystemTxCrcAppend : 1;    /* 1E.6004.A  R/W      Default = 0x0 */
                     /* 1 = Append Tx CRC
                          */
                    /*! \brief 1E.6004.B R/W MSM System Tx Pad Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemTxPadEnable

                        Default = 0x1

                        1 = Enable Tx padding
                        

                 <B>Notes:</B>
                        When set to 1, enable padding of frames in the Tx direction. When set to 0, the MAC will not extend frames from the application to a minimum of 64 bytes, allowing to transmit short frames (violating the Ethernet mimimum size requirements). Must be set to 1 for normal operation.  */
      unsigned int   msmSystemTxPadEnable : 1;    /* 1E.6004.B  R/W      Default = 0x1 */
                     /* 1 = Enable Tx padding
                          */
                    /*! \brief 1E.6004.C R/WSC MSM System Soft Reset
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemSoftReset

                        Default = 0x0

                        1 = Soft reset
                        

                 <B>Notes:</B>
                        Software reset. Self clearing bit. When set to 1, resets all statistic counters as well as the Tx and Rx FIFOs. It should be issued after all traffic has been stopped as a result of clearing the Rx/Tx enable bits ( See MAC Rx Enable  set to 0 and  See MAC Tx Enable  set to 0).
                        Note : Can lead to an Rx interface (ff_rx_xxx) violations to the application if the reset is issued in the middle of a receive frame transfer. Then the end of packet (assertion of ff_rx_eop) is lost and the application should be prepeared to handle this exception.  */
      unsigned int   msmSystemSoftReset : 1;    /* 1E.6004.C  R/WSC      Default = 0x0 */
                     /* 1 = Soft reset
                          */
                    /*! \brief 1E.6004.D R/W MSM System Control Frame Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemControlFrameEnable

                        Default = 0x0

                        1 = Control frame enabled
                        

                 <B>Notes:</B>
                        MAC control frame enable. When set to 1, the MAC control frames with any Opcode other than 0x0001 are accepted and forwarded to the client interface. When set to 0, MAC control frames with any opcode other than 0x0001 are silently discarded.  */
      unsigned int   msmSystemControlFrameEnable : 1;    /* 1E.6004.D  R/W      Default = 0x0 */
                     /* 1 = Control frame enabled
                          */
                    /*! \brief 1E.6004.E R/W MSM System Rx Error Discard
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemRxErrorDiscard

                        Default = 0x0

                        1 = Enable discard of received errored frames
                        

                 <B>Notes:</B>
                        Rx errored frame discard enable. When set to 1, any frame received with an error is discarded and not forwarded to the client interface. When set to 0, errored frames are forwarded to the client interface with ff_rx_err asserted.
                        Note : It is recommended to set this bit to 1 only when store and forward operation is enabled (RX_SECTION_FULL TBD).  */
      unsigned int   msmSystemRxErrorDiscard : 1;    /* 1E.6004.E  R/W      Default = 0x0 */
                     /* 1 = Enable discard of received errored frames
                          */
                    /*! \brief 1E.6004.F R/W MSM System PHY Tx Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u0.bits_0.msmSystemPhyTxEnable

                        Default = 0x0

                        1 = Enable PHY Tx
                        

                 <B>Notes:</B>
                        Directly controls the phy_tx_ena pin.  */
      unsigned int   msmSystemPhyTxEnable : 1;    /* 1E.6004.F  R/W      Default = 0x0 */
                     /* 1 = Enable PHY Tx
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System General Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6005.0 R/W MSM System Force Send IDLE
                        AQ_MsmSystemGeneralControlRegister_CAL.u1.bits_1.msmSystemForceSendIdle

                        Default = 0x0

                        1 = Force send idle

                 <B>Notes:</B>
                        When set to 1, suppress any frame transmissions and forces IDLE n the Tx interface instead of frames. This control affects the MAC reconciliation layer (RS) which acts after all MAC datapath has processed the frame.
                        Note : Does not have an effect on fault handling (i.e. reception of local fault will still cause transmit of remote fault).
                        Must be 0 for normal operation.  */
      unsigned int   msmSystemForceSendIdle : 1;    /* 1E.6005.0  R/W      Default = 0x0 */
                     /* 1 = Force send idle  */
                    /*! \brief 1E.6005.1 R/W MSM System Length Check Disable
                        AQ_MsmSystemGeneralControlRegister_CAL.u1.bits_1.msmSystemLengthCheckDisable

                        Default = 0x0

                        1 = Disable length check

                 <B>Notes:</B>
                        Payload length check disable. When set to 0, the MAC checks the frames payload length with the frame length/type field. When set to 1, the payload length check is disabled.  */
      unsigned int   msmSystemLengthCheckDisable : 1;    /* 1E.6005.1  R/W      Default = 0x0 */
                     /* 1 = Disable length check  */
                    /*! \brief 1E.6005.2 R/W MSM System IDLE Column Count Extend
                        AQ_MsmSystemGeneralControlRegister_CAL.u1.bits_1.msmSystemIdleColumnCountExtend

                        Default = 0x0

                        1 = Extend IDLE column count

                 <B>Notes:</B>
                        When set to 1, extends the RS layer IDLE column counter by 2x. The IEEE 802.3ae defines the fault condition to be cleared after 128 columns of IDLE have been received. If the MAC operates together with a WAN mode PCS (WIS) it may may happen (depending on PCS) that this period is too short to bridge the IDLE stuffing occurring in this mode, leading to a toggling fault indication. In this case, extending the counter helps to aoivd toggling fault indications.  */
      unsigned int   msmSystemIdleColumnCountExtend : 1;    /* 1E.6005.2  R/W      Default = 0x0 */
                     /* 1 = Extend IDLE column count  */
                    /*! \brief 1E.6005.3 R/W MSM System Priority Flow Control Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u1.bits_1.msmSystemPriorityFlowControlEnable

                        Default = 0x0

                        1 = Enable priority flow control
                        0 = Enable link flow control
                        

                 <B>Notes:</B>
                        Enable priority flow control (PFC) mode of operation. When set to 0, the MAC uses standard link pause frames. When set to 1, the MAC will transmit and accept PFC frames.  */
      unsigned int   msmSystemPriorityFlowControlEnable : 1;    /* 1E.6005.3  R/W      Default = 0x0 */
                     /* 1 = Enable priority flow control
                        0 = Enable link flow control
                          */
      unsigned int   reserved3 : 1;
                    /*! \brief 1E.6005.5 R/W MSM System SFD Check Disable
                        AQ_MsmSystemGeneralControlRegister_CAL.u1.bits_1.msmSystemSfdCheckDisable

                        Default = 0x0

                        1 = Disable SFD check
                        

                 <B>Notes:</B>
                        Disable check of SFD (0xD5) character at frame start. When set to 1, the frame is accepted even if the SFD byte following the preamble is not 0xD5. When set to 0, a frame is accepted only if the SFD byte is found with the value 0xD5.  */
      unsigned int   msmSystemSfdCheckDisable : 1;    /* 1E.6005.5  R/W      Default = 0x0 */
                     /* 1 = Disable SFD check
                          */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.6005.7 R/W MSM System Tx Low Power IDLE Enable
                        AQ_MsmSystemGeneralControlRegister_CAL.u1.bits_1.msmSystemTxLowPowerIdleEnable

                        Default = 0x0

                        1 = Transmit LPI enable
                        

                 <B>Notes:</B>
                        Transmit low power IDLE enable. When set to 1, the MAC completes the transmission of the current frame and generates low power IDLE sequences (LPI) to the XGMII/SGMII. When set to 0, the MAC operates in normal mode. This bit is OR'ed with the reg_lowp_ena pin.  */
      unsigned int   msmSystemTxLowPowerIdleEnable : 1;    /* 1E.6005.7  R/W      Default = 0x0 */
                     /* 1 = Transmit LPI enable
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.6005.A R/W MSM System CRC Corruption Disable
                        AQ_MsmSystemGeneralControlRegister_CAL.u1.bits_1.msmSystemCrcCorruptionDisable

                        Default = 0x0

                        1 = Disable CRC corruption
                        

                 <B>Notes:</B>
                        When set to 1, the inserted CRC field of the transmitted frames will always be correct regardless of any Rx MAC errors. If set to 0, the inserted CRC field will be corrupted (by inverting bit 30) when any errors are detected by the Rx MAC.  */
      unsigned int   msmSystemCrcCorruptionDisable : 1;    /* 1E.6005.A  R/W      Default = 0x0 */
                     /* 1 = Disable CRC corruption
                          */
                    /*! \brief 1E.6005.B R/WSC MSM System Statistic Counter Reset
                        AQ_MsmSystemGeneralControlRegister_CAL.u1.bits_1.msmSystemStatisticCounterReset

                        Default = 0x0

                        1 = Statistic counter reset
                        

                 <B>Notes:</B>
                        Statistic counter software reset. When set to 1, resets all statistic counters. This bit is self-clearing by hardware.  */
      unsigned int   msmSystemStatisticCounterReset : 1;    /* 1E.6005.B  R/WSC      Default = 0x0 */
                     /* 1 = Statistic counter reset
                          */
      unsigned int   reserved0 : 4;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemGeneralControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Address Register: 1E.6006 */
/*                  MSM System Address Register: 1E.6006 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Address Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6006.F:0 R/W MSM System Address 0 [F:0]
                        AQ_MsmSystemAddressRegister_CAL.u0.bits_0.msmSystemAddress_0

                        Default = 0x0000

                        MAC address bits 15:0
  */
      unsigned int   msmSystemAddress_0 : 16;    /* 1E.6006.F:0  R/W      Default = 0x0000 */
                     /* MAC address bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Address Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6007.F:0 R/W MSM System Address 1 [F:0]
                        AQ_MsmSystemAddressRegister_CAL.u1.bits_1.msmSystemAddress_1

                        Default = 0x0000

                        MAC address bits 31:16
  */
      unsigned int   msmSystemAddress_1 : 16;    /* 1E.6007.F:0  R/W      Default = 0x0000 */
                     /* MAC address bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM System Address Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6008.F:0 R/W MSM System Address 2 [F:0]
                        AQ_MsmSystemAddressRegister_CAL.u2.bits_2.msmSystemAddress_2

                        Default = 0x0000

                        MAC address bits 47:32
  */
      unsigned int   msmSystemAddress_2 : 16;    /* 1E.6008.F:0  R/W      Default = 0x0000 */
                     /* MAC address bits 47:32  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM System Address Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_MsmSystemAddressRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Frame Control Register: 1E.600A */
/*                  MSM System Frame Control Register: 1E.600A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Frame Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.600A.E:0 R/W MSM System Maximum Frame Length [E:0]
                        AQ_MsmSystemFrameControlRegister_CAL.u0.bits_0.msmSystemMaximumFrameLength

                        Default = 0x0600

                        Maximum frame length

                 <B>Notes:</B>
                        Maximum supported frame length. The MAC supports any frame size up to 16,352 bytes (0x3FE0). Typical settings are 1518 for standard.  */
      unsigned int   msmSystemMaximumFrameLength : 15;    /* 1E.600A.E:0  R/W      Default = 0x0600 */
                     /* Maximum frame length  */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Frame Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM System Frame Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM System Frame Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_MsmSystemFrameControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System FIFO Control Register: 1E.600E */
/*                  MSM System FIFO Control Register: 1E.600E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.600E.7:0 R/W MSM System Rx FIFO Full Threshold [7:0]
                        AQ_MsmSystemFifoControlRegister_CAL.u0.bits_0.msmSystemRxFifoFullThreshold

                        Default = 0x08

                        Rx FIFO full threshold

                 <B>Notes:</B>
                        All threshold values are in steps of FIFO words.  */
      unsigned int   msmSystemRxFifoFullThreshold : 8;    /* 1E.600E.7:0  R/W      Default = 0x08 */
                     /* Rx FIFO full threshold  */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.600F.7:0 R/W MSM System Rx FIFO Empty Threshold [7:0]
                        AQ_MsmSystemFifoControlRegister_CAL.u1.bits_1.msmSystemRxFifoEmptyThreshold

                        Default = 0x00

                        Rx FIFO empty threshold

                 <B>Notes:</B>
                        All threshold values are in steps of FIFO words.  */
      unsigned int   msmSystemRxFifoEmptyThreshold : 8;    /* 1E.600F.7:0  R/W      Default = 0x00 */
                     /* Rx FIFO empty threshold  */
      unsigned int   reserved0 : 8;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM System FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6010.5:0 R/W MSM System Tx FIFO Full Threshold [5:0]
                        AQ_MsmSystemFifoControlRegister_CAL.u2.bits_2.msmSystemTxFifoFullThreshold

                        Default = 0x08

                        Tx FIFO full threshold

                 <B>Notes:</B>
                        All threshold values are in steps of FIFO words.  */
      unsigned int   msmSystemTxFifoFullThreshold : 6;    /* 1E.6010.5:0  R/W      Default = 0x08 */
                     /* Tx FIFO full threshold  */
      unsigned int   reserved0 : 10;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM System FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6011.5:0 R/W MSM System Tx FIFO Empty Threshold [5:0]
                        AQ_MsmSystemFifoControlRegister_CAL.u3.bits_3.msmSystemTxFifoEmptyThreshold

                        Default = 0x00

                        Tx FIFO empty threshold

                 <B>Notes:</B>
                        All threshold values are in steps of FIFO words.  */
      unsigned int   msmSystemTxFifoEmptyThreshold : 6;    /* 1E.6011.5:0  R/W      Default = 0x00 */
                     /* Tx FIFO empty threshold  */
      unsigned int   reserved0 : 10;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of MSM System FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6012.7:0 ROS MSM System Rx FIFO Almost Full Threshold [7:0]
                        AQ_MsmSystemFifoControlRegister_CAL.u4.bits_4.msmSystemRxFifoAlmostFullThreshold

                        Default = 0x00

                        Rx FIFO almost full threshold

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   msmSystemRxFifoAlmostFullThreshold : 8;    /* 1E.6012.7:0  ROS      Default = 0x00 */
                     /* Rx FIFO almost full threshold  */
      unsigned int   reserved0 : 8;
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of MSM System FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6013.7:0 ROS MSM System Rx FIFO Almost Empty Threshold [7:0]
                        AQ_MsmSystemFifoControlRegister_CAL.u5.bits_5.msmSystemRxFifoAlmostEmptyThreshold

                        Default = 0x00

                        Rx FIFO almost empty threshold

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   msmSystemRxFifoAlmostEmptyThreshold : 8;    /* 1E.6013.7:0  ROS      Default = 0x00 */
                     /* Rx FIFO almost empty threshold  */
      unsigned int   reserved0 : 8;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of MSM System FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6014.7:0 ROS MSM System Tx FIFO Almost Full Threshold [7:0]
                        AQ_MsmSystemFifoControlRegister_CAL.u6.bits_6.msmSystemTxFifoAlmostFullThreshold

                        Default = 0x00

                        Tx FIFO almost full threshold

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   msmSystemTxFifoAlmostFullThreshold : 8;    /* 1E.6014.7:0  ROS      Default = 0x00 */
                     /* Tx FIFO almost full threshold  */
      unsigned int   reserved0 : 8;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of MSM System FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6015.7:0 ROS MSM System Tx FIFO Almost Empty Threshold [7:0]
                        AQ_MsmSystemFifoControlRegister_CAL.u7.bits_7.msmSystemTxFifoAlmostEmptyThreshold

                        Default = 0x00

                        Tx FIFO almost empty threshold

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   msmSystemTxFifoAlmostEmptyThreshold : 8;    /* 1E.6015.7:0  ROS      Default = 0x00 */
                     /* Tx FIFO almost empty threshold  */
      unsigned int   reserved0 : 8;
    } bits_7;
    uint16_t word_7;
  } u7;
} AQ_MsmSystemFifoControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Hash Control Register: 1E.6016 */
/*                  MSM System Hash Control Register: 1E.6016 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Hash Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6016.5:0 R/W MSM System Hash Table [5:0]
                        AQ_MsmSystemHashControlRegister_CAL.u0.bits_0.msmSystemHashTable

                        Default = 0x00

                        Hash table address (code)

                 <B>Notes:</B>
                        Hash table programming. Write only register.  */
      unsigned int   msmSystemHashTable : 6;    /* 1E.6016.5:0  R/W      Default = 0x00 */
                     /* Hash table address (code)  */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.6016.8 R/W MSM System Multicast Enable
                        AQ_MsmSystemHashControlRegister_CAL.u0.bits_0.msmSystemMulticastEnable

                        Default = 0x0

                        1 = Multicast enable

                 <B>Notes:</B>
                        When set to 1, enables reception of multicast frame reception for the entry.  */
      unsigned int   msmSystemMulticastEnable : 1;    /* 1E.6016.8  R/W      Default = 0x0 */
                     /* 1 = Multicast enable  */
      unsigned int   reserved0 : 7;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Hash Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemHashControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System MDIO Control Register: 1E.6018 */
/*                  MSM System MDIO Control Register: 1E.6018 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System MDIO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6018.0 ROS MSM System MDIO Busy 0
                        AQ_MsmSystemMdioControlRegister_CAL.u0.bits_0.msmSystemMdioBusy_0

                        Default = 0x0

                        MDIO busy

                 <B>Notes:</B>
                        MDIO busy. If set to 1, an MDIO transaction is currently ongoing. If set to 0, the application can access the other registers.  */
      unsigned int   msmSystemMdioBusy_0 : 1;    /* 1E.6018.0  ROS      Default = 0x0 */
                     /* MDIO busy  */
                    /*! \brief 1E.6018.1 ROS MSM System MDIO Read Error
                        AQ_MsmSystemMdioControlRegister_CAL.u0.bits_0.msmSystemMdioReadError

                        Default = 0x0

                        MDIO busy

                 <B>Notes:</B>
                        MDIO read error. If set to 1, the last read transaction had no response from a PHY and the data read could be invalid. This can happen if the PHY address does not match any PHY that is available on the MDIO bus.  */
      unsigned int   msmSystemMdioReadError : 1;    /* 1E.6018.1  ROS      Default = 0x0 */
                     /* MDIO busy  */
                    /*! \brief 1E.6018.3:2 R/W MSM System MDIO Hold Time Configuration [1:0]
                        AQ_MsmSystemMdioControlRegister_CAL.u0.bits_0.msmSystemMdioHoldTimeConfiguration

                        Default = 0x0

                        MDIO hold time configuration

                 <B>Notes:</B>
                        MDIO hold time setting: 
                        0x0 : 1 clock cycle
                        0x1 : 2 clock cycles
                        0x2 : 3 clock cycles
                        0x3 : 4 clock cycles  */
      unsigned int   msmSystemMdioHoldTimeConfiguration : 2;    /* 1E.6018.3:2  R/W      Default = 0x0 */
                     /* MDIO hold time configuration  */
      unsigned int   reserved0 : 2;
                    /*! \brief 1E.6018.6 R/W MSM System MDIO Clause 45 Enable
                        AQ_MsmSystemMdioControlRegister_CAL.u0.bits_0.msmSystemMdioClause_45Enable

                        Default = 0x1

                        1 = Clause 45 transactions used
                        0 = Clause 22 transactions used
                        

                 <B>Notes:</B>
                        Enable Clause 45 support. When set to 0, Clause 22 transactions are used. When set to 1, Clause 45 transactions are used.  */
      unsigned int   msmSystemMdioClause_45Enable : 1;    /* 1E.6018.6  R/W      Default = 0x1 */
                     /* 1 = Clause 45 transactions used
                        0 = Clause 22 transactions used
                          */
                    /*! \brief 1E.6018.F:7 R/W MSM System MDIO Clock Divider Configuration [8:0]
                        AQ_MsmSystemMdioControlRegister_CAL.u0.bits_0.msmSystemMdioClockDividerConfiguration

                        Default = 0x028

                        1 = Multicast enable

                 <B>Notes:</B>
                        A value of 5 to 511 can be set. The frequency is clk / ((2 * divisor) + 1). Setting the divisor to 0 disables the MDC.  */
      unsigned int   msmSystemMdioClockDividerConfiguration : 9;    /* 1E.6018.F:7  R/W      Default = 0x028 */
                     /* 1 = Multicast enable  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System MDIO Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 1E.6019.F ROS MSM System MDIO Busy 1
                        AQ_MsmSystemMdioControlRegister_CAL.u1.bits_1.msmSystemMdioBusy_1

                        Default = 0x0

                        MDIO busy

                 <B>Notes:</B>
                        MDIO busy. If set to 1, an MDIO transaction is currently ongoing. If set to 0, the application can access the other registers.  */
      unsigned int   msmSystemMdioBusy_1 : 1;    /* 1E.6019.F  ROS      Default = 0x0 */
                     /* MDIO busy  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM System MDIO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.601A.4:0 R/W MSM System MDIO Device Address [4:0]
                        AQ_MsmSystemMdioControlRegister_CAL.u2.bits_2.msmSystemMdioDeviceAddress

                        Default = 0x00

                        MDIO device address

                 <B>Notes:</B>
                        Clause 45 device address
                        Clause 22 register address  */
      unsigned int   msmSystemMdioDeviceAddress : 5;    /* 1E.601A.4:0  R/W      Default = 0x00 */
                     /* MDIO device address  */
                    /*! \brief 1E.601A.9:5 R/W MSM System MDIO Port Address [4:0]
                        AQ_MsmSystemMdioControlRegister_CAL.u2.bits_2.msmSystemMdioPortAddress

                        Default = 0x00

                        MDIO port address

                 <B>Notes:</B>
                        Clause 45 port address
                        Clause 22 PHY address  */
      unsigned int   msmSystemMdioPortAddress : 5;    /* 1E.601A.9:5  R/W      Default = 0x00 */
                     /* MDIO port address  */
      unsigned int   reserved0 : 4;
                    /*! \brief 1E.601A.E R/WSC MSM System MDIO Read Address Post Increment
                        AQ_MsmSystemMdioControlRegister_CAL.u2.bits_2.msmSystemMdioReadAddressPostIncrement

                        Default = 0x0

                        MDIO read address post increment

                 <B>Notes:</B>
                        When set to 1, a read with address post increment transaction is intiated. Only valid for Clause 45 transactions.  */
      unsigned int   msmSystemMdioReadAddressPostIncrement : 1;    /* 1E.601A.E  R/WSC      Default = 0x0 */
                     /* MDIO read address post increment  */
                    /*! \brief 1E.601A.F R/WSC MSM System MDIO Read
                        AQ_MsmSystemMdioControlRegister_CAL.u2.bits_2.msmSystemMdioRead

                        Default = 0x0

                        MDIO read

                 <B>Notes:</B>
                        When set to 1, a read transaction is intiated.  */
      unsigned int   msmSystemMdioRead : 1;    /* 1E.601A.F  R/WSC      Default = 0x0 */
                     /* MDIO read  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM System MDIO Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of MSM System MDIO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.601C.F:0 R/W MSM System MDIO Data [F:0]
                        AQ_MsmSystemMdioControlRegister_CAL.u4.bits_4.msmSystemMdioData

                        Default = 0x0000

                        MDIO data

                 <B>Notes:</B>
                        When written, initiates a write transaction to the PHY. The  See MAC Control Register 26: Address 1E.601A register must have been intialized. The  See MAC MDIO Busy  bit will be set immediately and cleared when the write transaction has finished.
                        When read, returns the data read from the PHY register after a read transaction has been completed (initiated by setting either  See MAC MDIO Read bit or  See MAC MDIO Address Post Increment bit to 1).
                        If the  See MAC MDIO Busy bit is set, the value read is invalid.  */
      unsigned int   msmSystemMdioData : 16;    /* 1E.601C.F:0  R/W      Default = 0x0000 */
                     /* MDIO data  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of MSM System MDIO Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of MSM System MDIO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.601E.F:0 R/W MSM System MDIO Register Address [F:0]
                        AQ_MsmSystemMdioControlRegister_CAL.u6.bits_6.msmSystemMdioRegisterAddress

                        Default = 0x0000

                        MDIO register address

                 <B>Notes:</B>
                        Address of register within Clause 45 PHY device to read from or write to. After writing this register, an address write transaction will be initiated to set the PHY's internal address register to the configured value.
                        The  See MAC Control Register 26: Address 1E.601A register must have been intialized before the first write to this register.
                        Note : When a read post increment access is issued, this register will not change, only the register inside the PHY device is incremented.
                        The register is relevant only when the  See MAC MDIO Clause 45 Enable bit is set to 1. It should not be used when Clause 22 mode is active.  */
      unsigned int   msmSystemMdioRegisterAddress : 16;    /* 1E.601E.F:0  R/W      Default = 0x0000 */
                     /* MDIO register address  */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of MSM System MDIO Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_7;
    uint16_t word_7;
  } u7;
} AQ_MsmSystemMdioControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System General Status Register: 1E.6020 */
/*                  MSM System General Status Register: 1E.6020 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System General Status Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6020.0 BLH MSM System Rx Local Fault
                        AQ_MsmSystemGeneralStatusRegister_CAL.u0.bits_0.msmSystemRxLocalFault

                        

                        Rx local fault detected

                 <B>Notes:</B>
                        Latch high local fault status. Set to 1, whent he MAC detects Rx local fault sequences on the Rx interface. Reset to 0 after read and after reset.  */
      unsigned int   msmSystemRxLocalFault : 1;    /* 1E.6020.0  BLH       */
                     /* Rx local fault detected  */
                    /*! \brief 1E.6020.1 BLH MSM System Rx Remote Fault
                        AQ_MsmSystemGeneralStatusRegister_CAL.u0.bits_0.msmSystemRxRemoteFault

                        

                        Rx remote fault detected

                 <B>Notes:</B>
                        Latch high local fault status. Set to 1, whent he MAC detects Rx local fault sequences on the Rx interface. Reset to 0 after read and after reset.  */
      unsigned int   msmSystemRxRemoteFault : 1;    /* 1E.6020.1  BLH       */
                     /* Rx remote fault detected  */
                    /*! \brief 1E.6020.2 RO MSM System PHY Loss of Signal
                        AQ_MsmSystemGeneralStatusRegister_CAL.u0.bits_0.msmSystemPhyLossOfSignal

                        

                        PHY loss of signal

                 <B>Notes:</B>
                        PHY indicates loss of signal. This is the value of pin phy_los which is tied to 0.  */
      unsigned int   msmSystemPhyLossOfSignal : 1;    /* 1E.6020.2  RO       */
                     /* PHY loss of signal  */
                    /*! \brief 1E.6020.3 COW MSM System Timestamp Available
                        AQ_MsmSystemGeneralStatusRegister_CAL.u0.bits_0.msmSystemTimestampAvailable

                        

                        Timestamp available

                 <B>Notes:</B>
                        Transmit timestamp available. Indicates that the timestamp of the last transmitted event frame (which had ff_tx_ts_frm=1) is available in the register  See MAC Time Stamp Status 0 [F:0]  and  See MAC Time Stamp Status 1 [F:0] . To clear this bit, the bit must be written with a 1.  */
      unsigned int   msmSystemTimestampAvailable : 1;    /* 1E.6020.3  COW       */
                     /* Timestamp available  */
                    /*! \brief 1E.6020.4 RO MSM System Rx Low Power IDLE
                        AQ_MsmSystemGeneralStatusRegister_CAL.u0.bits_0.msmSystemRxLowPowerIdle

                        

                        Rx LPI detected

                 <B>Notes:</B>
                        Receive low power IDLE (LPI). Set to 1 when LPI is currently detected on the MAC Rx interface. Set to 0, when the MAC currently operates in normal mode.  */
      unsigned int   msmSystemRxLowPowerIdle : 1;    /* 1E.6020.4  RO       */
                     /* Rx LPI detected  */
                    /*! \brief 1E.6020.5 RO MSM System Tx FIFO Empty
                        AQ_MsmSystemGeneralStatusRegister_CAL.u0.bits_0.msmSystemTxFifoEmpty

                        

                        Tx FIFO empty

                 <B>Notes:</B>
                        When set to 1, indicates the Tx FIFO is empty. When set to 0, Tx FIFO is non-empty.  */
      unsigned int   msmSystemTxFifoEmpty : 1;    /* 1E.6020.5  RO       */
                     /* Tx FIFO empty  */
      unsigned int   reserved0 : 10;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System General Status Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemGeneralStatusRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx IPG Control Register: 1E.6022 */
/*                  MSM System Tx IPG Control Register: 1E.6022 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx IPG Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6022.5:0 R/W MSM System Tx IPG Length [5:0]
                        AQ_MsmSystemTxIpgControlRegister_CAL.u0.bits_0.msmSystemTxIpgLength

                        Default = 0x0C

                        Tx IPG length

                 <B>Notes:</B>
                        Tx inter-packet gap (IPG) value. Depending on LAN or WAN mode of operation.
                        LAN Mode : Number of octets in steps of 4. Valid values are 8, 12, 16,..., 100. DIC is supported for any setting > 8. A default of 12 must be set to conform to IEEE802.3ae.
                        WAN Mode : Stretch factor. Valid values are 4 ... 15. The stretch factor is calculated as (value+1)*8. A default of 12 must be set to conform to IEEE802.3ae (i.e. 13*8=104). A larger value shrinks the IPG (increasing bandwidth).
                        The reset value of 12 leads to IEEE802.3ae conformant behavior in both modes.
                        Note : WAN mode is only available in 10G mode of operation.  */
      unsigned int   msmSystemTxIpgLength : 6;    /* 1E.6022.5:0  R/W      Default = 0x0C */
                     /* Tx IPG length  */
      unsigned int   reserved0 : 10;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx IPG Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTxIpgControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Pause Control Register: 1E.602A */
/*                  MSM System Pause Control Register: 1E.602A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.602A.F:0 R/W MSM System Class 0 Pause Quanta [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u0.bits_0.msmSystemClass_0PauseQuanta

                        Default = 0x0000

                        Class 0 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered. When normal link pause mode is enabled, this configuration will be used.  */
      unsigned int   msmSystemClass_0PauseQuanta : 16;    /* 1E.602A.F:0  R/W      Default = 0x0000 */
                     /* Class 0 pause quanta  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.602B.F:0 R/W MSM System Class 1 Pause Quanta [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u1.bits_1.msmSystemClass_1PauseQuanta

                        Default = 0x0000

                        Class 1 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmSystemClass_1PauseQuanta : 16;    /* 1E.602B.F:0  R/W      Default = 0x0000 */
                     /* Class 1 pause quanta  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.602C.F:0 R/W MSM System Class 2 Pause Quanta [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u2.bits_2.msmSystemClass_2PauseQuanta

                        Default = 0x0000

                        Class 2 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmSystemClass_2PauseQuanta : 16;    /* 1E.602C.F:0  R/W      Default = 0x0000 */
                     /* Class 2 pause quanta  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.602D.F:0 R/W MSM System Class 3 Pause Quanta [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u3.bits_3.msmSystemClass_3PauseQuanta

                        Default = 0x0000

                        Class 3 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmSystemClass_3PauseQuanta : 16;    /* 1E.602D.F:0  R/W      Default = 0x0000 */
                     /* Class 3 pause quanta  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.602E.F:0 R/W MSM System Class 4 Pause Quanta [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u4.bits_4.msmSystemClass_4PauseQuanta

                        Default = 0x0000

                        Class 4 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmSystemClass_4PauseQuanta : 16;    /* 1E.602E.F:0  R/W      Default = 0x0000 */
                     /* Class 4 pause quanta  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.602F.F:0 R/W MSM System Class 5 Pause Quanta [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u5.bits_5.msmSystemClass_5PauseQuanta

                        Default = 0x0000

                        Class 5 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmSystemClass_5PauseQuanta : 16;    /* 1E.602F.F:0  R/W      Default = 0x0000 */
                     /* Class 5 pause quanta  */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6030.F:0 R/W MSM System Class 6 Pause Quanta [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u6.bits_6.msmSystemClass_6PauseQuanta

                        Default = 0x0000

                        Class 6 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmSystemClass_6PauseQuanta : 16;    /* 1E.6030.F:0  R/W      Default = 0x0000 */
                     /* Class 6 pause quanta  */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6031.F:0 R/W MSM System Class 7 Pause Quanta [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u7.bits_7.msmSystemClass_7PauseQuanta

                        Default = 0x0000

                        Class 7 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmSystemClass_7PauseQuanta : 16;    /* 1E.6031.F:0  R/W      Default = 0x0000 */
                     /* Class 7 pause quanta  */
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6032.F:0 R/W MSM System Class 0 Pause Quanta Threshold [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u8.bits_8.msmSystemClass_0PauseQuantaThreshold

                        Default = 0x0000

                        Class 0 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists. When normal link pause mode is enabled, this configuration will be used for refreshing pause frames.  */
      unsigned int   msmSystemClass_0PauseQuantaThreshold : 16;    /* 1E.6032.F:0  R/W      Default = 0x0000 */
                     /* Class 0 pause quanta threshold  */
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6033.F:0 R/W MSM System Class 1 Pause Quanta Threshold [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u9.bits_9.msmSystemClass_1PauseQuantaThreshold

                        Default = 0x0000

                        Class 1 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmSystemClass_1PauseQuantaThreshold : 16;    /* 1E.6033.F:0  R/W      Default = 0x0000 */
                     /* Class 1 pause quanta threshold  */
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6034.F:0 R/W MSM System Class 2 Pause Quanta Threshold [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u10.bits_10.msmSystemClass_2PauseQuantaThreshold

                        Default = 0x0000

                        Class 2 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmSystemClass_2PauseQuantaThreshold : 16;    /* 1E.6034.F:0  R/W      Default = 0x0000 */
                     /* Class 2 pause quanta threshold  */
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Union for bit and word level access of word 11 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6035.F:0 R/W MSM System Class 3 Pause Quanta Threshold [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u11.bits_11.msmSystemClass_3PauseQuantaThreshold

                        Default = 0x0000

                        Class 3 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmSystemClass_3PauseQuantaThreshold : 16;    /* 1E.6035.F:0  R/W      Default = 0x0000 */
                     /* Class 3 pause quanta threshold  */
    } bits_11;
    uint16_t word_11;
  } u11;
  /*! \brief Union for bit and word level access of word 12 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6036.F:0 R/W MSM System Class 4 Pause Quanta Threshold [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u12.bits_12.msmSystemClass_4PauseQuantaThreshold

                        Default = 0x0000

                        Class 4 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmSystemClass_4PauseQuantaThreshold : 16;    /* 1E.6036.F:0  R/W      Default = 0x0000 */
                     /* Class 4 pause quanta threshold  */
    } bits_12;
    uint16_t word_12;
  } u12;
  /*! \brief Union for bit and word level access of word 13 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6037.F:0 R/W MSM System Class 5 Pause Quanta Threshold [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u13.bits_13.msmSystemClass_5PauseQuantaThreshold

                        Default = 0x0000

                        Class 5 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmSystemClass_5PauseQuantaThreshold : 16;    /* 1E.6037.F:0  R/W      Default = 0x0000 */
                     /* Class 5 pause quanta threshold  */
    } bits_13;
    uint16_t word_13;
  } u13;
  /*! \brief Union for bit and word level access of word 14 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6038.F:0 R/W MSM System Class 6 Pause Quanta Threshold [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u14.bits_14.msmSystemClass_6PauseQuantaThreshold

                        Default = 0x0000

                        Class 6 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmSystemClass_6PauseQuantaThreshold : 16;    /* 1E.6038.F:0  R/W      Default = 0x0000 */
                     /* Class 6 pause quanta threshold  */
    } bits_14;
    uint16_t word_14;
  } u14;
  /*! \brief Union for bit and word level access of word 15 of MSM System Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6039.F:0 R/W MSM System Class 7 Pause Quanta Threshold [F:0]
                        AQ_MsmSystemPauseControlRegister_CAL.u15.bits_15.msmSystemClass_7PauseQuantaThreshold

                        Default = 0x0000

                        Class 7 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmSystemClass_7PauseQuantaThreshold : 16;    /* 1E.6039.F:0  R/W      Default = 0x0000 */
                     /* Class 7 pause quanta threshold  */
    } bits_15;
    uint16_t word_15;
  } u15;
} AQ_MsmSystemPauseControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Pause Status Register: 1E.603A */
/*                  MSM System Pause Status Register: 1E.603A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Pause Status Register */
  union
  {
    struct
    {
                    /*! \brief 1E.603A.7:0 ROS MSM System Pause Status [7:0]
                        AQ_MsmSystemPauseStatusRegister_CAL.u0.bits_0.msmSystemPauseStatus

                        Default = 0x00

                        Pause status

                 <B>Notes:</B>
                        Pause status, 1 bit per class.  */
      unsigned int   msmSystemPauseStatus : 8;    /* 1E.603A.7:0  ROS      Default = 0x00 */
                     /* Pause status  */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Pause Status Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemPauseStatusRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Time Stamp Status Register: 1E.603E */
/*                  MSM System Time Stamp Status Register: 1E.603E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Time Stamp Status Register */
  union
  {
    struct
    {
                    /*! \brief 1E.603E.F:0 ROS MSM System Timestamp Status 0 [F:0]
                        AQ_MsmSystemTimeStampStatusRegister_CAL.u0.bits_0.msmSystemTimestampStatus_0

                        Default = 0x0000

                        Timestamp bits 15:0

                 <B>Notes:</B>
                        Timestamp of the last frame transmitted by the MAC that had the ff_tx_ts_frm signal asserted from the client. Valid when the  See MAC Timestamp Available  bit is set to 1.  */
      unsigned int   msmSystemTimestampStatus_0 : 16;    /* 1E.603E.F:0  ROS      Default = 0x0000 */
                     /* Timestamp bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Time Stamp Status Register */
  union
  {
    struct
    {
                    /*! \brief 1E.603F.F:0 ROS MSM System Timestamp Status 1 [F:0]
                        AQ_MsmSystemTimeStampStatusRegister_CAL.u1.bits_1.msmSystemTimestampStatus_1

                        Default = 0x0000

                        Timestamp bits 31:16
                        

                 <B>Notes:</B>
                        Timestamp of the last frame transmitted by the MAC that had the ff_tx_ts_frm signal asserted from the client. Valid when the  See MAC Timestamp Available  bit is set to 1.  */
      unsigned int   msmSystemTimestampStatus_1 : 16;    /* 1E.603F.F:0  ROS      Default = 0x0000 */
                     /* Timestamp bits 31:16
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTimeStampStatusRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx Good Frames Counter Register: 1E.6040 */
/*                  MSM System Tx Good Frames Counter Register: 1E.6040 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx Good Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6040.F:0 ROS MSM System Tx Good Frames Counter 0 [F:0]
                        AQ_MsmSystemTxGoodFramesCounterRegister_CAL.u0.bits_0.msmSystemTxGoodFramesCounter_0

                        Default = 0x0000

                        Tx good frame counter bits 15:0

                 <B>Notes:</B>
                        Count of frames transmitted without error (Including pause frames).  */
      unsigned int   msmSystemTxGoodFramesCounter_0 : 16;    /* 1E.6040.F:0  ROS      Default = 0x0000 */
                     /* Tx good frame counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx Good Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6041.F:0 ROS MSM System Tx Good Frames Counter 1 [F:0]
                        AQ_MsmSystemTxGoodFramesCounterRegister_CAL.u1.bits_1.msmSystemTxGoodFramesCounter_1

                        Default = 0x0000

                        Tx good frame counter bits 31:16
                        

                 <B>Notes:</B>
                        Count of frames transmitted without error (Including pause frames).  */
      unsigned int   msmSystemTxGoodFramesCounter_1 : 16;    /* 1E.6041.F:0  ROS      Default = 0x0000 */
                     /* Tx good frame counter bits 31:16
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTxGoodFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Good Frames Counter Register: 1E.6044 */
/*                  MSM System Rx Good Frames Counter Register: 1E.6044 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Good Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6044.F:0 ROS MSM System Rx Good Frames Counter 0 [F:0]
                        AQ_MsmSystemRxGoodFramesCounterRegister_CAL.u0.bits_0.msmSystemRxGoodFramesCounter_0

                        Default = 0x0000

                        Rx good frame counter bits 15:0

                 <B>Notes:</B>
                        Count of frames received without error (Including pause frames).  */
      unsigned int   msmSystemRxGoodFramesCounter_0 : 16;    /* 1E.6044.F:0  ROS      Default = 0x0000 */
                     /* Rx good frame counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Good Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6045.F:0 ROS MSM System Rx Good Frames Counter 1 [F:0]
                        AQ_MsmSystemRxGoodFramesCounterRegister_CAL.u1.bits_1.msmSystemRxGoodFramesCounter_1

                        Default = 0x0000

                        Rx good frame counter bits 31:16

                 <B>Notes:</B>
                        Count of frames received without error (Including pause frames).  */
      unsigned int   msmSystemRxGoodFramesCounter_1 : 16;    /* 1E.6045.F:0  ROS      Default = 0x0000 */
                     /* Rx good frame counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxGoodFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx FCS Errors Counter Register: 1E.6048 */
/*                  MSM System Rx FCS Errors Counter Register: 1E.6048 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx FCS Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6048.F:0 ROS MSM System FCS Error Counter 0 [F:0]
                        AQ_MsmSystemRxFcsErrorsCounterRegister_CAL.u0.bits_0.msmSystemFcsErrorCounter_0

                        Default = 0x0000

                        Frame check sequence error counter bits 15:0

                 <B>Notes:</B>
                        Count of frames for which a CRC-32 Error is detected but the frame is otherwise of correct length.  */
      unsigned int   msmSystemFcsErrorCounter_0 : 16;    /* 1E.6048.F:0  ROS      Default = 0x0000 */
                     /* Frame check sequence error counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx FCS Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6049.F:0 ROS MSM System FCS Error Counter 1 [F:0]
                        AQ_MsmSystemRxFcsErrorsCounterRegister_CAL.u1.bits_1.msmSystemFcsErrorCounter_1

                        Default = 0x0000

                        Frame check sequence error counter bits 31:16

                 <B>Notes:</B>
                        Count of frames for which a CRC-32 Error is detected but the frame is otherwise of correct length.  */
      unsigned int   msmSystemFcsErrorCounter_1 : 16;    /* 1E.6049.F:0  ROS      Default = 0x0000 */
                     /* Frame check sequence error counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxFcsErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Alignment Errors Counter Register: 1E.604C */
/*                  MSM System Rx Alignment Errors Counter Register: 1E.604C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Alignment Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.604C.F:0 ROS MSM System Alignment Error Counter 0 [F:0]
                        AQ_MsmSystemRxAlignmentErrorsCounterRegister_CAL.u0.bits_0.msmSystemAlignmentErrorCounter_0

                        Default = 0x0000

                        Alignment error counter bits 15:0

                 <B>Notes:</B>
                        Count of frames received with an alignment error.  */
      unsigned int   msmSystemAlignmentErrorCounter_0 : 16;    /* 1E.604C.F:0  ROS      Default = 0x0000 */
                     /* Alignment error counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Alignment Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.604D.F:0 ROS MSM System Alignment Error Counter 1 [F:0]
                        AQ_MsmSystemRxAlignmentErrorsCounterRegister_CAL.u1.bits_1.msmSystemAlignmentErrorCounter_1

                        Default = 0x0000

                        Alignment error counter bits 31:16

                 <B>Notes:</B>
                        Count of frames received with an alignment error.  */
      unsigned int   msmSystemAlignmentErrorCounter_1 : 16;    /* 1E.604D.F:0  ROS      Default = 0x0000 */
                     /* Alignment error counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxAlignmentErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx Pause Frames Counter Register: 1E.6050 */
/*                  MSM System Tx Pause Frames Counter Register: 1E.6050 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx Pause Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6050.F:0 ROS MSM System Tx Pause Frames Counter 0 [F:0]
                        AQ_MsmSystemTxPauseFramesCounterRegister_CAL.u0.bits_0.msmSystemTxPauseFramesCounter_0

                        Default = 0x0000

                        Tx pause frame counter bits 15:0

                 <B>Notes:</B>
                        Valid pause frames transmitted.  */
      unsigned int   msmSystemTxPauseFramesCounter_0 : 16;    /* 1E.6050.F:0  ROS      Default = 0x0000 */
                     /* Tx pause frame counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx Pause Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6051.F:0 ROS MSM System Tx Pause Frames Counter 1 [F:0]
                        AQ_MsmSystemTxPauseFramesCounterRegister_CAL.u1.bits_1.msmSystemTxPauseFramesCounter_1

                        Default = 0x0000

                        Tx pause frame counter bits 31:16
                        

                 <B>Notes:</B>
                        Valid pause frames transmitted.  */
      unsigned int   msmSystemTxPauseFramesCounter_1 : 16;    /* 1E.6051.F:0  ROS      Default = 0x0000 */
                     /* Tx pause frame counter bits 31:16
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTxPauseFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Pause Frames Counter Register: 1E.6054 */
/*                  MSM System Rx Pause Frames Counter Register: 1E.6054 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Pause Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6054.F:0 ROS MSM System Rx Pause Frames Counter 0 [F:0]
                        AQ_MsmSystemRxPauseFramesCounterRegister_CAL.u0.bits_0.msmSystemRxPauseFramesCounter_0

                        Default = 0x0000

                        Rx pause frame counter bits 15:0

                 <B>Notes:</B>
                        Valid pause frames received.  */
      unsigned int   msmSystemRxPauseFramesCounter_0 : 16;    /* 1E.6054.F:0  ROS      Default = 0x0000 */
                     /* Rx pause frame counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Pause Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6055.F:0 ROS MSM System Rx Pause Frames Counter 1 [F:0]
                        AQ_MsmSystemRxPauseFramesCounterRegister_CAL.u1.bits_1.msmSystemRxPauseFramesCounter_1

                        Default = 0x0000

                        Rx pause frame counter bits 31:16

                 <B>Notes:</B>
                        Valid pause frames received.  */
      unsigned int   msmSystemRxPauseFramesCounter_1 : 16;    /* 1E.6055.F:0  ROS      Default = 0x0000 */
                     /* Rx pause frame counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxPauseFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Too Long Errors Counter Register: 1E.6058 */
/*                  MSM System Rx Too Long Errors Counter Register: 1E.6058 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Too Long Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6058.F:0 ROS MSM System Rx Too Long Errors Counter 0 [F:0]
                        AQ_MsmSystemRxTooLongErrorsCounterRegister_CAL.u0.bits_0.msmSystemRxTooLongErrorsCounter_0

                        Default = 0x0000

                        Too-long errors counter bits 15:0

                 <B>Notes:</B>
                        Frame received exceeded the maximum length programmed with register FRM_LGTH.  */
      unsigned int   msmSystemRxTooLongErrorsCounter_0 : 16;    /* 1E.6058.F:0  ROS      Default = 0x0000 */
                     /* Too-long errors counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Too Long Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6059.F:0 ROS MSM System Rx Too Long Errors Counter 1 [F:0]
                        AQ_MsmSystemRxTooLongErrorsCounterRegister_CAL.u1.bits_1.msmSystemRxTooLongErrorsCounter_1

                        Default = 0x0000

                        Too-long errors counter bits 31:16

                 <B>Notes:</B>
                        Frame received exceeded the maximum length programmed with register FRM_LGTH.  */
      unsigned int   msmSystemRxTooLongErrorsCounter_1 : 16;    /* 1E.6059.F:0  ROS      Default = 0x0000 */
                     /* Too-long errors counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxTooLongErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx In Range Length Errors Counter Register: 1E.605C */
/*                  MSM System Rx In Range Length Errors Counter Register: 1E.605C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx In Range Length Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.605C.F:0 ROS MSM System Rx In Range Length Errors Counter 0 [F:0]
                        AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_CAL.u0.bits_0.msmSystemRxInRangeLengthErrorsCounter_0

                        Default = 0x0000

                        In-range-length errors counter bits 15:0

                 <B>Notes:</B>
                        A count of frames with a length/type field value between 46 (VLAN: 42) and less than 0x0600, that does not match the number of payload data octets received. Should count also if length/type field is less than 46 (VLAN: 42) and the frame is longer than 64 bytes.  */
      unsigned int   msmSystemRxInRangeLengthErrorsCounter_0 : 16;    /* 1E.605C.F:0  ROS      Default = 0x0000 */
                     /* In-range-length errors counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx In Range Length Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.605D.F:0 ROS MSM System Rx In Range Length Errors Counter 1 [F:0]
                        AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_CAL.u1.bits_1.msmSystemRxInRangeLengthErrorsCounter_1

                        Default = 0x0000

                        In-range-length errors counter bits 31:16

                 <B>Notes:</B>
                        A count of frames with a length/type field value between 46 (VLAN: 42) and less than 0x0600, that does not match the number of payload data octets received. Should count also if length/type field is less than 46 (VLAN: 42) and the frame is longer than 64 bytes.  */
      unsigned int   msmSystemRxInRangeLengthErrorsCounter_1 : 16;    /* 1E.605D.F:0  ROS      Default = 0x0000 */
                     /* In-range-length errors counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx VLAN Frames Counter Register: 1E.6060 */
/*                  MSM System Tx VLAN Frames Counter Register: 1E.6060 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx VLAN Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6060.F:0 ROS MSM System Tx VLAN Frames Counter 0 [F:0]
                        AQ_MsmSystemTxVlanFramesCounterRegister_CAL.u0.bits_0.msmSystemTxVlanFramesCounter_0

                        Default = 0x0000

                        Tx VLAN frames counter bits 15:0

                 <B>Notes:</B>
                        Valid VLAN tagged frames transmitted.  */
      unsigned int   msmSystemTxVlanFramesCounter_0 : 16;    /* 1E.6060.F:0  ROS      Default = 0x0000 */
                     /* Tx VLAN frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx VLAN Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6061.F:0 ROS MSM System Tx VLAN Frames Counter 1 [F:0]
                        AQ_MsmSystemTxVlanFramesCounterRegister_CAL.u1.bits_1.msmSystemTxVlanFramesCounter_1

                        Default = 0x0000

                        Tx VLAN frames counter bits 31:16

                 <B>Notes:</B>
                        Valid VLAN tagged frames transmitted.  */
      unsigned int   msmSystemTxVlanFramesCounter_1 : 16;    /* 1E.6061.F:0  ROS      Default = 0x0000 */
                     /* Tx VLAN frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTxVlanFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx VLAN Frames Counter Register: 1E.6064 */
/*                  MSM System Rx VLAN Frames Counter Register: 1E.6064 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx VLAN Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6064.F:0 ROS MSM System Rx VLAN Frames Counter 0 [F:0]
                        AQ_MsmSystemRxVlanFramesCounterRegister_CAL.u0.bits_0.msmSystemRxVlanFramesCounter_0

                        Default = 0x0000

                        Rx VLAN frames counter bits 15:0

                 <B>Notes:</B>
                        Valid VLAN tagged frames received.  */
      unsigned int   msmSystemRxVlanFramesCounter_0 : 16;    /* 1E.6064.F:0  ROS      Default = 0x0000 */
                     /* Rx VLAN frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx VLAN Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6065.F:0 ROS MSM System Rx VLAN Frames Counter 1 [F:0]
                        AQ_MsmSystemRxVlanFramesCounterRegister_CAL.u1.bits_1.msmSystemRxVlanFramesCounter_1

                        Default = 0x0000

                        Rx VLAN frames counter bits 31:16

                 <B>Notes:</B>
                        Valid VLAN tagged frames received.  */
      unsigned int   msmSystemRxVlanFramesCounter_1 : 16;    /* 1E.6065.F:0  ROS      Default = 0x0000 */
                     /* Rx VLAN frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxVlanFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx Octets Counter Register: 1E.6068 */
/*                  MSM System Tx Octets Counter Register: 1E.6068 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6068.F:0 ROS MSM System Tx Octets Counter 0 [F:0]
                        AQ_MsmSystemTxOctetsCounterRegister_CAL.u0.bits_0.msmSystemTxOctetsCounter_0

                        Default = 0x0000

                        Tx octets counter bits 15:0

                 <B>Notes:</B>
                        All octets transmitted except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames transmitted.  */
      unsigned int   msmSystemTxOctetsCounter_0 : 16;    /* 1E.6068.F:0  ROS      Default = 0x0000 */
                     /* Tx octets counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6069.F:0 ROS MSM System Tx Octets Counter 1 [F:0]
                        AQ_MsmSystemTxOctetsCounterRegister_CAL.u1.bits_1.msmSystemTxOctetsCounter_1

                        Default = 0x0000

                        Tx octets counter bits 31:16

                 <B>Notes:</B>
                        All octets transmitted except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames transmitted.  */
      unsigned int   msmSystemTxOctetsCounter_1 : 16;    /* 1E.6069.F:0  ROS      Default = 0x0000 */
                     /* Tx octets counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM System Tx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.606A.F:0 ROS MSM System Tx Octets Counter 2 [F:0]
                        AQ_MsmSystemTxOctetsCounterRegister_CAL.u2.bits_2.msmSystemTxOctetsCounter_2

                        Default = 0x0000

                        Tx octets counter bits 47:32

                 <B>Notes:</B>
                        All octets transmitted except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames transmitted.  */
      unsigned int   msmSystemTxOctetsCounter_2 : 16;    /* 1E.606A.F:0  ROS      Default = 0x0000 */
                     /* Tx octets counter bits 47:32  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM System Tx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.606B.F:0 ROS MSM System Tx Octets Counter 3 [F:0]
                        AQ_MsmSystemTxOctetsCounterRegister_CAL.u3.bits_3.msmSystemTxOctetsCounter_3

                        Default = 0x0000

                        Tx octets counter bits 63:48

                 <B>Notes:</B>
                        All octets transmitted except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames transmitted.  */
      unsigned int   msmSystemTxOctetsCounter_3 : 16;    /* 1E.606B.F:0  ROS      Default = 0x0000 */
                     /* Tx octets counter bits 63:48  */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_MsmSystemTxOctetsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Octets Counter Register: 1E.606C */
/*                  MSM System Rx Octets Counter Register: 1E.606C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.606C.F:0 ROS MSM System Rx Octets Counter 0 [F:0]
                        AQ_MsmSystemRxOctetsCounterRegister_CAL.u0.bits_0.msmSystemRxOctetsCounter_0

                        Default = 0x0000

                        Rx octets counter bits 15:0

                 <B>Notes:</B>
                        All octets received except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames received.  */
      unsigned int   msmSystemRxOctetsCounter_0 : 16;    /* 1E.606C.F:0  ROS      Default = 0x0000 */
                     /* Rx octets counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.606D.F:0 ROS MSM System Rx Octets Counter 1 [F:0]
                        AQ_MsmSystemRxOctetsCounterRegister_CAL.u1.bits_1.msmSystemRxOctetsCounter_1

                        Default = 0x0000

                        Rx octets counter bits 31:16

                 <B>Notes:</B>
                        All octets received except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames received.  */
      unsigned int   msmSystemRxOctetsCounter_1 : 16;    /* 1E.606D.F:0  ROS      Default = 0x0000 */
                     /* Rx octets counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxOctetsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Unicast Frames Counter Register: 1E.6070 */
/*                  MSM System Rx Unicast Frames Counter Register: 1E.6070 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Unicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6070.F:0 ROS MSM System Rx Unicast Frames Counter 0 [F:0]
                        AQ_MsmSystemRxUnicastFramesCounterRegister_CAL.u0.bits_0.msmSystemRxUnicastFramesCounter_0

                        Default = 0x0000

                        Rx unicast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface and bit 0 of the destination address was '0'.  */
      unsigned int   msmSystemRxUnicastFramesCounter_0 : 16;    /* 1E.6070.F:0  ROS      Default = 0x0000 */
                     /* Rx unicast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Unicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6071.F:0 ROS MSM System Rx Unicast Frames Counter 1 [F:0]
                        AQ_MsmSystemRxUnicastFramesCounterRegister_CAL.u1.bits_1.msmSystemRxUnicastFramesCounter_1

                        Default = 0x0000

                        Rx unicast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface and bit 0 of the destination address was '0'.  */
      unsigned int   msmSystemRxUnicastFramesCounter_1 : 16;    /* 1E.6071.F:0  ROS      Default = 0x0000 */
                     /* Rx unicast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxUnicastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Multicast Frames Counter Register: 1E.6074 */
/*                  MSM System Rx Multicast Frames Counter Register: 1E.6074 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Multicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6074.F:0 ROS MSM System Rx Multicast Frames Counter 0 [F:0]
                        AQ_MsmSystemRxMulticastFramesCounterRegister_CAL.u0.bits_0.msmSystemRxMulticastFramesCounter_0

                        Default = 0x0000

                        Rx multicast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface and bit 0 of the destination address was '1' but not the broadcast address (all bits set '1' ). Pause frames are not counted.  */
      unsigned int   msmSystemRxMulticastFramesCounter_0 : 16;    /* 1E.6074.F:0  ROS      Default = 0x0000 */
                     /* Rx multicast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Multicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6075.F:0 ROS MSM System Rx Multicast Frames Counter 1 [F:0]
                        AQ_MsmSystemRxMulticastFramesCounterRegister_CAL.u1.bits_1.msmSystemRxMulticastFramesCounter_1

                        Default = 0x0000

                        Rx multicast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface and bit 0 of the destination address was '1' but not the broadcast address (all bits set '1' ). Pause frames are not counted.  */
      unsigned int   msmSystemRxMulticastFramesCounter_1 : 16;    /* 1E.6075.F:0  ROS      Default = 0x0000 */
                     /* Rx multicast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxMulticastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Broadcast Frames Counter Register: 1E.6078 */
/*                  MSM System Rx Broadcast Frames Counter Register: 1E.6078 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Broadcast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6078.F:0 ROS MSM System Rx Broadcast Frames Counter 0 [F:0]
                        AQ_MsmSystemRxBroadcastFramesCounterRegister_CAL.u0.bits_0.msmSystemRxBroadcastFramesCounter_0

                        Default = 0x0000

                        Rx broadcast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface (FIFO) and all bits of the destination address were set '1'.  */
      unsigned int   msmSystemRxBroadcastFramesCounter_0 : 16;    /* 1E.6078.F:0  ROS      Default = 0x0000 */
                     /* Rx broadcast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Broadcast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6079.F:0 ROS MSM System Rx Broadcast Frames Counter 1 [F:0]
                        AQ_MsmSystemRxBroadcastFramesCounterRegister_CAL.u1.bits_1.msmSystemRxBroadcastFramesCounter_1

                        Default = 0x0000

                        Rx broadcast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface (FIFO) and all bits of the destination address were set '1'.  */
      unsigned int   msmSystemRxBroadcastFramesCounter_1 : 16;    /* 1E.6079.F:0  ROS      Default = 0x0000 */
                     /* Rx broadcast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxBroadcastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx Errors Counter Register: 1E.607C */
/*                  MSM System Tx Errors Counter Register: 1E.607C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.607C.F:0 ROS MSM System Tx Errors Counter 0 [F:0]
                        AQ_MsmSystemTxErrorsCounterRegister_CAL.u0.bits_0.msmSystemTxErrorsCounter_0

                        Default = 0x0000

                        Rx errors counter bits 15:0

                 <B>Notes:</B>
                        Number of frames transmitted with error: 
                        - FIFO Overflow Errors
                        - FIFO Underflow Errors  */
      unsigned int   msmSystemTxErrorsCounter_0 : 16;    /* 1E.607C.F:0  ROS      Default = 0x0000 */
                     /* Rx errors counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.607D.F:0 ROS MSM System Tx Errors Counter 1 [F:0]
                        AQ_MsmSystemTxErrorsCounterRegister_CAL.u1.bits_1.msmSystemTxErrorsCounter_1

                        Default = 0x0000

                        Tx errors counter bits 31:16

                 <B>Notes:</B>
                        Number of frames transmitted with error: 
                        - FIFO Overflow Errors
                        - FIFO Underflow Errors  */
      unsigned int   msmSystemTxErrorsCounter_1 : 16;    /* 1E.607D.F:0  ROS      Default = 0x0000 */
                     /* Tx errors counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTxErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx Unicast Frames Counter Register: 1E.6084 */
/*                  MSM System Tx Unicast Frames Counter Register: 1E.6084 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx Unicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6084.F:0 ROS MSM System Tx Unicast Frames Counter 0 [F:0]
                        AQ_MsmSystemTxUnicastFramesCounterRegister_CAL.u0.bits_0.msmSystemTxUnicastFramesCounter_0

                        Default = 0x0000

                        Tx unicast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and bit 0 of the destination address set to '0'.  */
      unsigned int   msmSystemTxUnicastFramesCounter_0 : 16;    /* 1E.6084.F:0  ROS      Default = 0x0000 */
                     /* Tx unicast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx Unicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6085.F:0 ROS MSM System Tx Unicast Frames Counter 1 [F:0]
                        AQ_MsmSystemTxUnicastFramesCounterRegister_CAL.u1.bits_1.msmSystemTxUnicastFramesCounter_1

                        Default = 0x0000

                        Tx unicast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and bit 0 of the destination address set to '0'.  */
      unsigned int   msmSystemTxUnicastFramesCounter_1 : 16;    /* 1E.6085.F:0  ROS      Default = 0x0000 */
                     /* Tx unicast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTxUnicastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx Multicast Frames Counter Register: 1E.6088 */
/*                  MSM System Tx Multicast Frames Counter Register: 1E.6088 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx Multicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6088.F:0 ROS MSM System Tx Multicast Frames Counter 0 [F:0]
                        AQ_MsmSystemTxMulticastFramesCounterRegister_CAL.u0.bits_0.msmSystemTxMulticastFramesCounter_0

                        Default = 0x0000

                        Tx multicast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and bit 0 of the destination address set to '1' but not the broadcast address (all bits '1').  */
      unsigned int   msmSystemTxMulticastFramesCounter_0 : 16;    /* 1E.6088.F:0  ROS      Default = 0x0000 */
                     /* Tx multicast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx Multicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.6089.F:0 ROS MSM System Tx Multicast Frames Counter 1 [F:0]
                        AQ_MsmSystemTxMulticastFramesCounterRegister_CAL.u1.bits_1.msmSystemTxMulticastFramesCounter_1

                        Default = 0x0000

                        Tx multicast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and bit 0 of the destination address set to '1' but not the broadcast address (all bits '1').  */
      unsigned int   msmSystemTxMulticastFramesCounter_1 : 16;    /* 1E.6089.F:0  ROS      Default = 0x0000 */
                     /* Tx multicast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTxMulticastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Tx Broadcast Frames Counter Register: 1E.608C */
/*                  MSM System Tx Broadcast Frames Counter Register: 1E.608C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Tx Broadcast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.608C.F:0 ROS MSM System Tx Broadcast Frames Counter 0 [F:0]
                        AQ_MsmSystemTxBroadcastFramesCounterRegister_CAL.u0.bits_0.msmSystemTxBroadcastFramesCounter_0

                        Default = 0x0000

                        Tx broadcast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and all bits of the destination address set to '1'.  */
      unsigned int   msmSystemTxBroadcastFramesCounter_0 : 16;    /* 1E.608C.F:0  ROS      Default = 0x0000 */
                     /* Tx broadcast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Tx Broadcast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.608D.F:0 ROS MSM System Tx Broadcast Frames Counter 1 [F:0]
                        AQ_MsmSystemTxBroadcastFramesCounterRegister_CAL.u1.bits_1.msmSystemTxBroadcastFramesCounter_1

                        Default = 0x0000

                        Tx broadcast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and all bits of the destination address set to '1'.  */
      unsigned int   msmSystemTxBroadcastFramesCounter_1 : 16;    /* 1E.608D.F:0  ROS      Default = 0x0000 */
                     /* Tx broadcast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemTxBroadcastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System Rx Errors Counter Register: 1E.60C8 */
/*                  MSM System Rx Errors Counter Register: 1E.60C8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System Rx Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.60C8.F:0 ROS MSM System Rx Errors Counter 0 [F:0]
                        AQ_MsmSystemRxErrorsCounterRegister_CAL.u0.bits_0.msmSystemRxErrorsCounter_0

                        Default = 0x0000

                        Rx errors counter bits 15:0

                 <B>Notes:</B>
                        Number of frames received with error: 
                        - FIFO Overflow Errors
                        - CRC Errors
                        - Payload Length Errors
                        - Jabber and Oversized Errors
                        - Alignment Errors
                        - The dedicated Error Code (0xfe, not a code error) was received  */
      unsigned int   msmSystemRxErrorsCounter_0 : 16;    /* 1E.60C8.F:0  ROS      Default = 0x0000 */
                     /* Rx errors counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System Rx Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.60C9.F:0 ROS MSM System Rx Errors Counter 1 [F:0]
                        AQ_MsmSystemRxErrorsCounterRegister_CAL.u1.bits_1.msmSystemRxErrorsCounter_1

                        Default = 0x0000

                        Rx errors counter bits 31:16

                 <B>Notes:</B>
                        Number of frames received with error: 
                        - FIFO Overflow Errors
                        - CRC Errors
                        - Payload Length Errors
                        - Jabber and Oversized Errors
                        - Alignment Errors
                        - The dedicated Error Code (0xfe, not a code error) was received  */
      unsigned int   msmSystemRxErrorsCounter_1 : 16;    /* 1E.60C9.F:0  ROS      Default = 0x0000 */
                     /* Rx errors counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemRxErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System SGMII Control Register: 1E.6180 */
/*                  MSM System SGMII Control Register: 1E.6180 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System SGMII Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 6;
                    /*! \brief 1E.6180.6 ROS MSM System SGMII Speed Selection 1
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiSpeedSelection_1

                        Default = 0x0

                        1 = The PCS only operates in Gigabit mode (IFF bit D is 0).

                 <B>Notes:</B>
                        Combined with bit D.  */
      unsigned int   msmSystemSgmiiSpeedSelection_1 : 1;    /* 1E.6180.6  ROS      Default = 0x0 */
                     /* 1 = The PCS only operates in Gigabit mode (IFF bit D is 0).  */
                    /*! \brief 1E.6180.7 ROS MSM System SGMII Collision Test
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiCollisionTest

                        Default = 0x0

                        Half duplex not supported by the PCS, read only bit set to 0.
  */
      unsigned int   msmSystemSgmiiCollisionTest : 1;    /* 1E.6180.7  ROS      Default = 0x0 */
                     /* Half duplex not supported by the PCS, read only bit set to 0.  */
                    /*! \brief 1E.6180.8 ROS MSM System SGMII Duplex Mode
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiDuplexMode

                        Default = 0x0

                        Read only bit always set to 1 to indication that the PCS only supports Full Duplex mode of operation and does not support Half Duplex mode of operation.
  */
      unsigned int   msmSystemSgmiiDuplexMode : 1;    /* 1E.6180.8  ROS      Default = 0x0 */
                     /* Read only bit always set to 1 to indication that the PCS only supports Full Duplex mode of operation and does not support Half Duplex mode of operation.  */
                    /*! \brief 1E.6180.9 R/W MSM System SGMII Restart Autonegotiation
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiRestartAutonegotiation

                        Default = 0x0

                        1 = Restart an autonegotiation serquence.
                        0 = Normal operation

                 <B>Notes:</B>
                        Self-clearing command bit  */
      unsigned int   msmSystemSgmiiRestartAutonegotiation : 1;    /* 1E.6180.9  R/W      Default = 0x0 */
                     /* 1 = Restart an autonegotiation serquence.
                        0 = Normal operation  */
                    /*! \brief 1E.6180.A R/W MSM System SGMII Isolate
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiIsolate

                        Default = 0x0

                        1 = The PCS is isolated from the MAC Layer device.
                        0 = Normal operation

                 <B>Notes:</B>
                        When set, keeps the PCS in reset (equals bit15=1 permanently).  */
      unsigned int   msmSystemSgmiiIsolate : 1;    /* 1E.6180.A  R/W      Default = 0x0 */
                     /* 1 = The PCS is isolated from the MAC Layer device.
                        0 = Normal operation  */
                    /*! \brief 1E.6180.B R/W MSM System SGMII Power Down
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiPowerDown

                        Default = 0x0

                        Setting not relevant, function not used.
  */
      unsigned int   msmSystemSgmiiPowerDown : 1;    /* 1E.6180.B  R/W      Default = 0x0 */
                     /* Setting not relevant, function not used.  */
                    /*! \brief 1E.6180.C R/W MSM System SGMII Autonegotation Enable
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiAutonegotationEnable

                        Default = 0x1

                        1 = Autonegotiation enabled.
                        0 = Autonegotiation disabled.
  */
      unsigned int   msmSystemSgmiiAutonegotationEnable : 1;    /* 1E.6180.C  R/W      Default = 0x1 */
                     /* 1 = Autonegotiation enabled.
                        0 = Autonegotiation disabled.  */
                    /*! \brief 1E.6180.D ROS MSM System SGMII Speed Selection 2
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiSpeedSelection_2

                        Default = 0x0

                        0 = The PCS only operates in Gigabit mode (IFF bit 6 is 1).

                 <B>Notes:</B>
                        Combined with bit 6.  */
      unsigned int   msmSystemSgmiiSpeedSelection_2 : 1;    /* 1E.6180.D  ROS      Default = 0x0 */
                     /* 0 = The PCS only operates in Gigabit mode (IFF bit 6 is 1).  */
                    /*! \brief 1E.6180.E R/W MSM System SGMII Loopback
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiLoopback

                        Default = 0x0

                        Setting not relevant, function not used.
  */
      unsigned int   msmSystemSgmiiLoopback : 1;    /* 1E.6180.E  R/W      Default = 0x0 */
                     /* Setting not relevant, function not used.  */
                    /*! \brief 1E.6180.F R/WSC MSM System SGMII Reset
                        AQ_MsmSystemSgmiiControlRegister_CAL.u0.bits_0.msmSystemSgmiiReset

                        Default = 0x0

                        1 = A synchronous reset pulse is generated which resets all the PCS state machines, the Comma detection function and the 8b/10b coder / decoder.
                        0 = Normal operation.

                 <B>Notes:</B>
                        Self-Clearing Reset Command Register.  */
      unsigned int   msmSystemSgmiiReset : 1;    /* 1E.6180.F  R/WSC      Default = 0x0 */
                     /* 1 = A synchronous reset pulse is generated which resets all the PCS state machines, the Comma detection function and the 8b/10b coder / decoder.
                        0 = Normal operation.  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System SGMII Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemSgmiiControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM System SGMII IF MODE Register: 1E.61A8 */
/*                  MSM System SGMII IF MODE Register: 1E.61A8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM System SGMII IF MODE Register */
  union
  {
    struct
    {
                    /*! \brief 1E.61A8.0 R/W MSM System SGMII Enable
                        AQ_MsmSystemSgmiiIfModeRegister_CAL.u0.bits_0.msmSystemSgmiiEnable

                        Default = 0x0

                        0 = The PCS operates in standard 1000Base-X Gigabit mode.
                        1 = The PCS operates in SGMII Mode.

                 <B>Notes:</B>
                        If the bit is '0' the bits 1..4 of this register are ignored.  */
      unsigned int   msmSystemSgmiiEnable : 1;    /* 1E.61A8.0  R/W      Default = 0x0 */
                     /* 0 = The PCS operates in standard 1000Base-X Gigabit mode.
                        1 = The PCS operates in SGMII Mode.  */
                    /*! \brief 1E.61A8.1 R/W MSM System Use SGMII Autonegotiation
                        AQ_MsmSystemSgmiiIfModeRegister_CAL.u0.bits_0.msmSystemUseSgmiiAutonegotiation

                        Default = 0x0

                        Use the SGMII Auto-Negotiation Results to Program the PCS/MAC Speed.
                        0 = The PCS operation should be programmed with the register bits SGMII_SPEED and SGMII_DUPLEX.
                        1 = The PCS operation is automatically set according to the Partner abilities advertised during Auto-Negotiation.

                 <B>Notes:</B>
                        Ignored when SGMII_ENA is set to '0'.  */
      unsigned int   msmSystemUseSgmiiAutonegotiation : 1;    /* 1E.61A8.1  R/W      Default = 0x0 */
                     /* Use the SGMII Auto-Negotiation Results to Program the PCS/MAC Speed.
                        0 = The PCS operation should be programmed with the register bits SGMII_SPEED and SGMII_DUPLEX.
                        1 = The PCS operation is automatically set according to the Partner abilities advertised during Auto-Negotiation.  */
                    /*! \brief 1E.61A8.3:2 R/W MSM System SGMII Speed[1:0]
                        AQ_MsmSystemSgmiiIfModeRegister_CAL.u0.bits_0.msmSystemSgmiiSpeed

                        Default = 0x0

                        When the PCS operates in SGMII mode (SGMII_ENA set to '1') and when the PCS is programmed not to be automatically configured (USE_SGMII_AN set to '0'), sets the PCS speed of operation.
                        
                        0 = 10 Mbps
                        1 = 100 Mbps
                        2 = 1 Gbps
                        3 = Reserved

                 <B>Notes:</B>
                        Bits ignored when SGMII_ENA=0 or USE_SGMII_AN=1.  */
      unsigned int   msmSystemSgmiiSpeed : 2;    /* 1E.61A8.3:2  R/W      Default = 0x0 */
                     /* When the PCS operates in SGMII mode (SGMII_ENA set to '1') and when the PCS is programmed not to be automatically configured (USE_SGMII_AN set to '0'), sets the PCS speed of operation.
                        
                        0 = 10 Mbps
                        1 = 100 Mbps
                        2 = 1 Gbps
                        3 = Reserved  */
                    /*! \brief 1E.61A8.4 R/W MSM System SGMII Half Duplex
                        AQ_MsmSystemSgmiiIfModeRegister_CAL.u0.bits_0.msmSystemSgmiiHalfDuplex

                        Default = 0x0

                        1 = Half Duplex enabled.
                        0 = Full Duplex enabled.

                 <B>Notes:</B>
                        Halfduplex is not supported in this implementation. This bit setting has no effect.  */
      unsigned int   msmSystemSgmiiHalfDuplex : 1;    /* 1E.61A8.4  R/W      Default = 0x0 */
                     /* 1 = Half Duplex enabled.
                        0 = Full Duplex enabled.  */
                    /*! \brief 1E.61A8.5 R/W MSM System SGMII PCS Enable
                        AQ_MsmSystemSgmiiIfModeRegister_CAL.u0.bits_0.msmSystemSgmiiPcsEnable

                        Default = 0x0

                        Enable SGMII/1000Base-X PCS instead of XGMII for the 10G MAC.
                        1 = The SGMII PCS layer becomes active and the MAC is configured for 1G mode of operation.
                        0 = The MAC operates in 10G mode with an XGMII.

                 <B>Notes:</B>
                        The other bits in this register have no meaning if this bit is not set.
                        
                        This bit only configures the datapath within the combined MAC and PCS layers. It does not change the PMA/SERDES module, externally to the core. This must be controlled elsewhere to adapt the correct interface width (10-bit) and speed (125MHz).
                        
                        After setting this bit=1, a PCS soft reset should be performed by writing bit15 of the PCS CONTROL register.  */
      unsigned int   msmSystemSgmiiPcsEnable : 1;    /* 1E.61A8.5  R/W      Default = 0x0 */
                     /* Enable SGMII/1000Base-X PCS instead of XGMII for the 10G MAC.
                        1 = The SGMII PCS layer becomes active and the MAC is configured for 1G mode of operation.
                        0 = The MAC operates in 10G mode with an XGMII.  */
      unsigned int   reserved0 : 10;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM System SGMII IF MODE Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmSystemSgmiiIfModeRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSS Ingress Control Register: 1E.800E */
/*                  MSS Ingress Control Register: 1E.800E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSS Ingress Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.800E.0 R/W MSS Ingress Soft Reset
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressSoftReset

                        Default = 0x0

                        1 = Soft reset
                        

                 <B>Notes:</B>
                        S/W reset  */
      unsigned int   mssIngressSoftReset : 1;    /* 1E.800E.0  R/W      Default = 0x0 */
                     /* 1 = Soft reset
                          */
                    /*! \brief 1E.800E.1 R/W MSS Ingress Operation Point To Point
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressOperationPointToPoint

                        Default = 0x0

                        1 = Enable the SCI for authorization default
                        

                 <B>Notes:</B>
                        The default SCI for authorization is configured in  See MSS Ingress SCI Default [F:0]   See MSS Ingress SCI Default [1F:10] , See MSS Ingress SCI Default [2F:20] , and  See MSS Ingress SCI Default [3F:30] .  */
      unsigned int   mssIngressOperationPointToPoint : 1;    /* 1E.800E.1  R/W      Default = 0x0 */
                     /* 1 = Enable the SCI for authorization default
                          */
                    /*! \brief 1E.800E.2 R/W MSS Ingress Create SCI
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressCreateSci

                        Default = 0x0

                        0 = SCI from IGPRC LUT
                        

                 <B>Notes:</B>
                        If the SCI is not in the packet and this bit is set to 0, the SCI will be taken from the IGPRC LUT.  */
      unsigned int   mssIngressCreateSci : 1;    /* 1E.800E.2  R/W      Default = 0x0 */
                     /* 0 = SCI from IGPRC LUT
                          */
                    /*! \brief 1E.800E.3 R/W MSS Ingress Mask Short Length Error
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressMaskShortLengthError

                        Default = 0x0

                        Unused
                        

                 <B>Notes:</B>
                        Unused  */
      unsigned int   mssIngressMaskShortLengthError : 1;    /* 1E.800E.3  R/W      Default = 0x0 */
                     /* Unused
                          */
                    /*! \brief 1E.800E.4 R/W MSS Ingress Drop Kay Packet
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressDropKayPacket

                        Default = 0x0

                        1 = Drop KaY packets
                        

                 <B>Notes:</B>
                        Decides whether KaY packets have to be dropped  */
      unsigned int   mssIngressDropKayPacket : 1;    /* 1E.800E.4  R/W      Default = 0x0 */
                     /* 1 = Drop KaY packets
                          */
                    /*! \brief 1E.800E.5 R/W MSS Ingress Drop IGPRC Miss
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressDropIgprcMiss

                        Default = 0x0

                        1 = Drop IGPRC miss packets
                        

                 <B>Notes:</B>
                        Decides whether Ingress Pre-Security Classification (IGPRC) LUT miss packets are to be dropped  */
      unsigned int   mssIngressDropIgprcMiss : 1;    /* 1E.800E.5  R/W      Default = 0x0 */
                     /* 1 = Drop IGPRC miss packets
                          */
                    /*! \brief 1E.800E.6 R/W MSS Ingress Check ICV
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressCheckIcv

                        Default = 0x0

                        Unused
                        

                 <B>Notes:</B>
                        Unused  */
      unsigned int   mssIngressCheckIcv : 1;    /* 1E.800E.6  R/W      Default = 0x0 */
                     /* Unused
                          */
                    /*! \brief 1E.800E.7 R/W MSS Ingress Clear Global Time
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressClearGlobalTime

                        Default = 0x0

                        1 = Clear global time
                        

                 <B>Notes:</B>
                        Clear global time  */
      unsigned int   mssIngressClearGlobalTime : 1;    /* 1E.800E.7  R/W      Default = 0x0 */
                     /* 1 = Clear global time
                          */
                    /*! \brief 1E.800E.8 R/W MSS Ingress Clear Count
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressClearCount

                        Default = 0x0

                        1 = Clear all MIB counters
                        

                 <B>Notes:</B>
                        If this bit is set to 1, all MIB counters will be cleared.  */
      unsigned int   mssIngressClearCount : 1;    /* 1E.800E.8  R/W      Default = 0x0 */
                     /* 1 = Clear all MIB counters
                          */
                    /*! \brief 1E.800E.9 R/W MSS Ingress High Priority
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressHighPriority

                        Default = 0x0

                        1 = MIB counter clear on read enable
                        

                 <B>Notes:</B>
                        If this bit is set to 1, read is given high priority and the MIB count value becomes 0 after read.  */
      unsigned int   mssIngressHighPriority : 1;    /* 1E.800E.9  R/W      Default = 0x0 */
                     /* 1 = MIB counter clear on read enable
                          */
                    /*! \brief 1E.800E.A R/W MSS Ingress Remove SECTag
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressRemoveSectag

                        Default = 0x0

                        1 = Enable removal of SECTag
                        

                 <B>Notes:</B>
                        If this bit is set and either of the following two conditions occurs, the SECTag will be removed.
                        Controlled packet and either the SA or SC is invalid.
                        IGPRC miss.  */
      unsigned int   mssIngressRemoveSectag : 1;    /* 1E.800E.A  R/W      Default = 0x0 */
                     /* 1 = Enable removal of SECTag
                          */
                    /*! \brief 1E.800E.C:B R/W MSS Ingress Global Validate Frames [1:0]
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressGlobalValidateFrames

                        Default = 0x0

                        Default validate frames configuration
                        

                 <B>Notes:</B>
                        If the SC is invalid or if an IGPRC miss packet condition occurs, this default will be used for the validate frames configuration instead of the validate frame entry in the Ingress SC Table (IGSCT).  */
      unsigned int   mssIngressGlobalValidateFrames : 2;    /* 1E.800E.C:B  R/W      Default = 0x0 */
                     /* Default validate frames configuration
                          */
                    /*! \brief 1E.800E.D R/W MSS Ingress ICV LSB 8 Bytes Enable
                        AQ_MssIngressControlRegister_CAL.u0.bits_0.mssIngressIcvLsb_8BytesEnable

                        Default = 0x0

                        1 = Use LSB
                        0 = Use MSB
                        
                        

                 <B>Notes:</B>
                        This bit selects MSB or LSB 8 bytes selection in the case where the ICV is 8 bytes.
                        0 = MSB is used.  */
      unsigned int   mssIngressIcvLsb_8BytesEnable : 1;    /* 1E.800E.D  R/W      Default = 0x0 */
                     /* 1 = Use LSB
                        0 = Use MSB
                        
                          */
      unsigned int   reserved0 : 2;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSS Ingress Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MssIngressControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSS Ingress LUT Address Control Register: 1E.8080 */
/*                  MSS Ingress LUT Address Control Register: 1E.8080 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSS Ingress LUT Address Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.8080.8:0 R/W MSS Ingress LUT Address [8:0]
                        AQ_MssIngressLutAddressControlRegister_CAL.u0.bits_0.mssIngressLutAddress

                        Default = 0x000

                        LUT address
                        
  */
      unsigned int   mssIngressLutAddress : 9;    /* 1E.8080.8:0  R/W      Default = 0x000 */
                     /* LUT address
                          */
      unsigned int   reserved0 : 3;
                    /*! \brief 1E.8080.F:C R/W MSS Ingress LUT Select [3:0]
                        AQ_MssIngressLutAddressControlRegister_CAL.u0.bits_0.mssIngressLutSelect

                        Default = 0x0

                        LUT select
                        

                 <B>Notes:</B>
                        0x0 : Ingress Pre-Security MAC Control FIlter (IGPRCTLF) LUT
                        0x1 : Ingress Pre-Security Classification LUT (IGPRC)
                        0x2 : Ingress Packet Format (IGPFMT) SAKey LUT
                        0x3 : Ingress Packet Format (IGPFMT) SC/SA LUT
                        0x4 : Ingress Post-Security Classification LUT (IGPOC)
                        0x5 : Ingress Post-Security MAC Control Filter (IGPOCTLF) LUT
                        0x6 : Ingress MIB (IGMIB)  */
      unsigned int   mssIngressLutSelect : 4;    /* 1E.8080.F:C  R/W      Default = 0x0 */
                     /* LUT select
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_MssIngressLutAddressControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSS Ingress LUT Control Register: 1E.8081 */
/*                  MSS Ingress LUT Control Register: 1E.8081 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSS Ingress LUT Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 1E.8081.E R/W MSS Ingress LUT Read
                        AQ_MssIngressLutControlRegister_CAL.u0.bits_0.mssIngressLutRead

                        Default = 0x0

                        1 = LUT read
                        

                 <B>Notes:</B>
                        Setting this bit to 1, will read the LUT. This bit will automatically clear to 0.  */
      unsigned int   mssIngressLutRead : 1;    /* 1E.8081.E  R/W      Default = 0x0 */
                     /* 1 = LUT read
                          */
                    /*! \brief 1E.8081.F R/W MSS Ingress LUT Write
                        AQ_MssIngressLutControlRegister_CAL.u0.bits_0.mssIngressLutWrite

                        Default = 0x0

                        1 = LUT write
                        

                 <B>Notes:</B>
                        Setting this bit to 1, will write the LUT. This bit will automatically clear to 0.  */
      unsigned int   mssIngressLutWrite : 1;    /* 1E.8081.F  R/W      Default = 0x0 */
                     /* 1 = LUT write
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_MssIngressLutControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSS Ingress LUT Data Control Register: 1E.80A0 */
/*                  MSS Ingress LUT Data Control Register: 1E.80A0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A0.F:0 R/W MSS Ingress LUT Data 0 [F:0]
                        AQ_MssIngressLutDataControlRegister_CAL.u0.bits_0.mssIngressLutData_0

                        Default = 0x0000

                        LUT data bits 15:0
                        
  */
      unsigned int   mssIngressLutData_0 : 16;    /* 1E.80A0.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 15:0
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A1.F:0 R/W MSS Ingress LUT Data 1 [1F:10]
                        AQ_MssIngressLutDataControlRegister_CAL.u1.bits_1.mssIngressLutData_1

                        Default = 0x0000

                        LUT data bits 31:16
                        
  */
      unsigned int   mssIngressLutData_1 : 16;    /* 1E.80A1.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 31:16
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A2.F:0 R/W MSS Ingress LUT Data 2 [2F:20]
                        AQ_MssIngressLutDataControlRegister_CAL.u2.bits_2.mssIngressLutData_2

                        Default = 0x0000

                        LUT data bits 47:32
                        
  */
      unsigned int   mssIngressLutData_2 : 16;    /* 1E.80A2.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 47:32
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A3.F:0 R/W MSS Ingress LUT Data 3 [3F:30]
                        AQ_MssIngressLutDataControlRegister_CAL.u3.bits_3.mssIngressLutData_3

                        Default = 0x0000

                        LUT data bits 63:48
                        
  */
      unsigned int   mssIngressLutData_3 : 16;    /* 1E.80A3.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 63:48
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A4.F:0 R/W MSS Ingress LUT Data 4 [4F:40]
                        AQ_MssIngressLutDataControlRegister_CAL.u4.bits_4.mssIngressLutData_4

                        Default = 0x0000

                        LUT data bits 79:64
                        
  */
      unsigned int   mssIngressLutData_4 : 16;    /* 1E.80A4.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 79:64
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A5.F:0 R/W MSS Ingress LUT Data 5 [5F:50]
                        AQ_MssIngressLutDataControlRegister_CAL.u5.bits_5.mssIngressLutData_5

                        Default = 0x0000

                        LUT data bits 95:80
                        
  */
      unsigned int   mssIngressLutData_5 : 16;    /* 1E.80A5.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 95:80
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A6.F:0 R/W MSS Ingress LUT Data 6 [6F:60]
                        AQ_MssIngressLutDataControlRegister_CAL.u6.bits_6.mssIngressLutData_6

                        Default = 0x0000

                        LUT data bits 111:96
                        
  */
      unsigned int   mssIngressLutData_6 : 16;    /* 1E.80A6.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 111:96
                          */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A7.F:0 R/W MSS Ingress LUT Data 7 [7F:70]
                        AQ_MssIngressLutDataControlRegister_CAL.u7.bits_7.mssIngressLutData_7

                        Default = 0x0000

                        LUT data bits 127:112
                        
  */
      unsigned int   mssIngressLutData_7 : 16;    /* 1E.80A7.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 127:112
                          */
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A8.F:0 R/W MSS Ingress LUT Data 8 [8F:80]
                        AQ_MssIngressLutDataControlRegister_CAL.u8.bits_8.mssIngressLutData_8

                        Default = 0x0000

                        LUT data bits 143:128
                        
  */
      unsigned int   mssIngressLutData_8 : 16;    /* 1E.80A8.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 143:128
                          */
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80A9.F:0 R/W MSS Ingress LUT Data 9 [9F:90]
                        AQ_MssIngressLutDataControlRegister_CAL.u9.bits_9.mssIngressLutData_9

                        Default = 0x0000

                        LUT data bits 159:144
                        
  */
      unsigned int   mssIngressLutData_9 : 16;    /* 1E.80A9.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 159:144
                          */
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80AA.F:0 R/W MSS Ingress LUT Data 10 [AF:A0]
                        AQ_MssIngressLutDataControlRegister_CAL.u10.bits_10.mssIngressLutData_10

                        Default = 0x0000

                        LUT data bits 175:160
                        
  */
      unsigned int   mssIngressLutData_10 : 16;    /* 1E.80AA.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 175:160
                          */
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Union for bit and word level access of word 11 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80AB.F:0 R/W MSS Ingress LUT Data 11 [BF:B0]
                        AQ_MssIngressLutDataControlRegister_CAL.u11.bits_11.mssIngressLutData_11

                        Default = 0x0000

                        LUT data bits 191:176
                        
  */
      unsigned int   mssIngressLutData_11 : 16;    /* 1E.80AB.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 191:176
                          */
    } bits_11;
    uint16_t word_11;
  } u11;
  /*! \brief Union for bit and word level access of word 12 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80AC.F:0 R/W MSS Ingress LUT Data 12 [CF:C0]
                        AQ_MssIngressLutDataControlRegister_CAL.u12.bits_12.mssIngressLutData_12

                        Default = 0x0000

                        LUT data bits 207:192
                        
  */
      unsigned int   mssIngressLutData_12 : 16;    /* 1E.80AC.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 207:192
                          */
    } bits_12;
    uint16_t word_12;
  } u12;
  /*! \brief Union for bit and word level access of word 13 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80AD.F:0 R/W MSS Ingress LUT Data 13 [DF:D0]
                        AQ_MssIngressLutDataControlRegister_CAL.u13.bits_13.mssIngressLutData_13

                        Default = 0x0000

                        LUT data bits 223:208
                        
  */
      unsigned int   mssIngressLutData_13 : 16;    /* 1E.80AD.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 223:208
                          */
    } bits_13;
    uint16_t word_13;
  } u13;
  /*! \brief Union for bit and word level access of word 14 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80AE.F:0 R/W MSS Ingress LUT Data 14 [EF:E0]
                        AQ_MssIngressLutDataControlRegister_CAL.u14.bits_14.mssIngressLutData_14

                        Default = 0x0000

                        LUT data bits 239:224
                        
  */
      unsigned int   mssIngressLutData_14 : 16;    /* 1E.80AE.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 239:224
                          */
    } bits_14;
    uint16_t word_14;
  } u14;
  /*! \brief Union for bit and word level access of word 15 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80AF.F:0 R/W MSS Ingress LUT Data 15 [FF:F0]
                        AQ_MssIngressLutDataControlRegister_CAL.u15.bits_15.mssIngressLutData_15

                        Default = 0x0000

                        LUT data bits 255:240
                        
  */
      unsigned int   mssIngressLutData_15 : 16;    /* 1E.80AF.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 255:240
                          */
    } bits_15;
    uint16_t word_15;
  } u15;
  /*! \brief Union for bit and word level access of word 16 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80B0.F:0 R/W MSS Ingress LUT Data 16 [10F:100]
                        AQ_MssIngressLutDataControlRegister_CAL.u16.bits_16.mssIngressLutData_16

                        Default = 0x0000

                        LUT data bits 271:256
                        
  */
      unsigned int   mssIngressLutData_16 : 16;    /* 1E.80B0.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 271:256
                          */
    } bits_16;
    uint16_t word_16;
  } u16;
  /*! \brief Union for bit and word level access of word 17 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80B1.F:0 R/W MSS Ingress LUT Data 17 [11F:110]
                        AQ_MssIngressLutDataControlRegister_CAL.u17.bits_17.mssIngressLutData_17

                        Default = 0x0000

                        LUT data bits 287:272
                        
  */
      unsigned int   mssIngressLutData_17 : 16;    /* 1E.80B1.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 287:272
                          */
    } bits_17;
    uint16_t word_17;
  } u17;
  /*! \brief Union for bit and word level access of word 18 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80B2.F:0 R/W MSS Ingress LUT Data 18 [12F:120]
                        AQ_MssIngressLutDataControlRegister_CAL.u18.bits_18.mssIngressLutData_18

                        Default = 0x0000

                        LUT data bits 303:288
                        
  */
      unsigned int   mssIngressLutData_18 : 16;    /* 1E.80B2.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 303:288
                          */
    } bits_18;
    uint16_t word_18;
  } u18;
  /*! \brief Union for bit and word level access of word 19 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80B3.F:0 R/W MSS Ingress LUT Data 19 [13F:130]
                        AQ_MssIngressLutDataControlRegister_CAL.u19.bits_19.mssIngressLutData_19

                        Default = 0x0000

                        LUT data bits 319:304
                        
  */
      unsigned int   mssIngressLutData_19 : 16;    /* 1E.80B3.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 319:304
                          */
    } bits_19;
    uint16_t word_19;
  } u19;
  /*! \brief Union for bit and word level access of word 20 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80B4.F:0 R/W MSS Ingress LUT Data 20 [14F:140]
                        AQ_MssIngressLutDataControlRegister_CAL.u20.bits_20.mssIngressLutData_20

                        Default = 0x0000

                        LUT data bits 335:320
                        
  */
      unsigned int   mssIngressLutData_20 : 16;    /* 1E.80B4.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 335:320
                          */
    } bits_20;
    uint16_t word_20;
  } u20;
  /*! \brief Union for bit and word level access of word 21 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80B5.F:0 R/W MSS Ingress LUT Data 21 [15F:150]
                        AQ_MssIngressLutDataControlRegister_CAL.u21.bits_21.mssIngressLutData_21

                        Default = 0x0000

                        LUT data bits 351:336
                        
  */
      unsigned int   mssIngressLutData_21 : 16;    /* 1E.80B5.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 351:336
                          */
    } bits_21;
    uint16_t word_21;
  } u21;
  /*! \brief Union for bit and word level access of word 22 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80B6.F:0 R/W MSS Ingress LUT Data 22 [16F:160]
                        AQ_MssIngressLutDataControlRegister_CAL.u22.bits_22.mssIngressLutData_22

                        Default = 0x0000

                        LUT data bits 367:352
                        
  */
      unsigned int   mssIngressLutData_22 : 16;    /* 1E.80B6.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 367:352
                          */
    } bits_22;
    uint16_t word_22;
  } u22;
  /*! \brief Union for bit and word level access of word 23 of MSS Ingress LUT Data Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.80B7.F:0 R/W MSS Ingress LUT Data 23 [17F:170]
                        AQ_MssIngressLutDataControlRegister_CAL.u23.bits_23.mssIngressLutData_23

                        Default = 0x0000

                        LUT data bits 383:368
                        
  */
      unsigned int   mssIngressLutData_23 : 16;    /* 1E.80B7.F:0  R/W      Default = 0x0000 */
                     /* LUT data bits 383:368
                          */
    } bits_23;
    uint16_t word_23;
  } u23;
} AQ_MssIngressLutDataControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Revision Register: 1E.9000 */
/*                  MSM Line  Revision Register: 1E.9000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Revision Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9000.7:0 ROS MSM Line  Core Version [7:0]
                        AQ_MsmLineRevisionRegister_CAL.u0.bits_0.msmLineCoreVersion

                        Default = 0x03

                        Core version
  */
      unsigned int   msmLineCoreVersion : 8;    /* 1E.9000.7:0  ROS      Default = 0x03 */
                     /* Core version  */
                    /*! \brief 1E.9000.F:8 ROS MSM Line  Core Revision [7:0]
                        AQ_MsmLineRevisionRegister_CAL.u0.bits_0.msmLineCoreRevision

                        Default = 0x01

                        Core revision
  */
      unsigned int   msmLineCoreRevision : 8;    /* 1E.9000.F:8  ROS      Default = 0x01 */
                     /* Core revision  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Revision Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9001.F:0 ROS MSM Line  Customer Revision [F:0]
                        AQ_MsmLineRevisionRegister_CAL.u1.bits_1.msmLineCustomerRevision

                        Default = 0x0001

                        Customer revision
  */
      unsigned int   msmLineCustomerRevision : 16;    /* 1E.9001.F:0  ROS      Default = 0x0001 */
                     /* Customer revision  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRevisionRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Scratchpad Register: 1E.9002 */
/*                  MSM Line  Scratchpad Register: 1E.9002 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Scratchpad Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9002.F:0 R/W MSM Line  Scratch 0 [F:0]
                        AQ_MsmLineScratchpadRegister_CAL.u0.bits_0.msmLineScratch_0

                        Default = 0x0000

                        Scratch register
  */
      unsigned int   msmLineScratch_0 : 16;    /* 1E.9002.F:0  R/W      Default = 0x0000 */
                     /* Scratch register  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Scratchpad Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9003.F:0 R/W MSM Line  Scratch 1 [F:0]
                        AQ_MsmLineScratchpadRegister_CAL.u1.bits_1.msmLineScratch_1

                        Default = 0x0000

                        Scratch register
  */
      unsigned int   msmLineScratch_1 : 16;    /* 1E.9003.F:0  R/W      Default = 0x0000 */
                     /* Scratch register  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineScratchpadRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  General Control Register: 1E.9004 */
/*                  MSM Line  General Control Register: 1E.9004 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  General Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9004.0 R/W MSM Line  Tx Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineTxEnable

                        Default = 0x0

                        1 = Tx enable

                 <B>Notes:</B>
                        MAC Rx path enable. Should be set to 1 to enable the MAC Rx path. Should be set to 0 to disable the MAC Rx path.  */
      unsigned int   msmLineTxEnable : 1;    /* 1E.9004.0  R/W      Default = 0x0 */
                     /* 1 = Tx enable  */
                    /*! \brief 1E.9004.1 R/W MSM Line  Rx Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineRxEnable

                        Default = 0x0

                        1 = Rx enable

                 <B>Notes:</B>
                        MAC Tx path enable. Should be set to 1 to enable the MAC Tx path. Should be set to 0 to disable the MAC Tx path.  */
      unsigned int   msmLineRxEnable : 1;    /* 1E.9004.1  R/W      Default = 0x0 */
                     /* 1 = Rx enable  */
      unsigned int   reserved0 : 1;
                    /*! \brief 1E.9004.3 R/W MSM Line  WAN Mode
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineWanMode

                        Default = 0x0

                        1 = WAN mode
                        0 = LAN mode
                        

                 <B>Notes:</B>
                        WAN mode enable. Sets WAN mode when set to 1 and LAN mode when set to 0. Note: When changing the mode, verifiy correct setting of the Tx IPG.  */
      unsigned int   msmLineWanMode : 1;    /* 1E.9004.3  R/W      Default = 0x0 */
                     /* 1 = WAN mode
                        0 = LAN mode
                          */
                    /*! \brief 1E.9004.4 R/W MSM Line  Promiscuous Mode
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLinePromiscuousMode

                        Default = 0x0

                        1 = Promiscuous mode
                        

                 <B>Notes:</B>
                        When set to 1, all frames are received without any MAC address filtering.  */
      unsigned int   msmLinePromiscuousMode : 1;    /* 1E.9004.4  R/W      Default = 0x0 */
                     /* 1 = Promiscuous mode
                          */
                    /*! \brief 1E.9004.5 R/W MSM Line  PAD Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLinePadEnable

                        Default = 0x0

                        1 = Enable frame padding removal on Rx
                        

                 <B>Notes:</B>
                        When set to 1, enable frame padding removal on the Rx path. If enabled, padding is removed before the frame is transferred to the MAC client application. If disabled, no padding is removed on the Rx by the MAC.
                        Note : On Tx, the MAC always adds padding as required.  */
      unsigned int   msmLinePadEnable : 1;    /* 1E.9004.5  R/W      Default = 0x0 */
                     /* 1 = Enable frame padding removal on Rx
                          */
                    /*! \brief 1E.9004.6 R/W MSM Line  CRC Forward
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineCrcForward

                        Default = 0x0

                        1 = Enable CRC forwarding
                        

                 <B>Notes:</B>
                        When set to 1, the CRC field of the received frames is forwarded with the frame to the user application. If disabled, the CRC field is stripped from the frame.
                        Note : If padding is enabled ( See MAC PAD Enable  set to 1), this bit is ignored.  */
      unsigned int   msmLineCrcForward : 1;    /* 1E.9004.6  R/W      Default = 0x0 */
                     /* 1 = Enable CRC forwarding
                          */
                    /*! \brief 1E.9004.7 R/W MSM Line  Pause Forward
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLinePauseForward

                        Default = 0x0

                        1 = Enable Pause forwarding
                        

                 <B>Notes:</B>
                        Terminate or forward pause frames. If set to 1, pause frames are forwarded to the user application. In normal mode, when set to 0, pause frames are terminated and discarded within the MAC.  */
      unsigned int   msmLinePauseForward : 1;    /* 1E.9004.7  R/W      Default = 0x0 */
                     /* 1 = Enable Pause forwarding
                          */
                    /*! \brief 1E.9004.8 R/W MSM Line  Pause Ignore
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLinePauseIgnore

                        Default = 0x0

                        1 = Ignore pause frames
                        

                 <B>Notes:</B>
                        Ignore pause frame quanta. If set to 1, received pause frames are ignored by the MAC. When set to 0, the Tx is stopped for the amount of time specified in the pause quanta received within the pause frame.  */
      unsigned int   msmLinePauseIgnore : 1;    /* 1E.9004.8  R/W      Default = 0x0 */
                     /* 1 = Ignore pause frames
                          */
                    /*! \brief 1E.9004.9 R/W MSM Line  Tx Address Insert Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineTxAddressInsertEnable

                        Default = 0x0

                        1 = Insert Tx MAC source address
                        

                 <B>Notes:</B>
                        Set the source MAC address on transmit. If set to 1, the MAC overwrites the source MAC address with the MAC programmed address in all transmitted frames. When set to 0, the source MAC address is transmitted unmodified from the MAC Tx client application.  */
      unsigned int   msmLineTxAddressInsertEnable : 1;    /* 1E.9004.9  R/W      Default = 0x0 */
                     /* 1 = Insert Tx MAC source address
                          */
                    /*! \brief 1E.9004.A R/W MSM Line  Tx CRC Append
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineTxCrcAppend

                        Default = 0x0

                        1 = Append Tx CRC
                        

                 <B>Notes:</B>
                        Permanently enable CRC append on transmit. If set to 1, the Tx will append a CRC to all transmitted frames. If set to 0, CRC append can be controlled on a per frame basis using the pin ff_tx_crc.
                        This configuration bit is OR'ed with the external ff_tx_crc pin to instruct the Tx to append a CRC to transmitted frames. The ff_tx_crc pin is tied to 0.  */
      unsigned int   msmLineTxCrcAppend : 1;    /* 1E.9004.A  R/W      Default = 0x0 */
                     /* 1 = Append Tx CRC
                          */
                    /*! \brief 1E.9004.B R/W MSM Line  Tx Pad Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineTxPadEnable

                        Default = 0x1

                        1 = Enable Tx padding
                        

                 <B>Notes:</B>
                        When set to 1, enable padding of frames in the Tx direction. When set to 0, the MAC will not extend frames from the application to a minimum of 64 bytes, allowing to transmit short frames (violating the Ethernet mimimum size requirements). Must be set to 1 for normal operation.  */
      unsigned int   msmLineTxPadEnable : 1;    /* 1E.9004.B  R/W      Default = 0x1 */
                     /* 1 = Enable Tx padding
                          */
                    /*! \brief 1E.9004.C R/WSC MSM Line  Soft Reset
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineSoftReset

                        Default = 0x0

                        1 = Soft reset
                        

                 <B>Notes:</B>
                        Software reset. Self clearing bit. When set to 1, resets all statistic counters as well as the Tx and Rx FIFOs. It should be issued after all traffic has been stopped as a result of clearing the Rx/Tx enable bits ( See MAC Rx Enable  set to 0 and  See MAC Tx Enable  set to 0).
                        Note : Can lead to an Rx interface (ff_rx_xxx) violations to the application if the reset is issued in the middle of a receive frame transfer. Then the end of packet (assertion of ff_rx_eop) is lost and the application should be prepeared to handle this exception.  */
      unsigned int   msmLineSoftReset : 1;    /* 1E.9004.C  R/WSC      Default = 0x0 */
                     /* 1 = Soft reset
                          */
                    /*! \brief 1E.9004.D R/W MSM Line  Control Frame Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineControlFrameEnable

                        Default = 0x0

                        1 = Control frame enabled
                        

                 <B>Notes:</B>
                        MAC control frame enable. When set to 1, the MAC control frames with any Opcode other than 0x0001 are accepted and forwarded to the client interface. When set to 0, MAC control frames with any opcode other than 0x0001 are silently discarded.  */
      unsigned int   msmLineControlFrameEnable : 1;    /* 1E.9004.D  R/W      Default = 0x0 */
                     /* 1 = Control frame enabled
                          */
                    /*! \brief 1E.9004.E R/W MSM Line  Rx Error Discard
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLineRxErrorDiscard

                        Default = 0x0

                        1 = Enable discard of received errored frames
                        

                 <B>Notes:</B>
                        Rx errored frame discard enable. When set to 1, any frame received with an error is discarded and not forwarded to the client interface. When set to 0, errored frames are forwarded to the client interface with ff_rx_err asserted.
                        Note : It is recommended to set this bit to 1 only when store and forward operation is enabled (RX_SECTION_FULL TBD).  */
      unsigned int   msmLineRxErrorDiscard : 1;    /* 1E.9004.E  R/W      Default = 0x0 */
                     /* 1 = Enable discard of received errored frames
                          */
                    /*! \brief 1E.9004.F R/W MSM Line  PHY Tx Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u0.bits_0.msmLinePhyTxEnable

                        Default = 0x0

                        1 = Enable PHY Tx
                        

                 <B>Notes:</B>
                        Directly controls the phy_tx_ena pin.  */
      unsigned int   msmLinePhyTxEnable : 1;    /* 1E.9004.F  R/W      Default = 0x0 */
                     /* 1 = Enable PHY Tx
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  General Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9005.0 R/W MSM Line  Force Send IDLE
                        AQ_MsmLineGeneralControlRegister_CAL.u1.bits_1.msmLineForceSendIdle

                        Default = 0x0

                        1 = Force send idle

                 <B>Notes:</B>
                        When set to 1, suppress any frame transmissions and forces IDLE n the Tx interface instead of frames. This control affects the MAC reconciliation layer (RS) which acts after all MAC datapath has processed the frame.
                        Note : Does not have an effect on fault handling (i.e. reception of local fault will still cause transmit of remote fault).
                        Must be 0 for normal operation.  */
      unsigned int   msmLineForceSendIdle : 1;    /* 1E.9005.0  R/W      Default = 0x0 */
                     /* 1 = Force send idle  */
                    /*! \brief 1E.9005.1 R/W MSM Line  Length Check Disable
                        AQ_MsmLineGeneralControlRegister_CAL.u1.bits_1.msmLineLengthCheckDisable

                        Default = 0x0

                        1 = Disable length check

                 <B>Notes:</B>
                        Payload length check disable. When set to 0, the MAC checks the frames payload length with the frame length/type field. When set to 1, the payload length check is disabled.  */
      unsigned int   msmLineLengthCheckDisable : 1;    /* 1E.9005.1  R/W      Default = 0x0 */
                     /* 1 = Disable length check  */
                    /*! \brief 1E.9005.2 R/W MSM Line  IDLE Column Count Extend
                        AQ_MsmLineGeneralControlRegister_CAL.u1.bits_1.msmLineIdleColumnCountExtend

                        Default = 0x0

                        1 = Extend IDLE column count

                 <B>Notes:</B>
                        When set to 1, extends the RS layer IDLE column counter by 2x. The IEEE 802.3ae defines the fault condition to be cleared after 128 columns of IDLE have been received. If the MAC operates together with a WAN mode PCS (WIS) it may may happen (depending on PCS) that this period is too short to bridge the IDLE stuffing occurring in this mode, leading to a toggling fault indication. In this case, extending the counter helps to aoivd toggling fault indications.  */
      unsigned int   msmLineIdleColumnCountExtend : 1;    /* 1E.9005.2  R/W      Default = 0x0 */
                     /* 1 = Extend IDLE column count  */
                    /*! \brief 1E.9005.3 R/W MSM Line  Priority Flow Control Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u1.bits_1.msmLinePriorityFlowControlEnable

                        Default = 0x0

                        1 = Enable priority flow control
                        0 = Enable link flow control
                        

                 <B>Notes:</B>
                        Enable priority flow control (PFC) mode of operation. When set to 0, the MAC uses standard link pause frames. When set to 1, the MAC will transmit and accept PFC frames.  */
      unsigned int   msmLinePriorityFlowControlEnable : 1;    /* 1E.9005.3  R/W      Default = 0x0 */
                     /* 1 = Enable priority flow control
                        0 = Enable link flow control
                          */
      unsigned int   reserved3 : 1;
                    /*! \brief 1E.9005.5 R/W MSM Line  SFD Check Disable
                        AQ_MsmLineGeneralControlRegister_CAL.u1.bits_1.msmLineSfdCheckDisable

                        Default = 0x0

                        1 = Disable SFD check
                        

                 <B>Notes:</B>
                        Disable check of SFD (0xD5) character at frame start. When set to 1, the frame is accepted even if the SFD byte following the preamble is not 0xD5. When set to 0, a frame is accepted only if the SFD byte is found with the value 0xD5.  */
      unsigned int   msmLineSfdCheckDisable : 1;    /* 1E.9005.5  R/W      Default = 0x0 */
                     /* 1 = Disable SFD check
                          */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.9005.7 R/W MSM Line  Tx Low Power IDLE Enable
                        AQ_MsmLineGeneralControlRegister_CAL.u1.bits_1.msmLineTxLowPowerIdleEnable

                        Default = 0x0

                        1 = Transmit LPI enable
                        

                 <B>Notes:</B>
                        Transmit low power IDLE enable. When set to 1, the MAC completes the transmission of the current frame and generates low power IDLE sequences (LPI) to the XGMII/SGMII. When set to 0, the MAC operates in normal mode. This bit is OR'ed with the reg_lowp_ena pin.  */
      unsigned int   msmLineTxLowPowerIdleEnable : 1;    /* 1E.9005.7  R/W      Default = 0x0 */
                     /* 1 = Transmit LPI enable
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.9005.A R/W MSM Line  CRC Corruption Disable
                        AQ_MsmLineGeneralControlRegister_CAL.u1.bits_1.msmLineCrcCorruptionDisable

                        Default = 0x0

                        1 = Disable CRC corruption
                        

                 <B>Notes:</B>
                        When set to 1, the inserted CRC field of the transmitted frames will always be correct regardless of any Rx MAC errors. If set to 0, the inserted CRC field will be corrupted (by inverting bit 30) when any errors are detected by the Rx MAC.  */
      unsigned int   msmLineCrcCorruptionDisable : 1;    /* 1E.9005.A  R/W      Default = 0x0 */
                     /* 1 = Disable CRC corruption
                          */
                    /*! \brief 1E.9005.B R/WSC MSM Line Statistic Counter Reset
                        AQ_MsmLineGeneralControlRegister_CAL.u1.bits_1.msmLineStatisticCounterReset

                        Default = 0x0

                        1 = Statistic counter reset
                        

                 <B>Notes:</B>
                        Statistic counter software reset. When set to 1, resets all statistic counters.This bit is self-clearing by hardware.  */
      unsigned int   msmLineStatisticCounterReset : 1;    /* 1E.9005.B  R/WSC      Default = 0x0 */
                     /* 1 = Statistic counter reset
                          */
      unsigned int   reserved0 : 4;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineGeneralControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Address Register: 1E.9006 */
/*                  MSM Line  Address Register: 1E.9006 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Address Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9006.F:0 R/W MSM Line  Address 0 [F:0]
                        AQ_MsmLineAddressRegister_CAL.u0.bits_0.msmLineAddress_0

                        Default = 0x0000

                        MAC address bits 15:0
  */
      unsigned int   msmLineAddress_0 : 16;    /* 1E.9006.F:0  R/W      Default = 0x0000 */
                     /* MAC address bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Address Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9007.F:0 R/W MSM Line  Address 1 [F:0]
                        AQ_MsmLineAddressRegister_CAL.u1.bits_1.msmLineAddress_1

                        Default = 0x0000

                        MAC address bits 31:16
  */
      unsigned int   msmLineAddress_1 : 16;    /* 1E.9007.F:0  R/W      Default = 0x0000 */
                     /* MAC address bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM Line  Address Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9008.F:0 R/W MSM Line  Address 2 [F:0]
                        AQ_MsmLineAddressRegister_CAL.u2.bits_2.msmLineAddress_2

                        Default = 0x0000

                        MAC address bits 47:32
  */
      unsigned int   msmLineAddress_2 : 16;    /* 1E.9008.F:0  R/W      Default = 0x0000 */
                     /* MAC address bits 47:32  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM Line  Address Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_MsmLineAddressRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Frame Control Register: 1E.900A */
/*                  MSM Line  Frame Control Register: 1E.900A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Frame Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.900A.E:0 R/W MSM Line  Maximum Frame Length [E:0]
                        AQ_MsmLineFrameControlRegister_CAL.u0.bits_0.msmLineMaximumFrameLength

                        Default = 0x0600

                        Maximum frame length

                 <B>Notes:</B>
                        Maximum supported frame length. The MAC supports any frame size up to 16,352 bytes (0x3FE0). Typical settings are 1518 for standard.  */
      unsigned int   msmLineMaximumFrameLength : 15;    /* 1E.900A.E:0  R/W      Default = 0x0600 */
                     /* Maximum frame length  */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Frame Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM Line  Frame Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM Line  Frame Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_MsmLineFrameControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  FIFO Control Register: 1E.900E */
/*                  MSM Line  FIFO Control Register: 1E.900E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.900E.7:0 R/W MSM Line  Rx FIFO Full Threshold [7:0]
                        AQ_MsmLineFifoControlRegister_CAL.u0.bits_0.msmLineRxFifoFullThreshold

                        Default = 0x08

                        Rx FIFO full threshold

                 <B>Notes:</B>
                        All threshold values are in steps of FIFO words.  */
      unsigned int   msmLineRxFifoFullThreshold : 8;    /* 1E.900E.7:0  R/W      Default = 0x08 */
                     /* Rx FIFO full threshold  */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.900F.7:0 R/W MSM Line  Rx FIFO Empty Threshold [7:0]
                        AQ_MsmLineFifoControlRegister_CAL.u1.bits_1.msmLineRxFifoEmptyThreshold

                        Default = 0x00

                        Rx FIFO empty threshold

                 <B>Notes:</B>
                        All threshold values are in steps of FIFO words.  */
      unsigned int   msmLineRxFifoEmptyThreshold : 8;    /* 1E.900F.7:0  R/W      Default = 0x00 */
                     /* Rx FIFO empty threshold  */
      unsigned int   reserved0 : 8;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM Line  FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9010.5:0 R/W MSM Line  Tx FIFO Full Threshold [5:0]
                        AQ_MsmLineFifoControlRegister_CAL.u2.bits_2.msmLineTxFifoFullThreshold

                        Default = 0x08

                        Tx FIFO full threshold

                 <B>Notes:</B>
                        All threshold values are in steps of FIFO words.  */
      unsigned int   msmLineTxFifoFullThreshold : 6;    /* 1E.9010.5:0  R/W      Default = 0x08 */
                     /* Tx FIFO full threshold  */
      unsigned int   reserved0 : 10;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM Line  FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9011.5:0 R/W MSM Line  Tx FIFO Empty Threshold [5:0]
                        AQ_MsmLineFifoControlRegister_CAL.u3.bits_3.msmLineTxFifoEmptyThreshold

                        Default = 0x00

                        Tx FIFO empty threshold

                 <B>Notes:</B>
                        All threshold values are in steps of FIFO words.  */
      unsigned int   msmLineTxFifoEmptyThreshold : 6;    /* 1E.9011.5:0  R/W      Default = 0x00 */
                     /* Tx FIFO empty threshold  */
      unsigned int   reserved0 : 10;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of MSM Line  FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9012.7:0 ROS MSM Line  Rx FIFO Almost Full Threshold [7:0]
                        AQ_MsmLineFifoControlRegister_CAL.u4.bits_4.msmLineRxFifoAlmostFullThreshold

                        Default = 0x00

                        Rx FIFO almost full threshold

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   msmLineRxFifoAlmostFullThreshold : 8;    /* 1E.9012.7:0  ROS      Default = 0x00 */
                     /* Rx FIFO almost full threshold  */
      unsigned int   reserved0 : 8;
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of MSM Line  FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9013.7:0 ROS MSM Line  Rx FIFO Almost Empty Threshold [7:0]
                        AQ_MsmLineFifoControlRegister_CAL.u5.bits_5.msmLineRxFifoAlmostEmptyThreshold

                        Default = 0x00

                        Rx FIFO almost empty threshold

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   msmLineRxFifoAlmostEmptyThreshold : 8;    /* 1E.9013.7:0  ROS      Default = 0x00 */
                     /* Rx FIFO almost empty threshold  */
      unsigned int   reserved0 : 8;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of MSM Line  FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9014.7:0 ROS MSM Line  Tx FIFO Almost Full Threshold [7:0]
                        AQ_MsmLineFifoControlRegister_CAL.u6.bits_6.msmLineTxFifoAlmostFullThreshold

                        Default = 0x00

                        Tx FIFO almost full threshold

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   msmLineTxFifoAlmostFullThreshold : 8;    /* 1E.9014.7:0  ROS      Default = 0x00 */
                     /* Tx FIFO almost full threshold  */
      unsigned int   reserved0 : 8;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of MSM Line  FIFO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9015.7:0 ROS MSM Line  Tx FIFO Almost Empty Threshold [7:0]
                        AQ_MsmLineFifoControlRegister_CAL.u7.bits_7.msmLineTxFifoAlmostEmptyThreshold

                        Default = 0x00

                        Tx FIFO almost empty threshold

                 <B>Notes:</B>
                        Unused.  */
      unsigned int   msmLineTxFifoAlmostEmptyThreshold : 8;    /* 1E.9015.7:0  ROS      Default = 0x00 */
                     /* Tx FIFO almost empty threshold  */
      unsigned int   reserved0 : 8;
    } bits_7;
    uint16_t word_7;
  } u7;
} AQ_MsmLineFifoControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Hash Control Register: 1E.9016 */
/*                  MSM Line  Hash Control Register: 1E.9016 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Hash Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9016.5:0 R/W MSM Line  Hash Table [5:0]
                        AQ_MsmLineHashControlRegister_CAL.u0.bits_0.msmLineHashTable

                        Default = 0x00

                        Hash table address (code)

                 <B>Notes:</B>
                        Hash table programming. Write only register.  */
      unsigned int   msmLineHashTable : 6;    /* 1E.9016.5:0  R/W      Default = 0x00 */
                     /* Hash table address (code)  */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.9016.8 R/W MSM Line  Multicast Enable
                        AQ_MsmLineHashControlRegister_CAL.u0.bits_0.msmLineMulticastEnable

                        Default = 0x0

                        1 = Multicast enable

                 <B>Notes:</B>
                        When set to 1, enables reception of multicast frame reception for the entry.  */
      unsigned int   msmLineMulticastEnable : 1;    /* 1E.9016.8  R/W      Default = 0x0 */
                     /* 1 = Multicast enable  */
      unsigned int   reserved0 : 7;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Hash Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineHashControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  MDIO Control Register: 1E.9018 */
/*                  MSM Line  MDIO Control Register: 1E.9018 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  MDIO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9018.0 ROS MSM Line  MDIO Busy 0
                        AQ_MsmLineMdioControlRegister_CAL.u0.bits_0.msmLineMdioBusy_0

                        Default = 0x0

                        MDIO busy

                 <B>Notes:</B>
                        MDIO busy. If set to 1, an MDIO transaction is currently ongoing. If set to 0, the application can access the other registers.  */
      unsigned int   msmLineMdioBusy_0 : 1;    /* 1E.9018.0  ROS      Default = 0x0 */
                     /* MDIO busy  */
                    /*! \brief 1E.9018.1 ROS MSM Line  MDIO Read Error
                        AQ_MsmLineMdioControlRegister_CAL.u0.bits_0.msmLineMdioReadError

                        Default = 0x0

                        MDIO busy

                 <B>Notes:</B>
                        MDIO read error. If set to 1, the last read transaction had no response from a PHY and the data read could be invalid. This can happen if the PHY address does not match any PHY that is available on the MDIO bus.  */
      unsigned int   msmLineMdioReadError : 1;    /* 1E.9018.1  ROS      Default = 0x0 */
                     /* MDIO busy  */
                    /*! \brief 1E.9018.3:2 R/W MSM Line  MDIO Hold Time Configuration [1:0]
                        AQ_MsmLineMdioControlRegister_CAL.u0.bits_0.msmLineMdioHoldTimeConfiguration

                        Default = 0x0

                        MDIO hold time configuration

                 <B>Notes:</B>
                        MDIO hold time setting: 
                        0x0 : 1 clock cycle
                        0x1 : 2 clock cycles
                        0x2 : 3 clock cycles
                        0x3 : 4 clock cycles  */
      unsigned int   msmLineMdioHoldTimeConfiguration : 2;    /* 1E.9018.3:2  R/W      Default = 0x0 */
                     /* MDIO hold time configuration  */
      unsigned int   reserved0 : 2;
                    /*! \brief 1E.9018.6 R/W MSM Line  MDIO Clause 45 Enable
                        AQ_MsmLineMdioControlRegister_CAL.u0.bits_0.msmLineMdioClause_45Enable

                        Default = 0x1

                        1 = Clause 45 transactions used
                        0 = Clause 22 transactions used
                        

                 <B>Notes:</B>
                        Enable Clause 45 support. When set to 0, Clause 22 transactions are used. When set to 1, Clause 45 transactions are used.  */
      unsigned int   msmLineMdioClause_45Enable : 1;    /* 1E.9018.6  R/W      Default = 0x1 */
                     /* 1 = Clause 45 transactions used
                        0 = Clause 22 transactions used
                          */
                    /*! \brief 1E.9018.F:7 R/W MSM Line  MDIO Clock Divider Configuration [8:0]
                        AQ_MsmLineMdioControlRegister_CAL.u0.bits_0.msmLineMdioClockDividerConfiguration

                        Default = 0x028

                        1 = Multicast enable

                 <B>Notes:</B>
                        A value of 5 to 511 can be set. The frequency is clk / ((2 * divisor) + 1). Setting the divisor to 0 disables the MDC.  */
      unsigned int   msmLineMdioClockDividerConfiguration : 9;    /* 1E.9018.F:7  R/W      Default = 0x028 */
                     /* 1 = Multicast enable  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  MDIO Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 1E.9019.F ROS MSM Line  MDIO Busy 1
                        AQ_MsmLineMdioControlRegister_CAL.u1.bits_1.msmLineMdioBusy_1

                        Default = 0x0

                        MDIO busy

                 <B>Notes:</B>
                        MDIO busy. If set to 1, an MDIO transaction is currently ongoing. If set to 0, the application can access the other registers.  */
      unsigned int   msmLineMdioBusy_1 : 1;    /* 1E.9019.F  ROS      Default = 0x0 */
                     /* MDIO busy  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM Line  MDIO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.901A.4:0 R/W MSM Line  MDIO Device Address [4:0]
                        AQ_MsmLineMdioControlRegister_CAL.u2.bits_2.msmLineMdioDeviceAddress

                        Default = 0x00

                        MDIO device address

                 <B>Notes:</B>
                        Clause 45 device address
                        Clause 22 register address  */
      unsigned int   msmLineMdioDeviceAddress : 5;    /* 1E.901A.4:0  R/W      Default = 0x00 */
                     /* MDIO device address  */
                    /*! \brief 1E.901A.9:5 R/W MSM Line  MDIO Port Address [4:0]
                        AQ_MsmLineMdioControlRegister_CAL.u2.bits_2.msmLineMdioPortAddress

                        Default = 0x00

                        MDIO port address

                 <B>Notes:</B>
                        Clause 45 port address
                        Clause 22 PHY address  */
      unsigned int   msmLineMdioPortAddress : 5;    /* 1E.901A.9:5  R/W      Default = 0x00 */
                     /* MDIO port address  */
      unsigned int   reserved0 : 4;
                    /*! \brief 1E.901A.E R/WSC MSM Line  MDIO Read Address Post Increment
                        AQ_MsmLineMdioControlRegister_CAL.u2.bits_2.msmLineMdioReadAddressPostIncrement

                        Default = 0x0

                        MDIO read address post increment

                 <B>Notes:</B>
                        When set to 1, a read with address post increment transaction is intiated. Only valid for Clause 45 transactions.  */
      unsigned int   msmLineMdioReadAddressPostIncrement : 1;    /* 1E.901A.E  R/WSC      Default = 0x0 */
                     /* MDIO read address post increment  */
                    /*! \brief 1E.901A.F R/WSC MSM Line  MDIO Read
                        AQ_MsmLineMdioControlRegister_CAL.u2.bits_2.msmLineMdioRead

                        Default = 0x0

                        MDIO read

                 <B>Notes:</B>
                        When set to 1, a read transaction is intiated.  */
      unsigned int   msmLineMdioRead : 1;    /* 1E.901A.F  R/WSC      Default = 0x0 */
                     /* MDIO read  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM Line  MDIO Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of MSM Line  MDIO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.901C.F:0 R/W MSM Line  MDIO Data [F:0]
                        AQ_MsmLineMdioControlRegister_CAL.u4.bits_4.msmLineMdioData

                        Default = 0x0000

                        MDIO data

                 <B>Notes:</B>
                        When written, initiates a write transaction to the PHY. The  See MAC Control Register 26: Address 1E.601A register must have been intialized. The  See MAC MDIO Busy  bit will be set immediately and cleared when the write transaction has finished.
                        When read, returns the data read from the PHY register after a read transaction has been completed (initiated by setting either  See MAC MDIO Read bit or  See MAC MDIO Address Post Increment bit to 1).
                        If the  See MAC MDIO Busy bit is set, the value read is invalid.  */
      unsigned int   msmLineMdioData : 16;    /* 1E.901C.F:0  R/W      Default = 0x0000 */
                     /* MDIO data  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of MSM Line  MDIO Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of MSM Line  MDIO Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.901E.F:0 R/W MSM Line  MDIO Register Address [F:0]
                        AQ_MsmLineMdioControlRegister_CAL.u6.bits_6.msmLineMdioRegisterAddress

                        Default = 0x0000

                        MDIO register address

                 <B>Notes:</B>
                        Address of register within Clause 45 PHY device to read from or write to. After writing this register, an address write transaction will be initiated to set the PHY's internal address register to the configured value.
                        The  See MAC Control Register 26: Address 1E.601A register must have been intialized before the first write to this register.
                        Note : When a read post increment access is issued, this register will not change, only the register inside the PHY device is incremented.
                        The register is relevant only when the  See MAC MDIO Clause 45 Enable bit is set to 1. It should not be used when Clause 22 mode is active.  */
      unsigned int   msmLineMdioRegisterAddress : 16;    /* 1E.901E.F:0  R/W      Default = 0x0000 */
                     /* MDIO register address  */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of MSM Line  MDIO Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_7;
    uint16_t word_7;
  } u7;
} AQ_MsmLineMdioControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  General Status Register: 1E.9020 */
/*                  MSM Line  General Status Register: 1E.9020 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  General Status Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9020.0 BLH MSM Line  Rx Local Fault
                        AQ_MsmLineGeneralStatusRegister_CAL.u0.bits_0.msmLineRxLocalFault

                        

                        Rx local fault detected

                 <B>Notes:</B>
                        Latch high local fault status. Set to 1, whent he MAC detects Rx local fault sequences on the Rx interface. Reset to 0 after read and after reset.  */
      unsigned int   msmLineRxLocalFault : 1;    /* 1E.9020.0  BLH       */
                     /* Rx local fault detected  */
                    /*! \brief 1E.9020.1 BLH MSM Line  Rx Remote Fault
                        AQ_MsmLineGeneralStatusRegister_CAL.u0.bits_0.msmLineRxRemoteFault

                        

                        Rx remote fault detected

                 <B>Notes:</B>
                        Latch high local fault status. Set to 1, whent he MAC detects Rx local fault sequences on the Rx interface. Reset to 0 after read and after reset.  */
      unsigned int   msmLineRxRemoteFault : 1;    /* 1E.9020.1  BLH       */
                     /* Rx remote fault detected  */
                    /*! \brief 1E.9020.2 RO MSM Line  PHY Loss of Signal
                        AQ_MsmLineGeneralStatusRegister_CAL.u0.bits_0.msmLinePhyLossOfSignal

                        

                        PHY loss of signal

                 <B>Notes:</B>
                        PHY indicates loss of signal. This is the value of pin phy_los which is tied to 0.  */
      unsigned int   msmLinePhyLossOfSignal : 1;    /* 1E.9020.2  RO       */
                     /* PHY loss of signal  */
                    /*! \brief 1E.9020.3 COW MSM Line  Timestamp Available
                        AQ_MsmLineGeneralStatusRegister_CAL.u0.bits_0.msmLineTimestampAvailable

                        

                        Timestamp available

                 <B>Notes:</B>
                        Transmit timestamp available. Indicates that the timestamp of the last transmitted event frame (which had ff_tx_ts_frm=1) is available in the register  See MAC Time Stamp Status 0 [F:0]  and  See MAC Time Stamp Status 1 [F:0] . To clear this bit, the bit must be written with a 1.
                          */
      unsigned int   msmLineTimestampAvailable : 1;    /* 1E.9020.3  COW       */
                     /* Timestamp available  */
                    /*! \brief 1E.9020.4 RO MSM Line  Rx Low Power IDLE
                        AQ_MsmLineGeneralStatusRegister_CAL.u0.bits_0.msmLineRxLowPowerIdle

                        

                        Rx LPI detected

                 <B>Notes:</B>
                        Receive low power IDLE (LPI). Set to 1 when LPI is currently detected on the MAC Rx interface. Set to 0, when the MAC currently operates in normal mode.  */
      unsigned int   msmLineRxLowPowerIdle : 1;    /* 1E.9020.4  RO       */
                     /* Rx LPI detected  */
                    /*! \brief 1E.9020.5 RO MSM Line  Tx FIFO Empty
                        AQ_MsmLineGeneralStatusRegister_CAL.u0.bits_0.msmLineTxFifoEmpty

                        

                        Tx FIFO empty

                 <B>Notes:</B>
                        When set to 1, indicates the Tx FIFO is empty. When set to 0, Tx FIFO is non-empty.  */
      unsigned int   msmLineTxFifoEmpty : 1;    /* 1E.9020.5  RO       */
                     /* Tx FIFO empty  */
      unsigned int   reserved0 : 10;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  General Status Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineGeneralStatusRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Tx IPG Control Register: 1E.9022 */
/*                  MSM Line  Tx IPG Control Register: 1E.9022 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Tx IPG Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9022.5:0 R/W MSM Line  Tx IPG Length [5:0]
                        AQ_MsmLineTxIpgControlRegister_CAL.u0.bits_0.msmLineTxIpgLength

                        Default = 0x0C

                        Tx IPG length

                 <B>Notes:</B>
                        Tx inter-packet gap (IPG) value. Depending on LAN or WAN mode of operation.
                        LAN Mode : Number of octets in steps of 4. Valid values are 8, 12, 16,..., 100. DIC is supported for any setting > 8. A default of 12 must be set to conform to IEEE802.3ae.
                        WAN Mode : Stretch factor. Valid values are 4 ... 15. The stretch factor is calculated as (value+1)*8. A default of 12 must be set to conform to IEEE802.3ae (i.e. 13*8=104). A larger value shrinks the IPG (increasing bandwidth).
                        The reset value of 12 leads to IEEE802.3ae conformant behavior in both modes.
                        Note : WAN mode is only available in 10G mode of operation.  */
      unsigned int   msmLineTxIpgLength : 6;    /* 1E.9022.5:0  R/W      Default = 0x0C */
                     /* Tx IPG length  */
      unsigned int   reserved0 : 10;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Tx IPG Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTxIpgControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Pause Control Register: 1E.902A */
/*                  MSM Line  Pause Control Register: 1E.902A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.902A.F:0 R/W MSM Line  Class 0 Pause Quanta [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u0.bits_0.msmLineClass_0PauseQuanta

                        Default = 0x0000

                        Class 0 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered. When normal link pause mode is enabled, this configuration will be used.  */
      unsigned int   msmLineClass_0PauseQuanta : 16;    /* 1E.902A.F:0  R/W      Default = 0x0000 */
                     /* Class 0 pause quanta  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.902B.F:0 R/W MSM Line  Class 1 Pause Quanta [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u1.bits_1.msmLineClass_1PauseQuanta

                        Default = 0x0000

                        Class 1 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmLineClass_1PauseQuanta : 16;    /* 1E.902B.F:0  R/W      Default = 0x0000 */
                     /* Class 1 pause quanta  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.902C.F:0 R/W MSM Line  Class 2 Pause Quanta [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u2.bits_2.msmLineClass_2PauseQuanta

                        Default = 0x0000

                        Class 2 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmLineClass_2PauseQuanta : 16;    /* 1E.902C.F:0  R/W      Default = 0x0000 */
                     /* Class 2 pause quanta  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.902D.F:0 R/W MSM Line  Class 3 Pause Quanta [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u3.bits_3.msmLineClass_3PauseQuanta

                        Default = 0x0000

                        Class 3 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmLineClass_3PauseQuanta : 16;    /* 1E.902D.F:0  R/W      Default = 0x0000 */
                     /* Class 3 pause quanta  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.902E.F:0 R/W MSM Line  Class 4 Pause Quanta [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u4.bits_4.msmLineClass_4PauseQuanta

                        Default = 0x0000

                        Class 4 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmLineClass_4PauseQuanta : 16;    /* 1E.902E.F:0  R/W      Default = 0x0000 */
                     /* Class 4 pause quanta  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.902F.F:0 R/W MSM Line  Class 5 Pause Quanta [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u5.bits_5.msmLineClass_5PauseQuanta

                        Default = 0x0000

                        Class 5 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmLineClass_5PauseQuanta : 16;    /* 1E.902F.F:0  R/W      Default = 0x0000 */
                     /* Class 5 pause quanta  */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9030.F:0 R/W MSM Line  Class 6 Pause Quanta [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u6.bits_6.msmLineClass_6PauseQuanta

                        Default = 0x0000

                        Class 6 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmLineClass_6PauseQuanta : 16;    /* 1E.9030.F:0  R/W      Default = 0x0000 */
                     /* Class 6 pause quanta  */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9031.F:0 R/W MSM Line  Class 7 Pause Quanta [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u7.bits_7.msmLineClass_7PauseQuanta

                        Default = 0x0000

                        Class 7 pause quanta

                 <B>Notes:</B>
                        Value to be sent for the PFC quanta value for that class when a class XOFF is triggered.  */
      unsigned int   msmLineClass_7PauseQuanta : 16;    /* 1E.9031.F:0  R/W      Default = 0x0000 */
                     /* Class 7 pause quanta  */
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9032.F:0 R/W MSM Line  Class 0 Pause Quanta Threshold [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u8.bits_8.msmLineClass_0PauseQuantaThreshold

                        Default = 0x0000

                        Class 0 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists. When normal link pause mode is enabled, this configuration will be used for refreshing pause frames.  */
      unsigned int   msmLineClass_0PauseQuantaThreshold : 16;    /* 1E.9032.F:0  R/W      Default = 0x0000 */
                     /* Class 0 pause quanta threshold  */
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9033.F:0 R/W MSM Line  Class 1 Pause Quanta Threshold [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u9.bits_9.msmLineClass_1PauseQuantaThreshold

                        Default = 0x0000

                        Class 1 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmLineClass_1PauseQuantaThreshold : 16;    /* 1E.9033.F:0  R/W      Default = 0x0000 */
                     /* Class 1 pause quanta threshold  */
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9034.F:0 R/W MSM Line  Class 2 Pause Quanta Threshold [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u10.bits_10.msmLineClass_2PauseQuantaThreshold

                        Default = 0x0000

                        Class 2 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmLineClass_2PauseQuantaThreshold : 16;    /* 1E.9034.F:0  R/W      Default = 0x0000 */
                     /* Class 2 pause quanta threshold  */
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Union for bit and word level access of word 11 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9035.F:0 R/W MSM Line  Class 3 Pause Quanta Threshold [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u11.bits_11.msmLineClass_3PauseQuantaThreshold

                        Default = 0x0000

                        Class 3 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmLineClass_3PauseQuantaThreshold : 16;    /* 1E.9035.F:0  R/W      Default = 0x0000 */
                     /* Class 3 pause quanta threshold  */
    } bits_11;
    uint16_t word_11;
  } u11;
  /*! \brief Union for bit and word level access of word 12 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9036.F:0 R/W MSM Line  Class 4 Pause Quanta Threshold [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u12.bits_12.msmLineClass_4PauseQuantaThreshold

                        Default = 0x0000

                        Class 4 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmLineClass_4PauseQuantaThreshold : 16;    /* 1E.9036.F:0  R/W      Default = 0x0000 */
                     /* Class 4 pause quanta threshold  */
    } bits_12;
    uint16_t word_12;
  } u12;
  /*! \brief Union for bit and word level access of word 13 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9037.F:0 R/W MSM Line  Class 5 Pause Quanta Threshold [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u13.bits_13.msmLineClass_5PauseQuantaThreshold

                        Default = 0x0000

                        Class 5 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmLineClass_5PauseQuantaThreshold : 16;    /* 1E.9037.F:0  R/W      Default = 0x0000 */
                     /* Class 5 pause quanta threshold  */
    } bits_13;
    uint16_t word_13;
  } u13;
  /*! \brief Union for bit and word level access of word 14 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9038.F:0 R/W MSM Line  Class 6 Pause Quanta Threshold [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u14.bits_14.msmLineClass_6PauseQuantaThreshold

                        Default = 0x0000

                        Class 6 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmLineClass_6PauseQuantaThreshold : 16;    /* 1E.9038.F:0  R/W      Default = 0x0000 */
                     /* Class 6 pause quanta threshold  */
    } bits_14;
    uint16_t word_14;
  } u14;
  /*! \brief Union for bit and word level access of word 15 of MSM Line  Pause Control Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9039.F:0 R/W MSM Line  Class 7 Pause Quanta Threshold [F:0]
                        AQ_MsmLinePauseControlRegister_CAL.u15.bits_15.msmLineClass_7PauseQuantaThreshold

                        Default = 0x0000

                        Class 7 pause quanta threshold

                 <B>Notes:</B>
                        When a PFC quanta timer counts down and reaches this value, a refresh pause frame should be sent with the programmed full quanta value if the input level indicates that a pause condition still exists.  */
      unsigned int   msmLineClass_7PauseQuantaThreshold : 16;    /* 1E.9039.F:0  R/W      Default = 0x0000 */
                     /* Class 7 pause quanta threshold  */
    } bits_15;
    uint16_t word_15;
  } u15;
} AQ_MsmLinePauseControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Pause Status Register: 1E.903A */
/*                  MSM Line  Pause Status Register: 1E.903A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Pause Status Register */
  union
  {
    struct
    {
                    /*! \brief 1E.903A.7:0 ROS MSM Line  Pause Status [7:0]
                        AQ_MsmLinePauseStatusRegister_CAL.u0.bits_0.msmLinePauseStatus

                        Default = 0x00

                        Pause status

                 <B>Notes:</B>
                        Pause status, 1 bit per class.  */
      unsigned int   msmLinePauseStatus : 8;    /* 1E.903A.7:0  ROS      Default = 0x00 */
                     /* Pause status  */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Pause Status Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLinePauseStatusRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line  Time Stamp Status Register: 1E.903E */
/*                  MSM Line  Time Stamp Status Register: 1E.903E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line  Time Stamp Status Register */
  union
  {
    struct
    {
                    /*! \brief 1E.903E.F:0 ROS MSM Line  Timestamp Status 0 [F:0]
                        AQ_MsmLineTimeStampStatusRegister_CAL.u0.bits_0.msmLineTimestampStatus_0

                        Default = 0x0000

                        Timestamp bits 15:0

                 <B>Notes:</B>
                        Timestamp of the last frame transmitted by the MAC that had the ff_tx_ts_frm signal asserted from the client. Valid when the  See MAC Timestamp Available  bit is set to 1.  */
      unsigned int   msmLineTimestampStatus_0 : 16;    /* 1E.903E.F:0  ROS      Default = 0x0000 */
                     /* Timestamp bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line  Time Stamp Status Register */
  union
  {
    struct
    {
                    /*! \brief 1E.903F.F:0 ROS MSM Line  Timestamp Status 1 [F:0]
                        AQ_MsmLineTimeStampStatusRegister_CAL.u1.bits_1.msmLineTimestampStatus_1

                        Default = 0x0000

                        Timestamp bits 31:16
                        

                 <B>Notes:</B>
                        Timestamp of the last frame transmitted by the MAC that had the ff_tx_ts_frm signal asserted from the client. Valid when the  See MAC Timestamp Available  bit is set to 1.  */
      unsigned int   msmLineTimestampStatus_1 : 16;    /* 1E.903F.F:0  ROS      Default = 0x0000 */
                     /* Timestamp bits 31:16
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTimeStampStatusRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Tx Good Frames Counter Register: 1E.9040 */
/*                  MSM Line Tx Good Frames Counter Register: 1E.9040 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Tx Good Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9040.F:0 ROS MSM Line Tx Good Frames Counter 0 [F:0]
                        AQ_MsmLineTxGoodFramesCounterRegister_CAL.u0.bits_0.msmLineTxGoodFramesCounter_0

                        Default = 0x0000

                        Tx good frame counter bits 15:0

                 <B>Notes:</B>
                        Count of frames transmitted without error (Including pause frames).  */
      unsigned int   msmLineTxGoodFramesCounter_0 : 16;    /* 1E.9040.F:0  ROS      Default = 0x0000 */
                     /* Tx good frame counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Tx Good Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9041.F:0 ROS MSM Line Tx Good Frames Counter 1 [F:0]
                        AQ_MsmLineTxGoodFramesCounterRegister_CAL.u1.bits_1.msmLineTxGoodFramesCounter_1

                        Default = 0x0000

                        Tx good frame counter bits 31:16
                        

                 <B>Notes:</B>
                        Count of frames transmitted without error (Including pause frames).  */
      unsigned int   msmLineTxGoodFramesCounter_1 : 16;    /* 1E.9041.F:0  ROS      Default = 0x0000 */
                     /* Tx good frame counter bits 31:16
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTxGoodFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Good Frames Counter Register: 1E.9044 */
/*                  MSM Line Rx Good Frames Counter Register: 1E.9044 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Good Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9044.F:0 ROS MSM Line Rx Good Frames Counter 0 [F:0]
                        AQ_MsmLineRxGoodFramesCounterRegister_CAL.u0.bits_0.msmLineRxGoodFramesCounter_0

                        Default = 0x0000

                        Rx good frame counter bits 15:0

                 <B>Notes:</B>
                        Count of frames received without error (Including pause frames).  */
      unsigned int   msmLineRxGoodFramesCounter_0 : 16;    /* 1E.9044.F:0  ROS      Default = 0x0000 */
                     /* Rx good frame counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Good Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9045.F:0 ROS MSM Line Rx Good Frames Counter 1 [F:0]
                        AQ_MsmLineRxGoodFramesCounterRegister_CAL.u1.bits_1.msmLineRxGoodFramesCounter_1

                        Default = 0x0000

                        Rx good frame counter bits 31:16

                 <B>Notes:</B>
                        Count of frames received without error (Including pause frames).  */
      unsigned int   msmLineRxGoodFramesCounter_1 : 16;    /* 1E.9045.F:0  ROS      Default = 0x0000 */
                     /* Rx good frame counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxGoodFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx FCS Errors Counter Register: 1E.9048 */
/*                  MSM Line Rx FCS Errors Counter Register: 1E.9048 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx FCS Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9048.F:0 ROS MSM Line FCS Error Counter 0 [F:0]
                        AQ_MsmLineRxFcsErrorsCounterRegister_CAL.u0.bits_0.msmLineFcsErrorCounter_0

                        Default = 0x0000

                        Frame check sequence error counter bits 15:0

                 <B>Notes:</B>
                        Count of frames for which a CRC-32 Error is detected but the frame is otherwise of correct length.  */
      unsigned int   msmLineFcsErrorCounter_0 : 16;    /* 1E.9048.F:0  ROS      Default = 0x0000 */
                     /* Frame check sequence error counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx FCS Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9049.F:0 ROS MSM Line FCS Error Counter 1 [F:0]
                        AQ_MsmLineRxFcsErrorsCounterRegister_CAL.u1.bits_1.msmLineFcsErrorCounter_1

                        Default = 0x0000

                        Frame check sequence error counter bits 31:16

                 <B>Notes:</B>
                        Count of frames for which a CRC-32 Error is detected but the frame is otherwise of correct length.  */
      unsigned int   msmLineFcsErrorCounter_1 : 16;    /* 1E.9049.F:0  ROS      Default = 0x0000 */
                     /* Frame check sequence error counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxFcsErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Alignment Errors Counter Register: 1E.904C */
/*                  MSM Line Rx Alignment Errors Counter Register: 1E.904C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Alignment Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.904C.F:0 ROS MSM Line Alignment Error Counter 0 [F:0]
                        AQ_MsmLineRxAlignmentErrorsCounterRegister_CAL.u0.bits_0.msmLineAlignmentErrorCounter_0

                        Default = 0x0000

                        Alignment error counter bits 15:0

                 <B>Notes:</B>
                        Count of frames received with an alignment error.  */
      unsigned int   msmLineAlignmentErrorCounter_0 : 16;    /* 1E.904C.F:0  ROS      Default = 0x0000 */
                     /* Alignment error counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Alignment Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.904D.F:0 ROS MSM Line Alignment Error Counter 1 [F:0]
                        AQ_MsmLineRxAlignmentErrorsCounterRegister_CAL.u1.bits_1.msmLineAlignmentErrorCounter_1

                        Default = 0x0000

                        Alignment error counter bits 31:16

                 <B>Notes:</B>
                        Count of frames received with an alignment error.  */
      unsigned int   msmLineAlignmentErrorCounter_1 : 16;    /* 1E.904D.F:0  ROS      Default = 0x0000 */
                     /* Alignment error counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxAlignmentErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Tx Pause Frames Counter Register: 1E.9050 */
/*                  MSM Line Tx Pause Frames Counter Register: 1E.9050 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Tx Pause Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9050.F:0 ROS MSM Line Tx Pause Frames Counter 0 [F:0]
                        AQ_MsmLineTxPauseFramesCounterRegister_CAL.u0.bits_0.msmLineTxPauseFramesCounter_0

                        Default = 0x0000

                        Tx pause frame counter bits 15:0

                 <B>Notes:</B>
                        Valid pause frames transmitted.  */
      unsigned int   msmLineTxPauseFramesCounter_0 : 16;    /* 1E.9050.F:0  ROS      Default = 0x0000 */
                     /* Tx pause frame counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Tx Pause Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9051.F:0 ROS MSM Line Tx Pause Frames Counter 1 [F:0]
                        AQ_MsmLineTxPauseFramesCounterRegister_CAL.u1.bits_1.msmLineTxPauseFramesCounter_1

                        Default = 0x0000

                        Tx pause frame counter bits 31:16
                        

                 <B>Notes:</B>
                        Valid pause frames transmitted.  */
      unsigned int   msmLineTxPauseFramesCounter_1 : 16;    /* 1E.9051.F:0  ROS      Default = 0x0000 */
                     /* Tx pause frame counter bits 31:16
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTxPauseFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Pause Frames Counter Register: 1E.9054 */
/*                  MSM Line Rx Pause Frames Counter Register: 1E.9054 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Pause Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9054.F:0 ROS MSM Line Rx Pause Frames Counter 0 [F:0]
                        AQ_MsmLineRxPauseFramesCounterRegister_CAL.u0.bits_0.msmLineRxPauseFramesCounter_0

                        Default = 0x0000

                        Rx pause frame counter bits 15:0

                 <B>Notes:</B>
                        Valid pause frames received.  */
      unsigned int   msmLineRxPauseFramesCounter_0 : 16;    /* 1E.9054.F:0  ROS      Default = 0x0000 */
                     /* Rx pause frame counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Pause Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9055.F:0 ROS MSM Line Rx Pause Frames Counter 1 [F:0]
                        AQ_MsmLineRxPauseFramesCounterRegister_CAL.u1.bits_1.msmLineRxPauseFramesCounter_1

                        Default = 0x0000

                        Rx pause frame counter bits 31:16

                 <B>Notes:</B>
                        Valid pause frames received.  */
      unsigned int   msmLineRxPauseFramesCounter_1 : 16;    /* 1E.9055.F:0  ROS      Default = 0x0000 */
                     /* Rx pause frame counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxPauseFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Too Long Errors Counter Register: 1E.9058 */
/*                  MSM Line Rx Too Long Errors Counter Register: 1E.9058 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Too Long Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9058.F:0 ROS MSM Line Rx Too Long Errors Counter 0 [F:0]
                        AQ_MsmLineRxTooLongErrorsCounterRegister_CAL.u0.bits_0.msmLineRxTooLongErrorsCounter_0

                        Default = 0x0000

                        Too-long errors counter bits 15:0

                 <B>Notes:</B>
                        Frame received exceeded the maximum length programmed with register FRM_LGTH.  */
      unsigned int   msmLineRxTooLongErrorsCounter_0 : 16;    /* 1E.9058.F:0  ROS      Default = 0x0000 */
                     /* Too-long errors counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Too Long Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9059.F:0 ROS MSM Line Rx Too Long Errors Counter 1 [F:0]
                        AQ_MsmLineRxTooLongErrorsCounterRegister_CAL.u1.bits_1.msmLineRxTooLongErrorsCounter_1

                        Default = 0x0000

                        Too-long errors counter bits 31:16

                 <B>Notes:</B>
                        Frame received exceeded the maximum length programmed with register FRM_LGTH.  */
      unsigned int   msmLineRxTooLongErrorsCounter_1 : 16;    /* 1E.9059.F:0  ROS      Default = 0x0000 */
                     /* Too-long errors counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxTooLongErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx In Range Length Errors Counter Register: 1E.905C */
/*                  MSM Line Rx In Range Length Errors Counter Register: 1E.905C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx In Range Length Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.905C.F:0 ROS MSM Line Rx In Range Length Errors Counter 0 [F:0]
                        AQ_MsmLineRxInRangeLengthErrorsCounterRegister_CAL.u0.bits_0.msmLineRxInRangeLengthErrorsCounter_0

                        Default = 0x0000

                        In-range-length errors counter bits 15:0

                 <B>Notes:</B>
                        A count of frames with a length/type field value between 46 (VLAN: 42) and less than 0x0600, that does not match the number of payload data octets received. Should count also if length/type field is less than 46 (VLAN: 42) and the frame is longer than 64 bytes.  */
      unsigned int   msmLineRxInRangeLengthErrorsCounter_0 : 16;    /* 1E.905C.F:0  ROS      Default = 0x0000 */
                     /* In-range-length errors counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx In Range Length Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.905D.F:0 ROS MSM Line Rx In Range Length Errors Counter 1 [F:0]
                        AQ_MsmLineRxInRangeLengthErrorsCounterRegister_CAL.u1.bits_1.msmLineRxInRangeLengthErrorsCounter_1

                        Default = 0x0000

                        In-range-length errors counter bits 31:16

                 <B>Notes:</B>
                        A count of frames with a length/type field value between 46 (VLAN: 42) and less than 0x0600, that does not match the number of payload data octets received. Should count also if length/type field is less than 46 (VLAN: 42) and the frame is longer than 64 bytes.  */
      unsigned int   msmLineRxInRangeLengthErrorsCounter_1 : 16;    /* 1E.905D.F:0  ROS      Default = 0x0000 */
                     /* In-range-length errors counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxInRangeLengthErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Tx VLAN Frames Counter Register: 1E.9060 */
/*                  MSM Line Tx VLAN Frames Counter Register: 1E.9060 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Tx VLAN Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9060.F:0 ROS MSM Line Tx VLAN Frames Counter 0 [F:0]
                        AQ_MsmLineTxVlanFramesCounterRegister_CAL.u0.bits_0.msmLineTxVlanFramesCounter_0

                        Default = 0x0000

                        Tx VLAN frames counter bits 15:0

                 <B>Notes:</B>
                        Valid VLAN tagged frames transmitted.  */
      unsigned int   msmLineTxVlanFramesCounter_0 : 16;    /* 1E.9060.F:0  ROS      Default = 0x0000 */
                     /* Tx VLAN frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Tx VLAN Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9061.F:0 ROS MSM Line Tx VLAN Frames Counter 1 [F:0]
                        AQ_MsmLineTxVlanFramesCounterRegister_CAL.u1.bits_1.msmLineTxVlanFramesCounter_1

                        Default = 0x0000

                        Tx VLAN frames counter bits 31:16

                 <B>Notes:</B>
                        Valid VLAN tagged frames transmitted.  */
      unsigned int   msmLineTxVlanFramesCounter_1 : 16;    /* 1E.9061.F:0  ROS      Default = 0x0000 */
                     /* Tx VLAN frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTxVlanFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx VLAN Frames Counter Register: 1E.9064 */
/*                  MSM Line Rx VLAN Frames Counter Register: 1E.9064 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx VLAN Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9064.F:0 ROS MSM Line Rx VLAN Frames Counter 0 [F:0]
                        AQ_MsmLineRxVlanFramesCounterRegister_CAL.u0.bits_0.msmLineRxVlanFramesCounter_0

                        Default = 0x0000

                        Rx VLAN frames counter bits 15:0

                 <B>Notes:</B>
                        Valid VLAN tagged frames received.  */
      unsigned int   msmLineRxVlanFramesCounter_0 : 16;    /* 1E.9064.F:0  ROS      Default = 0x0000 */
                     /* Rx VLAN frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx VLAN Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9065.F:0 ROS MSM Line Rx VLAN Frames Counter 1 [F:0]
                        AQ_MsmLineRxVlanFramesCounterRegister_CAL.u1.bits_1.msmLineRxVlanFramesCounter_1

                        Default = 0x0000

                        Rx VLAN frames counter bits 31:16

                 <B>Notes:</B>
                        Valid VLAN tagged frames received.  */
      unsigned int   msmLineRxVlanFramesCounter_1 : 16;    /* 1E.9065.F:0  ROS      Default = 0x0000 */
                     /* Rx VLAN frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxVlanFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Tx Octets Counter Register: 1E.9068 */
/*                  MSM Line Tx Octets Counter Register: 1E.9068 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Tx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9068.F:0 ROS MSM Line Tx Octets Counter 0 [F:0]
                        AQ_MsmLineTxOctetsCounterRegister_CAL.u0.bits_0.msmLineTxOctetsCounter_0

                        Default = 0x0000

                        Tx octets counter bits 15:0

                 <B>Notes:</B>
                        All octets transmitted except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames transmitted.  */
      unsigned int   msmLineTxOctetsCounter_0 : 16;    /* 1E.9068.F:0  ROS      Default = 0x0000 */
                     /* Tx octets counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Tx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9069.F:0 ROS MSM Line Tx Octets Counter 1 [F:0]
                        AQ_MsmLineTxOctetsCounterRegister_CAL.u1.bits_1.msmLineTxOctetsCounter_1

                        Default = 0x0000

                        Tx octets counter bits 31:16

                 <B>Notes:</B>
                        All octets transmitted except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames transmitted.  */
      unsigned int   msmLineTxOctetsCounter_1 : 16;    /* 1E.9069.F:0  ROS      Default = 0x0000 */
                     /* Tx octets counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of MSM Line Tx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.906A.F:0 ROS MSM Line Tx Octets Counter 2 [F:0]
                        AQ_MsmLineTxOctetsCounterRegister_CAL.u2.bits_2.msmLineTxOctetsCounter_2

                        Default = 0x0000

                        Tx octets counter bits 47:32

                 <B>Notes:</B>
                        All octets transmitted except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames transmitted.  */
      unsigned int   msmLineTxOctetsCounter_2 : 16;    /* 1E.906A.F:0  ROS      Default = 0x0000 */
                     /* Tx octets counter bits 47:32  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of MSM Line Tx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.906B.F:0 ROS MSM Line Tx Octets Counter 3 [F:0]
                        AQ_MsmLineTxOctetsCounterRegister_CAL.u3.bits_3.msmLineTxOctetsCounter_3

                        Default = 0x0000

                        Tx octets counter bits 63:48

                 <B>Notes:</B>
                        All octets transmitted except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames transmitted.  */
      unsigned int   msmLineTxOctetsCounter_3 : 16;    /* 1E.906B.F:0  ROS      Default = 0x0000 */
                     /* Tx octets counter bits 63:48  */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_MsmLineTxOctetsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Octets Counter Register: 1E.906C */
/*                  MSM Line Rx Octets Counter Register: 1E.906C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.906C.F:0 ROS MSM Line Rx Octets Counter 0 [F:0]
                        AQ_MsmLineRxOctetsCounterRegister_CAL.u0.bits_0.msmLineRxOctetsCounter_0

                        Default = 0x0000

                        Rx octets counter bits 15:0

                 <B>Notes:</B>
                        All octets received except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames received.  */
      unsigned int   msmLineRxOctetsCounter_0 : 16;    /* 1E.906C.F:0  ROS      Default = 0x0000 */
                     /* Rx octets counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Octets Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.906D.F:0 ROS MSM Line Rx Octets Counter 1 [F:0]
                        AQ_MsmLineRxOctetsCounterRegister_CAL.u1.bits_1.msmLineRxOctetsCounter_1

                        Default = 0x0000

                        Rx octets counter bits 31:16

                 <B>Notes:</B>
                        All octets received except preamble (i.e. Header, Payload, Pad and FCS) for all valid frames and valid pause frames received.  */
      unsigned int   msmLineRxOctetsCounter_1 : 16;    /* 1E.906D.F:0  ROS      Default = 0x0000 */
                     /* Rx octets counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxOctetsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Unicast Frames Counter Register: 1E.9070 */
/*                  MSM Line Rx Unicast Frames Counter Register: 1E.9070 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Unicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9070.F:0 ROS MSM Line Rx Unicast Frames Counter 0 [F:0]
                        AQ_MsmLineRxUnicastFramesCounterRegister_CAL.u0.bits_0.msmLineRxUnicastFramesCounter_0

                        Default = 0x0000

                        Rx unicast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface and bit 0 of the destination address was '0'.  */
      unsigned int   msmLineRxUnicastFramesCounter_0 : 16;    /* 1E.9070.F:0  ROS      Default = 0x0000 */
                     /* Rx unicast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Unicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9071.F:0 ROS MSM Line Rx Unicast Frames Counter 1 [F:0]
                        AQ_MsmLineRxUnicastFramesCounterRegister_CAL.u1.bits_1.msmLineRxUnicastFramesCounter_1

                        Default = 0x0000

                        Rx unicast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface and bit 0 of the destination address was '0'.  */
      unsigned int   msmLineRxUnicastFramesCounter_1 : 16;    /* 1E.9071.F:0  ROS      Default = 0x0000 */
                     /* Rx unicast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxUnicastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Multicast Frames Counter Register: 1E.9074 */
/*                  MSM Line Rx Multicast Frames Counter Register: 1E.9074 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Multicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9074.F:0 ROS MSM Line Rx Multicast Frames Counter 0 [F:0]
                        AQ_MsmLineRxMulticastFramesCounterRegister_CAL.u0.bits_0.msmLineRxMulticastFramesCounter_0

                        Default = 0x0000

                        Rx multicast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface and bit 0 of the destination address was '1' but not the broadcast address (all bits set '1' ). Pause frames are not counted.  */
      unsigned int   msmLineRxMulticastFramesCounter_0 : 16;    /* 1E.9074.F:0  ROS      Default = 0x0000 */
                     /* Rx multicast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Multicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9075.F:0 ROS MSM Line Rx Multicast Frames Counter 1 [F:0]
                        AQ_MsmLineRxMulticastFramesCounterRegister_CAL.u1.bits_1.msmLineRxMulticastFramesCounter_1

                        Default = 0x0000

                        Rx multicast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface and bit 0 of the destination address was '1' but not the broadcast address (all bits set '1' ). Pause frames are not counted.  */
      unsigned int   msmLineRxMulticastFramesCounter_1 : 16;    /* 1E.9075.F:0  ROS      Default = 0x0000 */
                     /* Rx multicast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxMulticastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Broadcast Frames Counter Register: 1E.9078 */
/*                  MSM Line Rx Broadcast Frames Counter Register: 1E.9078 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Broadcast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9078.F:0 ROS MSM Line Rx Broadcast Frames Counter 0 [F:0]
                        AQ_MsmLineRxBroadcastFramesCounterRegister_CAL.u0.bits_0.msmLineRxBroadcastFramesCounter_0

                        Default = 0x0000

                        Rx broadcast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface (FIFO) and all bits of the destination address were set '1'.  */
      unsigned int   msmLineRxBroadcastFramesCounter_0 : 16;    /* 1E.9078.F:0  ROS      Default = 0x0000 */
                     /* Rx broadcast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Broadcast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9079.F:0 ROS MSM Line Rx Broadcast Frames Counter 1 [F:0]
                        AQ_MsmLineRxBroadcastFramesCounterRegister_CAL.u1.bits_1.msmLineRxBroadcastFramesCounter_1

                        Default = 0x0000

                        Rx broadcast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each valid frame received on the receive FIFO interface (FIFO) and all bits of the destination address were set '1'.  */
      unsigned int   msmLineRxBroadcastFramesCounter_1 : 16;    /* 1E.9079.F:0  ROS      Default = 0x0000 */
                     /* Rx broadcast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxBroadcastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Tx Errors Counter Register: 1E.907C */
/*                  MSM Line Tx Errors Counter Register: 1E.907C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Tx Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.907C.F:0 ROS MSM Line Tx Errors Counter 0 [F:0]
                        AQ_MsmLineTxErrorsCounterRegister_CAL.u0.bits_0.msmLineTxErrorsCounter_0

                        Default = 0x0000

                        Rx errors counter bits 15:0

                 <B>Notes:</B>
                        Number of frames transmitted with error: 
                        - FIFO Overflow Errors
                        - FIFO Underflow Errors  */
      unsigned int   msmLineTxErrorsCounter_0 : 16;    /* 1E.907C.F:0  ROS      Default = 0x0000 */
                     /* Rx errors counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Tx Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.907D.F:0 ROS MSM Line Tx Errors Counter 1 [F:0]
                        AQ_MsmLineTxErrorsCounterRegister_CAL.u1.bits_1.msmLineTxErrorsCounter_1

                        Default = 0x0000

                        Tx errors counter bits 31:16

                 <B>Notes:</B>
                        Number of frames transmitted with error: 
                        - FIFO Overflow Errors
                        - FIFO Underflow Errors  */
      unsigned int   msmLineTxErrorsCounter_1 : 16;    /* 1E.907D.F:0  ROS      Default = 0x0000 */
                     /* Tx errors counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTxErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Tx Unicast Frames Counter Register: 1E.9084 */
/*                  MSM Line Tx Unicast Frames Counter Register: 1E.9084 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Tx Unicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9084.F:0 ROS MSM Line Tx Unicast Frames Counter 0 [F:0]
                        AQ_MsmLineTxUnicastFramesCounterRegister_CAL.u0.bits_0.msmLineTxUnicastFramesCounter_0

                        Default = 0x0000

                        Tx unicast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and bit 0 of the destination address set to '0'.  */
      unsigned int   msmLineTxUnicastFramesCounter_0 : 16;    /* 1E.9084.F:0  ROS      Default = 0x0000 */
                     /* Tx unicast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Tx Unicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9085.F:0 ROS MSM Line Tx Unicast Frames Counter 1 [F:0]
                        AQ_MsmLineTxUnicastFramesCounterRegister_CAL.u1.bits_1.msmLineTxUnicastFramesCounter_1

                        Default = 0x0000

                        Tx unicast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and bit 0 of the destination address set to '0'.  */
      unsigned int   msmLineTxUnicastFramesCounter_1 : 16;    /* 1E.9085.F:0  ROS      Default = 0x0000 */
                     /* Tx unicast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTxUnicastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Tx Multicast Frames Counter Register: 1E.9088 */
/*                  MSM Line Tx Multicast Frames Counter Register: 1E.9088 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Tx Multicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9088.F:0 ROS MSM Line Tx Multicast Frames Counter 0 [F:0]
                        AQ_MsmLineTxMulticastFramesCounterRegister_CAL.u0.bits_0.msmLineTxMulticastFramesCounter_0

                        Default = 0x0000

                        Tx multicast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and bit 0 of the destination address set to '1' but not the broadcast address (all bits '1').  */
      unsigned int   msmLineTxMulticastFramesCounter_0 : 16;    /* 1E.9088.F:0  ROS      Default = 0x0000 */
                     /* Tx multicast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Tx Multicast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.9089.F:0 ROS MSM Line Tx Multicast Frames Counter 1 [F:0]
                        AQ_MsmLineTxMulticastFramesCounterRegister_CAL.u1.bits_1.msmLineTxMulticastFramesCounter_1

                        Default = 0x0000

                        Tx multicast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and bit 0 of the destination address set to '1' but not the broadcast address (all bits '1').  */
      unsigned int   msmLineTxMulticastFramesCounter_1 : 16;    /* 1E.9089.F:0  ROS      Default = 0x0000 */
                     /* Tx multicast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTxMulticastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Tx Broadcast Frames Counter Register: 1E.908C */
/*                  MSM Line Tx Broadcast Frames Counter Register: 1E.908C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Tx Broadcast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.908C.F:0 ROS MSM Line Tx Broadcast Frames Counter 0 [F:0]
                        AQ_MsmLineTxBroadcastFramesCounterRegister_CAL.u0.bits_0.msmLineTxBroadcastFramesCounter_0

                        Default = 0x0000

                        Tx broadcast frames counter bits 15:0

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and all bits of the destination address set to '1'.  */
      unsigned int   msmLineTxBroadcastFramesCounter_0 : 16;    /* 1E.908C.F:0  ROS      Default = 0x0000 */
                     /* Tx broadcast frames counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Tx Broadcast Frames Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.908D.F:0 ROS MSM Line Tx Broadcast Frames Counter 1 [F:0]
                        AQ_MsmLineTxBroadcastFramesCounterRegister_CAL.u1.bits_1.msmLineTxBroadcastFramesCounter_1

                        Default = 0x0000

                        Tx broadcast frames counter bits 31:16

                 <B>Notes:</B>
                        Incremented with each frame written to the FIFO interface and all bits of the destination address set to '1'.  */
      unsigned int   msmLineTxBroadcastFramesCounter_1 : 16;    /* 1E.908D.F:0  ROS      Default = 0x0000 */
                     /* Tx broadcast frames counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineTxBroadcastFramesCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line Rx Errors Counter Register: 1E.90C8 */
/*                  MSM Line Rx Errors Counter Register: 1E.90C8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line Rx Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.90C8.F:0 ROS MSM Line Rx Errors Counter 0 [F:0]
                        AQ_MsmLineRxErrorsCounterRegister_CAL.u0.bits_0.msmLineRxErrorsCounter_0

                        Default = 0x0000

                        Rx errors counter bits 15:0

                 <B>Notes:</B>
                        Number of frames received with error: 
                        - FIFO Overflow Errors
                        - CRC Errors
                        - Payload Length Errors
                        - Jabber and Oversized Errors
                        - Alignment Errors
                        - The dedicated Error Code (0xfe, not a code error) was received  */
      unsigned int   msmLineRxErrorsCounter_0 : 16;    /* 1E.90C8.F:0  ROS      Default = 0x0000 */
                     /* Rx errors counter bits 15:0  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line Rx Errors Counter Register */
  union
  {
    struct
    {
                    /*! \brief 1E.90C9.F:0 ROS MSM Line Rx Errors Counter 1 [F:0]
                        AQ_MsmLineRxErrorsCounterRegister_CAL.u1.bits_1.msmLineRxErrorsCounter_1

                        Default = 0x0000

                        Rx errors counter bits 31:16

                 <B>Notes:</B>
                        Number of frames received with error: 
                        - FIFO Overflow Errors
                        - CRC Errors
                        - Payload Length Errors
                        - Jabber and Oversized Errors
                        - Alignment Errors
                        - The dedicated Error Code (0xfe, not a code error) was received  */
      unsigned int   msmLineRxErrorsCounter_1 : 16;    /* 1E.90C9.F:0  ROS      Default = 0x0000 */
                     /* Rx errors counter bits 31:16  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineRxErrorsCounterRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line SGMII Control Register: 1E.9180 */
/*                  MSM Line SGMII Control Register: 1E.9180 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line SGMII Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 6;
                    /*! \brief 1E.9180.6 ROS MSM Line SGMII Speed Selection 1
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiSpeedSelection_1

                        Default = 0x0

                        1 = The PCS only operates in Gigabit mode (IFF bit D is 0).

                 <B>Notes:</B>
                        Combined with bit D.  */
      unsigned int   msmLineSgmiiSpeedSelection_1 : 1;    /* 1E.9180.6  ROS      Default = 0x0 */
                     /* 1 = The PCS only operates in Gigabit mode (IFF bit D is 0).  */
                    /*! \brief 1E.9180.7 ROS MSM Line SGMII Collision Test
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiCollisionTest

                        Default = 0x0

                        Half duplex not supported by the PCS, read only bit set to 0.
  */
      unsigned int   msmLineSgmiiCollisionTest : 1;    /* 1E.9180.7  ROS      Default = 0x0 */
                     /* Half duplex not supported by the PCS, read only bit set to 0.  */
                    /*! \brief 1E.9180.8 ROS MSM Line SGMII Duplex Mode
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiDuplexMode

                        Default = 0x0

                        Read only bit always set to 1 to indication that the PCS only supports Full Duplex mode of operation and does not support Half Duplex mode of operation.
  */
      unsigned int   msmLineSgmiiDuplexMode : 1;    /* 1E.9180.8  ROS      Default = 0x0 */
                     /* Read only bit always set to 1 to indication that the PCS only supports Full Duplex mode of operation and does not support Half Duplex mode of operation.  */
                    /*! \brief 1E.9180.9 R/W MSM Line SGMII Restart Autonegotiation
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiRestartAutonegotiation

                        Default = 0x0

                        1 = Restart an autonegotiation serquence.
                        0 = Normal operation

                 <B>Notes:</B>
                        Self-clearing command bit  */
      unsigned int   msmLineSgmiiRestartAutonegotiation : 1;    /* 1E.9180.9  R/W      Default = 0x0 */
                     /* 1 = Restart an autonegotiation serquence.
                        0 = Normal operation  */
                    /*! \brief 1E.9180.A R/W MSM Line SGMII Isolate
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiIsolate

                        Default = 0x0

                        1 = The PCS is isolated from the MAC Layer device.
                        0 = Normal operation

                 <B>Notes:</B>
                        When set, keeps the PCS in reset (equals bit15=1 permanently).  */
      unsigned int   msmLineSgmiiIsolate : 1;    /* 1E.9180.A  R/W      Default = 0x0 */
                     /* 1 = The PCS is isolated from the MAC Layer device.
                        0 = Normal operation  */
                    /*! \brief 1E.9180.B R/W MSM Line SGMII Power Down
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiPowerDown

                        Default = 0x0

                        Setting not relevant, function not used.
  */
      unsigned int   msmLineSgmiiPowerDown : 1;    /* 1E.9180.B  R/W      Default = 0x0 */
                     /* Setting not relevant, function not used.  */
                    /*! \brief 1E.9180.C R/W MSM Line SGMII Autonegotation Enable
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiAutonegotationEnable

                        Default = 0x1

                        1 = Autonegotiation enabled.
                        0 = Autonegotiation disabled.
  */
      unsigned int   msmLineSgmiiAutonegotationEnable : 1;    /* 1E.9180.C  R/W      Default = 0x1 */
                     /* 1 = Autonegotiation enabled.
                        0 = Autonegotiation disabled.  */
                    /*! \brief 1E.9180.D ROS MSM Line SGMII Speed Selection 2
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiSpeedSelection_2

                        Default = 0x0

                        0 = The PCS only operates in Gigabit mode (IFF bit 6 is 1).

                 <B>Notes:</B>
                        Combined with bit 6.  */
      unsigned int   msmLineSgmiiSpeedSelection_2 : 1;    /* 1E.9180.D  ROS      Default = 0x0 */
                     /* 0 = The PCS only operates in Gigabit mode (IFF bit 6 is 1).  */
                    /*! \brief 1E.9180.E R/W MSM Line SGMII Loopback
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiLoopback

                        Default = 0x0

                        Setting not relevant, function not used.
  */
      unsigned int   msmLineSgmiiLoopback : 1;    /* 1E.9180.E  R/W      Default = 0x0 */
                     /* Setting not relevant, function not used.  */
                    /*! \brief 1E.9180.F R/WSC MSM Line SGMII Reset
                        AQ_MsmLineSgmiiControlRegister_CAL.u0.bits_0.msmLineSgmiiReset

                        Default = 0x0

                        1 = A synchronous reset pulse is generated which resets all the PCS state machines, the Comma detection function and the 8b/10b coder / decoder.
                        0 = Normal operation.

                 <B>Notes:</B>
                        Self-Clearing Reset Command Register.  */
      unsigned int   msmLineSgmiiReset : 1;    /* 1E.9180.F  R/WSC      Default = 0x0 */
                     /* 1 = A synchronous reset pulse is generated which resets all the PCS state machines, the Comma detection function and the 8b/10b coder / decoder.
                        0 = Normal operation.  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line SGMII Control Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineSgmiiControlRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                MSM Line SGMII IF MODE Register: 1E.91A8 */
/*                  MSM Line SGMII IF MODE Register: 1E.91A8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of MSM Line SGMII IF MODE Register */
  union
  {
    struct
    {
                    /*! \brief 1E.91A8.0 R/W MSM Line SGMII Enable
                        AQ_MsmLineSgmiiIfModeRegister_CAL.u0.bits_0.msmLineSgmiiEnable

                        Default = 0x0

                        0 = The PCS operates in standard 1000Base-X Gigabit mode.
                        1 = The PCS operates in SGMII Mode.

                 <B>Notes:</B>
                        If the bit is '0' the bits 1..4 of this register are ignored.  */
      unsigned int   msmLineSgmiiEnable : 1;    /* 1E.91A8.0  R/W      Default = 0x0 */
                     /* 0 = The PCS operates in standard 1000Base-X Gigabit mode.
                        1 = The PCS operates in SGMII Mode.  */
                    /*! \brief 1E.91A8.1 R/W MSM Line Use SGMII Autonegotiation
                        AQ_MsmLineSgmiiIfModeRegister_CAL.u0.bits_0.msmLineUseSgmiiAutonegotiation

                        Default = 0x0

                        Use the SGMII Auto-Negotiation Results to Program the PCS/MAC Speed.
                        0 = The PCS operation should be programmed with the register bits SGMII_SPEED and SGMII_DUPLEX.
                        1 = The PCS operation is automatically set according to the Partner abilities advertised during Auto-Negotiation.

                 <B>Notes:</B>
                        Ignored when SGMII_ENA is set to '0'.  */
      unsigned int   msmLineUseSgmiiAutonegotiation : 1;    /* 1E.91A8.1  R/W      Default = 0x0 */
                     /* Use the SGMII Auto-Negotiation Results to Program the PCS/MAC Speed.
                        0 = The PCS operation should be programmed with the register bits SGMII_SPEED and SGMII_DUPLEX.
                        1 = The PCS operation is automatically set according to the Partner abilities advertised during Auto-Negotiation.  */
                    /*! \brief 1E.91A8.3:2 R/W MSM Line SGMII Speed[1:0]
                        AQ_MsmLineSgmiiIfModeRegister_CAL.u0.bits_0.msmLineSgmiiSpeed

                        Default = 0x0

                        When the PCS operates in SGMII mode (SGMII_ENA set to '1') and when the PCS is programmed not to be automatically configured (USE_SGMII_AN set to '0'), sets the PCS speed of operation.
                        
                        0 = 10 Mbps
                        1 = 100 Mbps
                        2 = 1 Gbps
                        3 = Reserved

                 <B>Notes:</B>
                        Bits ignored when SGMII_ENA=0 or USE_SGMII_AN=1.  */
      unsigned int   msmLineSgmiiSpeed : 2;    /* 1E.91A8.3:2  R/W      Default = 0x0 */
                     /* When the PCS operates in SGMII mode (SGMII_ENA set to '1') and when the PCS is programmed not to be automatically configured (USE_SGMII_AN set to '0'), sets the PCS speed of operation.
                        
                        0 = 10 Mbps
                        1 = 100 Mbps
                        2 = 1 Gbps
                        3 = Reserved  */
                    /*! \brief 1E.91A8.4 R/W MSM Line SGMII Half Duplex
                        AQ_MsmLineSgmiiIfModeRegister_CAL.u0.bits_0.msmLineSgmiiHalfDuplex

                        Default = 0x0

                        1 = Half Duplex enabled.
                        0 = Full Duplex enabled.

                 <B>Notes:</B>
                        Halfduplex is not supported in this implementation. This bit setting has no effect.  */
      unsigned int   msmLineSgmiiHalfDuplex : 1;    /* 1E.91A8.4  R/W      Default = 0x0 */
                     /* 1 = Half Duplex enabled.
                        0 = Full Duplex enabled.  */
                    /*! \brief 1E.91A8.5 R/W MSM Line SGMII PCS Enable
                        AQ_MsmLineSgmiiIfModeRegister_CAL.u0.bits_0.msmLineSgmiiPcsEnable

                        Default = 0x0

                        Enable SGMII/1000Base-X PCS instead of XGMII for the 10G MAC.
                        1 = The SGMII PCS layer becomes active and the MAC is configured for 1G mode of operation.
                        0 = The MAC operates in 10G mode with an XGMII.

                 <B>Notes:</B>
                        The other bits in this register have no meaning if this bit is not set.
                        
                        This bit only configures the datapath within the combined MAC and PCS layers. It does not change the PMA/SERDES module, externally to the core. This must be controlled elsewhere to adapt the correct interface width (10-bit) and speed (125MHz).
                        
                        After setting this bit=1, a PCS soft reset should be performed by writing bit15 of the PCS CONTROL register.  */
      unsigned int   msmLineSgmiiPcsEnable : 1;    /* 1E.91A8.5  R/W      Default = 0x0 */
                     /* Enable SGMII/1000Base-X PCS instead of XGMII for the 10G MAC.
                        1 = The SGMII PCS layer becomes active and the MAC is configured for 1G mode of operation.
                        0 = The MAC operates in 10G mode with an XGMII.  */
      unsigned int   reserved0 : 10;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of MSM Line SGMII IF MODE Register */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_MsmLineSgmiiIfModeRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Control: 1E.C000 */
/*                  Global Control: 1E.C000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C001.0 R/W uP Run Stall
                        AQ_GlobalControl_CAL.u1.bits_1.upRunStall

                        Default = 0x0

                        1 = uP Run Stall
                        0 = uP normal mode
                        

                 <B>Notes:</B>
                        Deactivates the uP.  */
      unsigned int   upRunStall : 1;    /* 1E.C001.0  R/W      Default = 0x0 */
                     /* 1 = uP Run Stall
                        0 = uP normal mode
                          */
      unsigned int   reserved1 : 5;
                    /*! \brief 1E.C001.6 R/W uP Run Stall Override
                        AQ_GlobalControl_CAL.u1.bits_1.upRunStallOverride

                        Default = 0x0

                        0 = uP Run Stall from "MDIO Boot Load" pin.
                        1 = uP Run Stall from  See MCP Run Stall bit
                        
                        

                 <B>Notes:</B>
                        This bit selects the uP Run Stall from either the "MDIO Boot Load" pin or the  See MCP Run Stall bit. Pin no longer brought out as deprecated.  */
      unsigned int   upRunStallOverride : 1;    /* 1E.C001.6  R/W      Default = 0x0 */
                     /* 0 = uP Run Stall from "MDIO Boot Load" pin.
                        1 = uP Run Stall from  See MCP Run Stall bit
                        
                          */
      unsigned int   reserved0 : 8;
                    /*! \brief 1E.C001.F R/W uP Reset
                        AQ_GlobalControl_CAL.u1.bits_1.upReset

                        Default = 0x0

                        1 = Reset
                        

                 <B>Notes:</B>
                        Resets the uP and the PIF master and slave bus. Will be active for a minimum of 100 microseconds.  */
      unsigned int   upReset : 1;    /* 1E.C001.F  R/W      Default = 0x0 */
                     /* 1 = Reset
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Reset Control: 1E.C006 */
/*                  Global Reset Control: 1E.C006 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Reset Control */
  union
  {
    struct
    {
      unsigned int   reserved1 : 14;
                    /*! \brief 1E.C006.E R/WPD Global MMD Reset Disable
                        AQ_GlobalResetControl_CAL.u0.bits_0.globalMMD_ResetDisable

                        Provisionable Default = 0x0

                        1 = Disable the S/W reset to the Global MMD registers
                        0 = Enable the S/W reset to the Global MMD registers
                        

                 <B>Notes:</B>
                        Setting this bit prevents a Global S/W reset or Global S/W reset from resetting the Global MMD registers  */
      unsigned int   globalMMD_ResetDisable : 1;    /* 1E.C006.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable the S/W reset to the Global MMD registers
                        0 = Enable the S/W reset to the Global MMD registers
                          */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalResetControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Diagnostic Provisioning: 1E.C400 */
/*                  Global Diagnostic Provisioning: 1E.C400 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Diagnostic Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 1E.C400.F R/WPD Enable Diagnostics
                        AQ_GlobalDiagnosticProvisioning_CAL.u0.bits_0.enableDiagnostics

                        Provisionable Default = 0x1

                        1 = Chip performs diagnostics on power-up
  */
      unsigned int   enableDiagnostics : 1;    /* 1E.C400.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Chip performs diagnostics on power-up  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalDiagnosticProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Thermal Provisioning: 1E.C420 */
/*                  Global Thermal Provisioning: 1E.C420 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C420.F:0 R/WPD Reserved 0 [F:0]
                        AQ_GlobalThermalProvisioning_CAL.u0.bits_0.reserved_0

                        Provisionable Default = 0x0000

                        Internal reserved - do not modify
                        
  */
      unsigned int   reserved_0 : 16;    /* 1E.C420.F:0  R/WPD      Provisionable Default = 0x0000 */
                     /* Internal reserved - do not modify
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C421.F:0 R/WPD High Temp Failure Threshold [F:0]
                        AQ_GlobalThermalProvisioning_CAL.u1.bits_1.highTempFailureThreshold

                        Provisionable Default = 0x4600

                        [F:0] of high temperature failure threshold

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD800. Default is 70 degreesC. 
                        
                        In XENPAK mode, F/W will use the XENPAK register 1.A000 - 1.A001: instead of this register.
                        
                        NOTE! All Thresholds are orthogonal and can be set to any value regardless the value of the other thresholds. i.e. High-Temperature-Warning (1E.C423) could be higher than High-Temperature-Failure (1E.C421).  */
      unsigned int   highTempFailureThreshold : 16;    /* 1E.C421.F:0  R/WPD      Provisionable Default = 0x4600 */
                     /* [F:0] of high temperature failure threshold  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C422.F:0 R/WPD Low Temp Failure Threshold [F:0]
                        AQ_GlobalThermalProvisioning_CAL.u2.bits_2.lowTempFailureThreshold

                        Provisionable Default = 0x0000

                        [F:0] of low temperature failure threshold

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD800. Default is 0 degreesC. 
                        
                        In XENPAK mode, F/W will use the XENPAK register 1.A002 - 1.A003: instead of this register.
                        
                        NOTE! All Thresholds are orthogonal and can be set to any value regardless the value of the other thresholds. i.e. High-Temperature-Warning (1E.C423) could be higher than High-Temperature-Failure (1E.C421).  */
      unsigned int   lowTempFailureThreshold : 16;    /* 1E.C422.F:0  R/WPD      Provisionable Default = 0x0000 */
                     /* [F:0] of low temperature failure threshold  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C423.F:0 R/WPD High Temp Warning Threshold [F:0]
                        AQ_GlobalThermalProvisioning_CAL.u3.bits_3.highTempWarningThreshold

                        Provisionable Default = 0x3C00

                        [F:0] of high temperature warning threshold

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD008. Default is 60 degreesC. 
                        
                        In XENPAK mode, F/W will use the XENPAK register 1.A004 - 1.A005: instead of this register.
                        
                        NOTE! All Thresholds are orthogonal and can be set to any value regardless the value of the other thresholds. i.e. High-Temperature-Warning (1E.C423) could be higher than High-Temperature-Failure (1E.C421).  */
      unsigned int   highTempWarningThreshold : 16;    /* 1E.C423.F:0  R/WPD      Provisionable Default = 0x3C00 */
                     /* [F:0] of high temperature warning threshold  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C424.F:0 R/WPD Low Temp Warning Threshold [F:0]
                        AQ_GlobalThermalProvisioning_CAL.u4.bits_4.lowTempWarningThreshold

                        Provisionable Default = 0x0A00

                        [F:0] of low temperature warning threshold

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD800. Default is 10 degreesC. 
                        
                        In XENPAK mode, F/W will use the XENPAK register 1.A006 - 1.A007: instead of this register.
                        
                        NOTE! All Thresholds are orthogonal and can be set to any value regardless the value of the other thresholds. i.e. High-Temperature-Warning (1E.C423) could be higher than High-Temperature-Failure (1E.C421).  */
      unsigned int   lowTempWarningThreshold : 16;    /* 1E.C424.F:0  R/WPD      Provisionable Default = 0x0A00 */
                     /* [F:0] of low temperature warning threshold  */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_GlobalThermalProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Cisco LED Provisioning: 1E.C425 */
/*                  Cisco LED Provisioning: 1E.C425 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C425.6:0 R/WPD LED Timer Off Duration 0 [6:0]
                        AQ_CiscoLedProvisioning_CAL.u0.bits_0.ledTimerOffDuration_0

                        Provisionable Default = 0x00

                        LED Off Duration 0
                        

                 <B>Notes:</B>
                        Duration of turning off in the first period of LED timer (in unit of 21ms)  */
      unsigned int   ledTimerOffDuration_0 : 7;    /* 1E.C425.6:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Off Duration 0
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C425.E:8 R/WPD LED Timer On Duration 0 [6:0]
                        AQ_CiscoLedProvisioning_CAL.u0.bits_0.ledTimerOnDuration_0

                        Provisionable Default = 0x00

                        LED On Duration 0
                        

                 <B>Notes:</B>
                        Duration of turning on in the first period of LED timer (in unit of 21ms)  */
      unsigned int   ledTimerOnDuration_0 : 7;    /* 1E.C425.E:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED On Duration 0
                          */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C426.6:0 R/WPD LED Timer Off Duration 1 [6:0]
                        AQ_CiscoLedProvisioning_CAL.u1.bits_1.ledTimerOffDuration_1

                        Provisionable Default = 0x00

                        LED Off Duration 1
                        

                 <B>Notes:</B>
                        Duration of turning off in the second period of LED timer (in unit of 21ms)  */
      unsigned int   ledTimerOffDuration_1 : 7;    /* 1E.C426.6:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Off Duration 1
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C426.E:8 R/WPD LED Timer On Duration 1 [6:0]
                        AQ_CiscoLedProvisioning_CAL.u1.bits_1.ledTimerOnDuration_1

                        Provisionable Default = 0x00

                        LED On Duration 1
                        

                 <B>Notes:</B>
                        Duration of turning on in the second period of LED timer (in unit of 21ms)  */
      unsigned int   ledTimerOnDuration_1 : 7;    /* 1E.C426.E:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED On Duration 1
                          */
      unsigned int   reserved0 : 1;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C427.2:0 R/WPD LED#0 Mode [2:0]
                        AQ_CiscoLedProvisioning_CAL.u2.bits_2.led_0Mode

                        Provisionable Default = 0x0

                        0 = Always off
                        1 = Always on
                        2 = Timer off (Durations 0 & 1)
                        3 = Timer on (Durations 0 & 1)
                        4 = Timer off (Duration 0)
                        5 = Timer on (Duration 0)
                        6 = Timer off (Duration 1)
                        7 = Timer on (Duration 1)
                        

                 <B>Notes:</B>
                        Configures when to turn on LED #0.  */
      unsigned int   led_0Mode : 3;    /* 1E.C427.2:0  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = Always off
                        1 = Always on
                        2 = Timer off (Durations 0 & 1)
                        3 = Timer on (Durations 0 & 1)
                        4 = Timer off (Duration 0)
                        5 = Timer on (Duration 0)
                        6 = Timer off (Duration 1)
                        7 = Timer on (Duration 1)
                          */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.C427.6:4 R/WPD LED#1 Mode [2:0]
                        AQ_CiscoLedProvisioning_CAL.u2.bits_2.led_1Mode

                        Provisionable Default = 0x0

                        0 = Always off
                        1 = Always on
                        2 = Timer off (Durations 0 & 1)
                        3 = Timer on (Durations 0 & 1)
                        4 = Timer off (Duration 0)
                        5 = Timer on (Duration 0)
                        6 = Timer off (Duration 1)
                        7 = Timer on (Duration 1)
                        

                 <B>Notes:</B>
                        Configures when to turn on LED #1.  */
      unsigned int   led_1Mode : 3;    /* 1E.C427.6:4  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = Always off
                        1 = Always on
                        2 = Timer off (Durations 0 & 1)
                        3 = Timer on (Durations 0 & 1)
                        4 = Timer off (Duration 0)
                        5 = Timer on (Duration 0)
                        6 = Timer off (Duration 1)
                        7 = Timer on (Duration 1)
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C427.9:8 R/WPD LED Link Activity Mode [1:0]
                        AQ_CiscoLedProvisioning_CAL.u2.bits_2.ledLinkActivityMode

                        Provisionable Default = 0x0

                        0 = No link activity
                        1 = Rx link activity
                        2 = Tx link activity
                        3 = Both Rx & Tx link activities
                        

                 <B>Notes:</B>
                        Selects the type of link activity for LED blinking. When it is set to 0, timer is configured by on/off duration registers. Otherwise, timer duration is configured by the link activity LUT.  */
      unsigned int   ledLinkActivityMode : 2;    /* 1E.C427.9:8  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = No link activity
                        1 = Rx link activity
                        2 = Tx link activity
                        3 = Both Rx & Tx link activities
                          */
      unsigned int   reserved0 : 6;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C428.5:0 R/WPD LED Link Activity LUT 1 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u3.bits_3.ledLinkActivityLut_1

                        Provisionable Default = 0x00

                        LED Link Activity LUT 1
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 0, but smaller than 10 in a one-second period   */
      unsigned int   ledLinkActivityLut_1 : 6;    /* 1E.C428.5:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 1
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C428.D:8 R/WPD LED Link Activity LUT 0 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u3.bits_3.ledLinkActivityLut_0

                        Provisionable Default = 0x00

                        LED Link Activity LUT 0
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is equal to 0 in a one-second period.   */
      unsigned int   ledLinkActivityLut_0 : 6;    /* 1E.C428.D:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 0
                          */
      unsigned int   reserved0 : 2;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C429.5:0 R/WPD LED Link Activity LUT 3 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u4.bits_4.ledLinkActivityLut_3

                        Provisionable Default = 0x00

                        LED Link Activity LUT 3
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 100, but smaller than 500 in a one-second period   */
      unsigned int   ledLinkActivityLut_3 : 6;    /* 1E.C429.5:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 3
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C429.D:8 R/WPD LED Link Activity LUT 2 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u4.bits_4.ledLinkActivityLut_2

                        Provisionable Default = 0x00

                        LED Link Activity LUT 2
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 10, but smaller than 100 in a one-second period   */
      unsigned int   ledLinkActivityLut_2 : 6;    /* 1E.C429.D:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 2
                          */
      unsigned int   reserved0 : 2;
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C42A.5:0 R/WPD LED Link Activity LUT 5 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u5.bits_5.ledLinkActivityLut_5

                        Provisionable Default = 0x00

                        LED Link Activity LUT 5
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 1000, but smaller than 5000 in a one-second period   */
      unsigned int   ledLinkActivityLut_5 : 6;    /* 1E.C42A.5:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 5
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C42A.D:8 R/WPD LED Link Activity LUT 4 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u5.bits_5.ledLinkActivityLut_4

                        Provisionable Default = 0x00

                        LED Link Activity LUT 4
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 500, but smaller than 1000 in a one-second period   */
      unsigned int   ledLinkActivityLut_4 : 6;    /* 1E.C42A.D:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 4
                          */
      unsigned int   reserved0 : 2;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C42B.5:0 R/WPD LED Link Activity LUT 7 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u6.bits_6.ledLinkActivityLut_7

                        Provisionable Default = 0x00

                        LED Link Activity LUT 7
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 1x104, but smaller than 5x104 in a one-second period   */
      unsigned int   ledLinkActivityLut_7 : 6;    /* 1E.C42B.5:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 7
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C42B.D:8 R/WPD LED Link Activity LUT 6 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u6.bits_6.ledLinkActivityLut_6

                        Provisionable Default = 0x00

                        LED Link Activity LUT 6
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 5x103, but smaller than 1x104 in a one-second period   */
      unsigned int   ledLinkActivityLut_6 : 6;    /* 1E.C42B.D:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 6
                          */
      unsigned int   reserved0 : 2;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C42C.5:0 R/WPD LED Link Activity LUT 9 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u7.bits_7.ledLinkActivityLut_9

                        Provisionable Default = 0x00

                        LED Link Activity LUT 9
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 1x105, but smaller than 5x105 in a one-second period   */
      unsigned int   ledLinkActivityLut_9 : 6;    /* 1E.C42C.5:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 9
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C42C.D:8 R/WPD LED Link Activity LUT 8 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u7.bits_7.ledLinkActivityLut_8

                        Provisionable Default = 0x00

                        LED Link Activity LUT 8
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 5x104, but smaller than 1x105 in a one-second period   */
      unsigned int   ledLinkActivityLut_8 : 6;    /* 1E.C42C.D:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 8
                          */
      unsigned int   reserved0 : 2;
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C42D.5:0 R/WPD LED Link Activity LUT 11 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u8.bits_8.ledLinkActivityLut_11

                        Provisionable Default = 0x00

                        LED Link Activity LUT 11
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 1x106, but smaller than 5x106 in a one-second period   */
      unsigned int   ledLinkActivityLut_11 : 6;    /* 1E.C42D.5:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 11
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C42D.D:8 R/WPD LED Link Activity LUT 10 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u8.bits_8.ledLinkActivityLut_10

                        Provisionable Default = 0x00

                        LED Link Activity LUT 10
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 5x105, but smaller than 1x106 in a one-second period   */
      unsigned int   ledLinkActivityLut_10 : 6;    /* 1E.C42D.D:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 10
                          */
      unsigned int   reserved0 : 2;
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of Cisco LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C42E.5:0 R/WPD LED Link Activity LUT 13 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u9.bits_9.ledLinkActivityLut_13

                        Provisionable Default = 0x00

                        LED Link Activity LUT 13
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 1x107, but smaller than 5x107 in a one-second period   */
      unsigned int   ledLinkActivityLut_13 : 6;    /* 1E.C42E.5:0  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 13
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C42E.D:8 R/WPD LED Link Activity LUT 12 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u9.bits_9.ledLinkActivityLut_12

                        Provisionable Default = 0x00

                        LED Link Activity LUT 12
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 5x106, but smaller than 1x107 in a one-second period   */
      unsigned int   ledLinkActivityLut_12 : 6;    /* 1E.C42E.D:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 12
                          */
      unsigned int   reserved0 : 2;
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of Cisco LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 8;
                    /*! \brief 1E.C42F.D:8 R/WPD LED Link Activity LUT 14 [5:0]
                        AQ_CiscoLedProvisioning_CAL.u10.bits_10.ledLinkActivityLut_14

                        Provisionable Default = 0x00

                        LED Link Activity LUT 14
                        

                 <B>Notes:</B>
                        Duration of turning on LED timer (in unit of 21ms) when the packet count is greater than 5x107 in a one-second period   */
      unsigned int   ledLinkActivityLut_14 : 6;    /* 1E.C42F.D:8  R/WPD      Provisionable Default = 0x00 */
                     /* LED Link Activity LUT 14
                          */
      unsigned int   reserved0 : 2;
    } bits_10;
    uint16_t word_10;
  } u10;
} AQ_CiscoLedProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global LED Provisioning: 1E.C430 */
/*                  Global LED Provisioning: 1E.C430 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C430.1:0 R/WPD LED #0 Activity Stretch [1:0]
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0ActivityStretch

                        Provisionable Default = 0x3

                        [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                        
  */
      unsigned int   led_0ActivityStretch : 2;    /* 1E.C430.1:0  R/WPD      Provisionable Default = 0x3 */
                     /* [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                          */
                    /*! \brief 1E.C430.2 R/WPD LED #0 Transmit Activity
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0TransmitActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on transmit activity
                        
  */
      unsigned int   led_0TransmitActivity : 1;    /* 1E.C430.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on transmit activity
                          */
                    /*! \brief 1E.C430.3 R/WPD LED #0 Receive Activity
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0ReceiveActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on receive activity
                        
  */
      unsigned int   led_0ReceiveActivity : 1;    /* 1E.C430.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on receive activity
                          */
                    /*! \brief 1E.C430.4 R/WPD LED #0 Connecting
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0Connecting

                        Provisionable Default = 0x0

                        1 = LED is on when attempting to connect.
                        
  */
      unsigned int   led_0Connecting : 1;    /* 1E.C430.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when attempting to connect.
                          */
                    /*! \brief 1E.C430.5 R/WPD LED #0 100 Mb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0_100Mb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 100 Mb/s.
                        
  */
      unsigned int   led_0_100Mb_sLinkEstablished : 1;    /* 1E.C430.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 100 Mb/s.
                          */
                    /*! \brief 1E.C430.6 R/WPD LED #0 1 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0_1Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 1 Gb/s
                        
  */
      unsigned int   led_0_1Gb_sLinkEstablished : 1;    /* 1E.C430.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 1 Gb/s
                          */
                    /*! \brief 1E.C430.7 R/WPD LED #0 10 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0_10Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 10 Gb/s
                        
  */
      unsigned int   led_0_10Gb_sLinkEstablished : 1;    /* 1E.C430.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 10 Gb/s
                          */
                    /*! \brief 1E.C430.8 R/WPD LED #0 Manual Set
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0ManualSet

                        Provisionable Default = 0x0

                        1 = LED On
                        
  */
      unsigned int   led_0ManualSet : 1;    /* 1E.C430.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED On
                          */
                    /*! \brief 1E.C430.D:9 R/WPD Reserved Provisioning C430 [4:0]
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.reservedProvisioningC430

                        Provisionable Default = 0x00

                        Reserved for future use
  */
      unsigned int   reservedProvisioningC430 : 5;    /* 1E.C430.D:9  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use  */
                    /*! \brief 1E.C430.E R/WPD LED #0 2.5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0_2_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 2.5 Gb/s
                        
  */
      unsigned int   led_0_2_5Gb_sLinkEstablished : 1;    /* 1E.C430.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 2.5 Gb/s
                          */
                    /*! \brief 1E.C430.F R/WPD LED #0 5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u0.bits_0.led_0_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 5 Gb/s
                        
  */
      unsigned int   led_0_5Gb_sLinkEstablished : 1;    /* 1E.C430.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 5 Gb/s
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C431.1:0 R/WPD LED #1 Activity Stretch [1:0]
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1ActivityStretch

                        Provisionable Default = 0x3

                        [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                        
  */
      unsigned int   led_1ActivityStretch : 2;    /* 1E.C431.1:0  R/WPD      Provisionable Default = 0x3 */
                     /* [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                          */
                    /*! \brief 1E.C431.2 R/WPD LED #1 Transmit Activity
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1TransmitActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on transmit activity
                        
  */
      unsigned int   led_1TransmitActivity : 1;    /* 1E.C431.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on transmit activity
                          */
                    /*! \brief 1E.C431.3 R/WPD LED #1 Receive Activity
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1ReceiveActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on receive activity
                        
  */
      unsigned int   led_1ReceiveActivity : 1;    /* 1E.C431.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on receive activity
                          */
                    /*! \brief 1E.C431.4 R/WPD LED #1 Connecting
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1Connecting

                        Provisionable Default = 0x0

                        1 = LED is on when attempting to connect.
                        
  */
      unsigned int   led_1Connecting : 1;    /* 1E.C431.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when attempting to connect.
                          */
                    /*! \brief 1E.C431.5 R/WPD LED #1 100 Mb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1_100Mb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 100 Mb/s.
                        
  */
      unsigned int   led_1_100Mb_sLinkEstablished : 1;    /* 1E.C431.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 100 Mb/s.
                          */
                    /*! \brief 1E.C431.6 R/WPD LED #1 1 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1_1Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 1 Gb/s
                        
  */
      unsigned int   led_1_1Gb_sLinkEstablished : 1;    /* 1E.C431.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 1 Gb/s
                          */
                    /*! \brief 1E.C431.7 R/WPD LED #1 10 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1_10Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 10 Gb/s
                        
  */
      unsigned int   led_1_10Gb_sLinkEstablished : 1;    /* 1E.C431.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 10 Gb/s
                          */
                    /*! \brief 1E.C431.8 R/WPD LED #1 Manual Set
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1ManualSet

                        Provisionable Default = 0x0

                        1 = LED On
                        
  */
      unsigned int   led_1ManualSet : 1;    /* 1E.C431.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED On
                          */
                    /*! \brief 1E.C431.D:9 R/WPD Reserved Provisioning C431 [4:0]
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.reservedProvisioningC431

                        Provisionable Default = 0x00

                        Reserved for future use
  */
      unsigned int   reservedProvisioningC431 : 5;    /* 1E.C431.D:9  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use  */
                    /*! \brief 1E.C431.E R/WPD LED #1 2.5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1_2_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 2.5 Gb/s
                        
  */
      unsigned int   led_1_2_5Gb_sLinkEstablished : 1;    /* 1E.C431.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 2.5 Gb/s
                          */
                    /*! \brief 1E.C431.F R/WPD LED #1 5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u1.bits_1.led_1_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 5 Gb/s
                        
  */
      unsigned int   led_1_5Gb_sLinkEstablished : 1;    /* 1E.C431.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 5 Gb/s
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C432.1:0 R/WPD LED #2 Activity Stretch [1:0]
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2ActivityStretch

                        Provisionable Default = 0x3

                        [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                        
  */
      unsigned int   led_2ActivityStretch : 2;    /* 1E.C432.1:0  R/WPD      Provisionable Default = 0x3 */
                     /* [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                          */
                    /*! \brief 1E.C432.2 R/WPD LED #2 Transmit Activity
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2TransmitActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on transmit activity
                        
  */
      unsigned int   led_2TransmitActivity : 1;    /* 1E.C432.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on transmit activity
                          */
                    /*! \brief 1E.C432.3 R/WPD LED #2 Receive Activity
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2ReceiveActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on receive activity
                        
  */
      unsigned int   led_2ReceiveActivity : 1;    /* 1E.C432.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on receive activity
                          */
                    /*! \brief 1E.C432.4 R/WPD LED #2 Connecting
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2Connecting

                        Provisionable Default = 0x0

                        1 = LED is on when attempting to connect.
                        
  */
      unsigned int   led_2Connecting : 1;    /* 1E.C432.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when attempting to connect.
                          */
                    /*! \brief 1E.C432.5 R/WPD LED #2 100 Mb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2_100Mb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 100 Mb/s.
  */
      unsigned int   led_2_100Mb_sLinkEstablished : 1;    /* 1E.C432.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 100 Mb/s.  */
                    /*! \brief 1E.C432.6 R/WPD LED #2 1 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2_1Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 1 Gb/s
                        
  */
      unsigned int   led_2_1Gb_sLinkEstablished : 1;    /* 1E.C432.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 1 Gb/s
                          */
                    /*! \brief 1E.C432.7 R/WPD LED #2 10 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2_10Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 10 Gb/s
                        
  */
      unsigned int   led_2_10Gb_sLinkEstablished : 1;    /* 1E.C432.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 10 Gb/s
                          */
                    /*! \brief 1E.C432.8 R/WPD LED #2 Manual Set
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2ManualSet

                        Provisionable Default = 0x0

                        1 = LED On
                        
  */
      unsigned int   led_2ManualSet : 1;    /* 1E.C432.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED On
                          */
                    /*! \brief 1E.C432.D:9 R/WPD Reserved Provisioning C432 [4:0]
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.reservedProvisioningC432

                        Provisionable Default = 0x00

                        Reserved for future use
  */
      unsigned int   reservedProvisioningC432 : 5;    /* 1E.C432.D:9  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use  */
                    /*! \brief 1E.C432.E R/WPD LED #2 2.5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2_2_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 2.5 Gb/s
                        
  */
      unsigned int   led_2_2_5Gb_sLinkEstablished : 1;    /* 1E.C432.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 2.5 Gb/s
                          */
                    /*! \brief 1E.C432.F R/WPD LED #2 5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_CAL.u2.bits_2.led_2_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 5 Gb/s
                        
  */
      unsigned int   led_2_5Gb_sLinkEstablished : 1;    /* 1E.C432.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 5 Gb/s
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C437.0 R/WPD LED Operation Mode 0
                        AQ_GlobalLedProvisioning_CAL.u7.bits_7.ledOperationMode_0

                        Provisionable Default = 0x0

                        1 = LED link activity in Mode #2
                        0 = LED link activity in Aquantia classic mode
                        

                 <B>Notes:</B>
                        When set to 1, the LED blinking rate is based on Mode #2 algorithm. When set to 0, the LED blinking rate is based on the classic Aquantia algorithm.
                        This bit is only valid when  See LED Operation Mode 1 is set to 0.  */
      unsigned int   ledOperationMode_0 : 1;    /* 1E.C437.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED link activity in Mode #2
                        0 = LED link activity in Aquantia classic mode
                          */
                    /*! \brief 1E.C437.1 R/WPD LED Operation Mode 1
                        AQ_GlobalLedProvisioning_CAL.u7.bits_7.ledOperationMode_1

                        Provisionable Default = 0x0

                        1 = LED link activity in Mode #2
                        0 = LED link activity based on  See LED HP Mode setting
                        

                 <B>Notes:</B>
                        When set to 1, the LED blinking rate is based on Mode #2 algorithm. When set to 0, the LED blinking rate is based on the  See LED HP Mode setting.  */
      unsigned int   ledOperationMode_1 : 1;    /* 1E.C437.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED link activity in Mode #2
                        0 = LED link activity based on  See LED HP Mode setting
                          */
      unsigned int   reserved0 : 14;
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_11;
    uint16_t word_11;
  } u11;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_12;
    uint16_t word_12;
  } u12;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_13;
    uint16_t word_13;
  } u13;
  /*! \brief Union for bit and word level access of word 14 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_14;
    uint16_t word_14;
  } u14;
} AQ_GlobalLedProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global General Provisioning: 1E.C440 */
/*                  Global General Provisioning: 1E.C440 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved3 : 2;
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.C441.3 R/WPD MDIO Preamble Detection Disable
                        AQ_GlobalGeneralProvisioning_CAL.u1.bits_1.mdioPreambleDetectionDisable

                        Provisionable Default = 0x0

                        1 = Suppress preamble detection on MDIO
                        0 = Enable preamble detection on MDIO
                        
  */
      unsigned int   mdioPreambleDetectionDisable : 1;    /* 1E.C441.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Suppress preamble detection on MDIO
                        0 = Enable preamble detection on MDIO
                          */
                    /*! \brief 1E.C441.4 R/WPD MDIO Drive Configuration
                        AQ_GlobalGeneralProvisioning_CAL.u1.bits_1.mdioDriveConfiguration

                        Provisionable Default = 0x0

                        0 = MDIO driver is in normal mode
                        1 = MDIO driver is in open drain mode
                        

                 <B>Notes:</B>
                        When the MDIO driver is in open drain mode during a read cycle, "0" data will be actively driven out of the MDIO, "1" data will set the MDIO driver in high impedance state and an external pullup will set the MDIO line to "1". The Turn-Around "0" will also be actively driven out of the MDIO, therefore in open drain mode, the Turn-Around is still "Z0".  */
      unsigned int   mdioDriveConfiguration : 1;    /* 1E.C441.4  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = MDIO driver is in normal mode
                        1 = MDIO driver is in open drain mode
                          */
      unsigned int   reserved1 : 8;
                    /*! \brief 1E.C441.D R/WPD MDIO Read MSW First Enable
                        AQ_GlobalGeneralProvisioning_CAL.u1.bits_1.mdioReadMSW_FirstEnable

                        Provisionable Default = 0x0

                        1 = MSW of counter must be read first
                        0 = LSW of counter must be read first
                        

                 <B>Notes:</B>
                        This bit configures whether the MSW or LSW must be read first for counters greater than 16 bits.  */
      unsigned int   mdioReadMSW_FirstEnable : 1;    /* 1E.C441.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = MSW of counter must be read first
                        0 = LSW of counter must be read first
                          */
                    /*! \brief 1E.C441.E R/WPD MDIO Broadcast Mode Enable
                        AQ_GlobalGeneralProvisioning_CAL.u1.bits_1.mdioBroadcastModeEnable

                        Provisionable Default = 0x0

                        1 = Enable broadcast on address set in 1E.C446
                        0 = Disable broadcast on n address set in 1E.C446
                        

                 <B>Notes:</B>
                        When enabled, writes and load MMD address opcodes are supported. Read opcodes are ignored.  */
      unsigned int   mdioBroadcastModeEnable : 1;    /* 1E.C441.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable broadcast on address set in 1E.C446
                        0 = Disable broadcast on n address set in 1E.C446
                          */
      unsigned int   reserved0 : 1;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global General Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C442.0 R/W Daisy Chain Reset
                        AQ_GlobalGeneralProvisioning_CAL.u2.bits_2.daisyChainReset

                        Default = 0x0

                        1 = Reset the daisy chain
                        

                 <B>Notes:</B>
                        Toggling this bit from 0 to 1 will reload the IRAM and DRAM and reset the uP. The uP will be in uP run stall during the reload process. After the reload process, uP run stall will be de-asserted and the uP reset will be asserted. Note that before setting this bit, the  See Soft Reset bit needs to be de-asserted.  */
      unsigned int   daisyChainReset : 1;    /* 1E.C442.0  R/W      Default = 0x0 */
                     /* 1 = Reset the daisy chain
                          */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global General Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C447.4:0 R/WPD MDIO Broadcast Address Configuration [4:0]
                        AQ_GlobalGeneralProvisioning_CAL.u7.bits_7.mdioBroadcastAddressConfiguration

                        Provisionable Default = 0x00

                        Broadcast address
                        

                 <B>Notes:</B>
                        Allows setting the broadcast address. By default this is set to 0x00  */
      unsigned int   mdioBroadcastAddressConfiguration : 5;    /* 1E.C447.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Broadcast address
                          */
      unsigned int   reserved0 : 11;
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of Global General Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C449.6:0 R/W MDIO Preamble Length [6:0]
                        AQ_GlobalGeneralProvisioning_CAL.u9.bits_9.mdioPreambleLength

                        Default = 0x02

                        MDIO Preamble Length
                        

                 <B>Notes:</B>
                        Setting only has impact when MDIO Preamble Detection Disable is set (1E.c441.3). Should be set to the minimum IFG supported. For IFG=1 set this register to 1.  */
      unsigned int   mdioPreambleLength : 7;    /* 1E.C449.6:0  R/W      Default = 0x02 */
                     /* MDIO Preamble Length
                          */
      unsigned int   reserved0 : 9;
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_10;
    uint16_t word_10;
  } u10;
} AQ_GlobalGeneralProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global NVR Provisioning: 1E.C450 */
/*                  Global NVR Provisioning: 1E.C450 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global NVR Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C450.1:0 R/WPD NVR Address Length [1:0]
                        AQ_GlobalNvrProvisioning_CAL.u0.bits_0.nvrAddressLength

                        Provisionable Default = 0x2

                        NVR address length ranges from 0 bytes up to 3 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the address field used in read and write operations. Use of this field is enabled via Bit 8 of  See Global NVR Provisioning 2: Address 1E.C451 .
                          */
      unsigned int   nvrAddressLength : 2;    /* 1E.C450.1:0  R/WPD      Provisionable Default = 0x2 */
                     /* NVR address length ranges from 0 bytes up to 3 bytes
                          */
      unsigned int   reserved2 : 2;
                    /*! \brief 1E.C450.6:4 R/WPD NVR Dummy Length [2:0]
                        AQ_GlobalNvrProvisioning_CAL.u0.bits_0.nvrDummyLength

                        Provisionable Default = 0x0

                        NVR dummy length ranges from 0 bytes to 4 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the dummy field used in some manufacturer's read status and write status operations.
                          */
      unsigned int   nvrDummyLength : 3;    /* 1E.C450.6:4  R/WPD      Provisionable Default = 0x0 */
                     /* NVR dummy length ranges from 0 bytes to 4 bytes
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C450.A:8 R/WPD NVR Data Length [2:0]
                        AQ_GlobalNvrProvisioning_CAL.u0.bits_0.nvrDataLength

                        Provisionable Default = 0x4

                        NVR data length ranges from 0 bytes to 4 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the data burst used in read and write operations.
                          */
      unsigned int   nvrDataLength : 3;    /* 1E.C450.A:8  R/WPD      Provisionable Default = 0x4 */
                     /* NVR data length ranges from 0 bytes to 4 bytes
                          */
      unsigned int   reserved0 : 5;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global NVR Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C451.7:0 R/WPD NVR Clock Divide [7:0]
                        AQ_GlobalNvrProvisioning_CAL.u1.bits_1.nvrClockDivide

                        Provisionable Default = 0xA0

                        NVR clock divide. Clock frequency is divided by the NVR clock divide + 1
                        
  */
      unsigned int   nvrClockDivide : 8;    /* 1E.C451.7:0  R/WPD      Provisionable Default = 0xA0 */
                     /* NVR clock divide. Clock frequency is divided by the NVR clock divide + 1
                          */
                    /*! \brief 1E.C451.8 R/WPD NVR Address Length Override
                        AQ_GlobalNvrProvisioning_CAL.u1.bits_1.nvrAddressLengthOverride

                        Provisionable Default = 0x0

                        0 = NVR address length is based on the "NVR_SIZE" pin.
                        1 = NVR address length is based on the  See NVR Address Length [1:0]  register
                        

                 <B>Notes:</B>
                        When this bit = 0 and NVR_SIZE pin = 0, the NVR address length is 2 bytes. When this bit = 0 and the NVR_SIZE pin = 1, the NVR address length is 3 bytes. When this bit = 1 the NVR address length is from the  See NVR Address Length [1:0]   */
      unsigned int   nvrAddressLengthOverride : 1;    /* 1E.C451.8  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = NVR address length is based on the "NVR_SIZE" pin.
                        1 = NVR address length is based on the  See NVR Address Length [1:0]  register
                          */
      unsigned int   reserved0 : 7;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global NVR Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C452.0 R/W NVR Daisy Chain Disable
                        AQ_GlobalNvrProvisioning_CAL.u2.bits_2.nvrDaisyChainDisable

                        Default = 0x0

                        1 = Disable the Daisy Chain
                        

                 <B>Notes:</B>
                        When in daisy chain master mode, the daisy chain and MDIO can both access the SPI. Setting this bit to 1 will disable the daisy chain from accessing the SPI and force it into a reset state.  */
      unsigned int   nvrDaisyChainDisable : 1;    /* 1E.C452.0  R/W      Default = 0x0 */
                     /* 1 = Disable the Daisy Chain
                          */
                    /*! \brief 1E.C452.1 R/W NVR Daisy Chain Clock Divide Override
                        AQ_GlobalNvrProvisioning_CAL.u2.bits_2.nvrDaisyChainClockDivideOverride

                        Default = 0x0

                        1 = Override NVR clock divide when in daisy chain master mode
                        

                 <B>Notes:</B>
                        When in daisy chain master mode, the clock divide configuration is received from the FLASH. This bit will override the clock divide configuration from the FLASH with the  See NVR Clock Divide [7:0] .  */
      unsigned int   nvrDaisyChainClockDivideOverride : 1;    /* 1E.C452.1  R/W      Default = 0x0 */
                     /* 1 = Override NVR clock divide when in daisy chain master mode
                          */
      unsigned int   reserved0 : 14;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global NVR Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 4;
                    /*! \brief 1E.C453.4 R/W NVR Reset
                        AQ_GlobalNvrProvisioning_CAL.u3.bits_3.nvrReset

                        Default = 0x0

                        1 = Reset SPI
                        
  */
      unsigned int   nvrReset : 1;    /* 1E.C453.4  R/W      Default = 0x0 */
                     /* 1 = Reset SPI
                          */
      unsigned int   reserved0 : 11;
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_GlobalNvrProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Reserved Provisioning: 1E.C470 */
/*                  Global Reserved Provisioning: 1E.C470 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C470.1:0 R/WSC Cable Diagnostic Baud Rate [1:0]
                        AQ_GlobalReservedProvisioning_CAL.u0.bits_0.cableDiagnosticBaudRate

                        Default = 0x0

                        0 = 800M baud
                        1 = 400M baud
                        2 = 200M baud
                        3 = Reserved
                        

                 <B>Notes:</B>
                        This field selects the baud rate during cable diagnostics. 800M baud rate can measure the faults and cable length up to 100m with highest resolution. 
                        
                        400M baud rate can measure the faults and cable length up to 200m with 1/2 of the resolution of 800M baud cable diag.
                        
                        200M baud rate can measure the faults and cable length up to 400m with 1/4 of the resolution of 800M baud cable diag.  */
      unsigned int   cableDiagnosticBaudRate : 2;    /* 1E.C470.1:0  R/WSC      Default = 0x0 */
                     /* 0 = 800M baud
                        1 = 400M baud
                        2 = 200M baud
                        3 = Reserved
                          */
                    /*! \brief 1E.C470.3:2 R/WPD Reserved Provisioning 1 [1:0]
                        AQ_GlobalReservedProvisioning_CAL.u0.bits_0.reservedProvisioning_1

                        Provisionable Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_1 : 2;    /* 1E.C470.3:2  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C470.4 R/WSC Initiate Cable Diagnostics
                        AQ_GlobalReservedProvisioning_CAL.u0.bits_0.initiateCableDiagnostics

                        Default = 0x0

                        1 = Perform cable diagnostics
                        

                 <B>Notes:</B>
                        Perform cable diagnostics regardless of link state. If link is up, setting this bit will cause the link to drop while diagnostics are performed. This bit is self-clearing upon completion of the cable diagnostics.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can also be monitored via 1E.C831.F  */
      unsigned int   initiateCableDiagnostics : 1;    /* 1E.C470.4  R/WSC      Default = 0x0 */
                     /* 1 = Perform cable diagnostics
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C470.7 R/WSC Trigger Diagnostic Interrupt
                        AQ_GlobalReservedProvisioning_CAL.u0.bits_0.triggerDiagnosticInterrupt

                        Default = 0x0

                        1 = Trigger Diagnostic Interrupt
                        
  */
      unsigned int   triggerDiagnosticInterrupt : 1;    /* 1E.C470.7  R/WSC      Default = 0x0 */
                     /* 1 = Trigger Diagnostic Interrupt
                          */
      unsigned int   reserved0 : 5;
                    /*! \brief 1E.C470.E:D R/WPD Extended MDI Diagnostics Select [1:0]
                        AQ_GlobalReservedProvisioning_CAL.u0.bits_0.extendedMdiDiagnosticsSelect

                        Provisionable Default = 0x0

                        0x0 = TDR Data
                        0x1 = RFI Channel PSD
                        0x2 = Noise PSD while the local Tx is Off
                        0x3 = Noise PSD while the local Tx is On
                        

                 <B>Notes:</B>
                        These bits select what sort of cable diagnostics to perform. For regular cable diagnostics, Bit F is set to zero, and the diagnostics are triggered by setting Bit 4. For extended diagnostics, Bit F is set to 1, and the desired extended diagnostics are selected by Bits E:D. The routine is then triggered by setting Bit 4. Each of the extended diagnostic routines present data for all for MDI pairs (A, B, C, D) consecutively, and after the data for each channel is gathered Bits F:D are reset. To get the data for the next pair, Bits F:D must be set back to the desired value (which must be the same as the initial channel). This continues until the data for all channels has been gathered. The address in memory where the data is stored is given in 1E.C802 and 1E.C804.
                        
                        For the case of PSD, the structure is as follows:
                        Int32      info
                        Int16      data[Len]
                        Info = Len << 16 | TxEnable << 8 | Pair (0 = A, etc.)
                        
                        For TDR:
                        Int32      info
                        Int16      tdr_A[Len]
                        Int16      tdr_B[Len]
                        Int16      tdr_C[Len]
                        Int16      tdr_D[Len]
                        
                        Info = Len << 16 | Channel
                        
                        TDR data is from the current pair to all other pairs.
                        
                        At the end of retrieving extended MDI diag data, the part will be reset. Conversely the only way to exit this routine once it starts is to issue a PMA reset.  */
      unsigned int   extendedMdiDiagnosticsSelect : 2;    /* 1E.C470.E:D  R/WPD      Provisionable Default = 0x0 */
                     /* 0x0 = TDR Data
                        0x1 = RFI Channel PSD
                        0x2 = Noise PSD while the local Tx is Off
                        0x3 = Noise PSD while the local Tx is On
                          */
                    /*! \brief 1E.C470.F R/WPD Diagnostics Select
                        AQ_GlobalReservedProvisioning_CAL.u0.bits_0.diagnosticsSelect

                        Provisionable Default = 0x0

                        1 = Provide Extended MDI Diagnostics Information.
                        0 = Provide normal cable diagnostics
                        

                 <B>Notes:</B>
                        These bits select what sort of cable diagnostics to perform. For regular cable diagnostics, Bit F is set to zero, and the diagnostics are triggered by setting Bit 4. For extended diagnostics, Bit F is set to 1, and the desired extended diagnostics are selected by Bits E:D. The routine is then triggered by setting Bit 4. Each of the extended diagnostic routines present data for all for MDI pairs (A, B, C, D) consecutively, and after the data for each channel is gathered Bits F:D are reset. To get the data for the next pair, Bits F:D must be set back to the desired value (which must be the same as the initial channel). This continues until the data for all channels has been gathered. The address in memory where the data is stored is given in 1E.C802 and 1E.C804.
                        
                        For the case of PSD, the structure is as follows:
                        Int32      info
                        Int16      data[Len]
                        Info = Len << 16 | TxEnable << 8 | Pair (0 = A, etc.)
                        
                        For TDR:
                        Int32      info
                        Int16      tdr_A[Len]
                        Int16      tdr_B[Len]
                        Int16      tdr_C[Len]
                        Int16      tdr_D[Len]
                        
                        Info = Len << 16 | Channel
                        
                        TDR data is from the current pair to all other pairs.
                        
                        At the end of retrieving extended MDI diag data, the part will be reset. Conversely the only way to exit this routine once it starts is to issue a PMA reset.  */
      unsigned int   diagnosticsSelect : 1;    /* 1E.C470.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Provide Extended MDI Diagnostics Information.
                        0 = Provide normal cable diagnostics
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C471.5:0 R/WuP Daisy-Chain Hop-Count Override Value [5:0]
                        AQ_GlobalReservedProvisioning_CAL.u1.bits_1.daisy_chainHop_countOverrideValue

                        Default = 0x00

                        The value to use for the PHY's daisy-chain hop-count. Valid values are from 0 -> 47
                        

                 <B>Notes:</B>
                        Daisy-Chain Hop-Count Override should be used during MDIO boot-load operation, as the daisy-chain hop-count does not function when the daisy-chain is disabled (1E.C452.0). Setting this bit tells the processor where in the daisy-chain it is, so that the provisioning operation will function correctly.  */
      unsigned int   daisy_chainHop_countOverrideValue : 6;    /* 1E.C471.5:0  R/WuP      Default = 0x00 */
                     /* The value to use for the PHY's daisy-chain hop-count. Valid values are from 0 -> 47
                          */
                    /*! \brief 1E.C471.6 R/WuP Enable Daisy-Chain Hop-Count Override
                        AQ_GlobalReservedProvisioning_CAL.u1.bits_1.enableDaisy_chainHop_countOverride

                        Default = 0x0

                        1 = Hop-count is set by Bits 5:0
                        0 = Hop-count is determined by the daisy-chain
                        

                 <B>Notes:</B>
                        Daisy-Chain Hop-Count Override should be used during MDIO boot-load operation, as the daisy-chain hop-count does not function when the daisy-chain is disabled (1E.C452.0). Setting this bit tells the processor where in the daisy-chain it is, so that the provisioning operation will function correctly.  */
      unsigned int   enableDaisy_chainHop_countOverride : 1;    /* 1E.C471.6  R/WuP      Default = 0x0 */
                     /* 1 = Hop-count is set by Bits 5:0
                        0 = Hop-count is determined by the daisy-chain
                          */
      unsigned int   reserved0 : 9;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C472.0 R/WPDuP Enable 5th Channel RFI Cancellation
                        AQ_GlobalReservedProvisioning_CAL.u2.bits_2.enable_5thChannelRfiCancellation

                        Provisionable Default = 0x0

                        1 = 5th channel and RFI cancellers operation enabled
                        0 = 5th channel AFE is powered down, 5th channel digital is clock gated, RFI cancellers are disabled
                        

                 <B>Notes:</B>
                        Note: The value of this bit at the time of Autonegotiation sets the local PHY behavior until the next time Autonegotiation occurs.  */
      unsigned int   enable_5thChannelRfiCancellation : 1;    /* 1E.C472.0  R/WPDuP      Provisionable Default = 0x0 */
                     /* 1 = 5th channel and RFI cancellers operation enabled
                        0 = 5th channel AFE is powered down, 5th channel digital is clock gated, RFI cancellers are disabled
                          */
                    /*! \brief 1E.C472.1 R/WPDuP Enable XENPAK Register Space
                        AQ_GlobalReservedProvisioning_CAL.u2.bits_2.enableXenpakRegisterSpace

                        Provisionable Default = 0x0

                        1 = XENPAK register space enabled
                        0 = XENPAK register space disabled
                        
  */
      unsigned int   enableXenpakRegisterSpace : 1;    /* 1E.C472.1  R/WPDuP      Provisionable Default = 0x0 */
                     /* 1 = XENPAK register space enabled
                        0 = XENPAK register space disabled
                          */
                    /*! \brief 1E.C472.5:2 R/WPD External VDD Change Request [3:0]
                        AQ_GlobalReservedProvisioning_CAL.u2.bits_2.externalVddChangeRequest

                        Provisionable Default = 0x0

                        The amount of VDD change requested by firmware, in mV (2's complement value).
                        
  */
      unsigned int   externalVddChangeRequest : 4;    /* 1E.C472.5:2  R/WPD      Provisionable Default = 0x0 */
                     /* The amount of VDD change requested by firmware, in mV (2's complement value).
                          */
                    /*! \brief 1E.C472.6 R/WPD Tunable External VDD Power Supply Present
                        AQ_GlobalReservedProvisioning_CAL.u2.bits_2.tunableExternalVddPowerSupplyPresent

                        Provisionable Default = 0x0

                        1 = Tunable external VDD power supply present
                        0 = No tunable external VDD power supply present
                        

                 <B>Notes:</B>
                        This bit must be set if tuning of external power supply is desired.  */
      unsigned int   tunableExternalVddPowerSupplyPresent : 1;    /* 1E.C472.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Tunable external VDD power supply present
                        0 = No tunable external VDD power supply present
                          */
                    /*! \brief 1E.C472.8:7 R/WPD PHY Reset Type [1:0]
                        AQ_GlobalReservedProvisioning_CAL.u2.bits_2.phyResetType

                        Provisionable Default = 0x0

                        2 = Daisy Chain reset
                        1 = Soft reset
                        0 = Hard reset
                        
  */
      unsigned int   phyResetType : 2;    /* 1E.C472.8:7  R/WPD      Provisionable Default = 0x0 */
                     /* 2 = Daisy Chain reset
                        1 = Soft reset
                        0 = Hard reset
                          */
      unsigned int   reserved1 : 5;
                    /*! \brief 1E.C472.E R/WPD Enable VDD Power Supply Tuning
                        AQ_GlobalReservedProvisioning_CAL.u2.bits_2.enableVddPowerSupplyTuning

                        Provisionable Default = 0x0

                        1 = Enable external VDD power supply tuning
                        0 = Disable external VDD power supply tuning is disabled
                        

                 <B>Notes:</B>
                        This bit controls whether the PHY attempts to tune the external VDD power supply via the SMBus. This bit is only operational if the external supply is present. (See 1E.C472.6)  */
      unsigned int   enableVddPowerSupplyTuning : 1;    /* 1E.C472.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable external VDD power supply tuning
                        0 = Disable external VDD power supply tuning is disabled
                          */
      unsigned int   reserved0 : 1;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C473.7:0 R/WPD Training SNR [7:0]
                        AQ_GlobalReservedProvisioning_CAL.u3.bits_3.trainingSNR

                        Provisionable Default = 0x00

                        SNR during 10G training on the worst channel. SNR is in steps of 0.1dB
                        

                 <B>Notes:</B>
                        The SNR margin that is enjoyed by the worst channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   trainingSNR : 8;    /* 1E.C473.7:0  R/WPD      Provisionable Default = 0x00 */
                     /* SNR during 10G training on the worst channel. SNR is in steps of 0.1dB
                          */
                    /*! \brief 1E.C473.A:8 R/WPD Rate Transition Request [2:0]
                        AQ_GlobalReservedProvisioning_CAL.u3.bits_3.rateTransitionRequest

                        Provisionable Default = 0x0

                        0 = No Transition
                        1 = Reserved
                        2 = Reserved
                        3 = Retrain at 10G
                        4 = Retrain at 5G
                        5 = Retrain at 2.5G
                        6 = Retrain at 1G
                        7 = Reserved
                        
  */
      unsigned int   rateTransitionRequest : 3;    /* 1E.C473.A:8  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = No Transition
                        1 = Reserved
                        2 = Reserved
                        3 = Retrain at 10G
                        4 = Retrain at 5G
                        5 = Retrain at 2.5G
                        6 = Retrain at 1G
                        7 = Reserved
                          */
      unsigned int   reserved0 : 5;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C474.0 R/W NVR Daisy Chain Kickstart
                        AQ_GlobalReservedProvisioning_CAL.u4.bits_4.nvrDaisyChainKickstart

                        Default = 0x0

                        1 = Kickstart the Daisy Chain
                        

                 <B>Notes:</B>
                        When in daisy chain master mode, the PHY0 can kickstart the daisy chain. The kickstart will not reload the IRAM/DRAM or reset the uP for PHY0. It will just read the FLASH and transfer the FLASH data to the daisy chain.  */
      unsigned int   nvrDaisyChainKickstart : 1;    /* 1E.C474.0  R/W      Default = 0x0 */
                     /* 1 = Kickstart the Daisy Chain
                          */
                    /*! \brief 1E.C474.F:1 R/WPD Reserved Provisioning 5 [F:1]
                        AQ_GlobalReservedProvisioning_CAL.u4.bits_4.reservedProvisioning_5

                        Provisionable Default = 0x0000

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_5 : 15;    /* 1E.C474.F:1  R/WPD      Provisionable Default = 0x0000 */
                     /* Reserved for future use
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Reserved Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C475.2 R/WPD Smart Power-Down Enable
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.smartPower_downEnable

                        Provisionable Default = 0x0

                        1 = Enable smart power down mode
                        0 = Smart power-down mode disabled
                        

                 <B>Notes:</B>
                        Smart power down (SPD) is the lowest power mode at which PHY is able to autonegotiate. SPD can be enabled with bit 1E.C475.2  */
      unsigned int   smartPower_downEnable : 1;    /* 1E.C475.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable smart power down mode
                        0 = Smart power-down mode disabled
                          */
                    /*! \brief 1E.C475.3 R/WPD Deadlock Avoidance Enable
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.deadlockAvoidanceEnable

                        Provisionable Default = 0x0

                        1 = SPD with deadlock avoidance: PHY transmits autonegotiation pulses (FLPs) at a slower rate (~ 1 FLP/ 100ms) than specified by autonegotiation standard (~1 FLP / 8.25ms). Receiver is active and able to detect the pulses.
                        0 = SPD without deadlock avoidance: PHY transmitter is shut down, no autonegotiation pulses are sent on the line but the receiver is active and able to detect the pulses
                        
  */
      unsigned int   deadlockAvoidanceEnable : 1;    /* 1E.C475.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = SPD with deadlock avoidance: PHY transmits autonegotiation pulses (FLPs) at a slower rate (~ 1 FLP/ 100ms) than specified by autonegotiation standard (~1 FLP / 8.25ms). Receiver is active and able to detect the pulses.
                        0 = SPD without deadlock avoidance: PHY transmitter is shut down, no autonegotiation pulses are sent on the line but the receiver is active and able to detect the pulses
                          */
                    /*! \brief 1E.C475.4 R/WPD CFR Support
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.cfrSupport

                        Provisionable Default = 0x0

                        1 = Local PHY supports Cisco Fast Retrain
                        0 = Local PHY does support Cisco Fast Retrain
                        
  */
      unsigned int   cfrSupport : 1;    /* 1E.C475.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Local PHY supports Cisco Fast Retrain
                        0 = Local PHY does support Cisco Fast Retrain
                          */
                    /*! \brief 1E.C475.5 R/WPD CFR THP
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.cfrTHP

                        Provisionable Default = 0x0

                        1 = Local PHY requires local PHY to enable THP
                        0 = Local PHY does not require local PHY to enable THP
                        
  */
      unsigned int   cfrTHP : 1;    /* 1E.C475.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Local PHY requires local PHY to enable THP
                        0 = Local PHY does not require local PHY to enable THP
                          */
                    /*! \brief 1E.C475.6 R/WPD CFR Extended Maxwait
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.cfrExtendedMaxwait

                        Provisionable Default = 0x0

                        1 = Local PHY requires extended maxwait
                        0 = Local PHY does not require extended maxwait
                        
  */
      unsigned int   cfrExtendedMaxwait : 1;    /* 1E.C475.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Local PHY requires extended maxwait
                        0 = Local PHY does not require extended maxwait
                          */
                    /*! \brief 1E.C475.7 R/WPD CFR Disable Timer
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.cfrDisableTimer

                        Provisionable Default = 0x0

                        1 = Local PHY requires cfr_disable timer
                        0 = Local PHY does not require cfr_disable timer
                        
  */
      unsigned int   cfrDisableTimer : 1;    /* 1E.C475.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Local PHY requires cfr_disable timer
                        0 = Local PHY does not require cfr_disable timer
                          */
                    /*! \brief 1E.C475.8 R/WPD CFR LP Support
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.cfrLpSupport

                        Provisionable Default = 0x0

                        1 = Link partner supports Cisco Fast Retrain
                        0 = Link partner does support Cisco Fast Retrain
                        
  */
      unsigned int   cfrLpSupport : 1;    /* 1E.C475.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Link partner supports Cisco Fast Retrain
                        0 = Link partner does support Cisco Fast Retrain
                          */
                    /*! \brief 1E.C475.9 R/WPD CFR LP THP
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.cfrLpTHP

                        Provisionable Default = 0x0

                        1 = Link partner requires local PHY to enable THP
                        0 = Link partner does not require local PHY to enable THP
                        
  */
      unsigned int   cfrLpTHP : 1;    /* 1E.C475.9  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Link partner requires local PHY to enable THP
                        0 = Link partner does not require local PHY to enable THP
                          */
                    /*! \brief 1E.C475.A R/WPD CFR LP Extended Maxwait
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.cfrLpExtendedMaxwait

                        Provisionable Default = 0x0

                        1 = Link partner requires extended maxwait
                        0 = Link partner does not require extended maxwait
                        
  */
      unsigned int   cfrLpExtendedMaxwait : 1;    /* 1E.C475.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Link partner requires extended maxwait
                        0 = Link partner does not require extended maxwait
                          */
                    /*! \brief 1E.C475.B R/WPD CFR LP Disable Timer
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.cfrLpDisableTimer

                        Provisionable Default = 0x0

                        1 = Link partner requires cfr_disable timer
                        0 = Link partner does not require cfr_disable timer
                        
  */
      unsigned int   cfrLpDisableTimer : 1;    /* 1E.C475.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Link partner requires cfr_disable timer
                        0 = Link partner does not require cfr_disable timer
                          */
                    /*! \brief 1E.C475.C R/WPD Reserved Provisioning 6
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.reservedProvisioning_6

                        Provisionable Default = 0x0

                        Internal reserved - do not modify
                        
  */
      unsigned int   reservedProvisioning_6 : 1;    /* 1E.C475.C  R/WPD      Provisionable Default = 0x0 */
                     /* Internal reserved - do not modify
                          */
                    /*! \brief 1E.C475.D R/WPD Smart Power-Down Status
                        AQ_GlobalReservedProvisioning_CAL.u5.bits_5.smartPower_downStatus

                        Provisionable Default = 0x0

                        1 = Smart Power-Down Active
                        0 = Smart Power-Down Inactive
                        
  */
      unsigned int   smartPower_downStatus : 1;    /* 1E.C475.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Smart Power-Down Active
                        0 = Smart Power-Down Inactive
                          */
      unsigned int   reserved0 : 2;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Dummy union to fill space in the structure Global Reserved Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Dummy union to fill space in the structure Global Reserved Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C478.6:0 R/WPD Reserved Provisioning 9 [6:0]
                        AQ_GlobalReservedProvisioning_CAL.u8.bits_8.reservedProvisioning_9

                        Provisionable Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_9 : 7;    /* 1E.C478.6:0  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C478.7 R/WPD LPLU 10G Disable
                        AQ_GlobalReservedProvisioning_CAL.u8.bits_8.lplu10G_Disable

                        Provisionable Default = 0x0

                        1 = Disable 10G mode for low power linkup
                        0 = Enable 10G mode for low power linkup
                        
  */
      unsigned int   lplu10G_Disable : 1;    /* 1E.C478.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable 10G mode for low power linkup
                        0 = Enable 10G mode for low power linkup
                          */
                    /*! \brief 1E.C478.8 R/WPD Low Power Linkup Mode
                        AQ_GlobalReservedProvisioning_CAL.u8.bits_8.lowPowerLinkupMode

                        Provisionable Default = 0x0

                        1 = Enable low power linkup
                        0 = Disable low power linkup
                        
  */
      unsigned int   lowPowerLinkupMode : 1;    /* 1E.C478.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable low power linkup
                        0 = Disable low power linkup
                          */
                    /*! \brief 1E.C478.9 R/WPD SFP-DDMI Enable
                        AQ_GlobalReservedProvisioning_CAL.u8.bits_8.sfp_ddmiEnable

                        Provisionable Default = 0x0

                        1 = PHY supports the SFP Digital Diagnostic Monitoring Interface via the SMB0 SMBus controller, at slave addresses A0 and A2.
                        

                 <B>Notes:</B>
                        Must be set via provisioning, in a POWER_UP_INIT block.  */
      unsigned int   sfp_ddmiEnable : 1;    /* 1E.C478.9  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = PHY supports the SFP Digital Diagnostic Monitoring Interface via the SMB0 SMBus controller, at slave addresses A0 and A2.
                          */
                    /*! \brief 1E.C478.A R/WPD Thermal Shutdown Enable
                        AQ_GlobalReservedProvisioning_CAL.u8.bits_8.thermalShutdownEnable

                        Provisionable Default = 0x0

                        1 = PHY goes to low power mode if current temperature exceeds temperature threshold selected through register 1E.C475.F:E.
                        

                 <B>Notes:</B>
                        Global fault is generated (1E.C850 = 0x8007) upon triggering thermal shutdown event.  */
      unsigned int   thermalShutdownEnable : 1;    /* 1E.C478.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = PHY goes to low power mode if current temperature exceeds temperature threshold selected through register 1E.C475.F:E.
                          */
                    /*! \brief 1E.C478.E:B R/WPD DTE Drop Reporting Timer [3:0]
                        AQ_GlobalReservedProvisioning_CAL.u8.bits_8.dteDropReportingTimer

                        Provisionable Default = 0x0

                        Number of seconds between loss of link partner filter and assertion of no-power-needed state, in 5 second increments (e.g. 0x4 = 20 seconds).
                        

                 <B>Notes:</B>
                        These bits are used to set how long the PHY waits after it no longer detects the link partner filter before declaring that power is not needed.  */
      unsigned int   dteDropReportingTimer : 4;    /* 1E.C478.E:B  R/WPD      Provisionable Default = 0x0 */
                     /* Number of seconds between loss of link partner filter and assertion of no-power-needed state, in 5 second increments (e.g. 0x4 = 20 seconds).
                          */
                    /*! \brief 1E.C478.F R/WPD DTE Enable
                        AQ_GlobalReservedProvisioning_CAL.u8.bits_8.dteEnable

                        Provisionable Default = 0x0

                        1 = Enable DTE
                        0 = Disable DTE
                        
  */
      unsigned int   dteEnable : 1;    /* 1E.C478.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable DTE
                        0 = Disable DTE
                          */
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C479.3:0 R/WPD Cisco LED Modes [3:0]
                        AQ_GlobalReservedProvisioning_CAL.u9.bits_9.ciscoLedModes

                        Provisionable Default = 0x0

                        0 - 0x9 = Reserved
                        0xA = LEDs set based on link status and activity determined by PHY from autonegotiation registers.
                        0xB = LEDs set based on system SW determining CR and runt errors.
                        0xC = LEDs set based on system SW determining status of STP port.
                        0xD = LEDs set based on SW determining status of STP port but receiving/sending data.
                        0xE = LEDs set by PHY based on speed and timer programming.
                        0xF = Reserved
                        
  */
      unsigned int   ciscoLedModes : 4;    /* 1E.C479.3:0  R/WPD      Provisionable Default = 0x0 */
                     /* 0 - 0x9 = Reserved
                        0xA = LEDs set based on link status and activity determined by PHY from autonegotiation registers.
                        0xB = LEDs set based on system SW determining CR and runt errors.
                        0xC = LEDs set based on system SW determining status of STP port.
                        0xD = LEDs set based on SW determining status of STP port but receiving/sending data.
                        0xE = LEDs set by PHY based on speed and timer programming.
                        0xF = Reserved
                          */
                    /*! \brief 1E.C479.E:4 R/WPD Reserved Provisioning 10 [A:0]
                        AQ_GlobalReservedProvisioning_CAL.u9.bits_9.reservedProvisioning_10

                        Provisionable Default = 0x000

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_10 : 11;    /* 1E.C479.E:4  R/WPD      Provisionable Default = 0x000 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C479.F R/WPD Power Up Stall
                        AQ_GlobalReservedProvisioning_CAL.u9.bits_9.powerUpStall

                        Provisionable Default = 0x0

                        1 = Stall FW at Power Up
                        0 = Unstall the FW
                        

                 <B>Notes:</B>
                        This bit needs to be provisioned in Power Up Init for firmware to stall.  */
      unsigned int   powerUpStall : 1;    /* 1E.C479.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Stall FW at Power Up
                        0 = Unstall the FW
                          */
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C47A.2:0 R/WPD Rate [2:0]
                        AQ_GlobalReservedProvisioning_CAL.u10.bits_10.rate

                        Provisionable Default = 0x0

                        0x7 - 0x6 = reserved
                        0x5 = 5G
                        0x4 = 2.5G
                        0x3 = 10G
                        0x2 = 1G
                        0x1 = 100M
                        0x0 = reserved
                        

                 <B>Notes:</B>
                        These bits select the rate for the loopback and packet generation. SERDES configuration, as well autonegotiation is controlled accordingly when a loopback is selected. For instance, if 100M system loopback on the network interface is selected, SGMII on the system interface is enabled to connect at 100M, and if passthrough is enabled 100BASE-TX will be the only advertised rate and will force a re-autonegotiation if not already connected at 100M.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.  */
      unsigned int   rate : 3;    /* 1E.C47A.2:0  R/WPD      Provisionable Default = 0x0 */
                     /* 0x7 - 0x6 = reserved
                        0x5 = 5G
                        0x4 = 2.5G
                        0x3 = 10G
                        0x2 = 1G
                        0x1 = 100M
                        0x0 = reserved
                          */
                    /*! \brief 1E.C47A.3 R/WPD System I/F Packet Generation
                        AQ_GlobalReservedProvisioning_CAL.u10.bits_10.systemI_fPacketGeneration

                        Provisionable Default = 0x0

                        1 = CRPAT packet generation out 10G system interface
                        0 = No CRPAT packet generation out 10G system interface
                        

                 <B>Notes:</B>
                        Selecting this mode of operation causes the CRPAT packet generator in the PHY to output CRPAT packets on the selected 10G system interface (4.C441.F:E)
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.  */
      unsigned int   systemI_fPacketGeneration : 1;    /* 1E.C47A.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = CRPAT packet generation out 10G system interface
                        0 = No CRPAT packet generation out 10G system interface
                          */
                    /*! \brief 1E.C47A.4 R/WPD Look-Aside Port Packet Generation
                        AQ_GlobalReservedProvisioning_CAL.u10.bits_10.look_asidePortPacketGeneration

                        Provisionable Default = 0x0

                        1 = CRPAT packet generation out 10G look-aside interface (KR0)
                        0 = No CRPAT packet generation out 10G look-aside interface (KR0)
                        

                 <B>Notes:</B>
                        Selecting this mode of operation causes the CRPAT packet generator in the PHY to output on KR0.
                        
                        NOTE!! This only functions if KR1 (SERDES2) is selected as the system interface in (4.C441.F:E).
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.  */
      unsigned int   look_asidePortPacketGeneration : 1;    /* 1E.C47A.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = CRPAT packet generation out 10G look-aside interface (KR0)
                        0 = No CRPAT packet generation out 10G look-aside interface (KR0)
                          */
                    /*! \brief 1E.C47A.5 R/WPD MDI Packet Generation
                        AQ_GlobalReservedProvisioning_CAL.u10.bits_10.mdiPacketGeneration

                        Provisionable Default = 0x0

                        1 = CRPAT packet generation out MDI interface
                        0 = No CRPAT packet generation out MDI interface
                        

                 <B>Notes:</B>
                        Selecting this mode of operation causes the CRPAT packet generator in the PHY to output on the MDI interface at the selected rate.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.  */
      unsigned int   mdiPacketGeneration : 1;    /* 1E.C47A.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = CRPAT packet generation out MDI interface
                        0 = No CRPAT packet generation out MDI interface
                          */
                    /*! \brief 1E.C47A.A:6 R/WPD Reserved Provisioning 11 [4:0]
                        AQ_GlobalReservedProvisioning_CAL.u10.bits_10.reservedProvisioning_11

                        Provisionable Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_11 : 5;    /* 1E.C47A.A:6  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C47A.F:B R/WPD Loopback Control [4:0]
                        AQ_GlobalReservedProvisioning_CAL.u10.bits_10.loopbackControl

                        Provisionable Default = 0x00

                        0x00 = No loopback
                        0x01 = System Interface - System Loopback
                        0x02 = System Interface - System Loopback with Passthrough
                        0x03 = System Interface - Network Loopback
                        0x04 = System Interface - Network Loopback with Passthrough
                        0x05 = System Interface - Network Loopback with Passthrough and Merge
                        0x06 = System Interface - Peer-to-peer loopback
                        0x07 - 0x08 = Reserved
                        0x09 = Network Interface - System Loopback
                        0x0A = Network Interface - System Loopback with Passthrough
                        0x0B = Network Interface - Network Loopback
                        0x0C = Network Interface - Network Loopback with Passthrough
                        0x0D = Network Interface - Peer-to-peer loopback
                        0x0E - 0x0F = Reserved
                        0x10 = Cross-connect System Loopback
                        0x11 = Cross-connect Network Loopback
                        0x12 - 0x13 = Reserved
                        0x14 = Network Interface - System Loopback via Loopback Plug
                        0x15 - 0x1F = Reserved
                        

                 <B>Notes:</B>
                        These bits, in conjunction with the chip configuration and the rate (Bits 1:0), select the loopback to configure for the chip. Setting one of these loopbacks provisions the chip for the specified loopback. Upon clearing the loopback, the chip returns to it's configuration prior to entering loopback (irregardless of whether other loopbacks were selected after the initial loopback).
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F.
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.
                          */
      unsigned int   loopbackControl : 5;    /* 1E.C47A.F:B  R/WPD      Provisionable Default = 0x00 */
                     /* 0x00 = No loopback
                        0x01 = System Interface - System Loopback
                        0x02 = System Interface - System Loopback with Passthrough
                        0x03 = System Interface - Network Loopback
                        0x04 = System Interface - Network Loopback with Passthrough
                        0x05 = System Interface - Network Loopback with Passthrough and Merge
                        0x06 = System Interface - Peer-to-peer loopback
                        0x07 - 0x08 = Reserved
                        0x09 = Network Interface - System Loopback
                        0x0A = Network Interface - System Loopback with Passthrough
                        0x0B = Network Interface - Network Loopback
                        0x0C = Network Interface - Network Loopback with Passthrough
                        0x0D = Network Interface - Peer-to-peer loopback
                        0x0E - 0x0F = Reserved
                        0x10 = Cross-connect System Loopback
                        0x11 = Cross-connect Network Loopback
                        0x12 - 0x13 = Reserved
                        0x14 = Network Interface - System Loopback via Loopback Plug
                        0x15 - 0x1F = Reserved
                          */
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Union for bit and word level access of word 11 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C47B.F:0 R/WPD Reserved Provisioning 12 [F:0]
                        AQ_GlobalReservedProvisioning_CAL.u11.bits_11.reservedProvisioning_12

                        Provisionable Default = 0x0000

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_12 : 16;    /* 1E.C47B.F:0  R/WPD      Provisionable Default = 0x0000 */
                     /* Reserved for future use
                          */
    } bits_11;
    uint16_t word_11;
  } u11;
} AQ_GlobalReservedProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PIF Mailbox Control: 1E.C47C */
/*                  PIF Mailbox Control: 1E.C47C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PIF Mailbox Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C47C.F:0 R/WPDuP PIF Mailbox Address [F:0]
                        AQ_PifMailboxControl_CAL.u0.bits_0.pifMailboxAddress

                        Provisionable Default = 0x0000

                        Address (lower 16 bits) specifying the target register to read or write.
                        

                 <B>Notes:</B>
                        Specifies the first target register.  */
      unsigned int   pifMailboxAddress : 16;    /* 1E.C47C.F:0  R/WPDuP      Provisionable Default = 0x0000 */
                     /* Address (lower 16 bits) specifying the target register to read or write.
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PIF Mailbox Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C47D.F:0 R/WPDuP PIF Mailbox Data [F:0]
                        AQ_PifMailboxControl_CAL.u1.bits_1.pifMailboxData

                        Provisionable Default = 0x0000

                        The data to be written, or that has been read from, the target register.
                        
  */
      unsigned int   pifMailboxData : 16;    /* 1E.C47D.F:0  R/WPDuP      Provisionable Default = 0x0000 */
                     /* The data to be written, or that has been read from, the target register.
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of PIF Mailbox Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C47E.7:0 R/WPDuP PIF Mailbox MMD [7:0]
                        AQ_PifMailboxControl_CAL.u2.bits_2.pifMailboxMMD

                        Provisionable Default = 0x00

                        MMD (upper 8 bits) specifying the target register to read or write.
                        

                 <B>Notes:</B>
                        Specifies the first target register.  */
      unsigned int   pifMailboxMMD : 8;    /* 1E.C47E.7:0  R/WPDuP      Provisionable Default = 0x00 */
                     /* MMD (upper 8 bits) specifying the target register to read or write.
                          */
                    /*! \brief 1E.C47E.B:8 R/WPDuP PIF Mailbox Command Type [3:0]
                        AQ_PifMailboxControl_CAL.u2.bits_2.pifMailboxCommandType

                        Provisionable Default = 0x0

                        0 = No Action
                        1 = Read
                        2 = Write
                        

                 <B>Notes:</B>
                        The PIF Mailbox supports reading/writing arbitrary ("target") PHY registers indirectly, via the uP's PIF interface. This is an alternative register accessing mechanism to MDIO or SMBus.
                        
                        System SW writes non-zero value to start a PIF command.  */
      unsigned int   pifMailboxCommandType : 4;    /* 1E.C47E.B:8  R/WPDuP      Provisionable Default = 0x0 */
                     /* 0 = No Action
                        1 = Read
                        2 = Write
                          */
                    /*! \brief 1E.C47E.C R/WPDuP Service Second Register
                        AQ_PifMailboxControl_CAL.u2.bits_2.serviceSecondRegister

                        Provisionable Default = 0x0

                        0 = Handle the read/write request for only the first target register
                        1 = Handle the read/write request for both the first and second target registers
                        

                 <B>Notes:</B>
                        Either one or two target registers can be read or written. If this bit is set to 1, then the first target register will be read/written, then the second target register will be read/written. 
                        
                        The second target register is specified by the PIF Mailbox Extra group (4.E41D - 4.E41F).
                        
                        If this bit is 0, only the first target register will be read/written, and the PIF Mailbox Extra registers will be ignored.  */
      unsigned int   serviceSecondRegister : 1;    /* 1E.C47E.C  R/WPDuP      Provisionable Default = 0x0 */
                     /* 0 = Handle the read/write request for only the first target register
                        1 = Handle the read/write request for both the first and second target registers
                          */
                    /*! \brief 1E.C47E.F:D R/WPD Reserved PIF Mailbox Control 3 [2:0]
                        AQ_PifMailboxControl_CAL.u2.bits_2.reservedPifMailboxControl_3

                        Provisionable Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedPifMailboxControl_3 : 3;    /* 1E.C47E.F:D  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved for future use
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of PIF Mailbox Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C47F.3:0 R/WPDuP PIF Mailbox Command Status [3:0]
                        AQ_PifMailboxControl_CAL.u3.bits_3.pifMailboxCommandStatus

                        Provisionable Default = 0x0

                        0 = Idle
                        1 = Command completed
                        2 = Command did not complete
                        

                 <B>Notes:</B>
                        System SW should write 0 before writing Command Type to clear completion status  */
      unsigned int   pifMailboxCommandStatus : 4;    /* 1E.C47F.3:0  R/WPDuP      Provisionable Default = 0x0 */
                     /* 0 = Idle
                        1 = Command completed
                        2 = Command did not complete
                          */
                    /*! \brief 1E.C47F.F:4 R/WPD Reserved PIF Mailbox Control 4 [B:0]
                        AQ_PifMailboxControl_CAL.u3.bits_3.reservedPifMailboxControl_4

                        Provisionable Default = 0x000

                        Reserved for future use
                        
  */
      unsigned int   reservedPifMailboxControl_4 : 12;    /* 1E.C47F.F:4  R/WPD      Provisionable Default = 0x000 */
                     /* Reserved for future use
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_PifMailboxControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global SMBus 0 Provisioning: 1E.C487 */
/*                  Global SMBus 0 Provisioning: 1E.C487 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global SMBus 0 Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C487.7:1 R/W SMB 0 Slave Address 2 [7:1]
                        AQ_GlobalSmbus_0Provisioning_CAL.u0.bits_0.smb_0SlaveAddress_2

                        Default = 0x00

                        SMB slave address 2 configuration
                        
  */
      unsigned int   smb_0SlaveAddress_2 : 7;    /* 1E.C487.7:1  R/W      Default = 0x00 */
                     /* SMB slave address 2 configuration
                          */
                    /*! \brief 1E.C487.8 R/W SMB 0 Slave Address 2 Enable
                        AQ_GlobalSmbus_0Provisioning_CAL.u0.bits_0.smb_0SlaveAddress_2Enable

                        Default = 0x0

                        1 = Enable SMB slave address 2
                        
  */
      unsigned int   smb_0SlaveAddress_2Enable : 1;    /* 1E.C487.8  R/W      Default = 0x0 */
                     /* 1 = Enable SMB slave address 2
                          */
                    /*! \brief 1E.C487.9 R/W SMB 0 Slave Address Ignore
                        AQ_GlobalSmbus_0Provisioning_CAL.u0.bits_0.smb_0SlaveAddressIgnore

                        Default = 0x0

                        1 = Ignore SMB slave address
                        
  */
      unsigned int   smb_0SlaveAddressIgnore : 1;    /* 1E.C487.9  R/W      Default = 0x0 */
                     /* 1 = Ignore SMB slave address
                          */
                    /*! \brief 1E.C487.A R/W SMB 0 Slave Data Bank
                        AQ_GlobalSmbus_0Provisioning_CAL.u0.bits_0.smb_0SlaveDataBank

                        Default = 0x0

                        Select SMB slave ping-pong bank
                        
  */
      unsigned int   smb_0SlaveDataBank : 1;    /* 1E.C487.A  R/W      Default = 0x0 */
                     /* Select SMB slave ping-pong bank
                          */
                    /*! \brief 1E.C487.B R/W SMB 0 Slave Data Mode
                        AQ_GlobalSmbus_0Provisioning_CAL.u0.bits_0.smb_0SlaveDataMode

                        Default = 0x0

                        1 = Enable SMB slave ping-pong bank
                        
  */
      unsigned int   smb_0SlaveDataMode : 1;    /* 1E.C487.B  R/W      Default = 0x0 */
                     /* 1 = Enable SMB slave ping-pong bank
                          */
      unsigned int   reserved0 : 4;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSmbus_0Provisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global SMBus 1 Provisioning: 1E.C495 */
/*                  Global SMBus 1 Provisioning: 1E.C495 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global SMBus 1 Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C495.7:1 R/W SMB 1 Slave Address [7:1]
                        AQ_GlobalSmbus_1Provisioning_CAL.u0.bits_0.smb_1SlaveAddress

                        Default = 0x00

                        SMB slave address configuration
                        
  */
      unsigned int   smb_1SlaveAddress : 7;    /* 1E.C495.7:1  R/W      Default = 0x00 */
                     /* SMB slave address configuration
                          */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSmbus_1Provisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global EEE Provisioning: 1E.C4A0 */
/*                  Global EEE Provisioning: 1E.C4A0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global EEE Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C4A0.0 R/WPD EEE Mode
                        AQ_GlobalEeeProvisioning_CAL.u0.bits_0.eeeMode

                        Provisionable Default = 0x0

                        1 = EEE mode of operation
                        

                 <B>Notes:</B>
                        EEE mode of operation (0=disable, 1=enable, default:0)  */
      unsigned int   eeeMode : 1;    /* 1E.C4A0.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = EEE mode of operation
                          */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalEeeProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Cable Diagnostic Status: 1E.C800 */
/*                  Global Cable Diagnostic Status: 1E.C800 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C800.2:0 RO Pair D Status [2:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u0.bits_0.pairDStatus

                        

                        [6:4]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair C
                        010= Connected to Pair B
                        001= Connected to Pair A
                        000= OK

                 <B>Notes:</B>
                        This register summarizes the worst impairment on Pair D.  */
      unsigned int   pairDStatus : 3;    /* 1E.C800.2:0  RO       */
                     /* [6:4]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair C
                        010= Connected to Pair B
                        001= Connected to Pair A
                        000= OK  */
      unsigned int   reserved3 : 1;
                    /*! \brief 1E.C800.6:4 RO Pair C Status [2:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u0.bits_0.pairCStatus

                        

                        [9:7]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair B
                        010= Connected to Pair A
                        001= Connected to Pair D
                        000= OK

                 <B>Notes:</B>
                        This register summarizes the worst impairment on Pair C.  */
      unsigned int   pairCStatus : 3;    /* 1E.C800.6:4  RO       */
                     /* [9:7]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair B
                        010= Connected to Pair A
                        001= Connected to Pair D
                        000= OK  */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.C800.A:8 RO Pair B Status [2:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u0.bits_0.pairBStatus

                        

                        [C:A]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair A
                        010= Connected to Pair D
                        001= Connected to Pair C
                        000= OK

                 <B>Notes:</B>
                        This register summarizes the worst impairment on Pair B.  */
      unsigned int   pairBStatus : 3;    /* 1E.C800.A:8  RO       */
                     /* [C:A]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair A
                        010= Connected to Pair D
                        001= Connected to Pair C
                        000= OK  */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C800.E:C RO Pair A Status [2:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u0.bits_0.pairAStatus

                        

                        [F:D]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair D
                        010= Connected to Pair C
                        001= Connected to Pair B
                        000= OK

                 <B>Notes:</B>
                        This register summarizes the worst impairment on Pair A.  */
      unsigned int   pairAStatus : 3;    /* 1E.C800.E:C  RO       */
                     /* [F:D]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair D
                        010= Connected to Pair C
                        001= Connected to Pair B
                        000= OK  */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C801.7:0 RO Pair A Reflection #2 [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u1.bits_1.pairAReflection_2

                        

                        The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair A

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 1: Address 1E.C870 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairAReflection_2 : 8;    /* 1E.C801.7:0  RO       */
                     /* The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair A  */
                    /*! \brief 1E.C801.F:8 RO Pair A Reflection #1 [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u1.bits_1.pairAReflection_1

                        

                        The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair A

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 1: Address 1E.C870 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairAReflection_1 : 8;    /* 1E.C801.F:8  RO       */
                     /* The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair A  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C802.F:0 RO Impulse Response MSW [F:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u2.bits_2.impulseResponseMSW

                        

                        The MSW of the memory location that contains the start of the impulse response data for the Extended Diagnostic type in 1E.C470.E:D

                 <B>Notes:</B>
                        See 1E.C470 for more information  */
      unsigned int   impulseResponseMSW : 16;    /* 1E.C802.F:0  RO       */
                     /* The MSW of the memory location that contains the start of the impulse response data for the Extended Diagnostic type in 1E.C470.E:D  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C803.7:0 RO Pair B Reflection #2 [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u3.bits_3.pairBReflection_2

                        

                        The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair B

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 2: Address 1E.C871 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairBReflection_2 : 8;    /* 1E.C803.7:0  RO       */
                     /* The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair B  */
                    /*! \brief 1E.C803.F:8 RO Pair B Reflection #1 [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u3.bits_3.pairBReflection_1

                        

                        The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair B

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 2: Address 1E.C871 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairBReflection_1 : 8;    /* 1E.C803.F:8  RO       */
                     /* The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair B  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C804.F:0 RO Impulse Response LSW [F:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u4.bits_4.impulseResponseLSW

                        

                        The LSW of the memory location that contains the start of the impulse response data for the Extended Diagnostic type specified in 1E.C470.E:D

                 <B>Notes:</B>
                        See 1E.C470 for more information  */
      unsigned int   impulseResponseLSW : 16;    /* 1E.C804.F:0  RO       */
                     /* The LSW of the memory location that contains the start of the impulse response data for the Extended Diagnostic type specified in 1E.C470.E:D  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C805.7:0 RO Pair C Reflection #2 [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u5.bits_5.pairCReflection_2

                        

                        The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair C

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 3: Address 1E.C872 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairCReflection_2 : 8;    /* 1E.C805.7:0  RO       */
                     /* The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair C  */
                    /*! \brief 1E.C805.F:8 RO Pair C Reflection #1 [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u5.bits_5.pairCReflection_1

                        

                        The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair C

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 3: Address 1E.C872 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairCReflection_1 : 8;    /* 1E.C805.F:8  RO       */
                     /* The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair C  */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C806.7:0 RO Pair A Length [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u6.bits_6.pairALength

                        

                        Length estimate of pair A in cable diags
                        
  */
      unsigned int   pairALength : 8;    /* 1E.C806.7:0  RO       */
                     /* Length estimate of pair A in cable diags
                          */
                    /*! \brief 1E.C806.F:8 RO Pair B Length [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u6.bits_6.pairBLength

                        

                        Length estimate of pair B in cable diags
                        
  */
      unsigned int   pairBLength : 8;    /* 1E.C806.F:8  RO       */
                     /* Length estimate of pair B in cable diags
                          */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C807.7:0 RO Pair D Reflection #2 [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u7.bits_7.pairDReflection_2

                        

                        The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair D

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 4: Address 1E.C873 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairDReflection_2 : 8;    /* 1E.C807.7:0  RO       */
                     /* The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair D  */
                    /*! \brief 1E.C807.F:8 RO Pair D Reflection #1 [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u7.bits_7.pairDReflection_1

                        

                        The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair D

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 4: Address 1E.C873 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairDReflection_1 : 8;    /* 1E.C807.F:8  RO       */
                     /* The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair D  */
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C808.7:0 RO Pair C Length [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u8.bits_8.pairCLength

                        

                        Length estimate of pair C in cable diags
                        
  */
      unsigned int   pairCLength : 8;    /* 1E.C808.7:0  RO       */
                     /* Length estimate of pair C in cable diags
                          */
                    /*! \brief 1E.C808.F:8 RO Pair D Length [7:0]
                        AQ_GlobalCableDiagnosticStatus_CAL.u8.bits_8.pairDLength

                        

                        Length estimate of pair D in cable diags
                        
  */
      unsigned int   pairDLength : 8;    /* 1E.C808.F:8  RO       */
                     /* Length estimate of pair D in cable diags
                          */
    } bits_8;
    uint16_t word_8;
  } u8;
} AQ_GlobalCableDiagnosticStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Thermal Status: 1E.C820 */
/*                  Global Thermal Status: 1E.C820 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Thermal Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C820.F:0 RO Temperature [F:0]
                        AQ_GlobalThermalStatus_CAL.u0.bits_0.temperature

                        

                        [F:0] of temperature
                        

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD800. Default is 70 degreesC. This is a mirror of the XENPAK register 1.A060 - 1.A061. The mirror is performed in H/W.  */
      unsigned int   temperature : 16;    /* 1E.C820.F:0  RO       */
                     /* [F:0] of temperature
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Thermal Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C821.0 RO Temperature Ready
                        AQ_GlobalThermalStatus_CAL.u1.bits_1.temperatureReady

                        

                        1 = Temperature measurement is valid
                        

                 <B>Notes:</B>
                        This is a mirror of the XENPAK register 1.A06E.  */
      unsigned int   temperatureReady : 1;    /* 1E.C821.0  RO       */
                     /* 1 = Temperature measurement is valid
                          */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalThermalStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global General Status: 1E.C830 */
/*                  Global General Status: 1E.C830 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global General Status */
  union
  {
    struct
    {
      unsigned int   reserved1 : 11;
                    /*! \brief 1E.C830.B RO Low Temperature Warning State
                        AQ_GlobalGeneralStatus_CAL.u0.bits_0.lowTemperatureWarningState

                        

                        1 = Low temperature warning threshold has been exceeded

                 <B>Notes:</B>
                        In XENPAK mode, F/W will copy this register to the 1.A074.6 register.
                        
                          */
      unsigned int   lowTemperatureWarningState : 1;    /* 1E.C830.B  RO       */
                     /* 1 = Low temperature warning threshold has been exceeded  */
                    /*! \brief 1E.C830.C RO High Temperature Warning State
                        AQ_GlobalGeneralStatus_CAL.u0.bits_0.highTemperatureWarningState

                        

                        1 = High temperature warning threshold has been exceeded

                 <B>Notes:</B>
                        In XENPAK mode, F/W will copy this register to the 1.A074.7 register.
                        
                          */
      unsigned int   highTemperatureWarningState : 1;    /* 1E.C830.C  RO       */
                     /* 1 = High temperature warning threshold has been exceeded  */
                    /*! \brief 1E.C830.D RO Low Temperature Failure State
                        AQ_GlobalGeneralStatus_CAL.u0.bits_0.lowTemperatureFailureState

                        

                        1 = Low temperature failure threshold has been exceeded

                 <B>Notes:</B>
                        In XENPAK mode, F/W will copy this register to the 1.A070.6 register.
                        
                          */
      unsigned int   lowTemperatureFailureState : 1;    /* 1E.C830.D  RO       */
                     /* 1 = Low temperature failure threshold has been exceeded  */
                    /*! \brief 1E.C830.E RO High Temperature Failure State
                        AQ_GlobalGeneralStatus_CAL.u0.bits_0.highTemperatureFailureState

                        

                        1 = High temperature failure threshold has been exceeded

                 <B>Notes:</B>
                        In XENPAK mode, F/W will copy this register to the 1.A070.7 register.
                        
                          */
      unsigned int   highTemperatureFailureState : 1;    /* 1E.C830.E  RO       */
                     /* 1 = High temperature failure threshold has been exceeded  */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global General Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 1E.C831.F RO Processor Intensive MDIO Operation In- Progress
                        AQ_GlobalGeneralStatus_CAL.u1.bits_1.processorIntensiveMdioOperationIn_Progress

                        

                        1 = PHY microprocessor is busy with a processor-intensive MDIO operation
                        0 = Processor-intensive MDIO operation completed
                        

                 <B>Notes:</B>
                        This bit should may be used with certain processor-intensive MDIO commands (such as Loopbacks, Test Modes, Low power modes, Tx-Disable, Restart autonegotiation, Cable Diagnostics, etc.) that take longer than an MDIO cycle to complete. Upon receiving an MDIO command that involves the PHY's microprocessor, this bit is set, and when the command is completed, this bit is cleared.
                        
                        NOTE!!! This bit should be checked only after 1 ms of issuing a processor-intensive MDIO operation.
                        
                        The list of operations that set this bit are as follows:
                        
                        1.0.0, PMA Loopback
                        1.0.B, Low power mode
                        1.9.4:0, Tx Disable
                        1.84, 10G Test modes
                        1.8000.5, XENPAK Control
                        1.9000, XENPAK Rx Fault Enable
                        1.9002, XENPAK Alarm Enable
                        1.E400.F, External loopback
                        3.0.B, Low power mode
                        3.0.E, System PCS loopback
                        3.C471.5, PRBS Test
                        3.C471.6, PRBS Test
                        3.E471.5, PRBS Test 
                        3.E471.6, PRBS Test
                        4.0.B, Low power mode 
                        4.0.E, PHY-XS network loopback
                        4.C440, Output clock control, Load SERDES parameters
                        4.F802.E, System loopback 
                        4.C444.F:B, Loopback Control
                        4.C444.4:2, Packet generation
                        4.C445.C, SERDES calibration
                        7.0.9, Restart autonegotiation
                        1D.C280, 1G/100M Network loopback
                        1D.C500, 1G System loopback 
                        1D.C501, 1G / 100M Test modes
                        1E.C470.4, Cable diagnostics
                        1E.C47A.F:B, Loopback Control
                        1E.C47A.4:2, Packet generation  */
      unsigned int   processorIntensiveMdioOperationIn_Progress : 1;    /* 1E.C831.F  RO       */
                     /* 1 = PHY microprocessor is busy with a processor-intensive MDIO operation
                        0 = Processor-intensive MDIO operation completed
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalGeneralStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Pin Status: 1E.C840 */
/*                  Global Pin Status: 1E.C840 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Pin Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C840.5:0 RO LED Pullup State [5:0]
                        AQ_GlobalPinStatus_CAL.u0.bits_0.ledPullupState

                        

                        1 = LED output pin is pulled high
                        0 = LED output pin is pulled low
                        
  */
      unsigned int   ledPullupState : 6;    /* 1E.C840.5:0  RO       */
                     /* 1 = LED output pin is pulled high
                        0 = LED output pin is pulled low
                          */
                    /*! \brief 1E.C840.6 BLH LED PCS Frame Error
                        AQ_GlobalPinStatus_CAL.u0.bits_0.ledPcsFrameError

                        

                        PCS frame error detected for faulty LED
                        
  */
      unsigned int   ledPcsFrameError : 1;    /* 1E.C840.6  BLH       */
                     /* PCS frame error detected for faulty LED
                          */
                    /*! \brief 1E.C840.7 BLH LED LDPC Frame Error
                        AQ_GlobalPinStatus_CAL.u0.bits_0.ledLdpcFrameError

                        

                        LDPC frame error detected for faulty LED
                        
  */
      unsigned int   ledLdpcFrameError : 1;    /* 1E.C840.7  BLH       */
                     /* LDPC frame error detected for faulty LED
                          */
      unsigned int   reserved3 : 1;
                    /*! \brief 1E.C840.9 RO Package Connectivity
                        AQ_GlobalPinStatus_CAL.u0.bits_0.packageConnectivity

                        

                        Value of the package connection pin
                        
  */
      unsigned int   packageConnectivity : 1;    /* 1E.C840.9  RO       */
                     /* Value of the package connection pin
                          */
      unsigned int   reserved2 : 3;
                    /*! \brief 1E.C840.D RO DC_MASTER_N
                        AQ_GlobalPinStatus_CAL.u0.bits_0.dcMasterN

                        

                        Value of DC_MASTER_N pin:
                        
                        0x1 = PHY Slave Daisy Chain Boot
                        0x0 = PHY Master Daisy Chain Boot from FLASH
  */
      unsigned int   dcMasterN : 1;    /* 1E.C840.D  RO       */
                     /* Value of DC_MASTER_N pin:
                        
                        0x1 = PHY Slave Daisy Chain Boot
                        0x0 = PHY Master Daisy Chain Boot from FLASH  */
      unsigned int   reserved1 : 1;
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalPinStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Daisy Chain Status: 1E.C842 */
/*                  Global Daisy Chain Status: 1E.C842 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Daisy Chain Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C842.F:0 RO Rx Daisy Chain Calculated CRC [F:0]
                        AQ_GlobalDaisyChainStatus_CAL.u0.bits_0.rxDaisyChainCalculatedCrc

                        

                        Rx Daisy Chain Calculated CRC
                        

                 <B>Notes:</B>
                        This is the calculated daisy chain CRC.  */
      unsigned int   rxDaisyChainCalculatedCrc : 16;    /* 1E.C842.F:0  RO       */
                     /* Rx Daisy Chain Calculated CRC
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalDaisyChainStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Daisy Chain Hop Count: 1E.C84E */
/*                  Global Daisy Chain Hop Count: 1E.C84E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Daisy Chain Hop Count */
  union
  {
    struct
    {
                    /*! \brief 1E.C84E.7:0 RO Daisy Chain Hop Count [7:0]
                        AQ_GlobalDaisyChainHopCount_CAL.u0.bits_0.daisyChainHopCount

                        

                        Daisy Chain Hop Count
                        

                 <B>Notes:</B>
                        This is the configured daisy chain hop count.  */
      unsigned int   daisyChainHopCount : 8;    /* 1E.C84E.7:0  RO       */
                     /* Daisy Chain Hop Count
                          */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalDaisyChainHopCount_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Fault Message: 1E.C850 */
/*                  Global Fault Message: 1E.C850 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Fault Message */
  union
  {
    struct
    {
                    /*! \brief 1E.C850.F:0 RO Message [F:0]
                        AQ_GlobalFaultMessage_CAL.u0.bits_0.message

                        

                        Error code describing fault

                 <B>Notes:</B>
                        Code 0x8001: Firmware not compatible with chip architecture. This fault occurs when firmware compiled for a different microprocessor core is loaded.
                        Code 0x8006: Part ID is not defined. This can occur is device is not EFUSE'd properly.
                        Code 0x8007: PHY thermal shutdown event.
                        Code 0x8008: SFP-DDMI static value FLASH load failure.
                        Code 0x8009: SFP-DDMI SMBus slave address does not properly map to memory space.
                        Code 0x9001: Provisioning error.
                        Code 0x9002: Provisioning error in procmon targets.
                        Code 0x9003: Interpreter - Bad training type.
                        Code 0x9004: Interpreter - Uninitialized program section.
                        Code 0x9005: Interpreter - Invalid program section address.
                        Code 0x9006: PLL calibration adjustment - wrong calibration type.
                        Code 0xA002: Unknown state in system-side state machine.
                        Code 0xA003: Unknown state in SERDES state machine.
                        Code 0xA009: Unknown configutation in SIF LED handler.
                        Code 0xA00A: Incorrect SD mode when getting provisioning type.
                        Code 0xA00B: Unknown rate in SIF XFI Init.
                        Code 0xA00C: Unknown target configuration.
                        Code 0xA00D: Provisioning error in SIF init.
                        Code 0xA00E: Unknown SD mode in linkup check.
                        Code 0xA00F: Unknown SD mode in SERDES init.
                        Code 0xA010: SERDES init - PLL locked not asserted.
                        Code 0xA011: SERDES calibration - invalid state.
                        Code 0xA012: Unknown state in rate adaptation autoneg state machine.
                        Code 0xA013: Unknown state in SERDES autoneg training state machine.
                        Code 0xA014: Unknown mode in SERDES autoneg training state machine.
                        Code 0xA015: Unknown rate for XGS clock select.
                        Code 0xDEAD: Uncorrectable IRAM parity error.
                        Code 0xDEAE: DRAM parity error.
                        Code 0xDD00: CRC16 IRAM check failure (IRAM load error).
                        Code 0xFACA: E-Fuse CRC16 check failure (E-Fuse is corrupted)  */
      unsigned int   message : 16;    /* 1E.C850.F:0  RO       */
                     /* Error code describing fault  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalFaultMessage_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Cable Diagnostic Impedance: 1E.C880 */
/*                  Global Cable Diagnostic Impedance: 1E.C880 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Cable Diagnostic Impedance */
  union
  {
    struct
    {
                    /*! \brief 1E.C880.2:0 RO Pair A Reflection #4 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u0.bits_0.pairAReflection_4

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the fourth worst reflection on Pair A. The corresponding length of this reflection from the PHY is given in  See Global Power Control - Address 1E.21   */
      unsigned int   pairAReflection_4 : 3;    /* 1E.C880.2:0  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C880.3 RO Reserved 4
                        AQ_GlobalCableDiagnosticImpedance_CAL.u0.bits_0.reserved_4

                        

                        Reserved
                        
  */
      unsigned int   reserved_4 : 1;    /* 1E.C880.3  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C880.6:4 RO Pair A Reflection #3 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u0.bits_0.pairAReflection_3

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the third worst reflection on Pair A. The corresponding length of this reflection from the PHY is given in  See Global Power Control - Address 1E.21   */
      unsigned int   pairAReflection_3 : 3;    /* 1E.C880.6:4  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C880.7 RO Reserved 3
                        AQ_GlobalCableDiagnosticImpedance_CAL.u0.bits_0.reserved_3

                        

                        Reserved
                        
  */
      unsigned int   reserved_3 : 1;    /* 1E.C880.7  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C880.A:8 RO Pair A Reflection #2 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u0.bits_0.pairAReflection_2

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the second worst reflection on Pair A. The corresponding length of this reflection from the PHY is given in  See Global Power Control - Address 1E.21   */
      unsigned int   pairAReflection_2 : 3;    /* 1E.C880.A:8  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C880.B RO Reserved 2
                        AQ_GlobalCableDiagnosticImpedance_CAL.u0.bits_0.reserved_2

                        

                        Reserved
                        
  */
      unsigned int   reserved_2 : 1;    /* 1E.C880.B  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C880.E:C RO Pair A Reflection #1 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u0.bits_0.pairAReflection_1

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the first worst reflection on Pair A. The corresponding length of this reflection from the PHY is given in  See Global Power Control - Address 1E.21   */
      unsigned int   pairAReflection_1 : 3;    /* 1E.C880.E:C  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C880.F RO Reserved 1
                        AQ_GlobalCableDiagnosticImpedance_CAL.u0.bits_0.reserved_1

                        

                        Reserved
                        
  */
      unsigned int   reserved_1 : 1;    /* 1E.C880.F  RO       */
                     /* Reserved
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Cable Diagnostic Impedance */
  union
  {
    struct
    {
                    /*! \brief 1E.C881.2:0 RO Pair B Reflection #4 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u1.bits_1.pairBReflection_4

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the fourth worst reflection on Pair B. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 2 - Address 1E.32 - 1E.33   */
      unsigned int   pairBReflection_4 : 3;    /* 1E.C881.2:0  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C881.3 RO Reserved 8
                        AQ_GlobalCableDiagnosticImpedance_CAL.u1.bits_1.reserved_8

                        

                        Reserved
                        
  */
      unsigned int   reserved_8 : 1;    /* 1E.C881.3  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C881.6:4 RO Pair B Reflection #3 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u1.bits_1.pairBReflection_3

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the third worst reflection on Pair B. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 2 - Address 1E.32 - 1E.33   */
      unsigned int   pairBReflection_3 : 3;    /* 1E.C881.6:4  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C881.7 RO Reserved 7
                        AQ_GlobalCableDiagnosticImpedance_CAL.u1.bits_1.reserved_7

                        

                        Reserved
                        
  */
      unsigned int   reserved_7 : 1;    /* 1E.C881.7  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C881.A:8 RO Pair B Reflection #2 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u1.bits_1.pairBReflection_2

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the second worst reflection on Pair B. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 2 - Address 1E.32 - 1E.33   */
      unsigned int   pairBReflection_2 : 3;    /* 1E.C881.A:8  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C881.B RO Reserved 6
                        AQ_GlobalCableDiagnosticImpedance_CAL.u1.bits_1.reserved_6

                        

                        Reserved
                        
  */
      unsigned int   reserved_6 : 1;    /* 1E.C881.B  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C881.E:C RO Pair B Reflection #1 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u1.bits_1.pairBReflection_1

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the first worst reflection on Pair B. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 2 - Address 1E.32 - 1E.33   */
      unsigned int   pairBReflection_1 : 3;    /* 1E.C881.E:C  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C881.F RO Reserved 5
                        AQ_GlobalCableDiagnosticImpedance_CAL.u1.bits_1.reserved_5

                        

                        Reserved
                        
  */
      unsigned int   reserved_5 : 1;    /* 1E.C881.F  RO       */
                     /* Reserved
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Cable Diagnostic Impedance */
  union
  {
    struct
    {
                    /*! \brief 1E.C882.2:0 RO Pair C Reflection #4 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u2.bits_2.pairCReflection_4

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the fourth worst reflection on Pair C. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.33   */
      unsigned int   pairCReflection_4 : 3;    /* 1E.C882.2:0  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C882.3 RO Reserved 12
                        AQ_GlobalCableDiagnosticImpedance_CAL.u2.bits_2.reserved_12

                        

                        Reserved
                        
  */
      unsigned int   reserved_12 : 1;    /* 1E.C882.3  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C882.6:4 RO Pair C Reflection #3 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u2.bits_2.pairCReflection_3

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the third worst reflection on Pair C. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.33   */
      unsigned int   pairCReflection_3 : 3;    /* 1E.C882.6:4  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C882.7 RO Reserved 11
                        AQ_GlobalCableDiagnosticImpedance_CAL.u2.bits_2.reserved_11

                        

                        Reserved
                        
  */
      unsigned int   reserved_11 : 1;    /* 1E.C882.7  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C882.A:8 RO Pair C Reflection #2 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u2.bits_2.pairCReflection_2

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the second worst reflection on Pair C. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.33   */
      unsigned int   pairCReflection_2 : 3;    /* 1E.C882.A:8  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C882.B RO Reserved 10
                        AQ_GlobalCableDiagnosticImpedance_CAL.u2.bits_2.reserved_10

                        

                        Reserved
                        
  */
      unsigned int   reserved_10 : 1;    /* 1E.C882.B  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C882.E:C RO Pair C Reflection #1 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u2.bits_2.pairCReflection_1

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the first worst reflection on Pair C. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.33   */
      unsigned int   pairCReflection_1 : 3;    /* 1E.C882.E:C  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C882.F RO Reserved 9
                        AQ_GlobalCableDiagnosticImpedance_CAL.u2.bits_2.reserved_9

                        

                        Reserved
                        
  */
      unsigned int   reserved_9 : 1;    /* 1E.C882.F  RO       */
                     /* Reserved
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Cable Diagnostic Impedance */
  union
  {
    struct
    {
                    /*! \brief 1E.C883.2:0 RO Pair D Reflection #4 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u3.bits_3.pairDReflection_4

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the fourth worst reflection on Pair D. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.34 - 1E.35   */
      unsigned int   pairDReflection_4 : 3;    /* 1E.C883.2:0  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C883.3 RO Reserved 16
                        AQ_GlobalCableDiagnosticImpedance_CAL.u3.bits_3.reserved_16

                        

                        Reserved
                        
  */
      unsigned int   reserved_16 : 1;    /* 1E.C883.3  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C883.6:4 RO Pair D Reflection #3 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u3.bits_3.pairDReflection_3

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the third worst reflection on Pair D. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.34 - 1E.35   */
      unsigned int   pairDReflection_3 : 3;    /* 1E.C883.6:4  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C883.7 RO Reserved 15
                        AQ_GlobalCableDiagnosticImpedance_CAL.u3.bits_3.reserved_15

                        

                        Reserved
                        
  */
      unsigned int   reserved_15 : 1;    /* 1E.C883.7  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C883.A:8 RO Pair D Reflection #2 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u3.bits_3.pairDReflection_2

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the second worst reflection on Pair D. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.34 - 1E.35   */
      unsigned int   pairDReflection_2 : 3;    /* 1E.C883.A:8  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C883.B RO Reserved 14
                        AQ_GlobalCableDiagnosticImpedance_CAL.u3.bits_3.reserved_14

                        

                        Reserved
                        
  */
      unsigned int   reserved_14 : 1;    /* 1E.C883.B  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C883.E:C RO Pair D Reflection #1 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_CAL.u3.bits_3.pairDReflection_1

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the first worst reflection on Pair D. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.34 - 1E.35   */
      unsigned int   pairDReflection_1 : 3;    /* 1E.C883.E:C  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C883.F RO Reserved 13
                        AQ_GlobalCableDiagnosticImpedance_CAL.u3.bits_3.reserved_13

                        

                        Reserved
                        
  */
      unsigned int   reserved_13 : 1;    /* 1E.C883.F  RO       */
                     /* Reserved
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_GlobalCableDiagnosticImpedance_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Status: 1E.C884 */
/*                  Global Status: 1E.C884 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C884.7:0 RO Cable Length [7:0]
                        AQ_GlobalStatus_CAL.u0.bits_0.cableLength

                        

                        The estimated length of the cable in meters
                        

                 <B>Notes:</B>
                        The length of the cable shown here is estimated from the cable diagnostic engine and should be accurate to +/-1m.  */
      unsigned int   cableLength : 8;    /* 1E.C884.7:0  RO       */
                     /* The estimated length of the cable in meters
                          */
                    /*! \brief 1E.C884.F:8 RO Reserved Status 0 [7:0]
                        AQ_GlobalStatus_CAL.u0.bits_0.reservedStatus_0

                        

                        Reserved
                        
  */
      unsigned int   reservedStatus_0 : 8;    /* 1E.C884.F:8  RO       */
                     /* Reserved
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Reserved Status: 1E.C885 */
/*                  Global Reserved Status: 1E.C885 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C885.3:0 ROSPD Provisioning ID [3:0]
                        AQ_GlobalReservedStatus_CAL.u0.bits_0.provisioningID

                        Provisionable Default = 0x0

                        Provisioning ID
                        

                 <B>Notes:</B>
                        Customers may receive multiple ROM images that differ only in their provisioning. This field is used to differentiate those images. This field is used in conjunction with the firmware major and minor revision numbers to uniquely identify ROM images.  */
      unsigned int   provisioningID : 4;    /* 1E.C885.3:0  ROSPD      Provisionable Default = 0x0 */
                     /* Provisioning ID
                          */
                    /*! \brief 1E.C885.7:4 ROSPD Firmware Build ID [3:0]
                        AQ_GlobalReservedStatus_CAL.u0.bits_0.firmwareBuildID

                        Provisionable Default = 0x0

                        Firmware Build ID
                        

                 <B>Notes:</B>
                        Customers may receive multiple ROM images that differ only in their provisioning. This field is used to differentiate those images. This field is used in conjunction with the firmware major and minor revision numbers to uniquely identify ROM images.  */
      unsigned int   firmwareBuildID : 4;    /* 1E.C885.7:4  ROSPD      Provisionable Default = 0x0 */
                     /* Firmware Build ID
                          */
                    /*! \brief 1E.C885.9:8 ROSPD XENPAK NVR Status [1:0]
                        AQ_GlobalReservedStatus_CAL.u0.bits_0.xenpakNvrStatus

                        Provisionable Default = 0x0

                        Status of XENPAK NVR:
                        0: NVR not enabled
                        1: Last NVR operation succeeded
                        2: Last NVR operation failed
                        3: Reserved
                        

                 <B>Notes:</B>
                        XENPAK register space is mirrored in NVR (SPI ROM). This register indicates the status of the last NVR operation.  */
      unsigned int   xenpakNvrStatus : 2;    /* 1E.C885.9:8  ROSPD      Provisionable Default = 0x0 */
                     /* Status of XENPAK NVR:
                        0: NVR not enabled
                        1: Last NVR operation succeeded
                        2: Last NVR operation failed
                        3: Reserved
                          */
                    /*! \brief 1E.C885.F:A RO Nearly Seconds MSW[5:0]
                        AQ_GlobalReservedStatus_CAL.u0.bits_0.nearlySecondsMSW

                        

                        Bits 16 to 21 of the 22 bit "Nearly Seconds" uptime counter.
                        

                 <B>Notes:</B>
                        The "Nearly Seconds" counter is incremented every 1024 milliseconds.  */
      unsigned int   nearlySecondsMSW : 6;    /* 1E.C885.F:A  RO       */
                     /* Bits 16 to 21 of the 22 bit "Nearly Seconds" uptime counter.
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C886.F:0 RO Nearly Seconds LSW [F:0]
                        AQ_GlobalReservedStatus_CAL.u1.bits_1.nearlySecondsLSW

                        

                        Bits 0 to 15 of the 22 bit "Nearly Seconds" uptime counter
                        

                 <B>Notes:</B>
                        The "Nearly Seconds" counter is incremented every 1024 milliseconds.  */
      unsigned int   nearlySecondsLSW : 16;    /* 1E.C886.F:0  RO       */
                     /* Bits 0 to 15 of the 22 bit "Nearly Seconds" uptime counter
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C887.D:0 RO Reserved Status 3 [D:0]
                        AQ_GlobalReservedStatus_CAL.u2.bits_2.reservedStatus_3

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_3 : 14;    /* 1E.C887.D:0  RO       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C887.E ROS Power Up Stall Status
                        AQ_GlobalReservedStatus_CAL.u2.bits_2.powerUpStallStatus

                        Default = 0x0

                        1 = FW is stalled at power up
                        0 = Firmware is unstalled
                        
  */
      unsigned int   powerUpStallStatus : 1;    /* 1E.C887.E  ROS      Default = 0x0 */
                     /* 1 = FW is stalled at power up
                        0 = Firmware is unstalled
                          */
                    /*! \brief 1E.C887.F ROS DTE Status
                        AQ_GlobalReservedStatus_CAL.u2.bits_2.dteStatus

                        Default = 0x0

                        1 = Need power
                        0 = Don't need power
                        
  */
      unsigned int   dteStatus : 1;    /* 1E.C887.F  ROS      Default = 0x0 */
                     /* 1 = Need power
                        0 = Don't need power
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C888.2:0 RO Rate [2:0]
                        AQ_GlobalReservedStatus_CAL.u3.bits_3.rate

                        

                        0x7 - 0x6 = reserved
                        0x5 = 5G
                        0x4 = 2.5G
                        0x3 = 10G
                        0x2 = 1G
                        0x1 = 100M
                        0x0 = invalid
                        

                 <B>Notes:</B>
                        These bits report the selected rate for the loopback and packet generation.  */
      unsigned int   rate : 3;    /* 1E.C888.2:0  RO       */
                     /* 0x7 - 0x6 = reserved
                        0x5 = 5G
                        0x4 = 2.5G
                        0x3 = 10G
                        0x2 = 1G
                        0x1 = 100M
                        0x0 = invalid
                          */
                    /*! \brief 1E.C888.3 RO System I/F Packet Generation Status
                        AQ_GlobalReservedStatus_CAL.u3.bits_3.systemI_fPacketGenerationStatus

                        

                        1 = CRPAT packet generation out 10G system interface
                        0 = No CRPAT packet generation out 10G system interface
                        

                 <B>Notes:</B>
                        Reports whether the CRPAT packet generator in the PHY outputs on the selected system interface at the selected rate.  */
      unsigned int   systemI_fPacketGenerationStatus : 1;    /* 1E.C888.3  RO       */
                     /* 1 = CRPAT packet generation out 10G system interface
                        0 = No CRPAT packet generation out 10G system interface
                          */
                    /*! \brief 1E.C888.4 RO Look-Aside Port Packet Generation Status
                        AQ_GlobalReservedStatus_CAL.u3.bits_3.look_asidePortPacketGenerationStatus

                        

                        1 = CRPAT packet generation out 10G look-aside interface (KR0)
                        0 = No CRPAT packet generation out 10G look-aside interface (KR0)
                        

                 <B>Notes:</B>
                        Reports whether the CRPAT packet generator in the PHY outputs on the KR0 interface at the selected rate.  */
      unsigned int   look_asidePortPacketGenerationStatus : 1;    /* 1E.C888.4  RO       */
                     /* 1 = CRPAT packet generation out 10G look-aside interface (KR0)
                        0 = No CRPAT packet generation out 10G look-aside interface (KR0)
                          */
                    /*! \brief 1E.C888.5 RO MDI Packet Generation Status
                        AQ_GlobalReservedStatus_CAL.u3.bits_3.mdiPacketGenerationStatus

                        

                        1 = CRPAT packet generation out MDI interface
                        0 = No CRPAT packet generation out MDI interface
                        

                 <B>Notes:</B>
                        Reports whether the CRPAT packet generator in the PHY outputs on the MDI interface at the selected rate.  */
      unsigned int   mdiPacketGenerationStatus : 1;    /* 1E.C888.5  RO       */
                     /* 1 = CRPAT packet generation out MDI interface
                        0 = No CRPAT packet generation out MDI interface
                          */
                    /*! \brief 1E.C888.A:6 RO Reserved Status 4 [4:0]
                        AQ_GlobalReservedStatus_CAL.u3.bits_3.reservedStatus_4

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_4 : 5;    /* 1E.C888.A:6  RO       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C888.F:B RO Loopback Status [4:0]
                        AQ_GlobalReservedStatus_CAL.u3.bits_3.loopbackStatus

                        

                        0x00 = No loopback
                        0x01 = System Interface - System Loopback
                        0x02 = System Interface - System Loopback with Passthrough
                        0x03 = System Interface - Network Loopback
                        0x04 = System Interface - Network Loopback with Passthrough
                        0x05 = System Interface - Network Loopback with Passthrough and Merge
                        0x06 = System Interface - Peer-to-peer loopback
                        0x07 - 0x08 = Reserved
                        0x09 = Network Interface - System Loopback
                        0x0A = Network Interface - System Loopback with Passthrough
                        0x0B = Network Interface - Network Loopback
                        0x0C = Network Interface - Network Loopback with Passthrough
                        0x0D = Network Interface - Peer-to-peer loopback
                        0x0E - 0x0F = Reserved
                        0x10 = Cross-connect System Loopback
                        0x11 = Cross-connect Network Loopback
                        0x12 - 0x13 = Reserved
                        0x14 = Network Interface - System Loopback via Loopback Plug
                        0x15 - 0x1F = Reserved
                        

                 <B>Notes:</B>
                        These bits, in conjunction with the chip configuration and the rate (Bits 1:0), report the selected loopback.
                        
                          */
      unsigned int   loopbackStatus : 5;    /* 1E.C888.F:B  RO       */
                     /* 0x00 = No loopback
                        0x01 = System Interface - System Loopback
                        0x02 = System Interface - System Loopback with Passthrough
                        0x03 = System Interface - Network Loopback
                        0x04 = System Interface - Network Loopback with Passthrough
                        0x05 = System Interface - Network Loopback with Passthrough and Merge
                        0x06 = System Interface - Peer-to-peer loopback
                        0x07 - 0x08 = Reserved
                        0x09 = Network Interface - System Loopback
                        0x0A = Network Interface - System Loopback with Passthrough
                        0x0B = Network Interface - Network Loopback
                        0x0C = Network Interface - Network Loopback with Passthrough
                        0x0D = Network Interface - Peer-to-peer loopback
                        0x0E - 0x0F = Reserved
                        0x10 = Cross-connect System Loopback
                        0x11 = Cross-connect Network Loopback
                        0x12 - 0x13 = Reserved
                        0x14 = Network Interface - System Loopback via Loopback Plug
                        0x15 - 0x1F = Reserved
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C889.F:0 RO Reserved Status 5 [F:0]
                        AQ_GlobalReservedStatus_CAL.u4.bits_4.reservedStatus_5

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_5 : 16;    /* 1E.C889.F:0  RO       */
                     /* Reserved for future use
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C88A.F:0 RO Reserved Status 6 [F:0]
                        AQ_GlobalReservedStatus_CAL.u5.bits_5.reservedStatus_6

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_6 : 16;    /* 1E.C88A.F:0  RO       */
                     /* Reserved for future use
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C88B.F:0 RO Reserved Status 7 [F:0]
                        AQ_GlobalReservedStatus_CAL.u6.bits_6.reservedStatus_7

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_7 : 16;    /* 1E.C88B.F:0  RO       */
                     /* Reserved for future use
                          */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C88C.F:0 RO Reserved Status 8 [F:0]
                        AQ_GlobalReservedStatus_CAL.u7.bits_7.reservedStatus_8

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_8 : 16;    /* 1E.C88C.F:0  RO       */
                     /* Reserved for future use
                          */
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C88D.3:0 ROSPD Resolved Active Lane Capability [3:0]
                        AQ_GlobalReservedStatus_CAL.u8.bits_8.resolvedActiveLaneCapability

                        Provisionable Default = 0x0

                        Resolved Active Lane Mask
                        0x1 = 1 Pair mode
                        0x3 = 2 Pair Mode
                        0xF = 4 Pair Mode
                        
  */
      unsigned int   resolvedActiveLaneCapability : 4;    /* 1E.C88D.3:0  ROSPD      Provisionable Default = 0x0 */
                     /* Resolved Active Lane Mask
                        0x1 = 1 Pair mode
                        0x3 = 2 Pair Mode
                        0xF = 4 Pair Mode
                          */
                    /*! \brief 1E.C88D.7:4 ROSPD Resolved Constellation [3:0]
                        AQ_GlobalReservedStatus_CAL.u8.bits_8.resolvedConstellation

                        Provisionable Default = 0x0

                        0 = Invalid
                        1 = PAM16
                        2 = DSQ 128
                        3 = DSQ128RS
                        4 = SQ64
                        5 = 1000BaseT
                        6 = 100BaseT
                        
  */
      unsigned int   resolvedConstellation : 4;    /* 1E.C88D.7:4  ROSPD      Provisionable Default = 0x0 */
                     /* 0 = Invalid
                        1 = PAM16
                        2 = DSQ 128
                        3 = DSQ128RS
                        4 = SQ64
                        5 = 1000BaseT
                        6 = 100BaseT
                          */
                    /*! \brief 1E.C88D.F:8 ROSPD Reserved Status 9 [7:0]
                        AQ_GlobalReservedStatus_CAL.u8.bits_8.reservedStatus_9

                        Provisionable Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_9 : 8;    /* 1E.C88D.F:8  ROSPD      Provisionable Default = 0x00 */
                     /* Reserved for future use
                          */
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C88E.F:0 ROSPD Resolved Baud Rate [F:0]
                        AQ_GlobalReservedStatus_CAL.u9.bits_9.resolvedBaudRate

                        Provisionable Default = 0x0000

                        Baud rate in Mega Symbols/sec
                        
  */
      unsigned int   resolvedBaudRate : 16;    /* 1E.C88E.F:0  ROSPD      Provisionable Default = 0x0000 */
                     /* Baud rate in Mega Symbols/sec
                          */
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C88F.F:0 ROSPD Customer Provisioning ID [F:0]
                        AQ_GlobalReservedStatus_CAL.u10.bits_10.customerProvisioningID

                        Provisionable Default = 0x0000

                        TODO
                        

                 <B>Notes:</B>
                        TODO  */
      unsigned int   customerProvisioningID : 16;    /* 1E.C88F.F:0  ROSPD      Provisionable Default = 0x0000 */
                     /* TODO
                          */
    } bits_10;
    uint16_t word_10;
  } u10;
} AQ_GlobalReservedStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Alarms: 1E.CC00 */
/*                  Global Alarms: 1E.CC00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Alarms */
  union
  {
    struct
    {
                    /*! \brief 1E.CC00.0 LH Reserved Alarm D
                        AQ_GlobalAlarms_CAL.u0.bits_0.reservedAlarmD

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedAlarmD : 1;    /* 1E.CC00.0  LH       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.CC00.1 LH Reserved Alarm C
                        AQ_GlobalAlarms_CAL.u0.bits_0.reservedAlarmC

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedAlarmC : 1;    /* 1E.CC00.1  LH       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.CC00.2 LH Reserved Alarm B
                        AQ_GlobalAlarms_CAL.u0.bits_0.reservedAlarmB

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedAlarmB : 1;    /* 1E.CC00.2  LH       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.CC00.3 LH Reserved Alarm A
                        AQ_GlobalAlarms_CAL.u0.bits_0.reservedAlarmA

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedAlarmA : 1;    /* 1E.CC00.3  LH       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.CC00.4 LH Device Fault
                        AQ_GlobalAlarms_CAL.u0.bits_0.deviceFault

                        

                        1 = Fault

                 <B>Notes:</B>
                        When set, a fault has been detected by the uP and the associated 16 bit error code is visible in  See Global Configuration Fault Message: Address 1E.C850   */
      unsigned int   deviceFault : 1;    /* 1E.CC00.4  LH       */
                     /* 1 = Fault  */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.CC00.6 LH Reset completed
                        AQ_GlobalAlarms_CAL.u0.bits_0.resetCompleted

                        

                        1 = Chip wide reset completed

                 <B>Notes:</B>
                        This bit is set by the microprocessor when it has completed it's initialization sequence. This bit is mirrored in 1.CC02.0  */
      unsigned int   resetCompleted : 1;    /* 1E.CC00.6  LH       */
                     /* 1 = Chip wide reset completed  */
      unsigned int   reserved1 : 4;
                    /*! \brief 1E.CC00.B LH Low Temperature Warning
                        AQ_GlobalAlarms_CAL.u0.bits_0.lowTemperatureWarning

                        

                        1 = Low temperature warning threshold has been exceeded
                        

                 <B>Notes:</B>
                        
                        
                        
                        
                        These bits mirror the matching bit in 1.A070 and 1.A074. These bits are driven by Bits E:B in  See Global General Status 1: Address 1E.C830 .  */
      unsigned int   lowTemperatureWarning : 1;    /* 1E.CC00.B  LH       */
                     /* 1 = Low temperature warning threshold has been exceeded
                          */
                    /*! \brief 1E.CC00.C LH High Temperature Warning
                        AQ_GlobalAlarms_CAL.u0.bits_0.highTemperatureWarning

                        

                        1 = High temperature warning threshold has been exceeded
                        

                 <B>Notes:</B>
                        
                        
                        
                        
                        These bits mirror the matching bit in 1.A070 and 1.A074. These bits are driven by Bits E:B in  See Global General Status 1: Address 1E.C830 .  */
      unsigned int   highTemperatureWarning : 1;    /* 1E.CC00.C  LH       */
                     /* 1 = High temperature warning threshold has been exceeded
                          */
                    /*! \brief 1E.CC00.D LH Low Temperature Failure
                        AQ_GlobalAlarms_CAL.u0.bits_0.lowTemperatureFailure

                        

                        1 = Low temperature failure threshold has been exceeded
                        

                 <B>Notes:</B>
                        
                        
                        
                        
                        These bits mirror the matching bit in 1.A070 and 1.A074. These bits are driven by Bits E:B in  See Global General Status 1: Address 1E.C830 .  */
      unsigned int   lowTemperatureFailure : 1;    /* 1E.CC00.D  LH       */
                     /* 1 = Low temperature failure threshold has been exceeded
                          */
                    /*! \brief 1E.CC00.E LH High Temperature Failure
                        AQ_GlobalAlarms_CAL.u0.bits_0.highTemperatureFailure

                        

                        1 = High temperature failure threshold has been exceeded
                        

                 <B>Notes:</B>
                        
                        
                        
                        
                        These bits mirror the matching bit in 1.A070 and 1.A074. These bits are driven by Bits E:B in  See Global General Status 1: Address 1E.C830 .  */
      unsigned int   highTemperatureFailure : 1;    /* 1E.CC00.E  LH       */
                     /* 1 = High temperature failure threshold has been exceeded
                          */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Alarms */
  union
  {
    struct
    {
                    /*! \brief 1E.CC01.0 LH Diagnostic Alarm
                        AQ_GlobalAlarms_CAL.u1.bits_1.diagnosticAlarm

                        

                        1 = Alarm triggered by a write to 1E.C470.7
                        

                 <B>Notes:</B>
                        A diagnostic alarm use to test system alarm circuitry.  */
      unsigned int   diagnosticAlarm : 1;    /* 1E.CC01.0  LH       */
                     /* 1 = Alarm triggered by a write to 1E.C470.7
                          */
      unsigned int   reserved1 : 6;
                    /*! \brief 1E.CC01.7 LH MDIO Command Handling Overflow
                        AQ_GlobalAlarms_CAL.u1.bits_1.mdioCommandHandlingOverflow

                        

                        1 = PHY was issued more MDIO requests than it could service in it's request buffer
                        

                 <B>Notes:</B>
                        Assertion of this bit means that more MDIO commands were issued than FW could handle.  */
      unsigned int   mdioCommandHandlingOverflow : 1;    /* 1E.CC01.7  LH       */
                     /* 1 = PHY was issued more MDIO requests than it could service in it's request buffer
                          */
                    /*! \brief 1E.CC01.8 LH SMB0 State Machine Timeout
                        AQ_GlobalAlarms_CAL.u1.bits_1.smb0StateMachineTimeout

                        

                        1 = FW SMB0 management state machine timed out
                        

                 <B>Notes:</B>
                        This alarm indicates that the firmware state machine that manages the SMB0 controller as a slave SMBus device was forced back to its idle state. This can happen when the controller receives an unexpected or invalid input sequence from the bus master.  */
      unsigned int   smb0StateMachineTimeout : 1;    /* 1E.CC01.8  LH       */
                     /* 1 = FW SMB0 management state machine timed out
                          */
                    /*! \brief 1E.CC01.9 LH SFP DDMI Memory Load Failed
                        AQ_GlobalAlarms_CAL.u1.bits_1.sfpDdmiMemoryLoadFailed

                        

                        1 = The PHY failed to load static values from FLASH for the SFP-DDMI memory maps
                        

                 <B>Notes:</B>
                        When the PHY firmware is being used to implement the SFP Digital Diagnosic Monitoring Interface via the SMB0 SMBus controller, static values for memory maps will be loaded from FLASH during initialization. If this load fails, this alarm will be set.  */
      unsigned int   sfpDdmiMemoryLoadFailed : 1;    /* 1E.CC01.9  LH       */
                     /* 1 = The PHY failed to load static values from FLASH for the SFP-DDMI memory maps
                          */
                    /*! \brief 1E.CC01.A LH Fast Link Drop
                        AQ_GlobalAlarms_CAL.u1.bits_1.fastLinkDrop

                        

                        1 = PHY has entered link recovery state
                        

                 <B>Notes:</B>
                        This alarm is asserted before entering PHY link recovery state. This alarm can be used as an early sign for a link drop in case of unsuccessful  link recovery.  */
      unsigned int   fastLinkDrop : 1;    /* 1E.CC01.A  LH       */
                     /* 1 = PHY has entered link recovery state
                          */
                    /*! \brief 1E.CC01.B LH DTE Status Change
                        AQ_GlobalAlarms_CAL.u1.bits_1.dteStatusChange

                        

                        1 = DTE status change
                        

                 <B>Notes:</B>
                        Change in 1E.C887[F].  */
      unsigned int   dteStatusChange : 1;    /* 1E.CC01.B  LH       */
                     /* 1 = DTE status change
                          */
                    /*! \brief 1E.CC01.C LH IP Phone Detect
                        AQ_GlobalAlarms_CAL.u1.bits_1.ipPhoneDetect

                        

                        1 = IP Phone Detect
                        

                 <B>Notes:</B>
                        Assertion of this bit means that the presence of an IP Phone has been detected.  */
      unsigned int   ipPhoneDetect : 1;    /* 1E.CC01.C  LH       */
                     /* 1 = IP Phone Detect
                          */
                    /*! \brief 1E.CC01.D RO XENPAK Alarm
                        AQ_GlobalAlarms_CAL.u1.bits_1.xenpakAlarm

                        

                        1 = XENPAK Alarm
                        
  */
      unsigned int   xenpakAlarm : 1;    /* 1E.CC01.D  RO       */
                     /* 1 = XENPAK Alarm
                          */
                    /*! \brief 1E.CC01.E LH Smart Power-Down Entered
                        AQ_GlobalAlarms_CAL.u1.bits_1.smartPower_downEntered

                        

                        1 = Smart Power-Down State Entered
                        

                 <B>Notes:</B>
                        When this bit is set, it indicates that the Smart Power-Down state was entered  */
      unsigned int   smartPower_downEntered : 1;    /* 1E.CC01.E  LH       */
                     /* 1 = Smart Power-Down State Entered
                          */
      unsigned int   reserved0 : 1;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Alarms */
  union
  {
    struct
    {
                    /*! \brief 1E.CC02.0 LH Watchdog Timer Alarm
                        AQ_GlobalAlarms_CAL.u2.bits_2.watchdogTimerAlarm

                        

                        1 = Watchdog timer alarm
                        
  */
      unsigned int   watchdogTimerAlarm : 1;    /* 1E.CC02.0  LH       */
                     /* 1 = Watchdog timer alarm
                          */
                    /*! \brief 1E.CC02.1 LH MDIO Timeout Error
                        AQ_GlobalAlarms_CAL.u2.bits_2.mdioTimeoutError

                        

                        1 = MDIO timeout detected
                        
  */
      unsigned int   mdioTimeoutError : 1;    /* 1E.CC02.1  LH       */
                     /* 1 = MDIO timeout detected
                          */
                    /*! \brief 1E.CC02.2 LH MDIO MMD Error
                        AQ_GlobalAlarms_CAL.u2.bits_2.mdioMMD_Error

                        

                        1 = Invalid MMD address detected
                        
  */
      unsigned int   mdioMMD_Error : 1;    /* 1E.CC02.2  LH       */
                     /* 1 = Invalid MMD address detected
                          */
      unsigned int   reserved2 : 2;
                    /*! \brief 1E.CC02.5 LRF SMB0 Slave Data Bank Change
                        AQ_GlobalAlarms_CAL.u2.bits_2.smb0SlaveDataBankChange

                        

                        SMB0 Slave Data Bank Change
                        SIGNAL="smb0_slave_data_bank_change"
                        
  */
      unsigned int   smb0SlaveDataBankChange : 1;    /* 1E.CC02.5  LRF       */
                     /* SMB0 Slave Data Bank Change
                        SIGNAL="smb0_slave_data_bank_change"
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.CC02.9:8 LH uP IRAM Parity Error [1:0]
                        AQ_GlobalAlarms_CAL.u2.bits_2.upIramParityError

                        

                        1 = Parity error detected in the uP IRAM
                        

                 <B>Notes:</B>
                        Bit 0 indicates a parity error was detected in the uP IRAM but was corrected.
                        Bit 1 indicates a multiple parity errors were detected in the uP IRAM and could not be corrected.
                        The uP IRAM is protected with ECC.  */
      unsigned int   upIramParityError : 2;    /* 1E.CC02.9:8  LH       */
                     /* 1 = Parity error detected in the uP IRAM
                          */
                    /*! \brief 1E.CC02.B:A LH uP DRAM Parity Error [1:0]
                        AQ_GlobalAlarms_CAL.u2.bits_2.upDramParityError

                        

                        1 = Parity error detected in the uP DRAM
                        

                 <B>Notes:</B>
                        Bit 0 indicates a parity error was detected in the uP DRAM but was corrected.
                        Bit 1 indicates a multiple parity errors were detected in the uP DRAM and could not be corrected.
                        The uP DRAM is protected with ECC.  */
      unsigned int   upDramParityError : 2;    /* 1E.CC02.B:A  LH       */
                     /* 1 = Parity error detected in the uP DRAM
                          */
      unsigned int   reserved0 : 2;
                    /*! \brief 1E.CC02.E LH Mailbox Operation: Complete
                        AQ_GlobalAlarms_CAL.u2.bits_2.mailboxOperation_Complete

                        

                        1 = Mailbox operation is complete
                        

                 <B>Notes:</B>
                        Mailbox interface is ready interrupt for registers  See Global Vendor Specific Control - Address 1E.C000  -  See Global Vendor Specific Provisioning 5 - Address 1E.C404   */
      unsigned int   mailboxOperation_Complete : 1;    /* 1E.CC02.E  LH       */
                     /* 1 = Mailbox operation is complete
                          */
                    /*! \brief 1E.CC02.F LH NVR Operation Complete
                        AQ_GlobalAlarms_CAL.u2.bits_2.nvrOperationComplete

                        

                        1 = NVR operation is complete
                        

                 <B>Notes:</B>
                        NVR interface is ready interrupt for registers  See Global NVR Interface 1: Address 1E.100  -  See Global NVR Provisioning Data MSW - Address 1E.17 .  */
      unsigned int   nvrOperationComplete : 1;    /* 1E.CC02.F  LH       */
                     /* 1 = NVR operation is complete
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_GlobalAlarms_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Interrupt Mask: 1E.D400 */
/*                  Global Interrupt Mask: 1E.D400 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Interrupt Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.D400.0 R/WPD Reserved Alarm D Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.reservedAlarmDMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmDMask : 1;    /* 1E.D400.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D400.1 R/WPD Reserved Alarm C Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.reservedAlarmCMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmCMask : 1;    /* 1E.D400.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D400.2 R/WPD Reserved Alarm B Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.reservedAlarmBMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmBMask : 1;    /* 1E.D400.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D400.3 R/WPD Reserved Alarm A Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.reservedAlarmAMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmAMask : 1;    /* 1E.D400.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D400.4 R/WPD Device Fault Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.deviceFaultMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   deviceFaultMask : 1;    /* 1E.D400.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.D400.6 R/WPD Reset completed Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.resetCompletedMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   resetCompletedMask : 1;    /* 1E.D400.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved1 : 4;
                    /*! \brief 1E.D400.B R/WPD Low Temperature Warning Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.lowTemperatureWarningMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   lowTemperatureWarningMask : 1;    /* 1E.D400.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D400.C R/WPD High Temperature Warning Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.highTemperatureWarningMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   highTemperatureWarningMask : 1;    /* 1E.D400.C  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D400.D R/WPD Low Temperature Failure Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.lowTemperatureFailureMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   lowTemperatureFailureMask : 1;    /* 1E.D400.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D400.E R/WPD High Temperature Failure Mask
                        AQ_GlobalInterruptMask_CAL.u0.bits_0.highTemperatureFailureMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   highTemperatureFailureMask : 1;    /* 1E.D400.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Interrupt Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.D401.0 R/WPD Diagnostic Alarm Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.diagnosticAlarmMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   diagnosticAlarmMask : 1;    /* 1E.D401.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
      unsigned int   reserved1 : 6;
                    /*! \brief 1E.D401.7 R/WPD MDIO Command Handling Overflow Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.mdioCommandHandlingOverflowMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   mdioCommandHandlingOverflowMask : 1;    /* 1E.D401.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.8 R/WPD SMB0 State Machine Timeout Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.smb0StateMachineTimeoutMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   smb0StateMachineTimeoutMask : 1;    /* 1E.D401.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.9 R/WPD SFP DDMI Memory Load Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.sfpDdmiMemoryLoadMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   sfpDdmiMemoryLoadMask : 1;    /* 1E.D401.9  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.A R/WPD Fast Link Drop Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.fastLinkDropMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   fastLinkDropMask : 1;    /* 1E.D401.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.B R/WPD DTE Status Change Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.dteStatusChangeMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   dteStatusChangeMask : 1;    /* 1E.D401.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.C R/WPD IP Phone Detect Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.ipPhoneDetectMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   ipPhoneDetectMask : 1;    /* 1E.D401.C  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.D R/WPD XENPAK Alarm Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.xenpakAlarmMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   xenpakAlarmMask : 1;    /* 1E.D401.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D401.E R/WPD Smart Power-Down Entered Mask
                        AQ_GlobalInterruptMask_CAL.u1.bits_1.smartPower_downEnteredMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   smartPower_downEnteredMask : 1;    /* 1E.D401.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
      unsigned int   reserved0 : 1;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Interrupt Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.D402.0 R/WPD Watchdog Timer Alarm Mask
                        AQ_GlobalInterruptMask_CAL.u2.bits_2.watchdogTimerAlarmMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   watchdogTimerAlarmMask : 1;    /* 1E.D402.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D402.1 R/WPD MDIO Timeout Error Mask
                        AQ_GlobalInterruptMask_CAL.u2.bits_2.mdioTimeoutErrorMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   mdioTimeoutErrorMask : 1;    /* 1E.D402.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D402.2 R/WPD MDIO MMD Error Mask
                        AQ_GlobalInterruptMask_CAL.u2.bits_2.mdioMMD_ErrorMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   mdioMMD_ErrorMask : 1;    /* 1E.D402.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved2 : 2;
                    /*! \brief 1E.D402.5 R/WPD SMB0 Slave Data Bank Change Mask
                        AQ_GlobalInterruptMask_CAL.u2.bits_2.smb0SlaveDataBankChangeMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   smb0SlaveDataBankChangeMask : 1;    /* 1E.D402.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.D402.9:8 R/WPD uP IRAM Parity Error Mask [1:0]
                        AQ_GlobalInterruptMask_CAL.u2.bits_2.upIramParityErrorMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   upIramParityErrorMask : 2;    /* 1E.D402.9:8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D402.B:A R/WPD uP DRAM Parity Error Mask [1:0]
                        AQ_GlobalInterruptMask_CAL.u2.bits_2.upDramParityErrorMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   upDramParityErrorMask : 2;    /* 1E.D402.B:A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
      unsigned int   reserved0 : 2;
                    /*! \brief 1E.D402.E R/WPD Mailbox Operation Complete Mask
                        AQ_GlobalInterruptMask_CAL.u2.bits_2.mailboxOperationCompleteMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation

                 <B>Notes:</B>
                        Mailbox interface is ready interrupt for registers  See Global Vendor Specific Control - Address 1E.C000  -  See Global Vendor Specific Provisioning 5 - Address 1E.C404   */
      unsigned int   mailboxOperationCompleteMask : 1;    /* 1E.D402.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D402.F R/WPD NVR Operation Complete Mask
                        AQ_GlobalInterruptMask_CAL.u2.bits_2.nvrOperationCompleteMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation

                 <B>Notes:</B>
                        NVR interface is ready interrupt for registers  See Global NVR Interface 1: Address 1E.100  -  See Global NVR Provisioning Data MSW - Address 1E.17   */
      unsigned int   nvrOperationCompleteMask : 1;    /* 1E.D402.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_GlobalInterruptMask_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Chip-Wide Standard Interrupt Flags: 1E.FC00 */
/*                  Global Chip-Wide Standard Interrupt Flags: 1E.FC00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Chip-Wide Standard Interrupt Flags */
  union
  {
    struct
    {
                    /*! \brief 1E.FC00.0 RO All Vendor Alarms Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.allVendorAlarmsInterrupt

                        

                        1 = Interrupt in all vendor alarms
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Global Chip-Wide LASI Vendor Interrupt Flags: Address 1E.FC01 ) and the corresponding mask register. ( See Global Interrupt LASI Mask: Address 1E.FF01 )  */
      unsigned int   allVendorAlarmsInterrupt : 1;    /* 1E.FC00.0  RO       */
                     /* 1 = Interrupt in all vendor alarms
                          */
      unsigned int   reserved0 : 5;
                    /*! \brief 1E.FC00.6 RO GbE Standard Alarms Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.gbeStandardAlarmsInterrupt

                        

                        1 = Interrupt in GbE standard alarms
                        

                 <B>Notes:</B>
                        An interrupt was generated from the TGE core.  */
      unsigned int   gbeStandardAlarmsInterrupt : 1;    /* 1E.FC00.6  RO       */
                     /* 1 = Interrupt in GbE standard alarms
                          */
                    /*! \brief 1E.FC00.7 RO Autonegotiation Standard Alarms 2 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.autonegotiationStandardAlarms_2Interrupt

                        

                        1 = Interrupt in Autonegotiation standard alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Autonegotiation 10GBASE-T Status Register - Address 7.21 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 8 - Address 4.A008 )  */
      unsigned int   autonegotiationStandardAlarms_2Interrupt : 1;    /* 1E.FC00.7  RO       */
                     /* 1 = Interrupt in Autonegotiation standard alarms 2
                          */
                    /*! \brief 1E.FC00.8 RO Autonegotiation Standard Alarms 1 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.autonegotiationStandardAlarms_1Interrupt

                        

                        1 = Interrupt in Autonegotiation standard alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See PHY XS Standard Status 1 - Address 4.1 ) and the corresponding mask register. ( See Autonegotiation Standard LASI Interrupt Mask 1: Address 7.D000 )  */
      unsigned int   autonegotiationStandardAlarms_1Interrupt : 1;    /* 1E.FC00.8  RO       */
                     /* 1 = Interrupt in Autonegotiation standard alarms 1
                          */
                    /*! \brief 1E.FC00.9 RO PHY XS Standard Alarms 2 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.phyXS_StandardAlarms_2Interrupt

                        

                        1 = Interrupt in PHY XS standard alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from the status register ( See PHY XS Standard Vendor Devices in Package - Address 4.8 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 8 - Address 4.A008 )  */
      unsigned int   phyXS_StandardAlarms_2Interrupt : 1;    /* 1E.FC00.9  RO       */
                     /* 1 = Interrupt in PHY XS standard alarms 2
                          */
                    /*! \brief 1E.FC00.A RO PHY XS Standard Alarms 1 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.phyXS_StandardAlarms_1Interrupt

                        

                        1 = Interrupt in PHY XS standard alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from the status register ( See PHY XS Standard Status 1 - Address 4.1 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 2 - Address 4.A001 )  */
      unsigned int   phyXS_StandardAlarms_1Interrupt : 1;    /* 1E.FC00.A  RO       */
                     /* 1 = Interrupt in PHY XS standard alarms 1
                          */
                    /*! \brief 1E.FC00.B RO PCS Standard Alarm 3 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.pcsStandardAlarm_3Interrupt

                        

                        1 = Interrupt in PCS standard alarms 3
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See PCS 10GBASE-T Status 2 - Address 3.21 ) and the corresponding mask register. ( See PCS Standard Interrupt Mask 1 - Address 3.E021 )  */
      unsigned int   pcsStandardAlarm_3Interrupt : 1;    /* 1E.FC00.B  RO       */
                     /* 1 = Interrupt in PCS standard alarms 3
                          */
                    /*! \brief 1E.FC00.C RO PCS Standard Alarm 2 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.pcsStandardAlarm_2Interrupt

                        

                        1 = Interrupt in PCS standard alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See PHY XS Standard Vendor Devices in Package - Address 4.8 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 8 - Address 4.A008 )  */
      unsigned int   pcsStandardAlarm_2Interrupt : 1;    /* 1E.FC00.C  RO       */
                     /* 1 = Interrupt in PCS standard alarms 2
                          */
                    /*! \brief 1E.FC00.D RO PCS Standard Alarm 1 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.pcsStandardAlarm_1Interrupt

                        

                        1 = Interrupt in PCS standard alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See PHY XS Standard Status 1 - Address 4.1 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 2 - Address 4.A001 )  */
      unsigned int   pcsStandardAlarm_1Interrupt : 1;    /* 1E.FC00.D  RO       */
                     /* 1 = Interrupt in PCS standard alarms 1
                          */
                    /*! \brief 1E.FC00.E RO PMA Standard Alarm 2 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.pmaStandardAlarm_2Interrupt

                        

                        1 = Interrupt in PMA standard alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from either bit 1.8.B or 1.8.A.
                        An interrupt was generated from status register ( See PHY XS Standard Vendor Devices in Package - Address 4.8 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 8 - Address 4.A008 )  */
      unsigned int   pmaStandardAlarm_2Interrupt : 1;    /* 1E.FC00.E  RO       */
                     /* 1 = Interrupt in PMA standard alarms 2
                          */
                    /*! \brief 1E.FC00.F RO PMA Standard Alarm 1 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_CAL.u0.bits_0.pmaStandardAlarm_1Interrupt

                        

                        1 = Interrupt in PMA standard alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from bit 1.1.2.
                        An interrupt was generated from status register ( See PHY XS Standard Status 1 - Address 4.1 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 2 - Address 4.A001 )  */
      unsigned int   pmaStandardAlarm_1Interrupt : 1;    /* 1E.FC00.F  RO       */
                     /* 1 = Interrupt in PMA standard alarms 1
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalChip_wideStandardInterruptFlags_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Chip-Wide Vendor Interrupt Flags: 1E.FC01 */
/*                  Global Chip-Wide Vendor Interrupt Flags: 1E.FC01 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Chip-Wide Vendor Interrupt Flags */
  union
  {
    struct
    {
                    /*! \brief 1E.FC01.0 RO Global Alarms 3 Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_CAL.u0.bits_0.globalAlarms_3Interrupt

                        

                        1 = Interrupt in Global alarms 3
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Global Vendor Alarms 2: Address 1E.CC01 ) and the corresponding mask register. ( See Global LASI Interrupt Mask 2: Address 1E.D401 )  */
      unsigned int   globalAlarms_3Interrupt : 1;    /* 1E.FC01.0  RO       */
                     /* 1 = Interrupt in Global alarms 3
                          */
                    /*! \brief 1E.FC01.1 RO Global Alarms 2 Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_CAL.u0.bits_0.globalAlarms_2Interrupt

                        

                        1 = Interrupt in Global alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Global Alarms 2: Address 1E.CC01 ) and the corresponding mask register. ( See Global LASI Interrupt Mask 2: Address 1E.D401 )  */
      unsigned int   globalAlarms_2Interrupt : 1;    /* 1E.FC01.1  RO       */
                     /* 1 = Interrupt in Global alarms 2
                          */
                    /*! \brief 1E.FC01.2 RO Global Alarms 1 Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_CAL.u0.bits_0.globalAlarms_1Interrupt

                        

                        1 = Interrupt in Global alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Global Vendor Alarms 1 - Address 1E.CC00 ) and the corresponding mask register. ( See Global Vendor Interrupt Mask - Address 1E.D400 )  */
      unsigned int   globalAlarms_1Interrupt : 1;    /* 1E.FC01.2  RO       */
                     /* 1 = Interrupt in Global alarms 1
                          */
      unsigned int   reserved0 : 8;
                    /*! \brief 1E.FC01.B RO GbE Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_CAL.u0.bits_0.gbeVendorAlarmInterrupt

                        

                        1 = Interrupt in GbE vendor specific alarm
                        

                 <B>Notes:</B>
                        A GbE alarm was generated. ( See GbE PHY Vendor Global LASI Interrupt Flags 1: Address 1D.FC00 )  */
      unsigned int   gbeVendorAlarmInterrupt : 1;    /* 1E.FC01.B  RO       */
                     /* 1 = Interrupt in GbE vendor specific alarm
                          */
                    /*! \brief 1E.FC01.C RO Autonegotiation Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_CAL.u0.bits_0.autonegotiationVendorAlarmInterrupt

                        

                        1 = Interrupt in Autonegotiation vendor specific alarm
                        

                 <B>Notes:</B>
                        An Autonegotiation alarm was generated. ( See Autonegotiation Vendor Global LASI Interrupt Flags 1: Address 7.FC00 )  */
      unsigned int   autonegotiationVendorAlarmInterrupt : 1;    /* 1E.FC01.C  RO       */
                     /* 1 = Interrupt in Autonegotiation vendor specific alarm
                          */
                    /*! \brief 1E.FC01.D RO PHY XS Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_CAL.u0.bits_0.phyXS_VendorAlarmInterrupt

                        

                        1 = Interrupt in PHY XS vendor specific alarm
                        

                 <B>Notes:</B>
                        A PHY XS alarm was generated. ( See PHY XS Vendor Global LASI Interrupt Flags 1: Address 4.FC00 )  */
      unsigned int   phyXS_VendorAlarmInterrupt : 1;    /* 1E.FC01.D  RO       */
                     /* 1 = Interrupt in PHY XS vendor specific alarm
                          */
                    /*! \brief 1E.FC01.E RO PCS Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_CAL.u0.bits_0.pcsVendorAlarmInterrupt

                        

                        1 = Interrupt in PCS vendor specific alarm
                        

                 <B>Notes:</B>
                        A PCS alarm was generated. ( See PCS Vendor Global LASI Interrupt Flags 1: Address 3.FC00 )  */
      unsigned int   pcsVendorAlarmInterrupt : 1;    /* 1E.FC01.E  RO       */
                     /* 1 = Interrupt in PCS vendor specific alarm
                          */
                    /*! \brief 1E.FC01.F RO PMA Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_CAL.u0.bits_0.pmaVendorAlarmInterrupt

                        

                        1 = Interrupt in PMA vendor specific alarm
                        

                 <B>Notes:</B>
                        A PMA alarm was generated. ( See PHY XS Vendor Global Interrupt Flags 1- Address 4.F800 )  */
      unsigned int   pmaVendorAlarmInterrupt : 1;    /* 1E.FC01.F  RO       */
                     /* 1 = Interrupt in PMA vendor specific alarm
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalChip_wideVendorInterruptFlags_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Interrupt Chip-Wide Standard Mask: 1E.FF00 */
/*                  Global Interrupt Chip-Wide Standard Mask: 1E.FF00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Interrupt Chip-Wide Standard Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.FF00.0 R/WPD All Vendor Alarms Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.allVendorAlarmsInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   allVendorAlarmsInterruptMask : 1;    /* 1E.FF00.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved0 : 5;
                    /*! \brief 1E.FF00.6 R/WPD Gbe Standard Alarms Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.gbeStandardAlarmsInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   gbeStandardAlarmsInterruptMask : 1;    /* 1E.FF00.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.7 R/WPD Autonegotiation Standard Alarms 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.autonegotiationStandardAlarms_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   autonegotiationStandardAlarms_2InterruptMask : 1;    /* 1E.FF00.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.8 R/WPD Autonegotiation Standard Alarms 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.autonegotiationStandardAlarms_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   autonegotiationStandardAlarms_1InterruptMask : 1;    /* 1E.FF00.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.9 R/WPD PHY XS Standard Alarms 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.phyXS_StandardAlarms_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   phyXS_StandardAlarms_2InterruptMask : 1;    /* 1E.FF00.9  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.A R/WPD PHY XS Standard Alarms 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.phyXS_StandardAlarms_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   phyXS_StandardAlarms_1InterruptMask : 1;    /* 1E.FF00.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.B R/WPD PCS Standard Alarm 3 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.pcsStandardAlarm_3InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pcsStandardAlarm_3InterruptMask : 1;    /* 1E.FF00.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.C R/WPD PCS Standard Alarm 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.pcsStandardAlarm_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pcsStandardAlarm_2InterruptMask : 1;    /* 1E.FF00.C  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.D R/WPD PCS Standard Alarm 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.pcsStandardAlarm_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pcsStandardAlarm_1InterruptMask : 1;    /* 1E.FF00.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.E R/WPD PMA Standard Alarm 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.pmaStandardAlarm_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pmaStandardAlarm_2InterruptMask : 1;    /* 1E.FF00.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.F R/WPD PMA Standard Alarm 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_CAL.u0.bits_0.pmaStandardAlarm_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pmaStandardAlarm_1InterruptMask : 1;    /* 1E.FF00.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalInterruptChip_wideStandardMask_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Interrupt Chip-Wide Vendor Mask: 1E.FF01 */
/*                  Global Interrupt Chip-Wide Vendor Mask: 1E.FF01 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Interrupt Chip-Wide Vendor Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.FF01.0 R/WPD Global Alarms 3 Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_CAL.u0.bits_0.globalAlarms_3InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   globalAlarms_3InterruptMask : 1;    /* 1E.FF01.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.1 R/WPD Global Alarms 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_CAL.u0.bits_0.globalAlarms_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   globalAlarms_2InterruptMask : 1;    /* 1E.FF01.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.2 R/WPD Global Alarms 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_CAL.u0.bits_0.globalAlarms_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   globalAlarms_1InterruptMask : 1;    /* 1E.FF01.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved0 : 8;
                    /*! \brief 1E.FF01.B R/WPD GbE Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_CAL.u0.bits_0.gbeVendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   gbeVendorAlarmInterruptMask : 1;    /* 1E.FF01.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.C R/WPD Autonegotiation Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_CAL.u0.bits_0.autonegotiationVendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   autonegotiationVendorAlarmInterruptMask : 1;    /* 1E.FF01.C  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.D R/WPD PHY XS Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_CAL.u0.bits_0.phyXS_VendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   phyXS_VendorAlarmInterruptMask : 1;    /* 1E.FF01.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.E R/WPD PCS Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_CAL.u0.bits_0.pcsVendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pcsVendorAlarmInterruptMask : 1;    /* 1E.FF01.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.F R/WPD PMA Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_CAL.u0.bits_0.pmaVendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pmaVendorAlarmInterruptMask : 1;    /* 1E.FF01.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalInterruptChip_wideVendorMask_CAL;

#endif
/*@}*/
/*@}*/