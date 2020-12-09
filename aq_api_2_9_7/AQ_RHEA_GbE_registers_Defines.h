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
*   for the GbE Registers block.
*/

/*! \defgroup GbE_registers_Defines GbE Registers Defines
*   This module contains the compiler assist macros and doxygen comments
*   for the GbE Registers block.
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
*   This file contains the compiler assist macros for the registers contained in the GbE Registers block.
*
*
***********************************************************************/


/*@{*/
#ifndef AQ_RHEA_GBE_REGS_DEFINES_HEADER
#define AQ_RHEA_GBE_REGS_DEFINES_HEADER


/*-----------------------------------------------------------------------------*/
/*Access macro definitions                                                     */
/*-----------------------------------------------------------------------------*/
/*! \brief Base register address of structure AQ_GbeStandardDeviceIdentifier_RHEA */
#define AQ_GbeStandardDeviceIdentifier_RHEA_baseRegisterAddress 0x0002
/*! \brief MMD address of structure AQ_GbeStandardDeviceIdentifier_RHEA */
#define AQ_GbeStandardDeviceIdentifier_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdMSW in AQ_GbeStandardDeviceIdentifier_RHEA */
#define AQ_GbeStandardDeviceIdentifier_RHEA_deviceIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdMSW in AQ_GbeStandardDeviceIdentifier_RHEA */
#define bits_AQ_GbeStandardDeviceIdentifier_RHEA_deviceIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdMSW in AQ_GbeStandardDeviceIdentifier_RHEA */
#define word_AQ_GbeStandardDeviceIdentifier_RHEA_deviceIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdLSW in AQ_GbeStandardDeviceIdentifier_RHEA */
#define AQ_GbeStandardDeviceIdentifier_RHEA_deviceIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdLSW in AQ_GbeStandardDeviceIdentifier_RHEA */
#define bits_AQ_GbeStandardDeviceIdentifier_RHEA_deviceIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdLSW in AQ_GbeStandardDeviceIdentifier_RHEA */
#define word_AQ_GbeStandardDeviceIdentifier_RHEA_deviceIdLSW u1.word_1

/*! \brief Base register address of structure AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_baseRegisterAddress 0x0005
/*! \brief MMD address of structure AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_autonegotiationPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardDevicesInPackage_RHEA_autonegotiationPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define word_AQ_GbeStandardDevicesInPackage_RHEA_autonegotiationPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tcPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_tcPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure tcPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardDevicesInPackage_RHEA_tcPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tcPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define word_AQ_GbeStandardDevicesInPackage_RHEA_tcPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dteXsPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_dteXsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure dteXsPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardDevicesInPackage_RHEA_dteXsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dteXsPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define word_AQ_GbeStandardDevicesInPackage_RHEA_dteXsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure controlPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_controlPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure controlPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardDevicesInPackage_RHEA_controlPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure controlPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define word_AQ_GbeStandardDevicesInPackage_RHEA_controlPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_pcsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardDevicesInPackage_RHEA_pcsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define word_AQ_GbeStandardDevicesInPackage_RHEA_pcsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure wisPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_wisPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure wisPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardDevicesInPackage_RHEA_wisPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure wisPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define word_AQ_GbeStandardDevicesInPackage_RHEA_wisPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_pmaPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardDevicesInPackage_RHEA_pmaPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define word_AQ_GbeStandardDevicesInPackage_RHEA_pmaPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clause_22RegistersPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define AQ_GbeStandardDevicesInPackage_RHEA_clause_22RegistersPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22RegistersPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardDevicesInPackage_RHEA_clause_22RegistersPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clause_22RegistersPresent in AQ_GbeStandardDevicesInPackage_RHEA */
#define word_AQ_GbeStandardDevicesInPackage_RHEA_clause_22RegistersPresent u0.word_0

/*! \brief Base register address of structure AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define AQ_GbeStandardVendorDevicesInPackage_RHEA_baseRegisterAddress 0x0006
/*! \brief MMD address of structure AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define AQ_GbeStandardVendorDevicesInPackage_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_2Present in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define AQ_GbeStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_2Present 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_2Present in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_2Present u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_2Present in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define word_AQ_GbeStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_2Present u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_1Present in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define AQ_GbeStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_1Present 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_1Present in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_1Present u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_1Present in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define word_AQ_GbeStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_1Present u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clause_22ExtensionPresent in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define AQ_GbeStandardVendorDevicesInPackage_RHEA_clause_22ExtensionPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22ExtensionPresent in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define bits_AQ_GbeStandardVendorDevicesInPackage_RHEA_clause_22ExtensionPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clause_22ExtensionPresent in AQ_GbeStandardVendorDevicesInPackage_RHEA */
#define word_AQ_GbeStandardVendorDevicesInPackage_RHEA_clause_22ExtensionPresent u0.word_0

