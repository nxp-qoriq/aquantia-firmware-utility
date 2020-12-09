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
*   This file contains the compiler assist macros and doxygen comments
*   for the PCS Registers block.
*/

/*! \defgroup PCS_registers_Defines PCS Registers Defines
*   This module contains the compiler assist macros and doxygen comments
*   for the PCS Registers block.
*/
/***********************************************************************
*                     Copyright Aquantia Corp.
*                             Freeware
*
* $File: //depot/icm/proj/Dena/rev1.0/c/Systems/tools/windows/regMapParser/src/gencheaders.py $
*
* $Revision: #18 $
*
* $DateTime: 2017/11/09 17:51:52 $
*
* $Author: joshd $
*
* $Label: $
*
* Description:
*
*   This file contains the compiler assist macros for the registers contained in the PCS Registers block.
*
*
***********************************************************************/


/*@{*/
#ifndef AQ_CAL_PCS_REGS_DEFINES_HEADER
#define AQ_CAL_PCS_REGS_DEFINES_HEADER


/*-----------------------------------------------------------------------------*/
/*Access macro definitions                                                     */
/*-----------------------------------------------------------------------------*/
/*! \brief Base register address of structure AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_baseRegisterAddress 0x0000
/*! \brief MMD address of structure AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reset in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_reset 0
/*! \brief Preprocessor variable to relate field to bit position in structure reset in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_reset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reset in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_reset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure loopback in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_loopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure loopback in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_loopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure loopback in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_loopback u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure speedSelectionLsb in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_speedSelectionLsb 0
/*! \brief Preprocessor variable to relate field to bit position in structure speedSelectionLsb in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_speedSelectionLsb u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure speedSelectionLsb in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_speedSelectionLsb u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved0a in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_reserved0a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved0a in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_reserved0a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved0a in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_reserved0a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowPower in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_lowPower 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowPower in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_lowPower u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowPower in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_lowPower u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clockStopEnable in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_clockStopEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure clockStopEnable in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_clockStopEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clockStopEnable in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_clockStopEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved0b in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_reserved0b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved0b in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_reserved0b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved0b in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_reserved0b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure speedSelectionMsb in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_speedSelectionMsb 0
/*! \brief Preprocessor variable to relate field to bit position in structure speedSelectionMsb in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_speedSelectionMsb u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure speedSelectionMsb in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_speedSelectionMsb u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gSpeedSelection in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL__10gSpeedSelection 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gSpeedSelection in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL__10gSpeedSelection u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gSpeedSelection in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL__10gSpeedSelection u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved0c in AQ_PcsStandardControl_1_CAL */
#define AQ_PcsStandardControl_1_CAL_reserved0c 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved0c in AQ_PcsStandardControl_1_CAL */
#define bits_AQ_PcsStandardControl_1_CAL_reserved0c u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved0c in AQ_PcsStandardControl_1_CAL */
#define word_AQ_PcsStandardControl_1_CAL_reserved0c u0.word_0

/*! \brief Base register address of structure AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_baseRegisterAddress 0x0001
/*! \brief MMD address of structure AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved01a in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_reserved01a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved01a in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_reserved01a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved01a in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_reserved01a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure txLpiReceived in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_txLpiReceived 0
/*! \brief Preprocessor variable to relate field to bit position in structure txLpiReceived in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_txLpiReceived u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txLpiReceived in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_txLpiReceived u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rxLpiReceived in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_rxLpiReceived 0
/*! \brief Preprocessor variable to relate field to bit position in structure rxLpiReceived in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_rxLpiReceived u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rxLpiReceived in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_rxLpiReceived u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure txLpiIndication in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_txLpiIndication 0
/*! \brief Preprocessor variable to relate field to bit position in structure txLpiIndication in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_txLpiIndication u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txLpiIndication in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_txLpiIndication u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rxLpiIndication in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_rxLpiIndication 0
/*! \brief Preprocessor variable to relate field to bit position in structure rxLpiIndication in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_rxLpiIndication u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rxLpiIndication in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_rxLpiIndication u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure fault in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_fault 0
/*! \brief Preprocessor variable to relate field to bit position in structure fault in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_fault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure fault in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_fault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clockStopCapable in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_clockStopCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure clockStopCapable in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_clockStopCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clockStopCapable in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_clockStopCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved01b in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_reserved01b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved01b in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_reserved01b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved01b in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_reserved01b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsReceiveLinkStatus in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_pcsReceiveLinkStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsReceiveLinkStatus in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_pcsReceiveLinkStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsReceiveLinkStatus in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_pcsReceiveLinkStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowPowerAbility in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_lowPowerAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowPowerAbility in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_lowPowerAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowPowerAbility in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_lowPowerAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved01c in AQ_PcsStandardStatus_1_CAL */
#define AQ_PcsStandardStatus_1_CAL_reserved01c 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved01c in AQ_PcsStandardStatus_1_CAL */
#define bits_AQ_PcsStandardStatus_1_CAL_reserved01c u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved01c in AQ_PcsStandardStatus_1_CAL */
#define word_AQ_PcsStandardStatus_1_CAL_reserved01c u0.word_0

/*! \brief Base register address of structure AQ_PcsStandardDeviceIdentifier_CAL */
#define AQ_PcsStandardDeviceIdentifier_CAL_baseRegisterAddress 0x0002
/*! \brief MMD address of structure AQ_PcsStandardDeviceIdentifier_CAL */
#define AQ_PcsStandardDeviceIdentifier_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdMSW in AQ_PcsStandardDeviceIdentifier_CAL */
#define AQ_PcsStandardDeviceIdentifier_CAL_deviceIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdMSW in AQ_PcsStandardDeviceIdentifier_CAL */
#define bits_AQ_PcsStandardDeviceIdentifier_CAL_deviceIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdMSW in AQ_PcsStandardDeviceIdentifier_CAL */
#define word_AQ_PcsStandardDeviceIdentifier_CAL_deviceIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdLSW in AQ_PcsStandardDeviceIdentifier_CAL */
#define AQ_PcsStandardDeviceIdentifier_CAL_deviceIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdLSW in AQ_PcsStandardDeviceIdentifier_CAL */
#define bits_AQ_PcsStandardDeviceIdentifier_CAL_deviceIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdLSW in AQ_PcsStandardDeviceIdentifier_CAL */
#define word_AQ_PcsStandardDeviceIdentifier_CAL_deviceIdLSW u1.word_1

/*! \brief Base register address of structure AQ_PcsStandardSpeedAbility_CAL */
#define AQ_PcsStandardSpeedAbility_CAL_baseRegisterAddress 0x0004
/*! \brief MMD address of structure AQ_PcsStandardSpeedAbility_CAL */
#define AQ_PcsStandardSpeedAbility_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved4a in AQ_PcsStandardSpeedAbility_CAL */
#define AQ_PcsStandardSpeedAbility_CAL_reserved4a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved4a in AQ_PcsStandardSpeedAbility_CAL */
#define bits_AQ_PcsStandardSpeedAbility_CAL_reserved4a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved4a in AQ_PcsStandardSpeedAbility_CAL */
#define word_AQ_PcsStandardSpeedAbility_CAL_reserved4a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _5gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define AQ_PcsStandardSpeedAbility_CAL__5gCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _5gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define bits_AQ_PcsStandardSpeedAbility_CAL__5gCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _5gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define word_AQ_PcsStandardSpeedAbility_CAL__5gCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _2_5gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define AQ_PcsStandardSpeedAbility_CAL__2_5gCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _2_5gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define bits_AQ_PcsStandardSpeedAbility_CAL__2_5gCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _2_5gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define word_AQ_PcsStandardSpeedAbility_CAL__2_5gCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved4b in AQ_PcsStandardSpeedAbility_CAL */
#define AQ_PcsStandardSpeedAbility_CAL_reserved4b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved4b in AQ_PcsStandardSpeedAbility_CAL */
#define bits_AQ_PcsStandardSpeedAbility_CAL_reserved4b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved4b in AQ_PcsStandardSpeedAbility_CAL */
#define word_AQ_PcsStandardSpeedAbility_CAL_reserved4b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10pass_ts__2base_tlCapable in AQ_PcsStandardSpeedAbility_CAL */
#define AQ_PcsStandardSpeedAbility_CAL__10pass_ts__2base_tlCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10pass_ts__2base_tlCapable in AQ_PcsStandardSpeedAbility_CAL */
#define bits_AQ_PcsStandardSpeedAbility_CAL__10pass_ts__2base_tlCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10pass_ts__2base_tlCapable in AQ_PcsStandardSpeedAbility_CAL */
#define word_AQ_PcsStandardSpeedAbility_CAL__10pass_ts__2base_tlCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define AQ_PcsStandardSpeedAbility_CAL__10gCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define bits_AQ_PcsStandardSpeedAbility_CAL__10gCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gCapable in AQ_PcsStandardSpeedAbility_CAL */
#define word_AQ_PcsStandardSpeedAbility_CAL__10gCapable u0.word_0

/*! \brief Base register address of structure AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_baseRegisterAddress 0x0005
/*! \brief MMD address of structure AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_autonegotiationPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_autonegotiationPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_autonegotiationPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tcPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_tcPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure tcPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_tcPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tcPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_tcPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dteXsPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_dteXsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure dteXsPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_dteXsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dteXsPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_dteXsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_Present in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_phyXS_Present 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_Present in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_phyXS_Present u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_Present in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_phyXS_Present u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_pcsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_pcsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_pcsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure wisPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_wisPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure wisPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_wisPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure wisPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_wisPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_pmaPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_pmaPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_pmaPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clause_22RegistersPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_clause_22RegistersPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22RegistersPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_clause_22RegistersPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clause_22RegistersPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_clause_22RegistersPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_2Present in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_vendorSpecificDevice_2Present 1
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_2Present in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_vendorSpecificDevice_2Present u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_2Present in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_vendorSpecificDevice_2Present u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_1Present in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_vendorSpecificDevice_1Present 1
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_1Present in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_vendorSpecificDevice_1Present u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_1Present in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_vendorSpecificDevice_1Present u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure clause_22ExtensionPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define AQ_PcsStandardDevicesInPackage_CAL_clause_22ExtensionPresent 1
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22ExtensionPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define bits_AQ_PcsStandardDevicesInPackage_CAL_clause_22ExtensionPresent u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure clause_22ExtensionPresent in AQ_PcsStandardDevicesInPackage_CAL */
#define word_AQ_PcsStandardDevicesInPackage_CAL_clause_22ExtensionPresent u1.word_1

/*! \brief Base register address of structure AQ_PcsStandardControl_2_CAL */
#define AQ_PcsStandardControl_2_CAL_baseRegisterAddress 0x0007
/*! \brief MMD address of structure AQ_PcsStandardControl_2_CAL */
#define AQ_PcsStandardControl_2_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved7 in AQ_PcsStandardControl_2_CAL */
#define AQ_PcsStandardControl_2_CAL_reserved7 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved7 in AQ_PcsStandardControl_2_CAL */
#define bits_AQ_PcsStandardControl_2_CAL_reserved7 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved7 in AQ_PcsStandardControl_2_CAL */
#define word_AQ_PcsStandardControl_2_CAL_reserved7 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsDeviceType in AQ_PcsStandardControl_2_CAL */
#define AQ_PcsStandardControl_2_CAL_pcsDeviceType 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsDeviceType in AQ_PcsStandardControl_2_CAL */
#define bits_AQ_PcsStandardControl_2_CAL_pcsDeviceType u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsDeviceType in AQ_PcsStandardControl_2_CAL */
#define word_AQ_PcsStandardControl_2_CAL_pcsDeviceType u0.word_0

/*! \brief Base register address of structure AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL_baseRegisterAddress 0x0008
/*! \brief MMD address of structure AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure devicePresent in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL_devicePresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure devicePresent in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL_devicePresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure devicePresent in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL_devicePresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _5gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL__5gbase_tCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _5gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL__5gbase_tCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _5gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL__5gbase_tCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _2_5gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL__2_5gbase_tCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _2_5gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL__2_5gbase_tCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _2_5gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL__2_5gbase_tCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitFault in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL_transmitFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure transmitFault in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL_transmitFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure transmitFault in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL_transmitFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure receiveFault in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL_receiveFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure receiveFault in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL_receiveFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure receiveFault in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL_receiveFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved8 in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL_reserved8 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved8 in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL_reserved8 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved8 in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL_reserved8 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL__10gbase_tCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL__10gbase_tCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tCapable in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL__10gbase_tCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_wCapable in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL__10gbase_wCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_wCapable in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL__10gbase_wCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_wCapable in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL__10gbase_wCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_xCapable in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL__10gbase_xCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_xCapable in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL__10gbase_xCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_xCapable in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL__10gbase_xCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_rCapable in AQ_PcsStandardStatus_2_CAL */
#define AQ_PcsStandardStatus_2_CAL__10gbase_rCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_rCapable in AQ_PcsStandardStatus_2_CAL */
#define bits_AQ_PcsStandardStatus_2_CAL__10gbase_rCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_rCapable in AQ_PcsStandardStatus_2_CAL */
#define word_AQ_PcsStandardStatus_2_CAL__10gbase_rCapable u0.word_0

