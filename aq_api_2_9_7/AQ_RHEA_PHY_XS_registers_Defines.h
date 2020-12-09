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
*   for the PHY_XS Registers block.
*/

/*! \defgroup PHY_XS_registers_Defines PHY_XS Registers Defines
*   This module contains the compiler assist macros and doxygen comments
*   for the PHY_XS Registers block.
*/
/***********************************************************************
*                     Copyright Aquantia Corp.
*                             Freeware
*
* $File: //depot/icm/proj/Dena/rev1.0/c/Systems/tools/windows/regMapParser/src/gencheaders.py $
*
* $Revision: #19 $
*
* $DateTime: 2019/04/22 11:47:46 $
*
* $Author: etahir $
*
* $Label: $
*
* Description:
*
*   This file contains the compiler assist macros for the registers contained in the PHY_XS Registers block.
*
*
***********************************************************************/


/*@{*/
#ifndef AQ_RHEA_PHY_XS_REGS_DEFINES_HEADER
#define AQ_RHEA_PHY_XS_REGS_DEFINES_HEADER


/*-----------------------------------------------------------------------------*/
/*Access macro definitions                                                     */
/*-----------------------------------------------------------------------------*/
/*! \brief Base register address of structure AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_baseRegisterAddress 0x0000
/*! \brief MMD address of structure AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reset in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_reset 0
/*! \brief Preprocessor variable to relate field to bit position in structure reset in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_reset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reset in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_reset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure loopback in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_loopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure loopback in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_loopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure loopback in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_loopback u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure speedSelection_0 in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_speedSelection_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure speedSelection_0 in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_speedSelection_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure speedSelection_0 in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_speedSelection_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved00a in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_reserved00a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved00a in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_reserved00a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved00a in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_reserved00a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowPower in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_lowPower 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowPower in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_lowPower u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowPower in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_lowPower u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clockStopEnable in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_clockStopEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure clockStopEnable in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_clockStopEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clockStopEnable in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_clockStopEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xauiStopEnable in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_xauiStopEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure xauiStopEnable in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_xauiStopEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xauiStopEnable in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_xauiStopEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved00b in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_reserved00b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved00b in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_reserved00b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved00b in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_reserved00b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure speedSelection_1 in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_speedSelection_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure speedSelection_1 in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_speedSelection_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure speedSelection_1 in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_speedSelection_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure speedSelection_2 in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_speedSelection_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure speedSelection_2 in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_speedSelection_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure speedSelection_2 in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_speedSelection_2 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved00c in AQ_PhyXS_StandardControl_1_RHEA */
#define AQ_PhyXS_StandardControl_1_RHEA_reserved00c 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved00c in AQ_PhyXS_StandardControl_1_RHEA */
#define bits_AQ_PhyXS_StandardControl_1_RHEA_reserved00c u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved00c in AQ_PhyXS_StandardControl_1_RHEA */
#define word_AQ_PhyXS_StandardControl_1_RHEA_reserved00c u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_baseRegisterAddress 0x0001
/*! \brief MMD address of structure AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved01a in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_reserved01a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved01a in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_reserved01a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved01a in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_reserved01a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure txLpiReceived in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_txLpiReceived 0
/*! \brief Preprocessor variable to relate field to bit position in structure txLpiReceived in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_txLpiReceived u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txLpiReceived in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_txLpiReceived u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rxLpiReceived in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_rxLpiReceived 0
/*! \brief Preprocessor variable to relate field to bit position in structure rxLpiReceived in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_rxLpiReceived u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rxLpiReceived in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_rxLpiReceived u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure txLpiIndication in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_txLpiIndication 0
/*! \brief Preprocessor variable to relate field to bit position in structure txLpiIndication in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_txLpiIndication u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txLpiIndication in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_txLpiIndication u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rxLpiIndication in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_rxLpiIndication 0
/*! \brief Preprocessor variable to relate field to bit position in structure rxLpiIndication in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_rxLpiIndication u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rxLpiIndication in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_rxLpiIndication u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure fault in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_fault 0
/*! \brief Preprocessor variable to relate field to bit position in structure fault in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_fault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure fault in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_fault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clockStopCapable in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_clockStopCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure clockStopCapable in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_clockStopCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clockStopCapable in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_clockStopCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved01b in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_reserved01b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved01b in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_reserved01b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved01b in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_reserved01b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_TransmitLinkAlignmentStatus in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_phyXS_TransmitLinkAlignmentStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_TransmitLinkAlignmentStatus in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_phyXS_TransmitLinkAlignmentStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_TransmitLinkAlignmentStatus in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_phyXS_TransmitLinkAlignmentStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowPowerAbility in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_lowPowerAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowPowerAbility in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_lowPowerAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowPowerAbility in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_lowPowerAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved01c in AQ_PhyXS_StandardStatus_1_RHEA */
#define AQ_PhyXS_StandardStatus_1_RHEA_reserved01c 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved01c in AQ_PhyXS_StandardStatus_1_RHEA */
#define bits_AQ_PhyXS_StandardStatus_1_RHEA_reserved01c u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved01c in AQ_PhyXS_StandardStatus_1_RHEA */
#define word_AQ_PhyXS_StandardStatus_1_RHEA_reserved01c u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_StandardDeviceIdentifier_RHEA */
#define AQ_PhyXS_StandardDeviceIdentifier_RHEA_baseRegisterAddress 0x0002
/*! \brief MMD address of structure AQ_PhyXS_StandardDeviceIdentifier_RHEA */
#define AQ_PhyXS_StandardDeviceIdentifier_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdMSW in AQ_PhyXS_StandardDeviceIdentifier_RHEA */
#define AQ_PhyXS_StandardDeviceIdentifier_RHEA_deviceIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdMSW in AQ_PhyXS_StandardDeviceIdentifier_RHEA */
#define bits_AQ_PhyXS_StandardDeviceIdentifier_RHEA_deviceIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdMSW in AQ_PhyXS_StandardDeviceIdentifier_RHEA */
#define word_AQ_PhyXS_StandardDeviceIdentifier_RHEA_deviceIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdLSW in AQ_PhyXS_StandardDeviceIdentifier_RHEA */
#define AQ_PhyXS_StandardDeviceIdentifier_RHEA_deviceIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdLSW in AQ_PhyXS_StandardDeviceIdentifier_RHEA */
#define bits_AQ_PhyXS_StandardDeviceIdentifier_RHEA_deviceIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdLSW in AQ_PhyXS_StandardDeviceIdentifier_RHEA */
#define word_AQ_PhyXS_StandardDeviceIdentifier_RHEA_deviceIdLSW u1.word_1

/*! \brief Base register address of structure AQ_PhyXS_StandardSpeedAbility_RHEA */
#define AQ_PhyXS_StandardSpeedAbility_RHEA_baseRegisterAddress 0x0004
/*! \brief MMD address of structure AQ_PhyXS_StandardSpeedAbility_RHEA */
#define AQ_PhyXS_StandardSpeedAbility_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved04 in AQ_PhyXS_StandardSpeedAbility_RHEA */
#define AQ_PhyXS_StandardSpeedAbility_RHEA_reserved04 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved04 in AQ_PhyXS_StandardSpeedAbility_RHEA */
#define bits_AQ_PhyXS_StandardSpeedAbility_RHEA_reserved04 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved04 in AQ_PhyXS_StandardSpeedAbility_RHEA */
#define word_AQ_PhyXS_StandardSpeedAbility_RHEA_reserved04 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gCapable in AQ_PhyXS_StandardSpeedAbility_RHEA */
#define AQ_PhyXS_StandardSpeedAbility_RHEA__10gCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gCapable in AQ_PhyXS_StandardSpeedAbility_RHEA */
#define bits_AQ_PhyXS_StandardSpeedAbility_RHEA__10gCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gCapable in AQ_PhyXS_StandardSpeedAbility_RHEA */
#define word_AQ_PhyXS_StandardSpeedAbility_RHEA__10gCapable u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_baseRegisterAddress 0x0005
/*! \brief MMD address of structure AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_autonegotiationPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_autonegotiationPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_autonegotiationPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tcPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_tcPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure tcPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_tcPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tcPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_tcPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dteXsPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_dteXsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure dteXsPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_dteXsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dteXsPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_dteXsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_phyXS_Present 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_phyXS_Present u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_phyXS_Present u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_pcsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_pcsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_pcsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure wisPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_wisPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure wisPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_wisPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure wisPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_wisPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_pmaPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_pmaPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_pmaPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clause_22RegistersPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_clause_22RegistersPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22RegistersPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_clause_22RegistersPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clause_22RegistersPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_clause_22RegistersPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_2Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_vendorSpecificDevice_2Present 1
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_2Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_vendorSpecificDevice_2Present u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_2Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_vendorSpecificDevice_2Present u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_1Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_vendorSpecificDevice_1Present 1
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_1Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_vendorSpecificDevice_1Present u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_1Present in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_vendorSpecificDevice_1Present u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure clause_22ExtensionPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define AQ_PhyXS_StandardDevicesInPackage_RHEA_clause_22ExtensionPresent 1
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22ExtensionPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define bits_AQ_PhyXS_StandardDevicesInPackage_RHEA_clause_22ExtensionPresent u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure clause_22ExtensionPresent in AQ_PhyXS_StandardDevicesInPackage_RHEA */
#define word_AQ_PhyXS_StandardDevicesInPackage_RHEA_clause_22ExtensionPresent u1.word_1