/*! \brief Base register address of structure AQ_GbeStandardStatus_2_RHEA */
#define AQ_GbeStandardStatus_2_RHEA_baseRegisterAddress 0x0008
/*! \brief MMD address of structure AQ_GbeStandardStatus_2_RHEA */
#define AQ_GbeStandardStatus_2_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure devicePresent in AQ_GbeStandardStatus_2_RHEA */
#define AQ_GbeStandardStatus_2_RHEA_devicePresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure devicePresent in AQ_GbeStandardStatus_2_RHEA */
#define bits_AQ_GbeStandardStatus_2_RHEA_devicePresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure devicePresent in AQ_GbeStandardStatus_2_RHEA */
#define word_AQ_GbeStandardStatus_2_RHEA_devicePresent u0.word_0

/*! \brief Base register address of structure AQ_GbeStandardPackageIdentifier_RHEA */
#define AQ_GbeStandardPackageIdentifier_RHEA_baseRegisterAddress 0x000E
/*! \brief MMD address of structure AQ_GbeStandardPackageIdentifier_RHEA */
#define AQ_GbeStandardPackageIdentifier_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure packageIdMSW in AQ_GbeStandardPackageIdentifier_RHEA */
#define AQ_GbeStandardPackageIdentifier_RHEA_packageIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdMSW in AQ_GbeStandardPackageIdentifier_RHEA */
#define bits_AQ_GbeStandardPackageIdentifier_RHEA_packageIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packageIdMSW in AQ_GbeStandardPackageIdentifier_RHEA */
#define word_AQ_GbeStandardPackageIdentifier_RHEA_packageIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packageIdLSW in AQ_GbeStandardPackageIdentifier_RHEA */
#define AQ_GbeStandardPackageIdentifier_RHEA_packageIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdLSW in AQ_GbeStandardPackageIdentifier_RHEA */
#define bits_AQ_GbeStandardPackageIdentifier_RHEA_packageIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure packageIdLSW in AQ_GbeStandardPackageIdentifier_RHEA */
#define word_AQ_GbeStandardPackageIdentifier_RHEA_packageIdLSW u1.word_1