/*! \brief Base register address of structure AQ_PcsStandardPackageIdentifier_CAL */
#define AQ_PcsStandardPackageIdentifier_CAL_baseRegisterAddress 0x000E
/*! \brief MMD address of structure AQ_PcsStandardPackageIdentifier_CAL */
#define AQ_PcsStandardPackageIdentifier_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure packageIdMSW in AQ_PcsStandardPackageIdentifier_CAL */
#define AQ_PcsStandardPackageIdentifier_CAL_packageIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdMSW in AQ_PcsStandardPackageIdentifier_CAL */
#define bits_AQ_PcsStandardPackageIdentifier_CAL_packageIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packageIdMSW in AQ_PcsStandardPackageIdentifier_CAL */
#define word_AQ_PcsStandardPackageIdentifier_CAL_packageIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packageIdLSW in AQ_PcsStandardPackageIdentifier_CAL */
#define AQ_PcsStandardPackageIdentifier_CAL_packageIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdLSW in AQ_PcsStandardPackageIdentifier_CAL */
#define bits_AQ_PcsStandardPackageIdentifier_CAL_packageIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure packageIdLSW in AQ_PcsStandardPackageIdentifier_CAL */
#define word_AQ_PcsStandardPackageIdentifier_CAL_packageIdLSW u1.word_1

/*! \brief Base register address of structure AQ_PcsEeeCapabilityRegister_CAL */
#define AQ_PcsEeeCapabilityRegister_CAL_baseRegisterAddress 0x0014
/*! \brief MMD address of structure AQ_PcsEeeCapabilityRegister_CAL */
#define AQ_PcsEeeCapabilityRegister_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_krEee in AQ_PcsEeeCapabilityRegister_CAL */
#define AQ_PcsEeeCapabilityRegister_CAL__10gbase_krEee 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_krEee in AQ_PcsEeeCapabilityRegister_CAL */
#define bits_AQ_PcsEeeCapabilityRegister_CAL__10gbase_krEee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_krEee in AQ_PcsEeeCapabilityRegister_CAL */
#define word_AQ_PcsEeeCapabilityRegister_CAL__10gbase_krEee u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_kx4Eee in AQ_PcsEeeCapabilityRegister_CAL */
#define AQ_PcsEeeCapabilityRegister_CAL__10gbase_kx4Eee 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_kx4Eee in AQ_PcsEeeCapabilityRegister_CAL */
#define bits_AQ_PcsEeeCapabilityRegister_CAL__10gbase_kx4Eee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_kx4Eee in AQ_PcsEeeCapabilityRegister_CAL */
#define word_AQ_PcsEeeCapabilityRegister_CAL__10gbase_kx4Eee u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _1000base_kxEee in AQ_PcsEeeCapabilityRegister_CAL */
#define AQ_PcsEeeCapabilityRegister_CAL__1000base_kxEee 0
/*! \brief Preprocessor variable to relate field to bit position in structure _1000base_kxEee in AQ_PcsEeeCapabilityRegister_CAL */
#define bits_AQ_PcsEeeCapabilityRegister_CAL__1000base_kxEee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _1000base_kxEee in AQ_PcsEeeCapabilityRegister_CAL */
#define word_AQ_PcsEeeCapabilityRegister_CAL__1000base_kxEee u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tEee in AQ_PcsEeeCapabilityRegister_CAL */
#define AQ_PcsEeeCapabilityRegister_CAL__10gbase_tEee 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tEee in AQ_PcsEeeCapabilityRegister_CAL */
#define bits_AQ_PcsEeeCapabilityRegister_CAL__10gbase_tEee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tEee in AQ_PcsEeeCapabilityRegister_CAL */
#define word_AQ_PcsEeeCapabilityRegister_CAL__10gbase_tEee u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _1000base_tEee in AQ_PcsEeeCapabilityRegister_CAL */
#define AQ_PcsEeeCapabilityRegister_CAL__1000base_tEee 0
/*! \brief Preprocessor variable to relate field to bit position in structure _1000base_tEee in AQ_PcsEeeCapabilityRegister_CAL */
#define bits_AQ_PcsEeeCapabilityRegister_CAL__1000base_tEee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _1000base_tEee in AQ_PcsEeeCapabilityRegister_CAL */
#define word_AQ_PcsEeeCapabilityRegister_CAL__1000base_tEee u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _100base_txEee in AQ_PcsEeeCapabilityRegister_CAL */
#define AQ_PcsEeeCapabilityRegister_CAL__100base_txEee 0
/*! \brief Preprocessor variable to relate field to bit position in structure _100base_txEee in AQ_PcsEeeCapabilityRegister_CAL */
#define bits_AQ_PcsEeeCapabilityRegister_CAL__100base_txEee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _100base_txEee in AQ_PcsEeeCapabilityRegister_CAL */
#define word_AQ_PcsEeeCapabilityRegister_CAL__100base_txEee u0.word_0

/*! \brief Base register address of structure AQ_PcsEeeCapability_2Register_CAL */
#define AQ_PcsEeeCapability_2Register_CAL_baseRegisterAddress 0x0015
/*! \brief MMD address of structure AQ_PcsEeeCapability_2Register_CAL */
#define AQ_PcsEeeCapability_2Register_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved15 in AQ_PcsEeeCapability_2Register_CAL */
#define AQ_PcsEeeCapability_2Register_CAL_reserved15 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved15 in AQ_PcsEeeCapability_2Register_CAL */
#define bits_AQ_PcsEeeCapability_2Register_CAL_reserved15 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved15 in AQ_PcsEeeCapability_2Register_CAL */
#define word_AQ_PcsEeeCapability_2Register_CAL_reserved15 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _5gbase_tEee in AQ_PcsEeeCapability_2Register_CAL */
#define AQ_PcsEeeCapability_2Register_CAL__5gbase_tEee 0
/*! \brief Preprocessor variable to relate field to bit position in structure _5gbase_tEee in AQ_PcsEeeCapability_2Register_CAL */
#define bits_AQ_PcsEeeCapability_2Register_CAL__5gbase_tEee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _5gbase_tEee in AQ_PcsEeeCapability_2Register_CAL */
#define word_AQ_PcsEeeCapability_2Register_CAL__5gbase_tEee u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _2_5gbase_tEee in AQ_PcsEeeCapability_2Register_CAL */
#define AQ_PcsEeeCapability_2Register_CAL__2_5gbase_tEee 0
/*! \brief Preprocessor variable to relate field to bit position in structure _2_5gbase_tEee in AQ_PcsEeeCapability_2Register_CAL */
#define bits_AQ_PcsEeeCapability_2Register_CAL__2_5gbase_tEee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _2_5gbase_tEee in AQ_PcsEeeCapability_2Register_CAL */
#define word_AQ_PcsEeeCapability_2Register_CAL__2_5gbase_tEee u0.word_0

/*! \brief Base register address of structure AQ_PcsEeeWakeErrorCounter_CAL */
#define AQ_PcsEeeWakeErrorCounter_CAL_baseRegisterAddress 0x0016
/*! \brief MMD address of structure AQ_PcsEeeWakeErrorCounter_CAL */
#define AQ_PcsEeeWakeErrorCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure eeeWakeErrorCounter in AQ_PcsEeeWakeErrorCounter_CAL */
#define AQ_PcsEeeWakeErrorCounter_CAL_eeeWakeErrorCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeWakeErrorCounter in AQ_PcsEeeWakeErrorCounter_CAL */
#define bits_AQ_PcsEeeWakeErrorCounter_CAL_eeeWakeErrorCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeWakeErrorCounter in AQ_PcsEeeWakeErrorCounter_CAL */
#define word_AQ_PcsEeeWakeErrorCounter_CAL_eeeWakeErrorCounter u0.word_0

/*! \brief Base register address of structure AQ_PcsReserved_17Register_CAL */
#define AQ_PcsReserved_17Register_CAL_baseRegisterAddress 0x0017
/*! \brief MMD address of structure AQ_PcsReserved_17Register_CAL */
#define AQ_PcsReserved_17Register_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved17 in AQ_PcsReserved_17Register_CAL */
#define AQ_PcsReserved_17Register_CAL_reserved17 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved17 in AQ_PcsReserved_17Register_CAL */
#define bits_AQ_PcsReserved_17Register_CAL_reserved17 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved17 in AQ_PcsReserved_17Register_CAL */
#define word_AQ_PcsReserved_17Register_CAL_reserved17 u0.word_0

/*! \brief Base register address of structure AQ_PcsReserved_18Register_CAL */
#define AQ_PcsReserved_18Register_CAL_baseRegisterAddress 0x0018
/*! \brief MMD address of structure AQ_PcsReserved_18Register_CAL */
#define AQ_PcsReserved_18Register_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved18 in AQ_PcsReserved_18Register_CAL */
#define AQ_PcsReserved_18Register_CAL_reserved18 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved18 in AQ_PcsReserved_18Register_CAL */
#define bits_AQ_PcsReserved_18Register_CAL_reserved18 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved18 in AQ_PcsReserved_18Register_CAL */
#define word_AQ_PcsReserved_18Register_CAL_reserved18 u0.word_0

/*! \brief Base register address of structure AQ_PcsReserved_19Register_CAL */
#define AQ_PcsReserved_19Register_CAL_baseRegisterAddress 0x0019
/*! \brief MMD address of structure AQ_PcsReserved_19Register_CAL */
#define AQ_PcsReserved_19Register_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved19 in AQ_PcsReserved_19Register_CAL */
#define AQ_PcsReserved_19Register_CAL_reserved19 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved19 in AQ_PcsReserved_19Register_CAL */
#define bits_AQ_PcsReserved_19Register_CAL_reserved19 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved19 in AQ_PcsReserved_19Register_CAL */
#define word_AQ_PcsReserved_19Register_CAL_reserved19 u0.word_0

/*! \brief Base register address of structure AQ_PcsReserved_1aRegister_CAL */
#define AQ_PcsReserved_1aRegister_CAL_baseRegisterAddress 0x001A
/*! \brief MMD address of structure AQ_PcsReserved_1aRegister_CAL */
#define AQ_PcsReserved_1aRegister_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved1a in AQ_PcsReserved_1aRegister_CAL */
#define AQ_PcsReserved_1aRegister_CAL_reserved1a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved1a in AQ_PcsReserved_1aRegister_CAL */
#define bits_AQ_PcsReserved_1aRegister_CAL_reserved1a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved1a in AQ_PcsReserved_1aRegister_CAL */
#define word_AQ_PcsReserved_1aRegister_CAL_reserved1a u0.word_0

/*! \brief Base register address of structure AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL_baseRegisterAddress 0x0020
/*! \brief MMD address of structure AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved20a in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL_reserved20a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved20a in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL_reserved20a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved20a in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL_reserved20a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gReceiveLinkStatus in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL__10gReceiveLinkStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gReceiveLinkStatus in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL__10gReceiveLinkStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gReceiveLinkStatus in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL__10gReceiveLinkStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved20b in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL_reserved20b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved20b in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL_reserved20b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved20b in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL_reserved20b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_rPrbs9PatternTestingAbility in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL__10gbase_rPrbs9PatternTestingAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_rPrbs9PatternTestingAbility in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL__10gbase_rPrbs9PatternTestingAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_rPrbs9PatternTestingAbility in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL__10gbase_rPrbs9PatternTestingAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_rPrbs31PatternTestingAbility in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL__10gbase_rPrbs31PatternTestingAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_rPrbs31PatternTestingAbility in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL__10gbase_rPrbs31PatternTestingAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_rPrbs31PatternTestingAbility in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL__10gbase_rPrbs31PatternTestingAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gHighBer in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL__10gHighBer 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gHighBer in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL__10gHighBer u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gHighBer in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL__10gHighBer u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gPcsBlockLock in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL__10gPcsBlockLock 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gPcsBlockLock in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL__10gPcsBlockLock u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gPcsBlockLock in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL__10gPcsBlockLock u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsBlockLockLatched in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL_pcsBlockLockLatched 1
/*! \brief Preprocessor variable to relate field to bit position in structure pcsBlockLockLatched in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL_pcsBlockLockLatched u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pcsBlockLockLatched in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL_pcsBlockLockLatched u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure highBerLatched in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL_highBerLatched 1
/*! \brief Preprocessor variable to relate field to bit position in structure highBerLatched in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL_highBerLatched u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure highBerLatched in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL_highBerLatched u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure erroredFrameCounter in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL_erroredFrameCounter 1
/*! \brief Preprocessor variable to relate field to bit position in structure erroredFrameCounter in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL_erroredFrameCounter u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure erroredFrameCounter in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL_erroredFrameCounter u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure erroredBlockCounter in AQ_Pcs10G_Status_CAL */
#define AQ_Pcs10G_Status_CAL_erroredBlockCounter 1
/*! \brief Preprocessor variable to relate field to bit position in structure erroredBlockCounter in AQ_Pcs10G_Status_CAL */
#define bits_AQ_Pcs10G_Status_CAL_erroredBlockCounter u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure erroredBlockCounter in AQ_Pcs10G_Status_CAL */
#define word_AQ_Pcs10G_Status_CAL_erroredBlockCounter u1.word_1