/*! \brief Base register address of structure AQ_PhyXS_Reserved_7Register_RHEA */
#define AQ_PhyXS_Reserved_7Register_RHEA_baseRegisterAddress 0x0007
/*! \brief MMD address of structure AQ_PhyXS_Reserved_7Register_RHEA */
#define AQ_PhyXS_Reserved_7Register_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved07 in AQ_PhyXS_Reserved_7Register_RHEA */
#define AQ_PhyXS_Reserved_7Register_RHEA_reserved07 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved07 in AQ_PhyXS_Reserved_7Register_RHEA */
#define bits_AQ_PhyXS_Reserved_7Register_RHEA_reserved07 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved07 in AQ_PhyXS_Reserved_7Register_RHEA */
#define word_AQ_PhyXS_Reserved_7Register_RHEA_reserved07 u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_StandardStatus_2_RHEA */
#define AQ_PhyXS_StandardStatus_2_RHEA_baseRegisterAddress 0x0008
/*! \brief MMD address of structure AQ_PhyXS_StandardStatus_2_RHEA */
#define AQ_PhyXS_StandardStatus_2_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure devicePresent in AQ_PhyXS_StandardStatus_2_RHEA */
#define AQ_PhyXS_StandardStatus_2_RHEA_devicePresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure devicePresent in AQ_PhyXS_StandardStatus_2_RHEA */
#define bits_AQ_PhyXS_StandardStatus_2_RHEA_devicePresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure devicePresent in AQ_PhyXS_StandardStatus_2_RHEA */
#define word_AQ_PhyXS_StandardStatus_2_RHEA_devicePresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved08a in AQ_PhyXS_StandardStatus_2_RHEA */
#define AQ_PhyXS_StandardStatus_2_RHEA_reserved08a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved08a in AQ_PhyXS_StandardStatus_2_RHEA */
#define bits_AQ_PhyXS_StandardStatus_2_RHEA_reserved08a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved08a in AQ_PhyXS_StandardStatus_2_RHEA */
#define word_AQ_PhyXS_StandardStatus_2_RHEA_reserved08a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitFault in AQ_PhyXS_StandardStatus_2_RHEA */
#define AQ_PhyXS_StandardStatus_2_RHEA_transmitFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure transmitFault in AQ_PhyXS_StandardStatus_2_RHEA */
#define bits_AQ_PhyXS_StandardStatus_2_RHEA_transmitFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure transmitFault in AQ_PhyXS_StandardStatus_2_RHEA */
#define word_AQ_PhyXS_StandardStatus_2_RHEA_transmitFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure receiveFault in AQ_PhyXS_StandardStatus_2_RHEA */
#define AQ_PhyXS_StandardStatus_2_RHEA_receiveFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure receiveFault in AQ_PhyXS_StandardStatus_2_RHEA */
#define bits_AQ_PhyXS_StandardStatus_2_RHEA_receiveFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure receiveFault in AQ_PhyXS_StandardStatus_2_RHEA */
#define word_AQ_PhyXS_StandardStatus_2_RHEA_receiveFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved08b in AQ_PhyXS_StandardStatus_2_RHEA */
#define AQ_PhyXS_StandardStatus_2_RHEA_reserved08b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved08b in AQ_PhyXS_StandardStatus_2_RHEA */
#define bits_AQ_PhyXS_StandardStatus_2_RHEA_reserved08b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved08b in AQ_PhyXS_StandardStatus_2_RHEA */
#define word_AQ_PhyXS_StandardStatus_2_RHEA_reserved08b u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_StandardPackageIdentifier_RHEA */
#define AQ_PhyXS_StandardPackageIdentifier_RHEA_baseRegisterAddress 0x000E
/*! \brief MMD address of structure AQ_PhyXS_StandardPackageIdentifier_RHEA */
#define AQ_PhyXS_StandardPackageIdentifier_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure packageIdMSW in AQ_PhyXS_StandardPackageIdentifier_RHEA */
#define AQ_PhyXS_StandardPackageIdentifier_RHEA_packageIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdMSW in AQ_PhyXS_StandardPackageIdentifier_RHEA */
#define bits_AQ_PhyXS_StandardPackageIdentifier_RHEA_packageIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packageIdMSW in AQ_PhyXS_StandardPackageIdentifier_RHEA */
#define word_AQ_PhyXS_StandardPackageIdentifier_RHEA_packageIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packageIdLSW in AQ_PhyXS_StandardPackageIdentifier_RHEA */
#define AQ_PhyXS_StandardPackageIdentifier_RHEA_packageIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdLSW in AQ_PhyXS_StandardPackageIdentifier_RHEA */
#define bits_AQ_PhyXS_StandardPackageIdentifier_RHEA_packageIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure packageIdLSW in AQ_PhyXS_StandardPackageIdentifier_RHEA */
#define word_AQ_PhyXS_StandardPackageIdentifier_RHEA_packageIdLSW u1.word_1