/*! \brief Base register address of structure AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_baseRegisterAddress 0xC300
/*! \brief MMD address of structure AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_0Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_0 6
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_0Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_0 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_0Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_0 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_0Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_1 7
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_0Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_1 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_0Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_1 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_0Word_2 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_2 8
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_0Word_2 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_2 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_0Word_2 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_2 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_0Word_3 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_3 9
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_0Word_3 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_3 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_0Word_3 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_3 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_0Word_4 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_4 10
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_0Word_4 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_4 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_0Word_4 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_4 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_0Word_5 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_5 11
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_0Word_5 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_5 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_0Word_5 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_5 u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_0Word_6 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_6 12
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_0Word_6 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_6 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_0Word_6 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_6 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_0Word_7 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_7 13
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_0Word_7 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_7 u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_0Word_7 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_0Word_7 u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_0Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_0Word_0 14
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_0Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_0Word_0 u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_0Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_0Word_0 u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_0Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_0Word_1 15
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_0Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_0Word_1 u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_0Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_0Word_1 u15.word_15
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_1Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_0 16
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_1Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_0 u16.bits_16
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_1Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_0 u16.word_16
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_1Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_1 17
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_1Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_1 u17.bits_17
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_1Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_1 u17.word_17
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_1Word_2 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_2 18
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_1Word_2 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_2 u18.bits_18
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_1Word_2 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_2 u18.word_18
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_1Word_3 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_3 19
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_1Word_3 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_3 u19.bits_19
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_1Word_3 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_3 u19.word_19
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_1Word_4 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_4 20
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_1Word_4 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_4 u20.bits_20
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_1Word_4 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_4 u20.word_20
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_1Word_5 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_5 21
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_1Word_5 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_5 u21.bits_21
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_1Word_5 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_5 u21.word_21
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_1Word_6 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_6 22
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_1Word_6 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_6 u22.bits_22
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_1Word_6 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_6 u22.word_22
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_1Word_7 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_7 23
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_1Word_7 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_7 u23.bits_23
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_1Word_7 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_1Word_7 u23.word_23
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_1Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_1Word_0 24
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_1Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_1Word_0 u24.bits_24
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_1Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_1Word_0 u24.word_24
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_1Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_1Word_1 25
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_1Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_1Word_1 u25.bits_25
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_1Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_1Word_1 u25.word_25
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_2Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_0 26
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_2Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_0 u26.bits_26
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_2Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_0 u26.word_26
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_2Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_1 27
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_2Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_1 u27.bits_27
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_2Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_1 u27.word_27
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_2Word_2 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_2 28
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_2Word_2 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_2 u28.bits_28
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_2Word_2 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_2 u28.word_28
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_2Word_3 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_3 29
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_2Word_3 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_3 u29.bits_29
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_2Word_3 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_3 u29.word_29
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_2Word_4 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_4 30
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_2Word_4 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_4 u30.bits_30
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_2Word_4 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_4 u30.word_30
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_2Word_5 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_5 31
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_2Word_5 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_5 u31.bits_31
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_2Word_5 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_5 u31.word_31
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_2Word_6 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_6 32
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_2Word_6 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_6 u32.bits_32
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_2Word_6 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_6 u32.word_32
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_2Word_7 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_7 33
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_2Word_7 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_7 u33.bits_33
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_2Word_7 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_2Word_7 u33.word_33
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_2Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_2Word_0 34
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_2Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_2Word_0 u34.bits_34
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_2Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_2Word_0 u34.word_34
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_2Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_2Word_1 35
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_2Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_2Word_1 u35.bits_35
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_2Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_2Word_1 u35.word_35
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_3Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_0 36
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_3Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_0 u36.bits_36
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_3Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_0 u36.word_36
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_3Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_1 37
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_3Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_1 u37.bits_37
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_3Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_1 u37.word_37
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_3Word_2 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_2 38
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_3Word_2 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_2 u38.bits_38
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_3Word_2 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_2 u38.word_38
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_3Word_3 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_3 39
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_3Word_3 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_3 u39.bits_39
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_3Word_3 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_3 u39.word_39
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_3Word_4 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_4 40
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_3Word_4 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_4 u40.bits_40
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_3Word_4 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_4 u40.word_40
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_3Word_5 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_5 41
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_3Word_5 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_5 u41.bits_41
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_3Word_5 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_5 u41.word_41
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_3Word_6 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_6 42
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_3Word_6 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_6 u42.bits_42
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_3Word_6 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_6 u42.word_42
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_3Word_7 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_7 43
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_3Word_7 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_7 u43.bits_43
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_3Word_7 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_3Word_7 u43.word_43
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_3Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_3Word_0 44
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_3Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_3Word_0 u44.bits_44
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_3Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_3Word_0 u44.word_44
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_3Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_3Word_1 45
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_3Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_3Word_1 u45.bits_45
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_3Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_3Word_1 u45.word_45
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_4Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_0 46
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_4Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_0 u46.bits_46
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_4Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_0 u46.word_46
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_4Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_1 47
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_4Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_1 u47.bits_47
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_4Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_1 u47.word_47
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_4Word_2 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_2 48
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_4Word_2 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_2 u48.bits_48
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_4Word_2 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_2 u48.word_48
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_4Word_3 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_3 49
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_4Word_3 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_3 u49.bits_49
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_4Word_3 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_3 u49.word_49
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_4Word_4 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_4 50
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_4Word_4 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_4 u50.bits_50
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_4Word_4 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_4 u50.word_50
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_4Word_5 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_5 51
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_4Word_5 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_5 u51.bits_51
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_4Word_5 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_5 u51.word_51
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_4Word_6 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_6 52
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_4Word_6 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_6 u52.bits_52
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_4Word_6 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_6 u52.word_52
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_4Word_7 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_7 53
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_4Word_7 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_7 u53.bits_53
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_4Word_7 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameMask_4Word_7 u53.word_53
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_4Word_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_4Word_0 54
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_4Word_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_4Word_0 u54.bits_54
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_4Word_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_4Word_0 u54.word_54
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_4Word_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_4Word_1 55
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_4Word_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_4Word_1 u55.bits_55
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_4Word_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_wakeUpFrameCrc_4Word_1 u55.word_55
/*! \brief Preprocessor variable to relate field to word number in structure magicPacketFramePatternWord_0 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_0 57
/*! \brief Preprocessor variable to relate field to bit position in structure magicPacketFramePatternWord_0 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_0 u57.bits_57
/*! \brief Preprocessor variable to relate field to word position in structure magicPacketFramePatternWord_0 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_0 u57.word_57
/*! \brief Preprocessor variable to relate field to word number in structure magicPacketFramePatternWord_1 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_1 58
/*! \brief Preprocessor variable to relate field to bit position in structure magicPacketFramePatternWord_1 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_1 u58.bits_58
/*! \brief Preprocessor variable to relate field to word position in structure magicPacketFramePatternWord_1 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_1 u58.word_58
/*! \brief Preprocessor variable to relate field to word number in structure magicPacketFramePatternWord_2 in AQ_GbePhyWolControl_RHEA */
#define AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_2 59
/*! \brief Preprocessor variable to relate field to bit position in structure magicPacketFramePatternWord_2 in AQ_GbePhyWolControl_RHEA */
#define bits_AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_2 u59.bits_59
/*! \brief Preprocessor variable to relate field to word position in structure magicPacketFramePatternWord_2 in AQ_GbePhyWolControl_RHEA */
#define word_AQ_GbePhyWolControl_RHEA_magicPacketFramePatternWord_2 u59.word_59