/*! \brief Base register address of structure AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedA_CAL_baseRegisterAddress 0x0022
/*! \brief MMD address of structure AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedA_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSeedABits_15_0 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_15_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSeedABits_15_0 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define bits_AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_15_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSeedABits_15_0 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define word_AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_15_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSeedABits_31_16 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_31_16 1
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSeedABits_31_16 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define bits_AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_31_16 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSeedABits_31_16 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define word_AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_31_16 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSeedABits_47_32 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_47_32 2
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSeedABits_47_32 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define bits_AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_47_32 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSeedABits_47_32 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define word_AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_47_32 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSeedABits_57_48 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_57_48 3
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSeedABits_57_48 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define bits_AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_57_48 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSeedABits_57_48 in AQ_Pcs10G_base_rTestPatternSeedA_CAL */
#define word_AQ_Pcs10G_base_rTestPatternSeedA_CAL_testPatternSeedABits_57_48 u3.word_3

/*! \brief Base register address of structure AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedB_CAL_baseRegisterAddress 0x0026
/*! \brief MMD address of structure AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedB_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSeedBBits_15_0 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_15_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSeedBBits_15_0 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define bits_AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_15_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSeedBBits_15_0 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define word_AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_15_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSeedBBits_31_16 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_31_16 1
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSeedBBits_31_16 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define bits_AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_31_16 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSeedBBits_31_16 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define word_AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_31_16 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSeedBBits_47_32 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_47_32 2
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSeedBBits_47_32 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define bits_AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_47_32 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSeedBBits_47_32 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define word_AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_47_32 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSeedBBits_57_48 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_57_48 3
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSeedBBits_57_48 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define bits_AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_57_48 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSeedBBits_57_48 in AQ_Pcs10G_base_rTestPatternSeedB_CAL */
#define word_AQ_Pcs10G_base_rTestPatternSeedB_CAL_testPatternSeedBBits_57_48 u3.word_3

/*! \brief Base register address of structure AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_baseRegisterAddress 0x002A
/*! \brief MMD address of structure AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure prbs9TransmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs9TransmitTest_patternEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure prbs9TransmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define bits_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs9TransmitTest_patternEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure prbs9TransmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define word_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs9TransmitTest_patternEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure prbs31ReceiveTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs31ReceiveTest_patternEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure prbs31ReceiveTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define bits_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs31ReceiveTest_patternEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure prbs31ReceiveTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define word_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs31ReceiveTest_patternEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure prbs31TransmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs31TransmitTest_patternEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure prbs31TransmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define bits_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs31TransmitTest_patternEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure prbs31TransmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define word_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_prbs31TransmitTest_patternEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_transmitTest_patternEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure transmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define bits_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_transmitTest_patternEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure transmitTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define word_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_transmitTest_patternEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure receiveTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_receiveTest_patternEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure receiveTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define bits_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_receiveTest_patternEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure receiveTest_patternEnable in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define word_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_receiveTest_patternEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure test_patternSelect in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_test_patternSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure test_patternSelect in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define bits_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_test_patternSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure test_patternSelect in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define word_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_test_patternSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dataPatternSelect in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternControl_CAL_dataPatternSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure dataPatternSelect in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define bits_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_dataPatternSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dataPatternSelect in AQ_Pcs10G_base_rPcsTest_patternControl_CAL */
#define word_AQ_Pcs10G_base_rPcsTest_patternControl_CAL_dataPatternSelect u0.word_0

/*! \brief Base register address of structure AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL_baseRegisterAddress 0x002B
/*! \brief MMD address of structure AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure test_patternErrorCounter in AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL */
#define AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL_test_patternErrorCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure test_patternErrorCounter in AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL */
#define bits_AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL_test_patternErrorCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure test_patternErrorCounter in AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL */
#define word_AQ_Pcs10G_base_rPcsTest_patternErrorCounter_CAL_test_patternErrorCounter u0.word_0

/*! \brief Base register address of structure AQ_PcsReserved_2eRegister_CAL */
#define AQ_PcsReserved_2eRegister_CAL_baseRegisterAddress 0x002E
/*! \brief MMD address of structure AQ_PcsReserved_2eRegister_CAL */
#define AQ_PcsReserved_2eRegister_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved2e in AQ_PcsReserved_2eRegister_CAL */
#define AQ_PcsReserved_2eRegister_CAL_reserved2e 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved2e in AQ_PcsReserved_2eRegister_CAL */
#define bits_AQ_PcsReserved_2eRegister_CAL_reserved2e u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved2e in AQ_PcsReserved_2eRegister_CAL */
#define word_AQ_PcsReserved_2eRegister_CAL_reserved2e u0.word_0

/*! \brief Base register address of structure AQ_PcsReserved_2fRegister_CAL */
#define AQ_PcsReserved_2fRegister_CAL_baseRegisterAddress 0x002F
/*! \brief MMD address of structure AQ_PcsReserved_2fRegister_CAL */
#define AQ_PcsReserved_2fRegister_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved2f in AQ_PcsReserved_2fRegister_CAL */
#define AQ_PcsReserved_2fRegister_CAL_reserved2f 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved2f in AQ_PcsReserved_2fRegister_CAL */
#define bits_AQ_PcsReserved_2fRegister_CAL_reserved2f u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved2f in AQ_PcsReserved_2fRegister_CAL */
#define word_AQ_PcsReserved_2fRegister_CAL_reserved2f u0.word_0

/*! \brief Base register address of structure AQ_PcsReserved_30Register_CAL */
#define AQ_PcsReserved_30Register_CAL_baseRegisterAddress 0x0030
/*! \brief MMD address of structure AQ_PcsReserved_30Register_CAL */
#define AQ_PcsReserved_30Register_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved30 in AQ_PcsReserved_30Register_CAL */
#define AQ_PcsReserved_30Register_CAL_reserved30 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved30 in AQ_PcsReserved_30Register_CAL */
#define bits_AQ_PcsReserved_30Register_CAL_reserved30 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved30 in AQ_PcsReserved_30Register_CAL */
#define word_AQ_PcsReserved_30Register_CAL_reserved30 u0.word_0

/*! \brief Base register address of structure AQ_PcsReserved_31Register_CAL */
#define AQ_PcsReserved_31Register_CAL_baseRegisterAddress 0x0031
/*! \brief MMD address of structure AQ_PcsReserved_31Register_CAL */
#define AQ_PcsReserved_31Register_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reserved31 in AQ_PcsReserved_31Register_CAL */
#define AQ_PcsReserved_31Register_CAL_reserved31 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved31 in AQ_PcsReserved_31Register_CAL */
#define bits_AQ_PcsReserved_31Register_CAL_reserved31 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved31 in AQ_PcsReserved_31Register_CAL */
#define word_AQ_PcsReserved_31Register_CAL_reserved31 u0.word_0

/*! \brief Base register address of structure AQ_TimesyncPcsCapability_CAL */
#define AQ_TimesyncPcsCapability_CAL_baseRegisterAddress 0x0708
/*! \brief MMD address of structure AQ_TimesyncPcsCapability_CAL */
#define AQ_TimesyncPcsCapability_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure timesyncTransmitPathDataDelay in AQ_TimesyncPcsCapability_CAL */
#define AQ_TimesyncPcsCapability_CAL_timesyncTransmitPathDataDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure timesyncTransmitPathDataDelay in AQ_TimesyncPcsCapability_CAL */
#define bits_AQ_TimesyncPcsCapability_CAL_timesyncTransmitPathDataDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure timesyncTransmitPathDataDelay in AQ_TimesyncPcsCapability_CAL */
#define word_AQ_TimesyncPcsCapability_CAL_timesyncTransmitPathDataDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure timesyncReceivePathDataDelay in AQ_TimesyncPcsCapability_CAL */
#define AQ_TimesyncPcsCapability_CAL_timesyncReceivePathDataDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure timesyncReceivePathDataDelay in AQ_TimesyncPcsCapability_CAL */
#define bits_AQ_TimesyncPcsCapability_CAL_timesyncReceivePathDataDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure timesyncReceivePathDataDelay in AQ_TimesyncPcsCapability_CAL */
#define word_AQ_TimesyncPcsCapability_CAL_timesyncReceivePathDataDelay u0.word_0

/*! \brief Base register address of structure AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define AQ_TimesyncPcsTransmitPathDataDelay_CAL_baseRegisterAddress 0x0709
/*! \brief MMD address of structure AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define AQ_TimesyncPcsTransmitPathDataDelay_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure maximumPcsTransmitPathDataDelayLSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define AQ_TimesyncPcsTransmitPathDataDelay_CAL_maximumPcsTransmitPathDataDelayLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPcsTransmitPathDataDelayLSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define bits_AQ_TimesyncPcsTransmitPathDataDelay_CAL_maximumPcsTransmitPathDataDelayLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure maximumPcsTransmitPathDataDelayLSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define word_AQ_TimesyncPcsTransmitPathDataDelay_CAL_maximumPcsTransmitPathDataDelayLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure maximumPcsTransmitPathDataDelayMSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define AQ_TimesyncPcsTransmitPathDataDelay_CAL_maximumPcsTransmitPathDataDelayMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPcsTransmitPathDataDelayMSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define bits_AQ_TimesyncPcsTransmitPathDataDelay_CAL_maximumPcsTransmitPathDataDelayMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure maximumPcsTransmitPathDataDelayMSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define word_AQ_TimesyncPcsTransmitPathDataDelay_CAL_maximumPcsTransmitPathDataDelayMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure minimumPcsTransmitPathDataDelayLSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define AQ_TimesyncPcsTransmitPathDataDelay_CAL_minimumPcsTransmitPathDataDelayLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPcsTransmitPathDataDelayLSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define bits_AQ_TimesyncPcsTransmitPathDataDelay_CAL_minimumPcsTransmitPathDataDelayLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure minimumPcsTransmitPathDataDelayLSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define word_AQ_TimesyncPcsTransmitPathDataDelay_CAL_minimumPcsTransmitPathDataDelayLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure minimumPcsTransmitPathDataDelayMSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define AQ_TimesyncPcsTransmitPathDataDelay_CAL_minimumPcsTransmitPathDataDelayMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPcsTransmitPathDataDelayMSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define bits_AQ_TimesyncPcsTransmitPathDataDelay_CAL_minimumPcsTransmitPathDataDelayMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure minimumPcsTransmitPathDataDelayMSW in AQ_TimesyncPcsTransmitPathDataDelay_CAL */
#define word_AQ_TimesyncPcsTransmitPathDataDelay_CAL_minimumPcsTransmitPathDataDelayMSW u3.word_3

/*! \brief Base register address of structure AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define AQ_TimesyncPcsReceivePathDataDelay_CAL_baseRegisterAddress 0x070D
/*! \brief MMD address of structure AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define AQ_TimesyncPcsReceivePathDataDelay_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure maximumPcsReceivePathDataDelayLSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define AQ_TimesyncPcsReceivePathDataDelay_CAL_maximumPcsReceivePathDataDelayLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPcsReceivePathDataDelayLSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define bits_AQ_TimesyncPcsReceivePathDataDelay_CAL_maximumPcsReceivePathDataDelayLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure maximumPcsReceivePathDataDelayLSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define word_AQ_TimesyncPcsReceivePathDataDelay_CAL_maximumPcsReceivePathDataDelayLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure maximumPcsReceivePathDataDelayMSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define AQ_TimesyncPcsReceivePathDataDelay_CAL_maximumPcsReceivePathDataDelayMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPcsReceivePathDataDelayMSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define bits_AQ_TimesyncPcsReceivePathDataDelay_CAL_maximumPcsReceivePathDataDelayMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure maximumPcsReceivePathDataDelayMSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define word_AQ_TimesyncPcsReceivePathDataDelay_CAL_maximumPcsReceivePathDataDelayMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure minimumPcsReceivePathDataDelayLSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define AQ_TimesyncPcsReceivePathDataDelay_CAL_minimumPcsReceivePathDataDelayLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPcsReceivePathDataDelayLSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define bits_AQ_TimesyncPcsReceivePathDataDelay_CAL_minimumPcsReceivePathDataDelayLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure minimumPcsReceivePathDataDelayLSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define word_AQ_TimesyncPcsReceivePathDataDelay_CAL_minimumPcsReceivePathDataDelayLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure minimumPcsReceivePathDataDelayMSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define AQ_TimesyncPcsReceivePathDataDelay_CAL_minimumPcsReceivePathDataDelayMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPcsReceivePathDataDelayMSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define bits_AQ_TimesyncPcsReceivePathDataDelay_CAL_minimumPcsReceivePathDataDelayMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure minimumPcsReceivePathDataDelayMSW in AQ_TimesyncPcsReceivePathDataDelay_CAL */
#define word_AQ_TimesyncPcsReceivePathDataDelay_CAL_minimumPcsReceivePathDataDelayMSW u3.word_3

/*! \brief Base register address of structure AQ_PcsTransmitVendorProvisioning_CAL */
#define AQ_PcsTransmitVendorProvisioning_CAL_baseRegisterAddress 0xC400
/*! \brief MMD address of structure AQ_PcsTransmitVendorProvisioning_CAL */
#define AQ_PcsTransmitVendorProvisioning_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure pcsTxAuxilliaryBitValue in AQ_PcsTransmitVendorProvisioning_CAL */
#define AQ_PcsTransmitVendorProvisioning_CAL_pcsTxAuxilliaryBitValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsTxAuxilliaryBitValue in AQ_PcsTransmitVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitVendorProvisioning_CAL_pcsTxAuxilliaryBitValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsTxAuxilliaryBitValue in AQ_PcsTransmitVendorProvisioning_CAL */
#define word_AQ_PcsTransmitVendorProvisioning_CAL_pcsTxAuxilliaryBitValue u0.word_0