/*! \brief Base register address of structure AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define AQ_PhyXS_EeeCapabilityRegister_RHEA_baseRegisterAddress 0x0014
/*! \brief MMD address of structure AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define AQ_PhyXS_EeeCapabilityRegister_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved14a in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define AQ_PhyXS_EeeCapabilityRegister_RHEA_reserved14a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved14a in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define bits_AQ_PhyXS_EeeCapabilityRegister_RHEA_reserved14a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved14a in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define word_AQ_PhyXS_EeeCapabilityRegister_RHEA_reserved14a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_Eee in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define AQ_PhyXS_EeeCapabilityRegister_RHEA_phyXS_Eee 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_Eee in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define bits_AQ_PhyXS_EeeCapabilityRegister_RHEA_phyXS_Eee u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_Eee in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define word_AQ_PhyXS_EeeCapabilityRegister_RHEA_phyXS_Eee u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved14b in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define AQ_PhyXS_EeeCapabilityRegister_RHEA_reserved14b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved14b in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define bits_AQ_PhyXS_EeeCapabilityRegister_RHEA_reserved14b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved14b in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define word_AQ_PhyXS_EeeCapabilityRegister_RHEA_reserved14b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xauiStopCapable in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define AQ_PhyXS_EeeCapabilityRegister_RHEA_xauiStopCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure xauiStopCapable in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define bits_AQ_PhyXS_EeeCapabilityRegister_RHEA_xauiStopCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xauiStopCapable in AQ_PhyXS_EeeCapabilityRegister_RHEA */
#define word_AQ_PhyXS_EeeCapabilityRegister_RHEA_xauiStopCapable u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_Reserved_15Register_RHEA */
#define AQ_PhyXS_Reserved_15Register_RHEA_baseRegisterAddress 0x0015
/*! \brief MMD address of structure AQ_PhyXS_Reserved_15Register_RHEA */
#define AQ_PhyXS_Reserved_15Register_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved15 in AQ_PhyXS_Reserved_15Register_RHEA */
#define AQ_PhyXS_Reserved_15Register_RHEA_reserved15 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved15 in AQ_PhyXS_Reserved_15Register_RHEA */
#define bits_AQ_PhyXS_Reserved_15Register_RHEA_reserved15 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved15 in AQ_PhyXS_Reserved_15Register_RHEA */
#define word_AQ_PhyXS_Reserved_15Register_RHEA_reserved15 u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_EeeWakeErrorCounter_RHEA */
#define AQ_PhyXS_EeeWakeErrorCounter_RHEA_baseRegisterAddress 0x0016
/*! \brief MMD address of structure AQ_PhyXS_EeeWakeErrorCounter_RHEA */
#define AQ_PhyXS_EeeWakeErrorCounter_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure eeeWakeErrorCounter in AQ_PhyXS_EeeWakeErrorCounter_RHEA */
#define AQ_PhyXS_EeeWakeErrorCounter_RHEA_eeeWakeErrorCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeWakeErrorCounter in AQ_PhyXS_EeeWakeErrorCounter_RHEA */
#define bits_AQ_PhyXS_EeeWakeErrorCounter_RHEA_eeeWakeErrorCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeWakeErrorCounter in AQ_PhyXS_EeeWakeErrorCounter_RHEA */
#define word_AQ_PhyXS_EeeWakeErrorCounter_RHEA_eeeWakeErrorCounter u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_baseRegisterAddress 0x0018
/*! \brief MMD address of structure AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved18a in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_reserved18a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved18a in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_reserved18a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved18a in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define word_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_reserved18a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXGXS_LaneAlignmentStatus in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_LaneAlignmentStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXGXS_LaneAlignmentStatus in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_LaneAlignmentStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXGXS_LaneAlignmentStatus in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define word_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_LaneAlignmentStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXGXS_PatternTestingAbility in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_PatternTestingAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXGXS_PatternTestingAbility in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_PatternTestingAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXGXS_PatternTestingAbility in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define word_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_PatternTestingAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXGXS_LoopbackAbility in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_LoopbackAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXGXS_LoopbackAbility in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_LoopbackAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXGXS_LoopbackAbility in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define word_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_phyXGXS_LoopbackAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved18b in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_reserved18b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved18b in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_reserved18b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved18b in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define word_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_reserved18b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure laneSync in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_laneSync 0
/*! \brief Preprocessor variable to relate field to bit position in structure laneSync in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_laneSync u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure laneSync in AQ_PhyXS_StandardXGXS_LaneStatus_RHEA */
#define word_AQ_PhyXS_StandardXGXS_LaneStatus_RHEA_laneSync u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define AQ_PhyXS_StandardXGXS_TestControl_RHEA_baseRegisterAddress 0x0019
/*! \brief MMD address of structure AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define AQ_PhyXS_StandardXGXS_TestControl_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved19a in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define AQ_PhyXS_StandardXGXS_TestControl_RHEA_reserved19a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved19a in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_TestControl_RHEA_reserved19a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved19a in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define word_AQ_PhyXS_StandardXGXS_TestControl_RHEA_reserved19a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure receiveTest_PatternEnable in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define AQ_PhyXS_StandardXGXS_TestControl_RHEA_receiveTest_PatternEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure receiveTest_PatternEnable in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_TestControl_RHEA_receiveTest_PatternEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure receiveTest_PatternEnable in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define word_AQ_PhyXS_StandardXGXS_TestControl_RHEA_receiveTest_PatternEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure test_patternSelect in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define AQ_PhyXS_StandardXGXS_TestControl_RHEA_test_patternSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure test_patternSelect in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define bits_AQ_PhyXS_StandardXGXS_TestControl_RHEA_test_patternSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure test_patternSelect in AQ_PhyXS_StandardXGXS_TestControl_RHEA */
#define word_AQ_PhyXS_StandardXGXS_TestControl_RHEA_test_patternSelect u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_Reserved_1aRegister_RHEA */
#define AQ_PhyXS_Reserved_1aRegister_RHEA_baseRegisterAddress 0x001A
/*! \brief MMD address of structure AQ_PhyXS_Reserved_1aRegister_RHEA */
#define AQ_PhyXS_Reserved_1aRegister_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved1a in AQ_PhyXS_Reserved_1aRegister_RHEA */
#define AQ_PhyXS_Reserved_1aRegister_RHEA_reserved1a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved1a in AQ_PhyXS_Reserved_1aRegister_RHEA */
#define bits_AQ_PhyXS_Reserved_1aRegister_RHEA_reserved1a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved1a in AQ_PhyXS_Reserved_1aRegister_RHEA */
#define word_AQ_PhyXS_Reserved_1aRegister_RHEA_reserved1a u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_Reserved_1bRegister_RHEA */
#define AQ_PhyXS_Reserved_1bRegister_RHEA_baseRegisterAddress 0x001B
/*! \brief MMD address of structure AQ_PhyXS_Reserved_1bRegister_RHEA */
#define AQ_PhyXS_Reserved_1bRegister_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved1b in AQ_PhyXS_Reserved_1bRegister_RHEA */
#define AQ_PhyXS_Reserved_1bRegister_RHEA_reserved1b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved1b in AQ_PhyXS_Reserved_1bRegister_RHEA */
#define bits_AQ_PhyXS_Reserved_1bRegister_RHEA_reserved1b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved1b in AQ_PhyXS_Reserved_1bRegister_RHEA */
#define word_AQ_PhyXS_Reserved_1bRegister_RHEA_reserved1b u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_Reserved_1cRegister_RHEA */
#define AQ_PhyXS_Reserved_1cRegister_RHEA_baseRegisterAddress 0x001C
/*! \brief MMD address of structure AQ_PhyXS_Reserved_1cRegister_RHEA */
#define AQ_PhyXS_Reserved_1cRegister_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved1c in AQ_PhyXS_Reserved_1cRegister_RHEA */
#define AQ_PhyXS_Reserved_1cRegister_RHEA_reserved1c 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved1c in AQ_PhyXS_Reserved_1cRegister_RHEA */
#define bits_AQ_PhyXS_Reserved_1cRegister_RHEA_reserved1c u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved1c in AQ_PhyXS_Reserved_1cRegister_RHEA */
#define word_AQ_PhyXS_Reserved_1cRegister_RHEA_reserved1c u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_Reserved_1dRegister_RHEA */
#define AQ_PhyXS_Reserved_1dRegister_RHEA_baseRegisterAddress 0x001D
/*! \brief MMD address of structure AQ_PhyXS_Reserved_1dRegister_RHEA */
#define AQ_PhyXS_Reserved_1dRegister_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reserved1d in AQ_PhyXS_Reserved_1dRegister_RHEA */
#define AQ_PhyXS_Reserved_1dRegister_RHEA_reserved1d 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved1d in AQ_PhyXS_Reserved_1dRegister_RHEA */
#define bits_AQ_PhyXS_Reserved_1dRegister_RHEA_reserved1d u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved1d in AQ_PhyXS_Reserved_1dRegister_RHEA */
#define word_AQ_PhyXS_Reserved_1dRegister_RHEA_reserved1d u0.word_0

/*! \brief Base register address of structure AQ_TimesyncPhyXsCapability_RHEA */
#define AQ_TimesyncPhyXsCapability_RHEA_baseRegisterAddress 0x0708
/*! \brief MMD address of structure AQ_TimesyncPhyXsCapability_RHEA */
#define AQ_TimesyncPhyXsCapability_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure timesyncTransmitPathDataDelay in AQ_TimesyncPhyXsCapability_RHEA */
#define AQ_TimesyncPhyXsCapability_RHEA_timesyncTransmitPathDataDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure timesyncTransmitPathDataDelay in AQ_TimesyncPhyXsCapability_RHEA */
#define bits_AQ_TimesyncPhyXsCapability_RHEA_timesyncTransmitPathDataDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure timesyncTransmitPathDataDelay in AQ_TimesyncPhyXsCapability_RHEA */
#define word_AQ_TimesyncPhyXsCapability_RHEA_timesyncTransmitPathDataDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure timesyncReceivePathDataDelay in AQ_TimesyncPhyXsCapability_RHEA */
#define AQ_TimesyncPhyXsCapability_RHEA_timesyncReceivePathDataDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure timesyncReceivePathDataDelay in AQ_TimesyncPhyXsCapability_RHEA */
#define bits_AQ_TimesyncPhyXsCapability_RHEA_timesyncReceivePathDataDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure timesyncReceivePathDataDelay in AQ_TimesyncPhyXsCapability_RHEA */
#define word_AQ_TimesyncPhyXsCapability_RHEA_timesyncReceivePathDataDelay u0.word_0

