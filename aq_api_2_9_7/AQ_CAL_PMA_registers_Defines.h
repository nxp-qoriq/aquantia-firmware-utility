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
*   for the PMA Registers block.
*/

/*! \defgroup PMA_registers_Defines PMA Registers Defines
*   This module contains the compiler assist macros and doxygen comments
*   for the PMA Registers block.
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
*   This file contains the compiler assist macros for the registers contained in the PMA Registers block.
*
*
***********************************************************************/


/*@{*/
#ifndef AQ_CAL_PMA_REGS_DEFINES_HEADER
#define AQ_CAL_PMA_REGS_DEFINES_HEADER


/*-----------------------------------------------------------------------------*/
/*Access macro definitions                                                     */
/*-----------------------------------------------------------------------------*/
/*! \brief Base register address of structure AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_baseRegisterAddress 0x0000
/*! \brief MMD address of structure AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reset in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_reset 0
/*! \brief Preprocessor variable to relate field to bit position in structure reset in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_reset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reset in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_reset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved0a in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_reserved0a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved0a in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_reserved0a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved0a in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_reserved0a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure speedSelectionLsb in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_speedSelectionLsb 0
/*! \brief Preprocessor variable to relate field to bit position in structure speedSelectionLsb in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_speedSelectionLsb u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure speedSelectionLsb in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_speedSelectionLsb u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved0b in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_reserved0b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved0b in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_reserved0b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved0b in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_reserved0b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowPower in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_lowPower 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowPower in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_lowPower u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowPower in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_lowPower u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved0c in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_reserved0c 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved0c in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_reserved0c u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved0c in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_reserved0c u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure speedSelectionMsb in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_speedSelectionMsb 0
/*! \brief Preprocessor variable to relate field to bit position in structure speedSelectionMsb in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_speedSelectionMsb u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure speedSelectionMsb in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_speedSelectionMsb u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10gSpeedSelection in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL__10gSpeedSelection 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10gSpeedSelection in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL__10gSpeedSelection u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10gSpeedSelection in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL__10gSpeedSelection u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved0d in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_reserved0d 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved0d in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_reserved0d u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved0d in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_reserved0d u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure loopback in AQ_PmaStandardControl_1_CAL */
#define AQ_PmaStandardControl_1_CAL_loopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure loopback in AQ_PmaStandardControl_1_CAL */
#define bits_AQ_PmaStandardControl_1_CAL_loopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure loopback in AQ_PmaStandardControl_1_CAL */
#define word_AQ_PmaStandardControl_1_CAL_loopback u0.word_0

/*! \brief Base register address of structure AQ_PmaStandardStatus_1_CAL */
#define AQ_PmaStandardStatus_1_CAL_baseRegisterAddress 0x0001
/*! \brief MMD address of structure AQ_PmaStandardStatus_1_CAL */
#define AQ_PmaStandardStatus_1_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reserved1a in AQ_PmaStandardStatus_1_CAL */
#define AQ_PmaStandardStatus_1_CAL_reserved1a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved1a in AQ_PmaStandardStatus_1_CAL */
#define bits_AQ_PmaStandardStatus_1_CAL_reserved1a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved1a in AQ_PmaStandardStatus_1_CAL */
#define word_AQ_PmaStandardStatus_1_CAL_reserved1a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure fault in AQ_PmaStandardStatus_1_CAL */
#define AQ_PmaStandardStatus_1_CAL_fault 0
/*! \brief Preprocessor variable to relate field to bit position in structure fault in AQ_PmaStandardStatus_1_CAL */
#define bits_AQ_PmaStandardStatus_1_CAL_fault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure fault in AQ_PmaStandardStatus_1_CAL */
#define word_AQ_PmaStandardStatus_1_CAL_fault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved1b in AQ_PmaStandardStatus_1_CAL */
#define AQ_PmaStandardStatus_1_CAL_reserved1b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved1b in AQ_PmaStandardStatus_1_CAL */
#define bits_AQ_PmaStandardStatus_1_CAL_reserved1b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved1b in AQ_PmaStandardStatus_1_CAL */
#define word_AQ_PmaStandardStatus_1_CAL_reserved1b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaReceiveLinkStatus in AQ_PmaStandardStatus_1_CAL */
#define AQ_PmaStandardStatus_1_CAL_pmaReceiveLinkStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaReceiveLinkStatus in AQ_PmaStandardStatus_1_CAL */
#define bits_AQ_PmaStandardStatus_1_CAL_pmaReceiveLinkStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaReceiveLinkStatus in AQ_PmaStandardStatus_1_CAL */
#define word_AQ_PmaStandardStatus_1_CAL_pmaReceiveLinkStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowPowerAbility in AQ_PmaStandardStatus_1_CAL */
#define AQ_PmaStandardStatus_1_CAL_lowPowerAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowPowerAbility in AQ_PmaStandardStatus_1_CAL */
#define bits_AQ_PmaStandardStatus_1_CAL_lowPowerAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowPowerAbility in AQ_PmaStandardStatus_1_CAL */
#define word_AQ_PmaStandardStatus_1_CAL_lowPowerAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved1c in AQ_PmaStandardStatus_1_CAL */
#define AQ_PmaStandardStatus_1_CAL_reserved1c 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved1c in AQ_PmaStandardStatus_1_CAL */
#define bits_AQ_PmaStandardStatus_1_CAL_reserved1c u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved1c in AQ_PmaStandardStatus_1_CAL */
#define word_AQ_PmaStandardStatus_1_CAL_reserved1c u0.word_0

/*! \brief Base register address of structure AQ_PmaStandardDeviceIdentifier_CAL */
#define AQ_PmaStandardDeviceIdentifier_CAL_baseRegisterAddress 0x0002
/*! \brief MMD address of structure AQ_PmaStandardDeviceIdentifier_CAL */
#define AQ_PmaStandardDeviceIdentifier_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdMSW in AQ_PmaStandardDeviceIdentifier_CAL */
#define AQ_PmaStandardDeviceIdentifier_CAL_deviceIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdMSW in AQ_PmaStandardDeviceIdentifier_CAL */
#define bits_AQ_PmaStandardDeviceIdentifier_CAL_deviceIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdMSW in AQ_PmaStandardDeviceIdentifier_CAL */
#define word_AQ_PmaStandardDeviceIdentifier_CAL_deviceIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdLSW in AQ_PmaStandardDeviceIdentifier_CAL */
#define AQ_PmaStandardDeviceIdentifier_CAL_deviceIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdLSW in AQ_PmaStandardDeviceIdentifier_CAL */
#define bits_AQ_PmaStandardDeviceIdentifier_CAL_deviceIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdLSW in AQ_PmaStandardDeviceIdentifier_CAL */
#define word_AQ_PmaStandardDeviceIdentifier_CAL_deviceIdLSW u1.word_1

/*! \brief Base register address of structure AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_baseRegisterAddress 0x0004
/*! \brief MMD address of structure AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reserved4a in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_reserved4a 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved4a in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_reserved4a u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved4a in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_reserved4a u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma_5gCapable in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_pma_5gCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma_5gCapable in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_pma_5gCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma_5gCapable in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_pma_5gCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma_2_5gCapable in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_pma_2_5gCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma_2_5gCapable in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_pma_2_5gCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma_2_5gCapable in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_pma_2_5gCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved4b in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_reserved4b 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved4b in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_reserved4b u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved4b in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_reserved4b u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10M_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_pma10M_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10M_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_pma10M_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10M_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_pma10M_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma100M_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_pma100M_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma100M_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_pma100M_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma100M_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_pma100M_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma1G_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_pma1G_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma1G_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_pma1G_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma1G_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_pma1G_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved4c in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_reserved4c 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved4c in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_reserved4c u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved4c in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_reserved4c u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10pass_tsCapable in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL__10pass_tsCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10pass_tsCapable in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL__10pass_tsCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10pass_tsCapable in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL__10pass_tsCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _2base_tlCapable in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL__2base_tlCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure _2base_tlCapable in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL__2base_tlCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _2base_tlCapable in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL__2base_tlCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10G_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define AQ_PmaStandardSpeedAbility_CAL_pma10G_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10G_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define bits_AQ_PmaStandardSpeedAbility_CAL_pma10G_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10G_Capable in AQ_PmaStandardSpeedAbility_CAL */
#define word_AQ_PmaStandardSpeedAbility_CAL_pma10G_Capable u0.word_0

/*! \brief Base register address of structure AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_baseRegisterAddress 0x0005
/*! \brief MMD address of structure AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_autonegotiationPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_autonegotiationPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_autonegotiationPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tcPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_tcPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure tcPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_tcPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tcPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_tcPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dteXsPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_dteXsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure dteXsPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_dteXsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dteXsPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_dteXsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_Present in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_phyXS_Present 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_Present in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_phyXS_Present u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_Present in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_phyXS_Present u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_pcsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_pcsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_pcsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure wisPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_wisPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure wisPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_wisPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure wisPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_wisPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_pmaPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_pmaPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_pmaPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clause_22RegistersPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_clause_22RegistersPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22RegistersPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_clause_22RegistersPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clause_22RegistersPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_clause_22RegistersPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_2Present in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_vendorSpecificDevice_2Present 1
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_2Present in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_vendorSpecificDevice_2Present u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_2Present in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_vendorSpecificDevice_2Present u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_1Present in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_vendorSpecificDevice_1Present 1
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_1Present in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_vendorSpecificDevice_1Present u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_1Present in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_vendorSpecificDevice_1Present u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure clause_22ExtensionPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define AQ_PmaStandardDevicesInPackage_CAL_clause_22ExtensionPresent 1
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22ExtensionPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define bits_AQ_PmaStandardDevicesInPackage_CAL_clause_22ExtensionPresent u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure clause_22ExtensionPresent in AQ_PmaStandardDevicesInPackage_CAL */
#define word_AQ_PmaStandardDevicesInPackage_CAL_clause_22ExtensionPresent u1.word_1

/*! \brief Base register address of structure AQ_PmaStandardControl_2_CAL */
#define AQ_PmaStandardControl_2_CAL_baseRegisterAddress 0x0007
/*! \brief MMD address of structure AQ_PmaStandardControl_2_CAL */
#define AQ_PmaStandardControl_2_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reserved7 in AQ_PmaStandardControl_2_CAL */
#define AQ_PmaStandardControl_2_CAL_reserved7 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved7 in AQ_PmaStandardControl_2_CAL */
#define bits_AQ_PmaStandardControl_2_CAL_reserved7 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved7 in AQ_PmaStandardControl_2_CAL */
#define word_AQ_PmaStandardControl_2_CAL_reserved7 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaDeviceType in AQ_PmaStandardControl_2_CAL */
#define AQ_PmaStandardControl_2_CAL_pmaDeviceType 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaDeviceType in AQ_PmaStandardControl_2_CAL */
#define bits_AQ_PmaStandardControl_2_CAL_pmaDeviceType u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaDeviceType in AQ_PmaStandardControl_2_CAL */
#define word_AQ_PmaStandardControl_2_CAL_pmaDeviceType u0.word_0

/*! \brief Base register address of structure AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_baseRegisterAddress 0x0008
/*! \brief MMD address of structure AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure devicePresent in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_devicePresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure devicePresent in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_devicePresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure devicePresent in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_devicePresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitFaultLocationAbility in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_transmitFaultLocationAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure transmitFaultLocationAbility in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_transmitFaultLocationAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure transmitFaultLocationAbility in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_transmitFaultLocationAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure receiveFaultLocationAbility in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_receiveFaultLocationAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure receiveFaultLocationAbility in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_receiveFaultLocationAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure receiveFaultLocationAbility in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_receiveFaultLocationAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitFault in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_transmitFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure transmitFault in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_transmitFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure transmitFault in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_transmitFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure receiveFault in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_receiveFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure receiveFault in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_receiveFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure receiveFault in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_receiveFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure extendedAbilities in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_extendedAbilities 0
/*! \brief Preprocessor variable to relate field to bit position in structure extendedAbilities in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_extendedAbilities u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure extendedAbilities in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_extendedAbilities u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdTransmitDisableAbility in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pmdTransmitDisableAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdTransmitDisableAbility in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pmdTransmitDisableAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdTransmitDisableAbility in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pmdTransmitDisableAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseSR_Capable in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pma10GBaseSR_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseSR_Capable in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pma10GBaseSR_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseSR_Capable in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pma10GBaseSR_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseLR_Capable in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pma10GBaseLR_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseLR_Capable in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pma10GBaseLR_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseLR_Capable in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pma10GBaseLR_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseER_Capable in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pma10GBaseER_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseER_Capable in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pma10GBaseER_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseER_Capable in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pma10GBaseER_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10G_base_lx4Capable in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pma10G_base_lx4Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10G_base_lx4Capable in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pma10G_base_lx4Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10G_base_lx4Capable in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pma10G_base_lx4Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseSW_Capable in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pma10GBaseSW_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseSW_Capable in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pma10GBaseSW_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseSW_Capable in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pma10GBaseSW_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseLW_Capable in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pma10GBaseLW_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseLW_Capable in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pma10GBaseLW_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseLW_Capable in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pma10GBaseLW_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseEW_Capable in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pma10GBaseEW_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseEW_Capable in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pma10GBaseEW_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseEW_Capable in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pma10GBaseEW_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaLoopbackAbility in AQ_PmaStandardStatus_2_CAL */
#define AQ_PmaStandardStatus_2_CAL_pmaLoopbackAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaLoopbackAbility in AQ_PmaStandardStatus_2_CAL */
#define bits_AQ_PmaStandardStatus_2_CAL_pmaLoopbackAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaLoopbackAbility in AQ_PmaStandardStatus_2_CAL */
#define word_AQ_PmaStandardStatus_2_CAL_pmaLoopbackAbility u0.word_0

/*! \brief Base register address of structure AQ_PmdStandardTransmitDisableControl_CAL */
#define AQ_PmdStandardTransmitDisableControl_CAL_baseRegisterAddress 0x0009
/*! \brief MMD address of structure AQ_PmdStandardTransmitDisableControl_CAL */
#define AQ_PmdStandardTransmitDisableControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure pmdChannel_3TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_3TransmitDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdChannel_3TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define bits_AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_3TransmitDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdChannel_3TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define word_AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_3TransmitDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdChannel_2TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_2TransmitDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdChannel_2TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define bits_AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_2TransmitDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdChannel_2TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define word_AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_2TransmitDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdChannel_1TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_1TransmitDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdChannel_1TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define bits_AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_1TransmitDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdChannel_1TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define word_AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_1TransmitDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdChannel_0TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_0TransmitDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdChannel_0TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define bits_AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_0TransmitDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdChannel_0TransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define word_AQ_PmdStandardTransmitDisableControl_CAL_pmdChannel_0TransmitDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdGlobalTransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define AQ_PmdStandardTransmitDisableControl_CAL_pmdGlobalTransmitDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdGlobalTransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define bits_AQ_PmdStandardTransmitDisableControl_CAL_pmdGlobalTransmitDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdGlobalTransmitDisable in AQ_PmdStandardTransmitDisableControl_CAL */
#define word_AQ_PmdStandardTransmitDisableControl_CAL_pmdGlobalTransmitDisable u0.word_0

/*! \brief Base register address of structure AQ_PmdStandardSignalDetect_CAL */
#define AQ_PmdStandardSignalDetect_CAL_baseRegisterAddress 0x000A
/*! \brief MMD address of structure AQ_PmdStandardSignalDetect_CAL */
#define AQ_PmdStandardSignalDetect_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure pmdChannel_3SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define AQ_PmdStandardSignalDetect_CAL_pmdChannel_3SignalDetect 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdChannel_3SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define bits_AQ_PmdStandardSignalDetect_CAL_pmdChannel_3SignalDetect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdChannel_3SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define word_AQ_PmdStandardSignalDetect_CAL_pmdChannel_3SignalDetect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdChannel_2SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define AQ_PmdStandardSignalDetect_CAL_pmdChannel_2SignalDetect 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdChannel_2SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define bits_AQ_PmdStandardSignalDetect_CAL_pmdChannel_2SignalDetect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdChannel_2SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define word_AQ_PmdStandardSignalDetect_CAL_pmdChannel_2SignalDetect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdChannel_1SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define AQ_PmdStandardSignalDetect_CAL_pmdChannel_1SignalDetect 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdChannel_1SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define bits_AQ_PmdStandardSignalDetect_CAL_pmdChannel_1SignalDetect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdChannel_1SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define word_AQ_PmdStandardSignalDetect_CAL_pmdChannel_1SignalDetect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdChannel_0SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define AQ_PmdStandardSignalDetect_CAL_pmdChannel_0SignalDetect 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdChannel_0SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define bits_AQ_PmdStandardSignalDetect_CAL_pmdChannel_0SignalDetect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdChannel_0SignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define word_AQ_PmdStandardSignalDetect_CAL_pmdChannel_0SignalDetect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmdGlobalSignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define AQ_PmdStandardSignalDetect_CAL_pmdGlobalSignalDetect 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmdGlobalSignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define bits_AQ_PmdStandardSignalDetect_CAL_pmdGlobalSignalDetect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmdGlobalSignalDetect in AQ_PmdStandardSignalDetect_CAL */
#define word_AQ_PmdStandardSignalDetect_CAL_pmdGlobalSignalDetect u0.word_0

/*! \brief Base register address of structure AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_baseRegisterAddress 0x000B
/*! \brief MMD address of structure AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reservedB0 in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_reservedB0 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedB0 in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_reservedB0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedB0 in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_reservedB0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma_2_5_5gbase_tCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_2_5_5gbase_tCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma_2_5_5gbase_tCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_2_5_5gbase_tCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma_2_5_5gbase_tCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_2_5_5gbase_tCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedB1 in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_reservedB1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedB1 in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_reservedB1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedB1 in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_reservedB1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10BaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10BaseT_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10BaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10BaseT_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10BaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10BaseT_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma_100base_txCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_100base_txCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma_100base_txCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_100base_txCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma_100base_txCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_100base_txCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma_1000base_kxCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_1000base_kxCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma_1000base_kxCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_1000base_kxCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma_1000base_kxCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma_1000base_kxCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma1000BaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma1000BaseT_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma1000BaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma1000BaseT_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma1000BaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma1000BaseT_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseK_rCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseK_rCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseK_rCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseK_rCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseK_rCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseK_rCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseK_x4Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseK_x4Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseK_x4Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseK_x4Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseK_x4Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseK_x4Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseT_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseT_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseT_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseT_Capable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseLR_mCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseLR_mCapable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseLR_mCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseLR_mCapable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseLR_mCapable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseLR_mCapable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pma10GBaseCX4_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseCX4_Capable 0
/*! \brief Preprocessor variable to relate field to bit position in structure pma10GBaseCX4_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define bits_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseCX4_Capable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pma10GBaseCX4_Capable in AQ_PmdStandard10G_ExtendedAbilityRegister_CAL */
#define word_AQ_PmdStandard10G_ExtendedAbilityRegister_CAL_pma10GBaseCX4_Capable u0.word_0

/*! \brief Base register address of structure AQ_PmaStandardPackageIdentifier_CAL */
#define AQ_PmaStandardPackageIdentifier_CAL_baseRegisterAddress 0x000E
/*! \brief MMD address of structure AQ_PmaStandardPackageIdentifier_CAL */
#define AQ_PmaStandardPackageIdentifier_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure packageIdMSW in AQ_PmaStandardPackageIdentifier_CAL */
#define AQ_PmaStandardPackageIdentifier_CAL_packageIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdMSW in AQ_PmaStandardPackageIdentifier_CAL */
#define bits_AQ_PmaStandardPackageIdentifier_CAL_packageIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packageIdMSW in AQ_PmaStandardPackageIdentifier_CAL */
#define word_AQ_PmaStandardPackageIdentifier_CAL_packageIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packageIdLSW in AQ_PmaStandardPackageIdentifier_CAL */
#define AQ_PmaStandardPackageIdentifier_CAL_packageIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdLSW in AQ_PmaStandardPackageIdentifier_CAL */
#define bits_AQ_PmaStandardPackageIdentifier_CAL_packageIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure packageIdLSW in AQ_PmaStandardPackageIdentifier_CAL */
#define word_AQ_PmaStandardPackageIdentifier_CAL_packageIdLSW u1.word_1

/*! \brief Base register address of structure AQ_PmaReserved_14Register_CAL */
#define AQ_PmaReserved_14Register_CAL_baseRegisterAddress 0x0014
/*! \brief MMD address of structure AQ_PmaReserved_14Register_CAL */
#define AQ_PmaReserved_14Register_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reserved14 in AQ_PmaReserved_14Register_CAL */
#define AQ_PmaReserved_14Register_CAL_reserved14 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved14 in AQ_PmaReserved_14Register_CAL */
#define bits_AQ_PmaReserved_14Register_CAL_reserved14 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved14 in AQ_PmaReserved_14Register_CAL */
#define word_AQ_PmaReserved_14Register_CAL_reserved14 u0.word_0

/*! \brief Base register address of structure AQ_PmaExtendedAbilityRegister_CAL */
#define AQ_PmaExtendedAbilityRegister_CAL_baseRegisterAddress 0x0015
/*! \brief MMD address of structure AQ_PmaExtendedAbilityRegister_CAL */
#define AQ_PmaExtendedAbilityRegister_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reserved15 in AQ_PmaExtendedAbilityRegister_CAL */
#define AQ_PmaExtendedAbilityRegister_CAL_reserved15 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved15 in AQ_PmaExtendedAbilityRegister_CAL */
#define bits_AQ_PmaExtendedAbilityRegister_CAL_reserved15 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved15 in AQ_PmaExtendedAbilityRegister_CAL */
#define word_AQ_PmaExtendedAbilityRegister_CAL_reserved15 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _5gbase_tAbility in AQ_PmaExtendedAbilityRegister_CAL */
#define AQ_PmaExtendedAbilityRegister_CAL__5gbase_tAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure _5gbase_tAbility in AQ_PmaExtendedAbilityRegister_CAL */
#define bits_AQ_PmaExtendedAbilityRegister_CAL__5gbase_tAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _5gbase_tAbility in AQ_PmaExtendedAbilityRegister_CAL */
#define word_AQ_PmaExtendedAbilityRegister_CAL__5gbase_tAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _2_5gbase_tAbility in AQ_PmaExtendedAbilityRegister_CAL */
#define AQ_PmaExtendedAbilityRegister_CAL__2_5gbase_tAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure _2_5gbase_tAbility in AQ_PmaExtendedAbilityRegister_CAL */
#define bits_AQ_PmaExtendedAbilityRegister_CAL__2_5gbase_tAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _2_5gbase_tAbility in AQ_PmaExtendedAbilityRegister_CAL */
#define word_AQ_PmaExtendedAbilityRegister_CAL__2_5gbase_tAbility u0.word_0

/*! \brief Base register address of structure AQ_PmaReserved_16Register_CAL */
#define AQ_PmaReserved_16Register_CAL_baseRegisterAddress 0x0016
/*! \brief MMD address of structure AQ_PmaReserved_16Register_CAL */
#define AQ_PmaReserved_16Register_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reserved16 in AQ_PmaReserved_16Register_CAL */
#define AQ_PmaReserved_16Register_CAL_reserved16 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved16 in AQ_PmaReserved_16Register_CAL */
#define bits_AQ_PmaReserved_16Register_CAL_reserved16 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved16 in AQ_PmaReserved_16Register_CAL */
#define word_AQ_PmaReserved_16Register_CAL_reserved16 u0.word_0

/*! \brief Base register address of structure AQ_PmaReserved_17Register_CAL */
#define AQ_PmaReserved_17Register_CAL_baseRegisterAddress 0x0017
/*! \brief MMD address of structure AQ_PmaReserved_17Register_CAL */
#define AQ_PmaReserved_17Register_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reserved17 in AQ_PmaReserved_17Register_CAL */
#define AQ_PmaReserved_17Register_CAL_reserved17 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved17 in AQ_PmaReserved_17Register_CAL */
#define bits_AQ_PmaReserved_17Register_CAL_reserved17 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved17 in AQ_PmaReserved_17Register_CAL */
#define word_AQ_PmaReserved_17Register_CAL_reserved17 u0.word_0