/*! \brief Base register address of structure AQ_PcsTransmitReservedVendorProvisioning_CAL */
#define AQ_PcsTransmitReservedVendorProvisioning_CAL_baseRegisterAddress 0xC410
/*! \brief MMD address of structure AQ_PcsTransmitReservedVendorProvisioning_CAL */
#define AQ_PcsTransmitReservedVendorProvisioning_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_1 in AQ_PcsTransmitReservedVendorProvisioning_CAL */
#define AQ_PcsTransmitReservedVendorProvisioning_CAL_reservedTransmitProvisioning_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_1 in AQ_PcsTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitReservedVendorProvisioning_CAL_reservedTransmitProvisioning_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_1 in AQ_PcsTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PcsTransmitReservedVendorProvisioning_CAL_reservedTransmitProvisioning_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsIEEE_LoopbackPassthroughDisable in AQ_PcsTransmitReservedVendorProvisioning_CAL */
#define AQ_PcsTransmitReservedVendorProvisioning_CAL_pcsIEEE_LoopbackPassthroughDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsIEEE_LoopbackPassthroughDisable in AQ_PcsTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitReservedVendorProvisioning_CAL_pcsIEEE_LoopbackPassthroughDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsIEEE_LoopbackPassthroughDisable in AQ_PcsTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PcsTransmitReservedVendorProvisioning_CAL_pcsIEEE_LoopbackPassthroughDisable u0.word_0

/*! \brief Base register address of structure AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_baseRegisterAddress 0xC455
/*! \brief MMD address of structure AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure xfiTestPatternSeedAWord_0 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure xfiTestPatternSeedAWord_0 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xfiTestPatternSeedAWord_0 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xfiTestPatternSeedAWord_1 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfiTestPatternSeedAWord_1 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfiTestPatternSeedAWord_1 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfiTestPatternSeedAWord_2 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure xfiTestPatternSeedAWord_2 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure xfiTestPatternSeedAWord_2 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure xfiTestPatternSeedAWord_3 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfiTestPatternSeedAWord_3 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfiTestPatternSeedAWord_3 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedAWord_3 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfiTestPatternSeedBWord_0 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure xfiTestPatternSeedBWord_0 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure xfiTestPatternSeedBWord_0 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure xfiTestPatternSeedBWord_1 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure xfiTestPatternSeedBWord_1 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure xfiTestPatternSeedBWord_1 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure xfiTestPatternSeedBWord_2 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_2 6
/*! \brief Preprocessor variable to relate field to bit position in structure xfiTestPatternSeedBWord_2 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_2 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure xfiTestPatternSeedBWord_2 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_2 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure xfiTestPatternSeedBWord_3 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_3 7
/*! \brief Preprocessor variable to relate field to bit position in structure xfiTestPatternSeedBWord_3 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_3 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure xfiTestPatternSeedBWord_3 in AQ_PcsTransmitXfiVendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfiVendorProvisioning_CAL_xfiTestPatternSeedBWord_3 u7.word_7

/*! \brief Base register address of structure AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_baseRegisterAddress 0xC460
/*! \brief MMD address of structure AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure pmaLoopbackEnable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_pmaLoopbackEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaLoopbackEnable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_pmaLoopbackEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaLoopbackEnable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_pmaLoopbackEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tkl0TxSfdIgnore in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_tkl0TxSfdIgnore 0
/*! \brief Preprocessor variable to relate field to bit position in structure tkl0TxSfdIgnore in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_tkl0TxSfdIgnore u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tkl0TxSfdIgnore in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_tkl0TxSfdIgnore u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xfi0PcsScramblerDisable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsScramblerDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0PcsScramblerDisable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsScramblerDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xfi0PcsScramblerDisable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsScramblerDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xfi0LocalFaultInjectMode in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0LocalFaultInjectMode 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0LocalFaultInjectMode in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0LocalFaultInjectMode u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0LocalFaultInjectMode in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0LocalFaultInjectMode u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestSqaureWaveTestDuration in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestSqaureWaveTestDuration 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestSqaureWaveTestDuration in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestSqaureWaveTestDuration u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestSqaureWaveTestDuration in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestSqaureWaveTestDuration u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestDataSelect in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestDataSelect 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestDataSelect in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestDataSelect u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestDataSelect in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestDataSelect u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestModeSelect in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestModeSelect 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestModeSelect in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestModeSelect u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestModeSelect in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestModeSelect u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestPrbs_9Enable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPrbs_9Enable 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestPrbs_9Enable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPrbs_9Enable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestPrbs_9Enable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPrbs_9Enable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestPrbs_31Enable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPrbs_31Enable 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestPrbs_31Enable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPrbs_31Enable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestPrbs_31Enable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPrbs_31Enable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestPatternEnable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPatternEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestPatternEnable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPatternEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestPatternEnable in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0TestPatternEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0LocalFaultInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0LocalFaultInject 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0LocalFaultInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0LocalFaultInject u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0LocalFaultInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0LocalFaultInject u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0InjectSingleError in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0InjectSingleError 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0InjectSingleError in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0InjectSingleError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0InjectSingleError in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0InjectSingleError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0PcsHighBerInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsHighBerInject 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0PcsHighBerInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsHighBerInject u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0PcsHighBerInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsHighBerInject u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0PcsLossOfLockInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsLossOfLockInject 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0PcsLossOfLockInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define bits_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsLossOfLockInject u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0PcsLossOfLockInject in AQ_PcsTransmitXfi0VendorProvisioning_CAL */
#define word_AQ_PcsTransmitXfi0VendorProvisioning_CAL_xfi0PcsLossOfLockInject u1.word_1

/*! \brief Base register address of structure AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_baseRegisterAddress 0xC4F0
/*! \brief MMD address of structure AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure serdesMuxSwapTxLane_3 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_3 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMuxSwapTxLane_3 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define bits_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_3 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMuxSwapTxLane_3 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define word_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_3 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMuxSwapTxLane_2 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMuxSwapTxLane_2 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define bits_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMuxSwapTxLane_2 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define word_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_2 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMuxSwapTxLane_1 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMuxSwapTxLane_1 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define bits_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMuxSwapTxLane_1 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define word_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMuxSwapTxLane_0 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMuxSwapTxLane_0 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define bits_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMuxSwapTxLane_0 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define word_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapTxLane_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMuxSwapRxLane_3 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_3 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMuxSwapRxLane_3 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define bits_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_3 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMuxSwapRxLane_3 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define word_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_3 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMuxSwapRxLane_2 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMuxSwapRxLane_2 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define bits_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMuxSwapRxLane_2 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define word_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_2 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMuxSwapRxLane_1 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMuxSwapRxLane_1 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define bits_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMuxSwapRxLane_1 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define word_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMuxSwapRxLane_0 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMuxSwapRxLane_0 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define bits_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMuxSwapRxLane_0 in AQ_PcsSerdesMuxSwapTxrxRegister_CAL */
#define word_AQ_PcsSerdesMuxSwapTxrxRegister_CAL_serdesMuxSwapRxLane_0 u0.word_0

/*! \brief Base register address of structure AQ_PcsTransmitTplTimestampCounter_CAL */
#define AQ_PcsTransmitTplTimestampCounter_CAL_baseRegisterAddress 0xC548
/*! \brief MMD address of structure AQ_PcsTransmitTplTimestampCounter_CAL */
#define AQ_PcsTransmitTplTimestampCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure tplEgressAverageTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressAverageTimestampCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure tplEgressAverageTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define bits_AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressAverageTimestampCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tplEgressAverageTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define word_AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressAverageTimestampCounter u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tplEgressMaxTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressMaxTimestampCounter 1
/*! \brief Preprocessor variable to relate field to bit position in structure tplEgressMaxTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define bits_AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressMaxTimestampCounter u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure tplEgressMaxTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define word_AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressMaxTimestampCounter u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure tplEgressMinTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressMinTimestampCounter 2
/*! \brief Preprocessor variable to relate field to bit position in structure tplEgressMinTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define bits_AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressMinTimestampCounter u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure tplEgressMinTimestampCounter in AQ_PcsTransmitTplTimestampCounter_CAL */
#define word_AQ_PcsTransmitTplTimestampCounter_CAL_tplEgressMinTimestampCounter u2.word_2

/*! \brief Base register address of structure AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define AQ_PcsTransmitTgeVendorTimestampCounter_CAL_baseRegisterAddress 0xC568
/*! \brief MMD address of structure AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define AQ_PcsTransmitTgeVendorTimestampCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure tgeEgressAverageTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressAverageTimestampCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure tgeEgressAverageTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define bits_AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressAverageTimestampCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tgeEgressAverageTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define word_AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressAverageTimestampCounter u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tgeEgressMaxTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressMaxTimestampCounter 1
/*! \brief Preprocessor variable to relate field to bit position in structure tgeEgressMaxTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define bits_AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressMaxTimestampCounter u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure tgeEgressMaxTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define word_AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressMaxTimestampCounter u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure tgeEgressMinTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressMinTimestampCounter 2
/*! \brief Preprocessor variable to relate field to bit position in structure tgeEgressMinTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define bits_AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressMinTimestampCounter u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure tgeEgressMinTimestampCounter in AQ_PcsTransmitTgeVendorTimestampCounter_CAL */
#define word_AQ_PcsTransmitTgeVendorTimestampCounter_CAL_tgeEgressMinTimestampCounter u2.word_2

/*! \brief Base register address of structure AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL */
#define AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL_baseRegisterAddress 0xC820
/*! \brief MMD address of structure AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL */
#define AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tGoodFrameCounterLSW in AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL */
#define AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tGoodFrameCounterLSW in AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL */
#define bits_AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tGoodFrameCounterLSW in AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL */
#define word_AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tGoodFrameCounterMSW in AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL */
#define AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tGoodFrameCounterMSW in AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL */
#define bits_AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tGoodFrameCounterMSW in AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL */
#define word_AQ_PcsTransmitVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL */
#define AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL_baseRegisterAddress 0xC822
/*! \brief MMD address of structure AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL */
#define AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tErrorFrameCounterLSW in AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL */
#define AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tErrorFrameCounterLSW in AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL */
#define bits_AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tErrorFrameCounterLSW in AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL */
#define word_AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tErrorFrameCounterMSW in AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL */
#define AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tErrorFrameCounterMSW in AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL */
#define bits_AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tErrorFrameCounterMSW in AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL */
#define word_AQ_PcsTransmitVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsTransmitXfi0VendorState_CAL */
#define AQ_PcsTransmitXfi0VendorState_CAL_baseRegisterAddress 0xC860
/*! \brief MMD address of structure AQ_PcsTransmitXfi0VendorState_CAL */
#define AQ_PcsTransmitXfi0VendorState_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure xfi0GoodFrameCounterLSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define AQ_PcsTransmitXfi0VendorState_CAL_xfi0GoodFrameCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0GoodFrameCounterLSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define bits_AQ_PcsTransmitXfi0VendorState_CAL_xfi0GoodFrameCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xfi0GoodFrameCounterLSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define word_AQ_PcsTransmitXfi0VendorState_CAL_xfi0GoodFrameCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xfi0GoodFrameCounterMSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define AQ_PcsTransmitXfi0VendorState_CAL_xfi0GoodFrameCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0GoodFrameCounterMSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define bits_AQ_PcsTransmitXfi0VendorState_CAL_xfi0GoodFrameCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0GoodFrameCounterMSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define word_AQ_PcsTransmitXfi0VendorState_CAL_xfi0GoodFrameCounterMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0BadFrameCounterLSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define AQ_PcsTransmitXfi0VendorState_CAL_xfi0BadFrameCounterLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0BadFrameCounterLSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define bits_AQ_PcsTransmitXfi0VendorState_CAL_xfi0BadFrameCounterLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure xfi0BadFrameCounterLSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define word_AQ_PcsTransmitXfi0VendorState_CAL_xfi0BadFrameCounterLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure xfi0BadFrameCounterMSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define AQ_PcsTransmitXfi0VendorState_CAL_xfi0BadFrameCounterMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0BadFrameCounterMSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define bits_AQ_PcsTransmitXfi0VendorState_CAL_xfi0BadFrameCounterMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0BadFrameCounterMSW in AQ_PcsTransmitXfi0VendorState_CAL */
#define word_AQ_PcsTransmitXfi0VendorState_CAL_xfi0BadFrameCounterMSW u3.word_3