/*! \brief Base register address of structure AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_baseRegisterAddress 0x0709
/*! \brief MMD address of structure AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure maximumPhyXsTransmitPathDataDelayLSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_maximumPhyXsTransmitPathDataDelayLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPhyXsTransmitPathDataDelayLSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define bits_AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_maximumPhyXsTransmitPathDataDelayLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure maximumPhyXsTransmitPathDataDelayLSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define word_AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_maximumPhyXsTransmitPathDataDelayLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure maximumPhyXsTransmitPathDataDelayMSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_maximumPhyXsTransmitPathDataDelayMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPhyXsTransmitPathDataDelayMSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define bits_AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_maximumPhyXsTransmitPathDataDelayMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure maximumPhyXsTransmitPathDataDelayMSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define word_AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_maximumPhyXsTransmitPathDataDelayMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure minimumPhyXsTransmitPathDataDelayLSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_minimumPhyXsTransmitPathDataDelayLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPhyXsTransmitPathDataDelayLSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define bits_AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_minimumPhyXsTransmitPathDataDelayLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure minimumPhyXsTransmitPathDataDelayLSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define word_AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_minimumPhyXsTransmitPathDataDelayLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure minimumPhyXsTransmitPathDataDelayMSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_minimumPhyXsTransmitPathDataDelayMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPhyXsTransmitPathDataDelayMSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define bits_AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_minimumPhyXsTransmitPathDataDelayMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure minimumPhyXsTransmitPathDataDelayMSW in AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA */
#define word_AQ_TimesyncPhyXsTransmitPathDataDelay_RHEA_minimumPhyXsTransmitPathDataDelayMSW u3.word_3

/*! \brief Base register address of structure AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_baseRegisterAddress 0x070D
/*! \brief MMD address of structure AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure maximumPhyXsReceivePathDataDelayLSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_maximumPhyXsReceivePathDataDelayLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPhyXsReceivePathDataDelayLSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define bits_AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_maximumPhyXsReceivePathDataDelayLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure maximumPhyXsReceivePathDataDelayLSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define word_AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_maximumPhyXsReceivePathDataDelayLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure maximumPhyXsReceivePathDataDelayMSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_maximumPhyXsReceivePathDataDelayMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPhyXsReceivePathDataDelayMSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define bits_AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_maximumPhyXsReceivePathDataDelayMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure maximumPhyXsReceivePathDataDelayMSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define word_AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_maximumPhyXsReceivePathDataDelayMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure minimumPhyXsReceivePathDataDelayLSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_minimumPhyXsReceivePathDataDelayLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPhyXsReceivePathDataDelayLSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define bits_AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_minimumPhyXsReceivePathDataDelayLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure minimumPhyXsReceivePathDataDelayLSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define word_AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_minimumPhyXsReceivePathDataDelayLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure minimumPhyXsReceivePathDataDelayMSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_minimumPhyXsReceivePathDataDelayMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPhyXsReceivePathDataDelayMSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define bits_AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_minimumPhyXsReceivePathDataDelayMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure minimumPhyXsReceivePathDataDelayMSW in AQ_TimesyncPhyXsReceivePathDataDelay_RHEA */
#define word_AQ_TimesyncPhyXsReceivePathDataDelay_RHEA_minimumPhyXsReceivePathDataDelayMSW u3.word_3

/*! \brief Base register address of structure AQ_PhyXS_SerdesConfiguration_RHEA */
#define AQ_PhyXS_SerdesConfiguration_RHEA_baseRegisterAddress 0xC180
/*! \brief MMD address of structure AQ_PhyXS_SerdesConfiguration_RHEA */
#define AQ_PhyXS_SerdesConfiguration_RHEA_mmdAddress 0x04

/*! \brief Base register address of structure AQ_PhyXS_SerdesLane_0Configuration_RHEA */
#define AQ_PhyXS_SerdesLane_0Configuration_RHEA_baseRegisterAddress 0xC1C0
/*! \brief MMD address of structure AQ_PhyXS_SerdesLane_0Configuration_RHEA */
#define AQ_PhyXS_SerdesLane_0Configuration_RHEA_mmdAddress 0x04

/*! \brief Base register address of structure AQ_PhyXS_SerdesLane_1Configuration_RHEA */
#define AQ_PhyXS_SerdesLane_1Configuration_RHEA_baseRegisterAddress 0xC1D0
/*! \brief MMD address of structure AQ_PhyXS_SerdesLane_1Configuration_RHEA */
#define AQ_PhyXS_SerdesLane_1Configuration_RHEA_mmdAddress 0x04

/*! \brief Base register address of structure AQ_PhyXS_SerdesLane_2Configuration_RHEA */
#define AQ_PhyXS_SerdesLane_2Configuration_RHEA_baseRegisterAddress 0xC1E0
/*! \brief MMD address of structure AQ_PhyXS_SerdesLane_2Configuration_RHEA */
#define AQ_PhyXS_SerdesLane_2Configuration_RHEA_mmdAddress 0x04

/*! \brief Base register address of structure AQ_PhyXS_SerdesLane_3Configuration_RHEA */
#define AQ_PhyXS_SerdesLane_3Configuration_RHEA_baseRegisterAddress 0xC1F0
/*! \brief MMD address of structure AQ_PhyXS_SerdesLane_3Configuration_RHEA */
#define AQ_PhyXS_SerdesLane_3Configuration_RHEA_mmdAddress 0x04

