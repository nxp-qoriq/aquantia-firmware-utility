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
*   for the PMA Registers block.
 */        

/*! \addtogroup registerMap
  @{
*/

/*! \defgroup PMA_registers PMA Registers
*   This module contains the data structures and doxygen comments
*   for the PMA Registers block.
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
*   This file contains the c header structures for the registers contained in the PMA Registers block.
*
*   The bit fields in this structure are from MSbit to LSbit
*
***********************************************************************/


/*@{*/
#ifndef AQ_CAL_PMA_REGS_HEADER
#define AQ_CAL_PMA_REGS_HEADER


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Standard Control 1: 01.0000 */
/*                  PMA Standard Control 1: 01.0000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Standard Control 1 */
  union
  {
    struct
    {
                    /*! \brief 01.0000.F R/WSC Reset
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.reset

                        Default = 0x1

                        1 = PMA reset
                        0 = Normal operation
                        

                 <B>Notes:</B>
                        The reset bit is automatically cleared upon completion of the reset sequence by the microcontroller. This bit is set to 1 during reset. The reset is internally stretched by approximately 1.7 us. Therefore the MDIO or uP should allow for 1.7 us before writing any PMA registers after this bit is set.
                        
                          */
      unsigned int   reset : 1;    /* 01.0000.F  R/WSC      Default = 0x1 */
                     /* 1 = PMA reset
                        0 = Normal operation
                          */
                    /*! \brief 01.0000.E R/WPD Reserved_0a
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.reserved0a

                        Provisionable Default = 0x0

                        Reserved bit 14
  */
      unsigned int   reserved0a : 1;    /* 01.0000.E  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved bit 14  */
                    /*! \brief 01.0000.D R/WPD Speed Selection LSB
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.speedSelectionLsb

                        Provisionable Default = 0x1

                        {6,D}
                        1 1 = Speed set by Bits [5:2]
                        1 0 = 1000 Mb/s
                        0 1 = 100 Mb/s
                        0 0 = 10 Mb/s
  */
      unsigned int   speedSelectionLsb : 1;    /* 01.0000.D  R/WPD      Provisionable Default = 0x1 */
                     /* {6,D}
                        1 1 = Speed set by Bits [5:2]
                        1 0 = 1000 Mb/s
                        0 1 = 100 Mb/s
                        0 0 = 10 Mb/s  */
                    /*! \brief 01.0000.C R/WPD Reserved_0b
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.reserved0b

                        Provisionable Default = 0x0

                        Reserved bit 12
  */
      unsigned int   reserved0b : 1;    /* 01.0000.C  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved bit 12  */
                    /*! \brief 01.0000.B R/WPD Low Power
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.lowPower

                        Provisionable Default = 0x0

                        1 = Low-power mode
                        0 = Normal operation
                        

                 <B>Notes:</B>
                        A one written to this register causes the PMA to enter low-power mode. If a global chip low-power state is desired, use Bit B in "Global Standard Control 1: Address 1E.0" 
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   lowPower : 1;    /* 01.0000.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Low-power mode
                        0 = Normal operation
                          */
                    /*! \brief 01.0000.A:7 R/WPD Reserved_0c [A:7]
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.reserved0c

                        Provisionable Default = 0x0

                        Reserved bits 10 to 7
  */
      unsigned int   reserved0c : 4;    /* 01.0000.A:7  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved bits 10 to 7  */
                    /*! \brief 01.0000.6 R/WPD Speed Selection MSB
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.speedSelectionMsb

                        Provisionable Default = 0x1

                        {6,D}
                        1 1 = Speed set by Bits [5:2]
                        1 0 = 1000 Mb/s
                        0 1 = 100 Mb/s
                        0 0 = 10 Mb/s
  */
      unsigned int   speedSelectionMsb : 1;    /* 01.0000.6  R/WPD      Provisionable Default = 0x1 */
                     /* {6,D}
                        1 1 = Speed set by Bits [5:2]
                        1 0 = 1000 Mb/s
                        0 1 = 100 Mb/s
                        0 0 = 10 Mb/s  */
                    /*! \brief 01.0000.5:2 R/WPD 10G Speed Selection [3:0]
                        AQ_PmaStandardControl_1_CAL.u0.bits_0._10gSpeedSelection

                        Provisionable Default = 0x7

                        1 x x x = Reserved
                        0 1 1 1 = 5Gb/s
                        0 1 1 0 = 2.5Gb/s
                        0 1 0 1 = 400Gb/s
                        0 1 0 0 = 25Gb/s
                        0 0 1 1 = 100Gb/s
                        0 0 1 0 = 40Gb/s
                        0 0 0 1 = 10PASS-TS / 2BASE-TL
                        0 0 0 0 = 10 Gb/s
  */
      unsigned int   _10gSpeedSelection : 4;    /* 01.0000.5:2  R/WPD      Provisionable Default = 0x7 */
                     /* 1 x x x = Reserved
                        0 1 1 1 = 5Gb/s
                        0 1 1 0 = 2.5Gb/s
                        0 1 0 1 = 400Gb/s
                        0 1 0 0 = 25Gb/s
                        0 0 1 1 = 100Gb/s
                        0 0 1 0 = 40Gb/s
                        0 0 0 1 = 10PASS-TS / 2BASE-TL
                        0 0 0 0 = 10 Gb/s  */
                    /*! \brief 01.0000.1 R/WPD Reserved_0d
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.reserved0d

                        Provisionable Default = 0x0

                        Reserved bit 1
  */
      unsigned int   reserved0d : 1;    /* 01.0000.1  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved bit 1  */
                    /*! \brief 01.0000.0 R/WPD Loopback
                        AQ_PmaStandardControl_1_CAL.u0.bits_0.loopback

                        Provisionable Default = 0x0

                        1 = Enable loopback mode
                        0 = Normal operation

                 <B>Notes:</B>
                        This enables the PMA Analog System Loopback.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   loopback : 1;    /* 01.0000.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable loopback mode
                        0 = Normal operation  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaStandardControl_1_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Standard Status 1: 01.0001 */
/*                  PMA Standard Status 1: 01.0001 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Standard Status 1 */
  union
  {
    struct
    {
                    /*! \brief 01.0001.F:8 R/WPD Reserved_1a [F:8]
                        AQ_PmaStandardStatus_1_CAL.u0.bits_0.reserved1a

                        Provisionable Default = 0x00

                        Reserved bits 15 to 8
  */
      unsigned int   reserved1a : 8;    /* 01.0001.F:8  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved bits 15 to 8  */
                    /*! \brief 01.0001.7 RO Fault
                        AQ_PmaStandardStatus_1_CAL.u0.bits_0.fault

                        

                        1 = Fault condition detected
                        0 = No fault detected
                        

                 <B>Notes:</B>
                        This is the top-level fault indicator flag for the PMA. This bit is set if either of the two bits 1.8.B or 1.8.A are set.  */
      unsigned int   fault : 1;    /* 01.0001.7  RO       */
                     /* 1 = Fault condition detected
                        0 = No fault detected
                          */
                    /*! \brief 01.0001.6:3 R/WPD Reserved_1b [6:3]
                        AQ_PmaStandardStatus_1_CAL.u0.bits_0.reserved1b

                        Provisionable Default = 0x0

                        Reserved bits 6 to 3
  */
      unsigned int   reserved1b : 4;    /* 01.0001.6:3  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved bits 6 to 3  */
                    /*! \brief 01.0001.2 LL PMA Receive Link Status
                        AQ_PmaStandardStatus_1_CAL.u0.bits_0.pmaReceiveLinkStatus

                        

                        Status of the PMA receive link
                        1 = Link up
                        0 = Link lost since last read
                        

                 <B>Notes:</B>
                        This indicates the status of the PMA receive link. This is the latch version of 1.E800.0. Note that this is latching low, so it can only be used to detect link drops, and not the current status of the link without performing back-to-back reads.  */
      unsigned int   pmaReceiveLinkStatus : 1;    /* 01.0001.2  LL       */
                     /* Status of the PMA receive link
                        1 = Link up
                        0 = Link lost since last read
                          */
                    /*! \brief 01.0001.1 ROS Low Power Ability
                        AQ_PmaStandardStatus_1_CAL.u0.bits_0.lowPowerAbility

                        Default = 0x1

                        1 = PMA supports low-power mode
                        0 = no low-power mode supported

                 <B>Notes:</B>
                        Indicates whether the PHY supports a low-power mode  */
      unsigned int   lowPowerAbility : 1;    /* 01.0001.1  ROS      Default = 0x1 */
                     /* 1 = PMA supports low-power mode
                        0 = no low-power mode supported  */
                    /*! \brief 01.0001.0 R/WPD Reserved_1c
                        AQ_PmaStandardStatus_1_CAL.u0.bits_0.reserved1c

                        Provisionable Default = 0x0

                        Reserved bit 0
  */
      unsigned int   reserved1c : 1;    /* 01.0001.0  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved bit 0  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaStandardStatus_1_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Standard Device Identifier: 01.0002 */
/*                  PMA Standard Device Identifier: 01.0002 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Standard Device Identifier */
  union
  {
    struct
    {
                    /*! \brief 01.0002.F:0 RO Device ID MSW [1F:10]
                        AQ_PmaStandardDeviceIdentifier_CAL.u0.bits_0.deviceIdMSW

                        

                        Bits 31 - 16 of Device ID
  */
      unsigned int   deviceIdMSW : 16;    /* 01.0002.F:0  RO       */
                     /* Bits 31 - 16 of Device ID  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA Standard Device Identifier */
  union
  {
    struct
    {
                    /*! \brief 01.0003.F:0 RO Device ID LSW [F:0]
                        AQ_PmaStandardDeviceIdentifier_CAL.u1.bits_1.deviceIdLSW

                        

                        Bits 15 - 0 of Device ID
  */
      unsigned int   deviceIdLSW : 16;    /* 01.0003.F:0  RO       */
                     /* Bits 15 - 0 of Device ID  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_PmaStandardDeviceIdentifier_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Standard Speed Ability: 01.0004 */
/*                  PMA Standard Speed Ability: 01.0004 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Standard Speed Ability */
  union
  {
    struct
    {
                    /*! \brief 01.0004.F ROS Reserved_4a
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.reserved4a

                        Default = 0x0

                        Reserved bit 15
  */
      unsigned int   reserved4a : 1;    /* 01.0004.F  ROS      Default = 0x0 */
                     /* Reserved bit 15  */
                    /*! \brief 01.0004.E ROS PMA 5G Capable
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.pma_5gCapable

                        Default = 0x1

                        1 = PMA is 5 Gb/s capable
                        0 = PMA is not 5 Gb/s capable

                 <B>Notes:</B>
                        This is always set to 1 in the PHY.
                          */
      unsigned int   pma_5gCapable : 1;    /* 01.0004.E  ROS      Default = 0x1 */
                     /* 1 = PMA is 5 Gb/s capable
                        0 = PMA is not 5 Gb/s capable  */
                    /*! \brief 01.0004.D ROS PMA 2.5G Capable
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.pma_2_5gCapable

                        Default = 0x1

                        1 = PMA is 2.5 Gb/s capable
                        0 = PMA is not 2.5 Gb/s capable

                 <B>Notes:</B>
                        This is always set to 1 in the PHY.
                          */
      unsigned int   pma_2_5gCapable : 1;    /* 01.0004.D  ROS      Default = 0x1 */
                     /* 1 = PMA is 2.5 Gb/s capable
                        0 = PMA is not 2.5 Gb/s capable  */
                    /*! \brief 01.0004.C:7 ROS Reserved_4b [C:7]
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.reserved4b

                        Default = 0x00

                        Reserved bits 12 to 7
  */
      unsigned int   reserved4b : 6;    /* 01.0004.C:7  ROS      Default = 0x00 */
                     /* Reserved bits 12 to 7  */
                    /*! \brief 01.0004.6 ROS PMA 10M Capable
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.pma10M_Capable

                        Default = 0x0

                        1 = PMA is 10 Mb/s capable
                        0 = PMA is not 10 Mb/s capable

                 <B>Notes:</B>
                        This is always set to 0 in the PHY.  */
      unsigned int   pma10M_Capable : 1;    /* 01.0004.6  ROS      Default = 0x0 */
                     /* 1 = PMA is 10 Mb/s capable
                        0 = PMA is not 10 Mb/s capable  */
                    /*! \brief 01.0004.5 ROS PMA 100M Capable
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.pma100M_Capable

                        Default = 0x1

                        1 = PMA is 100 Mb/s capable
                        0 = PMA is not 100 Mb/s capable

                 <B>Notes:</B>
                        This is always set to 1 in the PHY.  */
      unsigned int   pma100M_Capable : 1;    /* 01.0004.5  ROS      Default = 0x1 */
                     /* 1 = PMA is 100 Mb/s capable
                        0 = PMA is not 100 Mb/s capable  */
                    /*! \brief 01.0004.4 ROS PMA 1G Capable
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.pma1G_Capable

                        Default = 0x1

                        1 = PMA is 1 Gb/s capable
                        0 = PMA is not 1 Gb/s capable

                 <B>Notes:</B>
                        This is always set to 1 in the PHY.  */
      unsigned int   pma1G_Capable : 1;    /* 01.0004.4  ROS      Default = 0x1 */
                     /* 1 = PMA is 1 Gb/s capable
                        0 = PMA is not 1 Gb/s capable  */
                    /*! \brief 01.0004.3 ROS Reserved_4c
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.reserved4c

                        Default = 0x0

                        Reserved bit 3
  */
      unsigned int   reserved4c : 1;    /* 01.0004.3  ROS      Default = 0x0 */
                     /* Reserved bit 3  */
                    /*! \brief 01.0004.2 ROS 10PASS-TS Capable
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0._10pass_tsCapable

                        Default = 0x0

                        1 = PMA is 10PASS-TS capable
                        0 = PMA is not 10PASS-TS capable

                 <B>Notes:</B>
                        This is always set to 0 in the PHY.  */
      unsigned int   _10pass_tsCapable : 1;    /* 01.0004.2  ROS      Default = 0x0 */
                     /* 1 = PMA is 10PASS-TS capable
                        0 = PMA is not 10PASS-TS capable  */
                    /*! \brief 01.0004.1 ROS 2BASE-TL Capable
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0._2base_tlCapable

                        Default = 0x0

                        1 = PMA is 2BASE-TL capable
                        0 = PMA is not 2BASE-TL capable

                 <B>Notes:</B>
                        This is always set to 0 in the PHY.  */
      unsigned int   _2base_tlCapable : 1;    /* 01.0004.1  ROS      Default = 0x0 */
                     /* 1 = PMA is 2BASE-TL capable
                        0 = PMA is not 2BASE-TL capable  */
                    /*! \brief 01.0004.0 ROS PMA 10G Capable
                        AQ_PmaStandardSpeedAbility_CAL.u0.bits_0.pma10G_Capable

                        Default = 0x0

                        1 = PMA is 10 Gb/s capable
                        0 = PMA is not 10 Gb/s capable

                 <B>Notes:</B>
                        This is always set to 0 in the PHY.
                          */
      unsigned int   pma10G_Capable : 1;    /* 01.0004.0  ROS      Default = 0x0 */
                     /* 1 = PMA is 10 Gb/s capable
                        0 = PMA is not 10 Gb/s capable  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaStandardSpeedAbility_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Standard Devices in Package: 01.0005 */
/*                  PMA Standard Devices in Package: 01.0005 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Standard Devices in Package */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.0005.7 ROS Autonegotiation Present
                        AQ_PmaStandardDevicesInPackage_CAL.u0.bits_0.autonegotiationPresent

                        Default = 0x1

                        1 = Autonegotiation is present in package
                        0 = Autonegotiation is not present in package

                 <B>Notes:</B>
                        This is always set to 1, as there is Autonegotiation in the PHY.  */
      unsigned int   autonegotiationPresent : 1;    /* 01.0005.7  ROS      Default = 0x1 */
                     /* 1 = Autonegotiation is present in package
                        0 = Autonegotiation is not present in package  */
                    /*! \brief 01.0005.6 ROS TC Present
                        AQ_PmaStandardDevicesInPackage_CAL.u0.bits_0.tcPresent

                        Default = 0x0

                        1 = TC is present in package
                        0 = TC is not present in package

                 <B>Notes:</B>
                        This is always set to 0, as there is no TC functionality in the PHY.  */
      unsigned int   tcPresent : 1;    /* 01.0005.6  ROS      Default = 0x0 */
                     /* 1 = TC is present in package
                        0 = TC is not present in package  */
                    /*! \brief 01.0005.5 ROS DTE XS Present
                        AQ_PmaStandardDevicesInPackage_CAL.u0.bits_0.dteXsPresent

                        Default = 0x0

                        1 = DTE XS is present in package
                        0 = DTE XS is not present in package
                        

                 <B>Notes:</B>
                        This is always set to 0, as there is no DTE XAUI interface in the PHY.  */
      unsigned int   dteXsPresent : 1;    /* 01.0005.5  ROS      Default = 0x0 */
                     /* 1 = DTE XS is present in package
                        0 = DTE XS is not present in package
                          */
                    /*! \brief 01.0005.4 ROS PHY XS Present
                        AQ_PmaStandardDevicesInPackage_CAL.u0.bits_0.phyXS_Present

                        Default = 0x1

                        1 = PHY XS is present in package
                        0 = PHY XS is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as there is a PHY XS interface in the PHY.  */
      unsigned int   phyXS_Present : 1;    /* 01.0005.4  ROS      Default = 0x1 */
                     /* 1 = PHY XS is present in package
                        0 = PHY XS is not present in package  */
                    /*! \brief 01.0005.3 ROS PCS Present
                        AQ_PmaStandardDevicesInPackage_CAL.u0.bits_0.pcsPresent

                        Default = 0x1

                        1 = PCS is present in package
                        0 = PCS is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as there is PCS functionality in the PHY.  */
      unsigned int   pcsPresent : 1;    /* 01.0005.3  ROS      Default = 0x1 */
                     /* 1 = PCS is present in package
                        0 = PCS is not present in package  */
                    /*! \brief 01.0005.2 ROS WIS Present
                        AQ_PmaStandardDevicesInPackage_CAL.u0.bits_0.wisPresent

                        Default = 0x0

                        1 = WIS is present in package
                        0 = WIS is not present in package

                 <B>Notes:</B>
                        This is always set to 0, as there is no WIS functionality in the PHY.  */
      unsigned int   wisPresent : 1;    /* 01.0005.2  ROS      Default = 0x0 */
                     /* 1 = WIS is present in package
                        0 = WIS is not present in package  */
                    /*! \brief 01.0005.1 ROS PMA Present
                        AQ_PmaStandardDevicesInPackage_CAL.u0.bits_0.pmaPresent

                        Default = 0x1

                        1 = PMA is present in package
                        0 = PMA is not present 

                 <B>Notes:</B>
                        This is always set to 1 as there is PMA functionality in the PHY.  */
      unsigned int   pmaPresent : 1;    /* 01.0005.1  ROS      Default = 0x1 */
                     /* 1 = PMA is present in package
                        0 = PMA is not present   */
                    /*! \brief 01.0005.0 ROS Clause 22 Registers Present
                        AQ_PmaStandardDevicesInPackage_CAL.u0.bits_0.clause_22RegistersPresent

                        Default = 0x0

                        1 = Clause 22 registers are present in package
                        0 = Clause 22 registers are not present in package

                 <B>Notes:</B>
                        This is always set to 0 in the PHY, as there are no Clause 22 registers in the device.  */
      unsigned int   clause_22RegistersPresent : 1;    /* 01.0005.0  ROS      Default = 0x0 */
                     /* 1 = Clause 22 registers are present in package
                        0 = Clause 22 registers are not present in package  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA Standard Devices in Package */
  union
  {
    struct
    {
                    /*! \brief 01.0006.F ROS Vendor Specific Device #2 Present
                        AQ_PmaStandardDevicesInPackage_CAL.u1.bits_1.vendorSpecificDevice_2Present

                        Default = 0x1

                        1 = Device #2 is present in package
                        0 = Device #2 is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the DSP PMA registers.  */
      unsigned int   vendorSpecificDevice_2Present : 1;    /* 01.0006.F  ROS      Default = 0x1 */
                     /* 1 = Device #2 is present in package
                        0 = Device #2 is not present in package  */
                    /*! \brief 01.0006.E ROS Vendor Specific Device #1 Present
                        AQ_PmaStandardDevicesInPackage_CAL.u1.bits_1.vendorSpecificDevice_1Present

                        Default = 0x1

                        1 = Device #1 is present in package
                        0 = Device #1 is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the Global registers.  */
      unsigned int   vendorSpecificDevice_1Present : 1;    /* 01.0006.E  ROS      Default = 0x1 */
                     /* 1 = Device #1 is present in package
                        0 = Device #1 is not present in package  */
                    /*! \brief 01.0006.D ROS Clause 22 Extension Present
                        AQ_PmaStandardDevicesInPackage_CAL.u1.bits_1.clause_22ExtensionPresent

                        Default = 0x1

                        1 = Clause 22 Extension is present in package
                        0 = Clause 22 Extension is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the GbE registers.  */
      unsigned int   clause_22ExtensionPresent : 1;    /* 01.0006.D  ROS      Default = 0x1 */
                     /* 1 = Clause 22 Extension is present in package
                        0 = Clause 22 Extension is not present in package  */
      unsigned int   reserved0 : 13;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_PmaStandardDevicesInPackage_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Standard Control 2: 01.0007 */
/*                  PMA Standard Control 2: 01.0007 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Standard Control 2 */
  union
  {
    struct
    {
                    /*! \brief 01.0007.F:6 R/WPD Reserved_7 [F:6]
                        AQ_PmaStandardControl_2_CAL.u0.bits_0.reserved7

                        Provisionable Default = 0x000

                        Reserved bits 15 to 6
  */
      unsigned int   reserved7 : 10;    /* 01.0007.F:6  R/WPD      Provisionable Default = 0x000 */
                     /* Reserved bits 15 to 6  */
                    /*! \brief 01.0007.5:0 R/WPD PMA Device Type [5:0]
                        AQ_PmaStandardControl_2_CAL.u0.bits_0.pmaDeviceType

                        Provisionable Default = 0x31

                        [5:0]
                        5 4 3 2 1 0
                        1 1 0 0 0 1 = 5GBASE-T PMA/PMD type
                        1 1 0 0 0 0 = 2.5GBASE-T PMA/PMD type
                        0 0 1 1 1 1 = 10BASE-T PMA/PMD type
                        0 0 1 1 1 0 = 100BASE-TX PMA/PMD type
                        0 0 1 1 0 1 = 1000BASE-KX PMA/PMD type
                        0 0 1 1 0 0 = 1000BASE-T PMA/PMD type
                        0 0 1 0 1 1 = 10GBASE-KR PMA/PMD type
                        0 0 1 0 1 0 = 10GBASE-KX4 PMA/PMD type
                        0 0 1 0 0 1 = 10GBASE-T PMA type
                        0 0 1 0 0 0 = 10GBASE-LRM PMA/PMD type
                        0 0 0 1 1 1 = 10GBASE-SR PMA/PMD type
                        0 0 0 1 1 0 = 10GBASE-LR PMA/PMD type
                        0 0 0 1 0 1 = 10GBASE-ER PMA/PMD type
                        0 0 0 1 0 0 = 10GBASE-LX4 PMA/PMD type
                        0 0 0 0 1 1 = 10GBASE-SW PMA/PMD type
                        0 0 0 0 1 0 = 10GBASE-LW PMA/PMD type
                        0 0 0 0 0 1 = 10GBASE-EW PMA/PMD type
                        0 0 0 0 0 0 = 10GBASE-CX4 PMA/PMD type

                 <B>Notes:</B>
                        This is always set to 0x31 as the PHY is a 5GBASE-T device.
                          */
      unsigned int   pmaDeviceType : 6;    /* 01.0007.5:0  R/WPD      Provisionable Default = 0x31 */
                     /* [5:0]
                        5 4 3 2 1 0
                        1 1 0 0 0 1 = 5GBASE-T PMA/PMD type
                        1 1 0 0 0 0 = 2.5GBASE-T PMA/PMD type
                        0 0 1 1 1 1 = 10BASE-T PMA/PMD type
                        0 0 1 1 1 0 = 100BASE-TX PMA/PMD type
                        0 0 1 1 0 1 = 1000BASE-KX PMA/PMD type
                        0 0 1 1 0 0 = 1000BASE-T PMA/PMD type
                        0 0 1 0 1 1 = 10GBASE-KR PMA/PMD type
                        0 0 1 0 1 0 = 10GBASE-KX4 PMA/PMD type
                        0 0 1 0 0 1 = 10GBASE-T PMA type
                        0 0 1 0 0 0 = 10GBASE-LRM PMA/PMD type
                        0 0 0 1 1 1 = 10GBASE-SR PMA/PMD type
                        0 0 0 1 1 0 = 10GBASE-LR PMA/PMD type
                        0 0 0 1 0 1 = 10GBASE-ER PMA/PMD type
                        0 0 0 1 0 0 = 10GBASE-LX4 PMA/PMD type
                        0 0 0 0 1 1 = 10GBASE-SW PMA/PMD type
                        0 0 0 0 1 0 = 10GBASE-LW PMA/PMD type
                        0 0 0 0 0 1 = 10GBASE-EW PMA/PMD type
                        0 0 0 0 0 0 = 10GBASE-CX4 PMA/PMD type  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaStandardControl_2_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Standard Status 2: 01.0008 */
/*                  PMA Standard Status 2: 01.0008 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Standard Status 2 */
  union
  {
    struct
    {
                    /*! \brief 01.0008.F:E ROS Device Present [1:0]
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.devicePresent

                        Default = 0x2

                        [F:E]
                        0x3 = No device at this address
                        0x2 = Device present at this address
                        0x1 = No device at this address
                        0x0 = No device at this address

                 <B>Notes:</B>
                        This field is always set to 0x2, as the PMA is present in the PHY.  */
      unsigned int   devicePresent : 2;    /* 01.0008.F:E  ROS      Default = 0x2 */
                     /* [F:E]
                        0x3 = No device at this address
                        0x2 = Device present at this address
                        0x1 = No device at this address
                        0x0 = No device at this address  */
                    /*! \brief 01.0008.D ROS Transmit Fault Location Ability
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.transmitFaultLocationAbility

                        Default = 0x1

                        1 = PMA has the capability to detect a fault condition on the transmit path
                        0= PMA does not have the capability to detect a fault condition on the transmit path

                 <B>Notes:</B>
                        This bit indicates whether the PMA has the ability to locate faults along the transmit path.  */
      unsigned int   transmitFaultLocationAbility : 1;    /* 01.0008.D  ROS      Default = 0x1 */
                     /* 1 = PMA has the capability to detect a fault condition on the transmit path
                        0= PMA does not have the capability to detect a fault condition on the transmit path  */
                    /*! \brief 01.0008.C ROS Receive Fault Location Ability
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.receiveFaultLocationAbility

                        Default = 0x1

                        1 = PMA has the capability to detect a fault condition on the receive path
                        0= PMA does not have the capability to detect a fault condition on the receive path

                 <B>Notes:</B>
                        This bit indicates whether the PMA has the ability to locate faults along the receive path.  */
      unsigned int   receiveFaultLocationAbility : 1;    /* 01.0008.C  ROS      Default = 0x1 */
                     /* 1 = PMA has the capability to detect a fault condition on the receive path
                        0= PMA does not have the capability to detect a fault condition on the receive path  */
                    /*! \brief 01.0008.B LH Transmit Fault
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.transmitFault

                        

                        1 = Fault condition on transmit path
                        0 = No fault condition on transmit path
                        

                 <B>Notes:</B>
                        This bit indicates whether there is a fault somewhere along the transmit path. This is a hardware fault and should never occur during normal operation.  */
      unsigned int   transmitFault : 1;    /* 01.0008.B  LH       */
                     /* 1 = Fault condition on transmit path
                        0 = No fault condition on transmit path
                          */
                    /*! \brief 01.0008.A LH Receive Fault
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.receiveFault

                        

                        1 = Fault condition on receive path
                        0 = No fault condition on receive path
                        

                 <B>Notes:</B>
                        This bit indicates whether there is a fault somewhere along the receive path.This is a hardware fault and should never occur during normal operation.  */
      unsigned int   receiveFault : 1;    /* 01.0008.A  LH       */
                     /* 1 = Fault condition on receive path
                        0 = No fault condition on receive path
                          */
                    /*! \brief 01.0008.9 ROS Extended Abilities
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.extendedAbilities

                        Default = 0x1

                        1 = PMA has extended abilities listed in register 1.11
                        0= PMA does not have extended abilities

                 <B>Notes:</B>
                        This field is set to 1, as the PMA in PHY has extended abilities.  */
      unsigned int   extendedAbilities : 1;    /* 01.0008.9  ROS      Default = 0x1 */
                     /* 1 = PMA has extended abilities listed in register 1.11
                        0= PMA does not have extended abilities  */
                    /*! \brief 01.0008.8 ROS PMD Transmit Disable Ability
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pmdTransmitDisableAbility

                        Default = 0x1

                        1 = PMD has the capability of disabling the transmitter
                        0= PMD does not have the capability of disabling the transmitter

                 <B>Notes:</B>
                        This bit indicates whether the PMD has the capability of disabling its transmitter. This field is always set to 0x1, as the PMD in the PHY has this ability.  */
      unsigned int   pmdTransmitDisableAbility : 1;    /* 01.0008.8  ROS      Default = 0x1 */
                     /* 1 = PMD has the capability of disabling the transmitter
                        0= PMD does not have the capability of disabling the transmitter  */
                    /*! \brief 01.0008.7 ROS PMA 10GBASE-SR Capable
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pma10GBaseSR_Capable

                        Default = 0x0

                        1 = PMA supports 10GBASE-SR
                        0 = PMA does not support 10GBASE-SR

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY only supports 10GBASE-T.  */
      unsigned int   pma10GBaseSR_Capable : 1;    /* 01.0008.7  ROS      Default = 0x0 */
                     /* 1 = PMA supports 10GBASE-SR
                        0 = PMA does not support 10GBASE-SR  */
                    /*! \brief 01.0008.6 ROS PMA 10GBASE-LR Capable
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pma10GBaseLR_Capable

                        Default = 0x0

                        1 = PMA supports 10GBASE-LR
                        0 = PMA does not support 10GBASE-LR

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY only supports 10GBASE-T.  */
      unsigned int   pma10GBaseLR_Capable : 1;    /* 01.0008.6  ROS      Default = 0x0 */
                     /* 1 = PMA supports 10GBASE-LR
                        0 = PMA does not support 10GBASE-LR  */
                    /*! \brief 01.0008.5 ROS PMA 10GBASE-ER Capable
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pma10GBaseER_Capable

                        Default = 0x0

                        1 = PMA supports 10GBASE-ER
                        0 = PMA does not support 10GBASE-ER

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY only supports 10GBASE-T.  */
      unsigned int   pma10GBaseER_Capable : 1;    /* 01.0008.5  ROS      Default = 0x0 */
                     /* 1 = PMA supports 10GBASE-ER
                        0 = PMA does not support 10GBASE-ER  */
                    /*! \brief 01.0008.4 ROS PMA 10GBASE-LX4 Capable
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pma10G_base_lx4Capable

                        Default = 0x0

                        1 = PMA supports 10GBASE-LX4
                        0 = PMA does not support 10GBASE-LX4

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY only supports 10GBASE-T.  */
      unsigned int   pma10G_base_lx4Capable : 1;    /* 01.0008.4  ROS      Default = 0x0 */
                     /* 1 = PMA supports 10GBASE-LX4
                        0 = PMA does not support 10GBASE-LX4  */
                    /*! \brief 01.0008.3 ROS PMA 10GBASE-SW Capable
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pma10GBaseSW_Capable

                        Default = 0x0

                        1 = PMA supports 10GBASE-SW
                        0 = PMA does not support 10GBASE-SW

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY only supports 10GBASE-T.  */
      unsigned int   pma10GBaseSW_Capable : 1;    /* 01.0008.3  ROS      Default = 0x0 */
                     /* 1 = PMA supports 10GBASE-SW
                        0 = PMA does not support 10GBASE-SW  */
                    /*! \brief 01.0008.2 ROS PMA 10GBASE-LW Capable
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pma10GBaseLW_Capable

                        Default = 0x0

                        1 = PMA supports 10GBASE-LW
                        0 = PMA does not support 10GBASE-LW

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY only supports 10GBASE-T.  */
      unsigned int   pma10GBaseLW_Capable : 1;    /* 01.0008.2  ROS      Default = 0x0 */
                     /* 1 = PMA supports 10GBASE-LW
                        0 = PMA does not support 10GBASE-LW  */
                    /*! \brief 01.0008.1 ROS PMA 10GBASE-EW Capable
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pma10GBaseEW_Capable

                        Default = 0x0

                        1 = PMA supports 10GBASE-EW
                        0 = PMA does not support 10GBASE-EW

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY only supports 10GBASE-T.  */
      unsigned int   pma10GBaseEW_Capable : 1;    /* 01.0008.1  ROS      Default = 0x0 */
                     /* 1 = PMA supports 10GBASE-EW
                        0 = PMA does not support 10GBASE-EW  */
                    /*! \brief 01.0008.0 ROS PMA Loopback Ability
                        AQ_PmaStandardStatus_2_CAL.u0.bits_0.pmaLoopbackAbility

                        Default = 0x1

                        1 = PMA supports loopback
                        0 = PMA does not support loopback
                        
                        

                 <B>Notes:</B>
                        This is always set to 1, as the PMA in the PHY supports loopback.  */
      unsigned int   pmaLoopbackAbility : 1;    /* 01.0008.0  ROS      Default = 0x1 */
                     /* 1 = PMA supports loopback
                        0 = PMA does not support loopback
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaStandardStatus_2_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMD Standard Transmit Disable Control: 01.0009 */
/*                  PMD Standard Transmit Disable Control: 01.0009 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMD Standard Transmit Disable Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.0009.4 R/WPD PMD Channel 3 Transmit Disable
                        AQ_PmdStandardTransmitDisableControl_CAL.u0.bits_0.pmdChannel_3TransmitDisable

                        Provisionable Default = 0x0

                        1 = Disable output on transmit channel 3
                        0 = Normal operation

                 <B>Notes:</B>
                        
                        
                        
                        
                        
                        
                        When disabled, the average launch power on a pair is set to less than -53 dBm
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   pmdChannel_3TransmitDisable : 1;    /* 01.0009.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable output on transmit channel 3
                        0 = Normal operation  */
                    /*! \brief 01.0009.3 R/WPD PMD Channel 2 Transmit Disable
                        AQ_PmdStandardTransmitDisableControl_CAL.u0.bits_0.pmdChannel_2TransmitDisable

                        Provisionable Default = 0x0

                        1 = Disable output on transmit channel 2
                        0 = Normal operation

                 <B>Notes:</B>
                        
                        
                        
                        
                        
                        
                        When disabled, the average launch power on a pair is set to less than -53 dBm
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   pmdChannel_2TransmitDisable : 1;    /* 01.0009.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable output on transmit channel 2
                        0 = Normal operation  */
                    /*! \brief 01.0009.2 R/WPD PMD Channel 1 Transmit Disable
                        AQ_PmdStandardTransmitDisableControl_CAL.u0.bits_0.pmdChannel_1TransmitDisable

                        Provisionable Default = 0x0

                        1 = Disable output on transmit channel 1
                        0 = Normal operation

                 <B>Notes:</B>
                        
                        
                        
                        
                        
                        
                        When disabled, the average launch power on a pair is set to less than -53 dBm
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   pmdChannel_1TransmitDisable : 1;    /* 01.0009.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable output on transmit channel 1
                        0 = Normal operation  */
                    /*! \brief 01.0009.1 R/WPD PMD Channel 0 Transmit Disable
                        AQ_PmdStandardTransmitDisableControl_CAL.u0.bits_0.pmdChannel_0TransmitDisable

                        Provisionable Default = 0x0

                        1 = Disable output on transmit channel 0
                        0 = Normal operation

                 <B>Notes:</B>
                        
                        
                        
                        
                        
                        
                        When disabled, the average launch power on a pair is set to less than -53 dBm
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   pmdChannel_0TransmitDisable : 1;    /* 01.0009.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable output on transmit channel 0
                        0 = Normal operation  */
                    /*! \brief 01.0009.0 R/WPD PMD Global Transmit Disable
                        AQ_PmdStandardTransmitDisableControl_CAL.u0.bits_0.pmdGlobalTransmitDisable

                        Provisionable Default = 0x0

                        1 = Disable output on all channels
                        0 = Normal operation

                 <B>Notes:</B>
                        When set, this bit disables (and overrides) all four channels, and sets the average launch power on all pairs to less than -53 dBm
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   pmdGlobalTransmitDisable : 1;    /* 01.0009.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable output on all channels
                        0 = Normal operation  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmdStandardTransmitDisableControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMD Standard Signal Detect: 01.000A */
/*                  PMD Standard Signal Detect: 01.000A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMD Standard Signal Detect */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.000A.4 RO PMD Channel 3 Signal Detect
                        AQ_PmdStandardSignalDetect_CAL.u0.bits_0.pmdChannel_3SignalDetect

                        

                        1 = Signal detected on receive channel 3
                        0 = No signal detected

                 <B>Notes:</B>
                        
                        
                        
                        
                        
                        These bits are used to indicate the presence of signals on a given pair. A signal is defined as an autonegotiation pulse or Ethernet signals.  */
      unsigned int   pmdChannel_3SignalDetect : 1;    /* 01.000A.4  RO       */
                     /* 1 = Signal detected on receive channel 3
                        0 = No signal detected  */
                    /*! \brief 01.000A.3 RO PMD Channel 2 Signal Detect
                        AQ_PmdStandardSignalDetect_CAL.u0.bits_0.pmdChannel_2SignalDetect

                        

                        1 = Signal detected on receive channel 2
                        0 = No signal detected

                 <B>Notes:</B>
                        
                        
                        
                        
                        
                        These bits are used to indicate the presence of signals on a given pair. A signal is defined as an autonegotiation pulse or Ethernet signals.  */
      unsigned int   pmdChannel_2SignalDetect : 1;    /* 01.000A.3  RO       */
                     /* 1 = Signal detected on receive channel 2
                        0 = No signal detected  */
                    /*! \brief 01.000A.2 RO PMD Channel 1 Signal Detect
                        AQ_PmdStandardSignalDetect_CAL.u0.bits_0.pmdChannel_1SignalDetect

                        

                        1 = Signal detected on receive channel 1
                        0 = No signal detected

                 <B>Notes:</B>
                        
                        
                        
                        
                        
                        These bits are used to indicate the presence of signals on a given pair. A signal is defined as an autonegotiation pulse or Ethernet signals.  */
      unsigned int   pmdChannel_1SignalDetect : 1;    /* 01.000A.2  RO       */
                     /* 1 = Signal detected on receive channel 1
                        0 = No signal detected  */
                    /*! \brief 01.000A.1 RO PMD Channel 0 Signal Detect
                        AQ_PmdStandardSignalDetect_CAL.u0.bits_0.pmdChannel_0SignalDetect

                        

                        1 = Signal detected on receive channel 0
                        0 = No signal detected

                 <B>Notes:</B>
                        
                        
                        
                        
                        
                        These bits are used to indicate the presence of signals on a given pair. A signal is defined as an autonegotiation pulse or Ethernet signals.  */
      unsigned int   pmdChannel_0SignalDetect : 1;    /* 01.000A.1  RO       */
                     /* 1 = Signal detected on receive channel 0
                        0 = No signal detected  */
                    /*! \brief 01.000A.0 RO PMD Global Signal Detect
                        AQ_PmdStandardSignalDetect_CAL.u0.bits_0.pmdGlobalSignalDetect

                        

                        1 = Signals detected on all required channels
                        0 = No signal detected
                        

                 <B>Notes:</B>
                        This bit is marked when all required, valid Ethernet signals to create a connection are present on the line.  */
      unsigned int   pmdGlobalSignalDetect : 1;    /* 01.000A.0  RO       */
                     /* 1 = Signals detected on all required channels
                        0 = No signal detected
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmdStandardSignalDetect_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMD Standard 10G Extended Ability Register: 01.000B */
/*                  PMD Standard 10G Extended Ability Register: 01.000B */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMD Standard 10G Extended Ability Register */
  union
  {
    struct
    {
                    /*! \brief 01.000B.F ROS Reserved_b0
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.reservedB0

                        Default = 0x0

                        Reserved bit 15
  */
      unsigned int   reservedB0 : 1;    /* 01.000B.F  ROS      Default = 0x0 */
                     /* Reserved bit 15  */
                    /*! \brief 01.000B.E ROS PMA 2.5/5GBASE-T Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma_2_5_5gbase_tCapable

                        Default = 0x1

                        1 = PMA capable of 2.5/5GBASE-T
                        0 = PMA incapable of 2.5/5GBASE-T

                 <B>Notes:</B>
                        This field is set to 1, as the PMA in the PHY supports 2.5/5GBASE-T
                          */
      unsigned int   pma_2_5_5gbase_tCapable : 1;    /* 01.000B.E  ROS      Default = 0x1 */
                     /* 1 = PMA capable of 2.5/5GBASE-T
                        0 = PMA incapable of 2.5/5GBASE-T  */
                    /*! \brief 01.000B.D:9 ROS Reserved_b1 [D:9]
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.reservedB1

                        Default = 0x00

                        Reserved bits 13 to 9
  */
      unsigned int   reservedB1 : 5;    /* 01.000B.D:9  ROS      Default = 0x00 */
                     /* Reserved bits 13 to 9  */
                    /*! \brief 01.000B.8 ROS PMA 10BASE-T Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma10BaseT_Capable

                        Default = 0x0

                        1 = PMA capable of 10BASE-T
                        0 = PMA incapable of 10BASE-T

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY does not support 10BASE-TX.  */
      unsigned int   pma10BaseT_Capable : 1;    /* 01.000B.8  ROS      Default = 0x0 */
                     /* 1 = PMA capable of 10BASE-T
                        0 = PMA incapable of 10BASE-T  */
                    /*! \brief 01.000B.7 ROS PMA 100BASE-TX Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma_100base_txCapable

                        Default = 0x1

                        1 = PMA capable of 100BASE-TX
                        0 = PMA incapable of 100BASE-TX

                 <B>Notes:</B>
                        This field is always set to 1, as the PMA in the PHY supports 100BASE-TX.  */
      unsigned int   pma_100base_txCapable : 1;    /* 01.000B.7  ROS      Default = 0x1 */
                     /* 1 = PMA capable of 100BASE-TX
                        0 = PMA incapable of 100BASE-TX  */
                    /*! \brief 01.000B.6 ROS PMA 1000BASE-KX Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma_1000base_kxCapable

                        Default = 0x1

                        1 = PMA capable of 1000BASE-KX
                        0 = PMA incapable of 1000BASE-KX

                 <B>Notes:</B>
                        This field is always set to 1, as the PMA in the PHY supports 1000BASE-KX.  */
      unsigned int   pma_1000base_kxCapable : 1;    /* 01.000B.6  ROS      Default = 0x1 */
                     /* 1 = PMA capable of 1000BASE-KX
                        0 = PMA incapable of 1000BASE-KX  */
                    /*! \brief 01.000B.5 ROS PMA 1000BASE-T Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma1000BaseT_Capable

                        Default = 0x1

                        1 = PMA capable of 1000BASE-T
                        0 = PMA incapable of 1000BASE-T

                 <B>Notes:</B>
                        This field is set to 1, as the PMA in the PHY supports 1000BASE-T.  */
      unsigned int   pma1000BaseT_Capable : 1;    /* 01.000B.5  ROS      Default = 0x1 */
                     /* 1 = PMA capable of 1000BASE-T
                        0 = PMA incapable of 1000BASE-T  */
                    /*! \brief 01.000B.4 ROS PMA 10GBASE-KR Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma10GBaseK_rCapable

                        Default = 0x0

                        1 = PMA capable of 10GBASE-KR
                        0 = PMA incapable of 10GBASE-KR

                 <B>Notes:</B>
                        This field is set to 0, as the PMA in the PHY does not support 10GBASE-KR
                          */
      unsigned int   pma10GBaseK_rCapable : 1;    /* 01.000B.4  ROS      Default = 0x0 */
                     /* 1 = PMA capable of 10GBASE-KR
                        0 = PMA incapable of 10GBASE-KR  */
                    /*! \brief 01.000B.3 ROS PMA 10GBASE-KX4 Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma10GBaseK_x4Capable

                        Default = 0x0

                        1 = PMA capable of 10GBASE-KX4
                        0 = PMA incapable of 10GBASE-KX4

                 <B>Notes:</B>
                        This field is set to 0, as the PMA in the PHY does not support 10GBASE-KX4
                          */
      unsigned int   pma10GBaseK_x4Capable : 1;    /* 01.000B.3  ROS      Default = 0x0 */
                     /* 1 = PMA capable of 10GBASE-KX4
                        0 = PMA incapable of 10GBASE-KX4  */
                    /*! \brief 01.000B.2 ROS PMA 10GBASE-T Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma10GBaseT_Capable

                        Default = 0x0

                        1 = PMA capable of 10GBASE-T
                        0 = PMA incapable of 10GBASE-T

                 <B>Notes:</B>
                        This field is set to 0, as the PMA in the PHY does not support 10GBASE-T
                          */
      unsigned int   pma10GBaseT_Capable : 1;    /* 01.000B.2  ROS      Default = 0x0 */
                     /* 1 = PMA capable of 10GBASE-T
                        0 = PMA incapable of 10GBASE-T  */
                    /*! \brief 01.000B.1 ROS PMA 10GBASE-LRM Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma10GBaseLR_mCapable

                        Default = 0x0

                        1 = PMA capable of 10GBASE-LRM
                        0 = PMA incapable of 10GBASE-LRM

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY does not support 10GBASE-LRM.  */
      unsigned int   pma10GBaseLR_mCapable : 1;    /* 01.000B.1  ROS      Default = 0x0 */
                     /* 1 = PMA capable of 10GBASE-LRM
                        0 = PMA incapable of 10GBASE-LRM  */
                    /*! \brief 01.000B.0 ROS PMA 10GBASE-CX4 Capable
                        AQ_PmdStandard10G_ExtendedAbilityRegister_CAL.u0.bits_0.pma10GBaseCX4_Capable

                        Default = 0x0

                        1 = PMA capable of 10GBASE-CX4
                        0 = PMA incapable of 10GBASE-CX4

                 <B>Notes:</B>
                        This field is always set to 0, as the PMA in the PHY does not support 10GBASE-CX4.  */
      unsigned int   pma10GBaseCX4_Capable : 1;    /* 01.000B.0  ROS      Default = 0x0 */
                     /* 1 = PMA capable of 10GBASE-CX4
                        0 = PMA incapable of 10GBASE-CX4  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmdStandard10G_ExtendedAbilityRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Standard Package Identifier: 01.000E */
/*                  PMA Standard Package Identifier: 01.000E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Standard Package Identifier */
  union
  {
    struct
    {
                    /*! \brief 01.000E.F:0 RO Package ID MSW [1F:10]
                        AQ_PmaStandardPackageIdentifier_CAL.u0.bits_0.packageIdMSW

                        

                        Bits 31- 16 of Package ID
  */
      unsigned int   packageIdMSW : 16;    /* 01.000E.F:0  RO       */
                     /* Bits 31- 16 of Package ID  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA Standard Package Identifier */
  union
  {
    struct
    {
                    /*! \brief 01.000F.F:0 RO Package ID LSW [F:0]
                        AQ_PmaStandardPackageIdentifier_CAL.u1.bits_1.packageIdLSW

                        

                        Bits 15 - 0 of Package ID
  */
      unsigned int   packageIdLSW : 16;    /* 01.000F.F:0  RO       */
                     /* Bits 15 - 0 of Package ID  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_PmaStandardPackageIdentifier_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Reserved 14 Register: 01.0014 */
/*                  PMA Reserved 14 Register: 01.0014 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Reserved 14 Register */
  union
  {
    struct
    {
                    /*! \brief 01.0014.F:0 R/W Reserved_14 [F:0]
                        AQ_PmaReserved_14Register_CAL.u0.bits_0.reserved14

                        Default = 0x0000

                        Reserved bits [15:0]
  */
      unsigned int   reserved14 : 16;    /* 01.0014.F:0  R/W      Default = 0x0000 */
                     /* Reserved bits [15:0]  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaReserved_14Register_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Extended Ability Register: 01.0015 */
/*                  PMA Extended Ability Register: 01.0015 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Extended Ability Register */
  union
  {
    struct
    {
                    /*! \brief 01.0015.F:2 ROS Reserved_15 [F:2]
                        AQ_PmaExtendedAbilityRegister_CAL.u0.bits_0.reserved15

                        Default = 0x0000

                        Reserved bits [15:2]
  */
      unsigned int   reserved15 : 14;    /* 01.0015.F:2  ROS      Default = 0x0000 */
                     /* Reserved bits [15:2]  */
                    /*! \brief 01.0015.1 ROS 5GBASE-T Ability
                        AQ_PmaExtendedAbilityRegister_CAL.u0.bits_0._5gbase_tAbility

                        Default = 0x1

                        1 = PMA/PMD is able to perform 5GBASE-T
                        0 = PMA/PMD is not able to perform 5GBASE-T
  */
      unsigned int   _5gbase_tAbility : 1;    /* 01.0015.1  ROS      Default = 0x1 */
                     /* 1 = PMA/PMD is able to perform 5GBASE-T
                        0 = PMA/PMD is not able to perform 5GBASE-T  */
                    /*! \brief 01.0015.0 ROS 2.5GBASE-T Ability
                        AQ_PmaExtendedAbilityRegister_CAL.u0.bits_0._2_5gbase_tAbility

                        Default = 0x1

                        1 = PMA/PMD is able to perform 2.5GBASE-T
                        0 = PMA/PMD is not able to perform 2.5GBASE-T
  */
      unsigned int   _2_5gbase_tAbility : 1;    /* 01.0015.0  ROS      Default = 0x1 */
                     /* 1 = PMA/PMD is able to perform 2.5GBASE-T
                        0 = PMA/PMD is not able to perform 2.5GBASE-T  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaExtendedAbilityRegister_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Reserved 16 Register: 01.0016 */
/*                  PMA Reserved 16 Register: 01.0016 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Reserved 16 Register */
  union
  {
    struct
    {
                    /*! \brief 01.0016.F:0 R/W Reserved_16 [F:0]
                        AQ_PmaReserved_16Register_CAL.u0.bits_0.reserved16

                        Default = 0x0000

                        Reserved bits [15:0]
  */
      unsigned int   reserved16 : 16;    /* 01.0016.F:0  R/W      Default = 0x0000 */
                     /* Reserved bits [15:0]  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaReserved_16Register_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Reserved 17 Register: 01.0017 */
/*                  PMA Reserved 17 Register: 01.0017 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Reserved 17 Register */
  union
  {
    struct
    {
                    /*! \brief 01.0017.F:0 R/W Reserved_17 [F:0]
                        AQ_PmaReserved_17Register_CAL.u0.bits_0.reserved17

                        Default = 0x0000

                        Reserved bits [15:0]
  */
      unsigned int   reserved17 : 16;    /* 01.0017.F:0  R/W      Default = 0x0000 */
                     /* Reserved bits [15:0]  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaReserved_17Register_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Reserved 18 Register: 01.0018 */
/*                  PMA Reserved 18 Register: 01.0018 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Reserved 18 Register */
  union
  {
    struct
    {
                    /*! \brief 01.0018.F:0 R/W Reserved_18 [F:0]
                        AQ_PmaReserved_18Register_CAL.u0.bits_0.reserved18

                        Default = 0x0000

                        Reserved bits [15:0]
  */
      unsigned int   reserved18 : 16;    /* 01.0018.F:0  R/W      Default = 0x0000 */
                     /* Reserved bits [15:0]  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaReserved_18Register_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Status: 01.0081 */
/*                  PMA 10GBASE-T Status: 01.0081 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.0081.0 RO Link Partner Information Valid
                        AQ_Pma10GBaseT_Status_CAL.u0.bits_0.linkPartnerInformationValid

                        

                        1 = 10GBASE-T Link Partner information is valid
                        0 = 10GBASE-T Link Partner information is not valid

                 <B>Notes:</B>
                        When set, this bit indicates that the startup protocol (55.4.2.5) has completed.  */
      unsigned int   linkPartnerInformationValid : 1;    /* 01.0081.0  RO       */
                     /* 1 = 10GBASE-T Link Partner information is valid
                        0 = 10GBASE-T Link Partner information is not valid  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_Status_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Pair Swap and Polarity Status: 01.0082 */
/*                  PMA 10GBASE-T Pair Swap and Polarity Status: 01.0082 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Pair Swap and Polarity Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 4;
                    /*! \brief 01.0082.B:8 RO Pair Polarity [3:0]
                        AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL.u0.bits_0.pairPolarity

                        

                        1 = Polarity of Pair is reversed
                        0 = Polarity of Pair is normal
                        [3] = Pair D Polarity
                        [2] = Pair C Polarity
                        [1] = Pair B Polarity
                        [0] = Pair A Polarity
                        

                 <B>Notes:</B>
                        When set, this bit indicates that the wires on the respective pair are reversed.  */
      unsigned int   pairPolarity : 4;    /* 01.0082.B:8  RO       */
                     /* 1 = Polarity of Pair is reversed
                        0 = Polarity of Pair is normal
                        [3] = Pair D Polarity
                        [2] = Pair C Polarity
                        [1] = Pair B Polarity
                        [0] = Pair A Polarity
                          */
      unsigned int   reserved1 : 6;
                    /*! \brief 01.0082.1:0 RO MDI / MD-X Connection State [1:0]
                        AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL.u0.bits_0.mdi_Md_xConnectionState

                        

                        [1:0]
                        1 1 = No crossover
                        1 0 = Pair A / B crossover
                        0 1 = Pair C / D crossover
                        0 0 = Pair A / B and C / D crossover
                        

                 <B>Notes:</B>
                        These two bits indicate the current status of pair swaps at the MDI / MD-X  */
      unsigned int   mdi_Md_xConnectionState : 2;    /* 01.0082.1:0  RO       */
                     /* [1:0]
                        1 1 = No crossover
                        1 0 = Pair A / B crossover
                        0 1 = Pair C / D crossover
                        0 0 = Pair A / B and C / D crossover
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Tx Power Backoff and Short Reach Setting: 01.0083 */
/*                  PMA 10GBASE-T Tx Power Backoff and Short Reach Setting: 01.0083 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Tx Power Backoff and Short Reach Setting */
  union
  {
    struct
    {
                    /*! \brief 01.0083.F:D RO Link Partner Tx Power Backoff [2:0]
                        AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL.u0.bits_0.linkPartnerTxPowerBackoff

                        

                        [F:D]
                        0x7 = 14 dB
                        0x6 = 12 dB
                        0x5 = 10 dB
                        0x4 = 8 dB
                        0x3 = 6 dB
                        0x2 = 4 dB
                        0x1 = 2 dB
                        0x0 = 0 dB

                 <B>Notes:</B>
                        The power backoff of the link partner  */
      unsigned int   linkPartnerTxPowerBackoff : 3;    /* 01.0083.F:D  RO       */
                     /* [F:D]
                        0x7 = 14 dB
                        0x6 = 12 dB
                        0x5 = 10 dB
                        0x4 = 8 dB
                        0x3 = 6 dB
                        0x2 = 4 dB
                        0x1 = 2 dB
                        0x0 = 0 dB  */
                    /*! \brief 01.0083.C:A RO Tx Power Backoff [2:0]
                        AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL.u0.bits_0.txPowerBackoff

                        

                        [C:A]
                        0x7 = 14 dB
                        0x6 = 12 dB
                        0x5 = 10 dB
                        0x4 = 8 dB
                        0x3 = 6 dB
                        0x2 = 4 dB
                        0x1 = 2 dB
                        0x0 = 0 dB

                 <B>Notes:</B>
                        The power backoff of the PMA  */
      unsigned int   txPowerBackoff : 3;    /* 01.0083.C:A  RO       */
                     /* [C:A]
                        0x7 = 14 dB
                        0x6 = 12 dB
                        0x5 = 10 dB
                        0x4 = 8 dB
                        0x3 = 6 dB
                        0x2 = 4 dB
                        0x1 = 2 dB
                        0x0 = 0 dB  */
                    /*! \brief 01.0083.9:1 R/WPD Reserved_83 [9:1]
                        AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL.u0.bits_0.reserved83

                        Provisionable Default = 0x000

                        Reserved bits 9 to 1
  */
      unsigned int   reserved83 : 9;    /* 01.0083.9:1  R/WPD      Provisionable Default = 0x000 */
                     /* Reserved bits 9 to 1  */
                    /*! \brief 01.0083.0 R/WPD Short Reach Mode
                        AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL.u0.bits_0.shortReachMode

                        Provisionable Default = 0x0

                        1 = Set PMA to operate in short-reach mode
                        0 = PMA is in normal operation

                 <B>Notes:</B>
                        When set, this bit places the PMA into short-reach mode  */
      unsigned int   shortReachMode : 1;    /* 01.0083.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Set PMA to operate in short-reach mode
                        0 = PMA is in normal operation  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Test Modes: 01.0084 */
/*                  PMA 10GBASE-T Test Modes: 01.0084 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Test Modes */
  union
  {
    struct
    {
                    /*! \brief 01.0084.F:D R/WPD Test Mode Control [2:0]
                        AQ_Pma10GBaseT_TestModes_CAL.u0.bits_0.testModeControl

                        Provisionable Default = 0x0

                        [F:D]
                        0x7 = Pseudo random test mode for BER Monitor
                        0x6 = Transmitter Droop test
                        0x5 = PSD and power level test
                        0x4 = Transmitter distortion test
                        0x3 = Slave mode jitter test
                        0x2 = Master mode jitter test
                        0x1 = Master source for slave mode jitter test
                        0x0 = Normal operation
                        

                 <B>Notes:</B>
                        Test mode control for the PMA as defined in Section 55.5.2 of 802.3an.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   testModeControl : 3;    /* 01.0084.F:D  R/WPD      Provisionable Default = 0x0 */
                     /* [F:D]
                        0x7 = Pseudo random test mode for BER Monitor
                        0x6 = Transmitter Droop test
                        0x5 = PSD and power level test
                        0x4 = Transmitter distortion test
                        0x3 = Slave mode jitter test
                        0x2 = Master mode jitter test
                        0x1 = Master source for slave mode jitter test
                        0x0 = Normal operation
                          */
                    /*! \brief 01.0084.C:A R/WPD Transmitter Test Frequencies [2:0]
                        AQ_Pma10GBaseT_TestModes_CAL.u0.bits_0.transmitterTestFrequencies

                        Provisionable Default = 0x0

                        [C:A]
                        0x7 = Reserved
                        0x6 = Dual Tone #5
                        0x5 = Dual Tone #4
                        0x4 = Dual Tone #3
                        0x3 = Reserved
                        0x2 = Dual Tone #2
                        0x1 = Dual Tone #1
                        0x0 = Reserved

                 <B>Notes:</B>
                        The test frequencies associated with Test Mode #4 in [F:D].  */
      unsigned int   transmitterTestFrequencies : 3;    /* 01.0084.C:A  R/WPD      Provisionable Default = 0x0 */
                     /* [C:A]
                        0x7 = Reserved
                        0x6 = Dual Tone #5
                        0x5 = Dual Tone #4
                        0x4 = Dual Tone #3
                        0x3 = Reserved
                        0x2 = Dual Tone #2
                        0x1 = Dual Tone #1
                        0x0 = Reserved  */
      unsigned int   reserved0 : 10;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_TestModes_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T SNR Operating Margin Channel A: 01.0085 */
/*                  PMA 10GBASE-T SNR Operating Margin Channel A: 01.0085 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T SNR Operating Margin Channel A */
  union
  {
    struct
    {
                    /*! \brief 01.0085.F:0 RO Channel A Operating Margin [F:0]
                        AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL.u0.bits_0.channelAOperatingMargin

                        

                        Operating margin (dB) of Channel A
                        

                 <B>Notes:</B>
                        The excess SNR that is enjoyed by the channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelAOperatingMargin : 16;    /* 01.0085.F:0  RO       */
                     /* Operating margin (dB) of Channel A
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T SNR Operating Margin Channel B: 01.0086 */
/*                  PMA 10GBASE-T SNR Operating Margin Channel B: 01.0086 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T SNR Operating Margin Channel B */
  union
  {
    struct
    {
                    /*! \brief 01.0086.F:0 RO Channel B Operating Margin [F:0]
                        AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL.u0.bits_0.channelBOperatingMargin

                        

                        Operating margin (dB) of Channel B
                        

                 <B>Notes:</B>
                        The excess SNR that is enjoyed by the channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelBOperatingMargin : 16;    /* 01.0086.F:0  RO       */
                     /* Operating margin (dB) of Channel B
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T SNR Operating Margin Channel C: 01.0087 */
/*                  PMA 10GBASE-T SNR Operating Margin Channel C: 01.0087 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T SNR Operating Margin Channel C */
  union
  {
    struct
    {
                    /*! \brief 01.0087.F:0 RO Channel C Operating Margin [F:0]
                        AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL.u0.bits_0.channelCOperatingMargin

                        

                        Operating margin (dB) of Channel C
                        

                 <B>Notes:</B>
                        The excess SNR that is enjoyed by the channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelCOperatingMargin : 16;    /* 01.0087.F:0  RO       */
                     /* Operating margin (dB) of Channel C
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T SNR Operating Margin Channel D: 01.0088 */
/*                  PMA 10GBASE-T SNR Operating Margin Channel D: 01.0088 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T SNR Operating Margin Channel D */
  union
  {
    struct
    {
                    /*! \brief 01.0088.F:0 RO Channel D Operating Margin [F:0]
                        AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL.u0.bits_0.channelDOperatingMargin

                        

                        Operating margin (dB) of Channel D
                        

                 <B>Notes:</B>
                        The excess SNR that is enjoyed by the channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelDOperatingMargin : 16;    /* 01.0088.F:0  RO       */
                     /* Operating margin (dB) of Channel D
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T SNR Minimum Operating Margin Channel A: 01.0089 */
/*                  PMA 10GBASE-T SNR Minimum Operating Margin Channel A: 01.0089 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T SNR Minimum Operating Margin Channel A */
  union
  {
    struct
    {
                    /*! \brief 01.0089.F:0 RO Channel A Minimum Operating Margin [F:0]
                        AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL.u0.bits_0.channelAMinimumOperatingMargin

                        

                        Minimum operating margin (dB) of Channel A since last link up

                 <B>Notes:</B>
                        The excess SNR that is enjoyed by the channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelAMinimumOperatingMargin : 16;    /* 01.0089.F:0  RO       */
                     /* Minimum operating margin (dB) of Channel A since last link up  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T SNR Minimum Operating Margin Channel B: 01.008A */
/*                  PMA 10GBASE-T SNR Minimum Operating Margin Channel B: 01.008A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T SNR Minimum Operating Margin Channel B */
  union
  {
    struct
    {
                    /*! \brief 01.008A.F:0 RO Channel B Minimum Operating Margin [F:0]
                        AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL.u0.bits_0.channelBMinimumOperatingMargin

                        

                        Minimum operating margin (dB) of Channel B since last link up

                 <B>Notes:</B>
                        The excess SNR that is enjoyed by the channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelBMinimumOperatingMargin : 16;    /* 01.008A.F:0  RO       */
                     /* Minimum operating margin (dB) of Channel B since last link up  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T SNR Minimum Operating Margin Channel C: 01.008B */
/*                  PMA 10GBASE-T SNR Minimum Operating Margin Channel C: 01.008B */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T SNR Minimum Operating Margin Channel C */
  union
  {
    struct
    {
                    /*! \brief 01.008B.F:0 RO Channel C Minimum Operating Margin [F:0]
                        AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL.u0.bits_0.channelCMinimumOperatingMargin

                        

                        Minimum operating margin (dB) of Channel C since last link up

                 <B>Notes:</B>
                        The excess SNR that is enjoyed by the channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelCMinimumOperatingMargin : 16;    /* 01.008B.F:0  RO       */
                     /* Minimum operating margin (dB) of Channel C since last link up  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T SNR Minimum Operating Margin Channel D: 01.008C */
/*                  PMA 10GBASE-T SNR Minimum Operating Margin Channel D: 01.008C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T SNR Minimum Operating Margin Channel D */
  union
  {
    struct
    {
                    /*! \brief 01.008C.F:0 RO Channel D Minimum Operating Margin [F:0]
                        AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL.u0.bits_0.channelDMinimumOperatingMargin

                        

                        Minimum operating margin (dB) of Channel D since last link up

                 <B>Notes:</B>
                        The excess SNR that is enjoyed by the channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelDMinimumOperatingMargin : 16;    /* 01.008C.F:0  RO       */
                     /* Minimum operating margin (dB) of Channel D since last link up  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Receive Signal Power Channel A: 01.008D */
/*                  PMA 10GBASE-T Receive Signal Power Channel A: 01.008D */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Receive Signal Power Channel A */
  union
  {
    struct
    {
                    /*! \brief 01.008D.F:0 RO Channel A Received Signal Power [F:0]
                        AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL.u0.bits_0.channelAReceivedSignalPower

                        

                        Received signal power (dBm) for Channel A

                 <B>Notes:</B>
                        The received signal power on the channel. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -20.0 dB to +5.5dB. The number is in offset two's complement notation, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelAReceivedSignalPower : 16;    /* 01.008D.F:0  RO       */
                     /* Received signal power (dBm) for Channel A  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Receive Signal Power Channel B: 01.008E */
/*                  PMA 10GBASE-T Receive Signal Power Channel B: 01.008E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Receive Signal Power Channel B */
  union
  {
    struct
    {
                    /*! \brief 01.008E.F:0 RO Channel B Received Signal Power [F:0]
                        AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL.u0.bits_0.channelBReceivedSignalPower

                        

                        Received signal power (dBm) for Channel B

                 <B>Notes:</B>
                        The received signal power on the channel. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -20.0 dB to +5.5dB. The number is in offset two's complement notation, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelBReceivedSignalPower : 16;    /* 01.008E.F:0  RO       */
                     /* Received signal power (dBm) for Channel B  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Receive Signal Power Channel C: 01.008F */
/*                  PMA 10GBASE-T Receive Signal Power Channel C: 01.008F */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Receive Signal Power Channel C */
  union
  {
    struct
    {
                    /*! \brief 01.008F.F:0 RO Channel C Received Signal Power [F:0]
                        AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL.u0.bits_0.channelCReceivedSignalPower

                        

                        Received signal power (dBm) for Channel C

                 <B>Notes:</B>
                        The received signal power on the channel. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -20.0 dB to +5.5dB. The number is in offset two's complement notation, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelCReceivedSignalPower : 16;    /* 01.008F.F:0  RO       */
                     /* Received signal power (dBm) for Channel C  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Receive Signal Power Channel D: 01.0090 */
/*                  PMA 10GBASE-T Receive Signal Power Channel D: 01.0090 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Receive Signal Power Channel D */
  union
  {
    struct
    {
                    /*! \brief 01.0090.F:0 RO Channel D Received Signal Power [F:0]
                        AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL.u0.bits_0.channelDReceivedSignalPower

                        

                        Received signal power (dBm) for Channel D

                 <B>Notes:</B>
                        The received signal power on the channel. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -20.0 dB to +5.5dB. The number is in offset two's complement notation, with 0.0 dB represented by 0x8000.  */
      unsigned int   channelDReceivedSignalPower : 16;    /* 01.0090.F:0  RO       */
                     /* Received signal power (dBm) for Channel D  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Skew Delay: 01.0091 */
/*                  PMA 10GBASE-T Skew Delay: 01.0091 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Skew Delay */
  union
  {
    struct
    {
      unsigned int   reserved0 : 1;
                    /*! \brief 01.0091.E:8 RO Skew Delay B [6:0]
                        AQ_Pma10GBaseT_SkewDelay_CAL.u0.bits_0.skewDelayB

                        

                        Skew delay for pair B
                        

                 <B>Notes:</B>
                        The skew delay reports the current skew delay on each of the pair with respect to physical pair A. It is reported with 1.25 ns resolution to an accuracy of 2.5 ns. The number is in two's complement notation with positive values representing delay and negative values representing advance with respect to physical pair A. If the delay exceed the maximum amount that can be represented by the range (-80 ns to +78.75 ns), the field displays the maximum respective value.  */
      unsigned int   skewDelayB : 7;    /* 01.0091.E:8  RO       */
                     /* Skew delay for pair B
                          */
      unsigned int   reserved1 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA 10GBASE-T Skew Delay */
  union
  {
    struct
    {
      unsigned int   reserved0 : 1;
                    /*! \brief 01.0092.E:8 RO Skew Delay D [6:0]
                        AQ_Pma10GBaseT_SkewDelay_CAL.u1.bits_1.skewDelayD

                        

                        Skew delay for pair D
                        

                 <B>Notes:</B>
                        The skew delay reports the current skew delay on each of the pair with respect to physical pair A. It is reported with 1.25 ns resolution to an accuracy of 2.5 ns. The number is in two's complement notation with positive values representing delay and negative values representing advance with respect to physical pair A. If the delay exceed the maximum amount that can be represented by the range (-80 ns to +78.75 ns), the field displays the maximum respective value.  */
      unsigned int   skewDelayD : 7;    /* 01.0092.E:8  RO       */
                     /* Skew delay for pair D
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.0092.6:0 RO Skew Delay C [6:0]
                        AQ_Pma10GBaseT_SkewDelay_CAL.u1.bits_1.skewDelayC

                        

                        Skew delay for pair C
                        

                 <B>Notes:</B>
                        The skew delay reports the current skew delay on each of the pair with respect to physical pair A. It is reported with 1.25 ns resolution to an accuracy of 2.5 ns. The number is in two's complement notation with positive values representing delay and negative values representing advance with respect to physical pair A. If the delay exceed the maximum amount that can be represented by the range (-80 ns to +78.75 ns), the field displays the maximum respective value.  */
      unsigned int   skewDelayC : 7;    /* 01.0092.6:0  RO       */
                     /* Skew delay for pair C
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Pma10GBaseT_SkewDelay_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA 10GBASE-T Fast Retrain Status and Control: 01.0093 */
/*                  PMA 10GBASE-T Fast Retrain Status and Control: 01.0093 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA 10GBASE-T Fast Retrain Status and Control */
  union
  {
    struct
    {
                    /*! \brief 01.0093.F:B SCT LP Fast Retrain Count [4:0]
                        AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL.u0.bits_0.lpFastRetrainCount

                        Default = 0x00

                        Counts the number of fast retrains requested by the link partner
                        

                 <B>Notes:</B>
                        Saturating clear on read counter.  */
      unsigned int   lpFastRetrainCount : 5;    /* 01.0093.F:B  SCT      Default = 0x00 */
                     /* Counts the number of fast retrains requested by the link partner
                          */
                    /*! \brief 01.0093.A:6 SCT LD Fast Retrain Count [4:0]
                        AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL.u0.bits_0.ldFastRetrainCount

                        Default = 0x00

                        Counts the number of fast retrains requested by the local device
                        

                 <B>Notes:</B>
                        Saturating clear on read counter.  */
      unsigned int   ldFastRetrainCount : 5;    /* 01.0093.A:6  SCT      Default = 0x00 */
                     /* Counts the number of fast retrains requested by the local device
                          */
                    /*! \brief 01.0093.5 R/WPD Reserved_93
                        AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL.u0.bits_0.reserved93

                        Provisionable Default = 0x0

                        Reserved bit 5
  */
      unsigned int   reserved93 : 1;    /* 01.0093.5  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved bit 5  */
                    /*! \brief 01.0093.4 RO Fast Retrain Ability
                        AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL.u0.bits_0.fastRetrainAbility

                        

                        1 = Fast retrain capability is supported
                        0 = Fast retrain capability is not supported
  */
      unsigned int   fastRetrainAbility : 1;    /* 01.0093.4  RO       */
                     /* 1 = Fast retrain capability is supported
                        0 = Fast retrain capability is not supported  */
                    /*! \brief 01.0093.3 RO Fast Retrain Negotiated
                        AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL.u0.bits_0.fastRetrainNegotiated

                        

                        1 = Fast retrain capability was negotiated
                        0 = Fast retrain capability was not negotiated
  */
      unsigned int   fastRetrainNegotiated : 1;    /* 01.0093.3  RO       */
                     /* 1 = Fast retrain capability was negotiated
                        0 = Fast retrain capability was not negotiated  */
                    /*! \brief 01.0093.2:1 R/W Fast Retrain Signal Type [1:0]
                        AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL.u0.bits_0.fastRetrainSignalType

                        Default = 0x0

                        11 = Reserved
                        10 = PHY signals Link Interruption during fast retrain
                        01 = PHY signals Local Fault during fast retrain
                        00 = PHY signals IDLE during fast retrain
  */
      unsigned int   fastRetrainSignalType : 2;    /* 01.0093.2:1  R/W      Default = 0x0 */
                     /* 11 = Reserved
                        10 = PHY signals Link Interruption during fast retrain
                        01 = PHY signals Local Fault during fast retrain
                        00 = PHY signals IDLE during fast retrain  */
                    /*! \brief 01.0093.0 R/W Fast Retrain Enable
                        AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL.u0.bits_0.fastRetrainEnable

                        Default = 0x0

                        1 = Fast retrain capability is enabled
                        0 = Fast retrain capability is disabled
  */
      unsigned int   fastRetrainEnable : 1;    /* 01.0093.0  R/W      Default = 0x0 */
                     /* 1 = Fast retrain capability is enabled
                        0 = Fast retrain capability is disabled  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                TimeSync PMA Capability: 01.0708 */
/*                  TimeSync PMA Capability: 01.0708 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of TimeSync PMA Capability */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.0708.1 RO TimeSync Transmit Path Data Delay
                        AQ_TimesyncPmaCapability_CAL.u0.bits_0.timesyncTransmitPathDataDelay

                        

                        1 = PMA provides information on transmit path data delay in registers 1.1801 through 1.1804
                        0 = PMA does not provide information on transmit path data delay
  */
      unsigned int   timesyncTransmitPathDataDelay : 1;    /* 01.0708.1  RO       */
                     /* 1 = PMA provides information on transmit path data delay in registers 1.1801 through 1.1804
                        0 = PMA does not provide information on transmit path data delay  */
                    /*! \brief 01.0708.0 RO TimeSync Receive Path Data Delay
                        AQ_TimesyncPmaCapability_CAL.u0.bits_0.timesyncReceivePathDataDelay

                        

                        1 = PMA provides information on receive path data delay in registers 1.1805 through 1.1808
                        0 = PMA does not provide information on receive path data delay
  */
      unsigned int   timesyncReceivePathDataDelay : 1;    /* 01.0708.0  RO       */
                     /* 1 = PMA provides information on receive path data delay in registers 1.1805 through 1.1808
                        0 = PMA does not provide information on receive path data delay  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_TimesyncPmaCapability_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                TimeSync PMA Transmit Path Data Delay: 01.0709 */
/*                  TimeSync PMA Transmit Path Data Delay: 01.0709 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of TimeSync PMA Transmit Path Data Delay */
  union
  {
    struct
    {
                    /*! \brief 01.0709.F:0 RO Maximum PMA Transmit Path Data Delay LSW [F:0]
                        AQ_TimesyncPmaTransmitPathDataDelay_CAL.u0.bits_0.maximumPmaTransmitPathDataDelayLSW

                        

                        LSW of maximum PMA transmit delay in nanoseconds
  */
      unsigned int   maximumPmaTransmitPathDataDelayLSW : 16;    /* 01.0709.F:0  RO       */
                     /* LSW of maximum PMA transmit delay in nanoseconds  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of TimeSync PMA Transmit Path Data Delay */
  union
  {
    struct
    {
                    /*! \brief 01.070A.F:0 RO Maximum PMA Transmit Path Data Delay MSW [F:0]
                        AQ_TimesyncPmaTransmitPathDataDelay_CAL.u1.bits_1.maximumPmaTransmitPathDataDelayMSW

                        

                        MSW of maximum PMA transmit delay in nanoseconds
  */
      unsigned int   maximumPmaTransmitPathDataDelayMSW : 16;    /* 01.070A.F:0  RO       */
                     /* MSW of maximum PMA transmit delay in nanoseconds  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of TimeSync PMA Transmit Path Data Delay */
  union
  {
    struct
    {
                    /*! \brief 01.070B.F:0 RO Minimum PMA Transmit Path Data Delay LSW [F:0]
                        AQ_TimesyncPmaTransmitPathDataDelay_CAL.u2.bits_2.minimumPmaTransmitPathDataDelayLSW

                        

                        LSW of minimum PMA transmit delay in nanoseconds
  */
      unsigned int   minimumPmaTransmitPathDataDelayLSW : 16;    /* 01.070B.F:0  RO       */
                     /* LSW of minimum PMA transmit delay in nanoseconds  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of TimeSync PMA Transmit Path Data Delay */
  union
  {
    struct
    {
                    /*! \brief 01.070C.F:0 RO Minimum PMA Transmit Path Data Delay MSW [F:0]
                        AQ_TimesyncPmaTransmitPathDataDelay_CAL.u3.bits_3.minimumPmaTransmitPathDataDelayMSW

                        

                        MSW of minimum PMA transmit delay in nanoseconds
  */
      unsigned int   minimumPmaTransmitPathDataDelayMSW : 16;    /* 01.070C.F:0  RO       */
                     /* MSW of minimum PMA transmit delay in nanoseconds  */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_TimesyncPmaTransmitPathDataDelay_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                TimeSync PMA Receive Path Data Delay: 01.070D */
/*                  TimeSync PMA Receive Path Data Delay: 01.070D */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of TimeSync PMA Receive Path Data Delay */
  union
  {
    struct
    {
                    /*! \brief 01.070D.F:0 RO Maximum PMA Receive Path Data Delay LSW [F:0]
                        AQ_TimesyncPmaReceivePathDataDelay_CAL.u0.bits_0.maximumPmaReceivePathDataDelayLSW

                        

                        LSW of maximum PMA receive delay in nanoseconds
  */
      unsigned int   maximumPmaReceivePathDataDelayLSW : 16;    /* 01.070D.F:0  RO       */
                     /* LSW of maximum PMA receive delay in nanoseconds  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of TimeSync PMA Receive Path Data Delay */
  union
  {
    struct
    {
                    /*! \brief 01.070E.F:0 RO Maximum PMA Receive Path Data Delay MSW [F:0]
                        AQ_TimesyncPmaReceivePathDataDelay_CAL.u1.bits_1.maximumPmaReceivePathDataDelayMSW

                        

                        MSW of maximum PMA receive delay in nanoseconds
  */
      unsigned int   maximumPmaReceivePathDataDelayMSW : 16;    /* 01.070E.F:0  RO       */
                     /* MSW of maximum PMA receive delay in nanoseconds  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of TimeSync PMA Receive Path Data Delay */
  union
  {
    struct
    {
                    /*! \brief 01.070F.F:0 RO Minimum PMA Receive Path Data Delay LSW [F:0]
                        AQ_TimesyncPmaReceivePathDataDelay_CAL.u2.bits_2.minimumPmaReceivePathDataDelayLSW

                        

                        LSW of minimum PMA receive delay in nanoseconds
  */
      unsigned int   minimumPmaReceivePathDataDelayLSW : 16;    /* 01.070F.F:0  RO       */
                     /* LSW of minimum PMA receive delay in nanoseconds  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of TimeSync PMA Receive Path Data Delay */
  union
  {
    struct
    {
                    /*! \brief 01.0710.F:0 RO Minimum PMA Receive Path Data Delay MSW [F:0]
                        AQ_TimesyncPmaReceivePathDataDelay_CAL.u3.bits_3.minimumPmaReceivePathDataDelayMSW

                        

                        MSW of minimum PMA receive delay in nanoseconds
  */
      unsigned int   minimumPmaReceivePathDataDelayMSW : 16;    /* 01.0710.F:0  RO       */
                     /* MSW of minimum PMA receive delay in nanoseconds  */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_TimesyncPmaReceivePathDataDelay_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Transmit Reserved Vendor Provisioning: 01.C412 */
/*                  PMA Transmit Reserved Vendor Provisioning: 01.C412 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
                    /*! \brief 01.C412.F:E R/WPD Test Mode Rate [1:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u0.bits_0.testModeRate

                        Provisionable Default = 0x0

                        2 = 2.5G Test Modes 
                        1 = 5G Test Modes
                        0 = 10G Test Mode
                        

                 <B>Notes:</B>
                        This field controls the  data rate for the test mode activated with register 1.84.  */
      unsigned int   testModeRate : 2;    /* 01.C412.F:E  R/WPD      Provisionable Default = 0x0 */
                     /* 2 = 2.5G Test Modes 
                        1 = 5G Test Modes
                        0 = 10G Test Mode
                          */
                    /*! \brief 01.C412.D:4 R/WPD Reserved Spare Transmit Provisioning 0 [9:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u0.bits_0.reservedSpareTransmitProvisioning_0

                        Provisionable Default = 0x000

                        Reserved for future use
                        
  */
      unsigned int   reservedSpareTransmitProvisioning_0 : 10;    /* 01.C412.D:4  R/WPD      Provisionable Default = 0x000 */
                     /* Reserved for future use
                          */
                    /*! \brief 01.C412.3:0 R/W Tx Polarity Invert Enable [3:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u0.bits_0.txPolarityInvertEnable

                        Default = 0x0

                        1 = Invert corresponding Tx lane
                        

                 <B>Notes:</B>
                        Bit 0 corresponds to Lane A, Bit 1 to Lane B, etc.  */
      unsigned int   txPolarityInvertEnable : 4;    /* 01.C412.3:0  R/W      Default = 0x0 */
                     /* 1 = Invert corresponding Tx lane
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
                    /*! \brief 01.C413.F:C R/WPD Channel Mask[3:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u1.bits_1.channelMask

                        Provisionable Default = 0x0

                        Channel mask specifying which channels will be affected by the TX PSD target.
                        
  */
      unsigned int   channelMask : 4;    /* 01.C413.F:C  R/WPD      Provisionable Default = 0x0 */
                     /* Channel mask specifying which channels will be affected by the TX PSD target.
                          */
                    /*! \brief 01.C413.B:8 R/WPD Reserved Spare Transmit Provisioning 1 [3:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u1.bits_1.reservedSpareTransmitProvisioning_1

                        Provisionable Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedSpareTransmitProvisioning_1 : 4;    /* 01.C413.B:8  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved for future use
                          */
                    /*! \brief 01.C413.7:0 R/WPD Incremental Tx PSD Target [7:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u1.bits_1.incrementalTxPsdTarget

                        Provisionable Default = 0x00

                        Deviation from the current TX PSD target based on registers A.A and A.B in 2's complement form s7.
                        
  */
      unsigned int   incrementalTxPsdTarget : 8;    /* 01.C413.7:0  R/WPD      Provisionable Default = 0x00 */
                     /* Deviation from the current TX PSD target based on registers A.A and A.B in 2's complement form s7.
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Dummy union to fill space in the structure PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Dummy union to fill space in the structure PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Dummy union to fill space in the structure PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Dummy union to fill space in the structure PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Dummy union to fill space in the structure PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Dummy union to fill space in the structure PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of PMA Transmit Reserved Vendor Provisioning */
  union
  {
    struct
    {
                    /*! \brief 01.C41A.F:C R/WPD Reserved Spare Transmit Provisioning 11 [3:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u8.bits_8.reservedSpareTransmitProvisioning_11

                        Provisionable Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedSpareTransmitProvisioning_11 : 4;    /* 01.C41A.F:C  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved for future use
                          */
                    /*! \brief 01.C41A.B:8 R/WPD Test Mode Baud Rate [3:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u8.bits_8.testModeBaudRate

                        Provisionable Default = 0x0

                        0 = AUTO 
                        1 = BAUD_125 
                        2 = BAUD_160 
                        3 = BAUD_200 
                        4 = BAUD_250 
                        5 = BAUD_300 
                        6 = BAUD_320 
                        7 = BAUD_400 
                        8 = BAUD_500 
                        9 = BAUD_800 
                        10-15 = Reserved
                        

                 <B>Notes:</B>
                        When set to 0 (auto), firmware will select a value automatically.  */
      unsigned int   testModeBaudRate : 4;    /* 01.C41A.B:8  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = AUTO 
                        1 = BAUD_125 
                        2 = BAUD_160 
                        3 = BAUD_200 
                        4 = BAUD_250 
                        5 = BAUD_300 
                        6 = BAUD_320 
                        7 = BAUD_400 
                        8 = BAUD_500 
                        9 = BAUD_800 
                        10-15 = Reserved
                          */
                    /*! \brief 01.C41A.7:4 R/WPD Test Mode Constellation [3:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u8.bits_8.testModeConstellation

                        Provisionable Default = 0x0

                        0 = AUTO 
                        1 = PAM16 
                        2 = DSQ128 
                        3 = RESERVED 
                        4 = SQ64 
                        5 = 1000BASE_T 
                        6 = 100BASE_TX 
                        7 = DSQ32 
                        8 = DSQ8 
                        9 = SQ256 
                        10 = SQ16 
                        11 = PAM4 
                        

                 <B>Notes:</B>
                        When set to 0 (auto), firmware will select a value automatically.  */
      unsigned int   testModeConstellation : 4;    /* 01.C41A.7:4  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = AUTO 
                        1 = PAM16 
                        2 = DSQ128 
                        3 = RESERVED 
                        4 = SQ64 
                        5 = 1000BASE_T 
                        6 = 100BASE_TX 
                        7 = DSQ32 
                        8 = DSQ8 
                        9 = SQ256 
                        10 = SQ16 
                        11 = PAM4 
                          */
                    /*! \brief 01.C41A.3:0 R/WPD Test Mode Active Pair Disable Mask [3:0]
                        AQ_PmaTransmitReservedVendorProvisioning_CAL.u8.bits_8.testModeActivePairDisableMask

                        Provisionable Default = 0x0

                        Each bit enables/disables the corresponding channel. Bit 0 for channel 0, bit 1 for channel 1, etc.
                        0 = Channel enabled
                        1 = Channel disabled
                        

                 <B>Notes:</B>
                        A value of 0 for the whole bitfield means all channels are enabled.  */
      unsigned int   testModeActivePairDisableMask : 4;    /* 01.C41A.3:0  R/WPD      Provisionable Default = 0x0 */
                     /* Each bit enables/disables the corresponding channel. Bit 0 for channel 0, bit 1 for channel 1, etc.
                        0 = Channel enabled
                        1 = Channel disabled
                          */
    } bits_8;
    uint16_t word_8;
  } u8;
} AQ_PmaTransmitReservedVendorProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Transmit Vendor Alarms: 01.CC00 */
/*                  PMA Transmit Vendor Alarms: 01.CC00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Transmit Vendor Alarms */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA Transmit Vendor Alarms */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of PMA Transmit Vendor Alarms */
  union
  {
    struct
    {
                    /*! \brief 01.CC02.F:2 LH Reserved PMA Transmit Alarms 3 [D:0]
                        AQ_PmaTransmitVendorAlarms_CAL.u2.bits_2.reservedPmaTransmitAlarms_3

                        

                        Reserved for internal use
                        
  */
      unsigned int   reservedPmaTransmitAlarms_3 : 14;    /* 01.CC02.F:2  LH       */
                     /* Reserved for internal use
                          */
                    /*! \brief 01.CC02.1 ROS Zero
                        AQ_PmaTransmitVendorAlarms_CAL.u2.bits_2.zero

                        Default = 0x0

                        Defined as 0
                        

                 <B>Notes:</B>
                        Used to provide a guaranteed zero location in the same register as Reset Complete  */
      unsigned int   zero : 1;    /* 01.CC02.1  ROS      Default = 0x0 */
                     /* Defined as 0
                          */
                    /*! \brief 01.CC02.0 LH Reset Complete
                        AQ_PmaTransmitVendorAlarms_CAL.u2.bits_2.resetComplete

                        

                        1 = Hardware and Firmware reset has completed
                        

                 <B>Notes:</B>
                        This bit is a mirror of 1E.CC00.6, but has associated with it a known zero bit that can be used to ascertain that HW reset has completed, enabling Reset Complete to be read in one shot without double polling and dealing with tristate MDIO issues. It avoids of problem of not knowing if / when the HW complete phase of a reset has occurred when double-polling  */
      unsigned int   resetComplete : 1;    /* 01.CC02.0  LH       */
                     /* 1 = Hardware and Firmware reset has completed
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_PmaTransmitVendorAlarms_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Transmit Standard Interrupt Mask: 01.D000 */
/*                  PMA Transmit Standard Interrupt Mask: 01.D000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Transmit Standard Interrupt Mask */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.D000.2 R/WPD PMA Receive Link Status Mask
                        AQ_PmaTransmitStandardInterruptMask_CAL.u0.bits_0.pmaReceiveLinkStatusMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation

                 <B>Notes:</B>
                        Mask for Bit 1.1.2.  */
      unsigned int   pmaReceiveLinkStatusMask : 1;    /* 01.D000.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved1 : 2;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA Transmit Standard Interrupt Mask */
  union
  {
    struct
    {
      unsigned int   reserved0 : 4;
                    /*! \brief 01.D001.B R/WPD Transmit Fault Mask
                        AQ_PmaTransmitStandardInterruptMask_CAL.u1.bits_1.transmitFaultMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation

                 <B>Notes:</B>
                        Bit 1.8.B  */
      unsigned int   transmitFaultMask : 1;    /* 01.D001.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 01.D001.A R/WPD Receive Fault Mask
                        AQ_PmaTransmitStandardInterruptMask_CAL.u1.bits_1.receiveFaultMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation

                 <B>Notes:</B>
                        Bit 1.8.A  */
      unsigned int   receiveFaultMask : 1;    /* 01.D001.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved1 : 10;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_PmaTransmitStandardInterruptMask_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Transmit Vendor LASI Interrupt Mask: 01.D400 */
/*                  PMA Transmit Vendor LASI Interrupt Mask: 01.D400 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Transmit Vendor LASI Interrupt Mask */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA Transmit Vendor LASI Interrupt Mask */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of PMA Transmit Vendor LASI Interrupt Mask */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_PmaTransmitVendorLASI_InterruptMask_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Transmit Vendor Debug: 01.D800 */
/*                  PMA Transmit Vendor Debug: 01.D800 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Transmit Vendor Debug */
  union
  {
    struct
    {
                    /*! \brief 01.D800.F R/WPD PMA Digital System Loopback
                        AQ_PmaTransmitVendorDebug_CAL.u0.bits_0.pmaDigitalSystemLoopback

                        Provisionable Default = 0x0

                        1 = Enable PMA digital system loopback
  */
      unsigned int   pmaDigitalSystemLoopback : 1;    /* 01.D800.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable PMA digital system loopback  */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaTransmitVendorDebug_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Receive Reserved Vendor Provisioning: 01.E400 */
/*                  PMA Receive Reserved Vendor Provisioning: 01.E400 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Receive Reserved Vendor Provisioning */
  union
  {
    struct
    {
                    /*! \brief 01.E400.F R/WPD External PHY Loopback
                        AQ_PmaReceiveReservedVendorProvisioning_CAL.u0.bits_0.externalPhyLoopback

                        Provisionable Default = 0x0

                        1 = Enable external PHY loopback
                        0 = Normal operation
                        

                 <B>Notes:</B>
                        External PHY loopback expects a loopback connector such that Pair A is connected to Pair B, and Pair C is connected to Pair D.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F  */
      unsigned int   externalPhyLoopback : 1;    /* 01.E400.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable external PHY loopback
                        0 = Normal operation
                          */
                    /*! \brief 01.E400.E:3 R/WPD Reserved Receive Provisioning 1 [B:0]
                        AQ_PmaReceiveReservedVendorProvisioning_CAL.u0.bits_0.reservedReceiveProvisioning_1

                        Provisionable Default = 0x000

                        Reserved for future use
                        
  */
      unsigned int   reservedReceiveProvisioning_1 : 12;    /* 01.E400.E:3  R/WPD      Provisionable Default = 0x000 */
                     /* Reserved for future use
                          */
                    /*! \brief 01.E400.2 R/WPD Enable Aquantia Fast Retrain
                        AQ_PmaReceiveReservedVendorProvisioning_CAL.u0.bits_0.enableAquantiaFastRetrain

                        Provisionable Default = 0x0

                        1 = Enable PMA Fast Link Retrain
                        0 = Disable PMA Fast Link Retrain
                        

                 <B>Notes:</B>
                        If the link partner is an Aquantia PHY and also has Fast Retrain enabled use a special retrain sequence to bring the link back up without going back through the Autonegotiation sequence.  */
      unsigned int   enableAquantiaFastRetrain : 1;    /* 01.E400.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable PMA Fast Link Retrain
                        0 = Disable PMA Fast Link Retrain
                          */
                    /*! \brief 01.E400.1 R/WPD Force MDI Configuration
                        AQ_PmaReceiveReservedVendorProvisioning_CAL.u0.bits_0.forceMdiConfiguration

                        Provisionable Default = 0x0

                        1 = Ignore state of MDI_CFG pin
                        0 = Set MDI Configuration based on state of MDI_CFG
                        

                 <B>Notes:</B>
                        Normally the MDI reversal configuration is taken from the MDI_CFG pin. If the Force MDI Configuration bit is asserted, the MDI_CFG pin is ignored and the current provisioned value of the MDI configuration bit is used instead  */
      unsigned int   forceMdiConfiguration : 1;    /* 01.E400.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Ignore state of MDI_CFG pin
                        0 = Set MDI Configuration based on state of MDI_CFG
                          */
                    /*! \brief 01.E400.0 R/WPD MDI Configuration
                        AQ_PmaReceiveReservedVendorProvisioning_CAL.u0.bits_0.mdiConfiguration

                        Provisionable Default = 0x0

                        1 = MDI Reversed (ABCD -> DCBA)
                        0 = MDI Normal (ABCD -> ABCD)
                        

                 <B>Notes:</B>
                        The setting of this bit determines whether the MDI is reversed or not. Note that the reversal does not change pair polarity - i.e. A+ maps to D+, etc. The value of this bit is set during autonegotiation to the value of the MDI_CFG pin unless the Force MDI Configuration bit (1.E400.1) is asserted, When the Force MDI Configuration bit is asserted the MDI_CFG pin is ignored and this bit is unchanged from its default or provisioned value. If this bit is changed manually after autonegotiation completes, autonegotiation must be restarted to achieve the desired MDI configuration.   */
      unsigned int   mdiConfiguration : 1;    /* 01.E400.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = MDI Reversed (ABCD -> DCBA)
                        0 = MDI Normal (ABCD -> ABCD)
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaReceiveReservedVendorProvisioning_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Receive Vendor State: 01.E800 */
/*                  PMA Receive Vendor State: 01.E800 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Receive Vendor State */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.E800.0 RO PMA Receive Link Current Status
                        AQ_PmaReceiveVendorState_CAL.u0.bits_0.pmaReceiveLinkCurrentStatus

                        

                        1 = Rx link good

                 <B>Notes:</B>
                        This is the current state of 1.1.2  */
      unsigned int   pmaReceiveLinkCurrentStatus : 1;    /* 01.E800.0  RO       */
                     /* 1 = Rx link good  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaReceiveVendorState_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Receive Reserved Vendor State: 01.E810 */
/*                  PMA Receive Reserved Vendor State: 01.E810 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Receive Reserved Vendor State */
  union
  {
    struct
    {
                    /*! \brief 01.E810.F:0 RO Accumulated Fast Retrain Time[F:0]
                        AQ_PmaReceiveReservedVendorState_CAL.u0.bits_0.accumulatedFastRetrainTime

                        

                        Accumulated time in milliseconds spent in fast retrain since the last auto-negotiation sequence
                        

                 <B>Notes:</B>
                        This is a saturating register.  */
      unsigned int   accumulatedFastRetrainTime : 16;    /* 01.E810.F:0  RO       */
                     /* Accumulated time in milliseconds spent in fast retrain since the last auto-negotiation sequence
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PMA Receive Reserved Vendor State */
  union
  {
    struct
    {
                    /*! \brief 01.E811.F:8 RO Total Number Of Link Recovery Events Since Last AutoNeg [7:0]
                        AQ_PmaReceiveReservedVendorState_CAL.u1.bits_1.totalNumberOfLinkRecoveryEventsSinceLastAutoneg

                        

                        The count of the cumulative number of Link Recovery Events since last autonegotiation
                        

                 <B>Notes:</B>
                        This register is automatically reset to 0 during Auto-negotiation. It increments once for each series of back-to-back Fast Retrain events. The result is reported modulo 256 (wrap around).  */
      unsigned int   totalNumberOfLinkRecoveryEventsSinceLastAutoneg : 8;    /* 01.E811.F:8  RO       */
                     /* The count of the cumulative number of Link Recovery Events since last autonegotiation
                          */
                    /*! \brief 01.E811.7:0 RO Total Number Of RFI Training Link Recovery Events Since Last AutoNeg [7:0]
                        AQ_PmaReceiveReservedVendorState_CAL.u1.bits_1.totalNumberOfRfiTrainingLinkRecoveryEventsSinceLastAutoneg

                        

                        The count of the cumulative number of RFI Training Link Recovery Events since last autonegotiation
                        

                 <B>Notes:</B>
                        This register is automatically reset to 0 during Auto-negotiation. The result is reported modulo 256 (wrap around).  */
      unsigned int   totalNumberOfRfiTrainingLinkRecoveryEventsSinceLastAutoneg : 8;    /* 01.E811.7:0  RO       */
                     /* The count of the cumulative number of RFI Training Link Recovery Events since last autonegotiation
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_PmaReceiveReservedVendorState_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Mode Control: 01.FA00 */
/*                  AEC Mode Control: 01.FA00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 4;
                    /*! \brief 01.FA00.B R/W AEC 3 Error Phase Select
                        AQ_AecModeControl_CAL.u0.bits_0.aec_3ErrorPhaseSelect

                        Default = 0x0

                        AEC Error Phase Selection
                        

                 <B>Notes:</B>
                        Phase selction of input 2 bit error sign input for phase adjustment purposes.
                        
                        0: Use input 2 bit error signal and retime to baud clock rate
                        1: Swap bits of 2 bit input error signal before baud clock retiming  */
      unsigned int   aec_3ErrorPhaseSelect : 1;    /* 01.FA00.B  R/W      Default = 0x0 */
                     /* AEC Error Phase Selection
                          */
                    /*! \brief 01.FA00.A R/W AEC 2 Error Phase Select
                        AQ_AecModeControl_CAL.u0.bits_0.aec_2ErrorPhaseSelect

                        Default = 0x0

                        AEC Error Phase Selection
                        
  */
      unsigned int   aec_2ErrorPhaseSelect : 1;    /* 01.FA00.A  R/W      Default = 0x0 */
                     /* AEC Error Phase Selection
                          */
                    /*! \brief 01.FA00.9 R/W AEC 1 Error Phase Select
                        AQ_AecModeControl_CAL.u0.bits_0.aec_1ErrorPhaseSelect

                        Default = 0x0

                        AEC Error Phase Selection
                        
  */
      unsigned int   aec_1ErrorPhaseSelect : 1;    /* 01.FA00.9  R/W      Default = 0x0 */
                     /* AEC Error Phase Selection
                          */
                    /*! \brief 01.FA00.8 R/W AEC 0 Error Phase Select
                        AQ_AecModeControl_CAL.u0.bits_0.aec_0ErrorPhaseSelect

                        Default = 0x0

                        AEC Error Phase Selection
                        
  */
      unsigned int   aec_0ErrorPhaseSelect : 1;    /* 01.FA00.8  R/W      Default = 0x0 */
                     /* AEC Error Phase Selection
                          */
      unsigned int   reserved1 : 4;
                    /*! \brief 01.FA00.3 R/W Oversample Error Select
                        AQ_AecModeControl_CAL.u0.bits_0.oversampleErrorSelect

                        Default = 0x0

                        AEC Oversample Error Selection
                        

                 <B>Notes:</B>
                        When we are in Mode 3 of the AEC we want to select which oversampled error value we want to use to feed the 128 tap filter
                        
                        0 - Use even error sample
                        1 - Use odd error sample  */
      unsigned int   oversampleErrorSelect : 1;    /* 01.FA00.3  R/W      Default = 0x0 */
                     /* AEC Oversample Error Selection
                          */
                    /*! \brief 01.FA00.2 R/W AEC Filter Clock Mode
                        AQ_AecModeControl_CAL.u0.bits_0.aecFilterClockMode

                        Default = 0x0

                        AEC Tap Mode
                        

                 <B>Notes:</B>
                        AEC Functional Clock Mode:
                        
                        0: ADC_CLK = BAUD_CLK
                        1: ADC_CLK = 2X BAUD_CLK
                        
                        The AEC block operates on the BAUD_CLK at all times.
                        
                        The following 4 modes are possible:
                        
                        Mode 0:
                        - 128 Tap Mode
                        - ADC_CLK = BAUD_CLK
                        - 2 FIR/CUE segments operating in serial
                        
                        Mode 1: 
                        - 64 Tap Mode
                        - ADC_CLK = 2X BAUD_CLK
                        - 2 FIR/CUE segments operating in parallel
                        
                        Mode 2: 
                        - 64 Tap Mode
                        - ADC_CLK= BAUD_CLK
                        - 1 FIR/CUE segment (segment 0) operating
                        
                        Mode 3:
                        - 128 Tap Mode
                        - ADC_CLK = 2X BAUD_CLK
                        - 2 FIR/CUE segmens operating in serial
                        - Only one error inpt is selected using the register Over Sample Error Select
                        - Data is repeated every other cycle  */
      unsigned int   aecFilterClockMode : 1;    /* 01.FA00.2  R/W      Default = 0x0 */
                     /* AEC Tap Mode
                          */
                    /*! \brief 01.FA00.1 R/W AEC Filter Tap Mode
                        AQ_AecModeControl_CAL.u0.bits_0.aecFilterTapMode

                        Default = 0x0

                        AEC Tap Mode
                        

                 <B>Notes:</B>
                        AEC Functional Clock Mode:
                        
                        0: 128 tap filter mode
                        1: 64 tap filter mode
                        
                        The AEC block operates on the BAUD_CLK at all times.
                        
                        The following 4 modes are possible:
                        
                        Mode 0:
                        - 128 Tap Mode
                        - ADC_CLK = BAUD_CLK
                        - 2 FIR/CUE segments operating in serial
                        
                        Mode 1: 
                        - 64 Tap Mode
                        - ADC_CLK = 2X BAUD_CLK
                        - 2 FIR/CUE segments operating in parallel
                        
                        Mode 2: 
                        - 64 Tap Mode
                        - ADC_CLK= BAUD_CLK
                        - 1 FIR/CUE segment (segment 0) operating
                        
                        Mode 3:
                        - 128 Tap Mode
                        - ADC_CLK = 2X BAUD_CLK
                        - 2 FIR/CUE segmens operating in serial
                        - Only one error inpt is selected using the register Over Sample Error Select
                        - Data is repeated every other cycle
                          */
      unsigned int   aecFilterTapMode : 1;    /* 01.FA00.1  R/W      Default = 0x0 */
                     /* AEC Tap Mode
                          */
                    /*! \brief 01.FA00.0 R/W AEC ASR Data Mux Select
                        AQ_AecModeControl_CAL.u0.bits_0.aecAsrDataMuxSelect

                        Default = 0x0

                        AEC ASR Mux Selection
                        

                 <B>Notes:</B>
                        1=Select ASR data into AEC FIR. This should only be used during auto-negotiation.
                        0=Select AIF data in AEC FIR (default).  */
      unsigned int   aecAsrDataMuxSelect : 1;    /* 01.FA00.0  R/W      Default = 0x0 */
                     /* AEC ASR Mux Selection
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FA02.0 R/W AEC MMD Disable MCP Clear On Read
                        AQ_AecModeControl_CAL.u2.bits_2.aecMMD_DisableMcpClearOnRead

                        Default = 0x0

                        1 = GLB MMD disable clear on read

                 <B>Notes:</B>
                        When set to 1, clear on read registers and counters are set to read only mode.  */
      unsigned int   aecMMD_DisableMcpClearOnRead : 1;    /* 01.FA02.0  R/W      Default = 0x0 */
                     /* 1 = GLB MMD disable clear on read  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA03.3:0 R/W AEC Global Filter Freeze
                        AQ_AecModeControl_CAL.u3.bits_3.aecGlobalFilterFreeze

                        Default = 0x0

                        Force Filter Freeze Mode (for all segments)
                        Bit 0: AEC 0
                        Bit 1: AEC 1
                        Bit 2: AEC 2
                        Bit 3: AEC 3
                        
  */
      unsigned int   aecGlobalFilterFreeze : 4;    /* 01.FA03.3:0  R/W      Default = 0x0 */
                     /* Force Filter Freeze Mode (for all segments)
                        Bit 0: AEC 0
                        Bit 1: AEC 1
                        Bit 2: AEC 2
                        Bit 3: AEC 3
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of AEC Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA04.3 R/W ASR IN AEC 3 FIFO Reset
                        AQ_AecModeControl_CAL.u4.bits_4.asrInAec_3FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   asrInAec_3FifoReset : 1;    /* 01.FA04.3  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA04.2 R/W ASR IN AEC 2 FIFO Reset
                        AQ_AecModeControl_CAL.u4.bits_4.asrInAec_2FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   asrInAec_2FifoReset : 1;    /* 01.FA04.2  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA04.1 R/W ASR IN AEC 1 FIFO Reset
                        AQ_AecModeControl_CAL.u4.bits_4.asrInAec_1FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   asrInAec_1FifoReset : 1;    /* 01.FA04.1  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA04.0 R/W ASR IN AEC 0 FIFO Reset
                        AQ_AecModeControl_CAL.u4.bits_4.asrInAec_0FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   asrInAec_0FifoReset : 1;    /* 01.FA04.0  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of AEC Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA05.3 R/W AFO 128 OUT AEC 3 FIFO Reset
                        AQ_AecModeControl_CAL.u5.bits_5.afo_128OutAec_3FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   afo_128OutAec_3FifoReset : 1;    /* 01.FA05.3  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA05.2 R/W AFO 128 OUT AEC 2 FIFO Reset
                        AQ_AecModeControl_CAL.u5.bits_5.afo_128OutAec_2FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   afo_128OutAec_2FifoReset : 1;    /* 01.FA05.2  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA05.1 R/W AFO 128 OUT AEC 1 FIFO Reset
                        AQ_AecModeControl_CAL.u5.bits_5.afo_128OutAec_1FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   afo_128OutAec_1FifoReset : 1;    /* 01.FA05.1  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA05.0 R/W AFO 128 OUT AEC 0 FIFO Reset
                        AQ_AecModeControl_CAL.u5.bits_5.afo_128OutAec_0FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   afo_128OutAec_0FifoReset : 1;    /* 01.FA05.0  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of AEC Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA06.3 R/W AFO 64 OUT AEC 3 FIFO Reset
                        AQ_AecModeControl_CAL.u6.bits_6.afo_64OutAec_3FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   afo_64OutAec_3FifoReset : 1;    /* 01.FA06.3  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA06.2 R/W AFO 64 OUT AEC 2 FIFO Reset
                        AQ_AecModeControl_CAL.u6.bits_6.afo_64OutAec_2FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   afo_64OutAec_2FifoReset : 1;    /* 01.FA06.2  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA06.1 R/W AFO 64 OUT AEC 1 FIFO Reset
                        AQ_AecModeControl_CAL.u6.bits_6.afo_64OutAec_1FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   afo_64OutAec_1FifoReset : 1;    /* 01.FA06.1  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA06.0 R/W AFO 64 OUT AEC 0 FIFO Reset
                        AQ_AecModeControl_CAL.u6.bits_6.afo_64OutAec_0FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   afo_64OutAec_0FifoReset : 1;    /* 01.FA06.0  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of AEC Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA07.3 R/W ERROR IN AEC 3 FIFO Reset
                        AQ_AecModeControl_CAL.u7.bits_7.errorInAec_3FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   errorInAec_3FifoReset : 1;    /* 01.FA07.3  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA07.2 R/W ERROR IN AEC 2 FIFO Reset
                        AQ_AecModeControl_CAL.u7.bits_7.errorInAec_2FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   errorInAec_2FifoReset : 1;    /* 01.FA07.2  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA07.1 R/W ERROR IN AEC 1 FIFO Reset
                        AQ_AecModeControl_CAL.u7.bits_7.errorInAec_1FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   errorInAec_1FifoReset : 1;    /* 01.FA07.1  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
                    /*! \brief 01.FA07.0 R/W ERROR IN AEC 0 FIFO Reset
                        AQ_AecModeControl_CAL.u7.bits_7.errorInAec_0FifoReset

                        Default = 0x0

                        1 = FIFO reset
  */
      unsigned int   errorInAec_0FifoReset : 1;    /* 01.FA07.0  R/W      Default = 0x0 */
                     /* 1 = FIFO reset  */
    } bits_7;
    uint16_t word_7;
  } u7;
} AQ_AecModeControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Generic Cycle Count Control: 01.FA0A */
/*                  AEC Generic Cycle Count Control: 01.FA0A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Generic Cycle Count Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FA0A.0 R/WSC Cycle Counter Start
                        AQ_AecGenericCycleCountControl_CAL.u0.bits_0.cycleCounterStart

                        Default = 0x0

                        Cycle Counter Start
                        CLR=""
                        

                 <B>Notes:</B>
                        Initiate the generic counter to begin counting to a specified value in ADC_BAUD clock cycles. This value should be set to 1 after programming to count value required. Internally in HW setting this register to 1, generates a pulse (clear on read) which initiates a coefficient write sequence in HW.  */
      unsigned int   cycleCounterStart : 1;    /* 01.FA0A.0  R/WSC      Default = 0x0 */
                     /* Cycle Counter Start
                        CLR=""
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Generic Cycle Count Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA0B.F:0 R/W AEC Cycle Count Value [F:0]
                        AQ_AecGenericCycleCountControl_CAL.u1.bits_1.aecCycleCountValue

                        Default = 0x0000

                        AEC Cycle Counter Start
                        
                        

                 <B>Notes:</B>
                        Number of ADC_BAUD clock cycles to count in the generic counter between the period in which a START pulse fires and the DONE signal is asserted.  */
      unsigned int   aecCycleCountValue : 16;    /* 01.FA0B.F:0  R/W      Default = 0x0000 */
                     /* AEC Cycle Counter Start
                        
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_AecGenericCycleCountControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Global Memory Control: 01.FA0C */
/*                  AEC Global Memory Control: 01.FA0C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Global Memory Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA0C.4 R/W AEC SRAM Check Parity Sense
                        AQ_AecGlobalMemoryControl_CAL.u0.bits_0.aecSramCheckParitySense

                        Default = 0x0

                        Memory parity check sense
                        
                        

                 <B>Notes:</B>
                        Changes the parity check sense for all memories in the AEC.  */
      unsigned int   aecSramCheckParitySense : 1;    /* 01.FA0C.4  R/W      Default = 0x0 */
                     /* Memory parity check sense
                        
                          */
      unsigned int   reserved1 : 3;
                    /*! \brief 01.FA0C.0 R/W AEC SRAM Power Gating Enable
                        AQ_AecGlobalMemoryControl_CAL.u0.bits_0.aecSramPowerGatingEnable

                        Default = 0x0

                        Enable Power Gating Control
                        
                        

                 <B>Notes:</B>
                        Enable software to control the power gating modes of all AEC CUE memories (on a per-segment basis). If enabled the software is capable of putting specific CUE SRAM modules into different power gating modes. If disabled SRAMs will not go into any enhanced power gating modes.  */
      unsigned int   aecSramPowerGatingEnable : 1;    /* 01.FA0C.0  R/W      Default = 0x0 */
                     /* Enable Power Gating Control
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecGlobalMemoryControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Delay Detection Control: 01.FA0D */
/*                  AEC Delay Detection Control: 01.FA0D */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Delay Detection Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA0D.F R/W AEC 3 Error/Data Delay Detect Override Value
                        AQ_AecDelayDetectionControl_CAL.u0.bits_0.aec_3Error_dataDelayDetectOverrideValue

                        Default = 0x0

                        Error/Data Delay Detect Override Value

                 <B>Notes:</B>
                        Value to output during detection. The value will either be either the max (0) or min (1) of the following which is meant to be used to detect a toggle in the error sign bit.  */
      unsigned int   aec_3Error_dataDelayDetectOverrideValue : 1;    /* 01.FA0D.F  R/W      Default = 0x0 */
                     /* Error/Data Delay Detect Override Value  */
                    /*! \brief 01.FA0D.E R/W AEC 2 Error/Data Delay Detect Override Value
                        AQ_AecDelayDetectionControl_CAL.u0.bits_0.aec_2Error_dataDelayDetectOverrideValue

                        Default = 0x0

                        Error/Data Delay Detect Override Value
  */
      unsigned int   aec_2Error_dataDelayDetectOverrideValue : 1;    /* 01.FA0D.E  R/W      Default = 0x0 */
                     /* Error/Data Delay Detect Override Value  */
                    /*! \brief 01.FA0D.D R/W AEC 1 Error/Data Delay Detect Override Value
                        AQ_AecDelayDetectionControl_CAL.u0.bits_0.aec_1Error_dataDelayDetectOverrideValue

                        Default = 0x0

                        Error/Data Delay Detect Override Value
  */
      unsigned int   aec_1Error_dataDelayDetectOverrideValue : 1;    /* 01.FA0D.D  R/W      Default = 0x0 */
                     /* Error/Data Delay Detect Override Value  */
                    /*! \brief 01.FA0D.C R/W AEC 0 Error/Data Delay Detect Override Value
                        AQ_AecDelayDetectionControl_CAL.u0.bits_0.aec_0Error_dataDelayDetectOverrideValue

                        Default = 0x0

                        Error/Data Delay Detect Override Value
  */
      unsigned int   aec_0Error_dataDelayDetectOverrideValue : 1;    /* 01.FA0D.C  R/W      Default = 0x0 */
                     /* Error/Data Delay Detect Override Value  */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FA0D.3 R/WSC AEC 3 Error/Data Delay Detect Start
                        AQ_AecDelayDetectionControl_CAL.u0.bits_0.aec_3Error_dataDelayDetectStart

                        Default = 0x0

                        Error/Data Delay Detect Start
                        CLR=""
                        

                 <B>Notes:</B>
                        Initiate automatic detection in HW to determine the error / data delay value that needs to be programmed.
                        NOTE: The TX data which is summed with the AEC data in order to achieve cancellation needs to be set to 0 so that the error sign can effectively toggle such that detection can be performed.  */
      unsigned int   aec_3Error_dataDelayDetectStart : 1;    /* 01.FA0D.3  R/WSC      Default = 0x0 */
                     /* Error/Data Delay Detect Start
                        CLR=""
                          */
                    /*! \brief 01.FA0D.2 R/WSC AEC 2 Error/Data Delay Detect Start
                        AQ_AecDelayDetectionControl_CAL.u0.bits_0.aec_2Error_dataDelayDetectStart

                        Default = 0x0

                        Error/Data Delay Detect Start
                        CLR=""
                        
  */
      unsigned int   aec_2Error_dataDelayDetectStart : 1;    /* 01.FA0D.2  R/WSC      Default = 0x0 */
                     /* Error/Data Delay Detect Start
                        CLR=""
                          */
                    /*! \brief 01.FA0D.1 R/WSC AEC 1 Error/Data Delay Detect Start
                        AQ_AecDelayDetectionControl_CAL.u0.bits_0.aec_1Error_dataDelayDetectStart

                        Default = 0x0

                        Error/Data Delay Detect Start
                        CLR=""
                        
  */
      unsigned int   aec_1Error_dataDelayDetectStart : 1;    /* 01.FA0D.1  R/WSC      Default = 0x0 */
                     /* Error/Data Delay Detect Start
                        CLR=""
                          */
                    /*! \brief 01.FA0D.0 R/WSC AEC 0 Error/Data Delay Detect Start
                        AQ_AecDelayDetectionControl_CAL.u0.bits_0.aec_0Error_dataDelayDetectStart

                        Default = 0x0

                        Error/Data Delay Detect Start
                        CLR=""
                        
  */
      unsigned int   aec_0Error_dataDelayDetectStart : 1;    /* 01.FA0D.0  R/WSC      Default = 0x0 */
                     /* Error/Data Delay Detect Start
                        CLR=""
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Delay Detection Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA0E.F:4 R/W AEC Error Threshold Value [11:0]
                        AQ_AecDelayDetectionControl_CAL.u1.bits_1.aecErrorThresholdValue

                        Default = 0x000

                        AEC Error Threshold Force Value
  */
      unsigned int   aecErrorThresholdValue : 12;    /* 01.FA0E.F:4  R/W      Default = 0x000 */
                     /* AEC Error Threshold Force Value  */
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FA0E.1 R/W AEC Error Threshold Force Value
                        AQ_AecDelayDetectionControl_CAL.u1.bits_1.aecErrorThresholdForceValue

                        Default = 0x0

                        AEC Error Threshold Force Value
  */
      unsigned int   aecErrorThresholdForceValue : 1;    /* 01.FA0E.1  R/W      Default = 0x0 */
                     /* AEC Error Threshold Force Value  */
                    /*! \brief 01.FA0E.0 R/W AEC Error Threshold Force Enable
                        AQ_AecDelayDetectionControl_CAL.u1.bits_1.aecErrorThresholdForceEnable

                        Default = 0x0

                        AEC Error Threshold Force Enable
  */
      unsigned int   aecErrorThresholdForceEnable : 1;    /* 01.FA0E.0  R/W      Default = 0x0 */
                     /* AEC Error Threshold Force Enable  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_AecDelayDetectionControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Coefficient Write Control: 01.FA10 */
/*                  AEC Coefficient Write Control: 01.FA10 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Coefficient Write Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA10.4:0 R/W AEC Coefficient Write Filter Select [4:0]
                        AQ_AecCoefficientWriteControl_CAL.u0.bits_0.aecCoefficientWriteFilterSelect

                        Default = 0x00

                        Coefficient Write Filter Select

                 <B>Notes:</B>
                        Coefficient Interface Coefficient CUE Write Select.
                        
                        This register selecting which DSP CUE Client to use for loading coefficient values to:
                        
                        15=AEC0
                        16=AEC1
                        17=AEC2
                        18=AEC3
                        Other = None
                        
                        Note: When writing coefficients only one filter is active at any given time. The specific filter and corresponding write control registers should only be set after setting this filter selection control register.  */
      unsigned int   aecCoefficientWriteFilterSelect : 5;    /* 01.FA10.4:0  R/W      Default = 0x00 */
                     /* Coefficient Write Filter Select  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Coefficient Write Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA11.F R/W DSP MCP Coefficient Write Mode
                        AQ_AecCoefficientWriteControl_CAL.u1.bits_1.dspMcpCoefficientWriteMode

                        Default = 0x0

                        DSP MCP Coefficient Wire Mode

                 <B>Notes:</B>
                        Enable 25 bit mode transactions for MCP coefficient wires.
                        
                        0=Write coefficients in MCP using MSB/LSB register
                        1= Write coefficients in MCP using single 25 bit mode  */
      unsigned int   dspMcpCoefficientWriteMode : 1;    /* 01.FA11.F  R/W      Default = 0x0 */
                     /* DSP MCP Coefficient Wire Mode  */
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FA11.1:0 R/W AEC Coefficient Interface Write Select [1:0]
                        AQ_AecCoefficientWriteControl_CAL.u1.bits_1.aecCoefficientInterfaceWriteSelect

                        Default = 0x0

                        Coefficient Interface Write Select

                 <B>Notes:</B>
                        Coefficient Interface to be used for Coefficient Write.
                        
                        MCP = 0x0
                        PIF/MDIO = 0x1
                        DMA = 0x2
                        None: Other  */
      unsigned int   aecCoefficientInterfaceWriteSelect : 2;    /* 01.FA11.1:0  R/W      Default = 0x0 */
                     /* Coefficient Interface Write Select  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Coefficient Write Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA12.F:0 R/W AEC Coefficient MDIO Write Value LSB [F:0]
                        AQ_AecCoefficientWriteControl_CAL.u2.bits_2.aecCoefficientMdioWriteValueLsb

                        Default = 0x0000

                        Coefficient MDIO Interface Write LSB Value

                 <B>Notes:</B>
                        LSB Value of Coefficient Value to write when in MDIO coefficient write mode.  */
      unsigned int   aecCoefficientMdioWriteValueLsb : 16;    /* 01.FA12.F:0  R/W      Default = 0x0000 */
                     /* Coefficient MDIO Interface Write LSB Value  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Coefficient Write Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA13.F:0 R/W AEC Coefficient MDIO Write Value MSB [F:0]
                        AQ_AecCoefficientWriteControl_CAL.u3.bits_3.aecCoefficientMdioWriteValueMsb

                        Default = 0x0000

                        Coefficient MDIO Interface Write MSB Value

                 <B>Notes:</B>
                        MSB Value of Coefficient Value to write when in MDIO coefficient write mode.  */
      unsigned int   aecCoefficientMdioWriteValueMsb : 16;    /* 01.FA13.F:0  R/W      Default = 0x0000 */
                     /* Coefficient MDIO Interface Write MSB Value  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of AEC Coefficient Write Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA14.F:0 R/W AEC Coefficient MCP Write Value [F:0]
                        AQ_AecCoefficientWriteControl_CAL.u4.bits_4.aecCoefficientMcpWriteValue

                        Default = 0x0000

                        Coefficient MCP Interface Write Value

                 <B>Notes:</B>
                        Value of Coefficient Value to write when in MCP coefficient write mode. 
                        
                        Note that this value is a 25 bit value.  */
      unsigned int   aecCoefficientMcpWriteValue : 16;    /* 01.FA14.F:0  R/W      Default = 0x0000 */
                     /* Coefficient MCP Interface Write Value  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of AEC Coefficient Write Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FA15.1 R/W AEC Write Coefficient Abort
                        AQ_AecCoefficientWriteControl_CAL.u5.bits_5.aecWriteCoefficientAbort

                        Default = 0x0

                        AEC Write Coefficient Abort
                        
                        CLR=""

                 <B>Notes:</B>
                        Abort FW Coefficient Write
                        Set to 1 to indicate that FW coefficient write must be aborted. Internally in HW setting this register to 1, generates a pulse (clear on read) which initiates a coefficient write sequence in HW.  */
      unsigned int   aecWriteCoefficientAbort : 1;    /* 01.FA15.1  R/W      Default = 0x0 */
                     /* AEC Write Coefficient Abort
                        
                        CLR=""  */
                    /*! \brief 01.FA15.0 R/W AEC Write Coefficient Start
                        AQ_AecCoefficientWriteControl_CAL.u5.bits_5.aecWriteCoefficientStart

                        Default = 0x0

                        AEC Write Coefficient Start
                        CLR=""
                        

                 <B>Notes:</B>
                        Initiate FW Coefficient Write
                        Set to 1 to indicate that FW coefficient write can begin. Set to 1 after setting all other coeefficient control registers registers. Internally in HW setting this register to 1, generates a pulse (clear on read) which initiates a coefficient write sequence in HW.  */
      unsigned int   aecWriteCoefficientStart : 1;    /* 01.FA15.0  R/W      Default = 0x0 */
                     /* AEC Write Coefficient Start
                        CLR=""
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of AEC Coefficient Write Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FA16.6:0 R/W AEC Write Coefficient Start Tap [6:0]
                        AQ_AecCoefficientWriteControl_CAL.u6.bits_6.aecWriteCoefficientStartTap

                        Default = 0x00

                        AEC Write Coefficient Start Tap
                        

                 <B>Notes:</B>
                        AEC Write Coefficient Start Tap
                        Tap value to begin writing coefficient values to. Must be a multiple of 4.
                          */
      unsigned int   aecWriteCoefficientStartTap : 7;    /* 01.FA16.6:0  R/W      Default = 0x00 */
                     /* AEC Write Coefficient Start Tap
                          */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of AEC Coefficient Write Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FA17.7:0 R/W AEC Write Coefficient Number of Taps [7:0]
                        AQ_AecCoefficientWriteControl_CAL.u7.bits_7.aecWriteCoefficientNumberOfTaps

                        Default = 0x00

                        AEC Write Coefficient Number of Taps
                        

                 <B>Notes:</B>
                        AEC Write Coefficient Number of Taps
                        Number of taps to write beginning from start tap. Must be a multiple of 4.  */
      unsigned int   aecWriteCoefficientNumberOfTaps : 8;    /* 01.FA17.7:0  R/W      Default = 0x00 */
                     /* AEC Write Coefficient Number of Taps
                          */
    } bits_7;
    uint16_t word_7;
  } u7;
} AQ_AecCoefficientWriteControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Coefficient Read Control: 01.FA20 */
/*                  AEC Coefficient Read Control: 01.FA20 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Coefficient Read Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA20.4:0 R/W AEC Coefficient Read Filter Select [4:0]
                        AQ_AecCoefficientReadControl_CAL.u0.bits_0.aecCoefficientReadFilterSelect

                        Default = 0x00

                        Coefficient Read Filter Select

                 <B>Notes:</B>
                        Coefficient Interface Coefficient CUE Read Select.
                        
                        This register selecting which DSP CUE Client to use for loading coefficient values to:
                        
                        15=AEC0
                        16=AEC1
                        17=AEC2
                        18=AEC3
                        Other = None
                        
                        Note: When writing coefficients only one filter is active at any given time. The specific filter and corresponding Read control registers should only be set after setting this filter selection control register.  */
      unsigned int   aecCoefficientReadFilterSelect : 5;    /* 01.FA20.4:0  R/W      Default = 0x00 */
                     /* Coefficient Read Filter Select  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Coefficient Read Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA21.F R/W DSP MCP Coefficient Read Mode
                        AQ_AecCoefficientReadControl_CAL.u1.bits_1.dspMcpCoefficientReadMode

                        Default = 0x0

                        DSP MCP Coefficient Read Mode

                 <B>Notes:</B>
                        Enable 25 bit mode transactions for MCP coefficient reads.
                        
                        0=Read coefficieints in MCP using MSB/LSB register
                        1= Read coefficients in MCP using single 25 bit mode  */
      unsigned int   dspMcpCoefficientReadMode : 1;    /* 01.FA21.F  R/W      Default = 0x0 */
                     /* DSP MCP Coefficient Read Mode  */
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FA21.1:0 R/W AEC Coefficient Interface Read Select [1:0]
                        AQ_AecCoefficientReadControl_CAL.u1.bits_1.aecCoefficientInterfaceReadSelect

                        Default = 0x0

                        Coefficient Interface Read Select

                 <B>Notes:</B>
                        Coefficient Interface to be used for Coefficient Read.
                        
                        MCP = 0x0
                        PIF/MDOI = 0x1
                        DMA = 0x2  */
      unsigned int   aecCoefficientInterfaceReadSelect : 2;    /* 01.FA21.1:0  R/W      Default = 0x0 */
                     /* Coefficient Interface Read Select  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Coefficient Read Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA22.F:0 RO AEC Coefficient MDIO Read Value LSB [F:0]
                        AQ_AecCoefficientReadControl_CAL.u2.bits_2.aecCoefficientMdioReadValueLsb

                        

                        Coefficient MDIO Interface Read LSB Value
                        

                 <B>Notes:</B>
                        LSB Value of Coefficient Value to Read when in MDIO coefficient Read mode.  */
      unsigned int   aecCoefficientMdioReadValueLsb : 16;    /* 01.FA22.F:0  RO       */
                     /* Coefficient MDIO Interface Read LSB Value
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Coefficient Read Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA23.F:0 RO AEC Coefficient MDIO Read Value MSB [F:0]
                        AQ_AecCoefficientReadControl_CAL.u3.bits_3.aecCoefficientMdioReadValueMsb

                        

                        Coefficient MDIO Interface Read MSB Value
                        

                 <B>Notes:</B>
                        LSB Value of Coefficient Value to Read when in MDIO coefficient Read mode.  */
      unsigned int   aecCoefficientMdioReadValueMsb : 16;    /* 01.FA23.F:0  RO       */
                     /* Coefficient MDIO Interface Read MSB Value
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of AEC Coefficient Read Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA24.F:0 RO AEC Coefficient MCP Read Value [F:0]
                        AQ_AecCoefficientReadControl_CAL.u4.bits_4.aecCoefficientMcpReadValue

                        

                        Coefficient MCP Interface Read Value
                        

                 <B>Notes:</B>
                        LSB Value of Coefficient Value to Read when in MDIO coefficient Read mode.  */
      unsigned int   aecCoefficientMcpReadValue : 16;    /* 01.FA24.F:0  RO       */
                     /* Coefficient MCP Interface Read Value
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of AEC Coefficient Read Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FA25.1 R/WSC AEC Read Coefficient Abort
                        AQ_AecCoefficientReadControl_CAL.u5.bits_5.aecReadCoefficientAbort

                        Default = 0x0

                        AEC Read Coefficient Abort
                        CLR=""
                        

                 <B>Notes:</B>
                        Abort FW Coefficient Read
                        Set to 1 to indicate that FW coefficient Read must be aborted. Internally in HW setting this register to 1, generates a pulse (clear on read) which initiates a coefficient Read sequence in HW.  */
      unsigned int   aecReadCoefficientAbort : 1;    /* 01.FA25.1  R/WSC      Default = 0x0 */
                     /* AEC Read Coefficient Abort
                        CLR=""
                          */
                    /*! \brief 01.FA25.0 R/WSC AEC Read Coefficient Start
                        AQ_AecCoefficientReadControl_CAL.u5.bits_5.aecReadCoefficientStart

                        Default = 0x0

                        AEC Read Coefficient Start
                        CLR=""
                        

                 <B>Notes:</B>
                        Initiate FW Coefficient Read
                        Set to 1 to indicate that FW coefficient Read can begin. Set to 1 after setting all other coeefficient control registers registers. Internally in HW setting this register to 1, generates a pulse (clear on read) which initiates a coefficient Read sequence in HW.  */
      unsigned int   aecReadCoefficientStart : 1;    /* 01.FA25.0  R/WSC      Default = 0x0 */
                     /* AEC Read Coefficient Start
                        CLR=""
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of AEC Coefficient Read Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FA26.6:0 R/W AEC Read Coefficient Start Tap [6:0]
                        AQ_AecCoefficientReadControl_CAL.u6.bits_6.aecReadCoefficientStartTap

                        Default = 0x00

                        AEC Read Coefficient Start Tap
                        

                 <B>Notes:</B>
                        AEC Read Coefficient Start Tap
                        Tap value to begin writing coefficient values to. Must be a multiple of 4.
                          */
      unsigned int   aecReadCoefficientStartTap : 7;    /* 01.FA26.6:0  R/W      Default = 0x00 */
                     /* AEC Read Coefficient Start Tap
                          */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of AEC Coefficient Read Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FA27.7:0 R/W AEC Read Coefficient Number of Taps [7:0]
                        AQ_AecCoefficientReadControl_CAL.u7.bits_7.aecReadCoefficientNumberOfTaps

                        Default = 0x00

                        AEC Read Coefficient Number of Taps
                        

                 <B>Notes:</B>
                        Read Coefficient Number of Taps
                        Number of taps to Read beginning from start tap. Must be a multiple of 4.  */
      unsigned int   aecReadCoefficientNumberOfTaps : 8;    /* 01.FA27.7:0  R/W      Default = 0x00 */
                     /* AEC Read Coefficient Number of Taps
                          */
    } bits_7;
    uint16_t word_7;
  } u7;
} AQ_AecCoefficientReadControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast Control: 01.FA30 */
/*                  AEC Filter Broadcast Control: 01.FA30 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA30.3:0 R/W Broadcast Filter Select [3:0]
                        AQ_AecFilterBroadcastControl_CAL.u0.bits_0.broadcastFilterSelect

                        Default = 0x0

                        Filter Select

                 <B>Notes:</B>
                        Bit 0: AEC0
                        Bit 1: AEC1
                        Bit 2: AEC2
                        Bit 3: AEC3  */
      unsigned int   broadcastFilterSelect : 4;    /* 01.FA30.3:0  R/W      Default = 0x0 */
                     /* Filter Select  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_AecFilterBroadcastControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast Segment Control: 01.FA32 */
/*                  AEC Filter Broadcast Segment Control: 01.FA32 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast Segment Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FA32.1:0 R/W Broadcast Segment Select [1:0]
                        AQ_AecFilterBroadcastSegmentControl_CAL.u0.bits_0.broadcastSegmentSelect

                        Default = 0x0

                        Filter Select

                 <B>Notes:</B>
                        Bit 0: Segment 0
                        Bit 1: Segment 1  */
      unsigned int   broadcastSegmentSelect : 2;    /* 01.FA32.1:0  R/W      Default = 0x0 */
                     /* Filter Select  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast Segment Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_AecFilterBroadcastSegmentControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast Field Control: 01.FA34 */
/*                  AEC Filter Broadcast Field Control: 01.FA34 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast Field Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA34.F:0 R/W Broadcast Field Mask [F:0]
                        AQ_AecFilterBroadcastFieldControl_CAL.u0.bits_0.broadcastFieldMask

                        Default = 0xFFFF

                        Register Field Mask Enable

                 <B>Notes:</B>
                        Field Mask.
                        
                        0: Disable Field bits
                        1: Enable Field bits
                        
                        Logical AND operation for multi-bit fields  */
      unsigned int   broadcastFieldMask : 16;    /* 01.FA34.F:0  R/W      Default = 0xFFFF */
                     /* Register Field Mask Enable  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast Field Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_AecFilterBroadcastFieldControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast CUE Mode Control: 01.FA40 */
/*                  AEC Filter Broadcast CUE Mode Control: 01.FA40 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA40.F R/W CUE Flush
                        AQ_AecFilterBroadcastCueModeControl_CAL.u0.bits_0.cueFlush

                        Default = 0x0

                        CUE Flush
                        

                 <B>Notes:</B>
                        Flush CUE Coeffcient Memory to all internal 25bit coefficient values of 0.
                        
                        It is recommended that all the segments be frozen when flushing.  */
      unsigned int   cueFlush : 1;    /* 01.FA40.F  R/W      Default = 0x0 */
                     /* CUE Flush
                          */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast CUE Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Filter Broadcast CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA42.F R/W Single Step
                        AQ_AecFilterBroadcastCueModeControl_CAL.u2.bits_2.singleStep

                        Default = 0x0

                        A rising edge performs a single step coefficient update

                 <B>Notes:</B>
                        Single Step. In this mode a single update to all taps will be performed.
                        
                        Also if leakage is enabled a single step of leakage is applied if leakage period is enabled.
                        
                        Note: Single step should only be enabled when all CUE segments are first put into freeze mode.  */
      unsigned int   singleStep : 1;    /* 01.FA42.F  R/W      Default = 0x0 */
                     /* A rising edge performs a single step coefficient update  */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_AecFilterBroadcastCueModeControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast CUE Data Processor Control: 01.FA44 */
/*                  AEC Filter Broadcast CUE Data Processor Control: 01.FA44 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA44.F R/W Data Processor Random Delay Enable
                        AQ_AecFilterBroadcastCueDataProcessorControl_CAL.u0.bits_0.dataProcessorRandomDelayEnable

                        Default = 0x0

                        Data Processor Random Delay Enable
                        

                 <B>Notes:</B>
                        Enable Data Sampling Randomization
                        When downsampling incoming data. The specific point where the data is latched (and downsampled) can be skewed randomly.  */
      unsigned int   dataProcessorRandomDelayEnable : 1;    /* 01.FA44.F  R/W      Default = 0x0 */
                     /* Data Processor Random Delay Enable
                          */
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FA44.C:A R/W Data Processor Random Delay Value [2:0]
                        AQ_AecFilterBroadcastCueDataProcessorControl_CAL.u0.bits_0.dataProcessorRandomDelayValue

                        Default = 0x0

                        Data Processor Random Delay Value
                        
                        

                 <B>Notes:</B>
                        Data Latching Delay 
                        When data sampling randomization is disabled, software can optionally program the additional delay value, to allow for downsampling skew.  */
      unsigned int   dataProcessorRandomDelayValue : 3;    /* 01.FA44.C:A  R/W      Default = 0x0 */
                     /* Data Processor Random Delay Value
                        
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 01.FA44.7:0 R/W Data Processor Delay [7:0]
                        AQ_AecFilterBroadcastCueDataProcessorControl_CAL.u0.bits_0.dataProcessorDelay

                        Default = 0x00

                        Data Processor Delay
                        

                 <B>Notes:</B>
                        Data Processor Delay
                        Number of clock cycles (in DSP clock domain) to delay incoming data to the CUE/LMS logic so that it can be aligned with the input error.  */
      unsigned int   dataProcessorDelay : 8;    /* 01.FA44.7:0  R/W      Default = 0x00 */
                     /* Data Processor Delay
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA45.F R/W Data Processor Force Value Enable
                        AQ_AecFilterBroadcastCueDataProcessorControl_CAL.u1.bits_1.dataProcessorForceValueEnable

                        Default = 0x0

                        Data Processor Force Value Enable
                        

                 <B>Notes:</B>
                        Force data input to a register specified value.
                        
                        For debug purposes only.  */
      unsigned int   dataProcessorForceValueEnable : 1;    /* 01.FA45.F  R/W      Default = 0x0 */
                     /* Data Processor Force Value Enable
                          */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FA45.8:0 R/W Data Processor Force Value [8:0]
                        AQ_AecFilterBroadcastCueDataProcessorControl_CAL.u1.bits_1.dataProcessorForceValue

                        Default = 0x000

                        Data Processor Force Value
                        
                        

                 <B>Notes:</B>
                        Value to force input FIR/CUE data to when enabled.
                        
                        For debug purposes only.  */
      unsigned int   dataProcessorForceValue : 9;    /* 01.FA45.8:0  R/W      Default = 0x000 */
                     /* Data Processor Force Value
                        
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_AecFilterBroadcastCueDataProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast CUE Error Processor Control: 01.FA46 */
/*                  AEC Filter Broadcast CUE Error Processor Control: 01.FA46 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast CUE Error Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA46.F R/WPD Invert Error
                        AQ_AecFilterBroadcastCueErrorProcessorControl_CAL.u0.bits_0.invertError

                        Provisionable Default = 0x0

                        1 = Invert Error Signal
                        0 = Normal operation
  */
      unsigned int   invertError : 1;    /* 01.FA46.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Invert Error Signal
                        0 = Normal operation  */
      unsigned int   reserved0 : 10;
                    /*! \brief 01.FA46.4:0 R/W Error Processor Delay [4:0]
                        AQ_AecFilterBroadcastCueErrorProcessorControl_CAL.u0.bits_0.errorProcessorDelay

                        Default = 0x00

                        Error Processor Delay
                        

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Valid Range is from 0-24  */
      unsigned int   errorProcessorDelay : 5;    /* 01.FA46.4:0  R/W      Default = 0x00 */
                     /* Error Processor Delay
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast CUE Error Processor Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA47.4:0 R/W Error Processor Delay Segment 1 [4:0]
                        AQ_AecFilterBroadcastCueErrorProcessorControl_CAL.u1.bits_1.errorProcessorDelaySegment_1

                        Default = 0x01

                        Error Processor Delay Segment 1
                        

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Note this register is only used in 64 Tap Mode and applies this error/data proc delay to segment 1. This register overrides the general Error Process Delay register in this mode.
                        
                        Valid Range is from 0-24  */
      unsigned int   errorProcessorDelaySegment_1 : 5;    /* 01.FA47.4:0  R/W      Default = 0x01 */
                     /* Error Processor Delay Segment 1
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_AecFilterBroadcastCueErrorProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast CUE Leakage Period Control: 01.FA48 */
/*                  AEC Filter Broadcast CUE Leakage Period Control: 01.FA48 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast CUE Leakage Period Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA48.3 R/W Leakage Disable
                        AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL.u0.bits_0.leakageDisable

                        Default = 0x0

                        Leakage Disable
                        

                 <B>Notes:</B>
                        Global disable of leakage in CUE LMS algorithm on all segments.
                        
                        This forces leakage to be disabled regardless of values set for leakage period of segment-specific alpha/beta leakage disable.  */
      unsigned int   leakageDisable : 1;    /* 01.FA48.3  R/W      Default = 0x0 */
                     /* Leakage Disable
                          */
                    /*! \brief 01.FA48.2 R/W Leakage Period Disable
                        AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL.u0.bits_0.leakagePeriodDisable

                        Default = 0x0

                        Leakage Period Disable
                        

                 <B>Notes:</B>
                        Disable Leakage Period. Leakage is not disabled in this mode. When disabled, the leakage period disable register is propogated and not masked by the period logic.  */
      unsigned int   leakagePeriodDisable : 1;    /* 01.FA48.2  R/W      Default = 0x0 */
                     /* Leakage Period Disable
                          */
                    /*! \brief 01.FA48.1 R/W Leakage Period Abort
                        AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL.u0.bits_0.leakagePeriodAbort

                        Default = 0x0

                        Leakage Period Abort
                        
                        

                 <B>Notes:</B>
                        Abort Leakage Period  */
      unsigned int   leakagePeriodAbort : 1;    /* 01.FA48.1  R/W      Default = 0x0 */
                     /* Leakage Period Abort
                        
                          */
                    /*! \brief 01.FA48.0 R/W Leakage Period Start
                        AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL.u0.bits_0.leakagePeriodStart

                        Default = 0x0

                        Leakage Period Start
                        
                        

                 <B>Notes:</B>
                        Start Leakage Period / Iteration   */
      unsigned int   leakagePeriodStart : 1;    /* 01.FA48.0  R/W      Default = 0x0 */
                     /* Leakage Period Start
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA49.F:0 R/W Leakage Period [F:0]
                        AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL.u1.bits_1.leakagePeriod

                        Default = 0x0000

                        Leakage Period
                        

                 <B>Notes:</B>
                        Period in which it which leakage is repeated, reps.
                          */
      unsigned int   leakagePeriod : 16;    /* 01.FA49.F:0  R/W      Default = 0x0000 */
                     /* Leakage Period
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Filter Broadcast CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA4A.F:0 R/W Leakage Iteration [F:0]
                        AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL.u2.bits_2.leakageIteration

                        Default = 0x0000

                        Leakage Iterations
                        

                 <B>Notes:</B>
                        Number of period iterations in which leakage is repeated, sets.
                        
                        If set to 0 the number of iteratios is free-running (unlimited) and the periodicity is dictated solely by the Leakage Period calculations.
                          */
      unsigned int   leakageIteration : 16;    /* 01.FA4A.F:0  R/W      Default = 0x0000 */
                     /* Leakage Iterations
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast CUE Coefficient Scaling Control: 01.FA4B */
/*                  AEC Filter Broadcast CUE Coefficient Scaling Control: 01.FA4B */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast CUE Coefficient Scaling Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA4B.F R/W Coefficient Scaling Shift Enable
                        AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL.u0.bits_0.coefficientScalingShiftEnable

                        Default = 0x0

                        Coeffcient Scaling Factor Enable
                        

                 <B>Notes:</B>
                        When enabled the will scale the internally stores 25 bits coefficients by shifting by the value specified by the customcoefficient round value.
                        
                        By default this feature is disabled and the internal coefficients are scaled to 10 bits using a sign based shift rounding operation.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   coefficientScalingShiftEnable : 1;    /* 01.FA4B.F  R/W      Default = 0x0 */
                     /* Coeffcient Scaling Factor Enable
                          */
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA4B.2:0 R/W Coefficient Scaling Shift Value [2:0]
                        AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL.u0.bits_0.coefficientScalingShiftValue

                        Default = 0x0

                        Coefficient Scaling Shift Value
                        

                 <B>Notes:</B>
                        Specifies the value to shift internal coefficient values from to reach the 10 bit coefficient resolution.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   coefficientScalingShiftValue : 3;    /* 01.FA4B.2:0  R/W      Default = 0x0 */
                     /* Coefficient Scaling Shift Value
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast FIR Control: 01.FA4C */
/*                  AEC Filter Broadcast FIR Control: 01.FA4C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA4C.F R/W FIR Clock Shape
                        AQ_AecFilterBroadcastFirControl_CAL.u0.bits_0.firClockShape

                        Default = 0x0

                        1 = FIR reduce CTPC non-overlap time
                        

                 <B>Notes:</B>
                        If activated: Allows lower Vdd_min for slow silicon.  */
      unsigned int   firClockShape : 1;    /* 01.FA4C.F  R/W      Default = 0x0 */
                     /* 1 = FIR reduce CTPC non-overlap time
                          */
                    /*! \brief 01.FA4C.E R/W FIR Force Wakeup
                        AQ_AecFilterBroadcastFirControl_CAL.u0.bits_0.firForceWakeup

                        Default = 0x0

                        FIR force wakeup
                        

                 <B>Notes:</B>
                        Allow internal hardware to selectively disable coefficient portions of logic for reduced powre consumption.  */
      unsigned int   firForceWakeup : 1;    /* 01.FA4C.E  R/W      Default = 0x0 */
                     /* FIR force wakeup
                          */
                    /*! \brief 01.FA4C.D R/W FIR DFT Constant
                        AQ_AecFilterBroadcastFirControl_CAL.u0.bits_0.firDftConstant

                        Default = 0x0

                        1 = FIR DFT constant

                 <B>Notes:</B>
                        Set to 1 during DFT test mode only.  */
      unsigned int   firDftConstant : 1;    /* 01.FA4C.D  R/W      Default = 0x0 */
                     /* 1 = FIR DFT constant  */
                    /*! \brief 01.FA4C.C R/W FIR Clock Enable
                        AQ_AecFilterBroadcastFirControl_CAL.u0.bits_0.firClockEnable

                        Default = 0x1

                        1 = FIR enable charge conservation

                 <B>Notes:</B>
                        Low-power operation mode of FIR clock buffer.  */
      unsigned int   firClockEnable : 1;    /* 01.FA4C.C  R/W      Default = 0x1 */
                     /* 1 = FIR enable charge conservation  */
      unsigned int   reserved0 : 12;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA4D.F R/W FIR Data Flush Enable
                        AQ_AecFilterBroadcastFirControl_CAL.u1.bits_1.firDataFlushEnable

                        Default = 0x0

                        FIR Data Flush Enable
                        
                        

                 <B>Notes:</B>
                        Enable FIR Data Flushing.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   firDataFlushEnable : 1;    /* 01.FA4D.F  R/W      Default = 0x0 */
                     /* FIR Data Flush Enable
                        
                          */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Filter Broadcast FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FA4E.8:0 R/W FIR Flush Data [8:0]
                        AQ_AecFilterBroadcastFirControl_CAL.u2.bits_2.firFlushData

                        Default = 0x000

                        flush data
                        

                 <B>Notes:</B>
                        Data value to flush FIR logic with. One element in the entire segment will be set with this value. All other taps in a given segment will be set to 0.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   firFlushData : 9;    /* 01.FA4E.8:0  R/W      Default = 0x000 */
                     /* flush data
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_AecFilterBroadcastFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast Segment CUE Control: 01.FA50 */
/*                  AEC Filter Broadcast Segment CUE Control: 01.FA50 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast Segment CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA50.F R/W CUE Soft Reset
                        AQ_AecFilterBroadcastSegmentCueControl_CAL.u0.bits_0.cueSoftReset

                        Default = 0x0

                        CUE Soft Reset 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   cueSoftReset : 1;    /* 01.FA50.F  R/W      Default = 0x0 */
                     /* CUE Soft Reset   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast Segment CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA51.F R/W CUE Clock Gate Enable
                        AQ_AecFilterBroadcastSegmentCueControl_CAL.u1.bits_1.cueClockGateEnable

                        Default = 0x0

                        CUE Clock Gate Enable 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   cueClockGateEnable : 1;    /* 01.FA51.F  R/W      Default = 0x0 */
                     /* CUE Clock Gate Enable   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Filter Broadcast Segment CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA52.F R/W CUE Freeze Enable
                        AQ_AecFilterBroadcastSegmentCueControl_CAL.u2.bits_2.cueFreezeEnable

                        Default = 0x0

                        CUE Freeze 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   cueFreezeEnable : 1;    /* 01.FA52.F  R/W      Default = 0x0 */
                     /* CUE Freeze   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Filter Broadcast Segment CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FA53.1:0 R/W CUE SRAM Power Gating Mode [1:0]
                        AQ_AecFilterBroadcastSegmentCueControl_CAL.u3.bits_3.cueSramPowerGatingMode

                        Default = 0x0

                        CUE SRAM Power Gating Mode 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   cueSramPowerGatingMode : 2;    /* 01.FA53.1:0  R/W      Default = 0x0 */
                     /* CUE SRAM Power Gating Mode   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of AEC Filter Broadcast Segment CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FA54.6:4 R/W CUE SRAM EMA [2:0]
                        AQ_AecFilterBroadcastSegmentCueControl_CAL.u4.bits_4.cueSramEma

                        Default = 0x3

                        CUE SRAM EMA 
  */
      unsigned int   cueSramEma : 3;    /* 01.FA54.6:4  R/W      Default = 0x3 */
                     /* CUE SRAM EMA   */
                    /*! \brief 01.FA54.3:2 R/W CUE SRAM EMAW [1:0]
                        AQ_AecFilterBroadcastSegmentCueControl_CAL.u4.bits_4.cueSramEmaw

                        Default = 0x0

                        CUE SRAM EMAW 
  */
      unsigned int   cueSramEmaw : 2;    /* 01.FA54.3:2  R/W      Default = 0x0 */
                     /* CUE SRAM EMAW   */
                    /*! \brief 01.FA54.1 R/W CUE SRAM EMAS
                        AQ_AecFilterBroadcastSegmentCueControl_CAL.u4.bits_4.cueSramEmas

                        Default = 0x0

                        CUE SRAM EMAS 
                        
  */
      unsigned int   cueSramEmas : 1;    /* 01.FA54.1  R/W      Default = 0x0 */
                     /* CUE SRAM EMAS 
                          */
                    /*! \brief 01.FA54.0 R/W CUE SRAM RET1N
                        AQ_AecFilterBroadcastSegmentCueControl_CAL.u4.bits_4.cueSramRet1n

                        Default = 0x1

                        CUE SRAM RET1 
                        
  */
      unsigned int   cueSramRet1n : 1;    /* 01.FA54.0  R/W      Default = 0x1 */
                     /* CUE SRAM RET1 
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_AecFilterBroadcastSegmentCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast Segment CUE LMS Control: 01.FA55 */
/*                  AEC Filter Broadcast Segment CUE LMS Control: 01.FA55 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast Segment CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FA55.2 R/W CUE Disable FIR Coefficient Data Valid
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u0.bits_0.cueDisableFirCoefficientDataValid

                        Default = 0x0

                        CUE Disable FIR Coefficient Data Valid 
                        

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   cueDisableFirCoefficientDataValid : 1;    /* 01.FA55.2  R/W      Default = 0x0 */
                     /* CUE Disable FIR Coefficient Data Valid 
                          */
                    /*! \brief 01.FA55.1 R/W CUE Adaptive FIR Send Coefficient Update
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u0.bits_0.cueAdaptiveFirSendCoefficientUpdate

                        Default = 0x1

                        CUE Adaptive FIR Send Coefficient Update 
                        
                        

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   cueAdaptiveFirSendCoefficientUpdate : 1;    /* 01.FA55.1  R/W      Default = 0x1 */
                     /* CUE Adaptive FIR Send Coefficient Update 
                        
                          */
                    /*! \brief 01.FA55.0 R/W CUE Disable Adpative CUE Coefficient Update
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u0.bits_0.cueDisableAdpativeCueCoefficientUpdate

                        Default = 0x0

                        CUE Disable Adpative CUE Coefficient Update 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   cueDisableAdpativeCueCoefficientUpdate : 1;    /* 01.FA55.0  R/W      Default = 0x0 */
                     /* CUE Disable Adpative CUE Coefficient Update   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast Segment CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA56.F R/W CUE Mu Disable
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u1.bits_1.cueMuDisable

                        Default = 0x0

                        Mu Disable

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   cueMuDisable : 1;    /* 01.FA56.F  R/W      Default = 0x0 */
                     /* Mu Disable  */
                    /*! \brief 01.FA56.E R/W CUE Data Boost
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u1.bits_1.cueDataBoost

                        Default = 0x0

                        Data Boost

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   cueDataBoost : 1;    /* 01.FA56.E  R/W      Default = 0x0 */
                     /* Data Boost  */
                    /*! \brief 01.FA56.D R/W CUE Mu Boost
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u1.bits_1.cueMuBoost

                        Default = 0x0

                        Mu Boost

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   cueMuBoost : 1;    /* 01.FA56.D  R/W      Default = 0x0 */
                     /* Mu Boost  */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FA56.3:0 R/WPD CUE Mu [3:0]
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u1.bits_1.cueMu

                        Provisionable Default = 0x5

                        Mu

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   cueMu : 4;    /* 01.FA56.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* Mu  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Filter Broadcast Segment CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA57.F R/WPD CUE Disable Beta Leakage
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u2.bits_2.cueDisableBetaLeakage

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage Operation

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   cueDisableBetaLeakage : 1;    /* 01.FA57.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage Operation  */
                    /*! \brief 01.FA57.E R/WPD CUE Negate Beta Leakage
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u2.bits_2.cueNegateBetaLeakage

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage Operation

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   cueNegateBetaLeakage : 1;    /* 01.FA57.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage Operation  */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FA57.4:0 R/WPD CUE Beta Leakage [4:0]
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u2.bits_2.cueBetaLeakage

                        Provisionable Default = 0x08

                        Beta Gain Leakage

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   cueBetaLeakage : 5;    /* 01.FA57.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain Leakage  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Filter Broadcast Segment CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA58.F R/WPD CUE Disable Alpha Leakage
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u3.bits_3.cueDisableAlphaLeakage

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage Operation

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   cueDisableAlphaLeakage : 1;    /* 01.FA58.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage Operation  */
                    /*! \brief 01.FA58.E R/WPD CUE Negate Alpha Leakage
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u3.bits_3.cueNegateAlphaLeakage

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage Operation

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   cueNegateAlphaLeakage : 1;    /* 01.FA58.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage Operation  */
                    /*! \brief 01.FA58.D R/WPD CUE Alpha Disable Leakage Round
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u3.bits_3.cueAlphaDisableLeakageRound

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   cueAlphaDisableLeakageRound : 1;    /* 01.FA58.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                          */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FA58.4:0 R/WPD CUE Alpha Leakage [4:0]
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u3.bits_3.cueAlphaLeakage

                        Provisionable Default = 0x10

                        Alpha Shift Leakage

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   cueAlphaLeakage : 5;    /* 01.FA58.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift Leakage  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of AEC Filter Broadcast Segment CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA59.F R/W CUE Disable Mu Leakage
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u4.bits_4.cueDisableMuLeakage

                        Default = 0x1

                        CUE Disable Mu Leakage
                        

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   cueDisableMuLeakage : 1;    /* 01.FA59.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                          */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA59.3:0 R/WPD CUE Mu Leakage [3:0]
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u4.bits_4.cueMuLeakage

                        Provisionable Default = 0x3

                        CUE Mu Leakage

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   cueMuLeakage : 4;    /* 01.FA59.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu Leakage  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of AEC Filter Broadcast Segment CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA5A.F R/WPD CUE Coefficient Threshold Gate Enable
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u5.bits_5.cueCoefficientThresholdGateEnable

                        Provisionable Default = 0x0

                        CUE Coefficient Threshold Gate Enable 
                        

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   cueCoefficientThresholdGateEnable : 1;    /* 01.FA5A.F  R/WPD      Provisionable Default = 0x0 */
                     /* CUE Coefficient Threshold Gate Enable 
                          */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FA5A.8:0 R/WPD CUE Coefficient Threshold Value [8:0]
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u5.bits_5.cueCoefficientThresholdValue

                        Provisionable Default = 0x000

                        CUE Coefficient Threshold Value 
                        

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   cueCoefficientThresholdValue : 9;    /* 01.FA5A.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* CUE Coefficient Threshold Value 
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of AEC Filter Broadcast Segment CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FA5B.1:0 R/WPD CUE Coefficient Sub Segment Clear [1:0]
                        AQ_AecFilterBroadcastSegmentCueLmsControl_CAL.u6.bits_6.cueCoefficientSubSegmentClear

                        Provisionable Default = 0x0

                        CUE Coefficient Sub Segment Clear 
                        

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   cueCoefficientSubSegmentClear : 2;    /* 01.FA5B.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* CUE Coefficient Sub Segment Clear 
                          */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_AecFilterBroadcastSegmentCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Filter Broadcast Segment FIR Control: 01.FA60 */
/*                  AEC Filter Broadcast Segment FIR Control: 01.FA60 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Filter Broadcast Segment FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA60.4:0 R/WPD FIR Power Down [4:0]
                        AQ_AecFilterBroadcastSegmentFirControl_CAL.u0.bits_0.firPowerDown

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk off

                 <B>Notes:</B>
                        Power down clocking for coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   firPowerDown : 5;    /* 01.FA60.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk off  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Filter Broadcast Segment FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA61.4 R/W FIR Gain 3 Enable
                        AQ_AecFilterBroadcastSegmentFirControl_CAL.u1.bits_1.firGain_3Enable

                        Default = 0x0

                        FIR Gain 3 Enable 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   firGain_3Enable : 1;    /* 01.FA61.4  R/W      Default = 0x0 */
                     /* FIR Gain 3 Enable   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FA61.2:0 R/W FIR Shift [2:0]
                        AQ_AecFilterBroadcastSegmentFirControl_CAL.u1.bits_1.firShift

                        Default = 0x0

                        FIR Shift 
                        

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   firShift : 3;    /* 01.FA61.2:0  R/W      Default = 0x0 */
                     /* FIR Shift 
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Filter Broadcast Segment FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FA62.0 R/W FIR Global Flush Enable
                        AQ_AecFilterBroadcastSegmentFirControl_CAL.u2.bits_2.firGlobalFlushEnable

                        Default = 0x0

                        FIR Global Flush Enable 
                        

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   firGlobalFlushEnable : 1;    /* 01.FA62.0  R/W      Default = 0x0 */
                     /* FIR Global Flush Enable 
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_AecFilterBroadcastSegmentFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 AEC CUE Mode Control: 01.FA70 */
/*                  CH0 AEC CUE Mode Control: 01.FA70 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 AEC CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA70.F R/W AEC 0 CUE Flush
                        AQ_Ch0AecCueModeControl_CAL.u0.bits_0.aec_0CueFlush

                        Default = 0x0

                        AEC 0 CUE Flush
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Flush AEC CUE Coeffcient Memory to all internal 25bit coefficient values of 0.
                        
                        It is recommended that all the segments be frozen when flushing.  */
      unsigned int   aec_0CueFlush : 1;    /* 01.FA70.F  R/W      Default = 0x0 */
                     /* AEC 0 CUE Flush
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 AEC CUE Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 AEC CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA72.F R/W AEC 0 Single Step
                        AQ_Ch0AecCueModeControl_CAL.u2.bits_2.aec_0SingleStep

                        Default = 0x0

                        A rising edge performs a single step coefficient updateVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Single Step. In this mode a single update to all taps will be performed.
                        
                        Also if leakage is enabled a single step of leakage is applied if leakage period is enabled.
                        
                        Note: Single step should only be enabled when all CUE segments are first put into freeze mode.  */
      unsigned int   aec_0SingleStep : 1;    /* 01.FA72.F  R/W      Default = 0x0 */
                     /* A rising edge performs a single step coefficient updateVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch0AecCueModeControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 AEC CUE Data Processor Control: 01.FA74 */
/*                  CH0 AEC CUE Data Processor Control: 01.FA74 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 AEC CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA74.F R/W AEC 0 Data Processor Random Delay Enable
                        AQ_Ch0AecCueDataProcessorControl_CAL.u0.bits_0.aec_0DataProcessorRandomDelayEnable

                        Default = 0x0

                        AEC 0 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Data Sampling Randomization
                        When downsampling incoming data. The specific point where the data is latched (and downsampled) can be skewed randomly.  */
      unsigned int   aec_0DataProcessorRandomDelayEnable : 1;    /* 01.FA74.F  R/W      Default = 0x0 */
                     /* AEC 0 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FA74.C:A R/W AEC 0 Data Processor Random Delay Value [2:0]
                        AQ_Ch0AecCueDataProcessorControl_CAL.u0.bits_0.aec_0DataProcessorRandomDelayValue

                        Default = 0x0

                        AEC 0 Data Processor Random Delay Value
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Data Latching Delay 
                        When data sampling randomization is disabled, software can optionally program the additional delay value, to allow for downsampling skew.  */
      unsigned int   aec_0DataProcessorRandomDelayValue : 3;    /* 01.FA74.C:A  R/W      Default = 0x0 */
                     /* AEC 0 Data Processor Random Delay Value
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 2;
                    /*! \brief 01.FA74.7:0 R/W AEC 0 Data Processor Delay [7:0]
                        AQ_Ch0AecCueDataProcessorControl_CAL.u0.bits_0.aec_0DataProcessorDelay

                        Default = 0x00

                        AEC 0 Data Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Data Processor Delay
                        Number of clock cycles (in DSP clock domain) to delay incoming data to the CUE/LMS logic so that it can be aligned with the input error.  */
      unsigned int   aec_0DataProcessorDelay : 8;    /* 01.FA74.7:0  R/W      Default = 0x00 */
                     /* AEC 0 Data Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 AEC CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA75.F R/W AEC 0 Data Processor Force Value Enable
                        AQ_Ch0AecCueDataProcessorControl_CAL.u1.bits_1.aec_0DataProcessorForceValueEnable

                        Default = 0x0

                        AEC 0 Data Processor Force Value Enable
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Force data input to a register specified value.
                        
                        For debug purposes only.  */
      unsigned int   aec_0DataProcessorForceValueEnable : 1;    /* 01.FA75.F  R/W      Default = 0x0 */
                     /* AEC 0 Data Processor Force Value Enable
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FA75.8:0 R/W AEC 0 Data Processor Force Value [8:0]
                        AQ_Ch0AecCueDataProcessorControl_CAL.u1.bits_1.aec_0DataProcessorForceValue

                        Default = 0x000

                        AEC 0 Data Processor Force Value
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Value to force input FIR/CUE data to when enabled.
                        
                        For debug purposes only.  */
      unsigned int   aec_0DataProcessorForceValue : 9;    /* 01.FA75.8:0  R/W      Default = 0x000 */
                     /* AEC 0 Data Processor Force Value
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Ch0AecCueDataProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 AEC CUE Error Processor Control: 01.FA76 */
/*                  CH0 AEC CUE Error Processor Control: 01.FA76 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 AEC CUE Error Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA76.F R/WPD AEC 0 Invert Error
                        AQ_Ch0AecCueErrorProcessorControl_CAL.u0.bits_0.aec_0InvertError

                        Provisionable Default = 0x0

                        1 = Invert Error Signal
                        0 = Normal operationVLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0InvertError : 1;    /* 01.FA76.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Invert Error Signal
                        0 = Normal operationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 10;
                    /*! \brief 01.FA76.4:0 R/W AEC 0 Error Processor Delay [4:0]
                        AQ_Ch0AecCueErrorProcessorControl_CAL.u0.bits_0.aec_0ErrorProcessorDelay

                        Default = 0x00

                        AEC 0 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Valid Range is from 0-24  */
      unsigned int   aec_0ErrorProcessorDelay : 5;    /* 01.FA76.4:0  R/W      Default = 0x00 */
                     /* AEC 0 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 AEC CUE Error Processor Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA77.4:0 R/W AEC 0 Error Processor Delay Segment 1 [4:0]
                        AQ_Ch0AecCueErrorProcessorControl_CAL.u1.bits_1.aec_0ErrorProcessorDelaySegment_1

                        Default = 0x01

                        AEC 0 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Note this register is only used in 64 Tap Mode and applies this error/data proc delay to segment 1. This register overrides the general Error Process Delay register in this mode.
                        
                        Valid Range is from 0-24  */
      unsigned int   aec_0ErrorProcessorDelaySegment_1 : 5;    /* 01.FA77.4:0  R/W      Default = 0x01 */
                     /* AEC 0 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Ch0AecCueErrorProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 AEC CUE Leakage Period Control: 01.FA78 */
/*                  CH0 AEC CUE Leakage Period Control: 01.FA78 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA78.3 R/W AEC 0 Leakage Disable
                        AQ_Ch0AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_0LeakageDisable

                        Default = 0x0

                        AEC 0 Leakage Disable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global disable of leakage in CUE LMS algorithm on all segments.
                        
                        This forces leakage to be disabled regardless of values set for leakage period of segment-specific alpha/beta leakage disable.  */
      unsigned int   aec_0LeakageDisable : 1;    /* 01.FA78.3  R/W      Default = 0x0 */
                     /* AEC 0 Leakage Disable
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA78.2 R/W AEC 0 Leakage Period Disable
                        AQ_Ch0AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_0LeakagePeriodDisable

                        Default = 0x0

                        AEC 0 Leakage Period Disable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Leakage Period. Leakage is not disabled in this mode.  */
      unsigned int   aec_0LeakagePeriodDisable : 1;    /* 01.FA78.2  R/W      Default = 0x0 */
                     /* AEC 0 Leakage Period Disable
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA78.1 R/WSC AEC 0 Leakage Period Abort
                        AQ_Ch0AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_0LeakagePeriodAbort

                        Default = 0x0

                        AEC 0 Leakage Period Abort
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Abort Leakage Period  */
      unsigned int   aec_0LeakagePeriodAbort : 1;    /* 01.FA78.1  R/WSC      Default = 0x0 */
                     /* AEC 0 Leakage Period Abort
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA78.0 R/WSC AEC 0 Leakage Period Start
                        AQ_Ch0AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_0LeakagePeriodStart

                        Default = 0x0

                        AEC 0 Leakage Period Start
                        
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Start Leakage Period / Iteration   */
      unsigned int   aec_0LeakagePeriodStart : 1;    /* 01.FA78.0  R/WSC      Default = 0x0 */
                     /* AEC 0 Leakage Period Start
                        
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA79.F:0 R/W AEC 0 Leakage Period [F:0]
                        AQ_Ch0AecCueLeakagePeriodControl_CAL.u1.bits_1.aec_0LeakagePeriod

                        Default = 0x0000

                        AEC 0 Leakage Period
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                         Period in which it which leakage is repeated, reps.
                          */
      unsigned int   aec_0LeakagePeriod : 16;    /* 01.FA79.F:0  R/W      Default = 0x0000 */
                     /* AEC 0 Leakage Period
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA7A.F:0 R/W AEC 0 Leakage Iteration [F:0]
                        AQ_Ch0AecCueLeakagePeriodControl_CAL.u2.bits_2.aec_0LeakageIteration

                        Default = 0x0000

                        AEC 0 Leakage Iterations
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Number of period iterations in which leakage is repeated, sets.
                        
                        If set to 0 the number of iteratios is free-running (unlimited) and the periodicity is dictated solely by the Leakage Period calculations.
                          */
      unsigned int   aec_0LeakageIteration : 16;    /* 01.FA7A.F:0  R/W      Default = 0x0000 */
                     /* AEC 0 Leakage Iterations
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch0AecCueLeakagePeriodControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 AEC CUE Coefficient Scaling Control: 01.FA7B */
/*                  CH0 AEC CUE Coefficient Scaling Control: 01.FA7B */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 AEC CUE Coefficient Scaling Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA7B.F R/W AEC 0 Coefficient Scaling Shift Enable
                        AQ_Ch0AecCueCoefficientScalingControl_CAL.u0.bits_0.aec_0CoefficientScalingShiftEnable

                        Default = 0x0

                        AEC 0 Coeffcient Scaling Factor Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When enabled the will scale the internally stores 25 bits coefficients by shifting by the value specified by the customcoefficient round value.
                        
                        By default this feature is disabled and the internal coefficients are scaled to AEC 0 10 bits using a sign based shift rounding operation.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   aec_0CoefficientScalingShiftEnable : 1;    /* 01.FA7B.F  R/W      Default = 0x0 */
                     /* AEC 0 Coeffcient Scaling Factor Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FA7B.2:0 R/W AEC 0 Coefficient Scaling Shift Value [2:0]
                        AQ_Ch0AecCueCoefficientScalingControl_CAL.u0.bits_0.aec_0CoefficientScalingShiftValue

                        Default = 0x0

                        AEC 0 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Specifies the value to shift internal coefficient values from to reach the AEC 0 10 bit coefficient resolution.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   aec_0CoefficientScalingShiftValue : 3;    /* 01.FA7B.2:0  R/W      Default = 0x0 */
                     /* AEC 0 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch0AecCueCoefficientScalingControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 AEC FIR Control: 01.FA7C */
/*                  CH0 AEC FIR Control: 01.FA7C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 AEC FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA7C.F R/W AEC 0 FIR Clock Shape
                        AQ_Ch0AecFirControl_CAL.u0.bits_0.aec_0FirClockShape

                        Default = 0x0

                        1 = FIR reduce CTPC non-overlap time
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        If activated: Allows lower Vdd_min for slow silicon.  */
      unsigned int   aec_0FirClockShape : 1;    /* 01.FA7C.F  R/W      Default = 0x0 */
                     /* 1 = FIR reduce CTPC non-overlap time
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA7C.E R/W AEC 0 FIR Force Wakeup
                        AQ_Ch0AecFirControl_CAL.u0.bits_0.aec_0FirForceWakeup

                        Default = 0x0

                        AEC 0 FIR force wakeup
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Allow internal hardware to selectively disable coefficient portions of logic for reduced powre consumption.  */
      unsigned int   aec_0FirForceWakeup : 1;    /* 01.FA7C.E  R/W      Default = 0x0 */
                     /* AEC 0 FIR force wakeup
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA7C.D R/W AEC 0 FIR DFT Constant
                        AQ_Ch0AecFirControl_CAL.u0.bits_0.aec_0FirDftConstant

                        Default = 0x0

                        1 = FIR DFT constantVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Set to 1 during DFT test mode only.  */
      unsigned int   aec_0FirDftConstant : 1;    /* 01.FA7C.D  R/W      Default = 0x0 */
                     /* 1 = FIR DFT constantVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA7C.C R/W AEC 0 FIR Clock Enable
                        AQ_Ch0AecFirControl_CAL.u0.bits_0.aec_0FirClockEnable

                        Default = 0x1

                        1 = FIR enable charge conservationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Low-power operation mode of FIR clock buffer.  */
      unsigned int   aec_0FirClockEnable : 1;    /* 01.FA7C.C  R/W      Default = 0x1 */
                     /* 1 = FIR enable charge conservationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 12;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 AEC FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA7D.F R/WSC AEC 0 FIR Data Flush Enable
                        AQ_Ch0AecFirControl_CAL.u1.bits_1.aec_0FirDataFlushEnable

                        Default = 0x0

                        AEC 0 FIR Data Flush Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable FIR Data Flushing.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   aec_0FirDataFlushEnable : 1;    /* 01.FA7D.F  R/WSC      Default = 0x0 */
                     /* AEC 0 FIR Data Flush Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FA7E.8:0 R/W AEC 0 FIR Flush Data [8:0]
                        AQ_Ch0AecFirControl_CAL.u2.bits_2.aec_0FirFlushData

                        Default = 0x000

                        AEC 0 flush data
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Data value to flush FIR logic with. One element in the entire segment will be set with this value. All other taps in a given segment will be set to 0.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   aec_0FirFlushData : 9;    /* 01.FA7E.8:0  R/W      Default = 0x000 */
                     /* AEC 0 flush data
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch0AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG0 AEC CUE Control: 01.FA80 */
/*                  CH0 SEG0 AEC CUE Control: 01.FA80 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA80.F R/W AEC 0 CUE Soft Reset Segment 0
                        AQ_Ch0Seg0AecCueControl_CAL.u0.bits_0.aec_0CueSoftResetSegment_0

                        Default = 0x0

                        AEC 0 CUE Soft Reset Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   aec_0CueSoftResetSegment_0 : 1;    /* 01.FA80.F  R/W      Default = 0x0 */
                     /* AEC 0 CUE Soft Reset Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA81.F R/W AEC 0 CUE Clock Gate Enable Segment 0
                        AQ_Ch0Seg0AecCueControl_CAL.u1.bits_1.aec_0CueClockGateEnableSegment_0

                        Default = 0x0

                        AEC 0 CUE Clock Gate Enable Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   aec_0CueClockGateEnableSegment_0 : 1;    /* 01.FA81.F  R/W      Default = 0x0 */
                     /* AEC 0 CUE Clock Gate Enable Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA82.F R/W AEC 0 CUE Freeze Enable Segment 0
                        AQ_Ch0Seg0AecCueControl_CAL.u2.bits_2.aec_0CueFreezeEnableSegment_0

                        Default = 0x1

                        AEC 0 CUE Freeze Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   aec_0CueFreezeEnableSegment_0 : 1;    /* 01.FA82.F  R/W      Default = 0x1 */
                     /* AEC 0 CUE Freeze Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH0 SEG0 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FA83.1:0 R/W AEC 0 CUE SRAM Power Gating Mode Segment 0 [1:0]
                        AQ_Ch0Seg0AecCueControl_CAL.u3.bits_3.aec_0CueSramPowerGatingModeSegment_0

                        Default = 0x0

                        AEC 0 CUE SRAM Power Gating Mode Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   aec_0CueSramPowerGatingModeSegment_0 : 2;    /* 01.FA83.1:0  R/W      Default = 0x0 */
                     /* AEC 0 CUE SRAM Power Gating Mode Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH0 SEG0 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FA84.6:4 R/W AEC 0 CUE SRAM EMA Segment 0 [2:0]
                        AQ_Ch0Seg0AecCueControl_CAL.u4.bits_4.aec_0CueSramEmaSegment_0

                        Default = 0x3

                        AEC 0 CUE SRAM EMA Segment 0VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0CueSramEmaSegment_0 : 3;    /* 01.FA84.6:4  R/W      Default = 0x3 */
                     /* AEC 0 CUE SRAM EMA Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA84.3:2 R/W AEC 0 CUE SRAM EMAW Segment 0 [1:0]
                        AQ_Ch0Seg0AecCueControl_CAL.u4.bits_4.aec_0CueSramEmawSegment_0

                        Default = 0x0

                        AEC 0 CUE SRAM EMAW Segment 0VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0CueSramEmawSegment_0 : 2;    /* 01.FA84.3:2  R/W      Default = 0x0 */
                     /* AEC 0 CUE SRAM EMAW Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA84.1 R/W AEC 0 CUE SRAM EMAS Segment 0
                        AQ_Ch0Seg0AecCueControl_CAL.u4.bits_4.aec_0CueSramEmasSegment_0

                        Default = 0x0

                        AEC 0 CUE SRAM EMAS Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0CueSramEmasSegment_0 : 1;    /* 01.FA84.1  R/W      Default = 0x0 */
                     /* AEC 0 CUE SRAM EMAS Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA84.0 R/W AEC 0 CUE SRAM RET1N Segment 0
                        AQ_Ch0Seg0AecCueControl_CAL.u4.bits_4.aec_0CueSramRet1nSegment_0

                        Default = 0x1

                        AEC 0 CUE SRAM RET1 Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0CueSramRet1nSegment_0 : 1;    /* 01.FA84.0  R/W      Default = 0x1 */
                     /* AEC 0 CUE SRAM RET1 Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_Ch0Seg0AecCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG0 AEC CUE LMS Control: 01.FA85 */
/*                  CH0 SEG0 AEC CUE LMS Control: 01.FA85 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FA85.2 R/W AEC 0 CUE Disable FIR Coefficient Data Valid Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u0.bits_0.aec_0CueDisableFirCoefficientDataValidSegment_0

                        Default = 0x0

                        AEC 0 CUE Disable FIR Coefficient Data Valid Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   aec_0CueDisableFirCoefficientDataValidSegment_0 : 1;    /* 01.FA85.2  R/W      Default = 0x0 */
                     /* AEC 0 CUE Disable FIR Coefficient Data Valid Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA85.1 R/W AEC 0 CUE Adaptive FIR Send Coefficient Update Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u0.bits_0.aec_0CueAdaptiveFirSendCoefficientUpdateSegment_0

                        Default = 0x1

                        AEC 0 CUE Adaptive FIR Send Coefficient Update Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   aec_0CueAdaptiveFirSendCoefficientUpdateSegment_0 : 1;    /* 01.FA85.1  R/W      Default = 0x1 */
                     /* AEC 0 CUE Adaptive FIR Send Coefficient Update Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA85.0 R/W AEC 0 CUE Disable Adpative CUE Coefficient Update Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u0.bits_0.aec_0CueDisableAdpativeCueCoefficientUpdateSegment_0

                        Default = 0x0

                        AEC 0 CUE Disable Adpative CUE Coefficient Update Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   aec_0CueDisableAdpativeCueCoefficientUpdateSegment_0 : 1;    /* 01.FA85.0  R/W      Default = 0x0 */
                     /* AEC 0 CUE Disable Adpative CUE Coefficient Update Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA86.F R/W AEC 0 CUE Mu Disable Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u1.bits_1.aec_0CueMuDisableSegment_0

                        Default = 0x0

                        Mu DisableVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   aec_0CueMuDisableSegment_0 : 1;    /* 01.FA86.F  R/W      Default = 0x0 */
                     /* Mu DisableVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA86.E R/W AEC 0 CUE Data Boost Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u1.bits_1.aec_0CueDataBoostSegment_0

                        Default = 0x0

                        Data BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   aec_0CueDataBoostSegment_0 : 1;    /* 01.FA86.E  R/W      Default = 0x0 */
                     /* Data BoostVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA86.D R/W AEC 0 CUE Mu Boost Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u1.bits_1.aec_0CueMuBoostSegment_0

                        Default = 0x0

                        Mu BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   aec_0CueMuBoostSegment_0 : 1;    /* 01.FA86.D  R/W      Default = 0x0 */
                     /* Mu BoostVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FA86.3:0 R/WPD AEC 0 CUE Mu Segment 0 [3:0]
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u1.bits_1.aec_0CueMuSegment_0

                        Provisionable Default = 0x5

                        MuVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   aec_0CueMuSegment_0 : 4;    /* 01.FA86.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* MuVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA87.F R/WPD AEC 0 CUE Disable Beta Leakage Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u2.bits_2.aec_0CueDisableBetaLeakageSegment_0

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   aec_0CueDisableBetaLeakageSegment_0 : 1;    /* 01.FA87.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA87.E R/WPD AEC 0 CUE Negate Beta Leakage Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u2.bits_2.aec_0CueNegateBetaLeakageSegment_0

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   aec_0CueNegateBetaLeakageSegment_0 : 1;    /* 01.FA87.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FA87.4:0 R/WPD AEC 0 CUE Beta Leakage Segment 0 [4:0]
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u2.bits_2.aec_0CueBetaLeakageSegment_0

                        Provisionable Default = 0x08

                        Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   aec_0CueBetaLeakageSegment_0 : 5;    /* 01.FA87.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH0 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA88.F R/WPD AEC 0 CUE Disable Alpha Leakage Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u3.bits_3.aec_0CueDisableAlphaLeakageSegment_0

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   aec_0CueDisableAlphaLeakageSegment_0 : 1;    /* 01.FA88.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA88.E R/WPD AEC 0 CUE Negate Alpha Leakage Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u3.bits_3.aec_0CueNegateAlphaLeakageSegment_0

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   aec_0CueNegateAlphaLeakageSegment_0 : 1;    /* 01.FA88.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FA88.D R/WPD AEC 0 CUE Alpha Disable Leakage Round Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u3.bits_3.aec_0CueAlphaDisableLeakageRoundSegment_0

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   aec_0CueAlphaDisableLeakageRoundSegment_0 : 1;    /* 01.FA88.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FA88.4:0 R/WPD AEC 0 CUE Alpha Leakage Segment 0 [4:0]
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u3.bits_3.aec_0CueAlphaLeakageSegment_0

                        Provisionable Default = 0x10

                        Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   aec_0CueAlphaLeakageSegment_0 : 5;    /* 01.FA88.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH0 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA89.F R/W AEC 0 CUE Disable Mu Leakage Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u4.bits_4.aec_0CueDisableMuLeakageSegment_0

                        Default = 0x1

                        CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   aec_0CueDisableMuLeakageSegment_0 : 1;    /* 01.FA89.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA89.3:0 R/WPD AEC 0 CUE Mu Leakage Segment 0 [3:0]
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u4.bits_4.aec_0CueMuLeakageSegment_0

                        Provisionable Default = 0x3

                        CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   aec_0CueMuLeakageSegment_0 : 4;    /* 01.FA89.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of CH0 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FA8A.F R/WPD AEC 0 CUE Coefficient Threshold Gate Enable Segment 0
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u5.bits_5.aec_0CueCoefficientThresholdGateEnableSegment_0

                        Provisionable Default = 0x0

                        AEC 0 CUE Coefficient Threshold Gate Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   aec_0CueCoefficientThresholdGateEnableSegment_0 : 1;    /* 01.FA8A.F  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 0 CUE Coefficient Threshold Gate Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FA8A.8:0 R/WPD AEC 0 CUE Coefficient Threshold Value Segment 0 [8:0]
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u5.bits_5.aec_0CueCoefficientThresholdValueSegment_0

                        Provisionable Default = 0x000

                        AEC 0 CUE Coefficient Threshold Value Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   aec_0CueCoefficientThresholdValueSegment_0 : 9;    /* 01.FA8A.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* AEC 0 CUE Coefficient Threshold Value Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of CH0 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FA8B.1:0 R/WPD AEC 0 CUE Coefficient Sub Segment Clear Segment 0 [1:0]
                        AQ_Ch0Seg0AecCueLmsControl_CAL.u6.bits_6.aec_0CueCoefficientSubSegmentClearSegment_0

                        Provisionable Default = 0x0

                        AEC 0 CUE Coefficient Sub Segment Clear Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   aec_0CueCoefficientSubSegmentClearSegment_0 : 2;    /* 01.FA8B.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 0 CUE Coefficient Sub Segment Clear Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_Ch0Seg0AecCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG0 AEC FIR Control: 01.FA90 */
/*                  CH0 SEG0 AEC FIR Control: 01.FA90 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA90.4:0 R/WPD AEC 0 FIR Power Down Segment 0 [4:0]
                        AQ_Ch0Seg0AecFirControl_CAL.u0.bits_0.aec_0FirPowerDownSegment_0

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Power down clocking for AEC coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   aec_0FirPowerDownSegment_0 : 5;    /* 01.FA90.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FA91.4 R/W AEC 0 FIR Gain 3 Enable Segment 0
                        AQ_Ch0Seg0AecFirControl_CAL.u1.bits_1.aec_0FirGain_3EnableSegment_0

                        Default = 0x0

                        AEC 0 FIR Gain 3 Enable Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   aec_0FirGain_3EnableSegment_0 : 1;    /* 01.FA91.4  R/W      Default = 0x0 */
                     /* AEC 0 FIR Gain 3 Enable Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FA91.2:0 R/W AEC 0 FIR Shift Segment 0 [2:0]
                        AQ_Ch0Seg0AecFirControl_CAL.u1.bits_1.aec_0FirShiftSegment_0

                        Default = 0x0

                        AEC 0 FIR Shift Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   aec_0FirShiftSegment_0 : 3;    /* 01.FA91.2:0  R/W      Default = 0x0 */
                     /* AEC 0 FIR Shift Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FA92.0 R/WSC AEC 0 FIR Global Flush Enable Segment 0
                        AQ_Ch0Seg0AecFirControl_CAL.u2.bits_2.aec_0FirGlobalFlushEnableSegment_0

                        Default = 0x0

                        AEC 0 FIR Global Flush Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   aec_0FirGlobalFlushEnableSegment_0 : 1;    /* 01.FA92.0  R/WSC      Default = 0x0 */
                     /* AEC 0 FIR Global Flush Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch0Seg0AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG1 AEC CUE Control: 01.FAA0 */
/*                  CH0 SEG1 AEC CUE Control: 01.FAA0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAA0.F R/W AEC 0 CUE Soft Reset Segment 1
                        AQ_Ch0Seg1AecCueControl_CAL.u0.bits_0.aec_0CueSoftResetSegment_1

                        Default = 0x0

                        AEC 0 CUE Soft Reset Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   aec_0CueSoftResetSegment_1 : 1;    /* 01.FAA0.F  R/W      Default = 0x0 */
                     /* AEC 0 CUE Soft Reset Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAA1.F R/W AEC 0 CUE Clock Gate Enable Segment 1
                        AQ_Ch0Seg1AecCueControl_CAL.u1.bits_1.aec_0CueClockGateEnableSegment_1

                        Default = 0x0

                        AEC 0 CUE Clock Gate Enable Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   aec_0CueClockGateEnableSegment_1 : 1;    /* 01.FAA1.F  R/W      Default = 0x0 */
                     /* AEC 0 CUE Clock Gate Enable Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAA2.F R/W AEC 0 CUE Freeze Enable Segment 1
                        AQ_Ch0Seg1AecCueControl_CAL.u2.bits_2.aec_0CueFreezeEnableSegment_1

                        Default = 0x1

                        AEC 0 CUE Freeze Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   aec_0CueFreezeEnableSegment_1 : 1;    /* 01.FAA2.F  R/W      Default = 0x1 */
                     /* AEC 0 CUE Freeze Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH0 SEG1 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FAA3.1:0 R/W AEC 0 CUE SRAM Power Gating Mode Segment 1 [1:0]
                        AQ_Ch0Seg1AecCueControl_CAL.u3.bits_3.aec_0CueSramPowerGatingModeSegment_1

                        Default = 0x0

                        AEC 0 CUE SRAM Power Gating Mode Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   aec_0CueSramPowerGatingModeSegment_1 : 2;    /* 01.FAA3.1:0  R/W      Default = 0x0 */
                     /* AEC 0 CUE SRAM Power Gating Mode Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH0 SEG1 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAA4.6:4 R/W AEC 0 CUE SRAM EMA Segment 1 [2:0]
                        AQ_Ch0Seg1AecCueControl_CAL.u4.bits_4.aec_0CueSramEmaSegment_1

                        Default = 0x3

                        AEC 0 CUE SRAM EMA Segment 1VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0CueSramEmaSegment_1 : 3;    /* 01.FAA4.6:4  R/W      Default = 0x3 */
                     /* AEC 0 CUE SRAM EMA Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA4.3:2 R/W AEC 0 CUE SRAM EMAW Segment 1 [1:0]
                        AQ_Ch0Seg1AecCueControl_CAL.u4.bits_4.aec_0CueSramEmawSegment_1

                        Default = 0x0

                        AEC 0 CUE SRAM EMAW Segment 1VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0CueSramEmawSegment_1 : 2;    /* 01.FAA4.3:2  R/W      Default = 0x0 */
                     /* AEC 0 CUE SRAM EMAW Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA4.1 R/W AEC 0 CUE SRAM EMAS Segment 1
                        AQ_Ch0Seg1AecCueControl_CAL.u4.bits_4.aec_0CueSramEmasSegment_1

                        Default = 0x0

                        AEC 0 CUE SRAM EMAS Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0CueSramEmasSegment_1 : 1;    /* 01.FAA4.1  R/W      Default = 0x0 */
                     /* AEC 0 CUE SRAM EMAS Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA4.0 R/W AEC 0 CUE SRAM RET1N Segment 1
                        AQ_Ch0Seg1AecCueControl_CAL.u4.bits_4.aec_0CueSramRet1nSegment_1

                        Default = 0x1

                        AEC 0 CUE SRAM RET1 Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_0CueSramRet1nSegment_1 : 1;    /* 01.FAA4.0  R/W      Default = 0x1 */
                     /* AEC 0 CUE SRAM RET1 Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_Ch0Seg1AecCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG1 AEC CUE LMS Control: 01.FAA5 */
/*                  CH0 SEG1 AEC CUE LMS Control: 01.FAA5 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FAA5.2 R/W AEC 0 CUE Disable FIR Coefficient Data Valid Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u0.bits_0.aec_0CueDisableFirCoefficientDataValidSegment_1

                        Default = 0x0

                        AEC 0 CUE Disable FIR Coefficient Data Valid Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   aec_0CueDisableFirCoefficientDataValidSegment_1 : 1;    /* 01.FAA5.2  R/W      Default = 0x0 */
                     /* AEC 0 CUE Disable FIR Coefficient Data Valid Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA5.1 R/W AEC 0 CUE Adaptive FIR Send Coefficient Update Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u0.bits_0.aec_0CueAdaptiveFirSendCoefficientUpdateSegment_1

                        Default = 0x1

                        AEC 0 CUE Adaptive FIR Send Coefficient Update Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   aec_0CueAdaptiveFirSendCoefficientUpdateSegment_1 : 1;    /* 01.FAA5.1  R/W      Default = 0x1 */
                     /* AEC 0 CUE Adaptive FIR Send Coefficient Update Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
                    /*! \brief 01.FAA5.0 R/W AEC 0 CUE Disable Adpative CUE Coefficient Update Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u0.bits_0.aec_0CueDisableAdpativeCueCoefficientUpdateSegment_1

                        Default = 0x0

                        AEC 0 CUE Disable Adpative CUE Coefficient Update Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   aec_0CueDisableAdpativeCueCoefficientUpdateSegment_1 : 1;    /* 01.FAA5.0  R/W      Default = 0x0 */
                     /* AEC 0 CUE Disable Adpative CUE Coefficient Update Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAA6.F R/W AEC 0 CUE Mu Disable Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u1.bits_1.aec_0CueMuDisableSegment_1

                        Default = 0x0

                        Mu DisableVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   aec_0CueMuDisableSegment_1 : 1;    /* 01.FAA6.F  R/W      Default = 0x0 */
                     /* Mu DisableVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA6.E R/W AEC 0 CUE Data Boost Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u1.bits_1.aec_0CueDataBoostSegment_1

                        Default = 0x0

                        Data BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   aec_0CueDataBoostSegment_1 : 1;    /* 01.FAA6.E  R/W      Default = 0x0 */
                     /* Data BoostVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA6.D R/W AEC 0 CUE Mu Boost Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u1.bits_1.aec_0CueMuBoostSegment_1

                        Default = 0x0

                        Mu BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   aec_0CueMuBoostSegment_1 : 1;    /* 01.FAA6.D  R/W      Default = 0x0 */
                     /* Mu BoostVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAA6.3:0 R/WPD AEC 0 CUE Mu Segment 1 [3:0]
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u1.bits_1.aec_0CueMuSegment_1

                        Provisionable Default = 0x5

                        MuVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   aec_0CueMuSegment_1 : 4;    /* 01.FAA6.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* MuVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAA7.F R/WPD AEC 0 CUE Disable Beta Leakage Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u2.bits_2.aec_0CueDisableBetaLeakageSegment_1

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   aec_0CueDisableBetaLeakageSegment_1 : 1;    /* 01.FAA7.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA7.E R/WPD AEC 0 CUE Negate Beta Leakage Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u2.bits_2.aec_0CueNegateBetaLeakageSegment_1

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   aec_0CueNegateBetaLeakageSegment_1 : 1;    /* 01.FAA7.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAA7.4:0 R/WPD AEC 0 CUE Beta Leakage Segment 1 [4:0]
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u2.bits_2.aec_0CueBetaLeakageSegment_1

                        Provisionable Default = 0x08

                        Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   aec_0CueBetaLeakageSegment_1 : 5;    /* 01.FAA7.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH0 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAA8.F R/WPD AEC 0 CUE Disable Alpha Leakage Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u3.bits_3.aec_0CueDisableAlphaLeakageSegment_1

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   aec_0CueDisableAlphaLeakageSegment_1 : 1;    /* 01.FAA8.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA8.E R/WPD AEC 0 CUE Negate Alpha Leakage Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u3.bits_3.aec_0CueNegateAlphaLeakageSegment_1

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   aec_0CueNegateAlphaLeakageSegment_1 : 1;    /* 01.FAA8.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAA8.D R/WPD AEC 0 CUE Alpha Disable Leakage Round Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u3.bits_3.aec_0CueAlphaDisableLeakageRoundSegment_1

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   aec_0CueAlphaDisableLeakageRoundSegment_1 : 1;    /* 01.FAA8.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FAA8.4:0 R/WPD AEC 0 CUE Alpha Leakage Segment 1 [4:0]
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u3.bits_3.aec_0CueAlphaLeakageSegment_1

                        Provisionable Default = 0x10

                        Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   aec_0CueAlphaLeakageSegment_1 : 5;    /* 01.FAA8.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH0 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAA9.F R/W AEC 0 CUE Disable Mu Leakage Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u4.bits_4.aec_0CueDisableMuLeakageSegment_1

                        Default = 0x1

                        CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   aec_0CueDisableMuLeakageSegment_1 : 1;    /* 01.FAA9.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FAA9.3:0 R/WPD AEC 0 CUE Mu Leakage Segment 1 [3:0]
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u4.bits_4.aec_0CueMuLeakageSegment_1

                        Provisionable Default = 0x3

                        CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   aec_0CueMuLeakageSegment_1 : 4;    /* 01.FAA9.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of CH0 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAAA.F R/WPD AEC 0 CUE Coefficient Threshold Gate Enable Segment 1
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u5.bits_5.aec_0CueCoefficientThresholdGateEnableSegment_1

                        Provisionable Default = 0x0

                        AEC 0 CUE Coefficient Threshold Gate Enable Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   aec_0CueCoefficientThresholdGateEnableSegment_1 : 1;    /* 01.FAAA.F  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 0 CUE Coefficient Threshold Gate Enable Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FAAA.8:0 R/WPD AEC 0 CUE Coefficient Threshold Value Segment 1 [8:0]
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u5.bits_5.aec_0CueCoefficientThresholdValueSegment_1

                        Provisionable Default = 0x000

                        AEC 0 CUE Coefficient Threshold Value Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   aec_0CueCoefficientThresholdValueSegment_1 : 9;    /* 01.FAAA.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* AEC 0 CUE Coefficient Threshold Value Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of CH0 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FAAB.1:0 R/WPD AEC 0 CUE Coefficient Sub Segment Clear Segment 1 [1:0]
                        AQ_Ch0Seg1AecCueLmsControl_CAL.u6.bits_6.aec_0CueCoefficientSubSegmentClearSegment_1

                        Provisionable Default = 0x0

                        AEC 0 CUE Coefficient Sub Segment Clear Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   aec_0CueCoefficientSubSegmentClearSegment_1 : 2;    /* 01.FAAB.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 0 CUE Coefficient Sub Segment Clear Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_Ch0Seg1AecCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG1 AEC FIR Control: 01.FAB0 */
/*                  CH0 SEG1 AEC FIR Control: 01.FAB0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FAB0.4:0 R/WPD AEC 0 FIR Power Down Segment 1 [4:0]
                        AQ_Ch0Seg1AecFirControl_CAL.u0.bits_0.aec_0FirPowerDownSegment_1

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Power down clocking for AEC coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   aec_0FirPowerDownSegment_1 : 5;    /* 01.FAB0.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH0 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FAB1.4 R/W AEC 0 FIR Gain 3 Enable Segment 1
                        AQ_Ch0Seg1AecFirControl_CAL.u1.bits_1.aec_0FirGain_3EnableSegment_1

                        Default = 0x0

                        AEC 0 FIR Gain 3 Enable Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   aec_0FirGain_3EnableSegment_1 : 1;    /* 01.FAB1.4  R/W      Default = 0x0 */
                     /* AEC 0 FIR Gain 3 Enable Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FAB1.2:0 R/W AEC 0 FIR Shift Segment 1 [2:0]
                        AQ_Ch0Seg1AecFirControl_CAL.u1.bits_1.aec_0FirShiftSegment_1

                        Default = 0x0

                        AEC 0 FIR Shift Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   aec_0FirShiftSegment_1 : 3;    /* 01.FAB1.2:0  R/W      Default = 0x0 */
                     /* AEC 0 FIR Shift Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH0 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FAB2.0 R/W AEC 0 FIR Global Flush Enable Segment 1
                        AQ_Ch0Seg1AecFirControl_CAL.u2.bits_2.aec_0FirGlobalFlushEnableSegment_1

                        Default = 0x0

                        AEC 0 FIR Global Flush Enable Segment 1
                        
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   aec_0FirGlobalFlushEnableSegment_1 : 1;    /* 01.FAB2.0  R/W      Default = 0x0 */
                     /* AEC 0 FIR Global Flush Enable Segment 1
                        
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch0Seg1AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 AEC CUE Mode Control: 01.FAC0 */
/*                  CH1 AEC CUE Mode Control: 01.FAC0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 AEC CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAC0.F R/W AEC 1 CUE Flush
                        AQ_Ch1AecCueModeControl_CAL.u0.bits_0.aec_1CueFlush

                        Default = 0x0

                        AEC 1 CUE Flush
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Flush AEC CUE Coeffcient Memory to all internal 25bit coefficient values of 0.
                        
                        It is recommended that all the segments be frozen when flushing.  */
      unsigned int   aec_1CueFlush : 1;    /* 01.FAC0.F  R/W      Default = 0x0 */
                     /* AEC 1 CUE Flush
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 AEC CUE Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 AEC CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAC2.F R/W AEC 1 Single Step
                        AQ_Ch1AecCueModeControl_CAL.u2.bits_2.aec_1SingleStep

                        Default = 0x0

                        A rising edge performs a single step coefficient updateVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Single Step. In this mode a single update to all taps will be performed.
                        
                        Also if leakage is enabled a single step of leakage is applied if leakage period is enabled.
                        
                        Note: Single step should only be enabled when all CUE segments are first put into freeze mode.  */
      unsigned int   aec_1SingleStep : 1;    /* 01.FAC2.F  R/W      Default = 0x0 */
                     /* A rising edge performs a single step coefficient updateVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch1AecCueModeControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 AEC CUE Data Processor Control: 01.FAC4 */
/*                  CH1 AEC CUE Data Processor Control: 01.FAC4 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 AEC CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAC4.F R/W AEC 1 Data Processor Random Delay Enable
                        AQ_Ch1AecCueDataProcessorControl_CAL.u0.bits_0.aec_1DataProcessorRandomDelayEnable

                        Default = 0x0

                        AEC 1 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Data Sampling Randomization
                        When downsampling incoming data. The specific point where the data is latched (and downsampled) can be skewed randomly.  */
      unsigned int   aec_1DataProcessorRandomDelayEnable : 1;    /* 01.FAC4.F  R/W      Default = 0x0 */
                     /* AEC 1 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FAC4.C:A R/W AEC 1 Data Processor Random Delay Value [2:0]
                        AQ_Ch1AecCueDataProcessorControl_CAL.u0.bits_0.aec_1DataProcessorRandomDelayValue

                        Default = 0x0

                        AEC 1 Data Processor Random Delay Value
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Data Latching Delay 
                        When data sampling randomization is disabled, software can optionally program the additional delay value, to allow for downsampling skew.  */
      unsigned int   aec_1DataProcessorRandomDelayValue : 3;    /* 01.FAC4.C:A  R/W      Default = 0x0 */
                     /* AEC 1 Data Processor Random Delay Value
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 2;
                    /*! \brief 01.FAC4.7:0 R/W AEC 1 Data Processor Delay [7:0]
                        AQ_Ch1AecCueDataProcessorControl_CAL.u0.bits_0.aec_1DataProcessorDelay

                        Default = 0x00

                        AEC 1 Data Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Data Processor Delay
                        Number of clock cycles (in DSP clock domain) to delay incoming data to the CUE/LMS logic so that it can be aligned with the input error.  */
      unsigned int   aec_1DataProcessorDelay : 8;    /* 01.FAC4.7:0  R/W      Default = 0x00 */
                     /* AEC 1 Data Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 AEC CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAC5.F R/W AEC 1 Data Processor Force Value Enable
                        AQ_Ch1AecCueDataProcessorControl_CAL.u1.bits_1.aec_1DataProcessorForceValueEnable

                        Default = 0x0

                        AEC 1 Data Processor Force Value Enable
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Force data input to a register specified value.
                        
                        For debug purposes only.  */
      unsigned int   aec_1DataProcessorForceValueEnable : 1;    /* 01.FAC5.F  R/W      Default = 0x0 */
                     /* AEC 1 Data Processor Force Value Enable
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FAC5.8:0 R/W AEC 1 Data Processor Force Value [8:0]
                        AQ_Ch1AecCueDataProcessorControl_CAL.u1.bits_1.aec_1DataProcessorForceValue

                        Default = 0x000

                        AEC 1 Data Processor Force Value
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Value to force input FIR/CUE data to when enabled.
                        
                        For debug purposes only.  */
      unsigned int   aec_1DataProcessorForceValue : 9;    /* 01.FAC5.8:0  R/W      Default = 0x000 */
                     /* AEC 1 Data Processor Force Value
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Ch1AecCueDataProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 AEC CUE Error Processor Control: 01.FAC6 */
/*                  CH1 AEC CUE Error Processor Control: 01.FAC6 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 AEC CUE Error Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAC6.F R/WPD AEC 1 Invert Error
                        AQ_Ch1AecCueErrorProcessorControl_CAL.u0.bits_0.aec_1InvertError

                        Provisionable Default = 0x0

                        1 = Invert Error Signal
                        0 = Normal operationVLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1InvertError : 1;    /* 01.FAC6.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Invert Error Signal
                        0 = Normal operationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 10;
                    /*! \brief 01.FAC6.4:0 R/W AEC 1 Error Processor Delay [4:0]
                        AQ_Ch1AecCueErrorProcessorControl_CAL.u0.bits_0.aec_1ErrorProcessorDelay

                        Default = 0x00

                        AEC 1 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Valid Range is from 0-24  */
      unsigned int   aec_1ErrorProcessorDelay : 5;    /* 01.FAC6.4:0  R/W      Default = 0x00 */
                     /* AEC 1 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 AEC CUE Error Processor Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FAC7.4:0 R/W AEC 1 Error Processor Delay Segment 1 [4:0]
                        AQ_Ch1AecCueErrorProcessorControl_CAL.u1.bits_1.aec_1ErrorProcessorDelaySegment_1

                        Default = 0x01

                        AEC 1 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Note this register is only used in 64 Tap Mode and applies this error/data proc delay to segment 1. This register overrides the general Error Process Delay register in this mode.
                        
                        Valid Range is from 0-24  */
      unsigned int   aec_1ErrorProcessorDelaySegment_1 : 5;    /* 01.FAC7.4:0  R/W      Default = 0x01 */
                     /* AEC 1 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Ch1AecCueErrorProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 AEC CUE Leakage Period Control: 01.FAC8 */
/*                  CH1 AEC CUE Leakage Period Control: 01.FAC8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FAC8.3 R/W AEC 1 Leakage Disable
                        AQ_Ch1AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_1LeakageDisable

                        Default = 0x0

                        AEC 1 Leakage Disable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global disable of leakage in CUE LMS algorithm on all segments.
                        
                        This forces leakage to be disabled regardless of values set for leakage period of segment-specific alpha/beta leakage disable.  */
      unsigned int   aec_1LeakageDisable : 1;    /* 01.FAC8.3  R/W      Default = 0x0 */
                     /* AEC 1 Leakage Disable
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAC8.2 R/W AEC 1 Leakage Period Disable
                        AQ_Ch1AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_1LeakagePeriodDisable

                        Default = 0x0

                        AEC 1 Leakage Period Disable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Leakage Period. Leakage is not disabled in this mode.  */
      unsigned int   aec_1LeakagePeriodDisable : 1;    /* 01.FAC8.2  R/W      Default = 0x0 */
                     /* AEC 1 Leakage Period Disable
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAC8.1 R/WSC AEC 1 Leakage Period Abort
                        AQ_Ch1AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_1LeakagePeriodAbort

                        Default = 0x0

                        AEC 1 Leakage Period Abort
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Abort Leakage Period  */
      unsigned int   aec_1LeakagePeriodAbort : 1;    /* 01.FAC8.1  R/WSC      Default = 0x0 */
                     /* AEC 1 Leakage Period Abort
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAC8.0 R/WSC AEC 1 Leakage Period Start
                        AQ_Ch1AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_1LeakagePeriodStart

                        Default = 0x0

                        AEC 1 Leakage Period Start
                        
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Start Leakage Period / Iteration   */
      unsigned int   aec_1LeakagePeriodStart : 1;    /* 01.FAC8.0  R/WSC      Default = 0x0 */
                     /* AEC 1 Leakage Period Start
                        
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAC9.F:0 R/W AEC 1 Leakage Period [F:0]
                        AQ_Ch1AecCueLeakagePeriodControl_CAL.u1.bits_1.aec_1LeakagePeriod

                        Default = 0x0000

                        AEC 1 Leakage Period
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                         Period in which it which leakage is repeated, reps.
                          */
      unsigned int   aec_1LeakagePeriod : 16;    /* 01.FAC9.F:0  R/W      Default = 0x0000 */
                     /* AEC 1 Leakage Period
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FACA.F:0 R/W AEC 1 Leakage Iteration [F:0]
                        AQ_Ch1AecCueLeakagePeriodControl_CAL.u2.bits_2.aec_1LeakageIteration

                        Default = 0x0000

                        AEC 1 Leakage Iterations
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Number of period iterations in which leakage is repeated, sets.
                        
                        If set to 0 the number of iteratios is free-running (unlimited) and the periodicity is dictated solely by the Leakage Period calculations.
                          */
      unsigned int   aec_1LeakageIteration : 16;    /* 01.FACA.F:0  R/W      Default = 0x0000 */
                     /* AEC 1 Leakage Iterations
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch1AecCueLeakagePeriodControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 AEC CUE Coefficient Scaling Control: 01.FACB */
/*                  CH1 AEC CUE Coefficient Scaling Control: 01.FACB */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 AEC CUE Coefficient Scaling Control */
  union
  {
    struct
    {
                    /*! \brief 01.FACB.F R/W AEC 1 Coefficient Scaling Shift Enable
                        AQ_Ch1AecCueCoefficientScalingControl_CAL.u0.bits_0.aec_1CoefficientScalingShiftEnable

                        Default = 0x0

                        AEC 1 Coeffcient Scaling Factor Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When enabled the will scale the internally stores 25 bits coefficients by shifting by the value specified by the customcoefficient round value.
                        
                        By default this feature is disabled and the internal coefficients are scaled to AEC 1 10 bits using a sign based shift rounding operation.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   aec_1CoefficientScalingShiftEnable : 1;    /* 01.FACB.F  R/W      Default = 0x0 */
                     /* AEC 1 Coeffcient Scaling Factor Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FACB.2:0 R/W AEC 1 Coefficient Scaling Shift Value [2:0]
                        AQ_Ch1AecCueCoefficientScalingControl_CAL.u0.bits_0.aec_1CoefficientScalingShiftValue

                        Default = 0x0

                        AEC 1 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Specifies the value to shift internal coefficient values from to reach the AEC 1 10 bit coefficient resolution.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   aec_1CoefficientScalingShiftValue : 3;    /* 01.FACB.2:0  R/W      Default = 0x0 */
                     /* AEC 1 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch1AecCueCoefficientScalingControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 AEC FIR Control: 01.FACC */
/*                  CH1 AEC FIR Control: 01.FACC */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 AEC FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FACC.F R/W AEC 1 FIR Clock Shape
                        AQ_Ch1AecFirControl_CAL.u0.bits_0.aec_1FirClockShape

                        Default = 0x0

                        1 = FIR reduce CTPC non-overlap time
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        If activated: Allows lower Vdd_min for slow silicon.  */
      unsigned int   aec_1FirClockShape : 1;    /* 01.FACC.F  R/W      Default = 0x0 */
                     /* 1 = FIR reduce CTPC non-overlap time
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FACC.E R/W AEC 1 FIR Force Wakeup
                        AQ_Ch1AecFirControl_CAL.u0.bits_0.aec_1FirForceWakeup

                        Default = 0x0

                        AEC 1 FIR force wakeup
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Allow internal hardware to selectively disable coefficient portions of logic for reduced powre consumption.  */
      unsigned int   aec_1FirForceWakeup : 1;    /* 01.FACC.E  R/W      Default = 0x0 */
                     /* AEC 1 FIR force wakeup
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FACC.D R/W AEC 1 FIR DFT Constant
                        AQ_Ch1AecFirControl_CAL.u0.bits_0.aec_1FirDftConstant

                        Default = 0x0

                        1 = FIR DFT constantVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Set to 1 during DFT test mode only.  */
      unsigned int   aec_1FirDftConstant : 1;    /* 01.FACC.D  R/W      Default = 0x0 */
                     /* 1 = FIR DFT constantVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FACC.C R/W AEC 1 FIR Clock Enable
                        AQ_Ch1AecFirControl_CAL.u0.bits_0.aec_1FirClockEnable

                        Default = 0x1

                        1 = FIR enable charge conservationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Low-power operation mode of FIR clock buffer.  */
      unsigned int   aec_1FirClockEnable : 1;    /* 01.FACC.C  R/W      Default = 0x1 */
                     /* 1 = FIR enable charge conservationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 12;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 AEC FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FACD.F R/WSC AEC 1 FIR Data Flush Enable
                        AQ_Ch1AecFirControl_CAL.u1.bits_1.aec_1FirDataFlushEnable

                        Default = 0x0

                        AEC 1 FIR Data Flush Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable FIR Data Flushing.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   aec_1FirDataFlushEnable : 1;    /* 01.FACD.F  R/WSC      Default = 0x0 */
                     /* AEC 1 FIR Data Flush Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FACE.8:0 R/W AEC 1 FIR Flush Data [8:0]
                        AQ_Ch1AecFirControl_CAL.u2.bits_2.aec_1FirFlushData

                        Default = 0x000

                        AEC 1 flush data
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Data value to flush FIR logic with. One element in the entire segment will be set with this value. All other taps in a given segment will be set to 0.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   aec_1FirFlushData : 9;    /* 01.FACE.8:0  R/W      Default = 0x000 */
                     /* AEC 1 flush data
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch1AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG0 AEC CUE Control: 01.FAD0 */
/*                  CH1 SEG0 AEC CUE Control: 01.FAD0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAD0.F R/W AEC 1 CUE Soft Reset Segment 0
                        AQ_Ch1Seg0AecCueControl_CAL.u0.bits_0.aec_1CueSoftResetSegment_0

                        Default = 0x0

                        AEC 1 CUE Soft Reset Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   aec_1CueSoftResetSegment_0 : 1;    /* 01.FAD0.F  R/W      Default = 0x0 */
                     /* AEC 1 CUE Soft Reset Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAD1.F R/W AEC 1 CUE Clock Gate Enable Segment 0
                        AQ_Ch1Seg0AecCueControl_CAL.u1.bits_1.aec_1CueClockGateEnableSegment_0

                        Default = 0x0

                        AEC 1 CUE Clock Gate Enable Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   aec_1CueClockGateEnableSegment_0 : 1;    /* 01.FAD1.F  R/W      Default = 0x0 */
                     /* AEC 1 CUE Clock Gate Enable Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAD2.F R/W AEC 1 CUE Freeze Enable Segment 0
                        AQ_Ch1Seg0AecCueControl_CAL.u2.bits_2.aec_1CueFreezeEnableSegment_0

                        Default = 0x1

                        AEC 1 CUE Freeze Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   aec_1CueFreezeEnableSegment_0 : 1;    /* 01.FAD2.F  R/W      Default = 0x1 */
                     /* AEC 1 CUE Freeze Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH1 SEG0 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FAD3.1:0 R/W AEC 1 CUE SRAM Power Gating Mode Segment 0 [1:0]
                        AQ_Ch1Seg0AecCueControl_CAL.u3.bits_3.aec_1CueSramPowerGatingModeSegment_0

                        Default = 0x0

                        AEC 1 CUE SRAM Power Gating Mode Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   aec_1CueSramPowerGatingModeSegment_0 : 2;    /* 01.FAD3.1:0  R/W      Default = 0x0 */
                     /* AEC 1 CUE SRAM Power Gating Mode Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH1 SEG0 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAD4.6:4 R/W AEC 1 CUE SRAM EMA Segment 0 [2:0]
                        AQ_Ch1Seg0AecCueControl_CAL.u4.bits_4.aec_1CueSramEmaSegment_0

                        Default = 0x3

                        AEC 1 CUE SRAM EMA Segment 0VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1CueSramEmaSegment_0 : 3;    /* 01.FAD4.6:4  R/W      Default = 0x3 */
                     /* AEC 1 CUE SRAM EMA Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD4.3:2 R/W AEC 1 CUE SRAM EMAW Segment 0 [1:0]
                        AQ_Ch1Seg0AecCueControl_CAL.u4.bits_4.aec_1CueSramEmawSegment_0

                        Default = 0x0

                        AEC 1 CUE SRAM EMAW Segment 0VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1CueSramEmawSegment_0 : 2;    /* 01.FAD4.3:2  R/W      Default = 0x0 */
                     /* AEC 1 CUE SRAM EMAW Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD4.1 R/W AEC 1 CUE SRAM EMAS Segment 0
                        AQ_Ch1Seg0AecCueControl_CAL.u4.bits_4.aec_1CueSramEmasSegment_0

                        Default = 0x0

                        AEC 1 CUE SRAM EMAS Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1CueSramEmasSegment_0 : 1;    /* 01.FAD4.1  R/W      Default = 0x0 */
                     /* AEC 1 CUE SRAM EMAS Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD4.0 R/W AEC 1 CUE SRAM RET1N Segment 0
                        AQ_Ch1Seg0AecCueControl_CAL.u4.bits_4.aec_1CueSramRet1nSegment_0

                        Default = 0x1

                        AEC 1 CUE SRAM RET1 Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1CueSramRet1nSegment_0 : 1;    /* 01.FAD4.0  R/W      Default = 0x1 */
                     /* AEC 1 CUE SRAM RET1 Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_Ch1Seg0AecCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG0 AEC CUE LMS Control: 01.FAD5 */
/*                  CH1 SEG0 AEC CUE LMS Control: 01.FAD5 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FAD5.2 R/W AEC 1 CUE Disable FIR Coefficient Data Valid Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u0.bits_0.aec_1CueDisableFirCoefficientDataValidSegment_0

                        Default = 0x0

                        AEC 1 CUE Disable FIR Coefficient Data Valid Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   aec_1CueDisableFirCoefficientDataValidSegment_0 : 1;    /* 01.FAD5.2  R/W      Default = 0x0 */
                     /* AEC 1 CUE Disable FIR Coefficient Data Valid Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD5.1 R/W AEC 1 CUE Adaptive FIR Send Coefficient Update Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u0.bits_0.aec_1CueAdaptiveFirSendCoefficientUpdateSegment_0

                        Default = 0x1

                        AEC 1 CUE Adaptive FIR Send Coefficient Update Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   aec_1CueAdaptiveFirSendCoefficientUpdateSegment_0 : 1;    /* 01.FAD5.1  R/W      Default = 0x1 */
                     /* AEC 1 CUE Adaptive FIR Send Coefficient Update Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD5.0 R/W AEC 1 CUE Disable Adpative CUE Coefficient Update Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u0.bits_0.aec_1CueDisableAdpativeCueCoefficientUpdateSegment_0

                        Default = 0x0

                        AEC 1 CUE Disable Adpative CUE Coefficient Update Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   aec_1CueDisableAdpativeCueCoefficientUpdateSegment_0 : 1;    /* 01.FAD5.0  R/W      Default = 0x0 */
                     /* AEC 1 CUE Disable Adpative CUE Coefficient Update Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAD6.F R/W AEC 1 CUE Mu Disable Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u1.bits_1.aec_1CueMuDisableSegment_0

                        Default = 0x0

                        Mu DisableVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   aec_1CueMuDisableSegment_0 : 1;    /* 01.FAD6.F  R/W      Default = 0x0 */
                     /* Mu DisableVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD6.E R/W AEC 1 CUE Data Boost Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u1.bits_1.aec_1CueDataBoostSegment_0

                        Default = 0x0

                        Data BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   aec_1CueDataBoostSegment_0 : 1;    /* 01.FAD6.E  R/W      Default = 0x0 */
                     /* Data BoostVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD6.D R/W AEC 1 CUE Mu Boost Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u1.bits_1.aec_1CueMuBoostSegment_0

                        Default = 0x0

                        Mu BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   aec_1CueMuBoostSegment_0 : 1;    /* 01.FAD6.D  R/W      Default = 0x0 */
                     /* Mu BoostVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAD6.3:0 R/WPD AEC 1 CUE Mu Segment 0 [3:0]
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u1.bits_1.aec_1CueMuSegment_0

                        Provisionable Default = 0x5

                        MuVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   aec_1CueMuSegment_0 : 4;    /* 01.FAD6.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* MuVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAD7.F R/WPD AEC 1 CUE Disable Beta Leakage Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u2.bits_2.aec_1CueDisableBetaLeakageSegment_0

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   aec_1CueDisableBetaLeakageSegment_0 : 1;    /* 01.FAD7.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD7.E R/WPD AEC 1 CUE Negate Beta Leakage Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u2.bits_2.aec_1CueNegateBetaLeakageSegment_0

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   aec_1CueNegateBetaLeakageSegment_0 : 1;    /* 01.FAD7.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAD7.4:0 R/WPD AEC 1 CUE Beta Leakage Segment 0 [4:0]
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u2.bits_2.aec_1CueBetaLeakageSegment_0

                        Provisionable Default = 0x08

                        Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   aec_1CueBetaLeakageSegment_0 : 5;    /* 01.FAD7.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH1 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAD8.F R/WPD AEC 1 CUE Disable Alpha Leakage Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u3.bits_3.aec_1CueDisableAlphaLeakageSegment_0

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   aec_1CueDisableAlphaLeakageSegment_0 : 1;    /* 01.FAD8.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD8.E R/WPD AEC 1 CUE Negate Alpha Leakage Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u3.bits_3.aec_1CueNegateAlphaLeakageSegment_0

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   aec_1CueNegateAlphaLeakageSegment_0 : 1;    /* 01.FAD8.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAD8.D R/WPD AEC 1 CUE Alpha Disable Leakage Round Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u3.bits_3.aec_1CueAlphaDisableLeakageRoundSegment_0

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   aec_1CueAlphaDisableLeakageRoundSegment_0 : 1;    /* 01.FAD8.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FAD8.4:0 R/WPD AEC 1 CUE Alpha Leakage Segment 0 [4:0]
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u3.bits_3.aec_1CueAlphaLeakageSegment_0

                        Provisionable Default = 0x10

                        Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   aec_1CueAlphaLeakageSegment_0 : 5;    /* 01.FAD8.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH1 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAD9.F R/W AEC 1 CUE Disable Mu Leakage Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u4.bits_4.aec_1CueDisableMuLeakageSegment_0

                        Default = 0x1

                        CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   aec_1CueDisableMuLeakageSegment_0 : 1;    /* 01.FAD9.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FAD9.3:0 R/WPD AEC 1 CUE Mu Leakage Segment 0 [3:0]
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u4.bits_4.aec_1CueMuLeakageSegment_0

                        Provisionable Default = 0x3

                        CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   aec_1CueMuLeakageSegment_0 : 4;    /* 01.FAD9.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of CH1 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FADA.F R/WPD AEC 1 CUE Coefficient Threshold Gate Enable Segment 0
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u5.bits_5.aec_1CueCoefficientThresholdGateEnableSegment_0

                        Provisionable Default = 0x0

                        AEC 1 CUE Coefficient Threshold Gate Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   aec_1CueCoefficientThresholdGateEnableSegment_0 : 1;    /* 01.FADA.F  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 1 CUE Coefficient Threshold Gate Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FADA.8:0 R/WPD AEC 1 CUE Coefficient Threshold Value Segment 0 [8:0]
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u5.bits_5.aec_1CueCoefficientThresholdValueSegment_0

                        Provisionable Default = 0x000

                        AEC 1 CUE Coefficient Threshold Value Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   aec_1CueCoefficientThresholdValueSegment_0 : 9;    /* 01.FADA.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* AEC 1 CUE Coefficient Threshold Value Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of CH1 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FADB.1:0 R/WPD AEC 1 CUE Coefficient Sub Segment Clear Segment 0 [1:0]
                        AQ_Ch1Seg0AecCueLmsControl_CAL.u6.bits_6.aec_1CueCoefficientSubSegmentClearSegment_0

                        Provisionable Default = 0x0

                        AEC 1 CUE Coefficient Sub Segment Clear Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   aec_1CueCoefficientSubSegmentClearSegment_0 : 2;    /* 01.FADB.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 1 CUE Coefficient Sub Segment Clear Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_Ch1Seg0AecCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG0 AEC FIR Control: 01.FAE0 */
/*                  CH1 SEG0 AEC FIR Control: 01.FAE0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FAE0.4:0 R/WPD AEC 1 FIR Power Down Segment 0 [4:0]
                        AQ_Ch1Seg0AecFirControl_CAL.u0.bits_0.aec_1FirPowerDownSegment_0

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Power down clocking for AEC coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   aec_1FirPowerDownSegment_0 : 5;    /* 01.FAE0.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FAE1.4 R/W AEC 1 FIR Gain 3 Enable Segment 0
                        AQ_Ch1Seg0AecFirControl_CAL.u1.bits_1.aec_1FirGain_3EnableSegment_0

                        Default = 0x0

                        AEC 1 FIR Gain 3 Enable Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   aec_1FirGain_3EnableSegment_0 : 1;    /* 01.FAE1.4  R/W      Default = 0x0 */
                     /* AEC 1 FIR Gain 3 Enable Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FAE1.2:0 R/W AEC 1 FIR Shift Segment 0 [2:0]
                        AQ_Ch1Seg0AecFirControl_CAL.u1.bits_1.aec_1FirShiftSegment_0

                        Default = 0x0

                        AEC 1 FIR Shift Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   aec_1FirShiftSegment_0 : 3;    /* 01.FAE1.2:0  R/W      Default = 0x0 */
                     /* AEC 1 FIR Shift Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FAE2.0 R/WSC AEC 1 FIR Global Flush Enable Segment 0
                        AQ_Ch1Seg0AecFirControl_CAL.u2.bits_2.aec_1FirGlobalFlushEnableSegment_0

                        Default = 0x0

                        AEC 1 FIR Global Flush Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   aec_1FirGlobalFlushEnableSegment_0 : 1;    /* 01.FAE2.0  R/WSC      Default = 0x0 */
                     /* AEC 1 FIR Global Flush Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch1Seg0AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG1 AEC CUE Control: 01.FAF0 */
/*                  CH1 SEG1 AEC CUE Control: 01.FAF0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAF0.F R/W AEC 1 CUE Soft Reset Segment 1
                        AQ_Ch1Seg1AecCueControl_CAL.u0.bits_0.aec_1CueSoftResetSegment_1

                        Default = 0x0

                        AEC 1 CUE Soft Reset Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   aec_1CueSoftResetSegment_1 : 1;    /* 01.FAF0.F  R/W      Default = 0x0 */
                     /* AEC 1 CUE Soft Reset Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAF1.F R/W AEC 1 CUE Clock Gate Enable Segment 1
                        AQ_Ch1Seg1AecCueControl_CAL.u1.bits_1.aec_1CueClockGateEnableSegment_1

                        Default = 0x0

                        AEC 1 CUE Clock Gate Enable Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   aec_1CueClockGateEnableSegment_1 : 1;    /* 01.FAF1.F  R/W      Default = 0x0 */
                     /* AEC 1 CUE Clock Gate Enable Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAF2.F R/W AEC 1 CUE Freeze Enable Segment 1
                        AQ_Ch1Seg1AecCueControl_CAL.u2.bits_2.aec_1CueFreezeEnableSegment_1

                        Default = 0x1

                        AEC 1 CUE Freeze Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   aec_1CueFreezeEnableSegment_1 : 1;    /* 01.FAF2.F  R/W      Default = 0x1 */
                     /* AEC 1 CUE Freeze Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH1 SEG1 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FAF3.1:0 R/W AEC 1 CUE SRAM Power Gating Mode Segment 1 [1:0]
                        AQ_Ch1Seg1AecCueControl_CAL.u3.bits_3.aec_1CueSramPowerGatingModeSegment_1

                        Default = 0x0

                        AEC 1 CUE SRAM Power Gating Mode Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   aec_1CueSramPowerGatingModeSegment_1 : 2;    /* 01.FAF3.1:0  R/W      Default = 0x0 */
                     /* AEC 1 CUE SRAM Power Gating Mode Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH1 SEG1 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAF4.6:4 R/W AEC 1 CUE SRAM EMA Segment 1 [2:0]
                        AQ_Ch1Seg1AecCueControl_CAL.u4.bits_4.aec_1CueSramEmaSegment_1

                        Default = 0x3

                        AEC 1 CUE SRAM EMA Segment 1VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1CueSramEmaSegment_1 : 3;    /* 01.FAF4.6:4  R/W      Default = 0x3 */
                     /* AEC 1 CUE SRAM EMA Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF4.3:2 R/W AEC 1 CUE SRAM EMAW Segment 1 [1:0]
                        AQ_Ch1Seg1AecCueControl_CAL.u4.bits_4.aec_1CueSramEmawSegment_1

                        Default = 0x0

                        AEC 1 CUE SRAM EMAW Segment 1VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1CueSramEmawSegment_1 : 2;    /* 01.FAF4.3:2  R/W      Default = 0x0 */
                     /* AEC 1 CUE SRAM EMAW Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF4.1 R/W AEC 1 CUE SRAM EMAS Segment 1
                        AQ_Ch1Seg1AecCueControl_CAL.u4.bits_4.aec_1CueSramEmasSegment_1

                        Default = 0x0

                        AEC 1 CUE SRAM EMAS Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1CueSramEmasSegment_1 : 1;    /* 01.FAF4.1  R/W      Default = 0x0 */
                     /* AEC 1 CUE SRAM EMAS Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF4.0 R/W AEC 1 CUE SRAM RET1N Segment 1
                        AQ_Ch1Seg1AecCueControl_CAL.u4.bits_4.aec_1CueSramRet1nSegment_1

                        Default = 0x1

                        AEC 1 CUE SRAM RET1 Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_1CueSramRet1nSegment_1 : 1;    /* 01.FAF4.0  R/W      Default = 0x1 */
                     /* AEC 1 CUE SRAM RET1 Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_Ch1Seg1AecCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG1 AEC CUE LMS Control: 01.FAF5 */
/*                  CH1 SEG1 AEC CUE LMS Control: 01.FAF5 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FAF5.2 R/W AEC 1 CUE Disable FIR Coefficient Data Valid Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u0.bits_0.aec_1CueDisableFirCoefficientDataValidSegment_1

                        Default = 0x0

                        AEC 1 CUE Disable FIR Coefficient Data Valid Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   aec_1CueDisableFirCoefficientDataValidSegment_1 : 1;    /* 01.FAF5.2  R/W      Default = 0x0 */
                     /* AEC 1 CUE Disable FIR Coefficient Data Valid Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF5.1 R/W AEC 1 CUE Adaptive FIR Send Coefficient Update Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u0.bits_0.aec_1CueAdaptiveFirSendCoefficientUpdateSegment_1

                        Default = 0x1

                        AEC 1 CUE Adaptive FIR Send Coefficient Update Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   aec_1CueAdaptiveFirSendCoefficientUpdateSegment_1 : 1;    /* 01.FAF5.1  R/W      Default = 0x1 */
                     /* AEC 1 CUE Adaptive FIR Send Coefficient Update Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
                    /*! \brief 01.FAF5.0 R/W AEC 1 CUE Disable Adpative CUE Coefficient Update Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u0.bits_0.aec_1CueDisableAdpativeCueCoefficientUpdateSegment_1

                        Default = 0x0

                        AEC 1 CUE Disable Adpative CUE Coefficient Update Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   aec_1CueDisableAdpativeCueCoefficientUpdateSegment_1 : 1;    /* 01.FAF5.0  R/W      Default = 0x0 */
                     /* AEC 1 CUE Disable Adpative CUE Coefficient Update Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAF6.F R/W AEC 1 CUE Mu Disable Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u1.bits_1.aec_1CueMuDisableSegment_1

                        Default = 0x0

                        Mu DisableVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   aec_1CueMuDisableSegment_1 : 1;    /* 01.FAF6.F  R/W      Default = 0x0 */
                     /* Mu DisableVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF6.E R/W AEC 1 CUE Data Boost Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u1.bits_1.aec_1CueDataBoostSegment_1

                        Default = 0x0

                        Data BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   aec_1CueDataBoostSegment_1 : 1;    /* 01.FAF6.E  R/W      Default = 0x0 */
                     /* Data BoostVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF6.D R/W AEC 1 CUE Mu Boost Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u1.bits_1.aec_1CueMuBoostSegment_1

                        Default = 0x0

                        Mu BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   aec_1CueMuBoostSegment_1 : 1;    /* 01.FAF6.D  R/W      Default = 0x0 */
                     /* Mu BoostVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAF6.3:0 R/WPD AEC 1 CUE Mu Segment 1 [3:0]
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u1.bits_1.aec_1CueMuSegment_1

                        Provisionable Default = 0x5

                        MuVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   aec_1CueMuSegment_1 : 4;    /* 01.FAF6.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* MuVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAF7.F R/WPD AEC 1 CUE Disable Beta Leakage Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u2.bits_2.aec_1CueDisableBetaLeakageSegment_1

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   aec_1CueDisableBetaLeakageSegment_1 : 1;    /* 01.FAF7.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF7.E R/WPD AEC 1 CUE Negate Beta Leakage Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u2.bits_2.aec_1CueNegateBetaLeakageSegment_1

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   aec_1CueNegateBetaLeakageSegment_1 : 1;    /* 01.FAF7.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FAF7.4:0 R/WPD AEC 1 CUE Beta Leakage Segment 1 [4:0]
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u2.bits_2.aec_1CueBetaLeakageSegment_1

                        Provisionable Default = 0x08

                        Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   aec_1CueBetaLeakageSegment_1 : 5;    /* 01.FAF7.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH1 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAF8.F R/WPD AEC 1 CUE Disable Alpha Leakage Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u3.bits_3.aec_1CueDisableAlphaLeakageSegment_1

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   aec_1CueDisableAlphaLeakageSegment_1 : 1;    /* 01.FAF8.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF8.E R/WPD AEC 1 CUE Negate Alpha Leakage Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u3.bits_3.aec_1CueNegateAlphaLeakageSegment_1

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   aec_1CueNegateAlphaLeakageSegment_1 : 1;    /* 01.FAF8.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FAF8.D R/WPD AEC 1 CUE Alpha Disable Leakage Round Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u3.bits_3.aec_1CueAlphaDisableLeakageRoundSegment_1

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   aec_1CueAlphaDisableLeakageRoundSegment_1 : 1;    /* 01.FAF8.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FAF8.4:0 R/WPD AEC 1 CUE Alpha Leakage Segment 1 [4:0]
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u3.bits_3.aec_1CueAlphaLeakageSegment_1

                        Provisionable Default = 0x10

                        Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   aec_1CueAlphaLeakageSegment_1 : 5;    /* 01.FAF8.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH1 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAF9.F R/W AEC 1 CUE Disable Mu Leakage Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u4.bits_4.aec_1CueDisableMuLeakageSegment_1

                        Default = 0x1

                        CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   aec_1CueDisableMuLeakageSegment_1 : 1;    /* 01.FAF9.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FAF9.3:0 R/WPD AEC 1 CUE Mu Leakage Segment 1 [3:0]
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u4.bits_4.aec_1CueMuLeakageSegment_1

                        Provisionable Default = 0x3

                        CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   aec_1CueMuLeakageSegment_1 : 4;    /* 01.FAF9.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of CH1 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FAFA.F R/WPD AEC 1 CUE Coefficient Threshold Gate Enable Segment 1
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u5.bits_5.aec_1CueCoefficientThresholdGateEnableSegment_1

                        Provisionable Default = 0x0

                        AEC 1 CUE Coefficient Threshold Gate Enable Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   aec_1CueCoefficientThresholdGateEnableSegment_1 : 1;    /* 01.FAFA.F  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 1 CUE Coefficient Threshold Gate Enable Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FAFA.8:0 R/WPD AEC 1 CUE Coefficient Threshold Value Segment 1 [8:0]
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u5.bits_5.aec_1CueCoefficientThresholdValueSegment_1

                        Provisionable Default = 0x000

                        AEC 1 CUE Coefficient Threshold Value Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   aec_1CueCoefficientThresholdValueSegment_1 : 9;    /* 01.FAFA.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* AEC 1 CUE Coefficient Threshold Value Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of CH1 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FAFB.1:0 R/WPD AEC 1 CUE Coefficient Sub Segment Clear Segment 1 [1:0]
                        AQ_Ch1Seg1AecCueLmsControl_CAL.u6.bits_6.aec_1CueCoefficientSubSegmentClearSegment_1

                        Provisionable Default = 0x0

                        AEC 1 CUE Coefficient Sub Segment Clear Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   aec_1CueCoefficientSubSegmentClearSegment_1 : 2;    /* 01.FAFB.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 1 CUE Coefficient Sub Segment Clear Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_Ch1Seg1AecCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG1 AEC FIR Control: 01.FB00 */
/*                  CH1 SEG1 AEC FIR Control: 01.FB00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB00.4:0 R/WPD AEC 1 FIR Power Down Segment 1 [4:0]
                        AQ_Ch1Seg1AecFirControl_CAL.u0.bits_0.aec_1FirPowerDownSegment_1

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Power down clocking for AEC coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   aec_1FirPowerDownSegment_1 : 5;    /* 01.FB00.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH1 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB01.4 R/W AEC 1 FIR Gain 3 Enable Segment 1
                        AQ_Ch1Seg1AecFirControl_CAL.u1.bits_1.aec_1FirGain_3EnableSegment_1

                        Default = 0x0

                        AEC 1 FIR Gain 3 Enable Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   aec_1FirGain_3EnableSegment_1 : 1;    /* 01.FB01.4  R/W      Default = 0x0 */
                     /* AEC 1 FIR Gain 3 Enable Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FB01.2:0 R/W AEC 1 FIR Shift Segment 1 [2:0]
                        AQ_Ch1Seg1AecFirControl_CAL.u1.bits_1.aec_1FirShiftSegment_1

                        Default = 0x0

                        AEC 1 FIR Shift Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   aec_1FirShiftSegment_1 : 3;    /* 01.FB01.2:0  R/W      Default = 0x0 */
                     /* AEC 1 FIR Shift Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH1 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FB02.0 R/W AEC 1 FIR Global Flush Enable Segment 1
                        AQ_Ch1Seg1AecFirControl_CAL.u2.bits_2.aec_1FirGlobalFlushEnableSegment_1

                        Default = 0x0

                        AEC 1 FIR Global Flush Enable Segment 1
                        
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   aec_1FirGlobalFlushEnableSegment_1 : 1;    /* 01.FB02.0  R/W      Default = 0x0 */
                     /* AEC 1 FIR Global Flush Enable Segment 1
                        
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch1Seg1AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 AEC CUE Mode Control: 01.FB10 */
/*                  CH2 AEC CUE Mode Control: 01.FB10 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 AEC CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB10.F R/W AEC 2 CUE Flush
                        AQ_Ch2AecCueModeControl_CAL.u0.bits_0.aec_2CueFlush

                        Default = 0x0

                        AEC 2 CUE Flush
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Flush AEC CUE Coeffcient Memory to all internal 25bit coefficient values of 0.
                        
                        It is recommended that all the segments be frozen when flushing.  */
      unsigned int   aec_2CueFlush : 1;    /* 01.FB10.F  R/W      Default = 0x0 */
                     /* AEC 2 CUE Flush
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 AEC CUE Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 AEC CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB12.F R/W AEC 2 Single Step
                        AQ_Ch2AecCueModeControl_CAL.u2.bits_2.aec_2SingleStep

                        Default = 0x0

                        A rising edge performs a single step coefficient updateVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Single Step. In this mode a single update to all taps will be performed.
                        
                        Also if leakage is enabled a single step of leakage is applied if leakage period is enabled.
                        
                        Note: Single step should only be enabled when all CUE segments are first put into freeze mode.  */
      unsigned int   aec_2SingleStep : 1;    /* 01.FB12.F  R/W      Default = 0x0 */
                     /* A rising edge performs a single step coefficient updateVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch2AecCueModeControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 AEC CUE Data Processor Control: 01.FB14 */
/*                  CH2 AEC CUE Data Processor Control: 01.FB14 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 AEC CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB14.F R/W AEC 2 Data Processor Random Delay Enable
                        AQ_Ch2AecCueDataProcessorControl_CAL.u0.bits_0.aec_2DataProcessorRandomDelayEnable

                        Default = 0x0

                        AEC 2 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Data Sampling Randomization
                        When downsampling incoming data. The specific point where the data is latched (and downsampled) can be skewed randomly.  */
      unsigned int   aec_2DataProcessorRandomDelayEnable : 1;    /* 01.FB14.F  R/W      Default = 0x0 */
                     /* AEC 2 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FB14.C:A R/W AEC 2 Data Processor Random Delay Value [2:0]
                        AQ_Ch2AecCueDataProcessorControl_CAL.u0.bits_0.aec_2DataProcessorRandomDelayValue

                        Default = 0x0

                        AEC 2 Data Processor Random Delay Value
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Data Latching Delay 
                        When data sampling randomization is disabled, software can optionally program the additional delay value, to allow for downsampling skew.  */
      unsigned int   aec_2DataProcessorRandomDelayValue : 3;    /* 01.FB14.C:A  R/W      Default = 0x0 */
                     /* AEC 2 Data Processor Random Delay Value
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 2;
                    /*! \brief 01.FB14.7:0 R/W AEC 2 Data Processor Delay [7:0]
                        AQ_Ch2AecCueDataProcessorControl_CAL.u0.bits_0.aec_2DataProcessorDelay

                        Default = 0x00

                        AEC 2 Data Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Data Processor Delay
                        Number of clock cycles (in DSP clock domain) to delay incoming data to the CUE/LMS logic so that it can be aligned with the input error.  */
      unsigned int   aec_2DataProcessorDelay : 8;    /* 01.FB14.7:0  R/W      Default = 0x00 */
                     /* AEC 2 Data Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 AEC CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB15.F R/W AEC 2 Data Processor Force Value Enable
                        AQ_Ch2AecCueDataProcessorControl_CAL.u1.bits_1.aec_2DataProcessorForceValueEnable

                        Default = 0x0

                        AEC 2 Data Processor Force Value Enable
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Force data input to a register specified value.
                        
                        For debug purposes only.  */
      unsigned int   aec_2DataProcessorForceValueEnable : 1;    /* 01.FB15.F  R/W      Default = 0x0 */
                     /* AEC 2 Data Processor Force Value Enable
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FB15.8:0 R/W AEC 2 Data Processor Force Value [8:0]
                        AQ_Ch2AecCueDataProcessorControl_CAL.u1.bits_1.aec_2DataProcessorForceValue

                        Default = 0x000

                        AEC 2 Data Processor Force Value
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Value to force input FIR/CUE data to when enabled.
                        
                        For debug purposes only.  */
      unsigned int   aec_2DataProcessorForceValue : 9;    /* 01.FB15.8:0  R/W      Default = 0x000 */
                     /* AEC 2 Data Processor Force Value
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Ch2AecCueDataProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 AEC CUE Error Processor Control: 01.FB16 */
/*                  CH2 AEC CUE Error Processor Control: 01.FB16 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 AEC CUE Error Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB16.F R/WPD AEC 2 Invert Error
                        AQ_Ch2AecCueErrorProcessorControl_CAL.u0.bits_0.aec_2InvertError

                        Provisionable Default = 0x0

                        1 = Invert Error Signal
                        0 = Normal operationVLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2InvertError : 1;    /* 01.FB16.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Invert Error Signal
                        0 = Normal operationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 10;
                    /*! \brief 01.FB16.4:0 R/W AEC 2 Error Processor Delay [4:0]
                        AQ_Ch2AecCueErrorProcessorControl_CAL.u0.bits_0.aec_2ErrorProcessorDelay

                        Default = 0x00

                        AEC 2 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Valid Range is from 0-24  */
      unsigned int   aec_2ErrorProcessorDelay : 5;    /* 01.FB16.4:0  R/W      Default = 0x00 */
                     /* AEC 2 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 AEC CUE Error Processor Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB17.4:0 R/W AEC 2 Error Processor Delay Segment 1 [4:0]
                        AQ_Ch2AecCueErrorProcessorControl_CAL.u1.bits_1.aec_2ErrorProcessorDelaySegment_1

                        Default = 0x01

                        AEC 2 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Note this register is only used in 64 Tap Mode and applies this error/data proc delay to segment 1. This register overrides the general Error Process Delay register in this mode.
                        
                        Valid Range is from 0-24  */
      unsigned int   aec_2ErrorProcessorDelaySegment_1 : 5;    /* 01.FB17.4:0  R/W      Default = 0x01 */
                     /* AEC 2 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Ch2AecCueErrorProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 AEC CUE Leakage Period Control: 01.FB18 */
/*                  CH2 AEC CUE Leakage Period Control: 01.FB18 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FB18.3 R/W AEC 2 Leakage Disable
                        AQ_Ch2AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_2LeakageDisable

                        Default = 0x0

                        AEC 2 Leakage Disable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global disable of leakage in CUE LMS algorithm on all segments.
                        
                        This forces leakage to be disabled regardless of values set for leakage period of segment-specific alpha/beta leakage disable.  */
      unsigned int   aec_2LeakageDisable : 1;    /* 01.FB18.3  R/W      Default = 0x0 */
                     /* AEC 2 Leakage Disable
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB18.2 R/W AEC 2 Leakage Period Disable
                        AQ_Ch2AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_2LeakagePeriodDisable

                        Default = 0x0

                        AEC 2 Leakage Period Disable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Leakage Period. Leakage is not disabled in this mode.  */
      unsigned int   aec_2LeakagePeriodDisable : 1;    /* 01.FB18.2  R/W      Default = 0x0 */
                     /* AEC 2 Leakage Period Disable
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB18.1 R/WSC AEC 2 Leakage Period Abort
                        AQ_Ch2AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_2LeakagePeriodAbort

                        Default = 0x0

                        AEC 2 Leakage Period Abort
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Abort Leakage Period  */
      unsigned int   aec_2LeakagePeriodAbort : 1;    /* 01.FB18.1  R/WSC      Default = 0x0 */
                     /* AEC 2 Leakage Period Abort
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB18.0 R/WSC AEC 2 Leakage Period Start
                        AQ_Ch2AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_2LeakagePeriodStart

                        Default = 0x0

                        AEC 2 Leakage Period Start
                        
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Start Leakage Period / Iteration   */
      unsigned int   aec_2LeakagePeriodStart : 1;    /* 01.FB18.0  R/WSC      Default = 0x0 */
                     /* AEC 2 Leakage Period Start
                        
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB19.F:0 R/W AEC 2 Leakage Period [F:0]
                        AQ_Ch2AecCueLeakagePeriodControl_CAL.u1.bits_1.aec_2LeakagePeriod

                        Default = 0x0000

                        AEC 2 Leakage Period
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                         Period in which it which leakage is repeated, reps.
                          */
      unsigned int   aec_2LeakagePeriod : 16;    /* 01.FB19.F:0  R/W      Default = 0x0000 */
                     /* AEC 2 Leakage Period
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB1A.F:0 R/W AEC 2 Leakage Iteration [F:0]
                        AQ_Ch2AecCueLeakagePeriodControl_CAL.u2.bits_2.aec_2LeakageIteration

                        Default = 0x0000

                        AEC 2 Leakage Iterations
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Number of period iterations in which leakage is repeated, sets.
                        
                        If set to 0 the number of iteratios is free-running (unlimited) and the periodicity is dictated solely by the Leakage Period calculations.
                          */
      unsigned int   aec_2LeakageIteration : 16;    /* 01.FB1A.F:0  R/W      Default = 0x0000 */
                     /* AEC 2 Leakage Iterations
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch2AecCueLeakagePeriodControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 AEC CUE Coefficient Scaling Control: 01.FB1B */
/*                  CH2 AEC CUE Coefficient Scaling Control: 01.FB1B */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 AEC CUE Coefficient Scaling Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB1B.F R/W AEC 2 Coefficient Scaling Shift Enable
                        AQ_Ch2AecCueCoefficientScalingControl_CAL.u0.bits_0.aec_2CoefficientScalingShiftEnable

                        Default = 0x0

                        AEC 2 Coeffcient Scaling Factor Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When enabled the will scale the internally stores 25 bits coefficients by shifting by the value specified by the customcoefficient round value.
                        
                        By default this feature is disabled and the internal coefficients are scaled to AEC 2 10 bits using a sign based shift rounding operation.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   aec_2CoefficientScalingShiftEnable : 1;    /* 01.FB1B.F  R/W      Default = 0x0 */
                     /* AEC 2 Coeffcient Scaling Factor Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FB1B.2:0 R/W AEC 2 Coefficient Scaling Shift Value [2:0]
                        AQ_Ch2AecCueCoefficientScalingControl_CAL.u0.bits_0.aec_2CoefficientScalingShiftValue

                        Default = 0x0

                        AEC 2 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Specifies the value to shift internal coefficient values from to reach the AEC 2 10 bit coefficient resolution.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   aec_2CoefficientScalingShiftValue : 3;    /* 01.FB1B.2:0  R/W      Default = 0x0 */
                     /* AEC 2 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch2AecCueCoefficientScalingControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 AEC FIR Control: 01.FB1C */
/*                  CH2 AEC FIR Control: 01.FB1C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 AEC FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB1C.F R/W AEC 2 FIR Clock Shape
                        AQ_Ch2AecFirControl_CAL.u0.bits_0.aec_2FirClockShape

                        Default = 0x0

                        1 = FIR reduce CTPC non-overlap time
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        If activated: Allows lower Vdd_min for slow silicon.  */
      unsigned int   aec_2FirClockShape : 1;    /* 01.FB1C.F  R/W      Default = 0x0 */
                     /* 1 = FIR reduce CTPC non-overlap time
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB1C.E R/W AEC 2 FIR Force Wakeup
                        AQ_Ch2AecFirControl_CAL.u0.bits_0.aec_2FirForceWakeup

                        Default = 0x0

                        AEC 2 FIR force wakeup
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Allow internal hardware to selectively disable coefficient portions of logic for reduced powre consumption.  */
      unsigned int   aec_2FirForceWakeup : 1;    /* 01.FB1C.E  R/W      Default = 0x0 */
                     /* AEC 2 FIR force wakeup
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB1C.D R/W AEC 2 FIR DFT Constant
                        AQ_Ch2AecFirControl_CAL.u0.bits_0.aec_2FirDftConstant

                        Default = 0x0

                        1 = FIR DFT constantVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Set to 1 during DFT test mode only.  */
      unsigned int   aec_2FirDftConstant : 1;    /* 01.FB1C.D  R/W      Default = 0x0 */
                     /* 1 = FIR DFT constantVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB1C.C R/W AEC 2 FIR Clock Enable
                        AQ_Ch2AecFirControl_CAL.u0.bits_0.aec_2FirClockEnable

                        Default = 0x1

                        1 = FIR enable charge conservationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Low-power operation mode of FIR clock buffer.  */
      unsigned int   aec_2FirClockEnable : 1;    /* 01.FB1C.C  R/W      Default = 0x1 */
                     /* 1 = FIR enable charge conservationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 12;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 AEC FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB1D.F R/WSC AEC 2 FIR Data Flush Enable
                        AQ_Ch2AecFirControl_CAL.u1.bits_1.aec_2FirDataFlushEnable

                        Default = 0x0

                        AEC 2 FIR Data Flush Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable FIR Data Flushing.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   aec_2FirDataFlushEnable : 1;    /* 01.FB1D.F  R/WSC      Default = 0x0 */
                     /* AEC 2 FIR Data Flush Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FB1E.8:0 R/W AEC 2 FIR Flush Data [8:0]
                        AQ_Ch2AecFirControl_CAL.u2.bits_2.aec_2FirFlushData

                        Default = 0x000

                        AEC 2 flush data
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Data value to flush FIR logic with. One element in the entire segment will be set with this value. All other taps in a given segment will be set to 0.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   aec_2FirFlushData : 9;    /* 01.FB1E.8:0  R/W      Default = 0x000 */
                     /* AEC 2 flush data
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch2AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG0 AEC CUE Control: 01.FB20 */
/*                  CH2 SEG0 AEC CUE Control: 01.FB20 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB20.F R/W AEC 2 CUE Soft Reset Segment 0
                        AQ_Ch2Seg0AecCueControl_CAL.u0.bits_0.aec_2CueSoftResetSegment_0

                        Default = 0x0

                        AEC 2 CUE Soft Reset Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   aec_2CueSoftResetSegment_0 : 1;    /* 01.FB20.F  R/W      Default = 0x0 */
                     /* AEC 2 CUE Soft Reset Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB21.F R/W AEC 2 CUE Clock Gate Enable Segment 0
                        AQ_Ch2Seg0AecCueControl_CAL.u1.bits_1.aec_2CueClockGateEnableSegment_0

                        Default = 0x0

                        AEC 2 CUE Clock Gate Enable Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   aec_2CueClockGateEnableSegment_0 : 1;    /* 01.FB21.F  R/W      Default = 0x0 */
                     /* AEC 2 CUE Clock Gate Enable Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB22.F R/W AEC 2 CUE Freeze Enable Segment 0
                        AQ_Ch2Seg0AecCueControl_CAL.u2.bits_2.aec_2CueFreezeEnableSegment_0

                        Default = 0x1

                        AEC 2 CUE Freeze Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   aec_2CueFreezeEnableSegment_0 : 1;    /* 01.FB22.F  R/W      Default = 0x1 */
                     /* AEC 2 CUE Freeze Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH2 SEG0 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FB23.1:0 R/W AEC 2 CUE SRAM Power Gating Mode Segment 0 [1:0]
                        AQ_Ch2Seg0AecCueControl_CAL.u3.bits_3.aec_2CueSramPowerGatingModeSegment_0

                        Default = 0x0

                        AEC 2 CUE SRAM Power Gating Mode Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   aec_2CueSramPowerGatingModeSegment_0 : 2;    /* 01.FB23.1:0  R/W      Default = 0x0 */
                     /* AEC 2 CUE SRAM Power Gating Mode Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH2 SEG0 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB24.6:4 R/W AEC 2 CUE SRAM EMA Segment 0 [2:0]
                        AQ_Ch2Seg0AecCueControl_CAL.u4.bits_4.aec_2CueSramEmaSegment_0

                        Default = 0x3

                        AEC 2 CUE SRAM EMA Segment 0VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2CueSramEmaSegment_0 : 3;    /* 01.FB24.6:4  R/W      Default = 0x3 */
                     /* AEC 2 CUE SRAM EMA Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB24.3:2 R/W AEC 2 CUE SRAM EMAW Segment 0 [1:0]
                        AQ_Ch2Seg0AecCueControl_CAL.u4.bits_4.aec_2CueSramEmawSegment_0

                        Default = 0x0

                        AEC 2 CUE SRAM EMAW Segment 0VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2CueSramEmawSegment_0 : 2;    /* 01.FB24.3:2  R/W      Default = 0x0 */
                     /* AEC 2 CUE SRAM EMAW Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB24.1 R/W AEC 2 CUE SRAM EMAS Segment 0
                        AQ_Ch2Seg0AecCueControl_CAL.u4.bits_4.aec_2CueSramEmasSegment_0

                        Default = 0x0

                        AEC 2 CUE SRAM EMAS Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2CueSramEmasSegment_0 : 1;    /* 01.FB24.1  R/W      Default = 0x0 */
                     /* AEC 2 CUE SRAM EMAS Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB24.0 R/W AEC 2 CUE SRAM RET1N Segment 0
                        AQ_Ch2Seg0AecCueControl_CAL.u4.bits_4.aec_2CueSramRet1nSegment_0

                        Default = 0x1

                        AEC 2 CUE SRAM RET1 Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2CueSramRet1nSegment_0 : 1;    /* 01.FB24.0  R/W      Default = 0x1 */
                     /* AEC 2 CUE SRAM RET1 Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_Ch2Seg0AecCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG0 AEC CUE LMS Control: 01.FB25 */
/*                  CH2 SEG0 AEC CUE LMS Control: 01.FB25 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FB25.2 R/W AEC 2 CUE Disable FIR Coefficient Data Valid Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u0.bits_0.aec_2CueDisableFirCoefficientDataValidSegment_0

                        Default = 0x0

                        AEC 2 CUE Disable FIR Coefficient Data Valid Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   aec_2CueDisableFirCoefficientDataValidSegment_0 : 1;    /* 01.FB25.2  R/W      Default = 0x0 */
                     /* AEC 2 CUE Disable FIR Coefficient Data Valid Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB25.1 R/W AEC 2 CUE Adaptive FIR Send Coefficient Update Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u0.bits_0.aec_2CueAdaptiveFirSendCoefficientUpdateSegment_0

                        Default = 0x1

                        AEC 2 CUE Adaptive FIR Send Coefficient Update Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   aec_2CueAdaptiveFirSendCoefficientUpdateSegment_0 : 1;    /* 01.FB25.1  R/W      Default = 0x1 */
                     /* AEC 2 CUE Adaptive FIR Send Coefficient Update Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB25.0 R/W AEC 2 CUE Disable Adpative CUE Coefficient Update Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u0.bits_0.aec_2CueDisableAdpativeCueCoefficientUpdateSegment_0

                        Default = 0x0

                        AEC 2 CUE Disable Adpative CUE Coefficient Update Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   aec_2CueDisableAdpativeCueCoefficientUpdateSegment_0 : 1;    /* 01.FB25.0  R/W      Default = 0x0 */
                     /* AEC 2 CUE Disable Adpative CUE Coefficient Update Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB26.F R/W AEC 2 CUE Mu Disable Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u1.bits_1.aec_2CueMuDisableSegment_0

                        Default = 0x0

                        Mu DisableVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   aec_2CueMuDisableSegment_0 : 1;    /* 01.FB26.F  R/W      Default = 0x0 */
                     /* Mu DisableVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB26.E R/W AEC 2 CUE Data Boost Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u1.bits_1.aec_2CueDataBoostSegment_0

                        Default = 0x0

                        Data BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   aec_2CueDataBoostSegment_0 : 1;    /* 01.FB26.E  R/W      Default = 0x0 */
                     /* Data BoostVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB26.D R/W AEC 2 CUE Mu Boost Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u1.bits_1.aec_2CueMuBoostSegment_0

                        Default = 0x0

                        Mu BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   aec_2CueMuBoostSegment_0 : 1;    /* 01.FB26.D  R/W      Default = 0x0 */
                     /* Mu BoostVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB26.3:0 R/WPD AEC 2 CUE Mu Segment 0 [3:0]
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u1.bits_1.aec_2CueMuSegment_0

                        Provisionable Default = 0x5

                        MuVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   aec_2CueMuSegment_0 : 4;    /* 01.FB26.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* MuVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB27.F R/WPD AEC 2 CUE Disable Beta Leakage Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u2.bits_2.aec_2CueDisableBetaLeakageSegment_0

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   aec_2CueDisableBetaLeakageSegment_0 : 1;    /* 01.FB27.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB27.E R/WPD AEC 2 CUE Negate Beta Leakage Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u2.bits_2.aec_2CueNegateBetaLeakageSegment_0

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   aec_2CueNegateBetaLeakageSegment_0 : 1;    /* 01.FB27.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB27.4:0 R/WPD AEC 2 CUE Beta Leakage Segment 0 [4:0]
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u2.bits_2.aec_2CueBetaLeakageSegment_0

                        Provisionable Default = 0x08

                        Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   aec_2CueBetaLeakageSegment_0 : 5;    /* 01.FB27.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH2 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB28.F R/WPD AEC 2 CUE Disable Alpha Leakage Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u3.bits_3.aec_2CueDisableAlphaLeakageSegment_0

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   aec_2CueDisableAlphaLeakageSegment_0 : 1;    /* 01.FB28.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB28.E R/WPD AEC 2 CUE Negate Alpha Leakage Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u3.bits_3.aec_2CueNegateAlphaLeakageSegment_0

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   aec_2CueNegateAlphaLeakageSegment_0 : 1;    /* 01.FB28.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB28.D R/WPD AEC 2 CUE Alpha Disable Leakage Round Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u3.bits_3.aec_2CueAlphaDisableLeakageRoundSegment_0

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   aec_2CueAlphaDisableLeakageRoundSegment_0 : 1;    /* 01.FB28.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FB28.4:0 R/WPD AEC 2 CUE Alpha Leakage Segment 0 [4:0]
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u3.bits_3.aec_2CueAlphaLeakageSegment_0

                        Provisionable Default = 0x10

                        Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   aec_2CueAlphaLeakageSegment_0 : 5;    /* 01.FB28.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH2 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB29.F R/W AEC 2 CUE Disable Mu Leakage Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u4.bits_4.aec_2CueDisableMuLeakageSegment_0

                        Default = 0x1

                        CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   aec_2CueDisableMuLeakageSegment_0 : 1;    /* 01.FB29.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB29.3:0 R/WPD AEC 2 CUE Mu Leakage Segment 0 [3:0]
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u4.bits_4.aec_2CueMuLeakageSegment_0

                        Provisionable Default = 0x3

                        CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   aec_2CueMuLeakageSegment_0 : 4;    /* 01.FB29.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of CH2 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB2A.F R/WPD AEC 2 CUE Coefficient Threshold Gate Enable Segment 0
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u5.bits_5.aec_2CueCoefficientThresholdGateEnableSegment_0

                        Provisionable Default = 0x0

                        AEC 2 CUE Coefficient Threshold Gate Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   aec_2CueCoefficientThresholdGateEnableSegment_0 : 1;    /* 01.FB2A.F  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 2 CUE Coefficient Threshold Gate Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FB2A.8:0 R/WPD AEC 2 CUE Coefficient Threshold Value Segment 0 [8:0]
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u5.bits_5.aec_2CueCoefficientThresholdValueSegment_0

                        Provisionable Default = 0x000

                        AEC 2 CUE Coefficient Threshold Value Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   aec_2CueCoefficientThresholdValueSegment_0 : 9;    /* 01.FB2A.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* AEC 2 CUE Coefficient Threshold Value Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of CH2 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FB2B.1:0 R/WPD AEC 2 CUE Coefficient Sub Segment Clear Segment 0 [1:0]
                        AQ_Ch2Seg0AecCueLmsControl_CAL.u6.bits_6.aec_2CueCoefficientSubSegmentClearSegment_0

                        Provisionable Default = 0x0

                        AEC 2 CUE Coefficient Sub Segment Clear Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   aec_2CueCoefficientSubSegmentClearSegment_0 : 2;    /* 01.FB2B.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 2 CUE Coefficient Sub Segment Clear Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_Ch2Seg0AecCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG0 AEC FIR Control: 01.FB30 */
/*                  CH2 SEG0 AEC FIR Control: 01.FB30 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB30.4:0 R/WPD AEC 2 FIR Power Down Segment 0 [4:0]
                        AQ_Ch2Seg0AecFirControl_CAL.u0.bits_0.aec_2FirPowerDownSegment_0

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Power down clocking for AEC coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   aec_2FirPowerDownSegment_0 : 5;    /* 01.FB30.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB31.4 R/W AEC 2 FIR Gain 3 Enable Segment 0
                        AQ_Ch2Seg0AecFirControl_CAL.u1.bits_1.aec_2FirGain_3EnableSegment_0

                        Default = 0x0

                        AEC 2 FIR Gain 3 Enable Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   aec_2FirGain_3EnableSegment_0 : 1;    /* 01.FB31.4  R/W      Default = 0x0 */
                     /* AEC 2 FIR Gain 3 Enable Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FB31.2:0 R/W AEC 2 FIR Shift Segment 0 [2:0]
                        AQ_Ch2Seg0AecFirControl_CAL.u1.bits_1.aec_2FirShiftSegment_0

                        Default = 0x0

                        AEC 2 FIR Shift Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   aec_2FirShiftSegment_0 : 3;    /* 01.FB31.2:0  R/W      Default = 0x0 */
                     /* AEC 2 FIR Shift Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FB32.0 R/WSC AEC 2 FIR Global Flush Enable Segment 0
                        AQ_Ch2Seg0AecFirControl_CAL.u2.bits_2.aec_2FirGlobalFlushEnableSegment_0

                        Default = 0x0

                        AEC 2 FIR Global Flush Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   aec_2FirGlobalFlushEnableSegment_0 : 1;    /* 01.FB32.0  R/WSC      Default = 0x0 */
                     /* AEC 2 FIR Global Flush Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch2Seg0AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG1 AEC CUE Control: 01.FB40 */
/*                  CH2 SEG1 AEC CUE Control: 01.FB40 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB40.F R/W AEC 2 CUE Soft Reset Segment 1
                        AQ_Ch2Seg1AecCueControl_CAL.u0.bits_0.aec_2CueSoftResetSegment_1

                        Default = 0x0

                        AEC 2 CUE Soft Reset Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   aec_2CueSoftResetSegment_1 : 1;    /* 01.FB40.F  R/W      Default = 0x0 */
                     /* AEC 2 CUE Soft Reset Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB41.F R/W AEC 2 CUE Clock Gate Enable Segment 1
                        AQ_Ch2Seg1AecCueControl_CAL.u1.bits_1.aec_2CueClockGateEnableSegment_1

                        Default = 0x0

                        AEC 2 CUE Clock Gate Enable Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   aec_2CueClockGateEnableSegment_1 : 1;    /* 01.FB41.F  R/W      Default = 0x0 */
                     /* AEC 2 CUE Clock Gate Enable Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB42.F R/W AEC 2 CUE Freeze Enable Segment 1
                        AQ_Ch2Seg1AecCueControl_CAL.u2.bits_2.aec_2CueFreezeEnableSegment_1

                        Default = 0x1

                        AEC 2 CUE Freeze Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   aec_2CueFreezeEnableSegment_1 : 1;    /* 01.FB42.F  R/W      Default = 0x1 */
                     /* AEC 2 CUE Freeze Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH2 SEG1 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FB43.1:0 R/W AEC 2 CUE SRAM Power Gating Mode Segment 1 [1:0]
                        AQ_Ch2Seg1AecCueControl_CAL.u3.bits_3.aec_2CueSramPowerGatingModeSegment_1

                        Default = 0x0

                        AEC 2 CUE SRAM Power Gating Mode Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   aec_2CueSramPowerGatingModeSegment_1 : 2;    /* 01.FB43.1:0  R/W      Default = 0x0 */
                     /* AEC 2 CUE SRAM Power Gating Mode Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH2 SEG1 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB44.6:4 R/W AEC 2 CUE SRAM EMA Segment 1 [2:0]
                        AQ_Ch2Seg1AecCueControl_CAL.u4.bits_4.aec_2CueSramEmaSegment_1

                        Default = 0x3

                        AEC 2 CUE SRAM EMA Segment 1VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2CueSramEmaSegment_1 : 3;    /* 01.FB44.6:4  R/W      Default = 0x3 */
                     /* AEC 2 CUE SRAM EMA Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB44.3:2 R/W AEC 2 CUE SRAM EMAW Segment 1 [1:0]
                        AQ_Ch2Seg1AecCueControl_CAL.u4.bits_4.aec_2CueSramEmawSegment_1

                        Default = 0x0

                        AEC 2 CUE SRAM EMAW Segment 1VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2CueSramEmawSegment_1 : 2;    /* 01.FB44.3:2  R/W      Default = 0x0 */
                     /* AEC 2 CUE SRAM EMAW Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB44.1 R/W AEC 2 CUE SRAM EMAS Segment 1
                        AQ_Ch2Seg1AecCueControl_CAL.u4.bits_4.aec_2CueSramEmasSegment_1

                        Default = 0x0

                        AEC 2 CUE SRAM EMAS Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2CueSramEmasSegment_1 : 1;    /* 01.FB44.1  R/W      Default = 0x0 */
                     /* AEC 2 CUE SRAM EMAS Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB44.0 R/W AEC 2 CUE SRAM RET1N Segment 1
                        AQ_Ch2Seg1AecCueControl_CAL.u4.bits_4.aec_2CueSramRet1nSegment_1

                        Default = 0x1

                        AEC 2 CUE SRAM RET1 Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_2CueSramRet1nSegment_1 : 1;    /* 01.FB44.0  R/W      Default = 0x1 */
                     /* AEC 2 CUE SRAM RET1 Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_Ch2Seg1AecCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG1 AEC CUE LMS Control: 01.FB45 */
/*                  CH2 SEG1 AEC CUE LMS Control: 01.FB45 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FB45.2 R/W AEC 2 CUE Disable FIR Coefficient Data Valid Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u0.bits_0.aec_2CueDisableFirCoefficientDataValidSegment_1

                        Default = 0x0

                        AEC 2 CUE Disable FIR Coefficient Data Valid Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   aec_2CueDisableFirCoefficientDataValidSegment_1 : 1;    /* 01.FB45.2  R/W      Default = 0x0 */
                     /* AEC 2 CUE Disable FIR Coefficient Data Valid Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB45.1 R/W AEC 2 CUE Adaptive FIR Send Coefficient Update Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u0.bits_0.aec_2CueAdaptiveFirSendCoefficientUpdateSegment_1

                        Default = 0x1

                        AEC 2 CUE Adaptive FIR Send Coefficient Update Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   aec_2CueAdaptiveFirSendCoefficientUpdateSegment_1 : 1;    /* 01.FB45.1  R/W      Default = 0x1 */
                     /* AEC 2 CUE Adaptive FIR Send Coefficient Update Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
                    /*! \brief 01.FB45.0 R/W AEC 2 CUE Disable Adpative CUE Coefficient Update Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u0.bits_0.aec_2CueDisableAdpativeCueCoefficientUpdateSegment_1

                        Default = 0x0

                        AEC 2 CUE Disable Adpative CUE Coefficient Update Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   aec_2CueDisableAdpativeCueCoefficientUpdateSegment_1 : 1;    /* 01.FB45.0  R/W      Default = 0x0 */
                     /* AEC 2 CUE Disable Adpative CUE Coefficient Update Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB46.F R/W AEC 2 CUE Mu Disable Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u1.bits_1.aec_2CueMuDisableSegment_1

                        Default = 0x0

                        Mu DisableVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   aec_2CueMuDisableSegment_1 : 1;    /* 01.FB46.F  R/W      Default = 0x0 */
                     /* Mu DisableVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB46.E R/W AEC 2 CUE Data Boost Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u1.bits_1.aec_2CueDataBoostSegment_1

                        Default = 0x0

                        Data BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   aec_2CueDataBoostSegment_1 : 1;    /* 01.FB46.E  R/W      Default = 0x0 */
                     /* Data BoostVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB46.D R/W AEC 2 CUE Mu Boost Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u1.bits_1.aec_2CueMuBoostSegment_1

                        Default = 0x0

                        Mu BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   aec_2CueMuBoostSegment_1 : 1;    /* 01.FB46.D  R/W      Default = 0x0 */
                     /* Mu BoostVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB46.3:0 R/WPD AEC 2 CUE Mu Segment 1 [3:0]
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u1.bits_1.aec_2CueMuSegment_1

                        Provisionable Default = 0x5

                        MuVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   aec_2CueMuSegment_1 : 4;    /* 01.FB46.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* MuVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB47.F R/WPD AEC 2 CUE Disable Beta Leakage Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u2.bits_2.aec_2CueDisableBetaLeakageSegment_1

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   aec_2CueDisableBetaLeakageSegment_1 : 1;    /* 01.FB47.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB47.E R/WPD AEC 2 CUE Negate Beta Leakage Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u2.bits_2.aec_2CueNegateBetaLeakageSegment_1

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   aec_2CueNegateBetaLeakageSegment_1 : 1;    /* 01.FB47.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB47.4:0 R/WPD AEC 2 CUE Beta Leakage Segment 1 [4:0]
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u2.bits_2.aec_2CueBetaLeakageSegment_1

                        Provisionable Default = 0x08

                        Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   aec_2CueBetaLeakageSegment_1 : 5;    /* 01.FB47.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH2 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB48.F R/WPD AEC 2 CUE Disable Alpha Leakage Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u3.bits_3.aec_2CueDisableAlphaLeakageSegment_1

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   aec_2CueDisableAlphaLeakageSegment_1 : 1;    /* 01.FB48.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB48.E R/WPD AEC 2 CUE Negate Alpha Leakage Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u3.bits_3.aec_2CueNegateAlphaLeakageSegment_1

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   aec_2CueNegateAlphaLeakageSegment_1 : 1;    /* 01.FB48.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB48.D R/WPD AEC 2 CUE Alpha Disable Leakage Round Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u3.bits_3.aec_2CueAlphaDisableLeakageRoundSegment_1

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   aec_2CueAlphaDisableLeakageRoundSegment_1 : 1;    /* 01.FB48.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FB48.4:0 R/WPD AEC 2 CUE Alpha Leakage Segment 1 [4:0]
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u3.bits_3.aec_2CueAlphaLeakageSegment_1

                        Provisionable Default = 0x10

                        Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   aec_2CueAlphaLeakageSegment_1 : 5;    /* 01.FB48.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH2 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB49.F R/W AEC 2 CUE Disable Mu Leakage Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u4.bits_4.aec_2CueDisableMuLeakageSegment_1

                        Default = 0x1

                        CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   aec_2CueDisableMuLeakageSegment_1 : 1;    /* 01.FB49.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB49.3:0 R/WPD AEC 2 CUE Mu Leakage Segment 1 [3:0]
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u4.bits_4.aec_2CueMuLeakageSegment_1

                        Provisionable Default = 0x3

                        CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   aec_2CueMuLeakageSegment_1 : 4;    /* 01.FB49.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of CH2 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB4A.F R/WPD AEC 2 CUE Coefficient Threshold Gate Enable Segment 1
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u5.bits_5.aec_2CueCoefficientThresholdGateEnableSegment_1

                        Provisionable Default = 0x0

                        AEC 2 CUE Coefficient Threshold Gate Enable Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   aec_2CueCoefficientThresholdGateEnableSegment_1 : 1;    /* 01.FB4A.F  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 2 CUE Coefficient Threshold Gate Enable Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FB4A.8:0 R/WPD AEC 2 CUE Coefficient Threshold Value Segment 1 [8:0]
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u5.bits_5.aec_2CueCoefficientThresholdValueSegment_1

                        Provisionable Default = 0x000

                        AEC 2 CUE Coefficient Threshold Value Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   aec_2CueCoefficientThresholdValueSegment_1 : 9;    /* 01.FB4A.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* AEC 2 CUE Coefficient Threshold Value Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of CH2 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FB4B.1:0 R/WPD AEC 2 CUE Coefficient Sub Segment Clear Segment 1 [1:0]
                        AQ_Ch2Seg1AecCueLmsControl_CAL.u6.bits_6.aec_2CueCoefficientSubSegmentClearSegment_1

                        Provisionable Default = 0x0

                        AEC 2 CUE Coefficient Sub Segment Clear Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   aec_2CueCoefficientSubSegmentClearSegment_1 : 2;    /* 01.FB4B.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 2 CUE Coefficient Sub Segment Clear Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_Ch2Seg1AecCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG1 AEC FIR Control: 01.FB50 */
/*                  CH2 SEG1 AEC FIR Control: 01.FB50 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB50.4:0 R/WPD AEC 2 FIR Power Down Segment 1 [4:0]
                        AQ_Ch2Seg1AecFirControl_CAL.u0.bits_0.aec_2FirPowerDownSegment_1

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Power down clocking for AEC coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   aec_2FirPowerDownSegment_1 : 5;    /* 01.FB50.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH2 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB51.4 R/W AEC 2 FIR Gain 3 Enable Segment 1
                        AQ_Ch2Seg1AecFirControl_CAL.u1.bits_1.aec_2FirGain_3EnableSegment_1

                        Default = 0x0

                        AEC 2 FIR Gain 3 Enable Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   aec_2FirGain_3EnableSegment_1 : 1;    /* 01.FB51.4  R/W      Default = 0x0 */
                     /* AEC 2 FIR Gain 3 Enable Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FB51.2:0 R/W AEC 2 FIR Shift Segment 1 [2:0]
                        AQ_Ch2Seg1AecFirControl_CAL.u1.bits_1.aec_2FirShiftSegment_1

                        Default = 0x0

                        AEC 2 FIR Shift Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   aec_2FirShiftSegment_1 : 3;    /* 01.FB51.2:0  R/W      Default = 0x0 */
                     /* AEC 2 FIR Shift Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH2 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FB52.0 R/W AEC 2 FIR Global Flush Enable Segment 1
                        AQ_Ch2Seg1AecFirControl_CAL.u2.bits_2.aec_2FirGlobalFlushEnableSegment_1

                        Default = 0x0

                        AEC 2 FIR Global Flush Enable Segment 1
                        
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   aec_2FirGlobalFlushEnableSegment_1 : 1;    /* 01.FB52.0  R/W      Default = 0x0 */
                     /* AEC 2 FIR Global Flush Enable Segment 1
                        
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch2Seg1AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 AEC CUE Mode Control: 01.FB60 */
/*                  CH3 AEC CUE Mode Control: 01.FB60 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 AEC CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB60.F R/W AEC 3 CUE Flush
                        AQ_Ch3AecCueModeControl_CAL.u0.bits_0.aec_3CueFlush

                        Default = 0x0

                        AEC 3 CUE Flush
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Flush AEC CUE Coeffcient Memory to all internal 25bit coefficient values of 0.
                        
                        It is recommended that all the segments be frozen when flushing.  */
      unsigned int   aec_3CueFlush : 1;    /* 01.FB60.F  R/W      Default = 0x0 */
                     /* AEC 3 CUE Flush
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 AEC CUE Mode Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 AEC CUE Mode Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB62.F R/W AEC 3 Single Step
                        AQ_Ch3AecCueModeControl_CAL.u2.bits_2.aec_3SingleStep

                        Default = 0x0

                        A rising edge performs a single step coefficient updateVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Single Step. In this mode a single update to all taps will be performed.
                        
                        Also if leakage is enabled a single step of leakage is applied if leakage period is enabled.
                        
                        Note: Single step should only be enabled when all CUE segments are first put into freeze mode.  */
      unsigned int   aec_3SingleStep : 1;    /* 01.FB62.F  R/W      Default = 0x0 */
                     /* A rising edge performs a single step coefficient updateVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch3AecCueModeControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 AEC CUE Data Processor Control: 01.FB64 */
/*                  CH3 AEC CUE Data Processor Control: 01.FB64 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 AEC CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB64.F R/W AEC 3 Data Processor Random Delay Enable
                        AQ_Ch3AecCueDataProcessorControl_CAL.u0.bits_0.aec_3DataProcessorRandomDelayEnable

                        Default = 0x0

                        AEC 3 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Data Sampling Randomization
                        When downsampling incoming data. The specific point where the data is latched (and downsampled) can be skewed randomly.  */
      unsigned int   aec_3DataProcessorRandomDelayEnable : 1;    /* 01.FB64.F  R/W      Default = 0x0 */
                     /* AEC 3 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FB64.C:A R/W AEC 3 Data Processor Random Delay Value [2:0]
                        AQ_Ch3AecCueDataProcessorControl_CAL.u0.bits_0.aec_3DataProcessorRandomDelayValue

                        Default = 0x0

                        AEC 3 Data Processor Random Delay Value
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Data Latching Delay 
                        When data sampling randomization is disabled, software can optionally program the additional delay value, to allow for downsampling skew.  */
      unsigned int   aec_3DataProcessorRandomDelayValue : 3;    /* 01.FB64.C:A  R/W      Default = 0x0 */
                     /* AEC 3 Data Processor Random Delay Value
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 2;
                    /*! \brief 01.FB64.7:0 R/W AEC 3 Data Processor Delay [7:0]
                        AQ_Ch3AecCueDataProcessorControl_CAL.u0.bits_0.aec_3DataProcessorDelay

                        Default = 0x00

                        AEC 3 Data Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Data Processor Delay
                        Number of clock cycles (in DSP clock domain) to delay incoming data to the CUE/LMS logic so that it can be aligned with the input error.  */
      unsigned int   aec_3DataProcessorDelay : 8;    /* 01.FB64.7:0  R/W      Default = 0x00 */
                     /* AEC 3 Data Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 AEC CUE Data Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB65.F R/W AEC 3 Data Processor Force Value Enable
                        AQ_Ch3AecCueDataProcessorControl_CAL.u1.bits_1.aec_3DataProcessorForceValueEnable

                        Default = 0x0

                        AEC 3 Data Processor Force Value Enable
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Force data input to a register specified value.
                        
                        For debug purposes only.  */
      unsigned int   aec_3DataProcessorForceValueEnable : 1;    /* 01.FB65.F  R/W      Default = 0x0 */
                     /* AEC 3 Data Processor Force Value Enable
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FB65.8:0 R/W AEC 3 Data Processor Force Value [8:0]
                        AQ_Ch3AecCueDataProcessorControl_CAL.u1.bits_1.aec_3DataProcessorForceValue

                        Default = 0x000

                        AEC 3 Data Processor Force Value
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Value to force input FIR/CUE data to when enabled.
                        
                        For debug purposes only.  */
      unsigned int   aec_3DataProcessorForceValue : 9;    /* 01.FB65.8:0  R/W      Default = 0x000 */
                     /* AEC 3 Data Processor Force Value
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Ch3AecCueDataProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 AEC CUE Error Processor Control: 01.FB66 */
/*                  CH3 AEC CUE Error Processor Control: 01.FB66 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 AEC CUE Error Processor Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB66.F R/WPD AEC 3 Invert Error
                        AQ_Ch3AecCueErrorProcessorControl_CAL.u0.bits_0.aec_3InvertError

                        Provisionable Default = 0x0

                        1 = Invert Error Signal
                        0 = Normal operationVLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3InvertError : 1;    /* 01.FB66.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Invert Error Signal
                        0 = Normal operationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 10;
                    /*! \brief 01.FB66.4:0 R/W AEC 3 Error Processor Delay [4:0]
                        AQ_Ch3AecCueErrorProcessorControl_CAL.u0.bits_0.aec_3ErrorProcessorDelay

                        Default = 0x00

                        AEC 3 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Valid Range is from 0-24  */
      unsigned int   aec_3ErrorProcessorDelay : 5;    /* 01.FB66.4:0  R/W      Default = 0x00 */
                     /* AEC 3 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 AEC CUE Error Processor Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB67.4:0 R/W AEC 3 Error Processor Delay Segment 1 [4:0]
                        AQ_Ch3AecCueErrorProcessorControl_CAL.u1.bits_1.aec_3ErrorProcessorDelaySegment_1

                        Default = 0x01

                        AEC 3 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Error Proccesor Delay
                        The number of clock cycles to delay the incoming error signal so that it can be aligned with the input data.
                        
                        Note this register is only used in 64 Tap Mode and applies this error/data proc delay to segment 1. This register overrides the general Error Process Delay register in this mode.
                        
                        Valid Range is from 0-24  */
      unsigned int   aec_3ErrorProcessorDelaySegment_1 : 5;    /* 01.FB67.4:0  R/W      Default = 0x01 */
                     /* AEC 3 Error Processor Delay
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_Ch3AecCueErrorProcessorControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 AEC CUE Leakage Period Control: 01.FB68 */
/*                  CH3 AEC CUE Leakage Period Control: 01.FB68 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FB68.3 R/W AEC 3 Leakage Disable
                        AQ_Ch3AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_3LeakageDisable

                        Default = 0x0

                        AEC 3 Leakage Disable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global disable of leakage in CUE LMS algorithm on all segments.
                        
                        This forces leakage to be disabled regardless of values set for leakage period of segment-specific alpha/beta leakage disable.  */
      unsigned int   aec_3LeakageDisable : 1;    /* 01.FB68.3  R/W      Default = 0x0 */
                     /* AEC 3 Leakage Disable
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB68.2 R/W AEC 3 Leakage Period Disable
                        AQ_Ch3AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_3LeakagePeriodDisable

                        Default = 0x0

                        AEC 3 Leakage Period Disable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Leakage Period. Leakage is not disabled in this mode.  */
      unsigned int   aec_3LeakagePeriodDisable : 1;    /* 01.FB68.2  R/W      Default = 0x0 */
                     /* AEC 3 Leakage Period Disable
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB68.1 R/WSC AEC 3 Leakage Period Abort
                        AQ_Ch3AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_3LeakagePeriodAbort

                        Default = 0x0

                        AEC 3 Leakage Period Abort
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Abort Leakage Period  */
      unsigned int   aec_3LeakagePeriodAbort : 1;    /* 01.FB68.1  R/WSC      Default = 0x0 */
                     /* AEC 3 Leakage Period Abort
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB68.0 R/WSC AEC 3 Leakage Period Start
                        AQ_Ch3AecCueLeakagePeriodControl_CAL.u0.bits_0.aec_3LeakagePeriodStart

                        Default = 0x0

                        AEC 3 Leakage Period Start
                        
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        Start Leakage Period / Iteration   */
      unsigned int   aec_3LeakagePeriodStart : 1;    /* 01.FB68.0  R/WSC      Default = 0x0 */
                     /* AEC 3 Leakage Period Start
                        
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB69.F:0 R/W AEC 3 Leakage Period [F:0]
                        AQ_Ch3AecCueLeakagePeriodControl_CAL.u1.bits_1.aec_3LeakagePeriod

                        Default = 0x0000

                        AEC 3 Leakage Period
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                         Period in which it which leakage is repeated, reps.
                          */
      unsigned int   aec_3LeakagePeriod : 16;    /* 01.FB69.F:0  R/W      Default = 0x0000 */
                     /* AEC 3 Leakage Period
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 AEC CUE Leakage Period Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB6A.F:0 R/W AEC 3 Leakage Iteration [F:0]
                        AQ_Ch3AecCueLeakagePeriodControl_CAL.u2.bits_2.aec_3LeakageIteration

                        Default = 0x0000

                        AEC 3 Leakage Iterations
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Number of period iterations in which leakage is repeated, sets.
                        
                        If set to 0 the number of iteratios is free-running (unlimited) and the periodicity is dictated solely by the Leakage Period calculations.
                          */
      unsigned int   aec_3LeakageIteration : 16;    /* 01.FB6A.F:0  R/W      Default = 0x0000 */
                     /* AEC 3 Leakage Iterations
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch3AecCueLeakagePeriodControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 AEC CUE Coefficient Scaling Control: 01.FB6B */
/*                  CH3 AEC CUE Coefficient Scaling Control: 01.FB6B */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 AEC CUE Coefficient Scaling Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB6B.F R/W AEC 3 Coefficient Scaling Shift Enable
                        AQ_Ch3AecCueCoefficientScalingControl_CAL.u0.bits_0.aec_3CoefficientScalingShiftEnable

                        Default = 0x0

                        AEC 3 Coeffcient Scaling Factor Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When enabled the will scale the internally stores 25 bits coefficients by shifting by the value specified by the customcoefficient round value.
                        
                        By default this feature is disabled and the internal coefficients are scaled to AEC 3 10 bits using a sign based shift rounding operation.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   aec_3CoefficientScalingShiftEnable : 1;    /* 01.FB6B.F  R/W      Default = 0x0 */
                     /* AEC 3 Coeffcient Scaling Factor Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FB6B.2:0 R/W AEC 3 Coefficient Scaling Shift Value [2:0]
                        AQ_Ch3AecCueCoefficientScalingControl_CAL.u0.bits_0.aec_3CoefficientScalingShiftValue

                        Default = 0x0

                        AEC 3 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Specifies the value to shift internal coefficient values from to reach the AEC 3 10 bit coefficient resolution.
                        
                        Note: This is an experimental feature. It does not account for potential saturation issues in when performing the the shifting operations.  */
      unsigned int   aec_3CoefficientScalingShiftValue : 3;    /* 01.FB6B.2:0  R/W      Default = 0x0 */
                     /* AEC 3 Data Processor Random Delay Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch3AecCueCoefficientScalingControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 AEC FIR Control: 01.FB6C */
/*                  CH3 AEC FIR Control: 01.FB6C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 AEC FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB6C.F R/W AEC 3 FIR Clock Shape
                        AQ_Ch3AecFirControl_CAL.u0.bits_0.aec_3FirClockShape

                        Default = 0x0

                        1 = FIR reduce CTPC non-overlap time
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        If activated: Allows lower Vdd_min for slow silicon.  */
      unsigned int   aec_3FirClockShape : 1;    /* 01.FB6C.F  R/W      Default = 0x0 */
                     /* 1 = FIR reduce CTPC non-overlap time
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB6C.E R/W AEC 3 FIR Force Wakeup
                        AQ_Ch3AecFirControl_CAL.u0.bits_0.aec_3FirForceWakeup

                        Default = 0x0

                        AEC 3 FIR force wakeup
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Allow internal hardware to selectively disable coefficient portions of logic for reduced powre consumption.  */
      unsigned int   aec_3FirForceWakeup : 1;    /* 01.FB6C.E  R/W      Default = 0x0 */
                     /* AEC 3 FIR force wakeup
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB6C.D R/W AEC 3 FIR DFT Constant
                        AQ_Ch3AecFirControl_CAL.u0.bits_0.aec_3FirDftConstant

                        Default = 0x0

                        1 = FIR DFT constantVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Set to 1 during DFT test mode only.  */
      unsigned int   aec_3FirDftConstant : 1;    /* 01.FB6C.D  R/W      Default = 0x0 */
                     /* 1 = FIR DFT constantVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB6C.C R/W AEC 3 FIR Clock Enable
                        AQ_Ch3AecFirControl_CAL.u0.bits_0.aec_3FirClockEnable

                        Default = 0x1

                        1 = FIR enable charge conservationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Low-power operation mode of FIR clock buffer.  */
      unsigned int   aec_3FirClockEnable : 1;    /* 01.FB6C.C  R/W      Default = 0x1 */
                     /* 1 = FIR enable charge conservationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 12;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 AEC FIR Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB6D.F R/WSC AEC 3 FIR Data Flush Enable
                        AQ_Ch3AecFirControl_CAL.u1.bits_1.aec_3FirDataFlushEnable

                        Default = 0x0

                        AEC 3 FIR Data Flush Enable
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable FIR Data Flushing.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   aec_3FirDataFlushEnable : 1;    /* 01.FB6D.F  R/WSC      Default = 0x0 */
                     /* AEC 3 FIR Data Flush Enable
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FB6E.8:0 R/W AEC 3 FIR Flush Data [8:0]
                        AQ_Ch3AecFirControl_CAL.u2.bits_2.aec_3FirFlushData

                        Default = 0x000

                        AEC 3 flush data
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Data value to flush FIR logic with. One element in the entire segment will be set with this value. All other taps in a given segment will be set to 0.
                        
                        Note: This is legacy data flushing functionality. It is recommended that the FIR per-segment flushing logic be utilized instead.  */
      unsigned int   aec_3FirFlushData : 9;    /* 01.FB6E.8:0  R/W      Default = 0x000 */
                     /* AEC 3 flush data
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch3AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG0 AEC CUE Control: 01.FB70 */
/*                  CH3 SEG0 AEC CUE Control: 01.FB70 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB70.F R/W AEC 3 CUE Soft Reset Segment 0
                        AQ_Ch3Seg0AecCueControl_CAL.u0.bits_0.aec_3CueSoftResetSegment_0

                        Default = 0x0

                        AEC 3 CUE Soft Reset Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   aec_3CueSoftResetSegment_0 : 1;    /* 01.FB70.F  R/W      Default = 0x0 */
                     /* AEC 3 CUE Soft Reset Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB71.F R/W AEC 3 CUE Clock Gate Enable Segment 0
                        AQ_Ch3Seg0AecCueControl_CAL.u1.bits_1.aec_3CueClockGateEnableSegment_0

                        Default = 0x0

                        AEC 3 CUE Clock Gate Enable Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   aec_3CueClockGateEnableSegment_0 : 1;    /* 01.FB71.F  R/W      Default = 0x0 */
                     /* AEC 3 CUE Clock Gate Enable Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 SEG0 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB72.F R/W AEC 3 CUE Freeze Enable Segment 0
                        AQ_Ch3Seg0AecCueControl_CAL.u2.bits_2.aec_3CueFreezeEnableSegment_0

                        Default = 0x1

                        AEC 3 CUE Freeze Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   aec_3CueFreezeEnableSegment_0 : 1;    /* 01.FB72.F  R/W      Default = 0x1 */
                     /* AEC 3 CUE Freeze Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH3 SEG0 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FB73.1:0 R/W AEC 3 CUE SRAM Power Gating Mode Segment 0 [1:0]
                        AQ_Ch3Seg0AecCueControl_CAL.u3.bits_3.aec_3CueSramPowerGatingModeSegment_0

                        Default = 0x0

                        AEC 3 CUE SRAM Power Gating Mode Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   aec_3CueSramPowerGatingModeSegment_0 : 2;    /* 01.FB73.1:0  R/W      Default = 0x0 */
                     /* AEC 3 CUE SRAM Power Gating Mode Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH3 SEG0 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB74.6:4 R/W AEC 3 CUE SRAM EMA Segment 0 [2:0]
                        AQ_Ch3Seg0AecCueControl_CAL.u4.bits_4.aec_3CueSramEmaSegment_0

                        Default = 0x3

                        AEC 3 CUE SRAM EMA Segment 0VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3CueSramEmaSegment_0 : 3;    /* 01.FB74.6:4  R/W      Default = 0x3 */
                     /* AEC 3 CUE SRAM EMA Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB74.3:2 R/W AEC 3 CUE SRAM EMAW Segment 0 [1:0]
                        AQ_Ch3Seg0AecCueControl_CAL.u4.bits_4.aec_3CueSramEmawSegment_0

                        Default = 0x0

                        AEC 3 CUE SRAM EMAW Segment 0VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3CueSramEmawSegment_0 : 2;    /* 01.FB74.3:2  R/W      Default = 0x0 */
                     /* AEC 3 CUE SRAM EMAW Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB74.1 R/W AEC 3 CUE SRAM EMAS Segment 0
                        AQ_Ch3Seg0AecCueControl_CAL.u4.bits_4.aec_3CueSramEmasSegment_0

                        Default = 0x0

                        AEC 3 CUE SRAM EMAS Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3CueSramEmasSegment_0 : 1;    /* 01.FB74.1  R/W      Default = 0x0 */
                     /* AEC 3 CUE SRAM EMAS Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB74.0 R/W AEC 3 CUE SRAM RET1N Segment 0
                        AQ_Ch3Seg0AecCueControl_CAL.u4.bits_4.aec_3CueSramRet1nSegment_0

                        Default = 0x1

                        AEC 3 CUE SRAM RET1 Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3CueSramRet1nSegment_0 : 1;    /* 01.FB74.0  R/W      Default = 0x1 */
                     /* AEC 3 CUE SRAM RET1 Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_Ch3Seg0AecCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG0 AEC CUE LMS Control: 01.FB75 */
/*                  CH3 SEG0 AEC CUE LMS Control: 01.FB75 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FB75.2 R/W AEC 3 CUE Disable FIR Coefficient Data Valid Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u0.bits_0.aec_3CueDisableFirCoefficientDataValidSegment_0

                        Default = 0x0

                        AEC 3 CUE Disable FIR Coefficient Data Valid Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   aec_3CueDisableFirCoefficientDataValidSegment_0 : 1;    /* 01.FB75.2  R/W      Default = 0x0 */
                     /* AEC 3 CUE Disable FIR Coefficient Data Valid Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB75.1 R/W AEC 3 CUE Adaptive FIR Send Coefficient Update Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u0.bits_0.aec_3CueAdaptiveFirSendCoefficientUpdateSegment_0

                        Default = 0x1

                        AEC 3 CUE Adaptive FIR Send Coefficient Update Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   aec_3CueAdaptiveFirSendCoefficientUpdateSegment_0 : 1;    /* 01.FB75.1  R/W      Default = 0x1 */
                     /* AEC 3 CUE Adaptive FIR Send Coefficient Update Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB75.0 R/W AEC 3 CUE Disable Adpative CUE Coefficient Update Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u0.bits_0.aec_3CueDisableAdpativeCueCoefficientUpdateSegment_0

                        Default = 0x0

                        AEC 3 CUE Disable Adpative CUE Coefficient Update Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   aec_3CueDisableAdpativeCueCoefficientUpdateSegment_0 : 1;    /* 01.FB75.0  R/W      Default = 0x0 */
                     /* AEC 3 CUE Disable Adpative CUE Coefficient Update Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB76.F R/W AEC 3 CUE Mu Disable Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u1.bits_1.aec_3CueMuDisableSegment_0

                        Default = 0x0

                        Mu DisableVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   aec_3CueMuDisableSegment_0 : 1;    /* 01.FB76.F  R/W      Default = 0x0 */
                     /* Mu DisableVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB76.E R/W AEC 3 CUE Data Boost Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u1.bits_1.aec_3CueDataBoostSegment_0

                        Default = 0x0

                        Data BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   aec_3CueDataBoostSegment_0 : 1;    /* 01.FB76.E  R/W      Default = 0x0 */
                     /* Data BoostVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB76.D R/W AEC 3 CUE Mu Boost Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u1.bits_1.aec_3CueMuBoostSegment_0

                        Default = 0x0

                        Mu BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   aec_3CueMuBoostSegment_0 : 1;    /* 01.FB76.D  R/W      Default = 0x0 */
                     /* Mu BoostVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB76.3:0 R/WPD AEC 3 CUE Mu Segment 0 [3:0]
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u1.bits_1.aec_3CueMuSegment_0

                        Provisionable Default = 0x5

                        MuVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   aec_3CueMuSegment_0 : 4;    /* 01.FB76.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* MuVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB77.F R/WPD AEC 3 CUE Disable Beta Leakage Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u2.bits_2.aec_3CueDisableBetaLeakageSegment_0

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   aec_3CueDisableBetaLeakageSegment_0 : 1;    /* 01.FB77.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB77.E R/WPD AEC 3 CUE Negate Beta Leakage Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u2.bits_2.aec_3CueNegateBetaLeakageSegment_0

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   aec_3CueNegateBetaLeakageSegment_0 : 1;    /* 01.FB77.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB77.4:0 R/WPD AEC 3 CUE Beta Leakage Segment 0 [4:0]
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u2.bits_2.aec_3CueBetaLeakageSegment_0

                        Provisionable Default = 0x08

                        Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   aec_3CueBetaLeakageSegment_0 : 5;    /* 01.FB77.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH3 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB78.F R/WPD AEC 3 CUE Disable Alpha Leakage Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u3.bits_3.aec_3CueDisableAlphaLeakageSegment_0

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   aec_3CueDisableAlphaLeakageSegment_0 : 1;    /* 01.FB78.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB78.E R/WPD AEC 3 CUE Negate Alpha Leakage Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u3.bits_3.aec_3CueNegateAlphaLeakageSegment_0

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   aec_3CueNegateAlphaLeakageSegment_0 : 1;    /* 01.FB78.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB78.D R/WPD AEC 3 CUE Alpha Disable Leakage Round Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u3.bits_3.aec_3CueAlphaDisableLeakageRoundSegment_0

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   aec_3CueAlphaDisableLeakageRoundSegment_0 : 1;    /* 01.FB78.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FB78.4:0 R/WPD AEC 3 CUE Alpha Leakage Segment 0 [4:0]
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u3.bits_3.aec_3CueAlphaLeakageSegment_0

                        Provisionable Default = 0x10

                        Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   aec_3CueAlphaLeakageSegment_0 : 5;    /* 01.FB78.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH3 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB79.F R/W AEC 3 CUE Disable Mu Leakage Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u4.bits_4.aec_3CueDisableMuLeakageSegment_0

                        Default = 0x1

                        CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   aec_3CueDisableMuLeakageSegment_0 : 1;    /* 01.FB79.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB79.3:0 R/WPD AEC 3 CUE Mu Leakage Segment 0 [3:0]
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u4.bits_4.aec_3CueMuLeakageSegment_0

                        Provisionable Default = 0x3

                        CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   aec_3CueMuLeakageSegment_0 : 4;    /* 01.FB79.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of CH3 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB7A.F R/WPD AEC 3 CUE Coefficient Threshold Gate Enable Segment 0
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u5.bits_5.aec_3CueCoefficientThresholdGateEnableSegment_0

                        Provisionable Default = 0x0

                        AEC 3 CUE Coefficient Threshold Gate Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   aec_3CueCoefficientThresholdGateEnableSegment_0 : 1;    /* 01.FB7A.F  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 3 CUE Coefficient Threshold Gate Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FB7A.8:0 R/WPD AEC 3 CUE Coefficient Threshold Value Segment 0 [8:0]
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u5.bits_5.aec_3CueCoefficientThresholdValueSegment_0

                        Provisionable Default = 0x000

                        AEC 3 CUE Coefficient Threshold Value Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   aec_3CueCoefficientThresholdValueSegment_0 : 9;    /* 01.FB7A.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* AEC 3 CUE Coefficient Threshold Value Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of CH3 SEG0 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FB7B.1:0 R/WPD AEC 3 CUE Coefficient Sub Segment Clear Segment 0 [1:0]
                        AQ_Ch3Seg0AecCueLmsControl_CAL.u6.bits_6.aec_3CueCoefficientSubSegmentClearSegment_0

                        Provisionable Default = 0x0

                        AEC 3 CUE Coefficient Sub Segment Clear Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   aec_3CueCoefficientSubSegmentClearSegment_0 : 2;    /* 01.FB7B.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 3 CUE Coefficient Sub Segment Clear Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_Ch3Seg0AecCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG0 AEC FIR Control: 01.FB80 */
/*                  CH3 SEG0 AEC FIR Control: 01.FB80 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB80.4:0 R/WPD AEC 3 FIR Power Down Segment 0 [4:0]
                        AQ_Ch3Seg0AecFirControl_CAL.u0.bits_0.aec_3FirPowerDownSegment_0

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Power down clocking for AEC coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   aec_3FirPowerDownSegment_0 : 5;    /* 01.FB80.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB81.4 R/W AEC 3 FIR Gain 3 Enable Segment 0
                        AQ_Ch3Seg0AecFirControl_CAL.u1.bits_1.aec_3FirGain_3EnableSegment_0

                        Default = 0x0

                        AEC 3 FIR Gain 3 Enable Segment 0VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   aec_3FirGain_3EnableSegment_0 : 1;    /* 01.FB81.4  R/W      Default = 0x0 */
                     /* AEC 3 FIR Gain 3 Enable Segment 0VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FB81.2:0 R/W AEC 3 FIR Shift Segment 0 [2:0]
                        AQ_Ch3Seg0AecFirControl_CAL.u1.bits_1.aec_3FirShiftSegment_0

                        Default = 0x0

                        AEC 3 FIR Shift Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   aec_3FirShiftSegment_0 : 3;    /* 01.FB81.2:0  R/W      Default = 0x0 */
                     /* AEC 3 FIR Shift Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 SEG0 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FB82.0 R/WSC AEC 3 FIR Global Flush Enable Segment 0
                        AQ_Ch3Seg0AecFirControl_CAL.u2.bits_2.aec_3FirGlobalFlushEnableSegment_0

                        Default = 0x0

                        AEC 3 FIR Global Flush Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   aec_3FirGlobalFlushEnableSegment_0 : 1;    /* 01.FB82.0  R/WSC      Default = 0x0 */
                     /* AEC 3 FIR Global Flush Enable Segment 0
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch3Seg0AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG1 AEC CUE Control: 01.FB90 */
/*                  CH3 SEG1 AEC CUE Control: 01.FB90 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB90.F R/W AEC 3 CUE Soft Reset Segment 1
                        AQ_Ch3Seg1AecCueControl_CAL.u0.bits_0.aec_3CueSoftResetSegment_1

                        Default = 0x0

                        AEC 3 CUE Soft Reset Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Soft Reset current CUE segment.
                        
                        Note: contents of the LMS coefficient memory will not be cleared in soft reset mode. All write register settings will also be preserved.  */
      unsigned int   aec_3CueSoftResetSegment_1 : 1;    /* 01.FB90.F  R/W      Default = 0x0 */
                     /* AEC 3 CUE Soft Reset Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB91.F R/W AEC 3 CUE Clock Gate Enable Segment 1
                        AQ_Ch3Seg1AecCueControl_CAL.u1.bits_1.aec_3CueClockGateEnableSegment_1

                        Default = 0x0

                        AEC 3 CUE Clock Gate Enable Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Clock gating on the current CUE segment.
                        
                        1=Gate CUE segment clock
                        0=Do not gate CUE segment clock
                        
                        Note: Clock gating should only be applied after the CUE segment is placed in soft_reset mode. Also during clock gate mode the CUE coefficient SRAM is not acessible. Any power related modes required to be set must occur prior to clock gating.  */
      unsigned int   aec_3CueClockGateEnableSegment_1 : 1;    /* 01.FB91.F  R/W      Default = 0x0 */
                     /* AEC 3 CUE Clock Gate Enable Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 SEG1 AEC CUE Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB92.F R/W AEC 3 CUE Freeze Enable Segment 1
                        AQ_Ch3Seg1AecCueControl_CAL.u2.bits_2.aec_3CueFreezeEnableSegment_1

                        Default = 0x1

                        AEC 3 CUE Freeze Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Put CUE into freeze mode.
                        
                        During this mode all internal control logic within a given CUE segment will remain in operation, however the following control signals will be disabled:
                        
                        - CUE coefficient to updates disabled
                        - CUE MU related updates disabled
                        - CUE leakage disabled
                        - CUE memory write operations disabled
                        
                        Note: During freeze CUE flush can be performed. Furthermore CUE memory is accessible for software reads/writes.
                          */
      unsigned int   aec_3CueFreezeEnableSegment_1 : 1;    /* 01.FB92.F  R/W      Default = 0x1 */
                     /* AEC 3 CUE Freeze Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH3 SEG1 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FB93.1:0 R/W AEC 3 CUE SRAM Power Gating Mode Segment 1 [1:0]
                        AQ_Ch3Seg1AecCueControl_CAL.u3.bits_3.aec_3CueSramPowerGatingModeSegment_1

                        Default = 0x0

                        AEC 3 CUE SRAM Power Gating Mode Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable CUE Coefficient SRAM modules to enter various power gating modes to reduce power.
                        
                        In this mode when a specific power mode is specified is activates a state machine in the coefficient processor which puts the CUE SRAM into a specific power mode.
                        
                        00=B1 Normal Operation
                        01=B2 Selective bit-line prechage mode
                        10=B4 Retention Mode 2
                        11=B5 Power-down mode
                        
                        Note: To enter/exit power gating mode the CUE clock for the given segment must still be enabled (i.e. not clock gated). Furthermore the CUE should be in either freeze or soft reset mode as well, as memory cannot be accsible when entering or exiting power modes.
                        
                        There is a fixed technology-dependent wait time when exiting from a power mode back to normal mode. Please refer to the ARM power specifications for the specific SRAM used in the CUE for the clock cycles required. Approximate recommdenations are as following assuming 500 MHz operation:
                        
                        00=0 clock cycle recovery; normal operation
                        01=2 clock cycle recovery
                        10=10 clock cycle recovery
                        11=50 clock cycle recovery
                        
                          */
      unsigned int   aec_3CueSramPowerGatingModeSegment_1 : 2;    /* 01.FB93.1:0  R/W      Default = 0x0 */
                     /* AEC 3 CUE SRAM Power Gating Mode Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH3 SEG1 AEC CUE Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB94.6:4 R/W AEC 3 CUE SRAM EMA Segment 1 [2:0]
                        AQ_Ch3Seg1AecCueControl_CAL.u4.bits_4.aec_3CueSramEmaSegment_1

                        Default = 0x3

                        AEC 3 CUE SRAM EMA Segment 1VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3CueSramEmaSegment_1 : 3;    /* 01.FB94.6:4  R/W      Default = 0x3 */
                     /* AEC 3 CUE SRAM EMA Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB94.3:2 R/W AEC 3 CUE SRAM EMAW Segment 1 [1:0]
                        AQ_Ch3Seg1AecCueControl_CAL.u4.bits_4.aec_3CueSramEmawSegment_1

                        Default = 0x0

                        AEC 3 CUE SRAM EMAW Segment 1VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3CueSramEmawSegment_1 : 2;    /* 01.FB94.3:2  R/W      Default = 0x0 */
                     /* AEC 3 CUE SRAM EMAW Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB94.1 R/W AEC 3 CUE SRAM EMAS Segment 1
                        AQ_Ch3Seg1AecCueControl_CAL.u4.bits_4.aec_3CueSramEmasSegment_1

                        Default = 0x0

                        AEC 3 CUE SRAM EMAS Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3CueSramEmasSegment_1 : 1;    /* 01.FB94.1  R/W      Default = 0x0 */
                     /* AEC 3 CUE SRAM EMAS Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB94.0 R/W AEC 3 CUE SRAM RET1N Segment 1
                        AQ_Ch3Seg1AecCueControl_CAL.u4.bits_4.aec_3CueSramRet1nSegment_1

                        Default = 0x1

                        AEC 3 CUE SRAM RET1 Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
  */
      unsigned int   aec_3CueSramRet1nSegment_1 : 1;    /* 01.FB94.0  R/W      Default = 0x1 */
                     /* AEC 3 CUE SRAM RET1 Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_Ch3Seg1AecCueControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG1 AEC CUE LMS Control: 01.FB95 */
/*                  CH3 SEG1 AEC CUE LMS Control: 01.FB95 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FB95.2 R/W AEC 3 CUE Disable FIR Coefficient Data Valid Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u0.bits_0.aec_3CueDisableFirCoefficientDataValidSegment_1

                        Default = 0x0

                        AEC 3 CUE Disable FIR Coefficient Data Valid Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data qualifier (data valid) transmitted from the CUE to FIR. In this mode the FIR will retain its current values and not get updated coefficients from the CUE.  */
      unsigned int   aec_3CueDisableFirCoefficientDataValidSegment_1 : 1;    /* 01.FB95.2  R/W      Default = 0x0 */
                     /* AEC 3 CUE Disable FIR Coefficient Data Valid Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB95.1 R/W AEC 3 CUE Adaptive FIR Send Coefficient Update Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u0.bits_0.aec_3CueAdaptiveFirSendCoefficientUpdateSegment_1

                        Default = 0x1

                        AEC 3 CUE Adaptive FIR Send Coefficient Update Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
                        

                 <B>Notes:</B>
                        When set to 0 this register will send coefficient values to the FIR directly from the CUE coefficient SRAM and not apply the current step of adaptation on the output signal send to the FIR. Internally the CUE will still continue utilizing its adaptive values and store them in SRAM.  */
      unsigned int   aec_3CueAdaptiveFirSendCoefficientUpdateSegment_1 : 1;    /* 01.FB95.1  R/W      Default = 0x1 */
                     /* AEC 3 CUE Adaptive FIR Send Coefficient Update Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 
                          */
                    /*! \brief 01.FB95.0 R/W AEC 3 CUE Disable Adpative CUE Coefficient Update Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u0.bits_0.aec_3CueDisableAdpativeCueCoefficientUpdateSegment_1

                        Default = 0x0

                        AEC 3 CUE Disable Adpative CUE Coefficient Update Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will gate the data valid going from the CUE LMS adaptation to the CUE coefficient memory write enable. The output value sent to the FIR will still contain a single step of adaptation.  */
      unsigned int   aec_3CueDisableAdpativeCueCoefficientUpdateSegment_1 : 1;    /* 01.FB95.0  R/W      Default = 0x0 */
                     /* AEC 3 CUE Disable Adpative CUE Coefficient Update Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB96.F R/W AEC 3 CUE Mu Disable Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u1.bits_1.aec_3CueMuDisableSegment_1

                        Default = 0x0

                        Mu DisableVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will disable the MU component of the LMS operation when generating and updated coefficient value.  */
      unsigned int   aec_3CueMuDisableSegment_1 : 1;    /* 01.FB96.F  R/W      Default = 0x0 */
                     /* Mu DisableVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB96.E R/W AEC 3 CUE Data Boost Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u1.bits_1.aec_3CueDataBoostSegment_1

                        Default = 0x0

                        Data BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the data component of the MU LMS operation by a factor of 2.  */
      unsigned int   aec_3CueDataBoostSegment_1 : 1;    /* 01.FB96.E  R/W      Default = 0x0 */
                     /* Data BoostVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB96.D R/W AEC 3 CUE Mu Boost Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u1.bits_1.aec_3CueMuBoostSegment_1

                        Default = 0x0

                        Mu BoostVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        When set to 1 this register will scale the MU component by a factor of 2.  */
      unsigned int   aec_3CueMuBoostSegment_1 : 1;    /* 01.FB96.D  R/W      Default = 0x0 */
                     /* Mu BoostVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB96.3:0 R/WPD AEC 3 CUE Mu Segment 1 [3:0]
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u1.bits_1.aec_3CueMuSegment_1

                        Provisionable Default = 0x5

                        MuVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU value used for the LMS operation. The lower the value of MU, the more aggressive the CUE LMS operation adaptive. A level of MU below 2 is not recommended. The higher the value of MU the more accurate the LMS result, but the required time convergence time increases.  */
      unsigned int   aec_3CueMuSegment_1 : 4;    /* 01.FB96.3:0  R/WPD      Provisionable Default = 0x5 */
                     /* MuVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB97.F R/WPD AEC 3 CUE Disable Beta Leakage Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u2.bits_2.aec_3CueDisableBetaLeakageSegment_1

                        Provisionable Default = 0x1

                        1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Beta Constant Gain Leakage  */
      unsigned int   aec_3CueDisableBetaLeakageSegment_1 : 1;    /* 01.FB97.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB97.E R/WPD AEC 3 CUE Negate Beta Leakage Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u2.bits_2.aec_3CueNegateBetaLeakageSegment_1

                        Provisionable Default = 0x0

                        1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Beta Leakage sign.  */
      unsigned int   aec_3CueNegateBetaLeakageSegment_1 : 1;    /* 01.FB97.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Gain Leakage
                        0 = Normal Gain Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 9;
                    /*! \brief 01.FB97.4:0 R/WPD AEC 3 CUE Beta Leakage Segment 1 [4:0]
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u2.bits_2.aec_3CueBetaLeakageSegment_1

                        Provisionable Default = 0x08

                        Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Beta Leakage Gain Value. Valid range from 0-24  */
      unsigned int   aec_3CueBetaLeakageSegment_1 : 5;    /* 01.FB97.4:0  R/WPD      Provisionable Default = 0x08 */
                     /* Beta Gain LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of CH3 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB98.F R/WPD AEC 3 CUE Disable Alpha Leakage Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u3.bits_3.aec_3CueDisableAlphaLeakageSegment_1

                        Provisionable Default = 0x1

                        1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Constant Gain Leakage  */
      unsigned int   aec_3CueDisableAlphaLeakageSegment_1 : 1;    /* 01.FB98.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Disable Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB98.E R/WPD AEC 3 CUE Negate Alpha Leakage Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u3.bits_3.aec_3CueNegateAlphaLeakageSegment_1

                        Provisionable Default = 0x0

                        1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Negate Alpha Leakage sign.  */
      unsigned int   aec_3CueNegateAlphaLeakageSegment_1 : 1;    /* 01.FB98.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Negate Alpha Leakage
                        0 = Normal Alpha Leakage OperationVLID=""
                        OPCODE="NOSYNC=",   */
                    /*! \brief 01.FB98.D R/WPD AEC 3 CUE Alpha Disable Leakage Round Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u3.bits_3.aec_3CueAlphaDisableLeakageRoundSegment_1

                        Provisionable Default = 0x0

                        1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable Alpha Leakage Rounding component.  */
      unsigned int   aec_3CueAlphaDisableLeakageRoundSegment_1 : 1;    /* 01.FB98.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable Alpha Leakage Rounding
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FB98.4:0 R/WPD AEC 3 CUE Alpha Leakage Segment 1 [4:0]
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u3.bits_3.aec_3CueAlphaLeakageSegment_1

                        Provisionable Default = 0x10

                        Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Alpha Leakage Shift Value. Valid range from 0-24  */
      unsigned int   aec_3CueAlphaLeakageSegment_1 : 5;    /* 01.FB98.4:0  R/WPD      Provisionable Default = 0x10 */
                     /* Alpha Shift LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of CH3 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB99.F R/W AEC 3 CUE Disable Mu Leakage Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u4.bits_4.aec_3CueDisableMuLeakageSegment_1

                        Default = 0x1

                        CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Disable MU Gain Leakage  */
      unsigned int   aec_3CueDisableMuLeakageSegment_1 : 1;    /* 01.FB99.F  R/W      Default = 0x1 */
                     /* CUE Disable Mu Leakage
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FB99.3:0 R/WPD AEC 3 CUE Mu Leakage Segment 1 [3:0]
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u4.bits_4.aec_3CueMuLeakageSegment_1

                        Provisionable Default = 0x3

                        CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        MU Leakage Value used during periodic mu logic  */
      unsigned int   aec_3CueMuLeakageSegment_1 : 4;    /* 01.FB99.3:0  R/WPD      Provisionable Default = 0x3 */
                     /* CUE Mu LeakageVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of CH3 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
                    /*! \brief 01.FB9A.F R/WPD AEC 3 CUE Coefficient Threshold Gate Enable Segment 1
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u5.bits_5.aec_3CueCoefficientThresholdGateEnableSegment_1

                        Provisionable Default = 0x0

                        AEC 3 CUE Coefficient Threshold Gate Enable Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable forcing of LMS coeffcient output values from the CUE to FIR to 0 when they are below a specified threshold.  */
      unsigned int   aec_3CueCoefficientThresholdGateEnableSegment_1 : 1;    /* 01.FB9A.F  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 3 CUE Coefficient Threshold Gate Enable Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved0 : 6;
                    /*! \brief 01.FB9A.8:0 R/WPD AEC 3 CUE Coefficient Threshold Value Segment 1 [8:0]
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u5.bits_5.aec_3CueCoefficientThresholdValueSegment_1

                        Provisionable Default = 0x000

                        AEC 3 CUE Coefficient Threshold Value Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Theshold value to force coefficient values from CUE LMS to FIR to 0.
                        
                        Internally all coefficient values are maintained.  */
      unsigned int   aec_3CueCoefficientThresholdValueSegment_1 : 9;    /* 01.FB9A.8:0  R/WPD      Provisionable Default = 0x000 */
                     /* AEC 3 CUE Coefficient Threshold Value Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of CH3 SEG1 AEC CUE LMS Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FB9B.1:0 R/WPD AEC 3 CUE Coefficient Sub Segment Clear Segment 1 [1:0]
                        AQ_Ch3Seg1AecCueLmsControl_CAL.u6.bits_6.aec_3CueCoefficientSubSegmentClearSegment_1

                        Provisionable Default = 0x0

                        AEC 3 CUE Coefficient Sub Segment Clear Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        This register will force coefficient values to 0 to optimize power consumption in the FIR. It should be used in conjunction with the FIR wakeup register control. The gating logic operates in chuncks of 32 taps.
                        
                        x0= Do not modify taps 0-31 of the current segment
                        x1=Force taps 0-31 of the current segment to 0
                        0x= Do not modify taps 32-63 of the current segment
                        1x=Force taps 32-63 of the current segment to 0  */
      unsigned int   aec_3CueCoefficientSubSegmentClearSegment_1 : 2;    /* 01.FB9B.1:0  R/WPD      Provisionable Default = 0x0 */
                     /* AEC 3 CUE Coefficient Sub Segment Clear Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_Ch3Seg1AecCueLmsControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG1 AEC FIR Control: 01.FBA0 */
/*                  CH3 SEG1 AEC FIR Control: 01.FBA0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FBA0.4:0 R/WPD AEC 3 FIR Power Down Segment 1 [4:0]
                        AQ_Ch3Seg1AecFirControl_CAL.u0.bits_0.aec_3FirPowerDownSegment_1

                        Provisionable Default = 0x00

                        Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Power down clocking for AEC coefficients in groups of 2.
                        
                        Bit 0: Enable/Disable FIR clocking for Bits 0/1
                        Bit 1: Enable/Disable FIR clocking for Bits 3/2
                        Bit 2: Enable/Disable FIR clocking for Bits 5/4
                        Bit 3: Enable/Disable FIR clocking for Bits 7/6
                        Bit 4: Enable/Disable FIR clocking for Bits 9/8  */
      unsigned int   aec_3FirPowerDownSegment_1 : 5;    /* 01.FBA0.4:0  R/WPD      Provisionable Default = 0x00 */
                     /* Coefficient Bitplane Clock Control per group of 2 coefficient chunks.
                        1 = Clk on
                        0 = Clk offVLID=""
                        OPCODE="NOSYNC=",   */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of CH3 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 11;
                    /*! \brief 01.FBA1.4 R/W AEC 3 FIR Gain 3 Enable Segment 1
                        AQ_Ch3Seg1AecFirControl_CAL.u1.bits_1.aec_3FirGain_3EnableSegment_1

                        Default = 0x0

                        AEC 3 FIR Gain 3 Enable Segment 1VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Gain x3 multiplcation scaling in the FIR output for a given segment.  */
      unsigned int   aec_3FirGain_3EnableSegment_1 : 1;    /* 01.FBA1.4  R/W      Default = 0x0 */
                     /* AEC 3 FIR Gain 3 Enable Segment 1VLID=""
                        OPCODE="NOSYNC=",   */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FBA1.2:0 R/W AEC 3 FIR Shift Segment 1 [2:0]
                        AQ_Ch3Seg1AecFirControl_CAL.u1.bits_1.aec_3FirShiftSegment_1

                        Default = 0x0

                        AEC 3 FIR Shift Segment 1
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Enable Shifting (multiple scaling) of FIR output.  */
      unsigned int   aec_3FirShiftSegment_1 : 3;    /* 01.FBA1.2:0  R/W      Default = 0x0 */
                     /* AEC 3 FIR Shift Segment 1
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of CH3 SEG1 AEC FIR Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FBA2.0 R/W AEC 3 FIR Global Flush Enable Segment 1
                        AQ_Ch3Seg1AecFirControl_CAL.u2.bits_2.aec_3FirGlobalFlushEnableSegment_1

                        Default = 0x0

                        AEC 3 FIR Global Flush Enable Segment 1
                        
                        VLID=""
                        OPCODE="NOSYNC=", 

                 <B>Notes:</B>
                        Global Flush enable FIR logic. Clears both latches coefficients and data pipeline.  */
      unsigned int   aec_3FirGlobalFlushEnableSegment_1 : 1;    /* 01.FBA2.0  R/W      Default = 0x0 */
                     /* AEC 3 FIR Global Flush Enable Segment 1
                        
                        VLID=""
                        OPCODE="NOSYNC=",   */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_Ch3Seg1AecFirControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Generic Cycle Count Status: 01.FBB0 */
/*                  AEC Generic Cycle Count Status: 01.FBB0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Generic Cycle Count Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 01.FBB0.0 RO AEC Cycle Count Done
                        AQ_AecGenericCycleCountStatus_CAL.u0.bits_0.aecCycleCountDone

                        

                        AEC Cycle Count Done Flag
                        
                        

                 <B>Notes:</B>
                        Cycle Count Done
                        Sticky high and cleared when Cycle Counter Start is set to 1  */
      unsigned int   aecCycleCountDone : 1;    /* 01.FBB0.0  RO       */
                     /* AEC Cycle Count Done Flag
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecGenericCycleCountStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Data Sync Status: 01.FBB1 */
/*                  AEC Data Sync Status: 01.FBB1 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Data Sync Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FBB1.D BLH ASR AEC 3 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_3FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   asrAec_3FifoSyncWarning : 1;    /* 01.FBB1.D  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB1.C BLH ASR AEC 2 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_2FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   asrAec_2FifoSyncWarning : 1;    /* 01.FBB1.C  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB1.B BLH ASR AEC 1 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_1FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   asrAec_1FifoSyncWarning : 1;    /* 01.FBB1.B  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB1.A BLH ASR AEC 0 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_0FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   asrAec_0FifoSyncWarning : 1;    /* 01.FBB1.A  BLH       */
                     /* 1 = Synchronization warning detected
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FBB1.8 BLH ASR AEC 3 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_3FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   asrAec_3FifoSyncError : 1;    /* 01.FBB1.8  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB1.7 BLH ASR AEC 2 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_2FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   asrAec_2FifoSyncError : 1;    /* 01.FBB1.7  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB1.6 BLH ASR AEC 1 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_1FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   asrAec_1FifoSyncError : 1;    /* 01.FBB1.6  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB1.5 BLH ASR AEC 0 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_0FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   asrAec_0FifoSyncError : 1;    /* 01.FBB1.5  BLH       */
                     /* 1 = Synchronization error detected
                          */
      unsigned int   reserved2 : 1;
                    /*! \brief 01.FBB1.3 BLH ASR AEC 3 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_3FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   asrAec_3FifoParityError : 1;    /* 01.FBB1.3  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB1.2 BLH ASR AEC 2 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_2FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   asrAec_2FifoParityError : 1;    /* 01.FBB1.2  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB1.1 BLH ASR AEC 1 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_1FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   asrAec_1FifoParityError : 1;    /* 01.FBB1.1  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB1.0 BLH ASR AEC 0 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u0.bits_0.asrAec_0FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   asrAec_0FifoParityError : 1;    /* 01.FBB1.0  BLH       */
                     /* 1 = Parity error detected
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Data Sync Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FBB2.D BLH AFO 128 AEC 3 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_3FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   afo_128Aec_3FifoSyncWarning : 1;    /* 01.FBB2.D  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB2.C BLH AFO 128 AEC 2 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_2FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   afo_128Aec_2FifoSyncWarning : 1;    /* 01.FBB2.C  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB2.B BLH AFO 128 AEC 1 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_1FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   afo_128Aec_1FifoSyncWarning : 1;    /* 01.FBB2.B  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB2.A BLH AFO 128 AEC 0 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_0FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   afo_128Aec_0FifoSyncWarning : 1;    /* 01.FBB2.A  BLH       */
                     /* 1 = Synchronization warning detected
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FBB2.8 BLH AFO 128 AEC 3 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_3FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   afo_128Aec_3FifoSyncError : 1;    /* 01.FBB2.8  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB2.7 BLH AFO 128 AEC 2 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_2FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   afo_128Aec_2FifoSyncError : 1;    /* 01.FBB2.7  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB2.6 BLH AFO 128 AEC 1 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_1FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   afo_128Aec_1FifoSyncError : 1;    /* 01.FBB2.6  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB2.5 BLH AFO 128 AEC 0 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_0FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   afo_128Aec_0FifoSyncError : 1;    /* 01.FBB2.5  BLH       */
                     /* 1 = Synchronization error detected
                          */
      unsigned int   reserved2 : 1;
                    /*! \brief 01.FBB2.3 BLH AFO 128 AEC 3 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_3FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   afo_128Aec_3FifoParityError : 1;    /* 01.FBB2.3  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB2.2 BLH AFO 128 AEC 2 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_2FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   afo_128Aec_2FifoParityError : 1;    /* 01.FBB2.2  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB2.1 BLH AFO 128 AEC 1 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_1FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   afo_128Aec_1FifoParityError : 1;    /* 01.FBB2.1  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB2.0 BLH AFO 128 AEC 0 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u1.bits_1.afo_128Aec_0FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   afo_128Aec_0FifoParityError : 1;    /* 01.FBB2.0  BLH       */
                     /* 1 = Parity error detected
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Data Sync Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FBB3.D BLH AFO 64 AEC 3 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_3FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   afo_64Aec_3FifoSyncWarning : 1;    /* 01.FBB3.D  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB3.C BLH AFO 64 AEC 2 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_2FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   afo_64Aec_2FifoSyncWarning : 1;    /* 01.FBB3.C  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB3.B BLH AFO 64 AEC 1 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_1FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   afo_64Aec_1FifoSyncWarning : 1;    /* 01.FBB3.B  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB3.A BLH AFO 64 AEC 0 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_0FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   afo_64Aec_0FifoSyncWarning : 1;    /* 01.FBB3.A  BLH       */
                     /* 1 = Synchronization warning detected
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FBB3.8 BLH AFO 64 AEC 3 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_3FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   afo_64Aec_3FifoSyncError : 1;    /* 01.FBB3.8  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB3.7 BLH AFO 64 AEC 2 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_2FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   afo_64Aec_2FifoSyncError : 1;    /* 01.FBB3.7  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB3.6 BLH AFO 64 AEC 1 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_1FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   afo_64Aec_1FifoSyncError : 1;    /* 01.FBB3.6  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB3.5 BLH AFO 64 AEC 0 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_0FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   afo_64Aec_0FifoSyncError : 1;    /* 01.FBB3.5  BLH       */
                     /* 1 = Synchronization error detected
                          */
      unsigned int   reserved2 : 1;
                    /*! \brief 01.FBB3.3 BLH AFO 64 AEC 3 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_3FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   afo_64Aec_3FifoParityError : 1;    /* 01.FBB3.3  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB3.2 BLH AFO 64 AEC 2 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_2FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   afo_64Aec_2FifoParityError : 1;    /* 01.FBB3.2  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB3.1 BLH AFO 64 AEC 1 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_1FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   afo_64Aec_1FifoParityError : 1;    /* 01.FBB3.1  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB3.0 BLH AFO 64 AEC 0 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u2.bits_2.afo_64Aec_0FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   afo_64Aec_0FifoParityError : 1;    /* 01.FBB3.0  BLH       */
                     /* 1 = Parity error detected
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Data Sync Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FBB4.D BLH ERROR IN AEC 3 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_3FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   errorInAec_3FifoSyncWarning : 1;    /* 01.FBB4.D  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB4.C BLH ERROR IN AEC 2 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_2FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   errorInAec_2FifoSyncWarning : 1;    /* 01.FBB4.C  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB4.B BLH ERROR IN AEC 1 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_1FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   errorInAec_1FifoSyncWarning : 1;    /* 01.FBB4.B  BLH       */
                     /* 1 = Synchronization warning detected
                          */
                    /*! \brief 01.FBB4.A BLH ERROR IN AEC 0 FIFO Sync Warning
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_0FifoSyncWarning

                        

                        1 = Synchronization warning detected
                        
  */
      unsigned int   errorInAec_0FifoSyncWarning : 1;    /* 01.FBB4.A  BLH       */
                     /* 1 = Synchronization warning detected
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 01.FBB4.8 BLH ERROR IN AEC 3 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_3FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   errorInAec_3FifoSyncError : 1;    /* 01.FBB4.8  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB4.7 BLH ERROR IN AEC 2 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_2FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   errorInAec_2FifoSyncError : 1;    /* 01.FBB4.7  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB4.6 BLH ERROR IN AEC 1 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_1FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   errorInAec_1FifoSyncError : 1;    /* 01.FBB4.6  BLH       */
                     /* 1 = Synchronization error detected
                          */
                    /*! \brief 01.FBB4.5 BLH ERROR IN AEC 0 FIFO Sync Error
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_0FifoSyncError

                        

                        1 = Synchronization error detected
                        
  */
      unsigned int   errorInAec_0FifoSyncError : 1;    /* 01.FBB4.5  BLH       */
                     /* 1 = Synchronization error detected
                          */
      unsigned int   reserved2 : 1;
                    /*! \brief 01.FBB4.3 BLH ERROR IN AEC 3 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_3FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   errorInAec_3FifoParityError : 1;    /* 01.FBB4.3  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB4.2 BLH ERROR IN AEC 2 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_2FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   errorInAec_2FifoParityError : 1;    /* 01.FBB4.2  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB4.1 BLH ERROR IN AEC 1 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_1FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   errorInAec_1FifoParityError : 1;    /* 01.FBB4.1  BLH       */
                     /* 1 = Parity error detected
                          */
                    /*! \brief 01.FBB4.0 BLH ERROR IN AEC 0 FIFO Parity Error
                        AQ_AecDataSyncStatus_CAL.u3.bits_3.errorInAec_0FifoParityError

                        

                        1 = Parity error detected
                        
  */
      unsigned int   errorInAec_0FifoParityError : 1;    /* 01.FBB4.0  BLH       */
                     /* 1 = Parity error detected
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_AecDataSyncStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Memory Parity Status: 01.FBB8 */
/*                  AEC Memory Parity Status: 01.FBB8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Memory Parity Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FBB8.7:6 BLH AEC 3 CUE Memory Parity Status [1:0]
                        AQ_AecMemoryParityStatus_CAL.u0.bits_0.aec_3CueMemoryParityStatus

                        

                        AEC 3 Memory Parity Status
  */
      unsigned int   aec_3CueMemoryParityStatus : 2;    /* 01.FBB8.7:6  BLH       */
                     /* AEC 3 Memory Parity Status  */
                    /*! \brief 01.FBB8.5:4 BLH AEC 2 CUE Memory Parity Status [1:0]
                        AQ_AecMemoryParityStatus_CAL.u0.bits_0.aec_2CueMemoryParityStatus

                        

                        AEC 2 Memory Parity Status
  */
      unsigned int   aec_2CueMemoryParityStatus : 2;    /* 01.FBB8.5:4  BLH       */
                     /* AEC 2 Memory Parity Status  */
                    /*! \brief 01.FBB8.3:2 BLH AEC 1 CUE Memory Parity Status [1:0]
                        AQ_AecMemoryParityStatus_CAL.u0.bits_0.aec_1CueMemoryParityStatus

                        

                        AEC 1 Memory Parity Status
  */
      unsigned int   aec_1CueMemoryParityStatus : 2;    /* 01.FBB8.3:2  BLH       */
                     /* AEC 1 Memory Parity Status  */
                    /*! \brief 01.FBB8.1:0 BLH AEC 0 CUE Memory Parity Status [1:0]
                        AQ_AecMemoryParityStatus_CAL.u0.bits_0.aec_0CueMemoryParityStatus

                        

                        AEC 0 Memory Parity Status
  */
      unsigned int   aec_0CueMemoryParityStatus : 2;    /* 01.FBB8.1:0  BLH       */
                     /* AEC 0 Memory Parity Status  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecMemoryParityStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Delay Detection Status: 01.FBB9 */
/*                  AEC Delay Detection Status: 01.FBB9 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Delay Detection Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBB9.3 RO AEC 3 Error Data Delay Detection Done
                        AQ_AecDelayDetectionStatus_CAL.u0.bits_0.aec_3ErrorDataDelayDetectionDone

                        

                        Error Data Delay Detection Done
                        
                        
  */
      unsigned int   aec_3ErrorDataDelayDetectionDone : 1;    /* 01.FBB9.3  RO       */
                     /* Error Data Delay Detection Done
                        
                          */
                    /*! \brief 01.FBB9.2 RO AEC 2 Error Data Delay Detection Done
                        AQ_AecDelayDetectionStatus_CAL.u0.bits_0.aec_2ErrorDataDelayDetectionDone

                        

                        Error Data Delay Detection Done
                        
                        
  */
      unsigned int   aec_2ErrorDataDelayDetectionDone : 1;    /* 01.FBB9.2  RO       */
                     /* Error Data Delay Detection Done
                        
                          */
                    /*! \brief 01.FBB9.1 RO AEC 1 Error Data Delay Detection Done
                        AQ_AecDelayDetectionStatus_CAL.u0.bits_0.aec_1ErrorDataDelayDetectionDone

                        

                        Error Data Delay Detection Done
                        
                        
  */
      unsigned int   aec_1ErrorDataDelayDetectionDone : 1;    /* 01.FBB9.1  RO       */
                     /* Error Data Delay Detection Done
                        
                          */
                    /*! \brief 01.FBB9.0 RO AEC 0 Error Data Delay Detection Done
                        AQ_AecDelayDetectionStatus_CAL.u0.bits_0.aec_0ErrorDataDelayDetectionDone

                        

                        Error Data Delay Detection Done
                        
                        
  */
      unsigned int   aec_0ErrorDataDelayDetectionDone : 1;    /* 01.FBB9.0  RO       */
                     /* Error Data Delay Detection Done
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Delay Detection Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FBBA.7:0 RO AEC 0 Measured Error Data Delay Detection Value [7:0]
                        AQ_AecDelayDetectionStatus_CAL.u1.bits_1.aec_0MeasuredErrorDataDelayDetectionValue

                        

                        Measured Error Data Delay Detection Value
                        
  */
      unsigned int   aec_0MeasuredErrorDataDelayDetectionValue : 8;    /* 01.FBBA.7:0  RO       */
                     /* Measured Error Data Delay Detection Value
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Delay Detection Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FBBB.7:0 RO AEC 1 Measured Error Data Delay Detection Value [7:0]
                        AQ_AecDelayDetectionStatus_CAL.u2.bits_2.aec_1MeasuredErrorDataDelayDetectionValue

                        

                        Measured Error Data Delay Detection Value
                        
  */
      unsigned int   aec_1MeasuredErrorDataDelayDetectionValue : 8;    /* 01.FBBB.7:0  RO       */
                     /* Measured Error Data Delay Detection Value
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Delay Detection Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FBBC.7:0 RO AEC 2 Measured Error Data Delay Detection Value [7:0]
                        AQ_AecDelayDetectionStatus_CAL.u3.bits_3.aec_2MeasuredErrorDataDelayDetectionValue

                        

                        Measured Error Data Delay Detection Value
                        
  */
      unsigned int   aec_2MeasuredErrorDataDelayDetectionValue : 8;    /* 01.FBBC.7:0  RO       */
                     /* Measured Error Data Delay Detection Value
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of AEC Delay Detection Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FBBD.7:0 RO AEC 3 Measured Error Data Delay Detection Value [7:0]
                        AQ_AecDelayDetectionStatus_CAL.u4.bits_4.aec_3MeasuredErrorDataDelayDetectionValue

                        

                        Measured Error Data Delay Detection Value
                        
  */
      unsigned int   aec_3MeasuredErrorDataDelayDetectionValue : 8;    /* 01.FBBD.7:0  RO       */
                     /* Measured Error Data Delay Detection Value
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_AecDelayDetectionStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Coefficient Write Status: 01.FBC0 */
/*                  AEC Coefficient Write Status: 01.FBC0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Coefficient Write Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBC0.3 RO AEC 3 Write Coefficient Done
                        AQ_AecCoefficientWriteStatus_CAL.u0.bits_0.aec_3WriteCoefficientDone

                        

                        1 = Write Coefficient Done
                        
                        

                 <B>Notes:</B>
                        Coefficient Write Done Status
                        Indicates when coefficient writing has completed for a given filter.
                        
                        The done bit is sticky high and remains high until the corresponding start bit is set to 1.  */
      unsigned int   aec_3WriteCoefficientDone : 1;    /* 01.FBC0.3  RO       */
                     /* 1 = Write Coefficient Done
                        
                          */
                    /*! \brief 01.FBC0.2 RO AEC 2 Write Coefficient Done
                        AQ_AecCoefficientWriteStatus_CAL.u0.bits_0.aec_2WriteCoefficientDone

                        

                        1 = Write Coefficient Done
                        
                        
  */
      unsigned int   aec_2WriteCoefficientDone : 1;    /* 01.FBC0.2  RO       */
                     /* 1 = Write Coefficient Done
                        
                          */
                    /*! \brief 01.FBC0.1 RO AEC 1 Write Coefficient Done
                        AQ_AecCoefficientWriteStatus_CAL.u0.bits_0.aec_1WriteCoefficientDone

                        

                        1 = Write Coefficient Done
                        
                        
  */
      unsigned int   aec_1WriteCoefficientDone : 1;    /* 01.FBC0.1  RO       */
                     /* 1 = Write Coefficient Done
                        
                          */
                    /*! \brief 01.FBC0.0 RO AEC 0 Write Coefficient Done
                        AQ_AecCoefficientWriteStatus_CAL.u0.bits_0.aec_0WriteCoefficientDone

                        

                        1 = Write Coefficient Done
                        
                        
  */
      unsigned int   aec_0WriteCoefficientDone : 1;    /* 01.FBC0.0  RO       */
                     /* 1 = Write Coefficient Done
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Coefficient Write Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBC1.3 RO AEC 3 Write Coefficient Start
                        AQ_AecCoefficientWriteStatus_CAL.u1.bits_1.aec_3WriteCoefficientStart

                        

                        1 = Write Coefficient Start
                        
                        

                 <B>Notes:</B>
                        Coefficient Write START Status
                        Indicates if a given client is busy.
                        
                        Note the start remains high until the Start bit fires.  */
      unsigned int   aec_3WriteCoefficientStart : 1;    /* 01.FBC1.3  RO       */
                     /* 1 = Write Coefficient Start
                        
                          */
                    /*! \brief 01.FBC1.2 RO AEC 2 Write Coefficient Start
                        AQ_AecCoefficientWriteStatus_CAL.u1.bits_1.aec_2WriteCoefficientStart

                        

                        1 = Write Coefficient Start
                        
                        
  */
      unsigned int   aec_2WriteCoefficientStart : 1;    /* 01.FBC1.2  RO       */
                     /* 1 = Write Coefficient Start
                        
                          */
                    /*! \brief 01.FBC1.1 RO AEC 1 Write Coefficient Start
                        AQ_AecCoefficientWriteStatus_CAL.u1.bits_1.aec_1WriteCoefficientStart

                        

                        1 = Write Coefficient Start
                        
                        
  */
      unsigned int   aec_1WriteCoefficientStart : 1;    /* 01.FBC1.1  RO       */
                     /* 1 = Write Coefficient Start
                        
                          */
                    /*! \brief 01.FBC1.0 RO AEC 0 Write Coefficient Start
                        AQ_AecCoefficientWriteStatus_CAL.u1.bits_1.aec_0WriteCoefficientStart

                        

                        1 = Write Coefficient Start
                        
                        
  */
      unsigned int   aec_0WriteCoefficientStart : 1;    /* 01.FBC1.0  RO       */
                     /* 1 = Write Coefficient Start
                        
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Coefficient Write Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FBC2.1:0 RO Filter Write Active Segment [1:0]
                        AQ_AecCoefficientWriteStatus_CAL.u2.bits_2.filterWriteActiveSegment

                        

                        Filter Write Active Segment
                        

                 <B>Notes:</B>
                        Current segment for selected filter which is currently being accessed.
                        
                        Note 0x0 means there is no activity. 0x1 means segment 0 for the current filter is being accessed, 0x2 means segment 1, etc.  */
      unsigned int   filterWriteActiveSegment : 2;    /* 01.FBC2.1:0  RO       */
                     /* Filter Write Active Segment
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Coefficient Write Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FBC3.2 BLH AEC Coefficient DMA Write Error
                        AQ_AecCoefficientWriteStatus_CAL.u3.bits_3.aecCoefficientDmaWriteError

                        

                        Coefficient MDIO Write Error
                        
                        

                 <B>Notes:</B>
                        DMA Write Error Status Flag  */
      unsigned int   aecCoefficientDmaWriteError : 1;    /* 01.FBC3.2  BLH       */
                     /* Coefficient MDIO Write Error
                        
                          */
                    /*! \brief 01.FBC3.1 BLH AEC Coefficient MDIO Write Error
                        AQ_AecCoefficientWriteStatus_CAL.u3.bits_3.aecCoefficientMdioWriteError

                        

                        Coefficient MDIO Write Error
                        
                        

                 <B>Notes:</B>
                        MDIO/PIF Write Error Status Flag  */
      unsigned int   aecCoefficientMdioWriteError : 1;    /* 01.FBC3.1  BLH       */
                     /* Coefficient MDIO Write Error
                        
                          */
                    /*! \brief 01.FBC3.0 BLH AEC Coefficient MCP Write Error
                        AQ_AecCoefficientWriteStatus_CAL.u3.bits_3.aecCoefficientMcpWriteError

                        

                        Coefficient MCP Write Error
                        
                        

                 <B>Notes:</B>
                        MCP Write Error Status Flag  */
      unsigned int   aecCoefficientMcpWriteError : 1;    /* 01.FBC3.0  BLH       */
                     /* Coefficient MCP Write Error
                        
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_AecCoefficientWriteStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Coefficient Read Status: 01.FBC8 */
/*                  AEC Coefficient Read Status: 01.FBC8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Coefficient Read Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBC8.3 RO AEC 3 Read Coefficient Done
                        AQ_AecCoefficientReadStatus_CAL.u0.bits_0.aec_3ReadCoefficientDone

                        

                        1 = Read Coefficient Done
                        
                        

                 <B>Notes:</B>
                        Coefficient Read Done Status
                        Indicates when coefficient writing has completed for a given filter.
                        
                        The done bit is sticky high and remains high until the corresponding start bit is set to 1.  */
      unsigned int   aec_3ReadCoefficientDone : 1;    /* 01.FBC8.3  RO       */
                     /* 1 = Read Coefficient Done
                        
                          */
                    /*! \brief 01.FBC8.2 RO AEC 2 Read Coefficient Done
                        AQ_AecCoefficientReadStatus_CAL.u0.bits_0.aec_2ReadCoefficientDone

                        

                        1 = Read Coefficient Done
                        
                        
  */
      unsigned int   aec_2ReadCoefficientDone : 1;    /* 01.FBC8.2  RO       */
                     /* 1 = Read Coefficient Done
                        
                          */
                    /*! \brief 01.FBC8.1 RO AEC 1 Read Coefficient Done
                        AQ_AecCoefficientReadStatus_CAL.u0.bits_0.aec_1ReadCoefficientDone

                        

                        1 = Read Coefficient Done
                        
                        
  */
      unsigned int   aec_1ReadCoefficientDone : 1;    /* 01.FBC8.1  RO       */
                     /* 1 = Read Coefficient Done
                        
                          */
                    /*! \brief 01.FBC8.0 RO AEC 0 Read Coefficient Done
                        AQ_AecCoefficientReadStatus_CAL.u0.bits_0.aec_0ReadCoefficientDone

                        

                        1 = Read Coefficient Done
                        
                        
  */
      unsigned int   aec_0ReadCoefficientDone : 1;    /* 01.FBC8.0  RO       */
                     /* 1 = Read Coefficient Done
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Coefficient Read Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBC9.3 RO AEC 3 Read Coefficient Start
                        AQ_AecCoefficientReadStatus_CAL.u1.bits_1.aec_3ReadCoefficientStart

                        

                        1 = Read Coefficient Start
                        
                        

                 <B>Notes:</B>
                        Coefficient Read START Status
                        Indicates if a given client is busy.
                        
                        Note the start remains high until the Start bit fires.  */
      unsigned int   aec_3ReadCoefficientStart : 1;    /* 01.FBC9.3  RO       */
                     /* 1 = Read Coefficient Start
                        
                          */
                    /*! \brief 01.FBC9.2 RO AEC 2 Read Coefficient Start
                        AQ_AecCoefficientReadStatus_CAL.u1.bits_1.aec_2ReadCoefficientStart

                        

                        1 = Read Coefficient Start
                        
                        
  */
      unsigned int   aec_2ReadCoefficientStart : 1;    /* 01.FBC9.2  RO       */
                     /* 1 = Read Coefficient Start
                        
                          */
                    /*! \brief 01.FBC9.1 RO AEC 1 Read Coefficient Start
                        AQ_AecCoefficientReadStatus_CAL.u1.bits_1.aec_1ReadCoefficientStart

                        

                        1 = Read Coefficient Start
                        
                        
  */
      unsigned int   aec_1ReadCoefficientStart : 1;    /* 01.FBC9.1  RO       */
                     /* 1 = Read Coefficient Start
                        
                          */
                    /*! \brief 01.FBC9.0 RO AEC 0 Read Coefficient Start
                        AQ_AecCoefficientReadStatus_CAL.u1.bits_1.aec_0ReadCoefficientStart

                        

                        1 = Read Coefficient Start
                        
                        
  */
      unsigned int   aec_0ReadCoefficientStart : 1;    /* 01.FBC9.0  RO       */
                     /* 1 = Read Coefficient Start
                        
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of AEC Coefficient Read Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 01.FBCA.1:0 RO Filter Read Active Segment [1:0]
                        AQ_AecCoefficientReadStatus_CAL.u2.bits_2.filterReadActiveSegment

                        

                        Filter Read Active Segment
                        

                 <B>Notes:</B>
                        Current segment for selected filter which is currently being accessed.
                        
                        Note 0x0 means there is no activity. 0x1 means segment 0 for the current filter is being accessed, 0x2 means segment 1, etc.  */
      unsigned int   filterReadActiveSegment : 2;    /* 01.FBCA.1:0  RO       */
                     /* Filter Read Active Segment
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of AEC Coefficient Read Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 01.FBCB.2 BLH AEC Coefficient DMA Read Error
                        AQ_AecCoefficientReadStatus_CAL.u3.bits_3.aecCoefficientDmaReadError

                        

                        Coefficient MDIO Read Error
                        
                        

                 <B>Notes:</B>
                        DMA Read Error Status Flag  */
      unsigned int   aecCoefficientDmaReadError : 1;    /* 01.FBCB.2  BLH       */
                     /* Coefficient MDIO Read Error
                        
                          */
                    /*! \brief 01.FBCB.1 BLH AEC Coefficient MDIO Read Error
                        AQ_AecCoefficientReadStatus_CAL.u3.bits_3.aecCoefficientMdioReadError

                        

                        Coefficient MDIO Read Error
                        
                        

                 <B>Notes:</B>
                        MDIO/PIF Read Error Status Flag  */
      unsigned int   aecCoefficientMdioReadError : 1;    /* 01.FBCB.1  BLH       */
                     /* Coefficient MDIO Read Error
                        
                          */
                    /*! \brief 01.FBCB.0 BLH AEC Coefficient MCP Read Error
                        AQ_AecCoefficientReadStatus_CAL.u3.bits_3.aecCoefficientMcpReadError

                        

                        Coefficient MCP Read Error
                        
                        

                 <B>Notes:</B>
                        MCP Read Error Status Flag  */
      unsigned int   aecCoefficientMcpReadError : 1;    /* 01.FBCB.0  BLH       */
                     /* Coefficient MCP Read Error
                        
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_AecCoefficientReadStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Saturation Status: 01.FBD0 */
/*                  AEC Saturation Status: 01.FBD0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Saturation Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBD0.3 BLH AEC 3 Output Saturation Flag
                        AQ_AecSaturationStatus_CAL.u0.bits_0.aec_3OutputSaturationFlag

                        

                        1 = Output Saturation Flag
                        
                        

                 <B>Notes:</B>
                        Output Data of the AEC is clamped to 26 bits. This flag indicates of during this clamping saturation occurred on the output of the FIR summation.  */
      unsigned int   aec_3OutputSaturationFlag : 1;    /* 01.FBD0.3  BLH       */
                     /* 1 = Output Saturation Flag
                        
                          */
                    /*! \brief 01.FBD0.2 BLH AEC 2 Output Saturation Flag
                        AQ_AecSaturationStatus_CAL.u0.bits_0.aec_2OutputSaturationFlag

                        

                        1 = Output Saturation Flag
                        
                        
  */
      unsigned int   aec_2OutputSaturationFlag : 1;    /* 01.FBD0.2  BLH       */
                     /* 1 = Output Saturation Flag
                        
                          */
                    /*! \brief 01.FBD0.1 BLH AEC 1 Output Saturation Flag
                        AQ_AecSaturationStatus_CAL.u0.bits_0.aec_1OutputSaturationFlag

                        

                        1 = Output Saturation Flag
                        
                        
  */
      unsigned int   aec_1OutputSaturationFlag : 1;    /* 01.FBD0.1  BLH       */
                     /* 1 = Output Saturation Flag
                        
                          */
                    /*! \brief 01.FBD0.0 BLH AEC 0 Output Saturation Flag
                        AQ_AecSaturationStatus_CAL.u0.bits_0.aec_0OutputSaturationFlag

                        

                        1 = Output Saturation Flag
                        
                        
  */
      unsigned int   aec_0OutputSaturationFlag : 1;    /* 01.FBD0.0  BLH       */
                     /* 1 = Output Saturation Flag
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecSaturationStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC CUE Flush Status: 01.FBD2 */
/*                  AEC CUE Flush Status: 01.FBD2 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC CUE Flush Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBD2.3 RO AEC 3 CUE Flush Done
                        AQ_AecCueFlushStatus_CAL.u0.bits_0.aec_3CueFlushDone

                        

                        1 = CUE Flush Done
                        
                        

                 <B>Notes:</B>
                        This register indicates when the CUE flush operation has completed. It is sticky high and clears when the corresponding filter CUE flush register is set to 1.  */
      unsigned int   aec_3CueFlushDone : 1;    /* 01.FBD2.3  RO       */
                     /* 1 = CUE Flush Done
                        
                          */
                    /*! \brief 01.FBD2.2 RO AEC 2 CUE Flush Done
                        AQ_AecCueFlushStatus_CAL.u0.bits_0.aec_2CueFlushDone

                        

                        1 = CUE Flush Done
                        
                        
  */
      unsigned int   aec_2CueFlushDone : 1;    /* 01.FBD2.2  RO       */
                     /* 1 = CUE Flush Done
                        
                          */
                    /*! \brief 01.FBD2.1 RO AEC 1 CUE Flush Done
                        AQ_AecCueFlushStatus_CAL.u0.bits_0.aec_1CueFlushDone

                        

                        1 = CUE Flush Done
                        
                        
  */
      unsigned int   aec_1CueFlushDone : 1;    /* 01.FBD2.1  RO       */
                     /* 1 = CUE Flush Done
                        
                          */
                    /*! \brief 01.FBD2.0 RO AEC 0 CUE Flush Done
                        AQ_AecCueFlushStatus_CAL.u0.bits_0.aec_0CueFlushDone

                        

                        1 = CUE Flush Done
                        
                        
  */
      unsigned int   aec_0CueFlushDone : 1;    /* 01.FBD2.0  RO       */
                     /* 1 = CUE Flush Done
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecCueFlushStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC CUE Single Step Status: 01.FBD4 */
/*                  AEC CUE Single Step Status: 01.FBD4 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC CUE Single Step Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBD4.3 RO AEC 3 Single Step Done
                        AQ_AecCueSingleStepStatus_CAL.u0.bits_0.aec_3SingleStepDone

                        

                        1 = Single Step Done
                        
                        

                 <B>Notes:</B>
                        This register indicates when the single step operation has completed. It is sticky high and clears when the corresponding filter single step register is set to 1.  */
      unsigned int   aec_3SingleStepDone : 1;    /* 01.FBD4.3  RO       */
                     /* 1 = Single Step Done
                        
                          */
                    /*! \brief 01.FBD4.2 RO AEC 2 Single Step Done
                        AQ_AecCueSingleStepStatus_CAL.u0.bits_0.aec_2SingleStepDone

                        

                        1 = Single Step Done
                        
                        
  */
      unsigned int   aec_2SingleStepDone : 1;    /* 01.FBD4.2  RO       */
                     /* 1 = Single Step Done
                        
                          */
                    /*! \brief 01.FBD4.1 RO AEC 1 Single Step Done
                        AQ_AecCueSingleStepStatus_CAL.u0.bits_0.aec_1SingleStepDone

                        

                        1 = Single Step Done
                        
                        
  */
      unsigned int   aec_1SingleStepDone : 1;    /* 01.FBD4.1  RO       */
                     /* 1 = Single Step Done
                        
                          */
                    /*! \brief 01.FBD4.0 RO AEC 0 Single Step Done
                        AQ_AecCueSingleStepStatus_CAL.u0.bits_0.aec_0SingleStepDone

                        

                        1 = Single Step Done
                        
                        
  */
      unsigned int   aec_0SingleStepDone : 1;    /* 01.FBD4.0  RO       */
                     /* 1 = Single Step Done
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecCueSingleStepStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC CUE Leakage Period Status: 01.FBD8 */
/*                  AEC CUE Leakage Period Status: 01.FBD8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC CUE Leakage Period Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBD8.3 RO AEC 3 Leakage Period Done
                        AQ_AecCueLeakagePeriodStatus_CAL.u0.bits_0.aec_3LeakagePeriodDone

                        

                        1 = Leakage Period Done
                        
                        

                 <B>Notes:</B>
                        Flag to indicate when all iterations are completed for leakage period application.  */
      unsigned int   aec_3LeakagePeriodDone : 1;    /* 01.FBD8.3  RO       */
                     /* 1 = Leakage Period Done
                        
                          */
                    /*! \brief 01.FBD8.2 RO AEC 2 Leakage Period Done
                        AQ_AecCueLeakagePeriodStatus_CAL.u0.bits_0.aec_2LeakagePeriodDone

                        

                        1 = Leakage Period Done
                        
                        
  */
      unsigned int   aec_2LeakagePeriodDone : 1;    /* 01.FBD8.2  RO       */
                     /* 1 = Leakage Period Done
                        
                          */
                    /*! \brief 01.FBD8.1 RO AEC 1 Leakage Period Done
                        AQ_AecCueLeakagePeriodStatus_CAL.u0.bits_0.aec_1LeakagePeriodDone

                        

                        1 = Leakage Period Done
                        
                        
  */
      unsigned int   aec_1LeakagePeriodDone : 1;    /* 01.FBD8.1  RO       */
                     /* 1 = Leakage Period Done
                        
                          */
                    /*! \brief 01.FBD8.0 RO AEC 0 Leakage Period Done
                        AQ_AecCueLeakagePeriodStatus_CAL.u0.bits_0.aec_0LeakagePeriodDone

                        

                        1 = Leakage Period Done
                        
                        
  */
      unsigned int   aec_0LeakagePeriodDone : 1;    /* 01.FBD8.0  RO       */
                     /* 1 = Leakage Period Done
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecCueLeakagePeriodStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 AEC CUE Leakage Period Status: 01.FBD9 */
/*                  CH0 AEC CUE Leakage Period Status: 01.FBD9 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 AEC CUE Leakage Period Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBD9.F:0 RO AEC 0 Leakage Iteration Status [F:0]
                        AQ_Ch0AecCueLeakagePeriodStatus_CAL.u0.bits_0.aec_0LeakageIterationStatus

                        

                        AEC 0 Leakage Iterations Status
                        

                 <B>Notes:</B>
                        Status indicating number of period iterations which have been completed, sets.
                          */
      unsigned int   aec_0LeakageIterationStatus : 16;    /* 01.FBD9.F:0  RO       */
                     /* AEC 0 Leakage Iterations Status
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch0AecCueLeakagePeriodStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 AEC CUE Leakage Period Status: 01.FBDA */
/*                  CH1 AEC CUE Leakage Period Status: 01.FBDA */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 AEC CUE Leakage Period Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBDA.F:0 RO AEC 1 Leakage Iteration Status [F:0]
                        AQ_Ch1AecCueLeakagePeriodStatus_CAL.u0.bits_0.aec_1LeakageIterationStatus

                        

                        AEC 1 Leakage Iterations Status
                        

                 <B>Notes:</B>
                        Status indicating number of period iterations which have been completed, sets.
                          */
      unsigned int   aec_1LeakageIterationStatus : 16;    /* 01.FBDA.F:0  RO       */
                     /* AEC 1 Leakage Iterations Status
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch1AecCueLeakagePeriodStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 AEC CUE Leakage Period Status: 01.FBDB */
/*                  CH2 AEC CUE Leakage Period Status: 01.FBDB */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 AEC CUE Leakage Period Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBDB.F:0 RO AEC 2 Leakage Iteration Status [F:0]
                        AQ_Ch2AecCueLeakagePeriodStatus_CAL.u0.bits_0.aec_2LeakageIterationStatus

                        

                        AEC 2 Leakage Iterations Status
                        

                 <B>Notes:</B>
                        Status indicating number of period iterations which have been completed, sets.
                          */
      unsigned int   aec_2LeakageIterationStatus : 16;    /* 01.FBDB.F:0  RO       */
                     /* AEC 2 Leakage Iterations Status
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch2AecCueLeakagePeriodStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 AEC CUE Leakage Period Status: 01.FBDC */
/*                  CH3 AEC CUE Leakage Period Status: 01.FBDC */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 AEC CUE Leakage Period Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBDC.F:0 RO AEC 3 Leakage Iteration Status [F:0]
                        AQ_Ch3AecCueLeakagePeriodStatus_CAL.u0.bits_0.aec_3LeakageIterationStatus

                        

                        AEC 3 Leakage Iterations Status
                        

                 <B>Notes:</B>
                        Status indicating number of period iterations which have been completed, sets.
                          */
      unsigned int   aec_3LeakageIterationStatus : 16;    /* 01.FBDC.F:0  RO       */
                     /* AEC 3 Leakage Iterations Status
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch3AecCueLeakagePeriodStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC FIR Global Flush Status: 01.FBE0 */
/*                  AEC FIR Global Flush Status: 01.FBE0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC FIR Global Flush Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 12;
                    /*! \brief 01.FBE0.3 RO AEC 3 FIR Global Flush Done
                        AQ_AecFirGlobalFlushStatus_CAL.u0.bits_0.aec_3FirGlobalFlushDone

                        

                        1 = FIR Global Flush Done
                        
                        

                 <B>Notes:</B>
                        Flag to indicate when all iterations are completed for Global Flush.  */
      unsigned int   aec_3FirGlobalFlushDone : 1;    /* 01.FBE0.3  RO       */
                     /* 1 = FIR Global Flush Done
                        
                          */
                    /*! \brief 01.FBE0.2 RO AEC 2 FIR Global Flush Done
                        AQ_AecFirGlobalFlushStatus_CAL.u0.bits_0.aec_2FirGlobalFlushDone

                        

                        1 = FIR Global Flush Done
                        
                        
  */
      unsigned int   aec_2FirGlobalFlushDone : 1;    /* 01.FBE0.2  RO       */
                     /* 1 = FIR Global Flush Done
                        
                          */
                    /*! \brief 01.FBE0.1 RO AEC 1 FIR Global Flush Done
                        AQ_AecFirGlobalFlushStatus_CAL.u0.bits_0.aec_1FirGlobalFlushDone

                        

                        1 = FIR Global Flush Done
                        
                        
  */
      unsigned int   aec_1FirGlobalFlushDone : 1;    /* 01.FBE0.1  RO       */
                     /* 1 = FIR Global Flush Done
                        
                          */
                    /*! \brief 01.FBE0.0 RO AEC 0 FIR Global Flush Done
                        AQ_AecFirGlobalFlushStatus_CAL.u0.bits_0.aec_0FirGlobalFlushDone

                        

                        1 = FIR Global Flush Done
                        
                        
  */
      unsigned int   aec_0FirGlobalFlushDone : 1;    /* 01.FBE0.0  RO       */
                     /* 1 = FIR Global Flush Done
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecFirGlobalFlushStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC Coefficient Saturation Status: 01.FBE4 */
/*                  AEC Coefficient Saturation Status: 01.FBE4 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC Coefficient Saturation Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FBE4.7:6 BLH AEC 3 Coefficient Saturation flag [1:0]
                        AQ_AecCoefficientSaturationStatus_CAL.u0.bits_0.aec_3CoefficientSaturationFlag

                        

                        AEC 3 Coefficient Saturation Flag

                 <B>Notes:</B>
                        25 bit internal coefficient (sat1) error flag  */
      unsigned int   aec_3CoefficientSaturationFlag : 2;    /* 01.FBE4.7:6  BLH       */
                     /* AEC 3 Coefficient Saturation Flag  */
                    /*! \brief 01.FBE4.5:4 BLH AEC 2 Coefficient Saturation flag [1:0]
                        AQ_AecCoefficientSaturationStatus_CAL.u0.bits_0.aec_2CoefficientSaturationFlag

                        

                        AEC 2 Coefficient Saturation Flag
  */
      unsigned int   aec_2CoefficientSaturationFlag : 2;    /* 01.FBE4.5:4  BLH       */
                     /* AEC 2 Coefficient Saturation Flag  */
                    /*! \brief 01.FBE4.3:2 BLH AEC 1 Coefficient Saturation flag [1:0]
                        AQ_AecCoefficientSaturationStatus_CAL.u0.bits_0.aec_1CoefficientSaturationFlag

                        

                        AEC 1 Coefficient Saturation Flag
  */
      unsigned int   aec_1CoefficientSaturationFlag : 2;    /* 01.FBE4.3:2  BLH       */
                     /* AEC 1 Coefficient Saturation Flag  */
                    /*! \brief 01.FBE4.1:0 BLH AEC 0 Coefficient Saturation flag [1:0]
                        AQ_AecCoefficientSaturationStatus_CAL.u0.bits_0.aec_0CoefficientSaturationFlag

                        

                        AEC 0 Coefficient Saturation Flag
  */
      unsigned int   aec_0CoefficientSaturationFlag : 2;    /* 01.FBE4.1:0  BLH       */
                     /* AEC 0 Coefficient Saturation Flag  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of AEC Coefficient Saturation Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
                    /*! \brief 01.FBE5.7:6 BLH AEC 3 FIR Coefficient Saturation flag [1:0]
                        AQ_AecCoefficientSaturationStatus_CAL.u1.bits_1.aec_3FirCoefficientSaturationFlag

                        

                        AEC 3 FIR Coefficient Saturation Flag

                 <B>Notes:</B>
                        FIR FIR Coefficient (sat2) error flag  */
      unsigned int   aec_3FirCoefficientSaturationFlag : 2;    /* 01.FBE5.7:6  BLH       */
                     /* AEC 3 FIR Coefficient Saturation Flag  */
                    /*! \brief 01.FBE5.5:4 BLH AEC 2 FIR Coefficient Saturation flag [1:0]
                        AQ_AecCoefficientSaturationStatus_CAL.u1.bits_1.aec_2FirCoefficientSaturationFlag

                        

                        AEC 2 FIR Coefficient Saturation Flag
  */
      unsigned int   aec_2FirCoefficientSaturationFlag : 2;    /* 01.FBE5.5:4  BLH       */
                     /* AEC 2 FIR Coefficient Saturation Flag  */
                    /*! \brief 01.FBE5.3:2 BLH AEC 1 FIR Coefficient Saturation flag [1:0]
                        AQ_AecCoefficientSaturationStatus_CAL.u1.bits_1.aec_1FirCoefficientSaturationFlag

                        

                        AEC 1 FIR Coefficient Saturation Flag
  */
      unsigned int   aec_1FirCoefficientSaturationFlag : 2;    /* 01.FBE5.3:2  BLH       */
                     /* AEC 1 FIR Coefficient Saturation Flag  */
                    /*! \brief 01.FBE5.1:0 BLH AEC 0 FIR Coefficient Saturation flag [1:0]
                        AQ_AecCoefficientSaturationStatus_CAL.u1.bits_1.aec_0FirCoefficientSaturationFlag

                        

                        AEC 0 FIR Coefficient Saturation Flag
  */
      unsigned int   aec_0FirCoefficientSaturationFlag : 2;    /* 01.FBE5.1:0  BLH       */
                     /* AEC 0 FIR Coefficient Saturation Flag  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_AecCoefficientSaturationStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG0 AEC CUE Max Coefficient Status: 01.FBE6 */
/*                  CH0 SEG0 AEC CUE Max Coefficient Status: 01.FBE6 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG0 AEC CUE Max Coefficient Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FBE6.8:0 RO AEC 0 CUE Max Coefficient Segment 0 [8:0]
                        AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL.u0.bits_0.aec_0CueMaxCoefficientSegment_0

                        

                        CUE Max Coefficient
                        
                        

                 <B>Notes:</B>
                        Absolute value max coefficient value calculated every 64 clock cycles in CUE segment.  */
      unsigned int   aec_0CueMaxCoefficientSegment_0 : 9;    /* 01.FBE6.8:0  RO       */
                     /* CUE Max Coefficient
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG1 AEC CUE Max Coefficient Status: 01.FBE7 */
/*                  CH0 SEG1 AEC CUE Max Coefficient Status: 01.FBE7 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG1 AEC CUE Max Coefficient Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FBE7.8:0 RO AEC 0 CUE Max Coefficient Segment 1 [8:0]
                        AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL.u0.bits_0.aec_0CueMaxCoefficientSegment_1

                        

                        CUE Max Coefficient
                        
                        

                 <B>Notes:</B>
                        Absolute value max coefficient value calculated every 64 clock cycles in CUE segment.  */
      unsigned int   aec_0CueMaxCoefficientSegment_1 : 9;    /* 01.FBE7.8:0  RO       */
                     /* CUE Max Coefficient
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG0 AEC CUE Max Coefficient Status: 01.FBE8 */
/*                  CH1 SEG0 AEC CUE Max Coefficient Status: 01.FBE8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG0 AEC CUE Max Coefficient Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FBE8.8:0 RO AEC 1 CUE Max Coefficient Segment 0 [8:0]
                        AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL.u0.bits_0.aec_1CueMaxCoefficientSegment_0

                        

                        CUE Max Coefficient
                        
                        

                 <B>Notes:</B>
                        Absolute value max coefficient value calculated every 64 clock cycles in CUE segment.  */
      unsigned int   aec_1CueMaxCoefficientSegment_0 : 9;    /* 01.FBE8.8:0  RO       */
                     /* CUE Max Coefficient
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG1 AEC CUE Max Coefficient Status: 01.FBE9 */
/*                  CH1 SEG1 AEC CUE Max Coefficient Status: 01.FBE9 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG1 AEC CUE Max Coefficient Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FBE9.8:0 RO AEC 1 CUE Max Coefficient Segment 1 [8:0]
                        AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL.u0.bits_0.aec_1CueMaxCoefficientSegment_1

                        

                        CUE Max Coefficient
                        
                        

                 <B>Notes:</B>
                        Absolute value max coefficient value calculated every 64 clock cycles in CUE segment.  */
      unsigned int   aec_1CueMaxCoefficientSegment_1 : 9;    /* 01.FBE9.8:0  RO       */
                     /* CUE Max Coefficient
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG0 AEC CUE Max Coefficient Status: 01.FBEA */
/*                  CH2 SEG0 AEC CUE Max Coefficient Status: 01.FBEA */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG0 AEC CUE Max Coefficient Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FBEA.8:0 RO AEC 2 CUE Max Coefficient Segment 0 [8:0]
                        AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL.u0.bits_0.aec_2CueMaxCoefficientSegment_0

                        

                        CUE Max Coefficient
                        
                        

                 <B>Notes:</B>
                        Absolute value max coefficient value calculated every 64 clock cycles in CUE segment.  */
      unsigned int   aec_2CueMaxCoefficientSegment_0 : 9;    /* 01.FBEA.8:0  RO       */
                     /* CUE Max Coefficient
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG1 AEC CUE Max Coefficient Status: 01.FBEB */
/*                  CH2 SEG1 AEC CUE Max Coefficient Status: 01.FBEB */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG1 AEC CUE Max Coefficient Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FBEB.8:0 RO AEC 2 CUE Max Coefficient Segment 1 [8:0]
                        AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL.u0.bits_0.aec_2CueMaxCoefficientSegment_1

                        

                        CUE Max Coefficient
                        
                        

                 <B>Notes:</B>
                        Absolute value max coefficient value calculated every 64 clock cycles in CUE segment.  */
      unsigned int   aec_2CueMaxCoefficientSegment_1 : 9;    /* 01.FBEB.8:0  RO       */
                     /* CUE Max Coefficient
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG0 AEC CUE Max Coefficient Status: 01.FBEC */
/*                  CH3 SEG0 AEC CUE Max Coefficient Status: 01.FBEC */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG0 AEC CUE Max Coefficient Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FBEC.8:0 RO AEC 0 CUE Max Coefficient Segment 0 [8:0]
                        AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL.u0.bits_0.aec_0CueMaxCoefficientSegment_0

                        

                        CUE Max Coefficient
                        
                        

                 <B>Notes:</B>
                        Absolute value max coefficient value calculated every 64 clock cycles in CUE segment.  */
      unsigned int   aec_0CueMaxCoefficientSegment_0 : 9;    /* 01.FBEC.8:0  RO       */
                     /* CUE Max Coefficient
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG1 AEC CUE Max Coefficient Status: 01.FBED */
/*                  CH3 SEG1 AEC CUE Max Coefficient Status: 01.FBED */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG1 AEC CUE Max Coefficient Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 7;
                    /*! \brief 01.FBED.8:0 RO AEC 3 CUE Max Coefficient Segment 1 [8:0]
                        AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL.u0.bits_0.aec_3CueMaxCoefficientSegment_1

                        

                        CUE Max Coefficient
                        
                        

                 <B>Notes:</B>
                        Absolute value max coefficient value calculated every 64 clock cycles in CUE segment.  */
      unsigned int   aec_3CueMaxCoefficientSegment_1 : 9;    /* 01.FBED.8:0  RO       */
                     /* CUE Max Coefficient
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG0 AEC CUE Coefficient Sum Status: 01.FBEE */
/*                  CH0 SEG0 AEC CUE Coefficient Sum Status: 01.FBEE */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG0 AEC CUE Coefficient Sum Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBEE.F:0 RO AEC 0 CUE Coefficient Sum Segment 0 [F:0]
                        AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL.u0.bits_0.aec_0CueCoefficientSumSegment_0

                        

                        CUE Coefficient Sum
                        
                        

                 <B>Notes:</B>
                        Total sum power of coefficients for a given CUE segment, updated eery 64 clock cycles  */
      unsigned int   aec_0CueCoefficientSumSegment_0 : 16;    /* 01.FBEE.F:0  RO       */
                     /* CUE Coefficient Sum
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 SEG1 AEC CUE Coefficient Sum Status: 01.FBEF */
/*                  CH0 SEG1 AEC CUE Coefficient Sum Status: 01.FBEF */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 SEG1 AEC CUE Coefficient Sum Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBEF.F:0 RO AEC 0 CUE Coefficient Sum Segment 1 [F:0]
                        AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL.u0.bits_0.aec_0CueCoefficientSumSegment_1

                        

                        CUE Coefficient Sum
                        
                        

                 <B>Notes:</B>
                        Total sum power of coefficients for a given CUE segment, updated eery 64 clock cycles  */
      unsigned int   aec_0CueCoefficientSumSegment_1 : 16;    /* 01.FBEF.F:0  RO       */
                     /* CUE Coefficient Sum
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG0 AEC CUE Coefficient Sum Status: 01.FBF0 */
/*                  CH1 SEG0 AEC CUE Coefficient Sum Status: 01.FBF0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG0 AEC CUE Coefficient Sum Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBF0.F:0 RO AEC 1 CUE Coefficient Sum Segment 0 [F:0]
                        AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL.u0.bits_0.aec_1CueCoefficientSumSegment_0

                        

                        CUE Coefficient Sum
                        
                        

                 <B>Notes:</B>
                        Total sum power of coefficients for a given CUE segment, updated eery 64 clock cycles  */
      unsigned int   aec_1CueCoefficientSumSegment_0 : 16;    /* 01.FBF0.F:0  RO       */
                     /* CUE Coefficient Sum
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 SEG1 AEC CUE Coefficient Sum Status: 01.FBF1 */
/*                  CH1 SEG1 AEC CUE Coefficient Sum Status: 01.FBF1 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 SEG1 AEC CUE Coefficient Sum Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBF1.F:0 RO AEC 1 CUE Coefficient Sum Segment 1 [F:0]
                        AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL.u0.bits_0.aec_1CueCoefficientSumSegment_1

                        

                        CUE Coefficient Sum
                        
                        

                 <B>Notes:</B>
                        Total sum power of coefficients for a given CUE segment, updated eery 64 clock cycles  */
      unsigned int   aec_1CueCoefficientSumSegment_1 : 16;    /* 01.FBF1.F:0  RO       */
                     /* CUE Coefficient Sum
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG0 AEC CUE Coefficient Sum Status: 01.FBF2 */
/*                  CH2 SEG0 AEC CUE Coefficient Sum Status: 01.FBF2 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG0 AEC CUE Coefficient Sum Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBF2.F:0 RO AEC 2 CUE Coefficient Sum Segment 0 [F:0]
                        AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL.u0.bits_0.aec_2CueCoefficientSumSegment_0

                        

                        CUE Coefficient Sum
                        
                        

                 <B>Notes:</B>
                        Total sum power of coefficients for a given CUE segment, updated eery 64 clock cycles  */
      unsigned int   aec_2CueCoefficientSumSegment_0 : 16;    /* 01.FBF2.F:0  RO       */
                     /* CUE Coefficient Sum
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 SEG1 AEC CUE Coefficient Sum Status: 01.FBF3 */
/*                  CH2 SEG1 AEC CUE Coefficient Sum Status: 01.FBF3 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 SEG1 AEC CUE Coefficient Sum Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBF3.F:0 RO AEC 2 CUE Coefficient Sum Segment 1 [F:0]
                        AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL.u0.bits_0.aec_2CueCoefficientSumSegment_1

                        

                        CUE Coefficient Sum
                        
                        

                 <B>Notes:</B>
                        Total sum power of coefficients for a given CUE segment, updated eery 64 clock cycles  */
      unsigned int   aec_2CueCoefficientSumSegment_1 : 16;    /* 01.FBF3.F:0  RO       */
                     /* CUE Coefficient Sum
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG0 AEC CUE Coefficient Sum Status: 01.FBF4 */
/*                  CH3 SEG0 AEC CUE Coefficient Sum Status: 01.FBF4 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG0 AEC CUE Coefficient Sum Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBF4.F:0 RO AEC 0 CUE Coefficient Sum Segment 0 [F:0]
                        AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL.u0.bits_0.aec_0CueCoefficientSumSegment_0

                        

                        CUE Coefficient Sum
                        
                        

                 <B>Notes:</B>
                        Total sum power of coefficients for a given CUE segment, updated eery 64 clock cycles  */
      unsigned int   aec_0CueCoefficientSumSegment_0 : 16;    /* 01.FBF4.F:0  RO       */
                     /* CUE Coefficient Sum
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 SEG1 AEC CUE Coefficient Sum Status: 01.FBF5 */
/*                  CH3 SEG1 AEC CUE Coefficient Sum Status: 01.FBF5 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 SEG1 AEC CUE Coefficient Sum Status */
  union
  {
    struct
    {
                    /*! \brief 01.FBF5.F:0 RO AEC 3 CUE Coefficient Sum Segment 1 [F:0]
                        AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL.u0.bits_0.aec_3CueCoefficientSumSegment_1

                        

                        CUE Coefficient Sum
                        
                        

                 <B>Notes:</B>
                        Total sum power of coefficients for a given CUE segment, updated eery 64 clock cycles  */
      unsigned int   aec_3CueCoefficientSumSegment_1 : 16;    /* 01.FBF5.F:0  RO       */
                     /* CUE Coefficient Sum
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH0 AEC Spare: 01.FBF6 */
/*                  CH0 AEC Spare: 01.FBF6 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH0 AEC Spare */
  union
  {
    struct
    {
                    /*! \brief 01.FBF6.F:0 R/W AEC 0 Spare [F:0]
                        AQ_Ch0AecSpare_CAL.u0.bits_0.aec_0Spare

                        Default = 0x00FF

                        Spare Register
                        
  */
      unsigned int   aec_0Spare : 16;    /* 01.FBF6.F:0  R/W      Default = 0x00FF */
                     /* Spare Register
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch0AecSpare_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH1 AEC Spare: 01.FBF7 */
/*                  CH1 AEC Spare: 01.FBF7 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH1 AEC Spare */
  union
  {
    struct
    {
                    /*! \brief 01.FBF7.F:0 R/W AEC 1 Spare [F:0]
                        AQ_Ch1AecSpare_CAL.u0.bits_0.aec_1Spare

                        Default = 0x00FF

                        Spare Register
                        
  */
      unsigned int   aec_1Spare : 16;    /* 01.FBF7.F:0  R/W      Default = 0x00FF */
                     /* Spare Register
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch1AecSpare_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH2 AEC Spare: 01.FBF8 */
/*                  CH2 AEC Spare: 01.FBF8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH2 AEC Spare */
  union
  {
    struct
    {
                    /*! \brief 01.FBF8.F:0 R/W AEC 2 Spare [F:0]
                        AQ_Ch2AecSpare_CAL.u0.bits_0.aec_2Spare

                        Default = 0x00FF

                        Spare Register
                        
  */
      unsigned int   aec_2Spare : 16;    /* 01.FBF8.F:0  R/W      Default = 0x00FF */
                     /* Spare Register
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch2AecSpare_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                CH3 AEC Spare: 01.FBF9 */
/*                  CH3 AEC Spare: 01.FBF9 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of CH3 AEC Spare */
  union
  {
    struct
    {
                    /*! \brief 01.FBF9.F:0 R/W AEC 3 Spare [F:0]
                        AQ_Ch3AecSpare_CAL.u0.bits_0.aec_3Spare

                        Default = 0x00FF

                        Spare Register
                        
  */
      unsigned int   aec_3Spare : 16;    /* 01.FBF9.F:0  R/W      Default = 0x00FF */
                     /* Spare Register
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Ch3AecSpare_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                AEC CUE Data Randomization Control: 01.FBFA */
/*                  AEC CUE Data Randomization Control: 01.FBFA */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of AEC CUE Data Randomization Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 2;
                    /*! \brief 01.FBFA.D R/W AEC 3 Data Random Number Generation Frequency Revert
                        AQ_AecCueDataRandomizationControl_CAL.u0.bits_0.aec_3DataRandomNumberGenerationFrequencyRevert

                        Default = 0x1

                        Data Random Number Generation Frequency Revert
                        

                 <B>Notes:</B>
                        Revert to have random number generation used for data sampling to occur every 128 baud rate clock cycles (CALA) from default 64 clock cycles  */
      unsigned int   aec_3DataRandomNumberGenerationFrequencyRevert : 1;    /* 01.FBFA.D  R/W      Default = 0x1 */
                     /* Data Random Number Generation Frequency Revert
                          */
                    /*! \brief 01.FBFA.C R/W AEC 3 Data Sampling Start Window Revert
                        AQ_AecCueDataRandomizationControl_CAL.u0.bits_0.aec_3DataSamplingStartWindowRevert

                        Default = 0x0

                        Data Sampling Start Window Revert
                        

                 <B>Notes:</B>
                        Revert back to using coeff_id equal to 0 for updating Error Delay Value (CALA) from default of using data sampling start point for Error Delay Value  */
      unsigned int   aec_3DataSamplingStartWindowRevert : 1;    /* 01.FBFA.C  R/W      Default = 0x0 */
                     /* Data Sampling Start Window Revert
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 01.FBFA.9 R/W AEC 2 Data Random Number Generation Frequency Revert
                        AQ_AecCueDataRandomizationControl_CAL.u0.bits_0.aec_2DataRandomNumberGenerationFrequencyRevert

                        Default = 0x1

                        Data Random Number Generation Frequency Revert
                        
  */
      unsigned int   aec_2DataRandomNumberGenerationFrequencyRevert : 1;    /* 01.FBFA.9  R/W      Default = 0x1 */
                     /* Data Random Number Generation Frequency Revert
                          */
                    /*! \brief 01.FBFA.8 R/W AEC 2 Data Sampling Start Window Revert
                        AQ_AecCueDataRandomizationControl_CAL.u0.bits_0.aec_2DataSamplingStartWindowRevert

                        Default = 0x0

                        Data Sampling Start Window Revert
                        
  */
      unsigned int   aec_2DataSamplingStartWindowRevert : 1;    /* 01.FBFA.8  R/W      Default = 0x0 */
                     /* Data Sampling Start Window Revert
                          */
      unsigned int   reserved2 : 2;
                    /*! \brief 01.FBFA.5 R/W AEC 1 Data Random Number Generation Frequency Revert
                        AQ_AecCueDataRandomizationControl_CAL.u0.bits_0.aec_1DataRandomNumberGenerationFrequencyRevert

                        Default = 0x1

                        Data Random Number Generation Frequency Revert
                        
  */
      unsigned int   aec_1DataRandomNumberGenerationFrequencyRevert : 1;    /* 01.FBFA.5  R/W      Default = 0x1 */
                     /* Data Random Number Generation Frequency Revert
                          */
                    /*! \brief 01.FBFA.4 R/W AEC 1 Data Sampling Start Window Revert
                        AQ_AecCueDataRandomizationControl_CAL.u0.bits_0.aec_1DataSamplingStartWindowRevert

                        Default = 0x0

                        Data Sampling Start Window Revert
                        
  */
      unsigned int   aec_1DataSamplingStartWindowRevert : 1;    /* 01.FBFA.4  R/W      Default = 0x0 */
                     /* Data Sampling Start Window Revert
                          */
      unsigned int   reserved3 : 2;
                    /*! \brief 01.FBFA.1 R/W AEC 0 Data Random Number Generation Frequency Revert
                        AQ_AecCueDataRandomizationControl_CAL.u0.bits_0.aec_0DataRandomNumberGenerationFrequencyRevert

                        Default = 0x1

                        Data Random Number Generation Frequency Revert
                        
  */
      unsigned int   aec_0DataRandomNumberGenerationFrequencyRevert : 1;    /* 01.FBFA.1  R/W      Default = 0x1 */
                     /* Data Random Number Generation Frequency Revert
                          */
                    /*! \brief 01.FBFA.0 R/W AEC 0 Data Sampling Start Window Revert
                        AQ_AecCueDataRandomizationControl_CAL.u0.bits_0.aec_0DataSamplingStartWindowRevert

                        Default = 0x0

                        Data Sampling Start Window Revert
                        
  */
      unsigned int   aec_0DataSamplingStartWindowRevert : 1;    /* 01.FBFA.0  R/W      Default = 0x0 */
                     /* Data Sampling Start Window Revert
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_AecCueDataRandomizationControl_CAL;


/*---------------------------------------------------------------------------------*/
/*! \brief                PMA Vendor Global Interrupt Flags: 01.FC00 */
/*                  PMA Vendor Global Interrupt Flags: 01.FC00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PMA Vendor Global Interrupt Flags */
  union
  {
    struct
    {
                    /*! \brief 01.FC00.F RO Vendor Specific Tx Alarms 1 Interrupt
                        AQ_PmaVendorGlobalInterruptFlags_CAL.u0.bits_0.vendorSpecificTxAlarms_1Interrupt

                        

                        1 = Interrupt
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register (See "PMA Transmit Vendor Alarms 1: Address 1.CC00" on page 129.) and the corresponding mask register (See "PMA Transmit Vendor Interrupt Mask 1: Address 1.D400" on page 132.)  */
      unsigned int   vendorSpecificTxAlarms_1Interrupt : 1;    /* 01.FC00.F  RO       */
                     /* 1 = Interrupt
                          */
                    /*! \brief 01.FC00.E RO Vendor Specific Tx Alarms 2 Interrupt
                        AQ_PmaVendorGlobalInterruptFlags_CAL.u0.bits_0.vendorSpecificTxAlarms_2Interrupt

                        

                        1 = Interrupt
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register (See "PMA Transmit Vendor Alarms 2: Address 1.CC01" on page 129.) and the corresponding mask register (See "PMA Transmit Vendor Interrupt Mask 2: Address 1.D401" on page 132.)  */
      unsigned int   vendorSpecificTxAlarms_2Interrupt : 1;    /* 01.FC00.E  RO       */
                     /* 1 = Interrupt
                          */
                    /*! \brief 01.FC00.D RO Vendor Specific Tx Alarms 3 Interrupt
                        AQ_PmaVendorGlobalInterruptFlags_CAL.u0.bits_0.vendorSpecificTxAlarms_3Interrupt

                        

                        1 = Interrupt
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register (See "PMA Transmit Vendor Alarms 3: Address 1.CC02" on page 130.) and the corresponding mask register (See "PMA Transmit Vendor Interrupt Mask 3: Address 1.D402" on page 133.)  */
      unsigned int   vendorSpecificTxAlarms_3Interrupt : 1;    /* 01.FC00.D  RO       */
                     /* 1 = Interrupt
                          */
      unsigned int   reserved0 : 1;
                    /*! \brief 01.FC00.B RO Standard Alarm 1 Interrupt
                        AQ_PmaVendorGlobalInterruptFlags_CAL.u0.bits_0.standardAlarm_1Interrupt

                        

                        1 = Interrupt
                        

                 <B>Notes:</B>
                        An interrupt was generated from bit 1.1.2.
                        An interrupt was generated from status register (See "PMA Standard Status 1: Address 1.1" on page 2.) and the corresponding mask register (See "PMA Transmit Standard Interrupt Mask 1: Address 1.D000" on page 131.)  */
      unsigned int   standardAlarm_1Interrupt : 1;    /* 01.FC00.B  RO       */
                     /* 1 = Interrupt
                          */
                    /*! \brief 01.FC00.A RO Standard Alarm 2 Interrupt
                        AQ_PmaVendorGlobalInterruptFlags_CAL.u0.bits_0.standardAlarm_2Interrupt

                        

                        1 = Interrupt
                        

                 <B>Notes:</B>
                        An interrupt was generated from either bit 1.8.B or 1.8.A.
                        An interrupt was generated from status register (See "PMA Standard Status 2: Address 1.8" on page 8.) and the corresponding mask register (See "PMA Transmit Standard Interrupt Mask 2: Address 1.D001" on page 131.)  */
      unsigned int   standardAlarm_2Interrupt : 1;    /* 01.FC00.A  RO       */
                     /* 1 = Interrupt
                          */
      unsigned int   reserved1 : 10;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_PmaVendorGlobalInterruptFlags_CAL;

#endif
/*@}*/
/*@}*/