/*! \brief Base register address of structure AQ_PcsTransmitXgsVendorState_CAL */
#define AQ_PcsTransmitXgsVendorState_CAL_baseRegisterAddress 0xC880
/*! \brief MMD address of structure AQ_PcsTransmitXgsVendorState_CAL */
#define AQ_PcsTransmitXgsVendorState_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure xgsCollisionEventsCounter_0 in AQ_PcsTransmitXgsVendorState_CAL */
#define AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure xgsCollisionEventsCounter_0 in AQ_PcsTransmitXgsVendorState_CAL */
#define bits_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xgsCollisionEventsCounter_0 in AQ_PcsTransmitXgsVendorState_CAL */
#define word_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xgsCollisionEventsCounter_1 in AQ_PcsTransmitXgsVendorState_CAL */
#define AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure xgsCollisionEventsCounter_1 in AQ_PcsTransmitXgsVendorState_CAL */
#define bits_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xgsCollisionEventsCounter_1 in AQ_PcsTransmitXgsVendorState_CAL */
#define word_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xgsCollisionEventsCounter_2 in AQ_PcsTransmitXgsVendorState_CAL */
#define AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure xgsCollisionEventsCounter_2 in AQ_PcsTransmitXgsVendorState_CAL */
#define bits_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure xgsCollisionEventsCounter_2 in AQ_PcsTransmitXgsVendorState_CAL */
#define word_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure xgsCollisionEventsCounter_3 in AQ_PcsTransmitXgsVendorState_CAL */
#define AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure xgsCollisionEventsCounter_3 in AQ_PcsTransmitXgsVendorState_CAL */
#define bits_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xgsCollisionEventsCounter_3 in AQ_PcsTransmitXgsVendorState_CAL */
#define word_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_3 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xgsCollisionEventsCounter_4 in AQ_PcsTransmitXgsVendorState_CAL */
#define AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_4 4
/*! \brief Preprocessor variable to relate field to bit position in structure xgsCollisionEventsCounter_4 in AQ_PcsTransmitXgsVendorState_CAL */
#define bits_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_4 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure xgsCollisionEventsCounter_4 in AQ_PcsTransmitXgsVendorState_CAL */
#define word_AQ_PcsTransmitXgsVendorState_CAL_xgsCollisionEventsCounter_4 u4.word_4

/*! \brief Base register address of structure AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define AQ_PcsTransmitSecVendorTimestampCounter_CAL_baseRegisterAddress 0xC980
/*! \brief MMD address of structure AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define AQ_PcsTransmitSecVendorTimestampCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure secIngressAverageTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressAverageTimestampCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure secIngressAverageTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define bits_AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressAverageTimestampCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure secIngressAverageTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define word_AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressAverageTimestampCounter u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure secIngressMaxTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressMaxTimestampCounter 1
/*! \brief Preprocessor variable to relate field to bit position in structure secIngressMaxTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define bits_AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressMaxTimestampCounter u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure secIngressMaxTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define word_AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressMaxTimestampCounter u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure secIngressMinTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressMinTimestampCounter 2
/*! \brief Preprocessor variable to relate field to bit position in structure secIngressMinTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define bits_AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressMinTimestampCounter u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure secIngressMinTimestampCounter in AQ_PcsTransmitSecVendorTimestampCounter_CAL */
#define word_AQ_PcsTransmitSecVendorTimestampCounter_CAL_secIngressMinTimestampCounter u2.word_2

/*! \brief Base register address of structure AQ_PcsSecL2StatisticsConfiguration_CAL */
#define AQ_PcsSecL2StatisticsConfiguration_CAL_baseRegisterAddress 0xC9A0
/*! \brief MMD address of structure AQ_PcsSecL2StatisticsConfiguration_CAL */
#define AQ_PcsSecL2StatisticsConfiguration_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure secIngressL2CounterSelect in AQ_PcsSecL2StatisticsConfiguration_CAL */
#define AQ_PcsSecL2StatisticsConfiguration_CAL_secIngressL2CounterSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure secIngressL2CounterSelect in AQ_PcsSecL2StatisticsConfiguration_CAL */
#define bits_AQ_PcsSecL2StatisticsConfiguration_CAL_secIngressL2CounterSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure secIngressL2CounterSelect in AQ_PcsSecL2StatisticsConfiguration_CAL */
#define word_AQ_PcsSecL2StatisticsConfiguration_CAL_secIngressL2CounterSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure secEgressL2CounterSelect in AQ_PcsSecL2StatisticsConfiguration_CAL */
#define AQ_PcsSecL2StatisticsConfiguration_CAL_secEgressL2CounterSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure secEgressL2CounterSelect in AQ_PcsSecL2StatisticsConfiguration_CAL */
#define bits_AQ_PcsSecL2StatisticsConfiguration_CAL_secEgressL2CounterSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure secEgressL2CounterSelect in AQ_PcsSecL2StatisticsConfiguration_CAL */
#define word_AQ_PcsSecL2StatisticsConfiguration_CAL_secEgressL2CounterSelect u0.word_0

/*! \brief Base register address of structure AQ_PcsIngressSecL2Counter_CAL */
#define AQ_PcsIngressSecL2Counter_CAL_baseRegisterAddress 0xC9A4
/*! \brief MMD address of structure AQ_PcsIngressSecL2Counter_CAL */
#define AQ_PcsIngressSecL2Counter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure secIngressL2CounterLSW in AQ_PcsIngressSecL2Counter_CAL */
#define AQ_PcsIngressSecL2Counter_CAL_secIngressL2CounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure secIngressL2CounterLSW in AQ_PcsIngressSecL2Counter_CAL */
#define bits_AQ_PcsIngressSecL2Counter_CAL_secIngressL2CounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure secIngressL2CounterLSW in AQ_PcsIngressSecL2Counter_CAL */
#define word_AQ_PcsIngressSecL2Counter_CAL_secIngressL2CounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure secIngressL2CounterMSW in AQ_PcsIngressSecL2Counter_CAL */
#define AQ_PcsIngressSecL2Counter_CAL_secIngressL2CounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure secIngressL2CounterMSW in AQ_PcsIngressSecL2Counter_CAL */
#define bits_AQ_PcsIngressSecL2Counter_CAL_secIngressL2CounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure secIngressL2CounterMSW in AQ_PcsIngressSecL2Counter_CAL */
#define word_AQ_PcsIngressSecL2Counter_CAL_secIngressL2CounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsEgressSecL2Counter_CAL */
#define AQ_PcsEgressSecL2Counter_CAL_baseRegisterAddress 0xC9B0
/*! \brief MMD address of structure AQ_PcsEgressSecL2Counter_CAL */
#define AQ_PcsEgressSecL2Counter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure secEgressL2CounterLSW in AQ_PcsEgressSecL2Counter_CAL */
#define AQ_PcsEgressSecL2Counter_CAL_secEgressL2CounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure secEgressL2CounterLSW in AQ_PcsEgressSecL2Counter_CAL */
#define bits_AQ_PcsEgressSecL2Counter_CAL_secEgressL2CounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure secEgressL2CounterLSW in AQ_PcsEgressSecL2Counter_CAL */
#define word_AQ_PcsEgressSecL2Counter_CAL_secEgressL2CounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure secEgressL2CounterMSW in AQ_PcsEgressSecL2Counter_CAL */
#define AQ_PcsEgressSecL2Counter_CAL_secEgressL2CounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure secEgressL2CounterMSW in AQ_PcsEgressSecL2Counter_CAL */
#define bits_AQ_PcsEgressSecL2Counter_CAL_secEgressL2CounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure secEgressL2CounterMSW in AQ_PcsEgressSecL2Counter_CAL */
#define word_AQ_PcsEgressSecL2Counter_CAL_secEgressL2CounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_baseRegisterAddress 0xCC00
/*! \brief MMD address of structure AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reservedPcsTransmitVendorAlarms_1 in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPcsTransmitVendorAlarms_1 in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedPcsTransmitVendorAlarms_1 in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tdeLaneMuxFifoParityError in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_tdeLaneMuxFifoParityError 0
/*! \brief Preprocessor variable to relate field to bit position in structure tdeLaneMuxFifoParityError in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_tdeLaneMuxFifoParityError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tdeLaneMuxFifoParityError in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_tdeLaneMuxFifoParityError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tdeLaneMuxFifoSyncError in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_tdeLaneMuxFifoSyncError 0
/*! \brief Preprocessor variable to relate field to bit position in structure tdeLaneMuxFifoSyncError in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_tdeLaneMuxFifoSyncError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tdeLaneMuxFifoSyncError in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_tdeLaneMuxFifoSyncError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xauiTransmitInvalid_512bBlockDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_xauiTransmitInvalid_512bBlockDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure xauiTransmitInvalid_512bBlockDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_xauiTransmitInvalid_512bBlockDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xauiTransmitInvalid_512bBlockDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_xauiTransmitInvalid_512bBlockDetected u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xauiTransmitInvalid_64bBlockDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_xauiTransmitInvalid_64bBlockDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure xauiTransmitInvalid_64bBlockDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_xauiTransmitInvalid_64bBlockDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xauiTransmitInvalid_64bBlockDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_xauiTransmitInvalid_64bBlockDetected u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedPcsTransmitVendorAlarms_2 in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPcsTransmitVendorAlarms_2 in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedPcsTransmitVendorAlarms_2 in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_2 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedPcsTransmitVendorAlarms_3 in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_3 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPcsTransmitVendorAlarms_3 in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_3 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedPcsTransmitVendorAlarms_3 in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_reservedPcsTransmitVendorAlarms_3 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure tkl0CtcIn_2LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_2LinkFifoError 3
/*! \brief Preprocessor variable to relate field to bit position in structure tkl0CtcIn_2LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_2LinkFifoError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure tkl0CtcIn_2LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_2LinkFifoError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure tkl0CtcIn_1LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_1LinkFifoError 3
/*! \brief Preprocessor variable to relate field to bit position in structure tkl0CtcIn_1LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_1LinkFifoError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure tkl0CtcIn_1LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_1LinkFifoError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure tkl0CtcIn_0LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_0LinkFifoError 3
/*! \brief Preprocessor variable to relate field to bit position in structure tkl0CtcIn_0LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_0LinkFifoError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure tkl0CtcIn_0LinkFifoError in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_tkl0CtcIn_0LinkFifoError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TransmitInvalidXgmiiCharacterReceived in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitInvalidXgmiiCharacterReceived 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TransmitInvalidXgmiiCharacterReceived in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitInvalidXgmiiCharacterReceived u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TransmitInvalidXgmiiCharacterReceived in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitInvalidXgmiiCharacterReceived u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TransmitReservedXgmiiCharacterReceived in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitReservedXgmiiCharacterReceived 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TransmitReservedXgmiiCharacterReceived in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitReservedXgmiiCharacterReceived u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TransmitReservedXgmiiCharacterReceived in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitReservedXgmiiCharacterReceived u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfi0Transmit_64bEncodeError in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_xfi0Transmit_64bEncodeError 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0Transmit_64bEncodeError in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_xfi0Transmit_64bEncodeError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0Transmit_64bEncodeError in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_xfi0Transmit_64bEncodeError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TransmitLofDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitLofDetected 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TransmitLofDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define bits_AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitLofDetected u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TransmitLofDetected in AQ_PcsTransmitVendorAlarms_CAL */
#define word_AQ_PcsTransmitVendorAlarms_CAL_xfi0TransmitLofDetected u3.word_3

/*! \brief Base register address of structure AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL_baseRegisterAddress 0xD000
/*! \brief MMD address of structure AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure txLpiReceivedMask in AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL_txLpiReceivedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure txLpiReceivedMask in AQ_PcsStandardInterruptMask_CAL */
#define bits_AQ_PcsStandardInterruptMask_CAL_txLpiReceivedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txLpiReceivedMask in AQ_PcsStandardInterruptMask_CAL */
#define word_AQ_PcsStandardInterruptMask_CAL_txLpiReceivedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rxLpiReceivedMask in AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL_rxLpiReceivedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure rxLpiReceivedMask in AQ_PcsStandardInterruptMask_CAL */
#define bits_AQ_PcsStandardInterruptMask_CAL_rxLpiReceivedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rxLpiReceivedMask in AQ_PcsStandardInterruptMask_CAL */
#define word_AQ_PcsStandardInterruptMask_CAL_rxLpiReceivedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsReceiveLinkStatusMask in AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL_pcsReceiveLinkStatusMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsReceiveLinkStatusMask in AQ_PcsStandardInterruptMask_CAL */
#define bits_AQ_PcsStandardInterruptMask_CAL_pcsReceiveLinkStatusMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsReceiveLinkStatusMask in AQ_PcsStandardInterruptMask_CAL */
#define word_AQ_PcsStandardInterruptMask_CAL_pcsReceiveLinkStatusMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitFaultMask in AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL_transmitFaultMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure transmitFaultMask in AQ_PcsStandardInterruptMask_CAL */
#define bits_AQ_PcsStandardInterruptMask_CAL_transmitFaultMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure transmitFaultMask in AQ_PcsStandardInterruptMask_CAL */
#define word_AQ_PcsStandardInterruptMask_CAL_transmitFaultMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure receiveFaultMask in AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL_receiveFaultMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure receiveFaultMask in AQ_PcsStandardInterruptMask_CAL */
#define bits_AQ_PcsStandardInterruptMask_CAL_receiveFaultMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure receiveFaultMask in AQ_PcsStandardInterruptMask_CAL */
#define word_AQ_PcsStandardInterruptMask_CAL_receiveFaultMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tPcsBlockLockLatchedMask in AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL__10gbase_tPcsBlockLockLatchedMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tPcsBlockLockLatchedMask in AQ_PcsStandardInterruptMask_CAL */
#define bits_AQ_PcsStandardInterruptMask_CAL__10gbase_tPcsBlockLockLatchedMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tPcsBlockLockLatchedMask in AQ_PcsStandardInterruptMask_CAL */
#define word_AQ_PcsStandardInterruptMask_CAL__10gbase_tPcsBlockLockLatchedMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tHighBerLatchedMask in AQ_PcsStandardInterruptMask_CAL */
#define AQ_PcsStandardInterruptMask_CAL__10gbase_tHighBerLatchedMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tHighBerLatchedMask in AQ_PcsStandardInterruptMask_CAL */
#define bits_AQ_PcsStandardInterruptMask_CAL__10gbase_tHighBerLatchedMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tHighBerLatchedMask in AQ_PcsStandardInterruptMask_CAL */
#define word_AQ_PcsStandardInterruptMask_CAL__10gbase_tHighBerLatchedMask u2.word_2