/*! \brief Base register address of structure AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_baseRegisterAddress 0xC440
/*! \brief MMD address of structure AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioningC440 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioningC440 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioningC440 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioningC440 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioningC440 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioningC440 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _50MhzPrimaryOutputEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA__50MhzPrimaryOutputEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _50MhzPrimaryOutputEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA__50MhzPrimaryOutputEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _50MhzPrimaryOutputEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA__50MhzPrimaryOutputEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _50MhzSecondaryOutputEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA__50MhzSecondaryOutputEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _50MhzSecondaryOutputEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA__50MhzSecondaryOutputEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _50MhzSecondaryOutputEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA__50MhzSecondaryOutputEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_1 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_1 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_1 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesReset in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_serdesReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesReset in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_serdesReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesReset in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_serdesReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_2b in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_2b 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_2b in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_2b u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_2b in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_2b u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure usxAutonegControlForMac in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_usxAutonegControlForMac 1
/*! \brief Preprocessor variable to relate field to bit position in structure usxAutonegControlForMac in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_usxAutonegControlForMac u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure usxAutonegControlForMac in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_usxAutonegControlForMac u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure backplaneAngEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_backplaneAngEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure backplaneAngEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_backplaneAngEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure backplaneAngEnable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_backplaneAngEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure sys_25gBase_rRs_fecCapable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_sys_25gBase_rRs_fecCapable 1
/*! \brief Preprocessor variable to relate field to bit position in structure sys_25gBase_rRs_fecCapable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_sys_25gBase_rRs_fecCapable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure sys_25gBase_rRs_fecCapable in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_sys_25gBase_rRs_fecCapable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_2a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_2a 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_2a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_2a u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_2a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_2a u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_3a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_3a 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_3a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_3a u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_3a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_3a u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure systemSgmiiRxInvert in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemSgmiiRxInvert 2
/*! \brief Preprocessor variable to relate field to bit position in structure systemSgmiiRxInvert in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemSgmiiRxInvert u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure systemSgmiiRxInvert in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemSgmiiRxInvert u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_3 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_3 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_3 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_3 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_3 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_3 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_4a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_4a 3
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_4a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_4a u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_4a in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_4a u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure systemKrRxInvert in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemKrRxInvert 3
/*! \brief Preprocessor variable to relate field to bit position in structure systemKrRxInvert in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemKrRxInvert u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure systemKrRxInvert in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemKrRxInvert u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_4 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_4 3
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_4 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_4 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_4 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_4 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure loopbackControl in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_loopbackControl 4
/*! \brief Preprocessor variable to relate field to bit position in structure loopbackControl in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_loopbackControl u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure loopbackControl in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_loopbackControl u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_5 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_5 4
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_5 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_5 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_5 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_5 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure mdiPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_mdiPacketGeneration 4
/*! \brief Preprocessor variable to relate field to bit position in structure mdiPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_mdiPacketGeneration u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure mdiPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_mdiPacketGeneration u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure look_asidePortPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_look_asidePortPacketGeneration 4
/*! \brief Preprocessor variable to relate field to bit position in structure look_asidePortPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_look_asidePortPacketGeneration u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure look_asidePortPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_look_asidePortPacketGeneration u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure systemI_fPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemI_fPacketGeneration 4
/*! \brief Preprocessor variable to relate field to bit position in structure systemI_fPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemI_fPacketGeneration u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure systemI_fPacketGeneration in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_systemI_fPacketGeneration u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure rate in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_rate 4
/*! \brief Preprocessor variable to relate field to bit position in structure rate in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_rate u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure rate in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_rate u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_6 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_6 5
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_6 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_6 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_6 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_6 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_7 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_7 6
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_7 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_7 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_7 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_7 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure krTrngCpostMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostMinValue 6
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngCpostMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostMinValue u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure krTrngCpostMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostMinValue u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure krTrngMainMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainMinValue 6
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngMainMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainMinValue u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure krTrngMainMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainMinValue u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure krTrngCpreMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreMinValue 6
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngCpreMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreMinValue u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure krTrngCpreMinValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreMinValue u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_8 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_8 7
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_8 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_8 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_8 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_8 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure krTrngCpostMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostMaxValue 7
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngCpostMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostMaxValue u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure krTrngCpostMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostMaxValue u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure krTrngMainMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainMaxValue 7
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngMainMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainMaxValue u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure krTrngMainMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainMaxValue u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure krTrngCpreMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreMaxValue 7
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngCpreMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreMaxValue u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure krTrngCpreMaxValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreMaxValue u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_9 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_9 8
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_9 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_9 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_9 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_9 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure krTrngCpostInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostInitValue 8
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngCpostInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostInitValue u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure krTrngCpostInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostInitValue u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure krTrngMainInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainInitValue 8
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngMainInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainInitValue u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure krTrngMainInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainInitValue u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure krTrngCpreInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreInitValue 8
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngCpreInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreInitValue u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure krTrngCpreInitValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpreInitValue u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure reservedTransmitProvisioning_10 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_10 9
/*! \brief Preprocessor variable to relate field to bit position in structure reservedTransmitProvisioning_10 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_10 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure reservedTransmitProvisioning_10 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_reservedTransmitProvisioning_10 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure krTrngCpostPresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostPresetValue 9
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngCpostPresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostPresetValue u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure krTrngCpostPresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCpostPresetValue u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure krTrngMainPresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainPresetValue 9
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngMainPresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainPresetValue u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure krTrngMainPresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngMainPresetValue u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure krTrngCprePresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCprePresetValue 9
/*! \brief Preprocessor variable to relate field to bit position in structure krTrngCprePresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCprePresetValue u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure krTrngCprePresetValue in AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorProvisioning_RHEA_krTrngCprePresetValue u9.word_9

/*! \brief Base register address of structure AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_baseRegisterAddress 0xC820
/*! \brief MMD address of structure AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure numbersOfSerdesCals in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numbersOfSerdesCals 0
/*! \brief Preprocessor variable to relate field to bit position in structure numbersOfSerdesCals in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numbersOfSerdesCals u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure numbersOfSerdesCals in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numbersOfSerdesCals u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure numberOfSifBlockLockTranstitions_1__0 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifBlockLockTranstitions_1__0 1
/*! \brief Preprocessor variable to relate field to bit position in structure numberOfSifBlockLockTranstitions_1__0 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifBlockLockTranstitions_1__0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure numberOfSifBlockLockTranstitions_1__0 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifBlockLockTranstitions_1__0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure numberOfSifBlockLockTranstitions_0__1 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifBlockLockTranstitions_0__1 1
/*! \brief Preprocessor variable to relate field to bit position in structure numberOfSifBlockLockTranstitions_0__1 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifBlockLockTranstitions_0__1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure numberOfSifBlockLockTranstitions_0__1 in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifBlockLockTranstitions_0__1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure numberOfSifXgsSwitch_overs in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifXgsSwitch_overs 2
/*! \brief Preprocessor variable to relate field to bit position in structure numberOfSifXgsSwitch_overs in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifXgsSwitch_overs u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure numberOfSifXgsSwitch_overs in AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_ReservedVendorState_RHEA_numberOfSifXgsSwitch_overs u2.word_2

/*! \brief Base register address of structure AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_baseRegisterAddress 0xCC00
/*! \brief MMD address of structure AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure crpatTestPatternCheckerSyncError in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_crpatTestPatternCheckerSyncError 0
/*! \brief Preprocessor variable to relate field to bit position in structure crpatTestPatternCheckerSyncError in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_crpatTestPatternCheckerSyncError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure crpatTestPatternCheckerSyncError in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_crpatTestPatternCheckerSyncError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure prbsTestPatternCheckerSyncError in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_prbsTestPatternCheckerSyncError 0
/*! \brief Preprocessor variable to relate field to bit position in structure prbsTestPatternCheckerSyncError in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_prbsTestPatternCheckerSyncError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure prbsTestPatternCheckerSyncError in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_prbsTestPatternCheckerSyncError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure oscgmiiRxFifoInterrupt in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_oscgmiiRxFifoInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure oscgmiiRxFifoInterrupt in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_oscgmiiRxFifoInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure oscgmiiRxFifoInterrupt in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_oscgmiiRxFifoInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure macsecEgressInterrupt in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_macsecEgressInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure macsecEgressInterrupt in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_macsecEgressInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure macsecEgressInterrupt in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_macsecEgressInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarm_1 in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedAlarm_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarm_1 in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedAlarm_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarm_1 in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedAlarm_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarm_0 in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedAlarm_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarm_0 in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedAlarm_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarm_0 in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedAlarm_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure linkActivity in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_linkActivity 2
/*! \brief Preprocessor variable to relate field to bit position in structure linkActivity in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_linkActivity u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure linkActivity in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_linkActivity u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure lossOfSignal in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_lossOfSignal 2
/*! \brief Preprocessor variable to relate field to bit position in structure lossOfSignal in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_lossOfSignal u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure lossOfSignal in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_lossOfSignal u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedPhyXsTransmitAlarms in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedPhyXsTransmitAlarms 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPhyXsTransmitAlarms in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedPhyXsTransmitAlarms u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedPhyXsTransmitAlarms in AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorAlarms_RHEA_reservedPhyXsTransmitAlarms u2.word_2

/*! \brief Base register address of structure AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_baseRegisterAddress 0xD000
/*! \brief MMD address of structure AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure txLpiReceivedMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_txLpiReceivedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure txLpiReceivedMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_txLpiReceivedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txLpiReceivedMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_txLpiReceivedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rxLpiReceivedMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_rxLpiReceivedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure rxLpiReceivedMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_rxLpiReceivedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rxLpiReceivedMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_rxLpiReceivedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitFaultMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_transmitFaultMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure transmitFaultMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_transmitFaultMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure transmitFaultMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_transmitFaultMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure receiveFaultMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_receiveFaultMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure receiveFaultMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_receiveFaultMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure receiveFaultMask in AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_StandardInterruptMask_RHEA_receiveFaultMask u1.word_1

/*! \brief Base register address of structure AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_baseRegisterAddress 0xD400
/*! \brief MMD address of structure AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure crpatTestPatternCheckerSyncErrorMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_crpatTestPatternCheckerSyncErrorMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure crpatTestPatternCheckerSyncErrorMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_crpatTestPatternCheckerSyncErrorMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure crpatTestPatternCheckerSyncErrorMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_crpatTestPatternCheckerSyncErrorMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure prbsTestPatternCheckerSyncErrorMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_prbsTestPatternCheckerSyncErrorMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure prbsTestPatternCheckerSyncErrorMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_prbsTestPatternCheckerSyncErrorMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure prbsTestPatternCheckerSyncErrorMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_prbsTestPatternCheckerSyncErrorMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ocsgmiRxFifoInterruptMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_ocsgmiRxFifoInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure ocsgmiRxFifoInterruptMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_ocsgmiRxFifoInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ocsgmiRxFifoInterruptMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_ocsgmiRxFifoInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure macsecEgressInterruptMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_macsecEgressInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure macsecEgressInterruptMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_macsecEgressInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure macsecEgressInterruptMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_macsecEgressInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarm_1Mask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedAlarm_1Mask 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarm_1Mask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedAlarm_1Mask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarm_1Mask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedAlarm_1Mask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarm_0Mask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedAlarm_0Mask 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarm_0Mask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedAlarm_0Mask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarm_0Mask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedAlarm_0Mask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure linkActivityMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_linkActivityMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure linkActivityMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_linkActivityMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure linkActivityMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_linkActivityMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure lossOfSignalMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_lossOfSignalMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure lossOfSignalMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_lossOfSignalMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure lossOfSignalMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_lossOfSignalMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedPhyXsTransmitAlarmsMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedPhyXsTransmitAlarmsMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPhyXsTransmitAlarmsMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedPhyXsTransmitAlarmsMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedPhyXsTransmitAlarmsMask in AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorInterruptMask_RHEA_reservedPhyXsTransmitAlarmsMask u2.word_2

/*! \brief Base register address of structure AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_baseRegisterAddress 0xD800
/*! \brief MMD address of structure AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure testPatternForceError in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternForceError 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternForceError in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternForceError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternForceError in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternForceError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternMode_7ForceError in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternMode_7ForceError 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternMode_7ForceError in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternMode_7ForceError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternMode_7ForceError in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternMode_7ForceError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure test_patternExtendedSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_test_patternExtendedSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure test_patternExtendedSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_test_patternExtendedSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure test_patternExtendedSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_test_patternExtendedSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternCheckEnable in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternCheckEnable in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternCheckEnable in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternCheckPoint in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckPoint 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternCheckPoint in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckPoint u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternCheckPoint in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckPoint u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternMode_7CheckEnable in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternMode_7CheckEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternMode_7CheckEnable in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternMode_7CheckEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternMode_7CheckEnable in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternMode_7CheckEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternInvert in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternInvert 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternInvert in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternInvert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternInvert in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternInvert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternSynchronizationThreshold in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternSynchronizationThreshold 0
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternSynchronizationThreshold in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternSynchronizationThreshold u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testPatternSynchronizationThreshold in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternSynchronizationThreshold u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testPatternInsertExtraIdles in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternInsertExtraIdles 1
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternInsertExtraIdles in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternInsertExtraIdles u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure testPatternInsertExtraIdles in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternInsertExtraIdles u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure testPatternCheckSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckSelect 1
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternCheckSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckSelect u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure testPatternCheckSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternCheckSelect u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure testPatternChannelSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternChannelSelect 1
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternChannelSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternChannelSelect u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure testPatternChannelSelect in AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_VendorDebug_RHEA_testPatternChannelSelect u1.word_1

/*! \brief Base register address of structure AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_baseRegisterAddress 0xD810
/*! \brief MMD address of structure AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure channel_0TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_0TestPatternErrorCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure channel_0TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_0TestPatternErrorCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channel_0TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_0TestPatternErrorCounter u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure channel_1TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_1TestPatternErrorCounter 1
/*! \brief Preprocessor variable to relate field to bit position in structure channel_1TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_1TestPatternErrorCounter u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure channel_1TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_1TestPatternErrorCounter u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure channel_2TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_2TestPatternErrorCounter 2
/*! \brief Preprocessor variable to relate field to bit position in structure channel_2TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_2TestPatternErrorCounter u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure channel_2TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_2TestPatternErrorCounter u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure channel_3TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_3TestPatternErrorCounter 3
/*! \brief Preprocessor variable to relate field to bit position in structure channel_3TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_3TestPatternErrorCounter u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure channel_3TestPatternErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_channel_3TestPatternErrorCounter u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure testPatternMode_7ErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_testPatternMode_7ErrorCounter 4
/*! \brief Preprocessor variable to relate field to bit position in structure testPatternMode_7ErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_testPatternMode_7ErrorCounter u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure testPatternMode_7ErrorCounter in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_testPatternMode_7ErrorCounter u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure packetFcsErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsErrorCounterLSW 5
/*! \brief Preprocessor variable to relate field to bit position in structure packetFcsErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsErrorCounterLSW u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure packetFcsErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsErrorCounterLSW u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure packetFcsErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsErrorCounterMSW 6
/*! \brief Preprocessor variable to relate field to bit position in structure packetFcsErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsErrorCounterMSW u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure packetFcsErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsErrorCounterMSW u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure packetFcsNoErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsNoErrorCounterLSW 7
/*! \brief Preprocessor variable to relate field to bit position in structure packetFcsNoErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsNoErrorCounterLSW u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure packetFcsNoErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsNoErrorCounterLSW u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure packetFcsNoErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsNoErrorCounterMSW 8
/*! \brief Preprocessor variable to relate field to bit position in structure packetFcsNoErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsNoErrorCounterMSW u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure packetFcsNoErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetFcsNoErrorCounterMSW u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure packetCrcErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcErrorCounterLSW 9
/*! \brief Preprocessor variable to relate field to bit position in structure packetCrcErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcErrorCounterLSW u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure packetCrcErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcErrorCounterLSW u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure packetCrcErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcErrorCounterMSW 10
/*! \brief Preprocessor variable to relate field to bit position in structure packetCrcErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcErrorCounterMSW u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure packetCrcErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcErrorCounterMSW u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure packetCrcNoErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcNoErrorCounterLSW 11
/*! \brief Preprocessor variable to relate field to bit position in structure packetCrcNoErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcNoErrorCounterLSW u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure packetCrcNoErrorCounterLSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcNoErrorCounterLSW u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure packetCrcNoErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcNoErrorCounterMSW 12
/*! \brief Preprocessor variable to relate field to bit position in structure packetCrcNoErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcNoErrorCounterMSW u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure packetCrcNoErrorCounterMSW in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorCounter_RHEA_packetCrcNoErrorCounterMSW u12.word_12

/*! \brief Base register address of structure AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_baseRegisterAddress 0xD820
/*! \brief MMD address of structure AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure packetGeneratorDone in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetGeneratorDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure packetGeneratorDone in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetGeneratorDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packetGeneratorDone in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetGeneratorDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packetCheckerDone in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetCheckerDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure packetCheckerDone in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetCheckerDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packetCheckerDone in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetCheckerDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packetSourceAddressError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetSourceAddressError 0
/*! \brief Preprocessor variable to relate field to bit position in structure packetSourceAddressError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetSourceAddressError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packetSourceAddressError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetSourceAddressError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packetDestinationAddressError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetDestinationAddressError 0
/*! \brief Preprocessor variable to relate field to bit position in structure packetDestinationAddressError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetDestinationAddressError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packetDestinationAddressError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetDestinationAddressError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packetEthertypeOrLengthError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetEthertypeOrLengthError 0
/*! \brief Preprocessor variable to relate field to bit position in structure packetEthertypeOrLengthError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetEthertypeOrLengthError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packetEthertypeOrLengthError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetEthertypeOrLengthError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sequenceNumberError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_sequenceNumberError 0
/*! \brief Preprocessor variable to relate field to bit position in structure sequenceNumberError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_sequenceNumberError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sequenceNumberError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_sequenceNumberError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packetPayloadError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayloadError 0
/*! \brief Preprocessor variable to relate field to bit position in structure packetPayloadError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayloadError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packetPayloadError in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayloadError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packetPayload_0 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure packetPayload_0 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure packetPayload_0 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure packetPayload_1 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure packetPayload_1 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure packetPayload_1 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure packetPayload_2 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_2 3
/*! \brief Preprocessor variable to relate field to bit position in structure packetPayload_2 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_2 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure packetPayload_2 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_2 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure packetPayload_3 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_3 4
/*! \brief Preprocessor variable to relate field to bit position in structure packetPayload_3 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define bits_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_3 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure packetPayload_3 in AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA */
#define word_AQ_PhyXS_Transmit_xauiRx_TestPatternErrorStatus_RHEA_packetPayload_3 u4.word_4