/*! \brief Base register address of structure AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_baseRegisterAddress 0xC420
/*! \brief MMD address of structure AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_5Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_5Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_5Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_5Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_5Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_5Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_5Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_5Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_5Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_5Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_5Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_5Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_3 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_5Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_4 4
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_5Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_4 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_5Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_4 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_5Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_5 5
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_5Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_5 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_5Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_5 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_5Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_6 6
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_5Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_6 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_5Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_6 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_5Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_7 7
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_5Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_7 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_5Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_5Word_7 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_5Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_5Word_0 8
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_5Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_5Word_0 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_5Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_5Word_0 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_5Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_5Word_1 9
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_5Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_5Word_1 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_5Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_5Word_1 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_6Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_0 10
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_6Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_0 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_6Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_0 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_6Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_1 11
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_6Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_1 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_6Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_1 u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_6Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_2 12
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_6Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_2 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_6Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_2 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_6Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_3 13
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_6Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_3 u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_6Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_3 u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_6Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_4 14
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_6Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_4 u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_6Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_4 u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_6Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_5 15
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_6Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_5 u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_6Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_5 u15.word_15
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_6Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_6 16
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_6Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_6 u16.bits_16
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_6Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_6 u16.word_16
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_6Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_7 17
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_6Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_7 u17.bits_17
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_6Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_6Word_7 u17.word_17
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_6Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_6Word_0 18
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_6Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_6Word_0 u18.bits_18
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_6Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_6Word_0 u18.word_18
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_6Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_6Word_1 19
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_6Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_6Word_1 u19.bits_19
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_6Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_6Word_1 u19.word_19
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_7Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_0 20
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_7Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_0 u20.bits_20
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_7Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_0 u20.word_20
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_7Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_1 21
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_7Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_1 u21.bits_21
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_7Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_1 u21.word_21
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_7Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_2 22
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_7Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_2 u22.bits_22
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_7Word_2 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_2 u22.word_22
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_7Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_3 23
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_7Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_3 u23.bits_23
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_7Word_3 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_3 u23.word_23
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_7Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_4 24
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_7Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_4 u24.bits_24
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_7Word_4 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_4 u24.word_24
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_7Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_5 25
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_7Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_5 u25.bits_25
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_7Word_5 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_5 u25.word_25
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_7Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_6 26
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_7Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_6 u26.bits_26
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_7Word_6 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_6 u26.word_26
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameMask_7Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_7 27
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameMask_7Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_7 u27.bits_27
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameMask_7Word_7 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameMask_7Word_7 u27.word_27
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_7Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_7Word_0 28
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_7Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_7Word_0 u28.bits_28
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_7Word_0 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_7Word_0 u28.word_28
/*! \brief Preprocessor variable to relate field to word number in structure wakeUpFrameCrc_7Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_7Word_1 29
/*! \brief Preprocessor variable to relate field to bit position in structure wakeUpFrameCrc_7Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define bits_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_7Word_1 u29.bits_29
/*! \brief Preprocessor variable to relate field to word position in structure wakeUpFrameCrc_7Word_1 in AQ_GbePhyExtendedWolControl_RHEA */
#define word_AQ_GbePhyExtendedWolControl_RHEA_wakeUpFrameCrc_7Word_1 u29.word_29

/*! \brief Base register address of structure AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA_baseRegisterAddress 0xC500
/*! \brief MMD address of structure AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure _100mSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA__100mSystemLoopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure _100mSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define bits_AQ_GbeReservedProvisioning_RHEA__100mSystemLoopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _100mSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define word_AQ_GbeReservedProvisioning_RHEA__100mSystemLoopback u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure gbeSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA_gbeSystemLoopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure gbeSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define bits_AQ_GbeReservedProvisioning_RHEA_gbeSystemLoopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure gbeSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define word_AQ_GbeReservedProvisioning_RHEA_gbeSystemLoopback u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure _10mSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA__10mSystemLoopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure _10mSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define bits_AQ_GbeReservedProvisioning_RHEA__10mSystemLoopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure _10mSystemLoopback in AQ_GbeReservedProvisioning_RHEA */
#define word_AQ_GbeReservedProvisioning_RHEA__10mSystemLoopback u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_1 in AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA_reservedProvisioning_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_1 in AQ_GbeReservedProvisioning_RHEA */
#define bits_AQ_GbeReservedProvisioning_RHEA_reservedProvisioning_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_1 in AQ_GbeReservedProvisioning_RHEA */
#define word_AQ_GbeReservedProvisioning_RHEA_reservedProvisioning_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure testMode in AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA_testMode 1
/*! \brief Preprocessor variable to relate field to bit position in structure testMode in AQ_GbeReservedProvisioning_RHEA */
#define bits_AQ_GbeReservedProvisioning_RHEA_testMode u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure testMode in AQ_GbeReservedProvisioning_RHEA */
#define word_AQ_GbeReservedProvisioning_RHEA_testMode u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_2 in AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA_reservedProvisioning_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_2 in AQ_GbeReservedProvisioning_RHEA */
#define bits_AQ_GbeReservedProvisioning_RHEA_reservedProvisioning_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_2 in AQ_GbeReservedProvisioning_RHEA */
#define word_AQ_GbeReservedProvisioning_RHEA_reservedProvisioning_2 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure _100base_txTestMode in AQ_GbeReservedProvisioning_RHEA */
#define AQ_GbeReservedProvisioning_RHEA__100base_txTestMode 1
/*! \brief Preprocessor variable to relate field to bit position in structure _100base_txTestMode in AQ_GbeReservedProvisioning_RHEA */
#define bits_AQ_GbeReservedProvisioning_RHEA__100base_txTestMode u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure _100base_txTestMode in AQ_GbeReservedProvisioning_RHEA */
#define word_AQ_GbeReservedProvisioning_RHEA__100base_txTestMode u1.word_1