/*! \brief Base register address of structure AQ_PmaReserved_18Register_CAL */
#define AQ_PmaReserved_18Register_CAL_baseRegisterAddress 0x0018
/*! \brief MMD address of structure AQ_PmaReserved_18Register_CAL */
#define AQ_PmaReserved_18Register_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reserved18 in AQ_PmaReserved_18Register_CAL */
#define AQ_PmaReserved_18Register_CAL_reserved18 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved18 in AQ_PmaReserved_18Register_CAL */
#define bits_AQ_PmaReserved_18Register_CAL_reserved18 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved18 in AQ_PmaReserved_18Register_CAL */
#define word_AQ_PmaReserved_18Register_CAL_reserved18 u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_Status_CAL */
#define AQ_Pma10GBaseT_Status_CAL_baseRegisterAddress 0x0081
/*! \brief MMD address of structure AQ_Pma10GBaseT_Status_CAL */
#define AQ_Pma10GBaseT_Status_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure linkPartnerInformationValid in AQ_Pma10GBaseT_Status_CAL */
#define AQ_Pma10GBaseT_Status_CAL_linkPartnerInformationValid 0
/*! \brief Preprocessor variable to relate field to bit position in structure linkPartnerInformationValid in AQ_Pma10GBaseT_Status_CAL */
#define bits_AQ_Pma10GBaseT_Status_CAL_linkPartnerInformationValid u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure linkPartnerInformationValid in AQ_Pma10GBaseT_Status_CAL */
#define word_AQ_Pma10GBaseT_Status_CAL_linkPartnerInformationValid u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL */
#define AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL_baseRegisterAddress 0x0082
/*! \brief MMD address of structure AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL */
#define AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure pairPolarity in AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL */
#define AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL_pairPolarity 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairPolarity in AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL */
#define bits_AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL_pairPolarity u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairPolarity in AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL */
#define word_AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL_pairPolarity u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mdi_Md_xConnectionState in AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL */
#define AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL_mdi_Md_xConnectionState 0
/*! \brief Preprocessor variable to relate field to bit position in structure mdi_Md_xConnectionState in AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL */
#define bits_AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL_mdi_Md_xConnectionState u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mdi_Md_xConnectionState in AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL */
#define word_AQ_Pma10GBaseT_PairSwapAndPolarityStatus_CAL_mdi_Md_xConnectionState u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_baseRegisterAddress 0x0083
/*! \brief MMD address of structure AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure linkPartnerTxPowerBackoff in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_linkPartnerTxPowerBackoff 0
/*! \brief Preprocessor variable to relate field to bit position in structure linkPartnerTxPowerBackoff in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define bits_AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_linkPartnerTxPowerBackoff u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure linkPartnerTxPowerBackoff in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define word_AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_linkPartnerTxPowerBackoff u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure txPowerBackoff in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_txPowerBackoff 0
/*! \brief Preprocessor variable to relate field to bit position in structure txPowerBackoff in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define bits_AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_txPowerBackoff u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txPowerBackoff in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define word_AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_txPowerBackoff u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved83 in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_reserved83 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved83 in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define bits_AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_reserved83 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved83 in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define word_AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_reserved83 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure shortReachMode in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_shortReachMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure shortReachMode in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define bits_AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_shortReachMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure shortReachMode in AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL */
#define word_AQ_Pma10GBaseT_TxPowerBackoffAndShortReachSetting_CAL_shortReachMode u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_TestModes_CAL */
#define AQ_Pma10GBaseT_TestModes_CAL_baseRegisterAddress 0x0084
/*! \brief MMD address of structure AQ_Pma10GBaseT_TestModes_CAL */
#define AQ_Pma10GBaseT_TestModes_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure testModeControl in AQ_Pma10GBaseT_TestModes_CAL */
#define AQ_Pma10GBaseT_TestModes_CAL_testModeControl 0
/*! \brief Preprocessor variable to relate field to bit position in structure testModeControl in AQ_Pma10GBaseT_TestModes_CAL */
#define bits_AQ_Pma10GBaseT_TestModes_CAL_testModeControl u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testModeControl in AQ_Pma10GBaseT_TestModes_CAL */
#define word_AQ_Pma10GBaseT_TestModes_CAL_testModeControl u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitterTestFrequencies in AQ_Pma10GBaseT_TestModes_CAL */
#define AQ_Pma10GBaseT_TestModes_CAL_transmitterTestFrequencies 0
/*! \brief Preprocessor variable to relate field to bit position in structure transmitterTestFrequencies in AQ_Pma10GBaseT_TestModes_CAL */
#define bits_AQ_Pma10GBaseT_TestModes_CAL_transmitterTestFrequencies u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure transmitterTestFrequencies in AQ_Pma10GBaseT_TestModes_CAL */
#define word_AQ_Pma10GBaseT_TestModes_CAL_transmitterTestFrequencies u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL_baseRegisterAddress 0x0085
/*! \brief MMD address of structure AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelAOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL_channelAOperatingMargin 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelAOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL */
#define bits_AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL_channelAOperatingMargin u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelAOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL */
#define word_AQ_Pma10GBaseT_SNR_OperatingMarginChannelA_CAL_channelAOperatingMargin u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL_baseRegisterAddress 0x0086
/*! \brief MMD address of structure AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelBOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL_channelBOperatingMargin 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelBOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL */
#define bits_AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL_channelBOperatingMargin u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelBOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL */
#define word_AQ_Pma10GBaseT_SNR_OperatingMarginChannelB_CAL_channelBOperatingMargin u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL_baseRegisterAddress 0x0087
/*! \brief MMD address of structure AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelCOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL_channelCOperatingMargin 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelCOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL */
#define bits_AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL_channelCOperatingMargin u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelCOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL */
#define word_AQ_Pma10GBaseT_SNR_OperatingMarginChannelC_CAL_channelCOperatingMargin u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL_baseRegisterAddress 0x0088
/*! \brief MMD address of structure AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelDOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL */
#define AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL_channelDOperatingMargin 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelDOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL */
#define bits_AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL_channelDOperatingMargin u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelDOperatingMargin in AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL */
#define word_AQ_Pma10GBaseT_SNR_OperatingMarginChannelD_CAL_channelDOperatingMargin u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL_baseRegisterAddress 0x0089
/*! \brief MMD address of structure AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelAMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL_channelAMinimumOperatingMargin 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelAMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL */
#define bits_AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL_channelAMinimumOperatingMargin u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelAMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL */
#define word_AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelA_CAL_channelAMinimumOperatingMargin u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL_baseRegisterAddress 0x008A
/*! \brief MMD address of structure AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelBMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL_channelBMinimumOperatingMargin 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelBMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL */
#define bits_AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL_channelBMinimumOperatingMargin u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelBMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL */
#define word_AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelB_CAL_channelBMinimumOperatingMargin u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL_baseRegisterAddress 0x008B
/*! \brief MMD address of structure AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelCMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL_channelCMinimumOperatingMargin 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelCMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL */
#define bits_AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL_channelCMinimumOperatingMargin u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelCMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL */
#define word_AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelC_CAL_channelCMinimumOperatingMargin u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL_baseRegisterAddress 0x008C
/*! \brief MMD address of structure AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelDMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL */
#define AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL_channelDMinimumOperatingMargin 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelDMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL */
#define bits_AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL_channelDMinimumOperatingMargin u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelDMinimumOperatingMargin in AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL */
#define word_AQ_Pma10GBaseT_SNR_MinimumOperatingMarginChannelD_CAL_channelDMinimumOperatingMargin u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL_baseRegisterAddress 0x008D
/*! \brief MMD address of structure AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelAReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL_channelAReceivedSignalPower 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelAReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL */
#define bits_AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL_channelAReceivedSignalPower u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelAReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL */
#define word_AQ_Pma10GBaseT_ReceiveSignalPowerChannelA_CAL_channelAReceivedSignalPower u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL_baseRegisterAddress 0x008E
/*! \brief MMD address of structure AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelBReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL_channelBReceivedSignalPower 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelBReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL */
#define bits_AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL_channelBReceivedSignalPower u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelBReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL */
#define word_AQ_Pma10GBaseT_ReceiveSignalPowerChannelB_CAL_channelBReceivedSignalPower u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL_baseRegisterAddress 0x008F
/*! \brief MMD address of structure AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelCReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL_channelCReceivedSignalPower 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelCReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL */
#define bits_AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL_channelCReceivedSignalPower u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelCReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL */
#define word_AQ_Pma10GBaseT_ReceiveSignalPowerChannelC_CAL_channelCReceivedSignalPower u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL_baseRegisterAddress 0x0090
/*! \brief MMD address of structure AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure channelDReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL */
#define AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL_channelDReceivedSignalPower 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelDReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL */
#define bits_AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL_channelDReceivedSignalPower u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelDReceivedSignalPower in AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL */
#define word_AQ_Pma10GBaseT_ReceiveSignalPowerChannelD_CAL_channelDReceivedSignalPower u0.word_0

/*! \brief Base register address of structure AQ_Pma10GBaseT_SkewDelay_CAL */
#define AQ_Pma10GBaseT_SkewDelay_CAL_baseRegisterAddress 0x0091
/*! \brief MMD address of structure AQ_Pma10GBaseT_SkewDelay_CAL */
#define AQ_Pma10GBaseT_SkewDelay_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure skewDelayB in AQ_Pma10GBaseT_SkewDelay_CAL */
#define AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayB 0
/*! \brief Preprocessor variable to relate field to bit position in structure skewDelayB in AQ_Pma10GBaseT_SkewDelay_CAL */
#define bits_AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayB u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure skewDelayB in AQ_Pma10GBaseT_SkewDelay_CAL */
#define word_AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayB u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure skewDelayD in AQ_Pma10GBaseT_SkewDelay_CAL */
#define AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayD 1
/*! \brief Preprocessor variable to relate field to bit position in structure skewDelayD in AQ_Pma10GBaseT_SkewDelay_CAL */
#define bits_AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayD u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure skewDelayD in AQ_Pma10GBaseT_SkewDelay_CAL */
#define word_AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayD u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure skewDelayC in AQ_Pma10GBaseT_SkewDelay_CAL */
#define AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayC 1
/*! \brief Preprocessor variable to relate field to bit position in structure skewDelayC in AQ_Pma10GBaseT_SkewDelay_CAL */
#define bits_AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayC u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure skewDelayC in AQ_Pma10GBaseT_SkewDelay_CAL */
#define word_AQ_Pma10GBaseT_SkewDelay_CAL_skewDelayC u1.word_1

/*! \brief Base register address of structure AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_baseRegisterAddress 0x0093
/*! \brief MMD address of structure AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure lpFastRetrainCount in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_lpFastRetrainCount 0
/*! \brief Preprocessor variable to relate field to bit position in structure lpFastRetrainCount in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define bits_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_lpFastRetrainCount u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lpFastRetrainCount in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define word_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_lpFastRetrainCount u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ldFastRetrainCount in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_ldFastRetrainCount 0
/*! \brief Preprocessor variable to relate field to bit position in structure ldFastRetrainCount in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define bits_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_ldFastRetrainCount u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ldFastRetrainCount in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define word_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_ldFastRetrainCount u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved93 in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_reserved93 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved93 in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define bits_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_reserved93 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved93 in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define word_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_reserved93 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure fastRetrainAbility in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainAbility 0
/*! \brief Preprocessor variable to relate field to bit position in structure fastRetrainAbility in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define bits_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainAbility u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure fastRetrainAbility in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define word_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainAbility u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure fastRetrainNegotiated in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainNegotiated 0
/*! \brief Preprocessor variable to relate field to bit position in structure fastRetrainNegotiated in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define bits_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainNegotiated u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure fastRetrainNegotiated in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define word_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainNegotiated u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure fastRetrainSignalType in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainSignalType 0
/*! \brief Preprocessor variable to relate field to bit position in structure fastRetrainSignalType in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define bits_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainSignalType u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure fastRetrainSignalType in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define word_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainSignalType u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure fastRetrainEnable in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure fastRetrainEnable in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define bits_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure fastRetrainEnable in AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL */
#define word_AQ_Pma10GBaseT_FastRetrainStatusAndControl_CAL_fastRetrainEnable u0.word_0

/*! \brief Base register address of structure AQ_TimesyncPmaCapability_CAL */
#define AQ_TimesyncPmaCapability_CAL_baseRegisterAddress 0x0708
/*! \brief MMD address of structure AQ_TimesyncPmaCapability_CAL */
#define AQ_TimesyncPmaCapability_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure timesyncTransmitPathDataDelay in AQ_TimesyncPmaCapability_CAL */
#define AQ_TimesyncPmaCapability_CAL_timesyncTransmitPathDataDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure timesyncTransmitPathDataDelay in AQ_TimesyncPmaCapability_CAL */
#define bits_AQ_TimesyncPmaCapability_CAL_timesyncTransmitPathDataDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure timesyncTransmitPathDataDelay in AQ_TimesyncPmaCapability_CAL */
#define word_AQ_TimesyncPmaCapability_CAL_timesyncTransmitPathDataDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure timesyncReceivePathDataDelay in AQ_TimesyncPmaCapability_CAL */
#define AQ_TimesyncPmaCapability_CAL_timesyncReceivePathDataDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure timesyncReceivePathDataDelay in AQ_TimesyncPmaCapability_CAL */
#define bits_AQ_TimesyncPmaCapability_CAL_timesyncReceivePathDataDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure timesyncReceivePathDataDelay in AQ_TimesyncPmaCapability_CAL */
#define word_AQ_TimesyncPmaCapability_CAL_timesyncReceivePathDataDelay u0.word_0

/*! \brief Base register address of structure AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define AQ_TimesyncPmaTransmitPathDataDelay_CAL_baseRegisterAddress 0x0709
/*! \brief MMD address of structure AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define AQ_TimesyncPmaTransmitPathDataDelay_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure maximumPmaTransmitPathDataDelayLSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define AQ_TimesyncPmaTransmitPathDataDelay_CAL_maximumPmaTransmitPathDataDelayLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPmaTransmitPathDataDelayLSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define bits_AQ_TimesyncPmaTransmitPathDataDelay_CAL_maximumPmaTransmitPathDataDelayLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure maximumPmaTransmitPathDataDelayLSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define word_AQ_TimesyncPmaTransmitPathDataDelay_CAL_maximumPmaTransmitPathDataDelayLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure maximumPmaTransmitPathDataDelayMSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define AQ_TimesyncPmaTransmitPathDataDelay_CAL_maximumPmaTransmitPathDataDelayMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPmaTransmitPathDataDelayMSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define bits_AQ_TimesyncPmaTransmitPathDataDelay_CAL_maximumPmaTransmitPathDataDelayMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure maximumPmaTransmitPathDataDelayMSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define word_AQ_TimesyncPmaTransmitPathDataDelay_CAL_maximumPmaTransmitPathDataDelayMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure minimumPmaTransmitPathDataDelayLSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define AQ_TimesyncPmaTransmitPathDataDelay_CAL_minimumPmaTransmitPathDataDelayLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPmaTransmitPathDataDelayLSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define bits_AQ_TimesyncPmaTransmitPathDataDelay_CAL_minimumPmaTransmitPathDataDelayLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure minimumPmaTransmitPathDataDelayLSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define word_AQ_TimesyncPmaTransmitPathDataDelay_CAL_minimumPmaTransmitPathDataDelayLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure minimumPmaTransmitPathDataDelayMSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define AQ_TimesyncPmaTransmitPathDataDelay_CAL_minimumPmaTransmitPathDataDelayMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPmaTransmitPathDataDelayMSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define bits_AQ_TimesyncPmaTransmitPathDataDelay_CAL_minimumPmaTransmitPathDataDelayMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure minimumPmaTransmitPathDataDelayMSW in AQ_TimesyncPmaTransmitPathDataDelay_CAL */
#define word_AQ_TimesyncPmaTransmitPathDataDelay_CAL_minimumPmaTransmitPathDataDelayMSW u3.word_3

/*! \brief Base register address of structure AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define AQ_TimesyncPmaReceivePathDataDelay_CAL_baseRegisterAddress 0x070D
/*! \brief MMD address of structure AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define AQ_TimesyncPmaReceivePathDataDelay_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure maximumPmaReceivePathDataDelayLSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define AQ_TimesyncPmaReceivePathDataDelay_CAL_maximumPmaReceivePathDataDelayLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPmaReceivePathDataDelayLSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define bits_AQ_TimesyncPmaReceivePathDataDelay_CAL_maximumPmaReceivePathDataDelayLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure maximumPmaReceivePathDataDelayLSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define word_AQ_TimesyncPmaReceivePathDataDelay_CAL_maximumPmaReceivePathDataDelayLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure maximumPmaReceivePathDataDelayMSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define AQ_TimesyncPmaReceivePathDataDelay_CAL_maximumPmaReceivePathDataDelayMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure maximumPmaReceivePathDataDelayMSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define bits_AQ_TimesyncPmaReceivePathDataDelay_CAL_maximumPmaReceivePathDataDelayMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure maximumPmaReceivePathDataDelayMSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define word_AQ_TimesyncPmaReceivePathDataDelay_CAL_maximumPmaReceivePathDataDelayMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure minimumPmaReceivePathDataDelayLSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define AQ_TimesyncPmaReceivePathDataDelay_CAL_minimumPmaReceivePathDataDelayLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPmaReceivePathDataDelayLSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define bits_AQ_TimesyncPmaReceivePathDataDelay_CAL_minimumPmaReceivePathDataDelayLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure minimumPmaReceivePathDataDelayLSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define word_AQ_TimesyncPmaReceivePathDataDelay_CAL_minimumPmaReceivePathDataDelayLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure minimumPmaReceivePathDataDelayMSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define AQ_TimesyncPmaReceivePathDataDelay_CAL_minimumPmaReceivePathDataDelayMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure minimumPmaReceivePathDataDelayMSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define bits_AQ_TimesyncPmaReceivePathDataDelay_CAL_minimumPmaReceivePathDataDelayMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure minimumPmaReceivePathDataDelayMSW in AQ_TimesyncPmaReceivePathDataDelay_CAL */
#define word_AQ_TimesyncPmaReceivePathDataDelay_CAL_minimumPmaReceivePathDataDelayMSW u3.word_3

/*! \brief Base register address of structure AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_baseRegisterAddress 0xC412
/*! \brief MMD address of structure AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure testModeRate in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeRate 0
/*! \brief Preprocessor variable to relate field to bit position in structure testModeRate in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeRate u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure testModeRate in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeRate u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedSpareTransmitProvisioning_0 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSpareTransmitProvisioning_0 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSpareTransmitProvisioning_0 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure txPolarityInvertEnable in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_txPolarityInvertEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure txPolarityInvertEnable in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_txPolarityInvertEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure txPolarityInvertEnable in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_txPolarityInvertEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure channelMask in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_channelMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure channelMask in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_channelMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure channelMask in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_channelMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedSpareTransmitProvisioning_1 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSpareTransmitProvisioning_1 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedSpareTransmitProvisioning_1 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure incrementalTxPsdTarget in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_incrementalTxPsdTarget 1
/*! \brief Preprocessor variable to relate field to bit position in structure incrementalTxPsdTarget in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_incrementalTxPsdTarget u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure incrementalTxPsdTarget in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_incrementalTxPsdTarget u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedSpareTransmitProvisioning_11 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_11 8
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSpareTransmitProvisioning_11 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_11 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure reservedSpareTransmitProvisioning_11 in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_reservedSpareTransmitProvisioning_11 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure testModeBaudRate in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeBaudRate 8
/*! \brief Preprocessor variable to relate field to bit position in structure testModeBaudRate in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeBaudRate u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure testModeBaudRate in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeBaudRate u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure testModeConstellation in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeConstellation 8
/*! \brief Preprocessor variable to relate field to bit position in structure testModeConstellation in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeConstellation u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure testModeConstellation in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeConstellation u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure testModeActivePairDisableMask in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeActivePairDisableMask 8
/*! \brief Preprocessor variable to relate field to bit position in structure testModeActivePairDisableMask in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define bits_AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeActivePairDisableMask u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure testModeActivePairDisableMask in AQ_PmaTransmitReservedVendorProvisioning_CAL */
#define word_AQ_PmaTransmitReservedVendorProvisioning_CAL_testModeActivePairDisableMask u8.word_8

/*! \brief Base register address of structure AQ_PmaTransmitVendorAlarms_CAL */
#define AQ_PmaTransmitVendorAlarms_CAL_baseRegisterAddress 0xCC00
/*! \brief MMD address of structure AQ_PmaTransmitVendorAlarms_CAL */
#define AQ_PmaTransmitVendorAlarms_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure reservedPmaTransmitAlarms_3 in AQ_PmaTransmitVendorAlarms_CAL */
#define AQ_PmaTransmitVendorAlarms_CAL_reservedPmaTransmitAlarms_3 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPmaTransmitAlarms_3 in AQ_PmaTransmitVendorAlarms_CAL */
#define bits_AQ_PmaTransmitVendorAlarms_CAL_reservedPmaTransmitAlarms_3 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedPmaTransmitAlarms_3 in AQ_PmaTransmitVendorAlarms_CAL */
#define word_AQ_PmaTransmitVendorAlarms_CAL_reservedPmaTransmitAlarms_3 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure zero in AQ_PmaTransmitVendorAlarms_CAL */
#define AQ_PmaTransmitVendorAlarms_CAL_zero 2
/*! \brief Preprocessor variable to relate field to bit position in structure zero in AQ_PmaTransmitVendorAlarms_CAL */
#define bits_AQ_PmaTransmitVendorAlarms_CAL_zero u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure zero in AQ_PmaTransmitVendorAlarms_CAL */
#define word_AQ_PmaTransmitVendorAlarms_CAL_zero u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure resetComplete in AQ_PmaTransmitVendorAlarms_CAL */
#define AQ_PmaTransmitVendorAlarms_CAL_resetComplete 2
/*! \brief Preprocessor variable to relate field to bit position in structure resetComplete in AQ_PmaTransmitVendorAlarms_CAL */
#define bits_AQ_PmaTransmitVendorAlarms_CAL_resetComplete u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure resetComplete in AQ_PmaTransmitVendorAlarms_CAL */
#define word_AQ_PmaTransmitVendorAlarms_CAL_resetComplete u2.word_2

/*! \brief Base register address of structure AQ_PmaTransmitStandardInterruptMask_CAL */
#define AQ_PmaTransmitStandardInterruptMask_CAL_baseRegisterAddress 0xD000
/*! \brief MMD address of structure AQ_PmaTransmitStandardInterruptMask_CAL */
#define AQ_PmaTransmitStandardInterruptMask_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure pmaReceiveLinkStatusMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define AQ_PmaTransmitStandardInterruptMask_CAL_pmaReceiveLinkStatusMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaReceiveLinkStatusMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define bits_AQ_PmaTransmitStandardInterruptMask_CAL_pmaReceiveLinkStatusMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaReceiveLinkStatusMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define word_AQ_PmaTransmitStandardInterruptMask_CAL_pmaReceiveLinkStatusMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure transmitFaultMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define AQ_PmaTransmitStandardInterruptMask_CAL_transmitFaultMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure transmitFaultMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define bits_AQ_PmaTransmitStandardInterruptMask_CAL_transmitFaultMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure transmitFaultMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define word_AQ_PmaTransmitStandardInterruptMask_CAL_transmitFaultMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure receiveFaultMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define AQ_PmaTransmitStandardInterruptMask_CAL_receiveFaultMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure receiveFaultMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define bits_AQ_PmaTransmitStandardInterruptMask_CAL_receiveFaultMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure receiveFaultMask in AQ_PmaTransmitStandardInterruptMask_CAL */
#define word_AQ_PmaTransmitStandardInterruptMask_CAL_receiveFaultMask u1.word_1

/*! \brief Base register address of structure AQ_PmaTransmitVendorLASI_InterruptMask_CAL */
#define AQ_PmaTransmitVendorLASI_InterruptMask_CAL_baseRegisterAddress 0xD400
/*! \brief MMD address of structure AQ_PmaTransmitVendorLASI_InterruptMask_CAL */
#define AQ_PmaTransmitVendorLASI_InterruptMask_CAL_mmdAddress 0x01

/*! \brief Base register address of structure AQ_PmaTransmitVendorDebug_CAL */
#define AQ_PmaTransmitVendorDebug_CAL_baseRegisterAddress 0xD800
/*! \brief MMD address of structure AQ_PmaTransmitVendorDebug_CAL */
#define AQ_PmaTransmitVendorDebug_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure pmaDigitalSystemLoopback in AQ_PmaTransmitVendorDebug_CAL */
#define AQ_PmaTransmitVendorDebug_CAL_pmaDigitalSystemLoopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaDigitalSystemLoopback in AQ_PmaTransmitVendorDebug_CAL */
#define bits_AQ_PmaTransmitVendorDebug_CAL_pmaDigitalSystemLoopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaDigitalSystemLoopback in AQ_PmaTransmitVendorDebug_CAL */
#define word_AQ_PmaTransmitVendorDebug_CAL_pmaDigitalSystemLoopback u0.word_0

/*! \brief Base register address of structure AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define AQ_PmaReceiveReservedVendorProvisioning_CAL_baseRegisterAddress 0xE400
/*! \brief MMD address of structure AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define AQ_PmaReceiveReservedVendorProvisioning_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure externalPhyLoopback in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define AQ_PmaReceiveReservedVendorProvisioning_CAL_externalPhyLoopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure externalPhyLoopback in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define bits_AQ_PmaReceiveReservedVendorProvisioning_CAL_externalPhyLoopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure externalPhyLoopback in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define word_AQ_PmaReceiveReservedVendorProvisioning_CAL_externalPhyLoopback u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedReceiveProvisioning_1 in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define AQ_PmaReceiveReservedVendorProvisioning_CAL_reservedReceiveProvisioning_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedReceiveProvisioning_1 in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define bits_AQ_PmaReceiveReservedVendorProvisioning_CAL_reservedReceiveProvisioning_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedReceiveProvisioning_1 in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define word_AQ_PmaReceiveReservedVendorProvisioning_CAL_reservedReceiveProvisioning_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure enableAquantiaFastRetrain in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define AQ_PmaReceiveReservedVendorProvisioning_CAL_enableAquantiaFastRetrain 0
/*! \brief Preprocessor variable to relate field to bit position in structure enableAquantiaFastRetrain in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define bits_AQ_PmaReceiveReservedVendorProvisioning_CAL_enableAquantiaFastRetrain u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure enableAquantiaFastRetrain in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define word_AQ_PmaReceiveReservedVendorProvisioning_CAL_enableAquantiaFastRetrain u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure forceMdiConfiguration in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define AQ_PmaReceiveReservedVendorProvisioning_CAL_forceMdiConfiguration 0
/*! \brief Preprocessor variable to relate field to bit position in structure forceMdiConfiguration in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define bits_AQ_PmaReceiveReservedVendorProvisioning_CAL_forceMdiConfiguration u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure forceMdiConfiguration in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define word_AQ_PmaReceiveReservedVendorProvisioning_CAL_forceMdiConfiguration u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mdiConfiguration in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define AQ_PmaReceiveReservedVendorProvisioning_CAL_mdiConfiguration 0
/*! \brief Preprocessor variable to relate field to bit position in structure mdiConfiguration in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define bits_AQ_PmaReceiveReservedVendorProvisioning_CAL_mdiConfiguration u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mdiConfiguration in AQ_PmaReceiveReservedVendorProvisioning_CAL */
#define word_AQ_PmaReceiveReservedVendorProvisioning_CAL_mdiConfiguration u0.word_0

/*! \brief Base register address of structure AQ_PmaReceiveVendorState_CAL */
#define AQ_PmaReceiveVendorState_CAL_baseRegisterAddress 0xE800
/*! \brief MMD address of structure AQ_PmaReceiveVendorState_CAL */
#define AQ_PmaReceiveVendorState_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure pmaReceiveLinkCurrentStatus in AQ_PmaReceiveVendorState_CAL */
#define AQ_PmaReceiveVendorState_CAL_pmaReceiveLinkCurrentStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaReceiveLinkCurrentStatus in AQ_PmaReceiveVendorState_CAL */
#define bits_AQ_PmaReceiveVendorState_CAL_pmaReceiveLinkCurrentStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaReceiveLinkCurrentStatus in AQ_PmaReceiveVendorState_CAL */
#define word_AQ_PmaReceiveVendorState_CAL_pmaReceiveLinkCurrentStatus u0.word_0

/*! \brief Base register address of structure AQ_PmaReceiveReservedVendorState_CAL */
#define AQ_PmaReceiveReservedVendorState_CAL_baseRegisterAddress 0xE810
/*! \brief MMD address of structure AQ_PmaReceiveReservedVendorState_CAL */
#define AQ_PmaReceiveReservedVendorState_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure accumulatedFastRetrainTime in AQ_PmaReceiveReservedVendorState_CAL */
#define AQ_PmaReceiveReservedVendorState_CAL_accumulatedFastRetrainTime 0
/*! \brief Preprocessor variable to relate field to bit position in structure accumulatedFastRetrainTime in AQ_PmaReceiveReservedVendorState_CAL */
#define bits_AQ_PmaReceiveReservedVendorState_CAL_accumulatedFastRetrainTime u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure accumulatedFastRetrainTime in AQ_PmaReceiveReservedVendorState_CAL */
#define word_AQ_PmaReceiveReservedVendorState_CAL_accumulatedFastRetrainTime u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure totalNumberOfLinkRecoveryEventsSinceLastAutoneg in AQ_PmaReceiveReservedVendorState_CAL */
#define AQ_PmaReceiveReservedVendorState_CAL_totalNumberOfLinkRecoveryEventsSinceLastAutoneg 1
/*! \brief Preprocessor variable to relate field to bit position in structure totalNumberOfLinkRecoveryEventsSinceLastAutoneg in AQ_PmaReceiveReservedVendorState_CAL */
#define bits_AQ_PmaReceiveReservedVendorState_CAL_totalNumberOfLinkRecoveryEventsSinceLastAutoneg u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure totalNumberOfLinkRecoveryEventsSinceLastAutoneg in AQ_PmaReceiveReservedVendorState_CAL */
#define word_AQ_PmaReceiveReservedVendorState_CAL_totalNumberOfLinkRecoveryEventsSinceLastAutoneg u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure totalNumberOfRfiTrainingLinkRecoveryEventsSinceLastAutoneg in AQ_PmaReceiveReservedVendorState_CAL */
#define AQ_PmaReceiveReservedVendorState_CAL_totalNumberOfRfiTrainingLinkRecoveryEventsSinceLastAutoneg 1
/*! \brief Preprocessor variable to relate field to bit position in structure totalNumberOfRfiTrainingLinkRecoveryEventsSinceLastAutoneg in AQ_PmaReceiveReservedVendorState_CAL */
#define bits_AQ_PmaReceiveReservedVendorState_CAL_totalNumberOfRfiTrainingLinkRecoveryEventsSinceLastAutoneg u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure totalNumberOfRfiTrainingLinkRecoveryEventsSinceLastAutoneg in AQ_PmaReceiveReservedVendorState_CAL */
#define word_AQ_PmaReceiveReservedVendorState_CAL_totalNumberOfRfiTrainingLinkRecoveryEventsSinceLastAutoneg u1.word_1