/*! \brief Base register address of structure AQ_OcsgmiiRxFifoStatus_RHEA */
#define AQ_OcsgmiiRxFifoStatus_RHEA_baseRegisterAddress 0xD840
/*! \brief MMD address of structure AQ_OcsgmiiRxFifoStatus_RHEA */
#define AQ_OcsgmiiRxFifoStatus_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure ocsgmiiRxFifoLevel in AQ_OcsgmiiRxFifoStatus_RHEA */
#define AQ_OcsgmiiRxFifoStatus_RHEA_ocsgmiiRxFifoLevel 0
/*! \brief Preprocessor variable to relate field to bit position in structure ocsgmiiRxFifoLevel in AQ_OcsgmiiRxFifoStatus_RHEA */
#define bits_AQ_OcsgmiiRxFifoStatus_RHEA_ocsgmiiRxFifoLevel u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ocsgmiiRxFifoLevel in AQ_OcsgmiiRxFifoStatus_RHEA */
#define word_AQ_OcsgmiiRxFifoStatus_RHEA_ocsgmiiRxFifoLevel u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_baseRegisterAddress 0xE410
/*! \brief MMD address of structure AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure reservedReceiveProvisioning_1a in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_1a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedReceiveProvisioning_1a in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_1a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedReceiveProvisioning_1a in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_1a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure systemSgmiiTxInvert in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_systemSgmiiTxInvert 0
/*! \brief Preprocessor variable to relate field to bit position in structure systemSgmiiTxInvert in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_systemSgmiiTxInvert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure systemSgmiiTxInvert in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_systemSgmiiTxInvert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedReceiveProvisioning_1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedReceiveProvisioning_1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedReceiveProvisioning_1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedReceiveProvisioning_2a in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2a 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedReceiveProvisioning_2a in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2a u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedReceiveProvisioning_2a in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2a u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemKrTxInvert in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_systemKrTxInvert 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemKrTxInvert in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_systemKrTxInvert u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemKrTxInvert in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_systemKrTxInvert u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedReceiveProvisioning_2b in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2b 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedReceiveProvisioning_2b in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2b u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedReceiveProvisioning_2b in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2b u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure applySerdesTxSettings in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_applySerdesTxSettings 1
/*! \brief Preprocessor variable to relate field to bit position in structure applySerdesTxSettings in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_applySerdesTxSettings u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure applySerdesTxSettings in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_applySerdesTxSettings u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedReceiveProvisioning_2 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedReceiveProvisioning_2 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedReceiveProvisioning_2 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedReceiveProvisioning_2 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedRxProvisioning_3 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_3 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedRxProvisioning_3 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_3 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedRxProvisioning_3 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_3 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure serdesLane_0PostTap_1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0PostTap_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure serdesLane_0PostTap_1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0PostTap_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure serdesLane_0PostTap_1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0PostTap_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure serdesLane_0PreTap in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0PreTap 2
/*! \brief Preprocessor variable to relate field to bit position in structure serdesLane_0PreTap in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0PreTap u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure serdesLane_0PreTap in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0PreTap u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedRxProvisioning_4 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_4 3
/*! \brief Preprocessor variable to relate field to bit position in structure reservedRxProvisioning_4 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_4 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reservedRxProvisioning_4 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_4 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure serdesLane_0MainTap in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0MainTap 3
/*! \brief Preprocessor variable to relate field to bit position in structure serdesLane_0MainTap in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0MainTap u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure serdesLane_0MainTap in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0MainTap u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure serdesLane_0Amplitude in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0Amplitude 3
/*! \brief Preprocessor variable to relate field to bit position in structure serdesLane_0Amplitude in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0Amplitude u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure serdesLane_0Amplitude in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesLane_0Amplitude u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure serdesForceRxLinkRecovery in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesForceRxLinkRecovery 4
/*! \brief Preprocessor variable to relate field to bit position in structure serdesForceRxLinkRecovery in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesForceRxLinkRecovery u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure serdesForceRxLinkRecovery in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesForceRxLinkRecovery u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure reservedRxProvisioning_5 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_5 4
/*! \brief Preprocessor variable to relate field to bit position in structure reservedRxProvisioning_5 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_5 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure reservedRxProvisioning_5 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_5 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure serdesTestModeConfiguration in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesTestModeConfiguration 4
/*! \brief Preprocessor variable to relate field to bit position in structure serdesTestModeConfiguration in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesTestModeConfiguration u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure serdesTestModeConfiguration in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesTestModeConfiguration u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure serdesTestMode in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesTestMode 4
/*! \brief Preprocessor variable to relate field to bit position in structure serdesTestMode in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesTestMode u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure serdesTestMode in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesTestMode u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure reservedRxProvisioning_6 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_6 5
/*! \brief Preprocessor variable to relate field to bit position in structure reservedRxProvisioning_6 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_6 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure reservedRxProvisioning_6 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_6 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure serdesPrbsBitErrorInjector in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsBitErrorInjector 5
/*! \brief Preprocessor variable to relate field to bit position in structure serdesPrbsBitErrorInjector in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsBitErrorInjector u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure serdesPrbsBitErrorInjector in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsBitErrorInjector u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure serdesPrbsForceSyncPatternMonitor in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsForceSyncPatternMonitor 5
/*! \brief Preprocessor variable to relate field to bit position in structure serdesPrbsForceSyncPatternMonitor in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsForceSyncPatternMonitor u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure serdesPrbsForceSyncPatternMonitor in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsForceSyncPatternMonitor u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure serdesPrbsTestPattern in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsTestPattern 5
/*! \brief Preprocessor variable to relate field to bit position in structure serdesPrbsTestPattern in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsTestPattern u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure serdesPrbsTestPattern in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesPrbsTestPattern u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeSweepOffset in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeSweepOffset 6
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeSweepOffset in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeSweepOffset u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeSweepOffset in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeSweepOffset u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyePatternIteration in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyePatternIteration 6
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyePatternIteration in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyePatternIteration u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyePatternIteration in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyePatternIteration u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeDacStepCount in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeDacStepCount 6
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeDacStepCount in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeDacStepCount u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeDacStepCount in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeDacStepCount u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure reservedRxProvisioning_7__2 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_7__2 6
/*! \brief Preprocessor variable to relate field to bit position in structure reservedRxProvisioning_7__2 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_7__2 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure reservedRxProvisioning_7__2 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_7__2 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeTestStatus in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeTestStatus 6
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeTestStatus in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeTestStatus u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeTestStatus in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeTestStatus u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeTestControl in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeTestControl 6
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeTestControl in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeTestControl u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeTestControl in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeTestControl u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure reservedRxProvisioning_7__1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_7__1 6
/*! \brief Preprocessor variable to relate field to bit position in structure reservedRxProvisioning_7__1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_7__1 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure reservedRxProvisioning_7__1 in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_reservedRxProvisioning_7__1 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeEvenSlicer_1x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeEvenSlicer_1x 7
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeEvenSlicer_1x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeEvenSlicer_1x u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeEvenSlicer_1x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeEvenSlicer_1x u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeEvenSlicer_0x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeEvenSlicer_0x 7
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeEvenSlicer_0x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeEvenSlicer_0x u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeEvenSlicer_0x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeEvenSlicer_0x u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeOddSlicer_1x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeOddSlicer_1x 8
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeOddSlicer_1x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeOddSlicer_1x u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeOddSlicer_1x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeOddSlicer_1x u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeOddSlicer_0x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeOddSlicer_0x 8
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeOddSlicer_0x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeOddSlicer_0x u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeOddSlicer_0x in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeOddSlicer_0x u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure serdesEyeDataBufferOffset in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeDataBufferOffset 9
/*! \brief Preprocessor variable to relate field to bit position in structure serdesEyeDataBufferOffset in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeDataBufferOffset u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure serdesEyeDataBufferOffset in AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorProvisioning_RHEA_serdesEyeDataBufferOffset u9.word_9

/*! \brief Base register address of structure AQ_PifMailboxExtra_RHEA */
#define AQ_PifMailboxExtra_RHEA_baseRegisterAddress 0xE41D
/*! \brief MMD address of structure AQ_PifMailboxExtra_RHEA */
#define AQ_PifMailboxExtra_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure pifMailboxAddressRegister_2 in AQ_PifMailboxExtra_RHEA */
#define AQ_PifMailboxExtra_RHEA_pifMailboxAddressRegister_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure pifMailboxAddressRegister_2 in AQ_PifMailboxExtra_RHEA */
#define bits_AQ_PifMailboxExtra_RHEA_pifMailboxAddressRegister_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pifMailboxAddressRegister_2 in AQ_PifMailboxExtra_RHEA */
#define word_AQ_PifMailboxExtra_RHEA_pifMailboxAddressRegister_2 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pifMailboxDataRegister_2 in AQ_PifMailboxExtra_RHEA */
#define AQ_PifMailboxExtra_RHEA_pifMailboxDataRegister_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure pifMailboxDataRegister_2 in AQ_PifMailboxExtra_RHEA */
#define bits_AQ_PifMailboxExtra_RHEA_pifMailboxDataRegister_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pifMailboxDataRegister_2 in AQ_PifMailboxExtra_RHEA */
#define word_AQ_PifMailboxExtra_RHEA_pifMailboxDataRegister_2 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedRxProvisioning_16 in AQ_PifMailboxExtra_RHEA */
#define AQ_PifMailboxExtra_RHEA_reservedRxProvisioning_16 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedRxProvisioning_16 in AQ_PifMailboxExtra_RHEA */
#define bits_AQ_PifMailboxExtra_RHEA_reservedRxProvisioning_16 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedRxProvisioning_16 in AQ_PifMailboxExtra_RHEA */
#define word_AQ_PifMailboxExtra_RHEA_reservedRxProvisioning_16 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pifMailboxMMD_Register_2 in AQ_PifMailboxExtra_RHEA */
#define AQ_PifMailboxExtra_RHEA_pifMailboxMMD_Register_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure pifMailboxMMD_Register_2 in AQ_PifMailboxExtra_RHEA */
#define bits_AQ_PifMailboxExtra_RHEA_pifMailboxMMD_Register_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure pifMailboxMMD_Register_2 in AQ_PifMailboxExtra_RHEA */
#define word_AQ_PifMailboxExtra_RHEA_pifMailboxMMD_Register_2 u2.word_2