/*! \brief Base register address of structure AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_baseRegisterAddress 0xD290
/*! \brief MMD address of structure AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxSynchronizationStatus in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSynchronizationStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxSynchronizationStatus in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSynchronizationStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxSynchronizationStatus in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSynchronizationStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxLoopbackIdleInsertionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxLoopbackIdleInsertionDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxLoopbackIdleInsertionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxLoopbackIdleInsertionDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxLoopbackIdleInsertionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxLoopbackIdleInsertionDetected u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxLoopbackIdleDeletionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxLoopbackIdleDeletionDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxLoopbackIdleDeletionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxLoopbackIdleDeletionDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxLoopbackIdleDeletionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxLoopbackIdleDeletionDetected u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxIdleInsertionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxIdleInsertionDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxIdleInsertionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxIdleInsertionDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxIdleInsertionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxIdleInsertionDetected u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxIdleDeletionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxIdleDeletionDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxIdleDeletionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxIdleDeletionDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxIdleDeletionDetected in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxIdleDeletionDetected u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxTxErSuppression in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxTxErSuppression 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxTxErSuppression in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxTxErSuppression u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxTxErSuppression in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxTxErSuppression u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxRxLinkActivity in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxRxLinkActivity 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxRxLinkActivity in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxRxLinkActivity u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxRxLinkActivity in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxRxLinkActivity u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFrameCounterLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameCounterLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFrameCounterLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameCounterLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFrameCounterLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameCounterLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFrameCounterMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameCounterMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFrameCounterMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameCounterMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFrameCounterMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameCounterMSW u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFrameErrorCounterLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameErrorCounterLSW 4
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFrameErrorCounterLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameErrorCounterLSW u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFrameErrorCounterLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameErrorCounterLSW u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFrameErrorCounterMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameErrorCounterMSW 5
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFrameErrorCounterMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameErrorCounterMSW u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFrameErrorCounterMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFrameErrorCounterMSW u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxCommaDetect in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxCommaDetect 6
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxCommaDetect in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxCommaDetect u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxCommaDetect in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxCommaDetect u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFalseCarrierCounter in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFalseCarrierCounter 7
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFalseCarrierCounter in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFalseCarrierCounter u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFalseCarrierCounter in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxFalseCarrierCounter u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxEeeRxLpiStateMachine in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiStateMachine 8
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxEeeRxLpiStateMachine in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiStateMachine u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxEeeRxLpiStateMachine in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiStateMachine u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxEeeRxLpiOrderedSetDectected in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiOrderedSetDectected 8
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxEeeRxLpiOrderedSetDectected in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiOrderedSetDectected u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxEeeRxLpiOrderedSetDectected in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiOrderedSetDectected u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxEeeRxLpiWakeTimerFaultError in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiWakeTimerFaultError 8
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxEeeRxLpiWakeTimerFaultError in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiWakeTimerFaultError u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxEeeRxLpiWakeTimerFaultError in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiWakeTimerFaultError u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxEeeRxLpiWakeDoneState in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiWakeDoneState 8
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxEeeRxLpiWakeDoneState in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiWakeDoneState u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxEeeRxLpiWakeDoneState in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiWakeDoneState u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxEeeRxLpiQuietState in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiQuietState 8
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxEeeRxLpiQuietState in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiQuietState u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxEeeRxLpiQuietState in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiQuietState u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxEeeRxLpiActiveState in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiActiveState 8
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxEeeRxLpiActiveState in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiActiveState u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxEeeRxLpiActiveState in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxEeeRxLpiActiveState u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxSequenceOrderedSetDectected in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetDectected 9
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxSequenceOrderedSetDectected in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetDectected u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxSequenceOrderedSetDectected in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetDectected u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxSequenceOrderedSetMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetMSW 9
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxSequenceOrderedSetMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetMSW u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxSequenceOrderedSetMSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetMSW u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxSequenceOrderedSetLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetLSW 10
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxSequenceOrderedSetLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define bits_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetLSW u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxSequenceOrderedSetLSW in AQ_GbePhySgmii0RxStatus_RHEA */
#define word_AQ_GbePhySgmii0RxStatus_RHEA_sgmii0RxSequenceOrderedSetLSW u10.word_10