/*! \brief Base register address of structure AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_baseRegisterAddress 0xFA00
/*! \brief MMD address of structure AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aec_3ErrorPhaseSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aec_3ErrorPhaseSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aec_3ErrorPhaseSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aec_2ErrorPhaseSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aec_2ErrorPhaseSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aec_2ErrorPhaseSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aec_1ErrorPhaseSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aec_1ErrorPhaseSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aec_1ErrorPhaseSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aec_0ErrorPhaseSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aec_0ErrorPhaseSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0ErrorPhaseSelect in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aec_0ErrorPhaseSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure oversampleErrorSelect in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_oversampleErrorSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure oversampleErrorSelect in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_oversampleErrorSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure oversampleErrorSelect in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_oversampleErrorSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aecFilterClockMode in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aecFilterClockMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure aecFilterClockMode in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aecFilterClockMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aecFilterClockMode in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aecFilterClockMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aecFilterTapMode in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aecFilterTapMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure aecFilterTapMode in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aecFilterTapMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aecFilterTapMode in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aecFilterTapMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aecAsrDataMuxSelect in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aecAsrDataMuxSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure aecAsrDataMuxSelect in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aecAsrDataMuxSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aecAsrDataMuxSelect in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aecAsrDataMuxSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aecMMD_DisableMcpClearOnRead in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aecMMD_DisableMcpClearOnRead 2
/*! \brief Preprocessor variable to relate field to bit position in structure aecMMD_DisableMcpClearOnRead in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aecMMD_DisableMcpClearOnRead u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aecMMD_DisableMcpClearOnRead in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aecMMD_DisableMcpClearOnRead u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aecGlobalFilterFreeze in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_aecGlobalFilterFreeze 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecGlobalFilterFreeze in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_aecGlobalFilterFreeze u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecGlobalFilterFreeze in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_aecGlobalFilterFreeze u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure asrInAec_3FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_asrInAec_3FifoReset 4
/*! \brief Preprocessor variable to relate field to bit position in structure asrInAec_3FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_asrInAec_3FifoReset u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure asrInAec_3FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_asrInAec_3FifoReset u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure asrInAec_2FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_asrInAec_2FifoReset 4
/*! \brief Preprocessor variable to relate field to bit position in structure asrInAec_2FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_asrInAec_2FifoReset u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure asrInAec_2FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_asrInAec_2FifoReset u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure asrInAec_1FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_asrInAec_1FifoReset 4
/*! \brief Preprocessor variable to relate field to bit position in structure asrInAec_1FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_asrInAec_1FifoReset u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure asrInAec_1FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_asrInAec_1FifoReset u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure asrInAec_0FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_asrInAec_0FifoReset 4
/*! \brief Preprocessor variable to relate field to bit position in structure asrInAec_0FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_asrInAec_0FifoReset u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure asrInAec_0FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_asrInAec_0FifoReset u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure afo_128OutAec_3FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_afo_128OutAec_3FifoReset 5
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128OutAec_3FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_afo_128OutAec_3FifoReset u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure afo_128OutAec_3FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_afo_128OutAec_3FifoReset u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure afo_128OutAec_2FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_afo_128OutAec_2FifoReset 5
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128OutAec_2FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_afo_128OutAec_2FifoReset u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure afo_128OutAec_2FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_afo_128OutAec_2FifoReset u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure afo_128OutAec_1FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_afo_128OutAec_1FifoReset 5
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128OutAec_1FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_afo_128OutAec_1FifoReset u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure afo_128OutAec_1FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_afo_128OutAec_1FifoReset u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure afo_128OutAec_0FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_afo_128OutAec_0FifoReset 5
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128OutAec_0FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_afo_128OutAec_0FifoReset u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure afo_128OutAec_0FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_afo_128OutAec_0FifoReset u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure afo_64OutAec_3FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_afo_64OutAec_3FifoReset 6
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64OutAec_3FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_afo_64OutAec_3FifoReset u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure afo_64OutAec_3FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_afo_64OutAec_3FifoReset u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure afo_64OutAec_2FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_afo_64OutAec_2FifoReset 6
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64OutAec_2FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_afo_64OutAec_2FifoReset u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure afo_64OutAec_2FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_afo_64OutAec_2FifoReset u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure afo_64OutAec_1FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_afo_64OutAec_1FifoReset 6
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64OutAec_1FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_afo_64OutAec_1FifoReset u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure afo_64OutAec_1FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_afo_64OutAec_1FifoReset u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure afo_64OutAec_0FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_afo_64OutAec_0FifoReset 6
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64OutAec_0FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_afo_64OutAec_0FifoReset u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure afo_64OutAec_0FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_afo_64OutAec_0FifoReset u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_3FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_errorInAec_3FifoReset 7
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_3FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_errorInAec_3FifoReset u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_3FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_errorInAec_3FifoReset u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_2FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_errorInAec_2FifoReset 7
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_2FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_errorInAec_2FifoReset u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_2FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_errorInAec_2FifoReset u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_1FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_errorInAec_1FifoReset 7
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_1FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_errorInAec_1FifoReset u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_1FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_errorInAec_1FifoReset u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_0FifoReset in AQ_AecModeControl_CAL */
#define AQ_AecModeControl_CAL_errorInAec_0FifoReset 7
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_0FifoReset in AQ_AecModeControl_CAL */
#define bits_AQ_AecModeControl_CAL_errorInAec_0FifoReset u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_0FifoReset in AQ_AecModeControl_CAL */
#define word_AQ_AecModeControl_CAL_errorInAec_0FifoReset u7.word_7

/*! \brief Base register address of structure AQ_AecGenericCycleCountControl_CAL */
#define AQ_AecGenericCycleCountControl_CAL_baseRegisterAddress 0xFA0A
/*! \brief MMD address of structure AQ_AecGenericCycleCountControl_CAL */
#define AQ_AecGenericCycleCountControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure cycleCounterStart in AQ_AecGenericCycleCountControl_CAL */
#define AQ_AecGenericCycleCountControl_CAL_cycleCounterStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure cycleCounterStart in AQ_AecGenericCycleCountControl_CAL */
#define bits_AQ_AecGenericCycleCountControl_CAL_cycleCounterStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure cycleCounterStart in AQ_AecGenericCycleCountControl_CAL */
#define word_AQ_AecGenericCycleCountControl_CAL_cycleCounterStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aecCycleCountValue in AQ_AecGenericCycleCountControl_CAL */
#define AQ_AecGenericCycleCountControl_CAL_aecCycleCountValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure aecCycleCountValue in AQ_AecGenericCycleCountControl_CAL */
#define bits_AQ_AecGenericCycleCountControl_CAL_aecCycleCountValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aecCycleCountValue in AQ_AecGenericCycleCountControl_CAL */
#define word_AQ_AecGenericCycleCountControl_CAL_aecCycleCountValue u1.word_1

/*! \brief Base register address of structure AQ_AecGlobalMemoryControl_CAL */
#define AQ_AecGlobalMemoryControl_CAL_baseRegisterAddress 0xFA0C
/*! \brief MMD address of structure AQ_AecGlobalMemoryControl_CAL */
#define AQ_AecGlobalMemoryControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aecSramCheckParitySense in AQ_AecGlobalMemoryControl_CAL */
#define AQ_AecGlobalMemoryControl_CAL_aecSramCheckParitySense 0
/*! \brief Preprocessor variable to relate field to bit position in structure aecSramCheckParitySense in AQ_AecGlobalMemoryControl_CAL */
#define bits_AQ_AecGlobalMemoryControl_CAL_aecSramCheckParitySense u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aecSramCheckParitySense in AQ_AecGlobalMemoryControl_CAL */
#define word_AQ_AecGlobalMemoryControl_CAL_aecSramCheckParitySense u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aecSramPowerGatingEnable in AQ_AecGlobalMemoryControl_CAL */
#define AQ_AecGlobalMemoryControl_CAL_aecSramPowerGatingEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aecSramPowerGatingEnable in AQ_AecGlobalMemoryControl_CAL */
#define bits_AQ_AecGlobalMemoryControl_CAL_aecSramPowerGatingEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aecSramPowerGatingEnable in AQ_AecGlobalMemoryControl_CAL */
#define word_AQ_AecGlobalMemoryControl_CAL_aecSramPowerGatingEnable u0.word_0

/*! \brief Base register address of structure AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_baseRegisterAddress 0xFA0D
/*! \brief MMD address of structure AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aec_3Error_dataDelayDetectOverrideValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aec_3Error_dataDelayDetectOverrideValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aec_3Error_dataDelayDetectOverrideValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aec_2Error_dataDelayDetectOverrideValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aec_2Error_dataDelayDetectOverrideValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aec_2Error_dataDelayDetectOverrideValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aec_1Error_dataDelayDetectOverrideValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aec_1Error_dataDelayDetectOverrideValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aec_1Error_dataDelayDetectOverrideValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aec_0Error_dataDelayDetectOverrideValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aec_0Error_dataDelayDetectOverrideValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0Error_dataDelayDetectOverrideValue in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aec_0Error_dataDelayDetectOverrideValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aec_3Error_dataDelayDetectStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aec_3Error_dataDelayDetectStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aec_3Error_dataDelayDetectStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aec_2Error_dataDelayDetectStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aec_2Error_dataDelayDetectStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aec_2Error_dataDelayDetectStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aec_1Error_dataDelayDetectStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aec_1Error_dataDelayDetectStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aec_1Error_dataDelayDetectStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aec_0Error_dataDelayDetectStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aec_0Error_dataDelayDetectStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0Error_dataDelayDetectStart in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aec_0Error_dataDelayDetectStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aecErrorThresholdValue in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aecErrorThresholdValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure aecErrorThresholdValue in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aecErrorThresholdValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aecErrorThresholdValue in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aecErrorThresholdValue u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aecErrorThresholdForceValue in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aecErrorThresholdForceValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure aecErrorThresholdForceValue in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aecErrorThresholdForceValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aecErrorThresholdForceValue in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aecErrorThresholdForceValue u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aecErrorThresholdForceEnable in AQ_AecDelayDetectionControl_CAL */
#define AQ_AecDelayDetectionControl_CAL_aecErrorThresholdForceEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aecErrorThresholdForceEnable in AQ_AecDelayDetectionControl_CAL */
#define bits_AQ_AecDelayDetectionControl_CAL_aecErrorThresholdForceEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aecErrorThresholdForceEnable in AQ_AecDelayDetectionControl_CAL */
#define word_AQ_AecDelayDetectionControl_CAL_aecErrorThresholdForceEnable u1.word_1

/*! \brief Base register address of structure AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_baseRegisterAddress 0xFA10
/*! \brief MMD address of structure AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientWriteFilterSelect in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecCoefficientWriteFilterSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientWriteFilterSelect in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecCoefficientWriteFilterSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientWriteFilterSelect in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecCoefficientWriteFilterSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dspMcpCoefficientWriteMode in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_dspMcpCoefficientWriteMode 1
/*! \brief Preprocessor variable to relate field to bit position in structure dspMcpCoefficientWriteMode in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_dspMcpCoefficientWriteMode u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure dspMcpCoefficientWriteMode in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_dspMcpCoefficientWriteMode u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientInterfaceWriteSelect in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecCoefficientInterfaceWriteSelect 1
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientInterfaceWriteSelect in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecCoefficientInterfaceWriteSelect u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientInterfaceWriteSelect in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecCoefficientInterfaceWriteSelect u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMdioWriteValueLsb in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecCoefficientMdioWriteValueLsb 2
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMdioWriteValueLsb in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecCoefficientMdioWriteValueLsb u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMdioWriteValueLsb in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecCoefficientMdioWriteValueLsb u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMdioWriteValueMsb in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecCoefficientMdioWriteValueMsb 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMdioWriteValueMsb in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecCoefficientMdioWriteValueMsb u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMdioWriteValueMsb in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecCoefficientMdioWriteValueMsb u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMcpWriteValue in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecCoefficientMcpWriteValue 4
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMcpWriteValue in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecCoefficientMcpWriteValue u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMcpWriteValue in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecCoefficientMcpWriteValue u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aecWriteCoefficientAbort in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientAbort 5
/*! \brief Preprocessor variable to relate field to bit position in structure aecWriteCoefficientAbort in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientAbort u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aecWriteCoefficientAbort in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientAbort u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aecWriteCoefficientStart in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientStart 5
/*! \brief Preprocessor variable to relate field to bit position in structure aecWriteCoefficientStart in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientStart u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aecWriteCoefficientStart in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientStart u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aecWriteCoefficientStartTap in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientStartTap 6
/*! \brief Preprocessor variable to relate field to bit position in structure aecWriteCoefficientStartTap in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientStartTap u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aecWriteCoefficientStartTap in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientStartTap u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure aecWriteCoefficientNumberOfTaps in AQ_AecCoefficientWriteControl_CAL */
#define AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientNumberOfTaps 7
/*! \brief Preprocessor variable to relate field to bit position in structure aecWriteCoefficientNumberOfTaps in AQ_AecCoefficientWriteControl_CAL */
#define bits_AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientNumberOfTaps u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure aecWriteCoefficientNumberOfTaps in AQ_AecCoefficientWriteControl_CAL */
#define word_AQ_AecCoefficientWriteControl_CAL_aecWriteCoefficientNumberOfTaps u7.word_7

/*! \brief Base register address of structure AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_baseRegisterAddress 0xFA20
/*! \brief MMD address of structure AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientReadFilterSelect in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecCoefficientReadFilterSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientReadFilterSelect in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecCoefficientReadFilterSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientReadFilterSelect in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecCoefficientReadFilterSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dspMcpCoefficientReadMode in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_dspMcpCoefficientReadMode 1
/*! \brief Preprocessor variable to relate field to bit position in structure dspMcpCoefficientReadMode in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_dspMcpCoefficientReadMode u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure dspMcpCoefficientReadMode in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_dspMcpCoefficientReadMode u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientInterfaceReadSelect in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecCoefficientInterfaceReadSelect 1
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientInterfaceReadSelect in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecCoefficientInterfaceReadSelect u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientInterfaceReadSelect in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecCoefficientInterfaceReadSelect u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMdioReadValueLsb in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecCoefficientMdioReadValueLsb 2
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMdioReadValueLsb in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecCoefficientMdioReadValueLsb u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMdioReadValueLsb in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecCoefficientMdioReadValueLsb u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMdioReadValueMsb in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecCoefficientMdioReadValueMsb 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMdioReadValueMsb in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecCoefficientMdioReadValueMsb u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMdioReadValueMsb in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecCoefficientMdioReadValueMsb u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMcpReadValue in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecCoefficientMcpReadValue 4
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMcpReadValue in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecCoefficientMcpReadValue u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMcpReadValue in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecCoefficientMcpReadValue u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aecReadCoefficientAbort in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecReadCoefficientAbort 5
/*! \brief Preprocessor variable to relate field to bit position in structure aecReadCoefficientAbort in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecReadCoefficientAbort u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aecReadCoefficientAbort in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecReadCoefficientAbort u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aecReadCoefficientStart in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecReadCoefficientStart 5
/*! \brief Preprocessor variable to relate field to bit position in structure aecReadCoefficientStart in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecReadCoefficientStart u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aecReadCoefficientStart in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecReadCoefficientStart u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aecReadCoefficientStartTap in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecReadCoefficientStartTap 6
/*! \brief Preprocessor variable to relate field to bit position in structure aecReadCoefficientStartTap in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecReadCoefficientStartTap u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aecReadCoefficientStartTap in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecReadCoefficientStartTap u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure aecReadCoefficientNumberOfTaps in AQ_AecCoefficientReadControl_CAL */
#define AQ_AecCoefficientReadControl_CAL_aecReadCoefficientNumberOfTaps 7
/*! \brief Preprocessor variable to relate field to bit position in structure aecReadCoefficientNumberOfTaps in AQ_AecCoefficientReadControl_CAL */
#define bits_AQ_AecCoefficientReadControl_CAL_aecReadCoefficientNumberOfTaps u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure aecReadCoefficientNumberOfTaps in AQ_AecCoefficientReadControl_CAL */
#define word_AQ_AecCoefficientReadControl_CAL_aecReadCoefficientNumberOfTaps u7.word_7

/*! \brief Base register address of structure AQ_AecFilterBroadcastControl_CAL */
#define AQ_AecFilterBroadcastControl_CAL_baseRegisterAddress 0xFA30
/*! \brief MMD address of structure AQ_AecFilterBroadcastControl_CAL */
#define AQ_AecFilterBroadcastControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure broadcastFilterSelect in AQ_AecFilterBroadcastControl_CAL */
#define AQ_AecFilterBroadcastControl_CAL_broadcastFilterSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure broadcastFilterSelect in AQ_AecFilterBroadcastControl_CAL */
#define bits_AQ_AecFilterBroadcastControl_CAL_broadcastFilterSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure broadcastFilterSelect in AQ_AecFilterBroadcastControl_CAL */
#define word_AQ_AecFilterBroadcastControl_CAL_broadcastFilterSelect u0.word_0

/*! \brief Base register address of structure AQ_AecFilterBroadcastSegmentControl_CAL */
#define AQ_AecFilterBroadcastSegmentControl_CAL_baseRegisterAddress 0xFA32
/*! \brief MMD address of structure AQ_AecFilterBroadcastSegmentControl_CAL */
#define AQ_AecFilterBroadcastSegmentControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure broadcastSegmentSelect in AQ_AecFilterBroadcastSegmentControl_CAL */
#define AQ_AecFilterBroadcastSegmentControl_CAL_broadcastSegmentSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure broadcastSegmentSelect in AQ_AecFilterBroadcastSegmentControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentControl_CAL_broadcastSegmentSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure broadcastSegmentSelect in AQ_AecFilterBroadcastSegmentControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentControl_CAL_broadcastSegmentSelect u0.word_0

/*! \brief Base register address of structure AQ_AecFilterBroadcastFieldControl_CAL */
#define AQ_AecFilterBroadcastFieldControl_CAL_baseRegisterAddress 0xFA34
/*! \brief MMD address of structure AQ_AecFilterBroadcastFieldControl_CAL */
#define AQ_AecFilterBroadcastFieldControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure broadcastFieldMask in AQ_AecFilterBroadcastFieldControl_CAL */
#define AQ_AecFilterBroadcastFieldControl_CAL_broadcastFieldMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure broadcastFieldMask in AQ_AecFilterBroadcastFieldControl_CAL */
#define bits_AQ_AecFilterBroadcastFieldControl_CAL_broadcastFieldMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure broadcastFieldMask in AQ_AecFilterBroadcastFieldControl_CAL */
#define word_AQ_AecFilterBroadcastFieldControl_CAL_broadcastFieldMask u0.word_0

/*! \brief Base register address of structure AQ_AecFilterBroadcastCueModeControl_CAL */
#define AQ_AecFilterBroadcastCueModeControl_CAL_baseRegisterAddress 0xFA40
/*! \brief MMD address of structure AQ_AecFilterBroadcastCueModeControl_CAL */
#define AQ_AecFilterBroadcastCueModeControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure cueFlush in AQ_AecFilterBroadcastCueModeControl_CAL */
#define AQ_AecFilterBroadcastCueModeControl_CAL_cueFlush 0
/*! \brief Preprocessor variable to relate field to bit position in structure cueFlush in AQ_AecFilterBroadcastCueModeControl_CAL */
#define bits_AQ_AecFilterBroadcastCueModeControl_CAL_cueFlush u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure cueFlush in AQ_AecFilterBroadcastCueModeControl_CAL */
#define word_AQ_AecFilterBroadcastCueModeControl_CAL_cueFlush u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure singleStep in AQ_AecFilterBroadcastCueModeControl_CAL */
#define AQ_AecFilterBroadcastCueModeControl_CAL_singleStep 2
/*! \brief Preprocessor variable to relate field to bit position in structure singleStep in AQ_AecFilterBroadcastCueModeControl_CAL */
#define bits_AQ_AecFilterBroadcastCueModeControl_CAL_singleStep u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure singleStep in AQ_AecFilterBroadcastCueModeControl_CAL */
#define word_AQ_AecFilterBroadcastCueModeControl_CAL_singleStep u2.word_2

/*! \brief Base register address of structure AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueDataProcessorControl_CAL_baseRegisterAddress 0xFA44
/*! \brief MMD address of structure AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueDataProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure dataProcessorRandomDelayEnable in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorRandomDelayEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure dataProcessorRandomDelayEnable in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define bits_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorRandomDelayEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dataProcessorRandomDelayEnable in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define word_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorRandomDelayEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dataProcessorRandomDelayValue in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorRandomDelayValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure dataProcessorRandomDelayValue in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define bits_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorRandomDelayValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dataProcessorRandomDelayValue in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define word_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorRandomDelayValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dataProcessorDelay in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure dataProcessorDelay in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define bits_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dataProcessorDelay in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define word_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dataProcessorForceValueEnable in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorForceValueEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure dataProcessorForceValueEnable in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define bits_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorForceValueEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure dataProcessorForceValueEnable in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define word_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorForceValueEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure dataProcessorForceValue in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorForceValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure dataProcessorForceValue in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define bits_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorForceValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure dataProcessorForceValue in AQ_AecFilterBroadcastCueDataProcessorControl_CAL */
#define word_AQ_AecFilterBroadcastCueDataProcessorControl_CAL_dataProcessorForceValue u1.word_1

/*! \brief Base register address of structure AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_baseRegisterAddress 0xFA46
/*! \brief MMD address of structure AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure invertError in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_invertError 0
/*! \brief Preprocessor variable to relate field to bit position in structure invertError in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define bits_AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_invertError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure invertError in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define word_AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_invertError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure errorProcessorDelay in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_errorProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure errorProcessorDelay in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define bits_AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_errorProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure errorProcessorDelay in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define word_AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_errorProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure errorProcessorDelaySegment_1 in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_errorProcessorDelaySegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure errorProcessorDelaySegment_1 in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define bits_AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_errorProcessorDelaySegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure errorProcessorDelaySegment_1 in AQ_AecFilterBroadcastCueErrorProcessorControl_CAL */
#define word_AQ_AecFilterBroadcastCueErrorProcessorControl_CAL_errorProcessorDelaySegment_1 u1.word_1

/*! \brief Base register address of structure AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_baseRegisterAddress 0xFA48
/*! \brief MMD address of structure AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure leakageDisable in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakageDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure leakageDisable in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define bits_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakageDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure leakageDisable in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define word_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakageDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure leakagePeriodDisable in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure leakagePeriodDisable in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define bits_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure leakagePeriodDisable in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define word_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure leakagePeriodAbort in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodAbort 0
/*! \brief Preprocessor variable to relate field to bit position in structure leakagePeriodAbort in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define bits_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodAbort u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure leakagePeriodAbort in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define word_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodAbort u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure leakagePeriodStart in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure leakagePeriodStart in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define bits_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure leakagePeriodStart in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define word_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriodStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure leakagePeriod in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriod 1
/*! \brief Preprocessor variable to relate field to bit position in structure leakagePeriod in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define bits_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriod u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure leakagePeriod in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define word_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakagePeriod u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure leakageIteration in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakageIteration 2
/*! \brief Preprocessor variable to relate field to bit position in structure leakageIteration in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define bits_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakageIteration u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure leakageIteration in AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL */
#define word_AQ_AecFilterBroadcastCueLeakagePeriodControl_CAL_leakageIteration u2.word_2

/*! \brief Base register address of structure AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL */
#define AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL_baseRegisterAddress 0xFA4B
/*! \brief MMD address of structure AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL */
#define AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure coefficientScalingShiftEnable in AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL */
#define AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL_coefficientScalingShiftEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure coefficientScalingShiftEnable in AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL */
#define bits_AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL_coefficientScalingShiftEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure coefficientScalingShiftEnable in AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL */
#define word_AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL_coefficientScalingShiftEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure coefficientScalingShiftValue in AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL */
#define AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL_coefficientScalingShiftValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure coefficientScalingShiftValue in AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL */
#define bits_AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL_coefficientScalingShiftValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure coefficientScalingShiftValue in AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL */
#define word_AQ_AecFilterBroadcastCueCoefficientScalingControl_CAL_coefficientScalingShiftValue u0.word_0