/*! \brief Base register address of structure AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_baseRegisterAddress 0xE810
/*! \brief MMD address of structure AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure numberOfUsxAnegRestarts in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_numberOfUsxAnegRestarts 0
/*! \brief Preprocessor variable to relate field to bit position in structure numberOfUsxAnegRestarts in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_numberOfUsxAnegRestarts u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure numberOfUsxAnegRestarts in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_numberOfUsxAnegRestarts u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesPrbsOverflowStatus in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_serdesPrbsOverflowStatus 1
/*! \brief Preprocessor variable to relate field to bit position in structure serdesPrbsOverflowStatus in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_serdesPrbsOverflowStatus u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure serdesPrbsOverflowStatus in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_serdesPrbsOverflowStatus u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure serdesPrbsBitErrorCount in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_serdesPrbsBitErrorCount 1
/*! \brief Preprocessor variable to relate field to bit position in structure serdesPrbsBitErrorCount in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_serdesPrbsBitErrorCount u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure serdesPrbsBitErrorCount in AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_ReservedVendorState_RHEA_serdesPrbsBitErrorCount u1.word_1

/*! \brief Base register address of structure AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_baseRegisterAddress 0xE812
/*! \brief MMD address of structure AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceAutonegStatus in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceAutonegStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceAutonegStatus in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define bits_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceAutonegStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceAutonegStatus in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define word_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceAutonegStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rxLinkUp in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_rxLinkUp 0
/*! \brief Preprocessor variable to relate field to bit position in structure rxLinkUp in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define bits_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_rxLinkUp u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rxLinkUp in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define word_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_rxLinkUp u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure txReady in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_txReady 0
/*! \brief Preprocessor variable to relate field to bit position in structure txReady in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define bits_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_txReady u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txReady in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define word_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_txReady u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceRate in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceRate 0
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceRate in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define bits_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceRate u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceRate in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define word_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceRate u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceInUse in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceInUse 0
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceInUse in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define bits_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceInUse u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceInUse in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define word_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_systemInterfaceInUse u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedReceiveState_3 in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_reservedReceiveState_3 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedReceiveState_3 in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define bits_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_reservedReceiveState_3 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedReceiveState_3 in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define word_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_reservedReceiveState_3 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure readyForData in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_readyForData 0
/*! \brief Preprocessor variable to relate field to bit position in structure readyForData in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define bits_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_readyForData u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure readyForData in AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA */
#define word_AQ_PhyXS_SystemInterfaceConnectionStatus_RHEA_readyForData u0.word_0