/*! \brief Base register address of structure AQ_GbePhySgmii0RxMcrc_RHEA */
#define AQ_GbePhySgmii0RxMcrc_RHEA_baseRegisterAddress 0xD2A0
/*! \brief MMD address of structure AQ_GbePhySgmii0RxMcrc_RHEA */
#define AQ_GbePhySgmii0RxMcrc_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFragmentCounterLSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFragmentCounterLSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define bits_AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFragmentCounterLSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define word_AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFragmentCounterMSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFragmentCounterMSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define bits_AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFragmentCounterMSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define word_AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentCounterMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFragmentErrorCounterLSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentErrorCounterLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFragmentErrorCounterLSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define bits_AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentErrorCounterLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFragmentErrorCounterLSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define word_AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentErrorCounterLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxFragmentErrorCounterMSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentErrorCounterMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxFragmentErrorCounterMSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define bits_AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentErrorCounterMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxFragmentErrorCounterMSW in AQ_GbePhySgmii0RxMcrc_RHEA */
#define word_AQ_GbePhySgmii0RxMcrc_RHEA_sgmii0RxFragmentErrorCounterMSW u3.word_3

/*! \brief Base register address of structure AQ_Sgmii0WolStatus_RHEA */
#define AQ_Sgmii0WolStatus_RHEA_baseRegisterAddress 0xD312
/*! \brief MMD address of structure AQ_Sgmii0WolStatus_RHEA */
#define AQ_Sgmii0WolStatus_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0WakeUpFrameType in AQ_Sgmii0WolStatus_RHEA */
#define AQ_Sgmii0WolStatus_RHEA_sgmii0WakeUpFrameType 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0WakeUpFrameType in AQ_Sgmii0WolStatus_RHEA */
#define bits_AQ_Sgmii0WolStatus_RHEA_sgmii0WakeUpFrameType u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0WakeUpFrameType in AQ_Sgmii0WolStatus_RHEA */
#define word_AQ_Sgmii0WolStatus_RHEA_sgmii0WakeUpFrameType u0.word_0

/*! \brief Base register address of structure AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_baseRegisterAddress 0xD313
/*! \brief MMD address of structure AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFrameCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFrameCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFrameCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFrameCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFrameCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFrameCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameCounterMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFrameErrorCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameErrorCounterLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFrameErrorCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameErrorCounterLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFrameErrorCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameErrorCounterLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFrameErrorCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameErrorCounterMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFrameErrorCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameErrorCounterMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFrameErrorCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameErrorCounterMSW u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFalseCarrierCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFalseCarrierCounter 4
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFalseCarrierCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFalseCarrierCounter u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFalseCarrierCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFalseCarrierCounter u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxCollisionCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxCollisionCounter 5
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxCollisionCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxCollisionCounter u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxCollisionCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxCollisionCounter u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxLineCollisionCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxLineCollisionCounter 6
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxLineCollisionCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxLineCollisionCounter u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxLineCollisionCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxLineCollisionCounter u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFrameAlignmentCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameAlignmentCounter 7
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFrameAlignmentCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameAlignmentCounter u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFrameAlignmentCounter in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxFrameAlignmentCounter u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxRuntFrameCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxRuntFrameCounterLSW 8
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxRuntFrameCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxRuntFrameCounterLSW u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxRuntFrameCounterLSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxRuntFrameCounterLSW u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxRuntFrameCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxRuntFrameCounterMSW 9
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxRuntFrameCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define bits_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxRuntFrameCounterMSW u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxRuntFrameCounterMSW in AQ_GbePhySgmii0TxStatus_RHEA */
#define word_AQ_GbePhySgmii0TxStatus_RHEA_sgmii0TxRuntFrameCounterMSW u9.word_9