/*! \brief Base register address of structure AQ_AecFilterBroadcastFirControl_CAL */
#define AQ_AecFilterBroadcastFirControl_CAL_baseRegisterAddress 0xFA4C
/*! \brief MMD address of structure AQ_AecFilterBroadcastFirControl_CAL */
#define AQ_AecFilterBroadcastFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure firClockShape in AQ_AecFilterBroadcastFirControl_CAL */
#define AQ_AecFilterBroadcastFirControl_CAL_firClockShape 0
/*! \brief Preprocessor variable to relate field to bit position in structure firClockShape in AQ_AecFilterBroadcastFirControl_CAL */
#define bits_AQ_AecFilterBroadcastFirControl_CAL_firClockShape u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure firClockShape in AQ_AecFilterBroadcastFirControl_CAL */
#define word_AQ_AecFilterBroadcastFirControl_CAL_firClockShape u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure firForceWakeup in AQ_AecFilterBroadcastFirControl_CAL */
#define AQ_AecFilterBroadcastFirControl_CAL_firForceWakeup 0
/*! \brief Preprocessor variable to relate field to bit position in structure firForceWakeup in AQ_AecFilterBroadcastFirControl_CAL */
#define bits_AQ_AecFilterBroadcastFirControl_CAL_firForceWakeup u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure firForceWakeup in AQ_AecFilterBroadcastFirControl_CAL */
#define word_AQ_AecFilterBroadcastFirControl_CAL_firForceWakeup u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure firDftConstant in AQ_AecFilterBroadcastFirControl_CAL */
#define AQ_AecFilterBroadcastFirControl_CAL_firDftConstant 0
/*! \brief Preprocessor variable to relate field to bit position in structure firDftConstant in AQ_AecFilterBroadcastFirControl_CAL */
#define bits_AQ_AecFilterBroadcastFirControl_CAL_firDftConstant u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure firDftConstant in AQ_AecFilterBroadcastFirControl_CAL */
#define word_AQ_AecFilterBroadcastFirControl_CAL_firDftConstant u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure firClockEnable in AQ_AecFilterBroadcastFirControl_CAL */
#define AQ_AecFilterBroadcastFirControl_CAL_firClockEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure firClockEnable in AQ_AecFilterBroadcastFirControl_CAL */
#define bits_AQ_AecFilterBroadcastFirControl_CAL_firClockEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure firClockEnable in AQ_AecFilterBroadcastFirControl_CAL */
#define word_AQ_AecFilterBroadcastFirControl_CAL_firClockEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure firDataFlushEnable in AQ_AecFilterBroadcastFirControl_CAL */
#define AQ_AecFilterBroadcastFirControl_CAL_firDataFlushEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure firDataFlushEnable in AQ_AecFilterBroadcastFirControl_CAL */
#define bits_AQ_AecFilterBroadcastFirControl_CAL_firDataFlushEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure firDataFlushEnable in AQ_AecFilterBroadcastFirControl_CAL */
#define word_AQ_AecFilterBroadcastFirControl_CAL_firDataFlushEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure firFlushData in AQ_AecFilterBroadcastFirControl_CAL */
#define AQ_AecFilterBroadcastFirControl_CAL_firFlushData 2
/*! \brief Preprocessor variable to relate field to bit position in structure firFlushData in AQ_AecFilterBroadcastFirControl_CAL */
#define bits_AQ_AecFilterBroadcastFirControl_CAL_firFlushData u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure firFlushData in AQ_AecFilterBroadcastFirControl_CAL */
#define word_AQ_AecFilterBroadcastFirControl_CAL_firFlushData u2.word_2

/*! \brief Base register address of structure AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_baseRegisterAddress 0xFA50
/*! \brief MMD address of structure AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure cueSoftReset in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSoftReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure cueSoftReset in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSoftReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure cueSoftReset in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSoftReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure cueClockGateEnable in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_cueClockGateEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure cueClockGateEnable in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueClockGateEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure cueClockGateEnable in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueClockGateEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure cueFreezeEnable in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_cueFreezeEnable 2
/*! \brief Preprocessor variable to relate field to bit position in structure cueFreezeEnable in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueFreezeEnable u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure cueFreezeEnable in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueFreezeEnable u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure cueSramPowerGatingMode in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramPowerGatingMode 3
/*! \brief Preprocessor variable to relate field to bit position in structure cueSramPowerGatingMode in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramPowerGatingMode u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure cueSramPowerGatingMode in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramPowerGatingMode u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure cueSramEma in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEma 4
/*! \brief Preprocessor variable to relate field to bit position in structure cueSramEma in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEma u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure cueSramEma in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEma u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure cueSramEmaw in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEmaw 4
/*! \brief Preprocessor variable to relate field to bit position in structure cueSramEmaw in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEmaw u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure cueSramEmaw in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEmaw u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure cueSramEmas in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEmas 4
/*! \brief Preprocessor variable to relate field to bit position in structure cueSramEmas in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEmas u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure cueSramEmas in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramEmas u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure cueSramRet1n in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramRet1n 4
/*! \brief Preprocessor variable to relate field to bit position in structure cueSramRet1n in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramRet1n u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure cueSramRet1n in AQ_AecFilterBroadcastSegmentCueControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueControl_CAL_cueSramRet1n u4.word_4

/*! \brief Base register address of structure AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_baseRegisterAddress 0xFA55
/*! \brief MMD address of structure AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure cueDisableFirCoefficientDataValid in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableFirCoefficientDataValid 0
/*! \brief Preprocessor variable to relate field to bit position in structure cueDisableFirCoefficientDataValid in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableFirCoefficientDataValid u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure cueDisableFirCoefficientDataValid in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableFirCoefficientDataValid u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure cueAdaptiveFirSendCoefficientUpdate in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAdaptiveFirSendCoefficientUpdate 0
/*! \brief Preprocessor variable to relate field to bit position in structure cueAdaptiveFirSendCoefficientUpdate in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAdaptiveFirSendCoefficientUpdate u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure cueAdaptiveFirSendCoefficientUpdate in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAdaptiveFirSendCoefficientUpdate u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure cueDisableAdpativeCueCoefficientUpdate in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableAdpativeCueCoefficientUpdate 0
/*! \brief Preprocessor variable to relate field to bit position in structure cueDisableAdpativeCueCoefficientUpdate in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableAdpativeCueCoefficientUpdate u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure cueDisableAdpativeCueCoefficientUpdate in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableAdpativeCueCoefficientUpdate u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure cueMuDisable in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuDisable 1
/*! \brief Preprocessor variable to relate field to bit position in structure cueMuDisable in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuDisable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure cueMuDisable in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuDisable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure cueDataBoost in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDataBoost 1
/*! \brief Preprocessor variable to relate field to bit position in structure cueDataBoost in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDataBoost u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure cueDataBoost in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDataBoost u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure cueMuBoost in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuBoost 1
/*! \brief Preprocessor variable to relate field to bit position in structure cueMuBoost in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuBoost u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure cueMuBoost in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuBoost u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure cueMu in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMu 1
/*! \brief Preprocessor variable to relate field to bit position in structure cueMu in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMu u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure cueMu in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMu u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure cueDisableBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableBetaLeakage 2
/*! \brief Preprocessor variable to relate field to bit position in structure cueDisableBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableBetaLeakage u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure cueDisableBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableBetaLeakage u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure cueNegateBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueNegateBetaLeakage 2
/*! \brief Preprocessor variable to relate field to bit position in structure cueNegateBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueNegateBetaLeakage u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure cueNegateBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueNegateBetaLeakage u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure cueBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueBetaLeakage 2
/*! \brief Preprocessor variable to relate field to bit position in structure cueBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueBetaLeakage u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure cueBetaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueBetaLeakage u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure cueDisableAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableAlphaLeakage 3
/*! \brief Preprocessor variable to relate field to bit position in structure cueDisableAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableAlphaLeakage u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure cueDisableAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableAlphaLeakage u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure cueNegateAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueNegateAlphaLeakage 3
/*! \brief Preprocessor variable to relate field to bit position in structure cueNegateAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueNegateAlphaLeakage u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure cueNegateAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueNegateAlphaLeakage u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure cueAlphaDisableLeakageRound in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAlphaDisableLeakageRound 3
/*! \brief Preprocessor variable to relate field to bit position in structure cueAlphaDisableLeakageRound in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAlphaDisableLeakageRound u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure cueAlphaDisableLeakageRound in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAlphaDisableLeakageRound u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure cueAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAlphaLeakage 3
/*! \brief Preprocessor variable to relate field to bit position in structure cueAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAlphaLeakage u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure cueAlphaLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueAlphaLeakage u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure cueDisableMuLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableMuLeakage 4
/*! \brief Preprocessor variable to relate field to bit position in structure cueDisableMuLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableMuLeakage u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure cueDisableMuLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueDisableMuLeakage u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure cueMuLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuLeakage 4
/*! \brief Preprocessor variable to relate field to bit position in structure cueMuLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuLeakage u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure cueMuLeakage in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueMuLeakage u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure cueCoefficientThresholdGateEnable in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientThresholdGateEnable 5
/*! \brief Preprocessor variable to relate field to bit position in structure cueCoefficientThresholdGateEnable in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientThresholdGateEnable u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cueCoefficientThresholdGateEnable in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientThresholdGateEnable u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cueCoefficientThresholdValue in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientThresholdValue 5
/*! \brief Preprocessor variable to relate field to bit position in structure cueCoefficientThresholdValue in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientThresholdValue u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cueCoefficientThresholdValue in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientThresholdValue u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cueCoefficientSubSegmentClear in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientSubSegmentClear 6
/*! \brief Preprocessor variable to relate field to bit position in structure cueCoefficientSubSegmentClear in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientSubSegmentClear u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure cueCoefficientSubSegmentClear in AQ_AecFilterBroadcastSegmentCueLmsControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentCueLmsControl_CAL_cueCoefficientSubSegmentClear u6.word_6

/*! \brief Base register address of structure AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define AQ_AecFilterBroadcastSegmentFirControl_CAL_baseRegisterAddress 0xFA60
/*! \brief MMD address of structure AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define AQ_AecFilterBroadcastSegmentFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure firPowerDown in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define AQ_AecFilterBroadcastSegmentFirControl_CAL_firPowerDown 0
/*! \brief Preprocessor variable to relate field to bit position in structure firPowerDown in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentFirControl_CAL_firPowerDown u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure firPowerDown in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentFirControl_CAL_firPowerDown u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure firGain_3Enable in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define AQ_AecFilterBroadcastSegmentFirControl_CAL_firGain_3Enable 1
/*! \brief Preprocessor variable to relate field to bit position in structure firGain_3Enable in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentFirControl_CAL_firGain_3Enable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure firGain_3Enable in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentFirControl_CAL_firGain_3Enable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure firShift in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define AQ_AecFilterBroadcastSegmentFirControl_CAL_firShift 1
/*! \brief Preprocessor variable to relate field to bit position in structure firShift in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentFirControl_CAL_firShift u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure firShift in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentFirControl_CAL_firShift u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure firGlobalFlushEnable in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define AQ_AecFilterBroadcastSegmentFirControl_CAL_firGlobalFlushEnable 2
/*! \brief Preprocessor variable to relate field to bit position in structure firGlobalFlushEnable in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define bits_AQ_AecFilterBroadcastSegmentFirControl_CAL_firGlobalFlushEnable u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure firGlobalFlushEnable in AQ_AecFilterBroadcastSegmentFirControl_CAL */
#define word_AQ_AecFilterBroadcastSegmentFirControl_CAL_firGlobalFlushEnable u2.word_2

/*! \brief Base register address of structure AQ_Ch0AecCueModeControl_CAL */
#define AQ_Ch0AecCueModeControl_CAL_baseRegisterAddress 0xFA70
/*! \brief MMD address of structure AQ_Ch0AecCueModeControl_CAL */
#define AQ_Ch0AecCueModeControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueFlush in AQ_Ch0AecCueModeControl_CAL */
#define AQ_Ch0AecCueModeControl_CAL_aec_0CueFlush 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueFlush in AQ_Ch0AecCueModeControl_CAL */
#define bits_AQ_Ch0AecCueModeControl_CAL_aec_0CueFlush u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueFlush in AQ_Ch0AecCueModeControl_CAL */
#define word_AQ_Ch0AecCueModeControl_CAL_aec_0CueFlush u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0SingleStep in AQ_Ch0AecCueModeControl_CAL */
#define AQ_Ch0AecCueModeControl_CAL_aec_0SingleStep 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0SingleStep in AQ_Ch0AecCueModeControl_CAL */
#define bits_AQ_Ch0AecCueModeControl_CAL_aec_0SingleStep u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0SingleStep in AQ_Ch0AecCueModeControl_CAL */
#define word_AQ_Ch0AecCueModeControl_CAL_aec_0SingleStep u2.word_2

/*! \brief Base register address of structure AQ_Ch0AecCueDataProcessorControl_CAL */
#define AQ_Ch0AecCueDataProcessorControl_CAL_baseRegisterAddress 0xFA74
/*! \brief MMD address of structure AQ_Ch0AecCueDataProcessorControl_CAL */
#define AQ_Ch0AecCueDataProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0DataProcessorRandomDelayEnable in AQ_Ch0AecCueDataProcessorControl_CAL */
#define AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorRandomDelayEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0DataProcessorRandomDelayEnable in AQ_Ch0AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorRandomDelayEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0DataProcessorRandomDelayEnable in AQ_Ch0AecCueDataProcessorControl_CAL */
#define word_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorRandomDelayEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0DataProcessorRandomDelayValue in AQ_Ch0AecCueDataProcessorControl_CAL */
#define AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorRandomDelayValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0DataProcessorRandomDelayValue in AQ_Ch0AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorRandomDelayValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0DataProcessorRandomDelayValue in AQ_Ch0AecCueDataProcessorControl_CAL */
#define word_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorRandomDelayValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0DataProcessorDelay in AQ_Ch0AecCueDataProcessorControl_CAL */
#define AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0DataProcessorDelay in AQ_Ch0AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0DataProcessorDelay in AQ_Ch0AecCueDataProcessorControl_CAL */
#define word_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0DataProcessorForceValueEnable in AQ_Ch0AecCueDataProcessorControl_CAL */
#define AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorForceValueEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0DataProcessorForceValueEnable in AQ_Ch0AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorForceValueEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0DataProcessorForceValueEnable in AQ_Ch0AecCueDataProcessorControl_CAL */
#define word_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorForceValueEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0DataProcessorForceValue in AQ_Ch0AecCueDataProcessorControl_CAL */
#define AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorForceValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0DataProcessorForceValue in AQ_Ch0AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorForceValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0DataProcessorForceValue in AQ_Ch0AecCueDataProcessorControl_CAL */
#define word_AQ_Ch0AecCueDataProcessorControl_CAL_aec_0DataProcessorForceValue u1.word_1

/*! \brief Base register address of structure AQ_Ch0AecCueErrorProcessorControl_CAL */
#define AQ_Ch0AecCueErrorProcessorControl_CAL_baseRegisterAddress 0xFA76
/*! \brief MMD address of structure AQ_Ch0AecCueErrorProcessorControl_CAL */
#define AQ_Ch0AecCueErrorProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0InvertError in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0InvertError 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0InvertError in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0InvertError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0InvertError in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0InvertError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0ErrorProcessorDelay in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0ErrorProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0ErrorProcessorDelay in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0ErrorProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0ErrorProcessorDelay in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0ErrorProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0ErrorProcessorDelaySegment_1 in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0ErrorProcessorDelaySegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0ErrorProcessorDelaySegment_1 in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0ErrorProcessorDelaySegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0ErrorProcessorDelaySegment_1 in AQ_Ch0AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch0AecCueErrorProcessorControl_CAL_aec_0ErrorProcessorDelaySegment_1 u1.word_1

/*! \brief Base register address of structure AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define AQ_Ch0AecCueLeakagePeriodControl_CAL_baseRegisterAddress 0xFA78
/*! \brief MMD address of structure AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define AQ_Ch0AecCueLeakagePeriodControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0LeakageDisable in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakageDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0LeakageDisable in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakageDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0LeakageDisable in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakageDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0LeakagePeriodDisable in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0LeakagePeriodDisable in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0LeakagePeriodDisable in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0LeakagePeriodAbort in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodAbort 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0LeakagePeriodAbort in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodAbort u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0LeakagePeriodAbort in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodAbort u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0LeakagePeriodStart in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0LeakagePeriodStart in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0LeakagePeriodStart in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriodStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0LeakagePeriod in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriod 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0LeakagePeriod in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriod u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0LeakagePeriod in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakagePeriod u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0LeakageIteration in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakageIteration 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0LeakageIteration in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakageIteration u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0LeakageIteration in AQ_Ch0AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch0AecCueLeakagePeriodControl_CAL_aec_0LeakageIteration u2.word_2

/*! \brief Base register address of structure AQ_Ch0AecCueCoefficientScalingControl_CAL */
#define AQ_Ch0AecCueCoefficientScalingControl_CAL_baseRegisterAddress 0xFA7B
/*! \brief MMD address of structure AQ_Ch0AecCueCoefficientScalingControl_CAL */
#define AQ_Ch0AecCueCoefficientScalingControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CoefficientScalingShiftEnable in AQ_Ch0AecCueCoefficientScalingControl_CAL */
#define AQ_Ch0AecCueCoefficientScalingControl_CAL_aec_0CoefficientScalingShiftEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CoefficientScalingShiftEnable in AQ_Ch0AecCueCoefficientScalingControl_CAL */
#define bits_AQ_Ch0AecCueCoefficientScalingControl_CAL_aec_0CoefficientScalingShiftEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CoefficientScalingShiftEnable in AQ_Ch0AecCueCoefficientScalingControl_CAL */
#define word_AQ_Ch0AecCueCoefficientScalingControl_CAL_aec_0CoefficientScalingShiftEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CoefficientScalingShiftValue in AQ_Ch0AecCueCoefficientScalingControl_CAL */
#define AQ_Ch0AecCueCoefficientScalingControl_CAL_aec_0CoefficientScalingShiftValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CoefficientScalingShiftValue in AQ_Ch0AecCueCoefficientScalingControl_CAL */
#define bits_AQ_Ch0AecCueCoefficientScalingControl_CAL_aec_0CoefficientScalingShiftValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CoefficientScalingShiftValue in AQ_Ch0AecCueCoefficientScalingControl_CAL */
#define word_AQ_Ch0AecCueCoefficientScalingControl_CAL_aec_0CoefficientScalingShiftValue u0.word_0

/*! \brief Base register address of structure AQ_Ch0AecFirControl_CAL */
#define AQ_Ch0AecFirControl_CAL_baseRegisterAddress 0xFA7C
/*! \brief MMD address of structure AQ_Ch0AecFirControl_CAL */
#define AQ_Ch0AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirClockShape in AQ_Ch0AecFirControl_CAL */
#define AQ_Ch0AecFirControl_CAL_aec_0FirClockShape 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirClockShape in AQ_Ch0AecFirControl_CAL */
#define bits_AQ_Ch0AecFirControl_CAL_aec_0FirClockShape u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirClockShape in AQ_Ch0AecFirControl_CAL */
#define word_AQ_Ch0AecFirControl_CAL_aec_0FirClockShape u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirForceWakeup in AQ_Ch0AecFirControl_CAL */
#define AQ_Ch0AecFirControl_CAL_aec_0FirForceWakeup 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirForceWakeup in AQ_Ch0AecFirControl_CAL */
#define bits_AQ_Ch0AecFirControl_CAL_aec_0FirForceWakeup u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirForceWakeup in AQ_Ch0AecFirControl_CAL */
#define word_AQ_Ch0AecFirControl_CAL_aec_0FirForceWakeup u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirDftConstant in AQ_Ch0AecFirControl_CAL */
#define AQ_Ch0AecFirControl_CAL_aec_0FirDftConstant 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirDftConstant in AQ_Ch0AecFirControl_CAL */
#define bits_AQ_Ch0AecFirControl_CAL_aec_0FirDftConstant u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirDftConstant in AQ_Ch0AecFirControl_CAL */
#define word_AQ_Ch0AecFirControl_CAL_aec_0FirDftConstant u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirClockEnable in AQ_Ch0AecFirControl_CAL */
#define AQ_Ch0AecFirControl_CAL_aec_0FirClockEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirClockEnable in AQ_Ch0AecFirControl_CAL */
#define bits_AQ_Ch0AecFirControl_CAL_aec_0FirClockEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirClockEnable in AQ_Ch0AecFirControl_CAL */
#define word_AQ_Ch0AecFirControl_CAL_aec_0FirClockEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirDataFlushEnable in AQ_Ch0AecFirControl_CAL */
#define AQ_Ch0AecFirControl_CAL_aec_0FirDataFlushEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirDataFlushEnable in AQ_Ch0AecFirControl_CAL */
#define bits_AQ_Ch0AecFirControl_CAL_aec_0FirDataFlushEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirDataFlushEnable in AQ_Ch0AecFirControl_CAL */
#define word_AQ_Ch0AecFirControl_CAL_aec_0FirDataFlushEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirFlushData in AQ_Ch0AecFirControl_CAL */
#define AQ_Ch0AecFirControl_CAL_aec_0FirFlushData 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirFlushData in AQ_Ch0AecFirControl_CAL */
#define bits_AQ_Ch0AecFirControl_CAL_aec_0FirFlushData u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirFlushData in AQ_Ch0AecFirControl_CAL */
#define word_AQ_Ch0AecFirControl_CAL_aec_0FirFlushData u2.word_2

/*! \brief Base register address of structure AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_baseRegisterAddress 0xFA80
/*! \brief MMD address of structure AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSoftResetSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSoftResetSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSoftResetSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define bits_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSoftResetSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSoftResetSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define word_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSoftResetSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueClockGateEnableSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_aec_0CueClockGateEnableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueClockGateEnableSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define bits_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueClockGateEnableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueClockGateEnableSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define word_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueClockGateEnableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueFreezeEnableSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_aec_0CueFreezeEnableSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueFreezeEnableSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define bits_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueFreezeEnableSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueFreezeEnableSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define word_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueFreezeEnableSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramPowerGatingModeSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramPowerGatingModeSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramPowerGatingModeSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define bits_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramPowerGatingModeSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramPowerGatingModeSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define word_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramPowerGatingModeSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramEmaSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmaSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramEmaSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define bits_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmaSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramEmaSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define word_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmaSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramEmawSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmawSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramEmawSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define bits_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmawSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramEmawSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define word_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmawSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramEmasSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmasSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramEmasSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define bits_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmasSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramEmasSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define word_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramEmasSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramRet1nSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramRet1nSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramRet1nSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define bits_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramRet1nSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramRet1nSegment_0 in AQ_Ch0Seg0AecCueControl_CAL */
#define word_AQ_Ch0Seg0AecCueControl_CAL_aec_0CueSramRet1nSegment_0 u4.word_4

/*! \brief Base register address of structure AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_baseRegisterAddress 0xFA85
/*! \brief MMD address of structure AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableFirCoefficientDataValidSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableFirCoefficientDataValidSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableFirCoefficientDataValidSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAdaptiveFirSendCoefficientUpdateSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAdaptiveFirSendCoefficientUpdateSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAdaptiveFirSendCoefficientUpdateSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableAdpativeCueCoefficientUpdateSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableAdpativeCueCoefficientUpdateSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableAdpativeCueCoefficientUpdateSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMuDisableSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuDisableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMuDisableSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuDisableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMuDisableSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuDisableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDataBoostSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDataBoostSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDataBoostSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDataBoostSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDataBoostSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDataBoostSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMuBoostSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuBoostSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMuBoostSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuBoostSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMuBoostSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuBoostSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMuSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMuSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMuSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueNegateBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueNegateBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueNegateBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueNegateBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueNegateBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueNegateBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueBetaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueNegateAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueNegateAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueNegateAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueNegateAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueNegateAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueNegateAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAlphaDisableLeakageRoundSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAlphaDisableLeakageRoundSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAlphaDisableLeakageRoundSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueAlphaLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableMuLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableMuLeakageSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableMuLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableMuLeakageSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableMuLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueDisableMuLeakageSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMuLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuLeakageSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMuLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuLeakageSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMuLeakageSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueMuLeakageSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientThresholdGateEnableSegment_0 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientThresholdGateEnableSegment_0 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientThresholdGateEnableSegment_0 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientThresholdValueSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientThresholdValueSegment_0 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientThresholdValueSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientThresholdValueSegment_0 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientThresholdValueSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientThresholdValueSegment_0 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientSubSegmentClearSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientSubSegmentClearSegment_0 6
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientSubSegmentClearSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientSubSegmentClearSegment_0 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientSubSegmentClearSegment_0 in AQ_Ch0Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg0AecCueLmsControl_CAL_aec_0CueCoefficientSubSegmentClearSegment_0 u6.word_6

/*! \brief Base register address of structure AQ_Ch0Seg0AecFirControl_CAL */
#define AQ_Ch0Seg0AecFirControl_CAL_baseRegisterAddress 0xFA90
/*! \brief MMD address of structure AQ_Ch0Seg0AecFirControl_CAL */
#define AQ_Ch0Seg0AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirPowerDownSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define AQ_Ch0Seg0AecFirControl_CAL_aec_0FirPowerDownSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirPowerDownSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define bits_AQ_Ch0Seg0AecFirControl_CAL_aec_0FirPowerDownSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirPowerDownSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define word_AQ_Ch0Seg0AecFirControl_CAL_aec_0FirPowerDownSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirGain_3EnableSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define AQ_Ch0Seg0AecFirControl_CAL_aec_0FirGain_3EnableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirGain_3EnableSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define bits_AQ_Ch0Seg0AecFirControl_CAL_aec_0FirGain_3EnableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirGain_3EnableSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define word_AQ_Ch0Seg0AecFirControl_CAL_aec_0FirGain_3EnableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirShiftSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define AQ_Ch0Seg0AecFirControl_CAL_aec_0FirShiftSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirShiftSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define bits_AQ_Ch0Seg0AecFirControl_CAL_aec_0FirShiftSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirShiftSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define word_AQ_Ch0Seg0AecFirControl_CAL_aec_0FirShiftSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirGlobalFlushEnableSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define AQ_Ch0Seg0AecFirControl_CAL_aec_0FirGlobalFlushEnableSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirGlobalFlushEnableSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define bits_AQ_Ch0Seg0AecFirControl_CAL_aec_0FirGlobalFlushEnableSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirGlobalFlushEnableSegment_0 in AQ_Ch0Seg0AecFirControl_CAL */
#define word_AQ_Ch0Seg0AecFirControl_CAL_aec_0FirGlobalFlushEnableSegment_0 u2.word_2

/*! \brief Base register address of structure AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_baseRegisterAddress 0xFAA0
/*! \brief MMD address of structure AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSoftResetSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSoftResetSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSoftResetSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define bits_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSoftResetSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSoftResetSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define word_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSoftResetSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueClockGateEnableSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_aec_0CueClockGateEnableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueClockGateEnableSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define bits_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueClockGateEnableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueClockGateEnableSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define word_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueClockGateEnableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueFreezeEnableSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_aec_0CueFreezeEnableSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueFreezeEnableSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define bits_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueFreezeEnableSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueFreezeEnableSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define word_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueFreezeEnableSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramPowerGatingModeSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramPowerGatingModeSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramPowerGatingModeSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define bits_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramPowerGatingModeSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramPowerGatingModeSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define word_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramPowerGatingModeSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramEmaSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmaSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramEmaSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define bits_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmaSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramEmaSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define word_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmaSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramEmawSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmawSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramEmawSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define bits_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmawSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramEmawSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define word_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmawSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramEmasSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmasSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramEmasSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define bits_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmasSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramEmasSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define word_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramEmasSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueSramRet1nSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramRet1nSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueSramRet1nSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define bits_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramRet1nSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueSramRet1nSegment_1 in AQ_Ch0Seg1AecCueControl_CAL */
#define word_AQ_Ch0Seg1AecCueControl_CAL_aec_0CueSramRet1nSegment_1 u4.word_4