/*! \brief Base register address of structure AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_baseRegisterAddress 0xD400
/*! \brief MMD address of structure AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure reservedPcsTransmitVendorAlarms_1Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_1Mask 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPcsTransmitVendorAlarms_1Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_1Mask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedPcsTransmitVendorAlarms_1Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_1Mask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tdeLaneMuxFifoParityErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_tdeLaneMuxFifoParityErrorMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure tdeLaneMuxFifoParityErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_tdeLaneMuxFifoParityErrorMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tdeLaneMuxFifoParityErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_tdeLaneMuxFifoParityErrorMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tdeLaneMuxFifoSyncErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_tdeLaneMuxFifoSyncErrorMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure tdeLaneMuxFifoSyncErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_tdeLaneMuxFifoSyncErrorMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tdeLaneMuxFifoSyncErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_tdeLaneMuxFifoSyncErrorMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xauiTransmitInvalid_512bBlockDetectedMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_xauiTransmitInvalid_512bBlockDetectedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure xauiTransmitInvalid_512bBlockDetectedMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_xauiTransmitInvalid_512bBlockDetectedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xauiTransmitInvalid_512bBlockDetectedMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_xauiTransmitInvalid_512bBlockDetectedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xauiTransmitInvalid_64bBlockDetectedMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_xauiTransmitInvalid_64bBlockDetectedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure xauiTransmitInvalid_64bBlockDetectedMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_xauiTransmitInvalid_64bBlockDetectedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xauiTransmitInvalid_64bBlockDetectedMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_xauiTransmitInvalid_64bBlockDetectedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedPcsTransmitVendorAlarms_2Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_2Mask 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPcsTransmitVendorAlarms_2Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_2Mask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedPcsTransmitVendorAlarms_2Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_2Mask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedPcsTransmitVendorAlarms_3Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_3Mask 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPcsTransmitVendorAlarms_3Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_3Mask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedPcsTransmitVendorAlarms_3Mask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_reservedPcsTransmitVendorAlarms_3Mask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure tkl0CtcIn_2LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_2LinkFifoErrorMask 3
/*! \brief Preprocessor variable to relate field to bit position in structure tkl0CtcIn_2LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_2LinkFifoErrorMask u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure tkl0CtcIn_2LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_2LinkFifoErrorMask u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure tkl0CtcIn_1LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_1LinkFifoErrorMask 3
/*! \brief Preprocessor variable to relate field to bit position in structure tkl0CtcIn_1LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_1LinkFifoErrorMask u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure tkl0CtcIn_1LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_1LinkFifoErrorMask u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure tkl0CtcIn_0LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_0LinkFifoErrorMask 3
/*! \brief Preprocessor variable to relate field to bit position in structure tkl0CtcIn_0LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_0LinkFifoErrorMask u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure tkl0CtcIn_0LinkFifoErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_tkl0CtcIn_0LinkFifoErrorMask u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TransmitInvalidXgmiiCharacterErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitInvalidXgmiiCharacterErrorMask 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TransmitInvalidXgmiiCharacterErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitInvalidXgmiiCharacterErrorMask u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TransmitInvalidXgmiiCharacterErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitInvalidXgmiiCharacterErrorMask u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TransmitReservedXgmiiCharacterErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitReservedXgmiiCharacterErrorMask 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TransmitReservedXgmiiCharacterErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitReservedXgmiiCharacterErrorMask u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TransmitReservedXgmiiCharacterErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitReservedXgmiiCharacterErrorMask u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TransmitEncode_64bErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitEncode_64bErrorMask 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TransmitEncode_64bErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define bits_AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitEncode_64bErrorMask u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TransmitEncode_64bErrorMask in AQ_PcsTransmitVendorInterruptMask_CAL */
#define word_AQ_PcsTransmitVendorInterruptMask_CAL_xfi0TransmitEncode_64bErrorMask u3.word_3

/*! \brief Base register address of structure AQ_PcsTransmitVendorDebug_CAL */
#define AQ_PcsTransmitVendorDebug_CAL_baseRegisterAddress 0xD800
/*! \brief MMD address of structure AQ_PcsTransmitVendorDebug_CAL */
#define AQ_PcsTransmitVendorDebug_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure pcsTxScramblerDisable in AQ_PcsTransmitVendorDebug_CAL */
#define AQ_PcsTransmitVendorDebug_CAL_pcsTxScramblerDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsTxScramblerDisable in AQ_PcsTransmitVendorDebug_CAL */
#define bits_AQ_PcsTransmitVendorDebug_CAL_pcsTxScramblerDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsTxScramblerDisable in AQ_PcsTransmitVendorDebug_CAL */
#define word_AQ_PcsTransmitVendorDebug_CAL_pcsTxScramblerDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsTxInjectCrcError in AQ_PcsTransmitVendorDebug_CAL */
#define AQ_PcsTransmitVendorDebug_CAL_pcsTxInjectCrcError 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsTxInjectCrcError in AQ_PcsTransmitVendorDebug_CAL */
#define bits_AQ_PcsTransmitVendorDebug_CAL_pcsTxInjectCrcError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsTxInjectCrcError in AQ_PcsTransmitVendorDebug_CAL */
#define word_AQ_PcsTransmitVendorDebug_CAL_pcsTxInjectCrcError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsTxInjectFrameError in AQ_PcsTransmitVendorDebug_CAL */
#define AQ_PcsTransmitVendorDebug_CAL_pcsTxInjectFrameError 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsTxInjectFrameError in AQ_PcsTransmitVendorDebug_CAL */
#define bits_AQ_PcsTransmitVendorDebug_CAL_pcsTxInjectFrameError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsTxInjectFrameError in AQ_PcsTransmitVendorDebug_CAL */
#define word_AQ_PcsTransmitVendorDebug_CAL_pcsTxInjectFrameError u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveVendorProvisioning_CAL */
#define AQ_PcsReceiveVendorProvisioning_CAL_baseRegisterAddress 0xE400
/*! \brief MMD address of structure AQ_PcsReceiveVendorProvisioning_CAL */
#define AQ_PcsReceiveVendorProvisioning_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure pcsRxLdpcDecoderIteration in AQ_PcsReceiveVendorProvisioning_CAL */
#define AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDecoderIteration 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsRxLdpcDecoderIteration in AQ_PcsReceiveVendorProvisioning_CAL */
#define bits_AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDecoderIteration u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsRxLdpcDecoderIteration in AQ_PcsReceiveVendorProvisioning_CAL */
#define word_AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDecoderIteration u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsRxLdpcDecoderPrecodingMode in AQ_PcsReceiveVendorProvisioning_CAL */
#define AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDecoderPrecodingMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsRxLdpcDecoderPrecodingMode in AQ_PcsReceiveVendorProvisioning_CAL */
#define bits_AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDecoderPrecodingMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsRxLdpcDecoderPrecodingMode in AQ_PcsReceiveVendorProvisioning_CAL */
#define word_AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDecoderPrecodingMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsRxLdpcDatapathLatencyControl in AQ_PcsReceiveVendorProvisioning_CAL */
#define AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDatapathLatencyControl 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsRxLdpcDatapathLatencyControl in AQ_PcsReceiveVendorProvisioning_CAL */
#define bits_AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDatapathLatencyControl u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsRxLdpcDatapathLatencyControl in AQ_PcsReceiveVendorProvisioning_CAL */
#define word_AQ_PcsReceiveVendorProvisioning_CAL_pcsRxLdpcDatapathLatencyControl u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsRxErrorLdpcFrameEnable in AQ_PcsReceiveVendorProvisioning_CAL */
#define AQ_PcsReceiveVendorProvisioning_CAL_pcsRxErrorLdpcFrameEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsRxErrorLdpcFrameEnable in AQ_PcsReceiveVendorProvisioning_CAL */
#define bits_AQ_PcsReceiveVendorProvisioning_CAL_pcsRxErrorLdpcFrameEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsRxErrorLdpcFrameEnable in AQ_PcsReceiveVendorProvisioning_CAL */
#define word_AQ_PcsReceiveVendorProvisioning_CAL_pcsRxErrorLdpcFrameEnable u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_baseRegisterAddress 0xE460
/*! \brief MMD address of structure AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure pmaLoopbackEnable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_pmaLoopbackEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaLoopbackEnable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define bits_AQ_PcsReceiveXfi0Provisioning_CAL_pmaLoopbackEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaLoopbackEnable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define word_AQ_PcsReceiveXfi0Provisioning_CAL_pmaLoopbackEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rkl0RxSfdIgnore in AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_rkl0RxSfdIgnore 0
/*! \brief Preprocessor variable to relate field to bit position in structure rkl0RxSfdIgnore in AQ_PcsReceiveXfi0Provisioning_CAL */
#define bits_AQ_PcsReceiveXfi0Provisioning_CAL_rkl0RxSfdIgnore u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rkl0RxSfdIgnore in AQ_PcsReceiveXfi0Provisioning_CAL */
#define word_AQ_PcsReceiveXfi0Provisioning_CAL_rkl0RxSfdIgnore u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xfi0RxDescramblerDisable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_xfi0RxDescramblerDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0RxDescramblerDisable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define bits_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0RxDescramblerDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xfi0RxDescramblerDisable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define word_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0RxDescramblerDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestDataSource in AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestDataSource 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestDataSource in AQ_PcsReceiveXfi0Provisioning_CAL */
#define bits_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestDataSource u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestDataSource in AQ_PcsReceiveXfi0Provisioning_CAL */
#define word_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestDataSource u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestModeSelect in AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestModeSelect 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestModeSelect in AQ_PcsReceiveXfi0Provisioning_CAL */
#define bits_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestModeSelect u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestModeSelect in AQ_PcsReceiveXfi0Provisioning_CAL */
#define word_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestModeSelect u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestPatternEnable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestPatternEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestPatternEnable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define bits_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestPatternEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestPatternEnable in AQ_PcsReceiveXfi0Provisioning_CAL */
#define word_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0TestPatternEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0LocalFaultInject in AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_xfi0LocalFaultInject 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0LocalFaultInject in AQ_PcsReceiveXfi0Provisioning_CAL */
#define bits_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0LocalFaultInject u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0LocalFaultInject in AQ_PcsReceiveXfi0Provisioning_CAL */
#define word_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0LocalFaultInject u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0LocalFaultInjectMode in AQ_PcsReceiveXfi0Provisioning_CAL */
#define AQ_PcsReceiveXfi0Provisioning_CAL_xfi0LocalFaultInjectMode 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0LocalFaultInjectMode in AQ_PcsReceiveXfi0Provisioning_CAL */
#define bits_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0LocalFaultInjectMode u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0LocalFaultInjectMode in AQ_PcsReceiveXfi0Provisioning_CAL */
#define word_AQ_PcsReceiveXfi0Provisioning_CAL_xfi0LocalFaultInjectMode u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorState_CAL */
#define AQ_PcsReceiveVendorState_CAL_baseRegisterAddress 0xE800
/*! \brief MMD address of structure AQ_PcsReceiveVendorState_CAL */
#define AQ_PcsReceiveVendorState_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure pcsRxCurrentValueOfAuxilliaryBit in AQ_PcsReceiveVendorState_CAL */
#define AQ_PcsReceiveVendorState_CAL_pcsRxCurrentValueOfAuxilliaryBit 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsRxCurrentValueOfAuxilliaryBit in AQ_PcsReceiveVendorState_CAL */
#define bits_AQ_PcsReceiveVendorState_CAL_pcsRxCurrentValueOfAuxilliaryBit u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsRxCurrentValueOfAuxilliaryBit in AQ_PcsReceiveVendorState_CAL */
#define word_AQ_PcsReceiveVendorState_CAL_pcsRxCurrentValueOfAuxilliaryBit u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveReservedVendorState_CAL */
#define AQ_PcsReceiveReservedVendorState_CAL_baseRegisterAddress 0xE808
/*! \brief MMD address of structure AQ_PcsReceiveReservedVendorState_CAL */
#define AQ_PcsReceiveReservedVendorState_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure averageLdpcIterationCount in AQ_PcsReceiveReservedVendorState_CAL */
#define AQ_PcsReceiveReservedVendorState_CAL_averageLdpcIterationCount 0
/*! \brief Preprocessor variable to relate field to bit position in structure averageLdpcIterationCount in AQ_PcsReceiveReservedVendorState_CAL */
#define bits_AQ_PcsReceiveReservedVendorState_CAL_averageLdpcIterationCount u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure averageLdpcIterationCount in AQ_PcsReceiveReservedVendorState_CAL */
#define word_AQ_PcsReceiveReservedVendorState_CAL_averageLdpcIterationCount u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL */
#define AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL_baseRegisterAddress 0xE810
/*! \brief MMD address of structure AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL */
#define AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure crc_8ErrorCounterLSW in AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL */
#define AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL_crc_8ErrorCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure crc_8ErrorCounterLSW in AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL */
#define bits_AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL_crc_8ErrorCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure crc_8ErrorCounterLSW in AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL */
#define word_AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL_crc_8ErrorCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure crc_8ErrorCounterMSW in AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL */
#define AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL_crc_8ErrorCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure crc_8ErrorCounterMSW in AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL */
#define bits_AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL_crc_8ErrorCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure crc_8ErrorCounterMSW in AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL */
#define word_AQ_PcsReceiveVendorCrc_8ErrorCounter_CAL_crc_8ErrorCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL_baseRegisterAddress 0xE812
/*! \brief MMD address of structure AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tGoodFrameCounterLSW in AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tGoodFrameCounterLSW in AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL */
#define bits_AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tGoodFrameCounterLSW in AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL */
#define word_AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tGoodFrameCounterMSW in AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tGoodFrameCounterMSW in AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL */
#define bits_AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tGoodFrameCounterMSW in AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL */
#define word_AQ_PcsReceiveVendorFcsNoErrorFrameCounter_CAL__10gbase_tGoodFrameCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL_baseRegisterAddress 0xE814
/*! \brief MMD address of structure AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tErrorFrameCounterLSW in AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tErrorFrameCounterLSW in AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL */
#define bits_AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tErrorFrameCounterLSW in AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL */
#define word_AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gbase_tErrorFrameCounterMSW in AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure _10gbase_tErrorFrameCounterMSW in AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL */
#define bits_AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure _10gbase_tErrorFrameCounterMSW in AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL */
#define word_AQ_PcsReceiveVendorFcsErrorFrameCounter_CAL__10gbase_tErrorFrameCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL_baseRegisterAddress 0xE816
/*! \brief MMD address of structure AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure rsCorrectedErrorCounterLSW in AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL_rsCorrectedErrorCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure rsCorrectedErrorCounterLSW in AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL */
#define bits_AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL_rsCorrectedErrorCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rsCorrectedErrorCounterLSW in AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL */
#define word_AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL_rsCorrectedErrorCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rsCorrectedErrorCounterMSW in AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL */
#define AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL_rsCorrectedErrorCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure rsCorrectedErrorCounterMSW in AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL */
#define bits_AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL_rsCorrectedErrorCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure rsCorrectedErrorCounterMSW in AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL */
#define word_AQ_PcsReceiveVendorRsCorrectedErrorFrameCounter_CAL_rsCorrectedErrorCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL */
#define AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL_baseRegisterAddress 0xE820
/*! \brief MMD address of structure AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL */
#define AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure uncorrectedFrameCounterLSW in AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL */
#define AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL_uncorrectedFrameCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure uncorrectedFrameCounterLSW in AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL */
#define bits_AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL_uncorrectedFrameCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure uncorrectedFrameCounterLSW in AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL */
#define word_AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL_uncorrectedFrameCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure uncorrectedFrameCounterMSW in AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL */
#define AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL_uncorrectedFrameCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure uncorrectedFrameCounterMSW in AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL */
#define bits_AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL_uncorrectedFrameCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure uncorrectedFrameCounterMSW in AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL */
#define word_AQ_PcsReceiveVendorUncorrectedFrameCounter_CAL_uncorrectedFrameCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL_baseRegisterAddress 0xE840
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_1IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL_correctedFrames_1IterationCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_1IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL_correctedFrames_1IterationCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_1IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL_correctedFrames_1IterationCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_1IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL_correctedFrames_1IterationCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_1IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL_correctedFrames_1IterationCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_1IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_1IterationCounter_CAL_correctedFrames_1IterationCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL_baseRegisterAddress 0xE842
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_2IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL_correctedFrames_2IterationCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_2IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL_correctedFrames_2IterationCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_2IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL_correctedFrames_2IterationCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_2IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL_correctedFrames_2IterationCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_2IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL_correctedFrames_2IterationCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_2IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_2IterationCounter_CAL_correctedFrames_2IterationCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL_baseRegisterAddress 0xE844
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_3IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL_correctedFrames_3IterationCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_3IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL_correctedFrames_3IterationCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_3IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL_correctedFrames_3IterationCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_3IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL_correctedFrames_3IterationCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_3IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL_correctedFrames_3IterationCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_3IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_3IterationCounter_CAL_correctedFrames_3IterationCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL_baseRegisterAddress 0xE846
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_4IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL_correctedFrames_4IterationCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_4IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL_correctedFrames_4IterationCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_4IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL_correctedFrames_4IterationCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_4IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL_correctedFrames_4IterationCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_4IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL_correctedFrames_4IterationCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_4IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_4IterationCounter_CAL_correctedFrames_4IterationCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL_baseRegisterAddress 0xE848
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_5IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL_correctedFrames_5IterationCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_5IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL_correctedFrames_5IterationCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_5IterationCounterLSW in AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL_correctedFrames_5IterationCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_5IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL_correctedFrames_5IterationCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_5IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL_correctedFrames_5IterationCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_5IterationCounterMSW in AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_5IterationCounter_CAL_correctedFrames_5IterationCounterMSW u1.word_1

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL_baseRegisterAddress 0xE84A
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_6IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL_correctedFrames_6IterationCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_6IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL_correctedFrames_6IterationCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_6IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_6IterationCounter_CAL_correctedFrames_6IterationCounter u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL_baseRegisterAddress 0xE84B
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_7IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL_correctedFrames_7IterationCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_7IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL_correctedFrames_7IterationCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_7IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_7IterationCounter_CAL_correctedFrames_7IterationCounter u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL_baseRegisterAddress 0xE84C
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_8IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL_correctedFrames_8IterationCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_8IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL_correctedFrames_8IterationCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_8IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_8IterationCounter_CAL_correctedFrames_8IterationCounter u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL_baseRegisterAddress 0xE84D
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_9IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL_correctedFrames_9IterationCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_9IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL_correctedFrames_9IterationCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_9IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_9IterationCounter_CAL_correctedFrames_9IterationCounter u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL_baseRegisterAddress 0xE84E
/*! \brief MMD address of structure AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure correctedFrames_10IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL */
#define AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL_correctedFrames_10IterationCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure correctedFrames_10IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL */
#define bits_AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL_correctedFrames_10IterationCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure correctedFrames_10IterationCounter in AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL */
#define word_AQ_PcsReceiveVendorCorrectedFrame_10IterationCounter_CAL_correctedFrames_10IterationCounter u0.word_0