/*! \brief Base register address of structure AQ_GbePhyStatus_RHEA */
#define AQ_GbePhyStatus_RHEA_baseRegisterAddress 0xD31F
/*! \brief MMD address of structure AQ_GbePhyStatus_RHEA */
#define AQ_GbePhyStatus_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure xSequenceOrderedSetLSW in AQ_GbePhyStatus_RHEA */
#define AQ_GbePhyStatus_RHEA_xSequenceOrderedSetLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure xSequenceOrderedSetLSW in AQ_GbePhyStatus_RHEA */
#define bits_AQ_GbePhyStatus_RHEA_xSequenceOrderedSetLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xSequenceOrderedSetLSW in AQ_GbePhyStatus_RHEA */
#define word_AQ_GbePhyStatus_RHEA_xSequenceOrderedSetLSW u0.word_0

/*! \brief Base register address of structure AQ_GbePhySgmii0TxMcrc_RHEA */
#define AQ_GbePhySgmii0TxMcrc_RHEA_baseRegisterAddress 0xD320
/*! \brief MMD address of structure AQ_GbePhySgmii0TxMcrc_RHEA */
#define AQ_GbePhySgmii0TxMcrc_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFragmentCounterLSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentCounterLSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFragmentCounterLSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define bits_AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentCounterLSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFragmentCounterLSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define word_AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentCounterLSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFragmentCounterMSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentCounterMSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFragmentCounterMSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define bits_AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentCounterMSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFragmentCounterMSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define word_AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentCounterMSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFragmentErrorCounterLSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentErrorCounterLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFragmentErrorCounterLSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define bits_AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentErrorCounterLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFragmentErrorCounterLSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define word_AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentErrorCounterLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxFragmentErrorCounterMSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentErrorCounterMSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxFragmentErrorCounterMSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define bits_AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentErrorCounterMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxFragmentErrorCounterMSW in AQ_GbePhySgmii0TxMcrc_RHEA */
#define word_AQ_GbePhySgmii0TxMcrc_RHEA_sgmii0TxFragmentErrorCounterMSW u3.word_3

/*! \brief Base register address of structure AQ_GbePhySgmiiRxAlarms_RHEA */
#define AQ_GbePhySgmiiRxAlarms_RHEA_baseRegisterAddress 0xEC10
/*! \brief MMD address of structure AQ_GbePhySgmiiRxAlarms_RHEA */
#define AQ_GbePhySgmiiRxAlarms_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxLossOfSignal in AQ_GbePhySgmiiRxAlarms_RHEA */
#define AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxLossOfSignal 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxLossOfSignal in AQ_GbePhySgmiiRxAlarms_RHEA */
#define bits_AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxLossOfSignal u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxLossOfSignal in AQ_GbePhySgmiiRxAlarms_RHEA */
#define word_AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxLossOfSignal u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxInvalidCharacterError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxInvalidCharacterError 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxInvalidCharacterError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define bits_AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxInvalidCharacterError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxInvalidCharacterError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define word_AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxInvalidCharacterError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxRunningDisparityError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxRunningDisparityError 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxRunningDisparityError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define bits_AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxRunningDisparityError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxRunningDisparityError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define word_AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxRunningDisparityError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxCodeViolationError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxCodeViolationError 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxCodeViolationError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define bits_AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxCodeViolationError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxCodeViolationError in AQ_GbePhySgmiiRxAlarms_RHEA */
#define word_AQ_GbePhySgmiiRxAlarms_RHEA_sgmii0RxCodeViolationError u0.word_0

/*! \brief Base register address of structure AQ_GbePhySgmiiTxAlarms_RHEA */
#define AQ_GbePhySgmiiTxAlarms_RHEA_baseRegisterAddress 0xEC20
/*! \brief MMD address of structure AQ_GbePhySgmiiTxAlarms_RHEA */
#define AQ_GbePhySgmiiTxAlarms_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure rsiCtcPhaseFifoError in AQ_GbePhySgmiiTxAlarms_RHEA */
#define AQ_GbePhySgmiiTxAlarms_RHEA_rsiCtcPhaseFifoError 0
/*! \brief Preprocessor variable to relate field to bit position in structure rsiCtcPhaseFifoError in AQ_GbePhySgmiiTxAlarms_RHEA */
#define bits_AQ_GbePhySgmiiTxAlarms_RHEA_rsiCtcPhaseFifoError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rsiCtcPhaseFifoError in AQ_GbePhySgmiiTxAlarms_RHEA */
#define word_AQ_GbePhySgmiiTxAlarms_RHEA_rsiCtcPhaseFifoError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxInvalidGmiiCharacterDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0TxInvalidGmiiCharacterDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxInvalidGmiiCharacterDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define bits_AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0TxInvalidGmiiCharacterDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxInvalidGmiiCharacterDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define word_AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0TxInvalidGmiiCharacterDetected u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0MagicPacketFrameDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0MagicPacketFrameDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0MagicPacketFrameDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define bits_AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0MagicPacketFrameDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0MagicPacketFrameDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define word_AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0MagicPacketFrameDetected u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0WakeUpFrameDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0WakeUpFrameDetected 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0WakeUpFrameDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define bits_AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0WakeUpFrameDetected u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0WakeUpFrameDetected in AQ_GbePhySgmiiTxAlarms_RHEA */
#define word_AQ_GbePhySgmiiTxAlarms_RHEA_sgmii0WakeUpFrameDetected u0.word_0