/*! \brief Base register address of structure AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_baseRegisterAddress 0xFAA5
/*! \brief MMD address of structure AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableFirCoefficientDataValidSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableFirCoefficientDataValidSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableFirCoefficientDataValidSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAdaptiveFirSendCoefficientUpdateSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAdaptiveFirSendCoefficientUpdateSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAdaptiveFirSendCoefficientUpdateSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableAdpativeCueCoefficientUpdateSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableAdpativeCueCoefficientUpdateSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableAdpativeCueCoefficientUpdateSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMuDisableSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuDisableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMuDisableSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuDisableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMuDisableSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuDisableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDataBoostSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDataBoostSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDataBoostSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDataBoostSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDataBoostSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDataBoostSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMuBoostSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuBoostSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMuBoostSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuBoostSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMuBoostSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuBoostSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMuSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMuSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMuSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueNegateBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueNegateBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueNegateBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueNegateBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueNegateBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueNegateBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueBetaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueNegateAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueNegateAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueNegateAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueNegateAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueNegateAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueNegateAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAlphaDisableLeakageRoundSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAlphaDisableLeakageRoundSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAlphaDisableLeakageRoundSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueAlphaLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueDisableMuLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableMuLeakageSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueDisableMuLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableMuLeakageSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueDisableMuLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueDisableMuLeakageSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMuLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuLeakageSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMuLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuLeakageSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMuLeakageSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueMuLeakageSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientThresholdGateEnableSegment_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientThresholdGateEnableSegment_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientThresholdGateEnableSegment_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientThresholdValueSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientThresholdValueSegment_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientThresholdValueSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientThresholdValueSegment_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientThresholdValueSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientThresholdValueSegment_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientSubSegmentClearSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientSubSegmentClearSegment_1 6
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientSubSegmentClearSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientSubSegmentClearSegment_1 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientSubSegmentClearSegment_1 in AQ_Ch0Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch0Seg1AecCueLmsControl_CAL_aec_0CueCoefficientSubSegmentClearSegment_1 u6.word_6

/*! \brief Base register address of structure AQ_Ch0Seg1AecFirControl_CAL */
#define AQ_Ch0Seg1AecFirControl_CAL_baseRegisterAddress 0xFAB0
/*! \brief MMD address of structure AQ_Ch0Seg1AecFirControl_CAL */
#define AQ_Ch0Seg1AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirPowerDownSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define AQ_Ch0Seg1AecFirControl_CAL_aec_0FirPowerDownSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirPowerDownSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define bits_AQ_Ch0Seg1AecFirControl_CAL_aec_0FirPowerDownSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirPowerDownSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define word_AQ_Ch0Seg1AecFirControl_CAL_aec_0FirPowerDownSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirGain_3EnableSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define AQ_Ch0Seg1AecFirControl_CAL_aec_0FirGain_3EnableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirGain_3EnableSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define bits_AQ_Ch0Seg1AecFirControl_CAL_aec_0FirGain_3EnableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirGain_3EnableSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define word_AQ_Ch0Seg1AecFirControl_CAL_aec_0FirGain_3EnableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirShiftSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define AQ_Ch0Seg1AecFirControl_CAL_aec_0FirShiftSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirShiftSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define bits_AQ_Ch0Seg1AecFirControl_CAL_aec_0FirShiftSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirShiftSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define word_AQ_Ch0Seg1AecFirControl_CAL_aec_0FirShiftSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirGlobalFlushEnableSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define AQ_Ch0Seg1AecFirControl_CAL_aec_0FirGlobalFlushEnableSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirGlobalFlushEnableSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define bits_AQ_Ch0Seg1AecFirControl_CAL_aec_0FirGlobalFlushEnableSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirGlobalFlushEnableSegment_1 in AQ_Ch0Seg1AecFirControl_CAL */
#define word_AQ_Ch0Seg1AecFirControl_CAL_aec_0FirGlobalFlushEnableSegment_1 u2.word_2

/*! \brief Base register address of structure AQ_Ch1AecCueModeControl_CAL */
#define AQ_Ch1AecCueModeControl_CAL_baseRegisterAddress 0xFAC0
/*! \brief MMD address of structure AQ_Ch1AecCueModeControl_CAL */
#define AQ_Ch1AecCueModeControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueFlush in AQ_Ch1AecCueModeControl_CAL */
#define AQ_Ch1AecCueModeControl_CAL_aec_1CueFlush 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueFlush in AQ_Ch1AecCueModeControl_CAL */
#define bits_AQ_Ch1AecCueModeControl_CAL_aec_1CueFlush u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueFlush in AQ_Ch1AecCueModeControl_CAL */
#define word_AQ_Ch1AecCueModeControl_CAL_aec_1CueFlush u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1SingleStep in AQ_Ch1AecCueModeControl_CAL */
#define AQ_Ch1AecCueModeControl_CAL_aec_1SingleStep 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1SingleStep in AQ_Ch1AecCueModeControl_CAL */
#define bits_AQ_Ch1AecCueModeControl_CAL_aec_1SingleStep u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1SingleStep in AQ_Ch1AecCueModeControl_CAL */
#define word_AQ_Ch1AecCueModeControl_CAL_aec_1SingleStep u2.word_2

/*! \brief Base register address of structure AQ_Ch1AecCueDataProcessorControl_CAL */
#define AQ_Ch1AecCueDataProcessorControl_CAL_baseRegisterAddress 0xFAC4
/*! \brief MMD address of structure AQ_Ch1AecCueDataProcessorControl_CAL */
#define AQ_Ch1AecCueDataProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1DataProcessorRandomDelayEnable in AQ_Ch1AecCueDataProcessorControl_CAL */
#define AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorRandomDelayEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1DataProcessorRandomDelayEnable in AQ_Ch1AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorRandomDelayEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1DataProcessorRandomDelayEnable in AQ_Ch1AecCueDataProcessorControl_CAL */
#define word_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorRandomDelayEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1DataProcessorRandomDelayValue in AQ_Ch1AecCueDataProcessorControl_CAL */
#define AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorRandomDelayValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1DataProcessorRandomDelayValue in AQ_Ch1AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorRandomDelayValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1DataProcessorRandomDelayValue in AQ_Ch1AecCueDataProcessorControl_CAL */
#define word_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorRandomDelayValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1DataProcessorDelay in AQ_Ch1AecCueDataProcessorControl_CAL */
#define AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1DataProcessorDelay in AQ_Ch1AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1DataProcessorDelay in AQ_Ch1AecCueDataProcessorControl_CAL */
#define word_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1DataProcessorForceValueEnable in AQ_Ch1AecCueDataProcessorControl_CAL */
#define AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorForceValueEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1DataProcessorForceValueEnable in AQ_Ch1AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorForceValueEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1DataProcessorForceValueEnable in AQ_Ch1AecCueDataProcessorControl_CAL */
#define word_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorForceValueEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1DataProcessorForceValue in AQ_Ch1AecCueDataProcessorControl_CAL */
#define AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorForceValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1DataProcessorForceValue in AQ_Ch1AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorForceValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1DataProcessorForceValue in AQ_Ch1AecCueDataProcessorControl_CAL */
#define word_AQ_Ch1AecCueDataProcessorControl_CAL_aec_1DataProcessorForceValue u1.word_1

/*! \brief Base register address of structure AQ_Ch1AecCueErrorProcessorControl_CAL */
#define AQ_Ch1AecCueErrorProcessorControl_CAL_baseRegisterAddress 0xFAC6
/*! \brief MMD address of structure AQ_Ch1AecCueErrorProcessorControl_CAL */
#define AQ_Ch1AecCueErrorProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1InvertError in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1InvertError 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1InvertError in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1InvertError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1InvertError in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1InvertError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1ErrorProcessorDelay in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1ErrorProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1ErrorProcessorDelay in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1ErrorProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1ErrorProcessorDelay in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1ErrorProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1ErrorProcessorDelaySegment_1 in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1ErrorProcessorDelaySegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1ErrorProcessorDelaySegment_1 in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1ErrorProcessorDelaySegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1ErrorProcessorDelaySegment_1 in AQ_Ch1AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch1AecCueErrorProcessorControl_CAL_aec_1ErrorProcessorDelaySegment_1 u1.word_1

/*! \brief Base register address of structure AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define AQ_Ch1AecCueLeakagePeriodControl_CAL_baseRegisterAddress 0xFAC8
/*! \brief MMD address of structure AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define AQ_Ch1AecCueLeakagePeriodControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1LeakageDisable in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakageDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1LeakageDisable in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakageDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1LeakageDisable in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakageDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1LeakagePeriodDisable in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1LeakagePeriodDisable in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1LeakagePeriodDisable in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1LeakagePeriodAbort in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodAbort 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1LeakagePeriodAbort in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodAbort u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1LeakagePeriodAbort in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodAbort u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1LeakagePeriodStart in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1LeakagePeriodStart in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1LeakagePeriodStart in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriodStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1LeakagePeriod in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriod 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1LeakagePeriod in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriod u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1LeakagePeriod in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakagePeriod u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1LeakageIteration in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakageIteration 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1LeakageIteration in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakageIteration u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1LeakageIteration in AQ_Ch1AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch1AecCueLeakagePeriodControl_CAL_aec_1LeakageIteration u2.word_2

/*! \brief Base register address of structure AQ_Ch1AecCueCoefficientScalingControl_CAL */
#define AQ_Ch1AecCueCoefficientScalingControl_CAL_baseRegisterAddress 0xFACB
/*! \brief MMD address of structure AQ_Ch1AecCueCoefficientScalingControl_CAL */
#define AQ_Ch1AecCueCoefficientScalingControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CoefficientScalingShiftEnable in AQ_Ch1AecCueCoefficientScalingControl_CAL */
#define AQ_Ch1AecCueCoefficientScalingControl_CAL_aec_1CoefficientScalingShiftEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CoefficientScalingShiftEnable in AQ_Ch1AecCueCoefficientScalingControl_CAL */
#define bits_AQ_Ch1AecCueCoefficientScalingControl_CAL_aec_1CoefficientScalingShiftEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CoefficientScalingShiftEnable in AQ_Ch1AecCueCoefficientScalingControl_CAL */
#define word_AQ_Ch1AecCueCoefficientScalingControl_CAL_aec_1CoefficientScalingShiftEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CoefficientScalingShiftValue in AQ_Ch1AecCueCoefficientScalingControl_CAL */
#define AQ_Ch1AecCueCoefficientScalingControl_CAL_aec_1CoefficientScalingShiftValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CoefficientScalingShiftValue in AQ_Ch1AecCueCoefficientScalingControl_CAL */
#define bits_AQ_Ch1AecCueCoefficientScalingControl_CAL_aec_1CoefficientScalingShiftValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CoefficientScalingShiftValue in AQ_Ch1AecCueCoefficientScalingControl_CAL */
#define word_AQ_Ch1AecCueCoefficientScalingControl_CAL_aec_1CoefficientScalingShiftValue u0.word_0

/*! \brief Base register address of structure AQ_Ch1AecFirControl_CAL */
#define AQ_Ch1AecFirControl_CAL_baseRegisterAddress 0xFACC
/*! \brief MMD address of structure AQ_Ch1AecFirControl_CAL */
#define AQ_Ch1AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirClockShape in AQ_Ch1AecFirControl_CAL */
#define AQ_Ch1AecFirControl_CAL_aec_1FirClockShape 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirClockShape in AQ_Ch1AecFirControl_CAL */
#define bits_AQ_Ch1AecFirControl_CAL_aec_1FirClockShape u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirClockShape in AQ_Ch1AecFirControl_CAL */
#define word_AQ_Ch1AecFirControl_CAL_aec_1FirClockShape u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirForceWakeup in AQ_Ch1AecFirControl_CAL */
#define AQ_Ch1AecFirControl_CAL_aec_1FirForceWakeup 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirForceWakeup in AQ_Ch1AecFirControl_CAL */
#define bits_AQ_Ch1AecFirControl_CAL_aec_1FirForceWakeup u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirForceWakeup in AQ_Ch1AecFirControl_CAL */
#define word_AQ_Ch1AecFirControl_CAL_aec_1FirForceWakeup u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirDftConstant in AQ_Ch1AecFirControl_CAL */
#define AQ_Ch1AecFirControl_CAL_aec_1FirDftConstant 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirDftConstant in AQ_Ch1AecFirControl_CAL */
#define bits_AQ_Ch1AecFirControl_CAL_aec_1FirDftConstant u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirDftConstant in AQ_Ch1AecFirControl_CAL */
#define word_AQ_Ch1AecFirControl_CAL_aec_1FirDftConstant u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirClockEnable in AQ_Ch1AecFirControl_CAL */
#define AQ_Ch1AecFirControl_CAL_aec_1FirClockEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirClockEnable in AQ_Ch1AecFirControl_CAL */
#define bits_AQ_Ch1AecFirControl_CAL_aec_1FirClockEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirClockEnable in AQ_Ch1AecFirControl_CAL */
#define word_AQ_Ch1AecFirControl_CAL_aec_1FirClockEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirDataFlushEnable in AQ_Ch1AecFirControl_CAL */
#define AQ_Ch1AecFirControl_CAL_aec_1FirDataFlushEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirDataFlushEnable in AQ_Ch1AecFirControl_CAL */
#define bits_AQ_Ch1AecFirControl_CAL_aec_1FirDataFlushEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirDataFlushEnable in AQ_Ch1AecFirControl_CAL */
#define word_AQ_Ch1AecFirControl_CAL_aec_1FirDataFlushEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirFlushData in AQ_Ch1AecFirControl_CAL */
#define AQ_Ch1AecFirControl_CAL_aec_1FirFlushData 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirFlushData in AQ_Ch1AecFirControl_CAL */
#define bits_AQ_Ch1AecFirControl_CAL_aec_1FirFlushData u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirFlushData in AQ_Ch1AecFirControl_CAL */
#define word_AQ_Ch1AecFirControl_CAL_aec_1FirFlushData u2.word_2

/*! \brief Base register address of structure AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_baseRegisterAddress 0xFAD0
/*! \brief MMD address of structure AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSoftResetSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSoftResetSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSoftResetSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define bits_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSoftResetSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSoftResetSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define word_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSoftResetSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueClockGateEnableSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_aec_1CueClockGateEnableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueClockGateEnableSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define bits_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueClockGateEnableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueClockGateEnableSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define word_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueClockGateEnableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueFreezeEnableSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_aec_1CueFreezeEnableSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueFreezeEnableSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define bits_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueFreezeEnableSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueFreezeEnableSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define word_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueFreezeEnableSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramPowerGatingModeSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramPowerGatingModeSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramPowerGatingModeSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define bits_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramPowerGatingModeSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramPowerGatingModeSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define word_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramPowerGatingModeSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramEmaSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmaSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramEmaSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define bits_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmaSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramEmaSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define word_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmaSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramEmawSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmawSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramEmawSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define bits_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmawSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramEmawSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define word_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmawSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramEmasSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmasSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramEmasSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define bits_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmasSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramEmasSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define word_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramEmasSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramRet1nSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramRet1nSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramRet1nSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define bits_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramRet1nSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramRet1nSegment_0 in AQ_Ch1Seg0AecCueControl_CAL */
#define word_AQ_Ch1Seg0AecCueControl_CAL_aec_1CueSramRet1nSegment_0 u4.word_4

/*! \brief Base register address of structure AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_baseRegisterAddress 0xFAD5
/*! \brief MMD address of structure AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableFirCoefficientDataValidSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableFirCoefficientDataValidSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableFirCoefficientDataValidSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAdaptiveFirSendCoefficientUpdateSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAdaptiveFirSendCoefficientUpdateSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAdaptiveFirSendCoefficientUpdateSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableAdpativeCueCoefficientUpdateSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableAdpativeCueCoefficientUpdateSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableAdpativeCueCoefficientUpdateSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMuDisableSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuDisableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMuDisableSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuDisableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMuDisableSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuDisableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDataBoostSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDataBoostSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDataBoostSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDataBoostSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDataBoostSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDataBoostSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMuBoostSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuBoostSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMuBoostSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuBoostSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMuBoostSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuBoostSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMuSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMuSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMuSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueNegateBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueNegateBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueNegateBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueNegateBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueNegateBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueNegateBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueBetaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueNegateAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueNegateAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueNegateAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueNegateAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueNegateAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueNegateAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAlphaDisableLeakageRoundSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAlphaDisableLeakageRoundSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAlphaDisableLeakageRoundSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueAlphaLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableMuLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableMuLeakageSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableMuLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableMuLeakageSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableMuLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueDisableMuLeakageSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMuLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuLeakageSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMuLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuLeakageSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMuLeakageSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueMuLeakageSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientThresholdGateEnableSegment_0 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientThresholdGateEnableSegment_0 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientThresholdGateEnableSegment_0 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueCoefficientThresholdValueSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientThresholdValueSegment_0 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueCoefficientThresholdValueSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientThresholdValueSegment_0 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueCoefficientThresholdValueSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientThresholdValueSegment_0 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueCoefficientSubSegmentClearSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientSubSegmentClearSegment_0 6
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueCoefficientSubSegmentClearSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientSubSegmentClearSegment_0 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueCoefficientSubSegmentClearSegment_0 in AQ_Ch1Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg0AecCueLmsControl_CAL_aec_1CueCoefficientSubSegmentClearSegment_0 u6.word_6

/*! \brief Base register address of structure AQ_Ch1Seg0AecFirControl_CAL */
#define AQ_Ch1Seg0AecFirControl_CAL_baseRegisterAddress 0xFAE0
/*! \brief MMD address of structure AQ_Ch1Seg0AecFirControl_CAL */
#define AQ_Ch1Seg0AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirPowerDownSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define AQ_Ch1Seg0AecFirControl_CAL_aec_1FirPowerDownSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirPowerDownSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define bits_AQ_Ch1Seg0AecFirControl_CAL_aec_1FirPowerDownSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirPowerDownSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define word_AQ_Ch1Seg0AecFirControl_CAL_aec_1FirPowerDownSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirGain_3EnableSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define AQ_Ch1Seg0AecFirControl_CAL_aec_1FirGain_3EnableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirGain_3EnableSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define bits_AQ_Ch1Seg0AecFirControl_CAL_aec_1FirGain_3EnableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirGain_3EnableSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define word_AQ_Ch1Seg0AecFirControl_CAL_aec_1FirGain_3EnableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirShiftSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define AQ_Ch1Seg0AecFirControl_CAL_aec_1FirShiftSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirShiftSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define bits_AQ_Ch1Seg0AecFirControl_CAL_aec_1FirShiftSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirShiftSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define word_AQ_Ch1Seg0AecFirControl_CAL_aec_1FirShiftSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirGlobalFlushEnableSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define AQ_Ch1Seg0AecFirControl_CAL_aec_1FirGlobalFlushEnableSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirGlobalFlushEnableSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define bits_AQ_Ch1Seg0AecFirControl_CAL_aec_1FirGlobalFlushEnableSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirGlobalFlushEnableSegment_0 in AQ_Ch1Seg0AecFirControl_CAL */
#define word_AQ_Ch1Seg0AecFirControl_CAL_aec_1FirGlobalFlushEnableSegment_0 u2.word_2

/*! \brief Base register address of structure AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_baseRegisterAddress 0xFAF0
/*! \brief MMD address of structure AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSoftResetSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSoftResetSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSoftResetSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define bits_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSoftResetSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSoftResetSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define word_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSoftResetSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueClockGateEnableSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_aec_1CueClockGateEnableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueClockGateEnableSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define bits_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueClockGateEnableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueClockGateEnableSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define word_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueClockGateEnableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueFreezeEnableSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_aec_1CueFreezeEnableSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueFreezeEnableSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define bits_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueFreezeEnableSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueFreezeEnableSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define word_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueFreezeEnableSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramPowerGatingModeSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramPowerGatingModeSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramPowerGatingModeSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define bits_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramPowerGatingModeSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramPowerGatingModeSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define word_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramPowerGatingModeSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramEmaSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmaSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramEmaSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define bits_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmaSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramEmaSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define word_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmaSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramEmawSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmawSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramEmawSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define bits_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmawSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramEmawSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define word_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmawSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramEmasSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmasSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramEmasSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define bits_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmasSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramEmasSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define word_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramEmasSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueSramRet1nSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramRet1nSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueSramRet1nSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define bits_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramRet1nSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueSramRet1nSegment_1 in AQ_Ch1Seg1AecCueControl_CAL */
#define word_AQ_Ch1Seg1AecCueControl_CAL_aec_1CueSramRet1nSegment_1 u4.word_4

/*! \brief Base register address of structure AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_baseRegisterAddress 0xFAF5
/*! \brief MMD address of structure AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableFirCoefficientDataValidSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableFirCoefficientDataValidSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableFirCoefficientDataValidSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAdaptiveFirSendCoefficientUpdateSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAdaptiveFirSendCoefficientUpdateSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAdaptiveFirSendCoefficientUpdateSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableAdpativeCueCoefficientUpdateSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableAdpativeCueCoefficientUpdateSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableAdpativeCueCoefficientUpdateSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMuDisableSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuDisableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMuDisableSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuDisableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMuDisableSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuDisableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDataBoostSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDataBoostSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDataBoostSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDataBoostSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDataBoostSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDataBoostSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMuBoostSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuBoostSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMuBoostSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuBoostSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMuBoostSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuBoostSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMuSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMuSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMuSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueNegateBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueNegateBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueNegateBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueNegateBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueNegateBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueNegateBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueBetaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueNegateAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueNegateAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueNegateAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueNegateAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueNegateAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueNegateAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAlphaDisableLeakageRoundSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAlphaDisableLeakageRoundSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAlphaDisableLeakageRoundSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueAlphaLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueDisableMuLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableMuLeakageSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueDisableMuLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableMuLeakageSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueDisableMuLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueDisableMuLeakageSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMuLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuLeakageSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMuLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuLeakageSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMuLeakageSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueMuLeakageSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientThresholdGateEnableSegment_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientThresholdGateEnableSegment_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientThresholdGateEnableSegment_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueCoefficientThresholdValueSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientThresholdValueSegment_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueCoefficientThresholdValueSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientThresholdValueSegment_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueCoefficientThresholdValueSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientThresholdValueSegment_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueCoefficientSubSegmentClearSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientSubSegmentClearSegment_1 6
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueCoefficientSubSegmentClearSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientSubSegmentClearSegment_1 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueCoefficientSubSegmentClearSegment_1 in AQ_Ch1Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch1Seg1AecCueLmsControl_CAL_aec_1CueCoefficientSubSegmentClearSegment_1 u6.word_6

/*! \brief Base register address of structure AQ_Ch1Seg1AecFirControl_CAL */
#define AQ_Ch1Seg1AecFirControl_CAL_baseRegisterAddress 0xFB00
/*! \brief MMD address of structure AQ_Ch1Seg1AecFirControl_CAL */
#define AQ_Ch1Seg1AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirPowerDownSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define AQ_Ch1Seg1AecFirControl_CAL_aec_1FirPowerDownSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirPowerDownSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define bits_AQ_Ch1Seg1AecFirControl_CAL_aec_1FirPowerDownSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirPowerDownSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define word_AQ_Ch1Seg1AecFirControl_CAL_aec_1FirPowerDownSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirGain_3EnableSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define AQ_Ch1Seg1AecFirControl_CAL_aec_1FirGain_3EnableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirGain_3EnableSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define bits_AQ_Ch1Seg1AecFirControl_CAL_aec_1FirGain_3EnableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirGain_3EnableSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define word_AQ_Ch1Seg1AecFirControl_CAL_aec_1FirGain_3EnableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirShiftSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define AQ_Ch1Seg1AecFirControl_CAL_aec_1FirShiftSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirShiftSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define bits_AQ_Ch1Seg1AecFirControl_CAL_aec_1FirShiftSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirShiftSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define word_AQ_Ch1Seg1AecFirControl_CAL_aec_1FirShiftSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirGlobalFlushEnableSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define AQ_Ch1Seg1AecFirControl_CAL_aec_1FirGlobalFlushEnableSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirGlobalFlushEnableSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define bits_AQ_Ch1Seg1AecFirControl_CAL_aec_1FirGlobalFlushEnableSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirGlobalFlushEnableSegment_1 in AQ_Ch1Seg1AecFirControl_CAL */
#define word_AQ_Ch1Seg1AecFirControl_CAL_aec_1FirGlobalFlushEnableSegment_1 u2.word_2

/*! \brief Base register address of structure AQ_Ch2AecCueModeControl_CAL */
#define AQ_Ch2AecCueModeControl_CAL_baseRegisterAddress 0xFB10
/*! \brief MMD address of structure AQ_Ch2AecCueModeControl_CAL */
#define AQ_Ch2AecCueModeControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueFlush in AQ_Ch2AecCueModeControl_CAL */
#define AQ_Ch2AecCueModeControl_CAL_aec_2CueFlush 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueFlush in AQ_Ch2AecCueModeControl_CAL */
#define bits_AQ_Ch2AecCueModeControl_CAL_aec_2CueFlush u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueFlush in AQ_Ch2AecCueModeControl_CAL */
#define word_AQ_Ch2AecCueModeControl_CAL_aec_2CueFlush u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2SingleStep in AQ_Ch2AecCueModeControl_CAL */
#define AQ_Ch2AecCueModeControl_CAL_aec_2SingleStep 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2SingleStep in AQ_Ch2AecCueModeControl_CAL */
#define bits_AQ_Ch2AecCueModeControl_CAL_aec_2SingleStep u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2SingleStep in AQ_Ch2AecCueModeControl_CAL */
#define word_AQ_Ch2AecCueModeControl_CAL_aec_2SingleStep u2.word_2

/*! \brief Base register address of structure AQ_Ch2AecCueDataProcessorControl_CAL */
#define AQ_Ch2AecCueDataProcessorControl_CAL_baseRegisterAddress 0xFB14
/*! \brief MMD address of structure AQ_Ch2AecCueDataProcessorControl_CAL */
#define AQ_Ch2AecCueDataProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2DataProcessorRandomDelayEnable in AQ_Ch2AecCueDataProcessorControl_CAL */
#define AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorRandomDelayEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2DataProcessorRandomDelayEnable in AQ_Ch2AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorRandomDelayEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2DataProcessorRandomDelayEnable in AQ_Ch2AecCueDataProcessorControl_CAL */
#define word_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorRandomDelayEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2DataProcessorRandomDelayValue in AQ_Ch2AecCueDataProcessorControl_CAL */
#define AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorRandomDelayValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2DataProcessorRandomDelayValue in AQ_Ch2AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorRandomDelayValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2DataProcessorRandomDelayValue in AQ_Ch2AecCueDataProcessorControl_CAL */
#define word_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorRandomDelayValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2DataProcessorDelay in AQ_Ch2AecCueDataProcessorControl_CAL */
#define AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2DataProcessorDelay in AQ_Ch2AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2DataProcessorDelay in AQ_Ch2AecCueDataProcessorControl_CAL */
#define word_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2DataProcessorForceValueEnable in AQ_Ch2AecCueDataProcessorControl_CAL */
#define AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorForceValueEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2DataProcessorForceValueEnable in AQ_Ch2AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorForceValueEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2DataProcessorForceValueEnable in AQ_Ch2AecCueDataProcessorControl_CAL */
#define word_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorForceValueEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2DataProcessorForceValue in AQ_Ch2AecCueDataProcessorControl_CAL */
#define AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorForceValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2DataProcessorForceValue in AQ_Ch2AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorForceValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2DataProcessorForceValue in AQ_Ch2AecCueDataProcessorControl_CAL */
#define word_AQ_Ch2AecCueDataProcessorControl_CAL_aec_2DataProcessorForceValue u1.word_1