/*! \brief Base register address of structure AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_baseRegisterAddress 0xEC00
/*! \brief MMD address of structure AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure aqlinkRightInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_aqlinkRightInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure aqlinkRightInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_aqlinkRightInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aqlinkRightInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_aqlinkRightInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aqlinkLeftInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_aqlinkLeftInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure aqlinkLeftInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_aqlinkLeftInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aqlinkLeftInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_aqlinkLeftInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure macsecIngressInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_macsecIngressInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure macsecIngressInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_macsecIngressInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure macsecIngressInterrupt in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_macsecIngressInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceRxLinkUp in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceRxLinkUp 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceRxLinkUp in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceRxLinkUp u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceRxLinkUp in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceRxLinkUp u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceRxLinkDown in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceRxLinkDown 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceRxLinkDown in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceRxLinkDown u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceRxLinkDown in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceRxLinkDown u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceTxReady in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceTxReady 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceTxReady in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceTxReady u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceTxReady in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceTxReady u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceTxNotReady in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceTxNotReady 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceTxNotReady in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceTxNotReady u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceTxNotReady in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemInterfaceTxNotReady u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemReadyForDataTransfer in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemReadyForDataTransfer 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemReadyForDataTransfer in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemReadyForDataTransfer u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemReadyForDataTransfer in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemReadyForDataTransfer u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemNotReadyForDataTransfer in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemNotReadyForDataTransfer 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemNotReadyForDataTransfer in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemNotReadyForDataTransfer u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemNotReadyForDataTransfer in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_systemNotReadyForDataTransfer u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure macsecBufferOverflow in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_macsecBufferOverflow 1
/*! \brief Preprocessor variable to relate field to bit position in structure macsecBufferOverflow in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_macsecBufferOverflow u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure macsecBufferOverflow in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_macsecBufferOverflow u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedPhyXsReceiveAlarms_2 in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_reservedPhyXsReceiveAlarms_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPhyXsReceiveAlarms_2 in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_reservedPhyXsReceiveAlarms_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedPhyXsReceiveAlarms_2 in AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorAlarms_RHEA_reservedPhyXsReceiveAlarms_2 u1.word_1

/*! \brief Base register address of structure AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_baseRegisterAddress 0xF400
/*! \brief MMD address of structure AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure aqlinkRightInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_aqlinkRightInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure aqlinkRightInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_aqlinkRightInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aqlinkRightInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_aqlinkRightInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aqlinkLeftInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_aqlinkLeftInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure aqlinkLeftInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_aqlinkLeftInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aqlinkLeftInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_aqlinkLeftInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure macsecIngressInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_macsecIngressInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure macsecIngressInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_macsecIngressInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure macsecIngressInterruptMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_macsecIngressInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceRxLinkUpMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceRxLinkUpMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceRxLinkUpMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceRxLinkUpMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceRxLinkUpMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceRxLinkUpMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceRxLinkDownMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceRxLinkDownMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceRxLinkDownMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceRxLinkDownMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceRxLinkDownMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceRxLinkDownMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceTxLinkUpMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceTxLinkUpMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceTxLinkUpMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceTxLinkUpMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceTxLinkUpMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceTxLinkUpMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemInterfaceTxLinkDownMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceTxLinkDownMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemInterfaceTxLinkDownMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceTxLinkDownMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemInterfaceTxLinkDownMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemInterfaceTxLinkDownMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemReadyForDataTransferMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemReadyForDataTransferMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemReadyForDataTransferMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemReadyForDataTransferMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemReadyForDataTransferMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemReadyForDataTransferMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemNotReadyForDataTransferMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemNotReadyForDataTransferMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemNotReadyForDataTransferMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemNotReadyForDataTransferMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemNotReadyForDataTransferMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_systemNotReadyForDataTransferMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure macsecBufferOverflowMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_macsecBufferOverflowMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure macsecBufferOverflowMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_macsecBufferOverflowMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure macsecBufferOverflowMask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_macsecBufferOverflowMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedPhyXsReceiveAlarms_2Mask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_reservedPhyXsReceiveAlarms_2Mask 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPhyXsReceiveAlarms_2Mask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define bits_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_reservedPhyXsReceiveAlarms_2Mask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedPhyXsReceiveAlarms_2Mask in AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA */
#define word_AQ_PhyXS_Receive_xauiTx_VendorInterruptMask_RHEA_reservedPhyXsReceiveAlarms_2Mask u1.word_1

/*! \brief Base register address of structure AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_baseRegisterAddress 0xFC00
/*! \brief MMD address of structure AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_mmdAddress 0x04
/*! \brief Preprocessor variable to relate field to word number in structure standardAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_standardAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure standardAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define bits_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_standardAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure standardAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define word_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_standardAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure standardAlarms_2Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_standardAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure standardAlarms_2Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define bits_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_standardAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure standardAlarms_2Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define word_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_standardAlarms_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificTxAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificTxAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificTxAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define bits_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificTxAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificTxAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define word_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificTxAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificTxAlarms_3Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificTxAlarms_3Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificTxAlarms_3Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define bits_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificTxAlarms_3Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificTxAlarms_3Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define word_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificTxAlarms_3Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificRxAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define bits_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificRxAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_1Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define word_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificRxAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificRxAlarms_2Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificRxAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificRxAlarms_2Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define bits_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificRxAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificRxAlarms_2Interrupt in AQ_PhyXS_VendorGlobalInterruptFlags_RHEA */
#define word_AQ_PhyXS_VendorGlobalInterruptFlags_RHEA_vendorSpecificRxAlarms_2Interrupt u0.word_0
#endif
/*@}*/
/*@}*/