/*! \brief Base register address of structure AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define AQ_GbePhySgmiiRxInterruptMask_RHEA_baseRegisterAddress 0xF410
/*! \brief MMD address of structure AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define AQ_GbePhySgmiiRxInterruptMask_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxLossOfSignalMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxLossOfSignalMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxLossOfSignalMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define bits_AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxLossOfSignalMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxLossOfSignalMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define word_AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxLossOfSignalMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxInvalidCharacterErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxInvalidCharacterErrorMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxInvalidCharacterErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define bits_AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxInvalidCharacterErrorMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxInvalidCharacterErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define word_AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxInvalidCharacterErrorMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxRunningDisparityErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxRunningDisparityErrorMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxRunningDisparityErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define bits_AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxRunningDisparityErrorMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxRunningDisparityErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define word_AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxRunningDisparityErrorMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0RxCodeViolationErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxCodeViolationErrorMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0RxCodeViolationErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define bits_AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxCodeViolationErrorMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0RxCodeViolationErrorMask in AQ_GbePhySgmiiRxInterruptMask_RHEA */
#define word_AQ_GbePhySgmiiRxInterruptMask_RHEA_sgmii0RxCodeViolationErrorMask u0.word_0

/*! \brief Base register address of structure AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define AQ_GbePhySgmiiTxInterruptMask_RHEA_baseRegisterAddress 0xF420
/*! \brief MMD address of structure AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define AQ_GbePhySgmiiTxInterruptMask_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure rsiCtcPhaseFifoErrorLASI_Mask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define AQ_GbePhySgmiiTxInterruptMask_RHEA_rsiCtcPhaseFifoErrorLASI_Mask 0
/*! \brief Preprocessor variable to relate field to bit position in structure rsiCtcPhaseFifoErrorLASI_Mask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define bits_AQ_GbePhySgmiiTxInterruptMask_RHEA_rsiCtcPhaseFifoErrorLASI_Mask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rsiCtcPhaseFifoErrorLASI_Mask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define word_AQ_GbePhySgmiiTxInterruptMask_RHEA_rsiCtcPhaseFifoErrorLASI_Mask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0TxInvalidGmiiCharacterDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0TxInvalidGmiiCharacterDetectedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0TxInvalidGmiiCharacterDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define bits_AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0TxInvalidGmiiCharacterDetectedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0TxInvalidGmiiCharacterDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define word_AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0TxInvalidGmiiCharacterDetectedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0MagicPacketFrameDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0MagicPacketFrameDetectedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0MagicPacketFrameDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define bits_AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0MagicPacketFrameDetectedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0MagicPacketFrameDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define word_AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0MagicPacketFrameDetectedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure sgmii0WakeUpFrameDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0WakeUpFrameDetectedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure sgmii0WakeUpFrameDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define bits_AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0WakeUpFrameDetectedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure sgmii0WakeUpFrameDetectedMask in AQ_GbePhySgmiiTxInterruptMask_RHEA */
#define word_AQ_GbePhySgmiiTxInterruptMask_RHEA_sgmii0WakeUpFrameDetectedMask u0.word_0

/*! \brief Base register address of structure AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define AQ_GbePhyVendorGlobalInterruptFlags_RHEA_baseRegisterAddress 0xFC00
/*! \brief MMD address of structure AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define AQ_GbePhyVendorGlobalInterruptFlags_RHEA_mmdAddress 0x1D
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificSgmiiTxAlarms_1Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiTxAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificSgmiiTxAlarms_1Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define bits_AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiTxAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificSgmiiTxAlarms_1Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define word_AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiTxAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificSgmiiTxAlarms_2Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiTxAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificSgmiiTxAlarms_2Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define bits_AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiTxAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificSgmiiTxAlarms_2Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define word_AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiTxAlarms_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificSgmiiRxAlarms_1Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiRxAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificSgmiiRxAlarms_1Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define bits_AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiRxAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificSgmiiRxAlarms_1Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define word_AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiRxAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificSgmiiRxAlarms_2Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiRxAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificSgmiiRxAlarms_2Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define bits_AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiRxAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificSgmiiRxAlarms_2Interrupt in AQ_GbePhyVendorGlobalInterruptFlags_RHEA */
#define word_AQ_GbePhyVendorGlobalInterruptFlags_RHEA_vendorSpecificSgmiiRxAlarms_2Interrupt u0.word_0
#endif
/*@}*/
/*@}*/