/*! \brief Base register address of structure AQ_Ch2AecCueErrorProcessorControl_CAL */
#define AQ_Ch2AecCueErrorProcessorControl_CAL_baseRegisterAddress 0xFB16
/*! \brief MMD address of structure AQ_Ch2AecCueErrorProcessorControl_CAL */
#define AQ_Ch2AecCueErrorProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2InvertError in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2InvertError 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2InvertError in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2InvertError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2InvertError in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2InvertError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2ErrorProcessorDelay in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2ErrorProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2ErrorProcessorDelay in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2ErrorProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2ErrorProcessorDelay in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2ErrorProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2ErrorProcessorDelaySegment_1 in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2ErrorProcessorDelaySegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2ErrorProcessorDelaySegment_1 in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2ErrorProcessorDelaySegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2ErrorProcessorDelaySegment_1 in AQ_Ch2AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch2AecCueErrorProcessorControl_CAL_aec_2ErrorProcessorDelaySegment_1 u1.word_1

/*! \brief Base register address of structure AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define AQ_Ch2AecCueLeakagePeriodControl_CAL_baseRegisterAddress 0xFB18
/*! \brief MMD address of structure AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define AQ_Ch2AecCueLeakagePeriodControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2LeakageDisable in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakageDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2LeakageDisable in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakageDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2LeakageDisable in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakageDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2LeakagePeriodDisable in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2LeakagePeriodDisable in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2LeakagePeriodDisable in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2LeakagePeriodAbort in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodAbort 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2LeakagePeriodAbort in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodAbort u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2LeakagePeriodAbort in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodAbort u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2LeakagePeriodStart in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2LeakagePeriodStart in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2LeakagePeriodStart in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriodStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2LeakagePeriod in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriod 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2LeakagePeriod in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriod u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2LeakagePeriod in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakagePeriod u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2LeakageIteration in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakageIteration 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2LeakageIteration in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakageIteration u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2LeakageIteration in AQ_Ch2AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch2AecCueLeakagePeriodControl_CAL_aec_2LeakageIteration u2.word_2

/*! \brief Base register address of structure AQ_Ch2AecCueCoefficientScalingControl_CAL */
#define AQ_Ch2AecCueCoefficientScalingControl_CAL_baseRegisterAddress 0xFB1B
/*! \brief MMD address of structure AQ_Ch2AecCueCoefficientScalingControl_CAL */
#define AQ_Ch2AecCueCoefficientScalingControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CoefficientScalingShiftEnable in AQ_Ch2AecCueCoefficientScalingControl_CAL */
#define AQ_Ch2AecCueCoefficientScalingControl_CAL_aec_2CoefficientScalingShiftEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CoefficientScalingShiftEnable in AQ_Ch2AecCueCoefficientScalingControl_CAL */
#define bits_AQ_Ch2AecCueCoefficientScalingControl_CAL_aec_2CoefficientScalingShiftEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CoefficientScalingShiftEnable in AQ_Ch2AecCueCoefficientScalingControl_CAL */
#define word_AQ_Ch2AecCueCoefficientScalingControl_CAL_aec_2CoefficientScalingShiftEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CoefficientScalingShiftValue in AQ_Ch2AecCueCoefficientScalingControl_CAL */
#define AQ_Ch2AecCueCoefficientScalingControl_CAL_aec_2CoefficientScalingShiftValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CoefficientScalingShiftValue in AQ_Ch2AecCueCoefficientScalingControl_CAL */
#define bits_AQ_Ch2AecCueCoefficientScalingControl_CAL_aec_2CoefficientScalingShiftValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CoefficientScalingShiftValue in AQ_Ch2AecCueCoefficientScalingControl_CAL */
#define word_AQ_Ch2AecCueCoefficientScalingControl_CAL_aec_2CoefficientScalingShiftValue u0.word_0

/*! \brief Base register address of structure AQ_Ch2AecFirControl_CAL */
#define AQ_Ch2AecFirControl_CAL_baseRegisterAddress 0xFB1C
/*! \brief MMD address of structure AQ_Ch2AecFirControl_CAL */
#define AQ_Ch2AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirClockShape in AQ_Ch2AecFirControl_CAL */
#define AQ_Ch2AecFirControl_CAL_aec_2FirClockShape 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirClockShape in AQ_Ch2AecFirControl_CAL */
#define bits_AQ_Ch2AecFirControl_CAL_aec_2FirClockShape u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirClockShape in AQ_Ch2AecFirControl_CAL */
#define word_AQ_Ch2AecFirControl_CAL_aec_2FirClockShape u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirForceWakeup in AQ_Ch2AecFirControl_CAL */
#define AQ_Ch2AecFirControl_CAL_aec_2FirForceWakeup 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirForceWakeup in AQ_Ch2AecFirControl_CAL */
#define bits_AQ_Ch2AecFirControl_CAL_aec_2FirForceWakeup u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirForceWakeup in AQ_Ch2AecFirControl_CAL */
#define word_AQ_Ch2AecFirControl_CAL_aec_2FirForceWakeup u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirDftConstant in AQ_Ch2AecFirControl_CAL */
#define AQ_Ch2AecFirControl_CAL_aec_2FirDftConstant 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirDftConstant in AQ_Ch2AecFirControl_CAL */
#define bits_AQ_Ch2AecFirControl_CAL_aec_2FirDftConstant u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirDftConstant in AQ_Ch2AecFirControl_CAL */
#define word_AQ_Ch2AecFirControl_CAL_aec_2FirDftConstant u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirClockEnable in AQ_Ch2AecFirControl_CAL */
#define AQ_Ch2AecFirControl_CAL_aec_2FirClockEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirClockEnable in AQ_Ch2AecFirControl_CAL */
#define bits_AQ_Ch2AecFirControl_CAL_aec_2FirClockEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirClockEnable in AQ_Ch2AecFirControl_CAL */
#define word_AQ_Ch2AecFirControl_CAL_aec_2FirClockEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirDataFlushEnable in AQ_Ch2AecFirControl_CAL */
#define AQ_Ch2AecFirControl_CAL_aec_2FirDataFlushEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirDataFlushEnable in AQ_Ch2AecFirControl_CAL */
#define bits_AQ_Ch2AecFirControl_CAL_aec_2FirDataFlushEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirDataFlushEnable in AQ_Ch2AecFirControl_CAL */
#define word_AQ_Ch2AecFirControl_CAL_aec_2FirDataFlushEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirFlushData in AQ_Ch2AecFirControl_CAL */
#define AQ_Ch2AecFirControl_CAL_aec_2FirFlushData 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirFlushData in AQ_Ch2AecFirControl_CAL */
#define bits_AQ_Ch2AecFirControl_CAL_aec_2FirFlushData u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirFlushData in AQ_Ch2AecFirControl_CAL */
#define word_AQ_Ch2AecFirControl_CAL_aec_2FirFlushData u2.word_2

/*! \brief Base register address of structure AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_baseRegisterAddress 0xFB20
/*! \brief MMD address of structure AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSoftResetSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSoftResetSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSoftResetSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define bits_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSoftResetSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSoftResetSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define word_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSoftResetSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueClockGateEnableSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_aec_2CueClockGateEnableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueClockGateEnableSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define bits_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueClockGateEnableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueClockGateEnableSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define word_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueClockGateEnableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueFreezeEnableSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_aec_2CueFreezeEnableSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueFreezeEnableSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define bits_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueFreezeEnableSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueFreezeEnableSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define word_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueFreezeEnableSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramPowerGatingModeSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramPowerGatingModeSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramPowerGatingModeSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define bits_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramPowerGatingModeSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramPowerGatingModeSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define word_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramPowerGatingModeSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramEmaSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmaSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramEmaSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define bits_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmaSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramEmaSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define word_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmaSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramEmawSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmawSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramEmawSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define bits_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmawSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramEmawSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define word_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmawSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramEmasSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmasSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramEmasSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define bits_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmasSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramEmasSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define word_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramEmasSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramRet1nSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramRet1nSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramRet1nSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define bits_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramRet1nSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramRet1nSegment_0 in AQ_Ch2Seg0AecCueControl_CAL */
#define word_AQ_Ch2Seg0AecCueControl_CAL_aec_2CueSramRet1nSegment_0 u4.word_4

/*! \brief Base register address of structure AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_baseRegisterAddress 0xFB25
/*! \brief MMD address of structure AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableFirCoefficientDataValidSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableFirCoefficientDataValidSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableFirCoefficientDataValidSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAdaptiveFirSendCoefficientUpdateSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAdaptiveFirSendCoefficientUpdateSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAdaptiveFirSendCoefficientUpdateSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableAdpativeCueCoefficientUpdateSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableAdpativeCueCoefficientUpdateSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableAdpativeCueCoefficientUpdateSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMuDisableSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuDisableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMuDisableSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuDisableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMuDisableSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuDisableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDataBoostSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDataBoostSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDataBoostSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDataBoostSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDataBoostSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDataBoostSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMuBoostSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuBoostSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMuBoostSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuBoostSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMuBoostSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuBoostSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMuSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMuSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMuSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueNegateBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueNegateBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueNegateBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueNegateBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueNegateBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueNegateBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueBetaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueNegateAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueNegateAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueNegateAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueNegateAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueNegateAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueNegateAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAlphaDisableLeakageRoundSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAlphaDisableLeakageRoundSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAlphaDisableLeakageRoundSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueAlphaLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableMuLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableMuLeakageSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableMuLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableMuLeakageSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableMuLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueDisableMuLeakageSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMuLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuLeakageSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMuLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuLeakageSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMuLeakageSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueMuLeakageSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientThresholdGateEnableSegment_0 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientThresholdGateEnableSegment_0 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientThresholdGateEnableSegment_0 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueCoefficientThresholdValueSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientThresholdValueSegment_0 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueCoefficientThresholdValueSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientThresholdValueSegment_0 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueCoefficientThresholdValueSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientThresholdValueSegment_0 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueCoefficientSubSegmentClearSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientSubSegmentClearSegment_0 6
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueCoefficientSubSegmentClearSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientSubSegmentClearSegment_0 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueCoefficientSubSegmentClearSegment_0 in AQ_Ch2Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg0AecCueLmsControl_CAL_aec_2CueCoefficientSubSegmentClearSegment_0 u6.word_6

/*! \brief Base register address of structure AQ_Ch2Seg0AecFirControl_CAL */
#define AQ_Ch2Seg0AecFirControl_CAL_baseRegisterAddress 0xFB30
/*! \brief MMD address of structure AQ_Ch2Seg0AecFirControl_CAL */
#define AQ_Ch2Seg0AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirPowerDownSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define AQ_Ch2Seg0AecFirControl_CAL_aec_2FirPowerDownSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirPowerDownSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define bits_AQ_Ch2Seg0AecFirControl_CAL_aec_2FirPowerDownSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirPowerDownSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define word_AQ_Ch2Seg0AecFirControl_CAL_aec_2FirPowerDownSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirGain_3EnableSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define AQ_Ch2Seg0AecFirControl_CAL_aec_2FirGain_3EnableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirGain_3EnableSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define bits_AQ_Ch2Seg0AecFirControl_CAL_aec_2FirGain_3EnableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirGain_3EnableSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define word_AQ_Ch2Seg0AecFirControl_CAL_aec_2FirGain_3EnableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirShiftSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define AQ_Ch2Seg0AecFirControl_CAL_aec_2FirShiftSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirShiftSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define bits_AQ_Ch2Seg0AecFirControl_CAL_aec_2FirShiftSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirShiftSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define word_AQ_Ch2Seg0AecFirControl_CAL_aec_2FirShiftSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirGlobalFlushEnableSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define AQ_Ch2Seg0AecFirControl_CAL_aec_2FirGlobalFlushEnableSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirGlobalFlushEnableSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define bits_AQ_Ch2Seg0AecFirControl_CAL_aec_2FirGlobalFlushEnableSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirGlobalFlushEnableSegment_0 in AQ_Ch2Seg0AecFirControl_CAL */
#define word_AQ_Ch2Seg0AecFirControl_CAL_aec_2FirGlobalFlushEnableSegment_0 u2.word_2

/*! \brief Base register address of structure AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_baseRegisterAddress 0xFB40
/*! \brief MMD address of structure AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSoftResetSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSoftResetSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSoftResetSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define bits_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSoftResetSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSoftResetSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define word_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSoftResetSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueClockGateEnableSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_aec_2CueClockGateEnableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueClockGateEnableSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define bits_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueClockGateEnableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueClockGateEnableSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define word_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueClockGateEnableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueFreezeEnableSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_aec_2CueFreezeEnableSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueFreezeEnableSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define bits_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueFreezeEnableSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueFreezeEnableSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define word_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueFreezeEnableSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramPowerGatingModeSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramPowerGatingModeSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramPowerGatingModeSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define bits_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramPowerGatingModeSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramPowerGatingModeSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define word_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramPowerGatingModeSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramEmaSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmaSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramEmaSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define bits_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmaSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramEmaSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define word_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmaSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramEmawSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmawSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramEmawSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define bits_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmawSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramEmawSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define word_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmawSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramEmasSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmasSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramEmasSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define bits_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmasSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramEmasSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define word_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramEmasSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueSramRet1nSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramRet1nSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueSramRet1nSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define bits_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramRet1nSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueSramRet1nSegment_1 in AQ_Ch2Seg1AecCueControl_CAL */
#define word_AQ_Ch2Seg1AecCueControl_CAL_aec_2CueSramRet1nSegment_1 u4.word_4

/*! \brief Base register address of structure AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_baseRegisterAddress 0xFB45
/*! \brief MMD address of structure AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableFirCoefficientDataValidSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableFirCoefficientDataValidSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableFirCoefficientDataValidSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAdaptiveFirSendCoefficientUpdateSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAdaptiveFirSendCoefficientUpdateSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAdaptiveFirSendCoefficientUpdateSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableAdpativeCueCoefficientUpdateSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableAdpativeCueCoefficientUpdateSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableAdpativeCueCoefficientUpdateSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMuDisableSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuDisableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMuDisableSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuDisableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMuDisableSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuDisableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDataBoostSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDataBoostSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDataBoostSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDataBoostSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDataBoostSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDataBoostSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMuBoostSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuBoostSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMuBoostSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuBoostSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMuBoostSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuBoostSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMuSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMuSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMuSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueNegateBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueNegateBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueNegateBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueNegateBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueNegateBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueNegateBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueBetaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueNegateAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueNegateAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueNegateAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueNegateAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueNegateAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueNegateAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAlphaDisableLeakageRoundSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAlphaDisableLeakageRoundSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAlphaDisableLeakageRoundSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueAlphaLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueDisableMuLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableMuLeakageSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueDisableMuLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableMuLeakageSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueDisableMuLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueDisableMuLeakageSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMuLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuLeakageSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMuLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuLeakageSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMuLeakageSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueMuLeakageSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientThresholdGateEnableSegment_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientThresholdGateEnableSegment_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientThresholdGateEnableSegment_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueCoefficientThresholdValueSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientThresholdValueSegment_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueCoefficientThresholdValueSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientThresholdValueSegment_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueCoefficientThresholdValueSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientThresholdValueSegment_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueCoefficientSubSegmentClearSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientSubSegmentClearSegment_1 6
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueCoefficientSubSegmentClearSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientSubSegmentClearSegment_1 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueCoefficientSubSegmentClearSegment_1 in AQ_Ch2Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch2Seg1AecCueLmsControl_CAL_aec_2CueCoefficientSubSegmentClearSegment_1 u6.word_6

/*! \brief Base register address of structure AQ_Ch2Seg1AecFirControl_CAL */
#define AQ_Ch2Seg1AecFirControl_CAL_baseRegisterAddress 0xFB50
/*! \brief MMD address of structure AQ_Ch2Seg1AecFirControl_CAL */
#define AQ_Ch2Seg1AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirPowerDownSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define AQ_Ch2Seg1AecFirControl_CAL_aec_2FirPowerDownSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirPowerDownSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define bits_AQ_Ch2Seg1AecFirControl_CAL_aec_2FirPowerDownSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirPowerDownSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define word_AQ_Ch2Seg1AecFirControl_CAL_aec_2FirPowerDownSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirGain_3EnableSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define AQ_Ch2Seg1AecFirControl_CAL_aec_2FirGain_3EnableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirGain_3EnableSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define bits_AQ_Ch2Seg1AecFirControl_CAL_aec_2FirGain_3EnableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirGain_3EnableSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define word_AQ_Ch2Seg1AecFirControl_CAL_aec_2FirGain_3EnableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirShiftSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define AQ_Ch2Seg1AecFirControl_CAL_aec_2FirShiftSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirShiftSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define bits_AQ_Ch2Seg1AecFirControl_CAL_aec_2FirShiftSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirShiftSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define word_AQ_Ch2Seg1AecFirControl_CAL_aec_2FirShiftSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirGlobalFlushEnableSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define AQ_Ch2Seg1AecFirControl_CAL_aec_2FirGlobalFlushEnableSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirGlobalFlushEnableSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define bits_AQ_Ch2Seg1AecFirControl_CAL_aec_2FirGlobalFlushEnableSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirGlobalFlushEnableSegment_1 in AQ_Ch2Seg1AecFirControl_CAL */
#define word_AQ_Ch2Seg1AecFirControl_CAL_aec_2FirGlobalFlushEnableSegment_1 u2.word_2

/*! \brief Base register address of structure AQ_Ch3AecCueModeControl_CAL */
#define AQ_Ch3AecCueModeControl_CAL_baseRegisterAddress 0xFB60
/*! \brief MMD address of structure AQ_Ch3AecCueModeControl_CAL */
#define AQ_Ch3AecCueModeControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueFlush in AQ_Ch3AecCueModeControl_CAL */
#define AQ_Ch3AecCueModeControl_CAL_aec_3CueFlush 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueFlush in AQ_Ch3AecCueModeControl_CAL */
#define bits_AQ_Ch3AecCueModeControl_CAL_aec_3CueFlush u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueFlush in AQ_Ch3AecCueModeControl_CAL */
#define word_AQ_Ch3AecCueModeControl_CAL_aec_3CueFlush u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3SingleStep in AQ_Ch3AecCueModeControl_CAL */
#define AQ_Ch3AecCueModeControl_CAL_aec_3SingleStep 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3SingleStep in AQ_Ch3AecCueModeControl_CAL */
#define bits_AQ_Ch3AecCueModeControl_CAL_aec_3SingleStep u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3SingleStep in AQ_Ch3AecCueModeControl_CAL */
#define word_AQ_Ch3AecCueModeControl_CAL_aec_3SingleStep u2.word_2

/*! \brief Base register address of structure AQ_Ch3AecCueDataProcessorControl_CAL */
#define AQ_Ch3AecCueDataProcessorControl_CAL_baseRegisterAddress 0xFB64
/*! \brief MMD address of structure AQ_Ch3AecCueDataProcessorControl_CAL */
#define AQ_Ch3AecCueDataProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3DataProcessorRandomDelayEnable in AQ_Ch3AecCueDataProcessorControl_CAL */
#define AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorRandomDelayEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3DataProcessorRandomDelayEnable in AQ_Ch3AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorRandomDelayEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3DataProcessorRandomDelayEnable in AQ_Ch3AecCueDataProcessorControl_CAL */
#define word_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorRandomDelayEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3DataProcessorRandomDelayValue in AQ_Ch3AecCueDataProcessorControl_CAL */
#define AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorRandomDelayValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3DataProcessorRandomDelayValue in AQ_Ch3AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorRandomDelayValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3DataProcessorRandomDelayValue in AQ_Ch3AecCueDataProcessorControl_CAL */
#define word_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorRandomDelayValue u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3DataProcessorDelay in AQ_Ch3AecCueDataProcessorControl_CAL */
#define AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3DataProcessorDelay in AQ_Ch3AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3DataProcessorDelay in AQ_Ch3AecCueDataProcessorControl_CAL */
#define word_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3DataProcessorForceValueEnable in AQ_Ch3AecCueDataProcessorControl_CAL */
#define AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorForceValueEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3DataProcessorForceValueEnable in AQ_Ch3AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorForceValueEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3DataProcessorForceValueEnable in AQ_Ch3AecCueDataProcessorControl_CAL */
#define word_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorForceValueEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3DataProcessorForceValue in AQ_Ch3AecCueDataProcessorControl_CAL */
#define AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorForceValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3DataProcessorForceValue in AQ_Ch3AecCueDataProcessorControl_CAL */
#define bits_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorForceValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3DataProcessorForceValue in AQ_Ch3AecCueDataProcessorControl_CAL */
#define word_AQ_Ch3AecCueDataProcessorControl_CAL_aec_3DataProcessorForceValue u1.word_1

/*! \brief Base register address of structure AQ_Ch3AecCueErrorProcessorControl_CAL */
#define AQ_Ch3AecCueErrorProcessorControl_CAL_baseRegisterAddress 0xFB66
/*! \brief MMD address of structure AQ_Ch3AecCueErrorProcessorControl_CAL */
#define AQ_Ch3AecCueErrorProcessorControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3InvertError in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3InvertError 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3InvertError in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3InvertError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3InvertError in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3InvertError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3ErrorProcessorDelay in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3ErrorProcessorDelay 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3ErrorProcessorDelay in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3ErrorProcessorDelay u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3ErrorProcessorDelay in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3ErrorProcessorDelay u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3ErrorProcessorDelaySegment_1 in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3ErrorProcessorDelaySegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3ErrorProcessorDelaySegment_1 in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define bits_AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3ErrorProcessorDelaySegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3ErrorProcessorDelaySegment_1 in AQ_Ch3AecCueErrorProcessorControl_CAL */
#define word_AQ_Ch3AecCueErrorProcessorControl_CAL_aec_3ErrorProcessorDelaySegment_1 u1.word_1

/*! \brief Base register address of structure AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define AQ_Ch3AecCueLeakagePeriodControl_CAL_baseRegisterAddress 0xFB68
/*! \brief MMD address of structure AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define AQ_Ch3AecCueLeakagePeriodControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3LeakageDisable in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakageDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3LeakageDisable in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakageDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3LeakageDisable in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakageDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3LeakagePeriodDisable in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3LeakagePeriodDisable in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3LeakagePeriodDisable in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodDisable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3LeakagePeriodAbort in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodAbort 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3LeakagePeriodAbort in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodAbort u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3LeakagePeriodAbort in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodAbort u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3LeakagePeriodStart in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3LeakagePeriodStart in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3LeakagePeriodStart in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriodStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3LeakagePeriod in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriod 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3LeakagePeriod in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriod u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3LeakagePeriod in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakagePeriod u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3LeakageIteration in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakageIteration 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3LeakageIteration in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define bits_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakageIteration u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3LeakageIteration in AQ_Ch3AecCueLeakagePeriodControl_CAL */
#define word_AQ_Ch3AecCueLeakagePeriodControl_CAL_aec_3LeakageIteration u2.word_2

/*! \brief Base register address of structure AQ_Ch3AecCueCoefficientScalingControl_CAL */
#define AQ_Ch3AecCueCoefficientScalingControl_CAL_baseRegisterAddress 0xFB6B
/*! \brief MMD address of structure AQ_Ch3AecCueCoefficientScalingControl_CAL */
#define AQ_Ch3AecCueCoefficientScalingControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CoefficientScalingShiftEnable in AQ_Ch3AecCueCoefficientScalingControl_CAL */
#define AQ_Ch3AecCueCoefficientScalingControl_CAL_aec_3CoefficientScalingShiftEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CoefficientScalingShiftEnable in AQ_Ch3AecCueCoefficientScalingControl_CAL */
#define bits_AQ_Ch3AecCueCoefficientScalingControl_CAL_aec_3CoefficientScalingShiftEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CoefficientScalingShiftEnable in AQ_Ch3AecCueCoefficientScalingControl_CAL */
#define word_AQ_Ch3AecCueCoefficientScalingControl_CAL_aec_3CoefficientScalingShiftEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CoefficientScalingShiftValue in AQ_Ch3AecCueCoefficientScalingControl_CAL */
#define AQ_Ch3AecCueCoefficientScalingControl_CAL_aec_3CoefficientScalingShiftValue 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CoefficientScalingShiftValue in AQ_Ch3AecCueCoefficientScalingControl_CAL */
#define bits_AQ_Ch3AecCueCoefficientScalingControl_CAL_aec_3CoefficientScalingShiftValue u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CoefficientScalingShiftValue in AQ_Ch3AecCueCoefficientScalingControl_CAL */
#define word_AQ_Ch3AecCueCoefficientScalingControl_CAL_aec_3CoefficientScalingShiftValue u0.word_0

/*! \brief Base register address of structure AQ_Ch3AecFirControl_CAL */
#define AQ_Ch3AecFirControl_CAL_baseRegisterAddress 0xFB6C
/*! \brief MMD address of structure AQ_Ch3AecFirControl_CAL */
#define AQ_Ch3AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirClockShape in AQ_Ch3AecFirControl_CAL */
#define AQ_Ch3AecFirControl_CAL_aec_3FirClockShape 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirClockShape in AQ_Ch3AecFirControl_CAL */
#define bits_AQ_Ch3AecFirControl_CAL_aec_3FirClockShape u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirClockShape in AQ_Ch3AecFirControl_CAL */
#define word_AQ_Ch3AecFirControl_CAL_aec_3FirClockShape u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirForceWakeup in AQ_Ch3AecFirControl_CAL */
#define AQ_Ch3AecFirControl_CAL_aec_3FirForceWakeup 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirForceWakeup in AQ_Ch3AecFirControl_CAL */
#define bits_AQ_Ch3AecFirControl_CAL_aec_3FirForceWakeup u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirForceWakeup in AQ_Ch3AecFirControl_CAL */
#define word_AQ_Ch3AecFirControl_CAL_aec_3FirForceWakeup u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirDftConstant in AQ_Ch3AecFirControl_CAL */
#define AQ_Ch3AecFirControl_CAL_aec_3FirDftConstant 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirDftConstant in AQ_Ch3AecFirControl_CAL */
#define bits_AQ_Ch3AecFirControl_CAL_aec_3FirDftConstant u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirDftConstant in AQ_Ch3AecFirControl_CAL */
#define word_AQ_Ch3AecFirControl_CAL_aec_3FirDftConstant u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirClockEnable in AQ_Ch3AecFirControl_CAL */
#define AQ_Ch3AecFirControl_CAL_aec_3FirClockEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirClockEnable in AQ_Ch3AecFirControl_CAL */
#define bits_AQ_Ch3AecFirControl_CAL_aec_3FirClockEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirClockEnable in AQ_Ch3AecFirControl_CAL */
#define word_AQ_Ch3AecFirControl_CAL_aec_3FirClockEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirDataFlushEnable in AQ_Ch3AecFirControl_CAL */
#define AQ_Ch3AecFirControl_CAL_aec_3FirDataFlushEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirDataFlushEnable in AQ_Ch3AecFirControl_CAL */
#define bits_AQ_Ch3AecFirControl_CAL_aec_3FirDataFlushEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirDataFlushEnable in AQ_Ch3AecFirControl_CAL */
#define word_AQ_Ch3AecFirControl_CAL_aec_3FirDataFlushEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirFlushData in AQ_Ch3AecFirControl_CAL */
#define AQ_Ch3AecFirControl_CAL_aec_3FirFlushData 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirFlushData in AQ_Ch3AecFirControl_CAL */
#define bits_AQ_Ch3AecFirControl_CAL_aec_3FirFlushData u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirFlushData in AQ_Ch3AecFirControl_CAL */
#define word_AQ_Ch3AecFirControl_CAL_aec_3FirFlushData u2.word_2