/*! \brief Base register address of structure AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_baseRegisterAddress 0xE860
/*! \brief MMD address of structure AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure xfi0GoodFrameCounterLSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_xfi0GoodFrameCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0GoodFrameCounterLSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define bits_AQ_PcsReceiveXfi0VendorState_CAL_xfi0GoodFrameCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xfi0GoodFrameCounterLSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define word_AQ_PcsReceiveXfi0VendorState_CAL_xfi0GoodFrameCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xfi0GoodFrameCounterMSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_xfi0GoodFrameCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0GoodFrameCounterMSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define bits_AQ_PcsReceiveXfi0VendorState_CAL_xfi0GoodFrameCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xfi0GoodFrameCounterMSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define word_AQ_PcsReceiveXfi0VendorState_CAL_xfi0GoodFrameCounterMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xfi0BadFrameCounterLSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_xfi0BadFrameCounterLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0BadFrameCounterLSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define bits_AQ_PcsReceiveXfi0VendorState_CAL_xfi0BadFrameCounterLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure xfi0BadFrameCounterLSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define word_AQ_PcsReceiveXfi0VendorState_CAL_xfi0BadFrameCounterLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure xfi0BadFrameCounterMSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_xfi0BadFrameCounterMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0BadFrameCounterMSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define bits_AQ_PcsReceiveXfi0VendorState_CAL_xfi0BadFrameCounterMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure xfi0BadFrameCounterMSW in AQ_PcsReceiveXfi0VendorState_CAL */
#define word_AQ_PcsReceiveXfi0VendorState_CAL_xfi0BadFrameCounterMSW u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure xfi0BerCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_xfi0BerCounter 4
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0BerCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define bits_AQ_PcsReceiveXfi0VendorState_CAL_xfi0BerCounter u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure xfi0BerCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define word_AQ_PcsReceiveXfi0VendorState_CAL_xfi0BerCounter u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure xfi0ErroredBlockCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_xfi0ErroredBlockCounter 5
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0ErroredBlockCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define bits_AQ_PcsReceiveXfi0VendorState_CAL_xfi0ErroredBlockCounter u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure xfi0ErroredBlockCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define word_AQ_PcsReceiveXfi0VendorState_CAL_xfi0ErroredBlockCounter u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure xfi0TestPatternErrorCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define AQ_PcsReceiveXfi0VendorState_CAL_xfi0TestPatternErrorCounter 6
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0TestPatternErrorCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define bits_AQ_PcsReceiveXfi0VendorState_CAL_xfi0TestPatternErrorCounter u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure xfi0TestPatternErrorCounter in AQ_PcsReceiveXfi0VendorState_CAL */
#define word_AQ_PcsReceiveXfi0VendorState_CAL_xfi0TestPatternErrorCounter u6.word_6

/*! \brief Base register address of structure AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_baseRegisterAddress 0xEC00
/*! \brief MMD address of structure AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure crcError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_crcError 0
/*! \brief Preprocessor variable to relate field to bit position in structure crcError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_crcError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure crcError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_crcError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ldpcDecodeFailure in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ldpcDecodeFailure 0
/*! \brief Preprocessor variable to relate field to bit position in structure ldpcDecodeFailure in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ldpcDecodeFailure u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ldpcDecodeFailure in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ldpcDecodeFailure u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rplLinkFailure in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_rplLinkFailure 0
/*! \brief Preprocessor variable to relate field to bit position in structure rplLinkFailure in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_rplLinkFailure u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rplLinkFailure in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_rplLinkFailure u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _40gBipLock in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL__40gBipLock 0
/*! \brief Preprocessor variable to relate field to bit position in structure _40gBipLock in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL__40gBipLock u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _40gBipLock in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL__40gBipLock u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure localFaultDetect in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_localFaultDetect 0
/*! \brief Preprocessor variable to relate field to bit position in structure localFaultDetect in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_localFaultDetect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure localFaultDetect in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_localFaultDetect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lofDetect in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_lofDetect 0
/*! \brief Preprocessor variable to relate field to bit position in structure lofDetect in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_lofDetect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lofDetect in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_lofDetect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure invalid_513bBlock in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_invalid_513bBlock 0
/*! \brief Preprocessor variable to relate field to bit position in structure invalid_513bBlock in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_invalid_513bBlock u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure invalid_513bBlock in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_invalid_513bBlock u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure invalid_65bBlock in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_invalid_65bBlock 0
/*! \brief Preprocessor variable to relate field to bit position in structure invalid_65bBlock in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_invalid_65bBlock u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure invalid_65bBlock in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_invalid_65bBlock u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiActiveOff in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiActiveOff 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiActiveOff in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiActiveOff u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiActiveOff in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiActiveOff u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiActiveOn in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiActiveOn 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiActiveOn in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiActiveOn u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiActiveOn in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiActiveOn u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ldpcConsecutiveErroredFrameExceeded in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ldpcConsecutiveErroredFrameExceeded 0
/*! \brief Preprocessor variable to relate field to bit position in structure ldpcConsecutiveErroredFrameExceeded in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ldpcConsecutiveErroredFrameExceeded u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ldpcConsecutiveErroredFrameExceeded in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ldpcConsecutiveErroredFrameExceeded u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiAlert in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiAlert 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiAlert in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiAlert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiAlert in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiAlert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiReceivedLatchedLow in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiReceivedLatchedLow 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiReceivedLatchedLow in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiReceivedLatchedLow u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiReceivedLatchedLow in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiReceivedLatchedLow u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiReceivedLatchedHigh in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiReceivedLatchedHigh 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiReceivedLatchedHigh in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiReceivedLatchedHigh u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiReceivedLatchedHigh in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_eeeRxLpiReceivedLatchedHigh u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure changeInAuxilliaryBit in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_changeInAuxilliaryBit 0
/*! \brief Preprocessor variable to relate field to bit position in structure changeInAuxilliaryBit in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_changeInAuxilliaryBit u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure changeInAuxilliaryBit in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_changeInAuxilliaryBit u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rddLaneMuxFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_rddLaneMuxFifoParityError 4
/*! \brief Preprocessor variable to relate field to bit position in structure rddLaneMuxFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_rddLaneMuxFifoParityError u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure rddLaneMuxFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_rddLaneMuxFifoParityError u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure rddLaneMuxFifoSyncError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_rddLaneMuxFifoSyncError 4
/*! \brief Preprocessor variable to relate field to bit position in structure rddLaneMuxFifoSyncError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_rddLaneMuxFifoSyncError u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure rddLaneMuxFifoSyncError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_rddLaneMuxFifoSyncError u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure xfi0CtcAmMarkerError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_xfi0CtcAmMarkerError 5
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0CtcAmMarkerError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_xfi0CtcAmMarkerError u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure xfi0CtcAmMarkerError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_xfi0CtcAmMarkerError u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure xfi0CtcAmLockStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_xfi0CtcAmLockStatus 5
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0CtcAmLockStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_xfi0CtcAmLockStatus u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure xfi0CtcAmLockStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_xfi0CtcAmLockStatus u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure rkl0CtcIn_1LinkFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_rkl0CtcIn_1LinkFifoError 5
/*! \brief Preprocessor variable to relate field to bit position in structure rkl0CtcIn_1LinkFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_rkl0CtcIn_1LinkFifoError u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure rkl0CtcIn_1LinkFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_rkl0CtcIn_1LinkFifoError u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure rkl0CtcIn_0LinkFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_rkl0CtcIn_0LinkFifoError 5
/*! \brief Preprocessor variable to relate field to bit position in structure rkl0CtcIn_0LinkFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_rkl0CtcIn_0LinkFifoError u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure rkl0CtcIn_0LinkFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_rkl0CtcIn_0LinkFifoError u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure xfi0Invalid_66bCharacterReceived in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_xfi0Invalid_66bCharacterReceived 5
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0Invalid_66bCharacterReceived in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_xfi0Invalid_66bCharacterReceived u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure xfi0Invalid_66bCharacterReceived in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_xfi0Invalid_66bCharacterReceived u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure xfi0ReceiveLinkStatusLatchHigh in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_xfi0ReceiveLinkStatusLatchHigh 6
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0ReceiveLinkStatusLatchHigh in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_xfi0ReceiveLinkStatusLatchHigh u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure xfi0ReceiveLinkStatusLatchHigh in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_xfi0ReceiveLinkStatusLatchHigh u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure xfi0HighBerStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_xfi0HighBerStatus 6
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0HighBerStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_xfi0HighBerStatus u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure xfi0HighBerStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_xfi0HighBerStatus u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure xfi0BlockLockStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_xfi0BlockLockStatus 6
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0BlockLockStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_xfi0BlockLockStatus u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure xfi0BlockLockStatus in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_xfi0BlockLockStatus u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketStatusFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketStatusFifoError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketStatusFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketStatusFifoError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketStatusFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketStatusFifoError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketGapFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketGapFifoError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketGapFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketGapFifoError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketGapFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketGapFifoError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketGapFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketGapFifoParityError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketGapFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketGapFifoParityError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketGapFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketGapFifoParityError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketReadyFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReadyFifoError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketReadyFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReadyFifoError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketReadyFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReadyFifoError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketReadyFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReadyFifoParityError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketReadyFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReadyFifoParityError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketReadyFifoParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReadyFifoParityError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketRemoveError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketRemoveError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketRemoveError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketRemoveError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketRemoveError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketRemoveError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketReceived in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReceived 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketReceived in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReceived u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketReceived in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReceived u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketPipelineFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketPipelineFifoError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketPipelineFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketPipelineFifoError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketPipelineFifoError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketPipelineFifoError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketPipelineParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketPipelineParityError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketPipelineParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketPipelineParityError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketPipelineParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketPipelineParityError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressTimeStampBufferParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressTimeStampBufferParityError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressTimeStampBufferParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressTimeStampBufferParityError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressTimeStampBufferParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressTimeStampBufferParityError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketBufferParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketBufferParityError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketBufferParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketBufferParityError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketBufferParityError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketBufferParityError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketCorrectionFieldError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketCorrectionFieldError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketCorrectionFieldError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketCorrectionFieldError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketCorrectionFieldError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketCorrectionFieldError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketBufferOverflowError in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketBufferOverflowError 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketBufferOverflowError in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketBufferOverflowError u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketBufferOverflowError in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketBufferOverflowError u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressTimeStampReady in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressTimeStampReady 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressTimeStampReady in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressTimeStampReady u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressTimeStampReady in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressTimeStampReady u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ptpIngressPacketReady in AQ_PcsReceiveVendorAlarms_CAL */
#define AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReady 9
/*! \brief Preprocessor variable to relate field to bit position in structure ptpIngressPacketReady in AQ_PcsReceiveVendorAlarms_CAL */
#define bits_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReady u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ptpIngressPacketReady in AQ_PcsReceiveVendorAlarms_CAL */
#define word_AQ_PcsReceiveVendorAlarms_CAL_ptpIngressPacketReady u9.word_9

/*! \brief Base register address of structure AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_baseRegisterAddress 0xF400
/*! \brief MMD address of structure AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure crcErrorMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_crcErrorMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure crcErrorMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_crcErrorMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure crcErrorMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_crcErrorMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ldpcDecodeFailureMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_ldpcDecodeFailureMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure ldpcDecodeFailureMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_ldpcDecodeFailureMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ldpcDecodeFailureMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_ldpcDecodeFailureMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rplLinkFailureMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_rplLinkFailureMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure rplLinkFailureMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_rplLinkFailureMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rplLinkFailureMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_rplLinkFailureMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _40gBipLockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL__40gBipLockMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure _40gBipLockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL__40gBipLockMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _40gBipLockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL__40gBipLockMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure localFaultDetectMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_localFaultDetectMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure localFaultDetectMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_localFaultDetectMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure localFaultDetectMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_localFaultDetectMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lofDetectMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_lofDetectMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure lofDetectMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_lofDetectMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lofDetectMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_lofDetectMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure invalid_513bBlockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_invalid_513bBlockMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure invalid_513bBlockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_invalid_513bBlockMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure invalid_513bBlockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_invalid_513bBlockMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure invalid_65bBlockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_invalid_65bBlockMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure invalid_65bBlockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_invalid_65bBlockMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure invalid_65bBlockMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_invalid_65bBlockMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiActiveOffMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiActiveOffMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiActiveOffMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiActiveOffMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiActiveOffMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiActiveOffMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiActiveOnMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiActiveOnMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiActiveOnMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiActiveOnMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiActiveOnMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiActiveOnMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ldpcConsecutiveErroredFrameExceededMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_ldpcConsecutiveErroredFrameExceededMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure ldpcConsecutiveErroredFrameExceededMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_ldpcConsecutiveErroredFrameExceededMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ldpcConsecutiveErroredFrameExceededMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_ldpcConsecutiveErroredFrameExceededMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiAlertMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiAlertMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiAlertMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiAlertMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiAlertMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiAlertMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiReceivedLatchedLowMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiReceivedLatchedLowMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiReceivedLatchedLowMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiReceivedLatchedLowMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiReceivedLatchedLowMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiReceivedLatchedLowMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure eeeRxLpiReceivedLatchedHighMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiReceivedLatchedHighMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeRxLpiReceivedLatchedHighMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiReceivedLatchedHighMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeRxLpiReceivedLatchedHighMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_eeeRxLpiReceivedLatchedHighMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure changeInAuxilliaryBitMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_changeInAuxilliaryBitMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure changeInAuxilliaryBitMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_changeInAuxilliaryBitMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure changeInAuxilliaryBitMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_changeInAuxilliaryBitMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rddLaneMuxFifoParityError in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_rddLaneMuxFifoParityError 4
/*! \brief Preprocessor variable to relate field to bit position in structure rddLaneMuxFifoParityError in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_rddLaneMuxFifoParityError u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure rddLaneMuxFifoParityError in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_rddLaneMuxFifoParityError u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure rddLaneMuxFifoSyncError in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_rddLaneMuxFifoSyncError 4
/*! \brief Preprocessor variable to relate field to bit position in structure rddLaneMuxFifoSyncError in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_rddLaneMuxFifoSyncError u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure rddLaneMuxFifoSyncError in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_rddLaneMuxFifoSyncError u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure xfi0CtcAmMarkerErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_xfi0CtcAmMarkerErrorLASI_Mask 5
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0CtcAmMarkerErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0CtcAmMarkerErrorLASI_Mask u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure xfi0CtcAmMarkerErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0CtcAmMarkerErrorLASI_Mask u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure xfi0CtcAmLockStatusLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_xfi0CtcAmLockStatusLASI_Mask 5
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0CtcAmLockStatusLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0CtcAmLockStatusLASI_Mask u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure xfi0CtcAmLockStatusLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0CtcAmLockStatusLASI_Mask u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure rkl0CtcIn_1LinkFifoErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_rkl0CtcIn_1LinkFifoErrorLASI_Mask 5
/*! \brief Preprocessor variable to relate field to bit position in structure rkl0CtcIn_1LinkFifoErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_rkl0CtcIn_1LinkFifoErrorLASI_Mask u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure rkl0CtcIn_1LinkFifoErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_rkl0CtcIn_1LinkFifoErrorLASI_Mask u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure rkl0CtcIn_0LinkFifoErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_rkl0CtcIn_0LinkFifoErrorLASI_Mask 5
/*! \brief Preprocessor variable to relate field to bit position in structure rkl0CtcIn_0LinkFifoErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_rkl0CtcIn_0LinkFifoErrorLASI_Mask u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure rkl0CtcIn_0LinkFifoErrorLASI_Mask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_rkl0CtcIn_0LinkFifoErrorLASI_Mask u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure xfi0Invalid_66bCharacterReceivedMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_xfi0Invalid_66bCharacterReceivedMask 5
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0Invalid_66bCharacterReceivedMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0Invalid_66bCharacterReceivedMask u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure xfi0Invalid_66bCharacterReceivedMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0Invalid_66bCharacterReceivedMask u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure xfi0ReceiveLinkStatusLatchHighMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_xfi0ReceiveLinkStatusLatchHighMask 6
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0ReceiveLinkStatusLatchHighMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0ReceiveLinkStatusLatchHighMask u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure xfi0ReceiveLinkStatusLatchHighMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0ReceiveLinkStatusLatchHighMask u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure xfi0HighBerStatusMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_xfi0HighBerStatusMask 6
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0HighBerStatusMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0HighBerStatusMask u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure xfi0HighBerStatusMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0HighBerStatusMask u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure xfi0BlockLockStatusMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define AQ_PcsReceiveVendorInterruptMask_CAL_xfi0BlockLockStatusMask 6
/*! \brief Preprocessor variable to relate field to bit position in structure xfi0BlockLockStatusMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define bits_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0BlockLockStatusMask u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure xfi0BlockLockStatusMask in AQ_PcsReceiveVendorInterruptMask_CAL */
#define word_AQ_PcsReceiveVendorInterruptMask_CAL_xfi0BlockLockStatusMask u6.word_6

/*! \brief Base register address of structure AQ_PcsReceiveVendorDebug_CAL */
#define AQ_PcsReceiveVendorDebug_CAL_baseRegisterAddress 0xF800
/*! \brief MMD address of structure AQ_PcsReceiveVendorDebug_CAL */
#define AQ_PcsReceiveVendorDebug_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure pcsRxDescramblerDisable in AQ_PcsReceiveVendorDebug_CAL */
#define AQ_PcsReceiveVendorDebug_CAL_pcsRxDescramblerDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsRxDescramblerDisable in AQ_PcsReceiveVendorDebug_CAL */
#define bits_AQ_PcsReceiveVendorDebug_CAL_pcsRxDescramblerDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsRxDescramblerDisable in AQ_PcsReceiveVendorDebug_CAL */
#define word_AQ_PcsReceiveVendorDebug_CAL_pcsRxDescramblerDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsNetworkLoopbackMerge in AQ_PcsReceiveVendorDebug_CAL */
#define AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopbackMerge 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsNetworkLoopbackMerge in AQ_PcsReceiveVendorDebug_CAL */
#define bits_AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopbackMerge u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsNetworkLoopbackMerge in AQ_PcsReceiveVendorDebug_CAL */
#define word_AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopbackMerge u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsNetworkLoopbackPassThrough in AQ_PcsReceiveVendorDebug_CAL */
#define AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopbackPassThrough 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsNetworkLoopbackPassThrough in AQ_PcsReceiveVendorDebug_CAL */
#define bits_AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopbackPassThrough u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsNetworkLoopbackPassThrough in AQ_PcsReceiveVendorDebug_CAL */
#define word_AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopbackPassThrough u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsNetworkLoopback in AQ_PcsReceiveVendorDebug_CAL */
#define AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsNetworkLoopback in AQ_PcsReceiveVendorDebug_CAL */
#define bits_AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsNetworkLoopback in AQ_PcsReceiveVendorDebug_CAL */
#define word_AQ_PcsReceiveVendorDebug_CAL_pcsNetworkLoopback u0.word_0

/*! \brief Base register address of structure AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_baseRegisterAddress 0xFC00
/*! \brief MMD address of structure AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_mmdAddress 0x03
/*! \brief Preprocessor variable to relate field to word number in structure standardAlarm_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure standardAlarm_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure standardAlarm_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure standardAlarm_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure standardAlarm_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure standardAlarm_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure standardAlarm_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_3Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure standardAlarm_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_3Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure standardAlarm_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_standardAlarm_3Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificTxAlarms_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificTxAlarms_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificTxAlarms_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificTxAlarms_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificTxAlarms_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificTxAlarms_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificTxAlarms_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_3Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificTxAlarms_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_3Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificTxAlarms_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_3Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_1Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_2Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_3Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_3Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_3Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_3Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_4Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_4Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_4Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_4Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_4Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_4Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_5Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_5Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_5Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_5Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_5Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_5Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_6Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_6Interrupt 2
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_6Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_6Interrupt u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_6Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_6Interrupt u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_7Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_7Interrupt 2
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_7Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_7Interrupt u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_7Interrupt in AQ_PcsVendorGlobalInterruptFlags_CAL */
#define word_AQ_PcsVendorGlobalInterruptFlags_CAL_vendorSpecificRxAlarms_7Interrupt u2.word_2
#endif
/*@}*/
/*@}*/