/*! \brief Base register address of structure AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_baseRegisterAddress 0xFB70
/*! \brief MMD address of structure AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSoftResetSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSoftResetSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSoftResetSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define bits_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSoftResetSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSoftResetSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define word_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSoftResetSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueClockGateEnableSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_aec_3CueClockGateEnableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueClockGateEnableSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define bits_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueClockGateEnableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueClockGateEnableSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define word_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueClockGateEnableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueFreezeEnableSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_aec_3CueFreezeEnableSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueFreezeEnableSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define bits_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueFreezeEnableSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueFreezeEnableSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define word_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueFreezeEnableSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramPowerGatingModeSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramPowerGatingModeSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramPowerGatingModeSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define bits_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramPowerGatingModeSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramPowerGatingModeSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define word_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramPowerGatingModeSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramEmaSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmaSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramEmaSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define bits_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmaSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramEmaSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define word_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmaSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramEmawSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmawSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramEmawSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define bits_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmawSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramEmawSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define word_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmawSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramEmasSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmasSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramEmasSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define bits_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmasSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramEmasSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define word_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramEmasSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramRet1nSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramRet1nSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramRet1nSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define bits_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramRet1nSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramRet1nSegment_0 in AQ_Ch3Seg0AecCueControl_CAL */
#define word_AQ_Ch3Seg0AecCueControl_CAL_aec_3CueSramRet1nSegment_0 u4.word_4

/*! \brief Base register address of structure AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_baseRegisterAddress 0xFB75
/*! \brief MMD address of structure AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableFirCoefficientDataValidSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableFirCoefficientDataValidSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableFirCoefficientDataValidSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableFirCoefficientDataValidSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAdaptiveFirSendCoefficientUpdateSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAdaptiveFirSendCoefficientUpdateSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueAdaptiveFirSendCoefficientUpdateSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAdaptiveFirSendCoefficientUpdateSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableAdpativeCueCoefficientUpdateSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableAdpativeCueCoefficientUpdateSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableAdpativeCueCoefficientUpdateSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableAdpativeCueCoefficientUpdateSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMuDisableSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuDisableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMuDisableSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuDisableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMuDisableSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuDisableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDataBoostSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDataBoostSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDataBoostSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDataBoostSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDataBoostSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDataBoostSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMuBoostSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuBoostSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMuBoostSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuBoostSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMuBoostSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuBoostSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMuSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMuSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMuSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueNegateBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueNegateBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueNegateBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueNegateBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueNegateBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueNegateBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueBetaLeakageSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueBetaLeakageSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueBetaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueBetaLeakageSegment_0 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueNegateAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueNegateAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueNegateAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueNegateAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueNegateAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueNegateAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAlphaDisableLeakageRoundSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAlphaDisableLeakageRoundSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueAlphaDisableLeakageRoundSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAlphaDisableLeakageRoundSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAlphaLeakageSegment_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAlphaLeakageSegment_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueAlphaLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueAlphaLeakageSegment_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableMuLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableMuLeakageSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableMuLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableMuLeakageSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableMuLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueDisableMuLeakageSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMuLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuLeakageSegment_0 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMuLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuLeakageSegment_0 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMuLeakageSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueMuLeakageSegment_0 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientThresholdGateEnableSegment_0 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientThresholdGateEnableSegment_0 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueCoefficientThresholdGateEnableSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientThresholdGateEnableSegment_0 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueCoefficientThresholdValueSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientThresholdValueSegment_0 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueCoefficientThresholdValueSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientThresholdValueSegment_0 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueCoefficientThresholdValueSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientThresholdValueSegment_0 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueCoefficientSubSegmentClearSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientSubSegmentClearSegment_0 6
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueCoefficientSubSegmentClearSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientSubSegmentClearSegment_0 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueCoefficientSubSegmentClearSegment_0 in AQ_Ch3Seg0AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg0AecCueLmsControl_CAL_aec_3CueCoefficientSubSegmentClearSegment_0 u6.word_6

/*! \brief Base register address of structure AQ_Ch3Seg0AecFirControl_CAL */
#define AQ_Ch3Seg0AecFirControl_CAL_baseRegisterAddress 0xFB80
/*! \brief MMD address of structure AQ_Ch3Seg0AecFirControl_CAL */
#define AQ_Ch3Seg0AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirPowerDownSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define AQ_Ch3Seg0AecFirControl_CAL_aec_3FirPowerDownSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirPowerDownSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define bits_AQ_Ch3Seg0AecFirControl_CAL_aec_3FirPowerDownSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirPowerDownSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define word_AQ_Ch3Seg0AecFirControl_CAL_aec_3FirPowerDownSegment_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirGain_3EnableSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define AQ_Ch3Seg0AecFirControl_CAL_aec_3FirGain_3EnableSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirGain_3EnableSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define bits_AQ_Ch3Seg0AecFirControl_CAL_aec_3FirGain_3EnableSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirGain_3EnableSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define word_AQ_Ch3Seg0AecFirControl_CAL_aec_3FirGain_3EnableSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirShiftSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define AQ_Ch3Seg0AecFirControl_CAL_aec_3FirShiftSegment_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirShiftSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define bits_AQ_Ch3Seg0AecFirControl_CAL_aec_3FirShiftSegment_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirShiftSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define word_AQ_Ch3Seg0AecFirControl_CAL_aec_3FirShiftSegment_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirGlobalFlushEnableSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define AQ_Ch3Seg0AecFirControl_CAL_aec_3FirGlobalFlushEnableSegment_0 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirGlobalFlushEnableSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define bits_AQ_Ch3Seg0AecFirControl_CAL_aec_3FirGlobalFlushEnableSegment_0 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirGlobalFlushEnableSegment_0 in AQ_Ch3Seg0AecFirControl_CAL */
#define word_AQ_Ch3Seg0AecFirControl_CAL_aec_3FirGlobalFlushEnableSegment_0 u2.word_2

/*! \brief Base register address of structure AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_baseRegisterAddress 0xFB90
/*! \brief MMD address of structure AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSoftResetSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSoftResetSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSoftResetSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define bits_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSoftResetSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSoftResetSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define word_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSoftResetSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueClockGateEnableSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_aec_3CueClockGateEnableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueClockGateEnableSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define bits_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueClockGateEnableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueClockGateEnableSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define word_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueClockGateEnableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueFreezeEnableSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_aec_3CueFreezeEnableSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueFreezeEnableSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define bits_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueFreezeEnableSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueFreezeEnableSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define word_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueFreezeEnableSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramPowerGatingModeSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramPowerGatingModeSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramPowerGatingModeSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define bits_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramPowerGatingModeSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramPowerGatingModeSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define word_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramPowerGatingModeSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramEmaSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmaSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramEmaSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define bits_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmaSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramEmaSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define word_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmaSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramEmawSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmawSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramEmawSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define bits_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmawSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramEmawSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define word_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmawSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramEmasSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmasSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramEmasSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define bits_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmasSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramEmasSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define word_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramEmasSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueSramRet1nSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramRet1nSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueSramRet1nSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define bits_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramRet1nSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueSramRet1nSegment_1 in AQ_Ch3Seg1AecCueControl_CAL */
#define word_AQ_Ch3Seg1AecCueControl_CAL_aec_3CueSramRet1nSegment_1 u4.word_4

/*! \brief Base register address of structure AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_baseRegisterAddress 0xFB95
/*! \brief MMD address of structure AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableFirCoefficientDataValidSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableFirCoefficientDataValidSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableFirCoefficientDataValidSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableFirCoefficientDataValidSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAdaptiveFirSendCoefficientUpdateSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAdaptiveFirSendCoefficientUpdateSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueAdaptiveFirSendCoefficientUpdateSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAdaptiveFirSendCoefficientUpdateSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableAdpativeCueCoefficientUpdateSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableAdpativeCueCoefficientUpdateSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableAdpativeCueCoefficientUpdateSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableAdpativeCueCoefficientUpdateSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMuDisableSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuDisableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMuDisableSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuDisableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMuDisableSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuDisableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDataBoostSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDataBoostSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDataBoostSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDataBoostSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDataBoostSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDataBoostSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMuBoostSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuBoostSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMuBoostSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuBoostSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMuBoostSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuBoostSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMuSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMuSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMuSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueNegateBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueNegateBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueNegateBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueNegateBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueNegateBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueNegateBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueBetaLeakageSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueBetaLeakageSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueBetaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueBetaLeakageSegment_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueNegateAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueNegateAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueNegateAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueNegateAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueNegateAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueNegateAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAlphaDisableLeakageRoundSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAlphaDisableLeakageRoundSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueAlphaDisableLeakageRoundSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAlphaDisableLeakageRoundSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAlphaLeakageSegment_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAlphaLeakageSegment_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueAlphaLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueAlphaLeakageSegment_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueDisableMuLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableMuLeakageSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueDisableMuLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableMuLeakageSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueDisableMuLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueDisableMuLeakageSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMuLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuLeakageSegment_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMuLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuLeakageSegment_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMuLeakageSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueMuLeakageSegment_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientThresholdGateEnableSegment_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientThresholdGateEnableSegment_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueCoefficientThresholdGateEnableSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientThresholdGateEnableSegment_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueCoefficientThresholdValueSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientThresholdValueSegment_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueCoefficientThresholdValueSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientThresholdValueSegment_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueCoefficientThresholdValueSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientThresholdValueSegment_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueCoefficientSubSegmentClearSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientSubSegmentClearSegment_1 6
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueCoefficientSubSegmentClearSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define bits_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientSubSegmentClearSegment_1 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueCoefficientSubSegmentClearSegment_1 in AQ_Ch3Seg1AecCueLmsControl_CAL */
#define word_AQ_Ch3Seg1AecCueLmsControl_CAL_aec_3CueCoefficientSubSegmentClearSegment_1 u6.word_6

/*! \brief Base register address of structure AQ_Ch3Seg1AecFirControl_CAL */
#define AQ_Ch3Seg1AecFirControl_CAL_baseRegisterAddress 0xFBA0
/*! \brief MMD address of structure AQ_Ch3Seg1AecFirControl_CAL */
#define AQ_Ch3Seg1AecFirControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirPowerDownSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define AQ_Ch3Seg1AecFirControl_CAL_aec_3FirPowerDownSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirPowerDownSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define bits_AQ_Ch3Seg1AecFirControl_CAL_aec_3FirPowerDownSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirPowerDownSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define word_AQ_Ch3Seg1AecFirControl_CAL_aec_3FirPowerDownSegment_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirGain_3EnableSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define AQ_Ch3Seg1AecFirControl_CAL_aec_3FirGain_3EnableSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirGain_3EnableSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define bits_AQ_Ch3Seg1AecFirControl_CAL_aec_3FirGain_3EnableSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirGain_3EnableSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define word_AQ_Ch3Seg1AecFirControl_CAL_aec_3FirGain_3EnableSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirShiftSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define AQ_Ch3Seg1AecFirControl_CAL_aec_3FirShiftSegment_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirShiftSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define bits_AQ_Ch3Seg1AecFirControl_CAL_aec_3FirShiftSegment_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirShiftSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define word_AQ_Ch3Seg1AecFirControl_CAL_aec_3FirShiftSegment_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirGlobalFlushEnableSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define AQ_Ch3Seg1AecFirControl_CAL_aec_3FirGlobalFlushEnableSegment_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirGlobalFlushEnableSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define bits_AQ_Ch3Seg1AecFirControl_CAL_aec_3FirGlobalFlushEnableSegment_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirGlobalFlushEnableSegment_1 in AQ_Ch3Seg1AecFirControl_CAL */
#define word_AQ_Ch3Seg1AecFirControl_CAL_aec_3FirGlobalFlushEnableSegment_1 u2.word_2

/*! \brief Base register address of structure AQ_AecGenericCycleCountStatus_CAL */
#define AQ_AecGenericCycleCountStatus_CAL_baseRegisterAddress 0xFBB0
/*! \brief MMD address of structure AQ_AecGenericCycleCountStatus_CAL */
#define AQ_AecGenericCycleCountStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aecCycleCountDone in AQ_AecGenericCycleCountStatus_CAL */
#define AQ_AecGenericCycleCountStatus_CAL_aecCycleCountDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aecCycleCountDone in AQ_AecGenericCycleCountStatus_CAL */
#define bits_AQ_AecGenericCycleCountStatus_CAL_aecCycleCountDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aecCycleCountDone in AQ_AecGenericCycleCountStatus_CAL */
#define word_AQ_AecGenericCycleCountStatus_CAL_aecCycleCountDone u0.word_0

/*! \brief Base register address of structure AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_baseRegisterAddress 0xFBB1
/*! \brief MMD address of structure AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_3FifoSyncWarning 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_3FifoSyncWarning u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_3FifoSyncWarning u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_2FifoSyncWarning 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_2FifoSyncWarning u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_2FifoSyncWarning u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_1FifoSyncWarning 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_1FifoSyncWarning u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_1FifoSyncWarning u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_0FifoSyncWarning 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_0FifoSyncWarning u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_0FifoSyncWarning u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_3FifoSyncError 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_3FifoSyncError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_3FifoSyncError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_2FifoSyncError 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_2FifoSyncError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_2FifoSyncError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_1FifoSyncError 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_1FifoSyncError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_1FifoSyncError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_0FifoSyncError 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_0FifoSyncError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_0FifoSyncError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_3FifoParityError 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_3FifoParityError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_3FifoParityError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_2FifoParityError 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_2FifoParityError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_2FifoParityError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_1FifoParityError 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_1FifoParityError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_1FifoParityError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure asrAec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_asrAec_0FifoParityError 0
/*! \brief Preprocessor variable to relate field to bit position in structure asrAec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_asrAec_0FifoParityError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure asrAec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_asrAec_0FifoParityError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoSyncWarning 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoSyncWarning u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoSyncWarning u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoSyncWarning 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoSyncWarning u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoSyncWarning u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoSyncWarning 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoSyncWarning u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoSyncWarning u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoSyncWarning 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoSyncWarning u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoSyncWarning u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoSyncError 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoSyncError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoSyncError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoSyncError 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoSyncError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoSyncError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoSyncError 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoSyncError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoSyncError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoSyncError 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoSyncError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoSyncError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoParityError 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoParityError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_3FifoParityError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoParityError 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoParityError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_2FifoParityError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoParityError 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoParityError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_1FifoParityError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_128Aec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoParityError 1
/*! \brief Preprocessor variable to relate field to bit position in structure afo_128Aec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoParityError u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure afo_128Aec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_128Aec_0FifoParityError u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoSyncWarning 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoSyncWarning u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoSyncWarning u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoSyncWarning 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoSyncWarning u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoSyncWarning u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoSyncWarning 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoSyncWarning u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoSyncWarning u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoSyncWarning 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoSyncWarning u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoSyncWarning u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoSyncError 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoSyncError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoSyncError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoSyncError 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoSyncError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoSyncError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoSyncError 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoSyncError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoSyncError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoSyncError 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoSyncError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoSyncError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoParityError 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoParityError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_3FifoParityError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoParityError 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoParityError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_2FifoParityError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoParityError 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoParityError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_1FifoParityError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure afo_64Aec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoParityError 2
/*! \brief Preprocessor variable to relate field to bit position in structure afo_64Aec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoParityError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure afo_64Aec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_afo_64Aec_0FifoParityError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_3FifoSyncWarning 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_3FifoSyncWarning u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_3FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_3FifoSyncWarning u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_2FifoSyncWarning 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_2FifoSyncWarning u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_2FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_2FifoSyncWarning u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_1FifoSyncWarning 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_1FifoSyncWarning u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_1FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_1FifoSyncWarning u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_0FifoSyncWarning 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_0FifoSyncWarning u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_0FifoSyncWarning in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_0FifoSyncWarning u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_3FifoSyncError 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_3FifoSyncError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_3FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_3FifoSyncError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_2FifoSyncError 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_2FifoSyncError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_2FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_2FifoSyncError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_1FifoSyncError 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_1FifoSyncError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_1FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_1FifoSyncError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_0FifoSyncError 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_0FifoSyncError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_0FifoSyncError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_0FifoSyncError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_3FifoParityError 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_3FifoParityError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_3FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_3FifoParityError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_2FifoParityError 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_2FifoParityError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_2FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_2FifoParityError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_1FifoParityError 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_1FifoParityError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_1FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_1FifoParityError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure errorInAec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define AQ_AecDataSyncStatus_CAL_errorInAec_0FifoParityError 3
/*! \brief Preprocessor variable to relate field to bit position in structure errorInAec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define bits_AQ_AecDataSyncStatus_CAL_errorInAec_0FifoParityError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure errorInAec_0FifoParityError in AQ_AecDataSyncStatus_CAL */
#define word_AQ_AecDataSyncStatus_CAL_errorInAec_0FifoParityError u3.word_3

/*! \brief Base register address of structure AQ_AecMemoryParityStatus_CAL */
#define AQ_AecMemoryParityStatus_CAL_baseRegisterAddress 0xFBB8
/*! \brief MMD address of structure AQ_AecMemoryParityStatus_CAL */
#define AQ_AecMemoryParityStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define AQ_AecMemoryParityStatus_CAL_aec_3CueMemoryParityStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define bits_AQ_AecMemoryParityStatus_CAL_aec_3CueMemoryParityStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define word_AQ_AecMemoryParityStatus_CAL_aec_3CueMemoryParityStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define AQ_AecMemoryParityStatus_CAL_aec_2CueMemoryParityStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define bits_AQ_AecMemoryParityStatus_CAL_aec_2CueMemoryParityStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define word_AQ_AecMemoryParityStatus_CAL_aec_2CueMemoryParityStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define AQ_AecMemoryParityStatus_CAL_aec_1CueMemoryParityStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define bits_AQ_AecMemoryParityStatus_CAL_aec_1CueMemoryParityStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define word_AQ_AecMemoryParityStatus_CAL_aec_1CueMemoryParityStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define AQ_AecMemoryParityStatus_CAL_aec_0CueMemoryParityStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define bits_AQ_AecMemoryParityStatus_CAL_aec_0CueMemoryParityStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMemoryParityStatus in AQ_AecMemoryParityStatus_CAL */
#define word_AQ_AecMemoryParityStatus_CAL_aec_0CueMemoryParityStatus u0.word_0

/*! \brief Base register address of structure AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_baseRegisterAddress 0xFBB9
/*! \brief MMD address of structure AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_aec_3ErrorDataDelayDetectionDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define bits_AQ_AecDelayDetectionStatus_CAL_aec_3ErrorDataDelayDetectionDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define word_AQ_AecDelayDetectionStatus_CAL_aec_3ErrorDataDelayDetectionDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_aec_2ErrorDataDelayDetectionDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define bits_AQ_AecDelayDetectionStatus_CAL_aec_2ErrorDataDelayDetectionDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define word_AQ_AecDelayDetectionStatus_CAL_aec_2ErrorDataDelayDetectionDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_aec_1ErrorDataDelayDetectionDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define bits_AQ_AecDelayDetectionStatus_CAL_aec_1ErrorDataDelayDetectionDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define word_AQ_AecDelayDetectionStatus_CAL_aec_1ErrorDataDelayDetectionDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_aec_0ErrorDataDelayDetectionDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define bits_AQ_AecDelayDetectionStatus_CAL_aec_0ErrorDataDelayDetectionDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0ErrorDataDelayDetectionDone in AQ_AecDelayDetectionStatus_CAL */
#define word_AQ_AecDelayDetectionStatus_CAL_aec_0ErrorDataDelayDetectionDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_aec_0MeasuredErrorDataDelayDetectionValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define bits_AQ_AecDelayDetectionStatus_CAL_aec_0MeasuredErrorDataDelayDetectionValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define word_AQ_AecDelayDetectionStatus_CAL_aec_0MeasuredErrorDataDelayDetectionValue u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_aec_1MeasuredErrorDataDelayDetectionValue 2
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define bits_AQ_AecDelayDetectionStatus_CAL_aec_1MeasuredErrorDataDelayDetectionValue u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure aec_1MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define word_AQ_AecDelayDetectionStatus_CAL_aec_1MeasuredErrorDataDelayDetectionValue u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aec_2MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_aec_2MeasuredErrorDataDelayDetectionValue 3
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define bits_AQ_AecDelayDetectionStatus_CAL_aec_2MeasuredErrorDataDelayDetectionValue u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aec_2MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define word_AQ_AecDelayDetectionStatus_CAL_aec_2MeasuredErrorDataDelayDetectionValue u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aec_3MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define AQ_AecDelayDetectionStatus_CAL_aec_3MeasuredErrorDataDelayDetectionValue 4
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define bits_AQ_AecDelayDetectionStatus_CAL_aec_3MeasuredErrorDataDelayDetectionValue u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure aec_3MeasuredErrorDataDelayDetectionValue in AQ_AecDelayDetectionStatus_CAL */
#define word_AQ_AecDelayDetectionStatus_CAL_aec_3MeasuredErrorDataDelayDetectionValue u4.word_4

/*! \brief Base register address of structure AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_baseRegisterAddress 0xFBC0
/*! \brief MMD address of structure AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aec_3WriteCoefficientDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aec_3WriteCoefficientDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aec_3WriteCoefficientDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aec_2WriteCoefficientDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aec_2WriteCoefficientDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aec_2WriteCoefficientDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aec_1WriteCoefficientDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aec_1WriteCoefficientDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aec_1WriteCoefficientDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aec_0WriteCoefficientDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aec_0WriteCoefficientDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0WriteCoefficientDone in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aec_0WriteCoefficientDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aec_3WriteCoefficientStart 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aec_3WriteCoefficientStart u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aec_3WriteCoefficientStart u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aec_2WriteCoefficientStart 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aec_2WriteCoefficientStart u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aec_2WriteCoefficientStart u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aec_1WriteCoefficientStart 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aec_1WriteCoefficientStart u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aec_1WriteCoefficientStart u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aec_0WriteCoefficientStart 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aec_0WriteCoefficientStart u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0WriteCoefficientStart in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aec_0WriteCoefficientStart u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure filterWriteActiveSegment in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_filterWriteActiveSegment 2
/*! \brief Preprocessor variable to relate field to bit position in structure filterWriteActiveSegment in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_filterWriteActiveSegment u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure filterWriteActiveSegment in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_filterWriteActiveSegment u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientDmaWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aecCoefficientDmaWriteError 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientDmaWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aecCoefficientDmaWriteError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientDmaWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aecCoefficientDmaWriteError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMdioWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aecCoefficientMdioWriteError 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMdioWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aecCoefficientMdioWriteError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMdioWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aecCoefficientMdioWriteError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMcpWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define AQ_AecCoefficientWriteStatus_CAL_aecCoefficientMcpWriteError 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMcpWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define bits_AQ_AecCoefficientWriteStatus_CAL_aecCoefficientMcpWriteError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMcpWriteError in AQ_AecCoefficientWriteStatus_CAL */
#define word_AQ_AecCoefficientWriteStatus_CAL_aecCoefficientMcpWriteError u3.word_3

/*! \brief Base register address of structure AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_baseRegisterAddress 0xFBC8
/*! \brief MMD address of structure AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aec_3ReadCoefficientDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aec_3ReadCoefficientDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aec_3ReadCoefficientDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aec_2ReadCoefficientDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aec_2ReadCoefficientDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aec_2ReadCoefficientDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aec_1ReadCoefficientDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aec_1ReadCoefficientDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aec_1ReadCoefficientDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aec_0ReadCoefficientDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aec_0ReadCoefficientDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0ReadCoefficientDone in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aec_0ReadCoefficientDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aec_3ReadCoefficientStart 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aec_3ReadCoefficientStart u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aec_3ReadCoefficientStart u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aec_2ReadCoefficientStart 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aec_2ReadCoefficientStart u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aec_2ReadCoefficientStart u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aec_1ReadCoefficientStart 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aec_1ReadCoefficientStart u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aec_1ReadCoefficientStart u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aec_0ReadCoefficientStart 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aec_0ReadCoefficientStart u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0ReadCoefficientStart in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aec_0ReadCoefficientStart u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure filterReadActiveSegment in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_filterReadActiveSegment 2
/*! \brief Preprocessor variable to relate field to bit position in structure filterReadActiveSegment in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_filterReadActiveSegment u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure filterReadActiveSegment in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_filterReadActiveSegment u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientDmaReadError in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aecCoefficientDmaReadError 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientDmaReadError in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aecCoefficientDmaReadError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientDmaReadError in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aecCoefficientDmaReadError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMdioReadError in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aecCoefficientMdioReadError 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMdioReadError in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aecCoefficientMdioReadError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMdioReadError in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aecCoefficientMdioReadError u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure aecCoefficientMcpReadError in AQ_AecCoefficientReadStatus_CAL */
#define AQ_AecCoefficientReadStatus_CAL_aecCoefficientMcpReadError 3
/*! \brief Preprocessor variable to relate field to bit position in structure aecCoefficientMcpReadError in AQ_AecCoefficientReadStatus_CAL */
#define bits_AQ_AecCoefficientReadStatus_CAL_aecCoefficientMcpReadError u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure aecCoefficientMcpReadError in AQ_AecCoefficientReadStatus_CAL */
#define word_AQ_AecCoefficientReadStatus_CAL_aecCoefficientMcpReadError u3.word_3

/*! \brief Base register address of structure AQ_AecSaturationStatus_CAL */
#define AQ_AecSaturationStatus_CAL_baseRegisterAddress 0xFBD0
/*! \brief MMD address of structure AQ_AecSaturationStatus_CAL */
#define AQ_AecSaturationStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define AQ_AecSaturationStatus_CAL_aec_3OutputSaturationFlag 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define bits_AQ_AecSaturationStatus_CAL_aec_3OutputSaturationFlag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define word_AQ_AecSaturationStatus_CAL_aec_3OutputSaturationFlag u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define AQ_AecSaturationStatus_CAL_aec_2OutputSaturationFlag 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define bits_AQ_AecSaturationStatus_CAL_aec_2OutputSaturationFlag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define word_AQ_AecSaturationStatus_CAL_aec_2OutputSaturationFlag u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define AQ_AecSaturationStatus_CAL_aec_1OutputSaturationFlag 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define bits_AQ_AecSaturationStatus_CAL_aec_1OutputSaturationFlag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define word_AQ_AecSaturationStatus_CAL_aec_1OutputSaturationFlag u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define AQ_AecSaturationStatus_CAL_aec_0OutputSaturationFlag 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define bits_AQ_AecSaturationStatus_CAL_aec_0OutputSaturationFlag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0OutputSaturationFlag in AQ_AecSaturationStatus_CAL */
#define word_AQ_AecSaturationStatus_CAL_aec_0OutputSaturationFlag u0.word_0

/*! \brief Base register address of structure AQ_AecCueFlushStatus_CAL */
#define AQ_AecCueFlushStatus_CAL_baseRegisterAddress 0xFBD2
/*! \brief MMD address of structure AQ_AecCueFlushStatus_CAL */
#define AQ_AecCueFlushStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define AQ_AecCueFlushStatus_CAL_aec_3CueFlushDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define bits_AQ_AecCueFlushStatus_CAL_aec_3CueFlushDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define word_AQ_AecCueFlushStatus_CAL_aec_3CueFlushDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define AQ_AecCueFlushStatus_CAL_aec_2CueFlushDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define bits_AQ_AecCueFlushStatus_CAL_aec_2CueFlushDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define word_AQ_AecCueFlushStatus_CAL_aec_2CueFlushDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define AQ_AecCueFlushStatus_CAL_aec_1CueFlushDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define bits_AQ_AecCueFlushStatus_CAL_aec_1CueFlushDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define word_AQ_AecCueFlushStatus_CAL_aec_1CueFlushDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define AQ_AecCueFlushStatus_CAL_aec_0CueFlushDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define bits_AQ_AecCueFlushStatus_CAL_aec_0CueFlushDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueFlushDone in AQ_AecCueFlushStatus_CAL */
#define word_AQ_AecCueFlushStatus_CAL_aec_0CueFlushDone u0.word_0

/*! \brief Base register address of structure AQ_AecCueSingleStepStatus_CAL */
#define AQ_AecCueSingleStepStatus_CAL_baseRegisterAddress 0xFBD4
/*! \brief MMD address of structure AQ_AecCueSingleStepStatus_CAL */
#define AQ_AecCueSingleStepStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define AQ_AecCueSingleStepStatus_CAL_aec_3SingleStepDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define bits_AQ_AecCueSingleStepStatus_CAL_aec_3SingleStepDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define word_AQ_AecCueSingleStepStatus_CAL_aec_3SingleStepDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define AQ_AecCueSingleStepStatus_CAL_aec_2SingleStepDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define bits_AQ_AecCueSingleStepStatus_CAL_aec_2SingleStepDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define word_AQ_AecCueSingleStepStatus_CAL_aec_2SingleStepDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define AQ_AecCueSingleStepStatus_CAL_aec_1SingleStepDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define bits_AQ_AecCueSingleStepStatus_CAL_aec_1SingleStepDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define word_AQ_AecCueSingleStepStatus_CAL_aec_1SingleStepDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define AQ_AecCueSingleStepStatus_CAL_aec_0SingleStepDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define bits_AQ_AecCueSingleStepStatus_CAL_aec_0SingleStepDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0SingleStepDone in AQ_AecCueSingleStepStatus_CAL */
#define word_AQ_AecCueSingleStepStatus_CAL_aec_0SingleStepDone u0.word_0

/*! \brief Base register address of structure AQ_AecCueLeakagePeriodStatus_CAL */
#define AQ_AecCueLeakagePeriodStatus_CAL_baseRegisterAddress 0xFBD8
/*! \brief MMD address of structure AQ_AecCueLeakagePeriodStatus_CAL */
#define AQ_AecCueLeakagePeriodStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define AQ_AecCueLeakagePeriodStatus_CAL_aec_3LeakagePeriodDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define bits_AQ_AecCueLeakagePeriodStatus_CAL_aec_3LeakagePeriodDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define word_AQ_AecCueLeakagePeriodStatus_CAL_aec_3LeakagePeriodDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define AQ_AecCueLeakagePeriodStatus_CAL_aec_2LeakagePeriodDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define bits_AQ_AecCueLeakagePeriodStatus_CAL_aec_2LeakagePeriodDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define word_AQ_AecCueLeakagePeriodStatus_CAL_aec_2LeakagePeriodDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define AQ_AecCueLeakagePeriodStatus_CAL_aec_1LeakagePeriodDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define bits_AQ_AecCueLeakagePeriodStatus_CAL_aec_1LeakagePeriodDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define word_AQ_AecCueLeakagePeriodStatus_CAL_aec_1LeakagePeriodDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define AQ_AecCueLeakagePeriodStatus_CAL_aec_0LeakagePeriodDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define bits_AQ_AecCueLeakagePeriodStatus_CAL_aec_0LeakagePeriodDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0LeakagePeriodDone in AQ_AecCueLeakagePeriodStatus_CAL */
#define word_AQ_AecCueLeakagePeriodStatus_CAL_aec_0LeakagePeriodDone u0.word_0

/*! \brief Base register address of structure AQ_Ch0AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch0AecCueLeakagePeriodStatus_CAL_baseRegisterAddress 0xFBD9
/*! \brief MMD address of structure AQ_Ch0AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch0AecCueLeakagePeriodStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0LeakageIterationStatus in AQ_Ch0AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch0AecCueLeakagePeriodStatus_CAL_aec_0LeakageIterationStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0LeakageIterationStatus in AQ_Ch0AecCueLeakagePeriodStatus_CAL */
#define bits_AQ_Ch0AecCueLeakagePeriodStatus_CAL_aec_0LeakageIterationStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0LeakageIterationStatus in AQ_Ch0AecCueLeakagePeriodStatus_CAL */
#define word_AQ_Ch0AecCueLeakagePeriodStatus_CAL_aec_0LeakageIterationStatus u0.word_0

/*! \brief Base register address of structure AQ_Ch1AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch1AecCueLeakagePeriodStatus_CAL_baseRegisterAddress 0xFBDA
/*! \brief MMD address of structure AQ_Ch1AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch1AecCueLeakagePeriodStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1LeakageIterationStatus in AQ_Ch1AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch1AecCueLeakagePeriodStatus_CAL_aec_1LeakageIterationStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1LeakageIterationStatus in AQ_Ch1AecCueLeakagePeriodStatus_CAL */
#define bits_AQ_Ch1AecCueLeakagePeriodStatus_CAL_aec_1LeakageIterationStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1LeakageIterationStatus in AQ_Ch1AecCueLeakagePeriodStatus_CAL */
#define word_AQ_Ch1AecCueLeakagePeriodStatus_CAL_aec_1LeakageIterationStatus u0.word_0

/*! \brief Base register address of structure AQ_Ch2AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch2AecCueLeakagePeriodStatus_CAL_baseRegisterAddress 0xFBDB
/*! \brief MMD address of structure AQ_Ch2AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch2AecCueLeakagePeriodStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2LeakageIterationStatus in AQ_Ch2AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch2AecCueLeakagePeriodStatus_CAL_aec_2LeakageIterationStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2LeakageIterationStatus in AQ_Ch2AecCueLeakagePeriodStatus_CAL */
#define bits_AQ_Ch2AecCueLeakagePeriodStatus_CAL_aec_2LeakageIterationStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2LeakageIterationStatus in AQ_Ch2AecCueLeakagePeriodStatus_CAL */
#define word_AQ_Ch2AecCueLeakagePeriodStatus_CAL_aec_2LeakageIterationStatus u0.word_0

/*! \brief Base register address of structure AQ_Ch3AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch3AecCueLeakagePeriodStatus_CAL_baseRegisterAddress 0xFBDC
/*! \brief MMD address of structure AQ_Ch3AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch3AecCueLeakagePeriodStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3LeakageIterationStatus in AQ_Ch3AecCueLeakagePeriodStatus_CAL */
#define AQ_Ch3AecCueLeakagePeriodStatus_CAL_aec_3LeakageIterationStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3LeakageIterationStatus in AQ_Ch3AecCueLeakagePeriodStatus_CAL */
#define bits_AQ_Ch3AecCueLeakagePeriodStatus_CAL_aec_3LeakageIterationStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3LeakageIterationStatus in AQ_Ch3AecCueLeakagePeriodStatus_CAL */
#define word_AQ_Ch3AecCueLeakagePeriodStatus_CAL_aec_3LeakageIterationStatus u0.word_0

/*! \brief Base register address of structure AQ_AecFirGlobalFlushStatus_CAL */
#define AQ_AecFirGlobalFlushStatus_CAL_baseRegisterAddress 0xFBE0
/*! \brief MMD address of structure AQ_AecFirGlobalFlushStatus_CAL */
#define AQ_AecFirGlobalFlushStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define AQ_AecFirGlobalFlushStatus_CAL_aec_3FirGlobalFlushDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define bits_AQ_AecFirGlobalFlushStatus_CAL_aec_3FirGlobalFlushDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define word_AQ_AecFirGlobalFlushStatus_CAL_aec_3FirGlobalFlushDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define AQ_AecFirGlobalFlushStatus_CAL_aec_2FirGlobalFlushDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define bits_AQ_AecFirGlobalFlushStatus_CAL_aec_2FirGlobalFlushDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define word_AQ_AecFirGlobalFlushStatus_CAL_aec_2FirGlobalFlushDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define AQ_AecFirGlobalFlushStatus_CAL_aec_1FirGlobalFlushDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define bits_AQ_AecFirGlobalFlushStatus_CAL_aec_1FirGlobalFlushDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define word_AQ_AecFirGlobalFlushStatus_CAL_aec_1FirGlobalFlushDone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define AQ_AecFirGlobalFlushStatus_CAL_aec_0FirGlobalFlushDone 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define bits_AQ_AecFirGlobalFlushStatus_CAL_aec_0FirGlobalFlushDone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirGlobalFlushDone in AQ_AecFirGlobalFlushStatus_CAL */
#define word_AQ_AecFirGlobalFlushStatus_CAL_aec_0FirGlobalFlushDone u0.word_0

/*! \brief Base register address of structure AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_baseRegisterAddress 0xFBE4
/*! \brief MMD address of structure AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_aec_3CoefficientSaturationFlag 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define bits_AQ_AecCoefficientSaturationStatus_CAL_aec_3CoefficientSaturationFlag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define word_AQ_AecCoefficientSaturationStatus_CAL_aec_3CoefficientSaturationFlag u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_aec_2CoefficientSaturationFlag 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define bits_AQ_AecCoefficientSaturationStatus_CAL_aec_2CoefficientSaturationFlag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define word_AQ_AecCoefficientSaturationStatus_CAL_aec_2CoefficientSaturationFlag u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_aec_1CoefficientSaturationFlag 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define bits_AQ_AecCoefficientSaturationStatus_CAL_aec_1CoefficientSaturationFlag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define word_AQ_AecCoefficientSaturationStatus_CAL_aec_1CoefficientSaturationFlag u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_aec_0CoefficientSaturationFlag 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define bits_AQ_AecCoefficientSaturationStatus_CAL_aec_0CoefficientSaturationFlag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define word_AQ_AecCoefficientSaturationStatus_CAL_aec_0CoefficientSaturationFlag u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_aec_3FirCoefficientSaturationFlag 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define bits_AQ_AecCoefficientSaturationStatus_CAL_aec_3FirCoefficientSaturationFlag u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_3FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define word_AQ_AecCoefficientSaturationStatus_CAL_aec_3FirCoefficientSaturationFlag u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_2FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_aec_2FirCoefficientSaturationFlag 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define bits_AQ_AecCoefficientSaturationStatus_CAL_aec_2FirCoefficientSaturationFlag u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_2FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define word_AQ_AecCoefficientSaturationStatus_CAL_aec_2FirCoefficientSaturationFlag u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_1FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_aec_1FirCoefficientSaturationFlag 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define bits_AQ_AecCoefficientSaturationStatus_CAL_aec_1FirCoefficientSaturationFlag u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_1FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define word_AQ_AecCoefficientSaturationStatus_CAL_aec_1FirCoefficientSaturationFlag u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure aec_0FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define AQ_AecCoefficientSaturationStatus_CAL_aec_0FirCoefficientSaturationFlag 1
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define bits_AQ_AecCoefficientSaturationStatus_CAL_aec_0FirCoefficientSaturationFlag u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure aec_0FirCoefficientSaturationFlag in AQ_AecCoefficientSaturationStatus_CAL */
#define word_AQ_AecCoefficientSaturationStatus_CAL_aec_0FirCoefficientSaturationFlag u1.word_1

/*! \brief Base register address of structure AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL_baseRegisterAddress 0xFBE6
/*! \brief MMD address of structure AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMaxCoefficientSegment_0 in AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMaxCoefficientSegment_0 in AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL */
#define bits_AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMaxCoefficientSegment_0 in AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL */
#define word_AQ_Ch0Seg0AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_0 u0.word_0

/*! \brief Base register address of structure AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL_baseRegisterAddress 0xFBE7
/*! \brief MMD address of structure AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMaxCoefficientSegment_1 in AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMaxCoefficientSegment_1 in AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL */
#define bits_AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMaxCoefficientSegment_1 in AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL */
#define word_AQ_Ch0Seg1AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_1 u0.word_0

/*! \brief Base register address of structure AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL_baseRegisterAddress 0xFBE8
/*! \brief MMD address of structure AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMaxCoefficientSegment_0 in AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL_aec_1CueMaxCoefficientSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMaxCoefficientSegment_0 in AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL */
#define bits_AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL_aec_1CueMaxCoefficientSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMaxCoefficientSegment_0 in AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL */
#define word_AQ_Ch1Seg0AecCueMaxCoefficientStatus_CAL_aec_1CueMaxCoefficientSegment_0 u0.word_0

/*! \brief Base register address of structure AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL_baseRegisterAddress 0xFBE9
/*! \brief MMD address of structure AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueMaxCoefficientSegment_1 in AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL_aec_1CueMaxCoefficientSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueMaxCoefficientSegment_1 in AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL */
#define bits_AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL_aec_1CueMaxCoefficientSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueMaxCoefficientSegment_1 in AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL */
#define word_AQ_Ch1Seg1AecCueMaxCoefficientStatus_CAL_aec_1CueMaxCoefficientSegment_1 u0.word_0

/*! \brief Base register address of structure AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL_baseRegisterAddress 0xFBEA
/*! \brief MMD address of structure AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMaxCoefficientSegment_0 in AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL_aec_2CueMaxCoefficientSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMaxCoefficientSegment_0 in AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL */
#define bits_AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL_aec_2CueMaxCoefficientSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMaxCoefficientSegment_0 in AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL */
#define word_AQ_Ch2Seg0AecCueMaxCoefficientStatus_CAL_aec_2CueMaxCoefficientSegment_0 u0.word_0

/*! \brief Base register address of structure AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL_baseRegisterAddress 0xFBEB
/*! \brief MMD address of structure AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueMaxCoefficientSegment_1 in AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL_aec_2CueMaxCoefficientSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueMaxCoefficientSegment_1 in AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL */
#define bits_AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL_aec_2CueMaxCoefficientSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueMaxCoefficientSegment_1 in AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL */
#define word_AQ_Ch2Seg1AecCueMaxCoefficientStatus_CAL_aec_2CueMaxCoefficientSegment_1 u0.word_0

/*! \brief Base register address of structure AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL_baseRegisterAddress 0xFBEC
/*! \brief MMD address of structure AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueMaxCoefficientSegment_0 in AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueMaxCoefficientSegment_0 in AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL */
#define bits_AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueMaxCoefficientSegment_0 in AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL */
#define word_AQ_Ch3Seg0AecCueMaxCoefficientStatus_CAL_aec_0CueMaxCoefficientSegment_0 u0.word_0

/*! \brief Base register address of structure AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL_baseRegisterAddress 0xFBED
/*! \brief MMD address of structure AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueMaxCoefficientSegment_1 in AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL */
#define AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL_aec_3CueMaxCoefficientSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueMaxCoefficientSegment_1 in AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL */
#define bits_AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL_aec_3CueMaxCoefficientSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueMaxCoefficientSegment_1 in AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL */
#define word_AQ_Ch3Seg1AecCueMaxCoefficientStatus_CAL_aec_3CueMaxCoefficientSegment_1 u0.word_0

/*! \brief Base register address of structure AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL_baseRegisterAddress 0xFBEE
/*! \brief MMD address of structure AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientSumSegment_0 in AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientSumSegment_0 in AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL */
#define bits_AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientSumSegment_0 in AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL */
#define word_AQ_Ch0Seg0AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_0 u0.word_0

/*! \brief Base register address of structure AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL_baseRegisterAddress 0xFBEF
/*! \brief MMD address of structure AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientSumSegment_1 in AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientSumSegment_1 in AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL */
#define bits_AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientSumSegment_1 in AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL */
#define word_AQ_Ch0Seg1AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_1 u0.word_0

/*! \brief Base register address of structure AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL_baseRegisterAddress 0xFBF0
/*! \brief MMD address of structure AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueCoefficientSumSegment_0 in AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL_aec_1CueCoefficientSumSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueCoefficientSumSegment_0 in AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL */
#define bits_AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL_aec_1CueCoefficientSumSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueCoefficientSumSegment_0 in AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL */
#define word_AQ_Ch1Seg0AecCueCoefficientSumStatus_CAL_aec_1CueCoefficientSumSegment_0 u0.word_0

/*! \brief Base register address of structure AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL_baseRegisterAddress 0xFBF1
/*! \brief MMD address of structure AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1CueCoefficientSumSegment_1 in AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL_aec_1CueCoefficientSumSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1CueCoefficientSumSegment_1 in AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL */
#define bits_AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL_aec_1CueCoefficientSumSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1CueCoefficientSumSegment_1 in AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL */
#define word_AQ_Ch1Seg1AecCueCoefficientSumStatus_CAL_aec_1CueCoefficientSumSegment_1 u0.word_0

/*! \brief Base register address of structure AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL_baseRegisterAddress 0xFBF2
/*! \brief MMD address of structure AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueCoefficientSumSegment_0 in AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL_aec_2CueCoefficientSumSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueCoefficientSumSegment_0 in AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL */
#define bits_AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL_aec_2CueCoefficientSumSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueCoefficientSumSegment_0 in AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL */
#define word_AQ_Ch2Seg0AecCueCoefficientSumStatus_CAL_aec_2CueCoefficientSumSegment_0 u0.word_0

/*! \brief Base register address of structure AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL_baseRegisterAddress 0xFBF3
/*! \brief MMD address of structure AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2CueCoefficientSumSegment_1 in AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL_aec_2CueCoefficientSumSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2CueCoefficientSumSegment_1 in AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL */
#define bits_AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL_aec_2CueCoefficientSumSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2CueCoefficientSumSegment_1 in AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL */
#define word_AQ_Ch2Seg1AecCueCoefficientSumStatus_CAL_aec_2CueCoefficientSumSegment_1 u0.word_0

/*! \brief Base register address of structure AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL_baseRegisterAddress 0xFBF4
/*! \brief MMD address of structure AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0CueCoefficientSumSegment_0 in AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL */
#define AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0CueCoefficientSumSegment_0 in AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL */
#define bits_AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0CueCoefficientSumSegment_0 in AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL */
#define word_AQ_Ch3Seg0AecCueCoefficientSumStatus_CAL_aec_0CueCoefficientSumSegment_0 u0.word_0

/*! \brief Base register address of structure AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL_baseRegisterAddress 0xFBF5
/*! \brief MMD address of structure AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3CueCoefficientSumSegment_1 in AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL */
#define AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL_aec_3CueCoefficientSumSegment_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3CueCoefficientSumSegment_1 in AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL */
#define bits_AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL_aec_3CueCoefficientSumSegment_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3CueCoefficientSumSegment_1 in AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL */
#define word_AQ_Ch3Seg1AecCueCoefficientSumStatus_CAL_aec_3CueCoefficientSumSegment_1 u0.word_0

/*! \brief Base register address of structure AQ_Ch0AecSpare_CAL */
#define AQ_Ch0AecSpare_CAL_baseRegisterAddress 0xFBF6
/*! \brief MMD address of structure AQ_Ch0AecSpare_CAL */
#define AQ_Ch0AecSpare_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_0Spare in AQ_Ch0AecSpare_CAL */
#define AQ_Ch0AecSpare_CAL_aec_0Spare 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0Spare in AQ_Ch0AecSpare_CAL */
#define bits_AQ_Ch0AecSpare_CAL_aec_0Spare u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0Spare in AQ_Ch0AecSpare_CAL */
#define word_AQ_Ch0AecSpare_CAL_aec_0Spare u0.word_0

/*! \brief Base register address of structure AQ_Ch1AecSpare_CAL */
#define AQ_Ch1AecSpare_CAL_baseRegisterAddress 0xFBF7
/*! \brief MMD address of structure AQ_Ch1AecSpare_CAL */
#define AQ_Ch1AecSpare_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_1Spare in AQ_Ch1AecSpare_CAL */
#define AQ_Ch1AecSpare_CAL_aec_1Spare 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1Spare in AQ_Ch1AecSpare_CAL */
#define bits_AQ_Ch1AecSpare_CAL_aec_1Spare u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1Spare in AQ_Ch1AecSpare_CAL */
#define word_AQ_Ch1AecSpare_CAL_aec_1Spare u0.word_0

/*! \brief Base register address of structure AQ_Ch2AecSpare_CAL */
#define AQ_Ch2AecSpare_CAL_baseRegisterAddress 0xFBF8
/*! \brief MMD address of structure AQ_Ch2AecSpare_CAL */
#define AQ_Ch2AecSpare_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_2Spare in AQ_Ch2AecSpare_CAL */
#define AQ_Ch2AecSpare_CAL_aec_2Spare 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2Spare in AQ_Ch2AecSpare_CAL */
#define bits_AQ_Ch2AecSpare_CAL_aec_2Spare u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2Spare in AQ_Ch2AecSpare_CAL */
#define word_AQ_Ch2AecSpare_CAL_aec_2Spare u0.word_0

/*! \brief Base register address of structure AQ_Ch3AecSpare_CAL */
#define AQ_Ch3AecSpare_CAL_baseRegisterAddress 0xFBF9
/*! \brief MMD address of structure AQ_Ch3AecSpare_CAL */
#define AQ_Ch3AecSpare_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3Spare in AQ_Ch3AecSpare_CAL */
#define AQ_Ch3AecSpare_CAL_aec_3Spare 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3Spare in AQ_Ch3AecSpare_CAL */
#define bits_AQ_Ch3AecSpare_CAL_aec_3Spare u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3Spare in AQ_Ch3AecSpare_CAL */
#define word_AQ_Ch3AecSpare_CAL_aec_3Spare u0.word_0

/*! \brief Base register address of structure AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_baseRegisterAddress 0xFBFA
/*! \brief MMD address of structure AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure aec_3DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_aec_3DataRandomNumberGenerationFrequencyRevert 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define bits_AQ_AecCueDataRandomizationControl_CAL_aec_3DataRandomNumberGenerationFrequencyRevert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define word_AQ_AecCueDataRandomizationControl_CAL_aec_3DataRandomNumberGenerationFrequencyRevert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_3DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_aec_3DataSamplingStartWindowRevert 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_3DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define bits_AQ_AecCueDataRandomizationControl_CAL_aec_3DataSamplingStartWindowRevert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_3DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define word_AQ_AecCueDataRandomizationControl_CAL_aec_3DataSamplingStartWindowRevert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_aec_2DataRandomNumberGenerationFrequencyRevert 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define bits_AQ_AecCueDataRandomizationControl_CAL_aec_2DataRandomNumberGenerationFrequencyRevert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define word_AQ_AecCueDataRandomizationControl_CAL_aec_2DataRandomNumberGenerationFrequencyRevert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_2DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_aec_2DataSamplingStartWindowRevert 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_2DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define bits_AQ_AecCueDataRandomizationControl_CAL_aec_2DataSamplingStartWindowRevert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_2DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define word_AQ_AecCueDataRandomizationControl_CAL_aec_2DataSamplingStartWindowRevert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_aec_1DataRandomNumberGenerationFrequencyRevert 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define bits_AQ_AecCueDataRandomizationControl_CAL_aec_1DataRandomNumberGenerationFrequencyRevert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define word_AQ_AecCueDataRandomizationControl_CAL_aec_1DataRandomNumberGenerationFrequencyRevert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_1DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_aec_1DataSamplingStartWindowRevert 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_1DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define bits_AQ_AecCueDataRandomizationControl_CAL_aec_1DataSamplingStartWindowRevert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_1DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define word_AQ_AecCueDataRandomizationControl_CAL_aec_1DataSamplingStartWindowRevert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_aec_0DataRandomNumberGenerationFrequencyRevert 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define bits_AQ_AecCueDataRandomizationControl_CAL_aec_0DataRandomNumberGenerationFrequencyRevert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0DataRandomNumberGenerationFrequencyRevert in AQ_AecCueDataRandomizationControl_CAL */
#define word_AQ_AecCueDataRandomizationControl_CAL_aec_0DataRandomNumberGenerationFrequencyRevert u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure aec_0DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define AQ_AecCueDataRandomizationControl_CAL_aec_0DataSamplingStartWindowRevert 0
/*! \brief Preprocessor variable to relate field to bit position in structure aec_0DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define bits_AQ_AecCueDataRandomizationControl_CAL_aec_0DataSamplingStartWindowRevert u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure aec_0DataSamplingStartWindowRevert in AQ_AecCueDataRandomizationControl_CAL */
#define word_AQ_AecCueDataRandomizationControl_CAL_aec_0DataSamplingStartWindowRevert u0.word_0

/*! \brief Base register address of structure AQ_PmaVendorGlobalInterruptFlags_CAL */
#define AQ_PmaVendorGlobalInterruptFlags_CAL_baseRegisterAddress 0xFC00
/*! \brief MMD address of structure AQ_PmaVendorGlobalInterruptFlags_CAL */
#define AQ_PmaVendorGlobalInterruptFlags_CAL_mmdAddress 0x01
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificTxAlarms_1Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificTxAlarms_1Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificTxAlarms_1Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define word_AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificTxAlarms_2Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificTxAlarms_2Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificTxAlarms_2Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define word_AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificTxAlarms_3Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_3Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificTxAlarms_3Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_3Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificTxAlarms_3Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define word_AQ_PmaVendorGlobalInterruptFlags_CAL_vendorSpecificTxAlarms_3Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure standardAlarm_1Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define AQ_PmaVendorGlobalInterruptFlags_CAL_standardAlarm_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure standardAlarm_1Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PmaVendorGlobalInterruptFlags_CAL_standardAlarm_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure standardAlarm_1Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define word_AQ_PmaVendorGlobalInterruptFlags_CAL_standardAlarm_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure standardAlarm_2Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define AQ_PmaVendorGlobalInterruptFlags_CAL_standardAlarm_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure standardAlarm_2Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define bits_AQ_PmaVendorGlobalInterruptFlags_CAL_standardAlarm_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure standardAlarm_2Interrupt in AQ_PmaVendorGlobalInterruptFlags_CAL */
#define word_AQ_PmaVendorGlobalInterruptFlags_CAL_standardAlarm_2Interrupt u0.word_0
#endif
/*@}*/
/*@}*/
