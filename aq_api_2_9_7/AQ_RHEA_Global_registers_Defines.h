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
*   for the Global Registers block.
*/

/*! \defgroup Global_registers_Defines Global Registers Defines
*   This module contains the compiler assist macros and doxygen comments
*   for the Global Registers block.
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
*   This file contains the compiler assist macros for the registers contained in the Global Registers block.
*
*
***********************************************************************/


/*@{*/
#ifndef AQ_RHEA_GLOBAL_REGS_DEFINES_HEADER
#define AQ_RHEA_GLOBAL_REGS_DEFINES_HEADER


/*-----------------------------------------------------------------------------*/
/*Access macro definitions                                                     */
/*-----------------------------------------------------------------------------*/
/*! \brief Base register address of structure AQ_GlobalStandardControl_1_RHEA */
#define AQ_GlobalStandardControl_1_RHEA_baseRegisterAddress 0x0000
/*! \brief MMD address of structure AQ_GlobalStandardControl_1_RHEA */
#define AQ_GlobalStandardControl_1_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure softReset in AQ_GlobalStandardControl_1_RHEA */
#define AQ_GlobalStandardControl_1_RHEA_softReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure softReset in AQ_GlobalStandardControl_1_RHEA */
#define bits_AQ_GlobalStandardControl_1_RHEA_softReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure softReset in AQ_GlobalStandardControl_1_RHEA */
#define word_AQ_GlobalStandardControl_1_RHEA_softReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowPower in AQ_GlobalStandardControl_1_RHEA */
#define AQ_GlobalStandardControl_1_RHEA_lowPower 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowPower in AQ_GlobalStandardControl_1_RHEA */
#define bits_AQ_GlobalStandardControl_1_RHEA_lowPower u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowPower in AQ_GlobalStandardControl_1_RHEA */
#define word_AQ_GlobalStandardControl_1_RHEA_lowPower u0.word_0

/*! \brief Base register address of structure AQ_GlobalStandardDeviceIdentifier_RHEA */
#define AQ_GlobalStandardDeviceIdentifier_RHEA_baseRegisterAddress 0x0002
/*! \brief MMD address of structure AQ_GlobalStandardDeviceIdentifier_RHEA */
#define AQ_GlobalStandardDeviceIdentifier_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdMSW in AQ_GlobalStandardDeviceIdentifier_RHEA */
#define AQ_GlobalStandardDeviceIdentifier_RHEA_deviceIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdMSW in AQ_GlobalStandardDeviceIdentifier_RHEA */
#define bits_AQ_GlobalStandardDeviceIdentifier_RHEA_deviceIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdMSW in AQ_GlobalStandardDeviceIdentifier_RHEA */
#define word_AQ_GlobalStandardDeviceIdentifier_RHEA_deviceIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure deviceIdLSW in AQ_GlobalStandardDeviceIdentifier_RHEA */
#define AQ_GlobalStandardDeviceIdentifier_RHEA_deviceIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure deviceIdLSW in AQ_GlobalStandardDeviceIdentifier_RHEA */
#define bits_AQ_GlobalStandardDeviceIdentifier_RHEA_deviceIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure deviceIdLSW in AQ_GlobalStandardDeviceIdentifier_RHEA */
#define word_AQ_GlobalStandardDeviceIdentifier_RHEA_deviceIdLSW u1.word_1

/*! \brief Base register address of structure AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_baseRegisterAddress 0x0005
/*! \brief MMD address of structure AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_autonegotiationPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardDevicesInPackage_RHEA_autonegotiationPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardDevicesInPackage_RHEA_autonegotiationPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tcPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_tcPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure tcPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardDevicesInPackage_RHEA_tcPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tcPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardDevicesInPackage_RHEA_tcPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure dteXsPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_dteXsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure dteXsPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardDevicesInPackage_RHEA_dteXsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dteXsPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardDevicesInPackage_RHEA_dteXsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_Present in AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_phyXS_Present 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_Present in AQ_GlobalStandardDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardDevicesInPackage_RHEA_phyXS_Present u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_Present in AQ_GlobalStandardDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardDevicesInPackage_RHEA_phyXS_Present u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_pcsPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardDevicesInPackage_RHEA_pcsPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardDevicesInPackage_RHEA_pcsPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure wisPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_wisPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure wisPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardDevicesInPackage_RHEA_wisPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure wisPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardDevicesInPackage_RHEA_wisPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_pmaPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardDevicesInPackage_RHEA_pmaPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardDevicesInPackage_RHEA_pmaPresent u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clause_22RegistersPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define AQ_GlobalStandardDevicesInPackage_RHEA_clause_22RegistersPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22RegistersPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardDevicesInPackage_RHEA_clause_22RegistersPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clause_22RegistersPresent in AQ_GlobalStandardDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardDevicesInPackage_RHEA_clause_22RegistersPresent u0.word_0

/*! \brief Base register address of structure AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define AQ_GlobalStandardVendorDevicesInPackage_RHEA_baseRegisterAddress 0x0006
/*! \brief MMD address of structure AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define AQ_GlobalStandardVendorDevicesInPackage_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_2Present in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define AQ_GlobalStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_2Present 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_2Present in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_2Present u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_2Present in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_2Present u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure vendorSpecificDevice_1Present in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define AQ_GlobalStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_1Present 0
/*! \brief Preprocessor variable to relate field to bit position in structure vendorSpecificDevice_1Present in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_1Present u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure vendorSpecificDevice_1Present in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardVendorDevicesInPackage_RHEA_vendorSpecificDevice_1Present u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure clause_22ExtensionPresent in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define AQ_GlobalStandardVendorDevicesInPackage_RHEA_clause_22ExtensionPresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure clause_22ExtensionPresent in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define bits_AQ_GlobalStandardVendorDevicesInPackage_RHEA_clause_22ExtensionPresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure clause_22ExtensionPresent in AQ_GlobalStandardVendorDevicesInPackage_RHEA */
#define word_AQ_GlobalStandardVendorDevicesInPackage_RHEA_clause_22ExtensionPresent u0.word_0

/*! \brief Base register address of structure AQ_GlobalStandardStatus_2_RHEA */
#define AQ_GlobalStandardStatus_2_RHEA_baseRegisterAddress 0x0008
/*! \brief MMD address of structure AQ_GlobalStandardStatus_2_RHEA */
#define AQ_GlobalStandardStatus_2_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure devicePresent in AQ_GlobalStandardStatus_2_RHEA */
#define AQ_GlobalStandardStatus_2_RHEA_devicePresent 0
/*! \brief Preprocessor variable to relate field to bit position in structure devicePresent in AQ_GlobalStandardStatus_2_RHEA */
#define bits_AQ_GlobalStandardStatus_2_RHEA_devicePresent u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure devicePresent in AQ_GlobalStandardStatus_2_RHEA */
#define word_AQ_GlobalStandardStatus_2_RHEA_devicePresent u0.word_0

/*! \brief Base register address of structure AQ_GlobalStandardPackageIdentifier_RHEA */
#define AQ_GlobalStandardPackageIdentifier_RHEA_baseRegisterAddress 0x000E
/*! \brief MMD address of structure AQ_GlobalStandardPackageIdentifier_RHEA */
#define AQ_GlobalStandardPackageIdentifier_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure packageIdMSW in AQ_GlobalStandardPackageIdentifier_RHEA */
#define AQ_GlobalStandardPackageIdentifier_RHEA_packageIdMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdMSW in AQ_GlobalStandardPackageIdentifier_RHEA */
#define bits_AQ_GlobalStandardPackageIdentifier_RHEA_packageIdMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure packageIdMSW in AQ_GlobalStandardPackageIdentifier_RHEA */
#define word_AQ_GlobalStandardPackageIdentifier_RHEA_packageIdMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure packageIdLSW in AQ_GlobalStandardPackageIdentifier_RHEA */
#define AQ_GlobalStandardPackageIdentifier_RHEA_packageIdLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure packageIdLSW in AQ_GlobalStandardPackageIdentifier_RHEA */
#define bits_AQ_GlobalStandardPackageIdentifier_RHEA_packageIdLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure packageIdLSW in AQ_GlobalStandardPackageIdentifier_RHEA */
#define word_AQ_GlobalStandardPackageIdentifier_RHEA_packageIdLSW u1.word_1

/*! \brief Base register address of structure AQ_GlobalFirmwareID_RHEA */
#define AQ_GlobalFirmwareID_RHEA_baseRegisterAddress 0x0020
/*! \brief MMD address of structure AQ_GlobalFirmwareID_RHEA */
#define AQ_GlobalFirmwareID_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure firmwareMajorRevisionNumber in AQ_GlobalFirmwareID_RHEA */
#define AQ_GlobalFirmwareID_RHEA_firmwareMajorRevisionNumber 0
/*! \brief Preprocessor variable to relate field to bit position in structure firmwareMajorRevisionNumber in AQ_GlobalFirmwareID_RHEA */
#define bits_AQ_GlobalFirmwareID_RHEA_firmwareMajorRevisionNumber u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure firmwareMajorRevisionNumber in AQ_GlobalFirmwareID_RHEA */
#define word_AQ_GlobalFirmwareID_RHEA_firmwareMajorRevisionNumber u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure firmwareMinorRevisionNumber in AQ_GlobalFirmwareID_RHEA */
#define AQ_GlobalFirmwareID_RHEA_firmwareMinorRevisionNumber 0
/*! \brief Preprocessor variable to relate field to bit position in structure firmwareMinorRevisionNumber in AQ_GlobalFirmwareID_RHEA */
#define bits_AQ_GlobalFirmwareID_RHEA_firmwareMinorRevisionNumber u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure firmwareMinorRevisionNumber in AQ_GlobalFirmwareID_RHEA */
#define word_AQ_GlobalFirmwareID_RHEA_firmwareMinorRevisionNumber u0.word_0

/*! \brief Base register address of structure AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_baseRegisterAddress 0x0080
/*! \brief MMD address of structure AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure matchingDeviceAddress_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure matchingDeviceAddress_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure matchingDeviceAddress_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure remappedMMD_Address_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure remappedMMD_Address_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure remappedMMD_Address_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure matchingMMD_Address_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_0 1
/*! \brief Preprocessor variable to relate field to bit position in structure matchingMMD_Address_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_0 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure matchingMMD_Address_0 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_0 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure matchingDeviceAddress_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure matchingDeviceAddress_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure matchingDeviceAddress_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure remappedMMD_Address_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure remappedMMD_Address_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure remappedMMD_Address_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure matchingMMD_Address_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure matchingMMD_Address_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure matchingMMD_Address_1 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure matchingDeviceAddress_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_2 4
/*! \brief Preprocessor variable to relate field to bit position in structure matchingDeviceAddress_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_2 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure matchingDeviceAddress_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_2 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure remappedMMD_Address_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_2 4
/*! \brief Preprocessor variable to relate field to bit position in structure remappedMMD_Address_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_2 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure remappedMMD_Address_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_2 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure matchingMMD_Address_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_2 5
/*! \brief Preprocessor variable to relate field to bit position in structure matchingMMD_Address_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_2 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure matchingMMD_Address_2 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_2 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure matchingDeviceAddress_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_3 6
/*! \brief Preprocessor variable to relate field to bit position in structure matchingDeviceAddress_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_3 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure matchingDeviceAddress_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_3 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure remappedMMD_Address_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_3 6
/*! \brief Preprocessor variable to relate field to bit position in structure remappedMMD_Address_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_3 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure remappedMMD_Address_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_3 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure matchingMMD_Address_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_3 7
/*! \brief Preprocessor variable to relate field to bit position in structure matchingMMD_Address_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_3 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure matchingMMD_Address_3 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_3 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure matchingDeviceAddress_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_4 8
/*! \brief Preprocessor variable to relate field to bit position in structure matchingDeviceAddress_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_4 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure matchingDeviceAddress_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_4 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure remappedMMD_Address_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_4 8
/*! \brief Preprocessor variable to relate field to bit position in structure remappedMMD_Address_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_4 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure remappedMMD_Address_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_4 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure matchingMMD_Address_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_4 9
/*! \brief Preprocessor variable to relate field to bit position in structure matchingMMD_Address_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_4 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure matchingMMD_Address_4 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_4 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure matchingDeviceAddress_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_5 10
/*! \brief Preprocessor variable to relate field to bit position in structure matchingDeviceAddress_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_5 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure matchingDeviceAddress_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_5 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure remappedMMD_Address_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_5 10
/*! \brief Preprocessor variable to relate field to bit position in structure remappedMMD_Address_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_5 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure remappedMMD_Address_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_5 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure matchingMMD_Address_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_5 11
/*! \brief Preprocessor variable to relate field to bit position in structure matchingMMD_Address_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_5 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure matchingMMD_Address_5 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_5 u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure matchingDeviceAddress_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_6 12
/*! \brief Preprocessor variable to relate field to bit position in structure matchingDeviceAddress_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_6 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure matchingDeviceAddress_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_6 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure remappedMMD_Address_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_6 12
/*! \brief Preprocessor variable to relate field to bit position in structure remappedMMD_Address_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_6 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure remappedMMD_Address_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_6 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure matchingMMD_Address_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_6 13
/*! \brief Preprocessor variable to relate field to bit position in structure matchingMMD_Address_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_6 u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure matchingMMD_Address_6 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_6 u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure matchingDeviceAddress_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_7 14
/*! \brief Preprocessor variable to relate field to bit position in structure matchingDeviceAddress_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_7 u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure matchingDeviceAddress_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingDeviceAddress_7 u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure remappedMMD_Address_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_7 14
/*! \brief Preprocessor variable to relate field to bit position in structure remappedMMD_Address_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_7 u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure remappedMMD_Address_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_remappedMMD_Address_7 u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure matchingMMD_Address_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_7 15
/*! \brief Preprocessor variable to relate field to bit position in structure matchingMMD_Address_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define bits_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_7 u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure matchingMMD_Address_7 in AQ_GlobalProgrammableMMD_Register_RHEA */
#define word_AQ_GlobalProgrammableMMD_Register_RHEA_matchingMMD_Address_7 u15.word_15

/*! \brief Base register address of structure AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_baseRegisterAddress 0x0100
/*! \brief MMD address of structure AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure nvrExecuteOperation in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrExecuteOperation 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrExecuteOperation in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrExecuteOperation u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrExecuteOperation in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrExecuteOperation u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrWriteMode in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrWriteMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrWriteMode in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrWriteMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrWriteMode in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrWriteMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure freezeNvrCrc in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_freezeNvrCrc 0
/*! \brief Preprocessor variable to relate field to bit position in structure freezeNvrCrc in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_freezeNvrCrc u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure freezeNvrCrc in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_freezeNvrCrc u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetNvrCrc in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_resetNvrCrc 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetNvrCrc in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_resetNvrCrc u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetNvrCrc in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_resetNvrCrc u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrBurst in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrBurst 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrBurst in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrBurst u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrBurst in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrBurst u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrBusy in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrBusy 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrBusy in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrBusy u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrBusy in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrBusy u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrOpcode in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrOpcode 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrOpcode in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrOpcode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrOpcode in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrOpcode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrMailboxCrc in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrMailboxCrc 1
/*! \brief Preprocessor variable to relate field to bit position in structure nvrMailboxCrc in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrMailboxCrc u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure nvrMailboxCrc in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrMailboxCrc u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure nvrAddressMSW in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrAddressMSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure nvrAddressMSW in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrAddressMSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure nvrAddressMSW in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrAddressMSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure nvrAddressLSW in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrAddressLSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure nvrAddressLSW in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrAddressLSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure nvrAddressLSW in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrAddressLSW u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure nvrDataMSW in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrDataMSW 4
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDataMSW in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrDataMSW u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure nvrDataMSW in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrDataMSW u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure nvrDataLSW in AQ_GlobalNvrInterface_RHEA */
#define AQ_GlobalNvrInterface_RHEA_nvrDataLSW 5
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDataLSW in AQ_GlobalNvrInterface_RHEA */
#define bits_AQ_GlobalNvrInterface_RHEA_nvrDataLSW u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure nvrDataLSW in AQ_GlobalNvrInterface_RHEA */
#define word_AQ_GlobalNvrInterface_RHEA_nvrDataLSW u5.word_5

/*! \brief Base register address of structure AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_baseRegisterAddress 0x0200
/*! \brief MMD address of structure AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxExecuteOperation in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxExecuteOperation 0
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxExecuteOperation in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxExecuteOperation u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxExecuteOperation in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxExecuteOperation u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxWriteMode in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxWriteMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxWriteMode in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxWriteMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxWriteMode in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxWriteMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetUpMailboxCrc in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_resetUpMailboxCrc 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetUpMailboxCrc in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_resetUpMailboxCrc u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetUpMailboxCrc in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_resetUpMailboxCrc u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxBusy in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxBusy 0
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxBusy in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxBusy u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxBusy in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxBusy u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxCrc in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxCrc 1
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxCrc in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxCrc u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxCrc in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxCrc u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxAddressMSW in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxAddressMSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxAddressMSW in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxAddressMSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxAddressMSW in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxAddressMSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxAddressLSW in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxAddressLSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxAddressLSW in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxAddressLSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxAddressLSW in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxAddressLSW u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxAddressLSW_Don_tCare in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxAddressLSW_Don_tCare 3
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxAddressLSW_Don_tCare in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxAddressLSW_Don_tCare u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxAddressLSW_Don_tCare in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxAddressLSW_Don_tCare u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxDataMSW in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxDataMSW 4
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxDataMSW in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxDataMSW u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxDataMSW in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxDataMSW u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxDataLSW in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxDataLSW 5
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxDataLSW in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxDataLSW u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxDataLSW in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxDataLSW u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure upMailboxCrcReadEnable in AQ_GlobalMailboxInterface_RHEA */
#define AQ_GlobalMailboxInterface_RHEA_upMailboxCrcReadEnable 6
/*! \brief Preprocessor variable to relate field to bit position in structure upMailboxCrcReadEnable in AQ_GlobalMailboxInterface_RHEA */
#define bits_AQ_GlobalMailboxInterface_RHEA_upMailboxCrcReadEnable u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure upMailboxCrcReadEnable in AQ_GlobalMailboxInterface_RHEA */
#define word_AQ_GlobalMailboxInterface_RHEA_upMailboxCrcReadEnable u6.word_6

/*! \brief Base register address of structure AQ_GlobalMicroprocessorScratchPad_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_RHEA_baseRegisterAddress 0x0300
/*! \brief MMD address of structure AQ_GlobalMicroprocessorScratchPad_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_1 in AQ_GlobalMicroprocessorScratchPad_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_RHEA_scratchPad_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_1 in AQ_GlobalMicroprocessorScratchPad_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_RHEA_scratchPad_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_1 in AQ_GlobalMicroprocessorScratchPad_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_RHEA_scratchPad_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_2 in AQ_GlobalMicroprocessorScratchPad_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_RHEA_scratchPad_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_2 in AQ_GlobalMicroprocessorScratchPad_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_RHEA_scratchPad_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_2 in AQ_GlobalMicroprocessorScratchPad_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_RHEA_scratchPad_2 u1.word_1

/*! \brief Base register address of structure AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_baseRegisterAddress 0x0310
/*! \brief MMD address of structure AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp17 in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_reservedSp17 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp17 in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_reservedSp17 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp17 in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_reservedSp17 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ptpEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_ptpEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure ptpEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_ptpEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ptpEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_ptpEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure securityEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_securityEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure securityEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_securityEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure securityEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_securityEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_rateAdaptationMethod 0
/*! \brief Preprocessor variable to relate field to bit position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_rateAdaptationMethod u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_rateAdaptationMethod u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_serdesSilenceEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_serdesSilenceEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_serdesSilenceEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_resetOnTransitionEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_resetOnTransitionEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_resetOnTransitionEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure trainingEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_trainingEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure trainingEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_trainingEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure trainingEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_trainingEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_autonegEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_autonegEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegEnable in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_autonegEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMode in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define AQ_GlobalSystemConfigurationFor10M_RHEA_serdesMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMode in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10M_RHEA_serdesMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMode in AQ_GlobalSystemConfigurationFor10M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10M_RHEA_serdesMode u0.word_0

/*! \brief Base register address of structure AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_baseRegisterAddress 0x0311
/*! \brief MMD address of structure AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp182 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp182 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp182 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp182 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp182 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp182 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure frequencyForGenerateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_frequencyForGenerateTone 0
/*! \brief Preprocessor variable to relate field to bit position in structure frequencyForGenerateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_frequencyForGenerateTone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure frequencyForGenerateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_frequencyForGenerateTone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp181 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp181 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp181 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp181 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp181 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp181 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure channelForGenerateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_channelForGenerateTone 0
/*! \brief Preprocessor variable to relate field to bit position in structure channelForGenerateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_channelForGenerateTone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure channelForGenerateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_channelForGenerateTone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure generateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_generateTone 0
/*! \brief Preprocessor variable to relate field to bit position in structure generateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_generateTone u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure generateTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_generateTone u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp192 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp192 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp192 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp192 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp192 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp192 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure frequencyForDetectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_frequencyForDetectTone 1
/*! \brief Preprocessor variable to relate field to bit position in structure frequencyForDetectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_frequencyForDetectTone u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure frequencyForDetectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_frequencyForDetectTone u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp191 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp191 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp191 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp191 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp191 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp191 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure channelForDetectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_channelForDetectTone 1
/*! \brief Preprocessor variable to relate field to bit position in structure channelForDetectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_channelForDetectTone u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure channelForDetectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_channelForDetectTone u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure detectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_detectTone 1
/*! \brief Preprocessor variable to relate field to bit position in structure detectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_detectTone u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure detectTone in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_detectTone u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp201 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp201 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp201 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp201 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp201 in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_reservedSp201 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mdi_Mdi_xConnectionState1G in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_mdi_Mdi_xConnectionState1G 2
/*! \brief Preprocessor variable to relate field to bit position in structure mdi_Mdi_xConnectionState1G in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_mdi_Mdi_xConnectionState1G u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mdi_Mdi_xConnectionState1G in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_mdi_Mdi_xConnectionState1G u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pairPolarity1G in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_pairPolarity1G 2
/*! \brief Preprocessor variable to relate field to bit position in structure pairPolarity1G in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_pairPolarity1G u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure pairPolarity1G in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_pairPolarity1G u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure detectedTonePowerDbm in AQ_GlobalToneGenerationAndDetection_RHEA */
#define AQ_GlobalToneGenerationAndDetection_RHEA_detectedTonePowerDbm 2
/*! \brief Preprocessor variable to relate field to bit position in structure detectedTonePowerDbm in AQ_GlobalToneGenerationAndDetection_RHEA */
#define bits_AQ_GlobalToneGenerationAndDetection_RHEA_detectedTonePowerDbm u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure detectedTonePowerDbm in AQ_GlobalToneGenerationAndDetection_RHEA */
#define word_AQ_GlobalToneGenerationAndDetection_RHEA_detectedTonePowerDbm u2.word_2

/*! \brief Base register address of structure AQ_GlobalStartupRate_RHEA */
#define AQ_GlobalStartupRate_RHEA_baseRegisterAddress 0x031A
/*! \brief MMD address of structure AQ_GlobalStartupRate_RHEA */
#define AQ_GlobalStartupRate_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp27 in AQ_GlobalStartupRate_RHEA */
#define AQ_GlobalStartupRate_RHEA_reservedSp27 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp27 in AQ_GlobalStartupRate_RHEA */
#define bits_AQ_GlobalStartupRate_RHEA_reservedSp27 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp27 in AQ_GlobalStartupRate_RHEA */
#define word_AQ_GlobalStartupRate_RHEA_reservedSp27 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure startupRate in AQ_GlobalStartupRate_RHEA */
#define AQ_GlobalStartupRate_RHEA_startupRate 0
/*! \brief Preprocessor variable to relate field to bit position in structure startupRate in AQ_GlobalStartupRate_RHEA */
#define bits_AQ_GlobalStartupRate_RHEA_startupRate u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure startupRate in AQ_GlobalStartupRate_RHEA */
#define word_AQ_GlobalStartupRate_RHEA_startupRate u0.word_0

/*! \brief Base register address of structure AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_baseRegisterAddress 0x031B
/*! \brief MMD address of structure AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp28 in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_reservedSp28 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp28 in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_reservedSp28 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp28 in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_reservedSp28 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ptpEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_ptpEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure ptpEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_ptpEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ptpEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_ptpEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure securityEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_securityEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure securityEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_securityEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure securityEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_securityEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_rateAdaptationMethod 0
/*! \brief Preprocessor variable to relate field to bit position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_rateAdaptationMethod u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_rateAdaptationMethod u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_serdesSilenceEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_serdesSilenceEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_serdesSilenceEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_resetOnTransitionEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_resetOnTransitionEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_resetOnTransitionEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure trainingEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_trainingEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure trainingEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_trainingEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure trainingEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_trainingEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_autonegEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_autonegEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegEnable in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_autonegEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMode in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define AQ_GlobalSystemConfigurationFor100M_RHEA_serdesMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMode in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor100M_RHEA_serdesMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMode in AQ_GlobalSystemConfigurationFor100M_RHEA */
#define word_AQ_GlobalSystemConfigurationFor100M_RHEA_serdesMode u0.word_0

/*! \brief Base register address of structure AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_baseRegisterAddress 0x031C
/*! \brief MMD address of structure AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp29 in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_reservedSp29 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp29 in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_reservedSp29 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp29 in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_reservedSp29 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ptpEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_ptpEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure ptpEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_ptpEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ptpEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_ptpEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure securityEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_securityEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure securityEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_securityEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure securityEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_securityEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_rateAdaptationMethod 0
/*! \brief Preprocessor variable to relate field to bit position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_rateAdaptationMethod u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_rateAdaptationMethod u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_serdesSilenceEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_serdesSilenceEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_serdesSilenceEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_resetOnTransitionEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_resetOnTransitionEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_resetOnTransitionEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure trainingEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_trainingEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure trainingEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_trainingEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure trainingEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_trainingEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_autonegEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_autonegEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegEnable in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_autonegEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMode in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define AQ_GlobalSystemConfigurationFor1G_RHEA_serdesMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMode in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor1G_RHEA_serdesMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMode in AQ_GlobalSystemConfigurationFor1G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor1G_RHEA_serdesMode u0.word_0

/*! \brief Base register address of structure AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_baseRegisterAddress 0x031D
/*! \brief MMD address of structure AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp30 in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_reservedSp30 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp30 in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_reservedSp30 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp30 in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_reservedSp30 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ptpEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_ptpEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure ptpEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_ptpEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ptpEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_ptpEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure securityEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_securityEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure securityEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_securityEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure securityEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_securityEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_rateAdaptationMethod 0
/*! \brief Preprocessor variable to relate field to bit position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_rateAdaptationMethod u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_rateAdaptationMethod u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_serdesSilenceEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_serdesSilenceEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_serdesSilenceEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_resetOnTransitionEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_resetOnTransitionEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_resetOnTransitionEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure trainingEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_trainingEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure trainingEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_trainingEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure trainingEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_trainingEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_autonegEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_autonegEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegEnable in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_autonegEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMode in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_2_5g_RHEA_serdesMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMode in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_serdesMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMode in AQ_GlobalSystemConfigurationFor_2_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_2_5g_RHEA_serdesMode u0.word_0

/*! \brief Base register address of structure AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_baseRegisterAddress 0x031E
/*! \brief MMD address of structure AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp31 in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_reservedSp31 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp31 in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_reservedSp31 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp31 in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_reservedSp31 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ptpEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_ptpEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure ptpEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_ptpEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ptpEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_ptpEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure securityEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_securityEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure securityEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_securityEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure securityEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_securityEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_rateAdaptationMethod 0
/*! \brief Preprocessor variable to relate field to bit position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_rateAdaptationMethod u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_rateAdaptationMethod u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_serdesSilenceEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_serdesSilenceEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_serdesSilenceEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_resetOnTransitionEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_resetOnTransitionEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_resetOnTransitionEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure trainingEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_trainingEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure trainingEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_trainingEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure trainingEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_trainingEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_autonegEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_autonegEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegEnable in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_autonegEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMode in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define AQ_GlobalSystemConfigurationFor_5g_RHEA_serdesMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMode in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor_5g_RHEA_serdesMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMode in AQ_GlobalSystemConfigurationFor_5g_RHEA */
#define word_AQ_GlobalSystemConfigurationFor_5g_RHEA_serdesMode u0.word_0

/*! \brief Base register address of structure AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_baseRegisterAddress 0x031F
/*! \brief MMD address of structure AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedSp32 in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_reservedSp32 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedSp32 in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_reservedSp32 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedSp32 in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_reservedSp32 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ptpEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_ptpEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure ptpEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_ptpEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ptpEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_ptpEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure securityEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_securityEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure securityEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_securityEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure securityEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_securityEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_rateAdaptationMethod 0
/*! \brief Preprocessor variable to relate field to bit position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_rateAdaptationMethod u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rateAdaptationMethod in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_rateAdaptationMethod u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_serdesSilenceEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_serdesSilenceEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesSilenceEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_serdesSilenceEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_resetOnTransitionEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_resetOnTransitionEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetOnTransitionEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_resetOnTransitionEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure trainingEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_trainingEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure trainingEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_trainingEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure trainingEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_trainingEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_autonegEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_autonegEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegEnable in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_autonegEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure serdesMode in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define AQ_GlobalSystemConfigurationFor10G_RHEA_serdesMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure serdesMode in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define bits_AQ_GlobalSystemConfigurationFor10G_RHEA_serdesMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure serdesMode in AQ_GlobalSystemConfigurationFor10G_RHEA */
#define word_AQ_GlobalSystemConfigurationFor10G_RHEA_serdesMode u0.word_0

/*! \brief Base register address of structure AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_baseRegisterAddress 0x0380
/*! \brief MMD address of structure AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_33 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_33 0
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_33 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_33 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_33 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_33 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_34 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_34 1
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_34 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_34 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_34 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_34 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_35 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_35 2
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_35 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_35 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_35 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_35 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_36 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_36 3
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_36 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_36 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_36 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_36 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_37 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_37 4
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_37 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_37 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_37 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_37 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_38 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_38 5
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_38 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_38 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_38 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_38 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_39 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_39 6
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_39 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_39 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_39 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_39 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_40 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_40 7
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_40 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_40 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_40 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_40 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_41 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_41 8
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_41 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_41 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_41 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_41 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_42 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_42 9
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_42 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_42 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_42 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_42 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_43 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_43 10
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_43 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_43 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_43 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_43 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_44 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_44 11
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_44 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_44 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_44 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_44 u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_45 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_45 12
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_45 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_45 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_45 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_45 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_46 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_46 13
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_46 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_46 u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_46 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_46 u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_47 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_47 14
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_47 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_47 u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_47 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_47 u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_48 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_48 15
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_48 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_48 u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_48 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_48 u15.word_15
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_49 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_49 16
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_49 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_49 u16.bits_16
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_49 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_49 u16.word_16
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_50 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_50 17
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_50 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_50 u17.bits_17
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_50 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_50 u17.word_17
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_51 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_51 18
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_51 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_51 u18.bits_18
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_51 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_51 u18.word_18
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_52 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_52 19
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_52 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_52 u19.bits_19
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_52 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_52 u19.word_19
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_53 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_53 20
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_53 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_53 u20.bits_20
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_53 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_53 u20.word_20
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_54 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_54 21
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_54 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_54 u21.bits_21
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_54 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_54 u21.word_21
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_55 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_55 22
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_55 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_55 u22.bits_22
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_55 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_55 u22.word_22
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_56 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_56 23
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_56 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_56 u23.bits_23
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_56 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_56 u23.word_23
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_57 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_57 24
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_57 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_57 u24.bits_24
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_57 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_57 u24.word_24
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_58 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_58 25
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_58 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_58 u25.bits_25
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_58 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_58 u25.word_25
/*! \brief Preprocessor variable to relate field to word number in structure scratchPad_59 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_59 26
/*! \brief Preprocessor variable to relate field to bit position in structure scratchPad_59 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_59 u26.bits_26
/*! \brief Preprocessor variable to relate field to word position in structure scratchPad_59 in AQ_GlobalMicroprocessorScratchPad_2_RHEA */
#define word_AQ_GlobalMicroprocessorScratchPad_2_RHEA_scratchPad_59 u26.word_26

/*! \brief Base register address of structure AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA */
#define AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA_baseRegisterAddress 0x039B
/*! \brief MMD address of structure AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA */
#define AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure insertionLossPerUnitLength in AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA */
#define AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA_insertionLossPerUnitLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure insertionLossPerUnitLength in AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA */
#define bits_AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA_insertionLossPerUnitLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure insertionLossPerUnitLength in AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA */
#define word_AQ_GlobalMdiCableInsertionLossCharacteristics_RHEA_insertionLossPerUnitLength u0.word_0

/*! \brief Base register address of structure AQ_GlobalSystemUptime_RHEA */
#define AQ_GlobalSystemUptime_RHEA_baseRegisterAddress 0x039C
/*! \brief MMD address of structure AQ_GlobalSystemUptime_RHEA */
#define AQ_GlobalSystemUptime_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure systemUptime_15_0 in AQ_GlobalSystemUptime_RHEA */
#define AQ_GlobalSystemUptime_RHEA_systemUptime_15_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure systemUptime_15_0 in AQ_GlobalSystemUptime_RHEA */
#define bits_AQ_GlobalSystemUptime_RHEA_systemUptime_15_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure systemUptime_15_0 in AQ_GlobalSystemUptime_RHEA */
#define word_AQ_GlobalSystemUptime_RHEA_systemUptime_15_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure systemUptime_31_16 in AQ_GlobalSystemUptime_RHEA */
#define AQ_GlobalSystemUptime_RHEA_systemUptime_31_16 1
/*! \brief Preprocessor variable to relate field to bit position in structure systemUptime_31_16 in AQ_GlobalSystemUptime_RHEA */
#define bits_AQ_GlobalSystemUptime_RHEA_systemUptime_31_16 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure systemUptime_31_16 in AQ_GlobalSystemUptime_RHEA */
#define word_AQ_GlobalSystemUptime_RHEA_systemUptime_31_16 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure systemUptime_47_32 in AQ_GlobalSystemUptime_RHEA */
#define AQ_GlobalSystemUptime_RHEA_systemUptime_47_32 2
/*! \brief Preprocessor variable to relate field to bit position in structure systemUptime_47_32 in AQ_GlobalSystemUptime_RHEA */
#define bits_AQ_GlobalSystemUptime_RHEA_systemUptime_47_32 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure systemUptime_47_32 in AQ_GlobalSystemUptime_RHEA */
#define word_AQ_GlobalSystemUptime_RHEA_systemUptime_47_32 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reserved_4 in AQ_GlobalSystemUptime_RHEA */
#define AQ_GlobalSystemUptime_RHEA_reserved_4 3
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_4 in AQ_GlobalSystemUptime_RHEA */
#define bits_AQ_GlobalSystemUptime_RHEA_reserved_4 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reserved_4 in AQ_GlobalSystemUptime_RHEA */
#define word_AQ_GlobalSystemUptime_RHEA_reserved_4 u3.word_3

/*! \brief Base register address of structure AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_baseRegisterAddress 0x0440
/*! \brief MMD address of structure AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_0 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_0 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_0 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_1 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_1 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_1 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_2 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_2 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_2 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_3 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_3 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_3 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_3 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_4 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_4 4
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_4 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_4 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_4 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_4 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_5 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_5 5
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_5 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_5 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_5 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_5 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_6 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_6 6
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_6 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_6 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_6 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_6 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_7 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_7 7
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_7 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_7 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_7 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_7 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_8 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_8 8
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_8 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_8 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_8 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_8 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_9 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_9 9
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_9 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_9 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_9 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_9 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_10 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_10 10
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_10 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_10 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_10 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_10 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_11 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_11 11
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_11 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_11 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_11 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_11 u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_12 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_12 12
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_12 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_12 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_12 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_12 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_13 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_13 13
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_13 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_13 u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_13 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_13 u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_14 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_14 14
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_14 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_14 u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_14 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_14 u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_15 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_15 15
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_15 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_15 u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_15 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_15 u15.word_15
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_16 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_16 16
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_16 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_16 u16.bits_16
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_16 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_16 u16.word_16
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_17 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_17 17
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_17 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_17 u17.bits_17
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_17 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_17 u17.word_17
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_18 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_18 18
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_18 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_18 u18.bits_18
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_18 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_18 u18.word_18
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_19 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_19 19
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_19 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_19 u19.bits_19
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_19 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_19 u19.word_19
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_20 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_20 20
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_20 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_20 u20.bits_20
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_20 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_20 u20.word_20
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_21 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_21 21
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_21 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_21 u21.bits_21
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_21 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_21 u21.word_21
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_22 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_22 22
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_22 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_22 u22.bits_22
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_22 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_22 u22.word_22
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_23 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_23 23
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_23 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_23 u23.bits_23
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_23 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_23 u23.word_23
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_24 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_24 24
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_24 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_24 u24.bits_24
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_24 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_24 u24.word_24
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_25 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_25 25
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_25 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_25 u25.bits_25
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_25 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_25 u25.word_25
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_26 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_26 26
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_26 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_26 u26.bits_26
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_26 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_26 u26.word_26
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_27 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_27 27
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_27 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_27 u27.bits_27
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_27 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_27 u27.word_27
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_28 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_28 28
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_28 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_28 u28.bits_28
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_28 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_28 u28.word_28
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_29 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_29 29
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_29 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_29 u29.bits_29
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_29 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_29 u29.word_29
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_30 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_30 30
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_30 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_30 u30.bits_30
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_30 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_30 u30.word_30
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_31 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_31 31
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_31 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_31 u31.bits_31
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_31 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_31 u31.word_31
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_32 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_32 32
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_32 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_32 u32.bits_32
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_32 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_32 u32.word_32
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_33 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_33 33
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_33 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_33 u33.bits_33
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_33 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_33 u33.word_33
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_34 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_34 34
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_34 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_34 u34.bits_34
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_34 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_34 u34.word_34
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_35 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_35 35
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_35 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_35 u35.bits_35
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_35 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_35 u35.word_35
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_36 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_36 36
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_36 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_36 u36.bits_36
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_36 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_36 u36.word_36
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_37 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_37 37
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_37 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_37 u37.bits_37
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_37 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_37 u37.word_37
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_38 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_38 38
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_38 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_38 u38.bits_38
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_38 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_38 u38.word_38
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_39 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_39 39
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_39 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_39 u39.bits_39
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_39 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_39 u39.word_39
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_40 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_40 40
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_40 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_40 u40.bits_40
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_40 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_40 u40.word_40
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_41 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_41 41
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_41 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_41 u41.bits_41
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_41 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_41 u41.word_41
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_42 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_42 42
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_42 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_42 u42.bits_42
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_42 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_42 u42.word_42
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_43 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_43 43
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_43 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_43 u43.bits_43
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_43 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_43 u43.word_43
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_44 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_44 44
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_44 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_44 u44.bits_44
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_44 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_44 u44.word_44
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_45 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_45 45
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_45 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_45 u45.bits_45
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_45 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_45 u45.word_45
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_46 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_46 46
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_46 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_46 u46.bits_46
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_46 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_46 u46.word_46
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_47 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_47 47
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_47 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_47 u47.bits_47
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_47 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_47 u47.word_47
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_48 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_48 48
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_48 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_48 u48.bits_48
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_48 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_48 u48.word_48
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_49 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_49 49
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_49 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_49 u49.bits_49
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_49 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_49 u49.word_49
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_50 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_50 50
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_50 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_50 u50.bits_50
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_50 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_50 u50.word_50
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_51 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_51 51
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_51 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_51 u51.bits_51
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_51 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_51 u51.word_51
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_52 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_52 52
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_52 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_52 u52.bits_52
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_52 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_52 u52.word_52
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_53 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_53 53
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_53 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_53 u53.bits_53
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_53 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_53 u53.word_53
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_54 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_54 54
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_54 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_54 u54.bits_54
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_54 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_54 u54.word_54
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_55 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_55 55
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_55 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_55 u55.bits_55
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_55 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_55 u55.word_55
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_56 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_56 56
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_56 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_56 u56.bits_56
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_56 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_56 u56.word_56
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_57 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_57 57
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_57 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_57 u57.bits_57
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_57 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_57 u57.word_57
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_58 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_58 58
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_58 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_58 u58.bits_58
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_58 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_58 u58.word_58
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_59 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_59 59
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_59 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_59 u59.bits_59
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_59 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_59 u59.word_59
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_60 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_60 60
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_60 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_60 u60.bits_60
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_60 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_60 u60.word_60
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_61 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_61 61
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_61 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_61 u61.bits_61
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_61 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_61 u61.word_61
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_62 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_62 62
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_62 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_62 u62.bits_62
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_62 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_62 u62.word_62
/*! \brief Preprocessor variable to relate field to word number in structure scratchRegs_63 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_63 63
/*! \brief Preprocessor variable to relate field to bit position in structure scratchRegs_63 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define bits_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_63 u63.bits_63
/*! \brief Preprocessor variable to relate field to word position in structure scratchRegs_63 in AQ_GlobalMicroprocessorScratchRegs_RHEA */
#define word_AQ_GlobalMicroprocessorScratchRegs_RHEA_scratchRegs_63 u63.word_63

/*! \brief Base register address of structure AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_baseRegisterAddress 0x04E0
/*! \brief MMD address of structure AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionTimestamp_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionTimestamp_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionTimestamp_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionTimestamp_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionTimestamp_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionTimestamp_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_2 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionTimestamp_3 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_3 2
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionTimestamp_3 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_3 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionTimestamp_3 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_3 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionTimestamp_4 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_4 3
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionTimestamp_4 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_4 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionTimestamp_4 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionTimestamp_4 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionCode_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionCode_1 4
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionCode_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionCode_1 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionCode_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionCode_1 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionCode_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionCode_2 5
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionCode_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionCode_2 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionCode_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionCode_2 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionInstAddress_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionInstAddress_1 6
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionInstAddress_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionInstAddress_1 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionInstAddress_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionInstAddress_1 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionInstAddress_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionInstAddress_2 7
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionInstAddress_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionInstAddress_2 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionInstAddress_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionInstAddress_2 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionDataAddress_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionDataAddress_1 8
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionDataAddress_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionDataAddress_1 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionDataAddress_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionDataAddress_1 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionDataAddress_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionDataAddress_2 9
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionDataAddress_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionDataAddress_2 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionDataAddress_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionDataAddress_2 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionAuxData_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_1 10
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionAuxData_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_1 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionAuxData_1 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_1 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionAuxData_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_2 11
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionAuxData_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_2 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionAuxData_2 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_2 u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionAuxData_3 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_3 12
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionAuxData_3 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_3 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionAuxData_3 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_3 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure generalSystemExceptionAuxData_4 in AQ_GlobalSystemExceptionRegs_RHEA */
#define AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_4 13
/*! \brief Preprocessor variable to relate field to bit position in structure generalSystemExceptionAuxData_4 in AQ_GlobalSystemExceptionRegs_RHEA */
#define bits_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_4 u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure generalSystemExceptionAuxData_4 in AQ_GlobalSystemExceptionRegs_RHEA */
#define word_AQ_GlobalSystemExceptionRegs_RHEA_generalSystemExceptionAuxData_4 u13.word_13

/*! \brief Base register address of structure AQ_GlobalCommonPorControl_RHEA */
#define AQ_GlobalCommonPorControl_RHEA_baseRegisterAddress 0x2681
/*! \brief MMD address of structure AQ_GlobalCommonPorControl_RHEA */
#define AQ_GlobalCommonPorControl_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure phyReset in AQ_GlobalCommonPorControl_RHEA */
#define AQ_GlobalCommonPorControl_RHEA_phyReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyReset in AQ_GlobalCommonPorControl_RHEA */
#define bits_AQ_GlobalCommonPorControl_RHEA_phyReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyReset in AQ_GlobalCommonPorControl_RHEA */
#define word_AQ_GlobalCommonPorControl_RHEA_phyReset u0.word_0

/*! \brief Base register address of structure AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_baseRegisterAddress 0x5002
/*! \brief MMD address of structure AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressEthertypeExplicitSectagLsb in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressEthertypeExplicitSectagLsb 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressEthertypeExplicitSectagLsb in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressEthertypeExplicitSectagLsb u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressEthertypeExplicitSectagLsb in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressEthertypeExplicitSectagLsb u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressClearGlobalTime in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressClearGlobalTime 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressClearGlobalTime in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressClearGlobalTime u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressClearGlobalTime in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressClearGlobalTime u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressClearCounter in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressClearCounter 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressClearCounter in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressClearCounter u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressClearCounter in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressClearCounter u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressHighPriority in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressHighPriority 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressHighPriority in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressHighPriority u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressHighPriority in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressHighPriority u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressIcvLsb_8BytesEnable in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressIcvLsb_8BytesEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressIcvLsb_8BytesEnable in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressIcvLsb_8BytesEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressIcvLsb_8BytesEnable in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressIcvLsb_8BytesEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressExternalClassificationEnable in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressExternalClassificationEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressExternalClassificationEnable in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressExternalClassificationEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressExternalClassificationEnable in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressExternalClassificationEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressExplicitSectagReportShortLength in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressExplicitSectagReportShortLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressExplicitSectagReportShortLength in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressExplicitSectagReportShortLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressExplicitSectagReportShortLength in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressExplicitSectagReportShortLength u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressDropInvalidSa_scPackets in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressDropInvalidSa_scPackets 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressDropInvalidSa_scPackets in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressDropInvalidSa_scPackets u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressDropInvalidSa_scPackets in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressDropInvalidSa_scPackets u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressUnmatchedUseSc_0 in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressUnmatchedUseSc_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressUnmatchedUseSc_0 in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressUnmatchedUseSc_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressUnmatchedUseSc_0 in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressUnmatchedUseSc_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgresssGcmTestMode in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgresssGcmTestMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgresssGcmTestMode in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgresssGcmTestMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgresssGcmTestMode in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgresssGcmTestMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressGcmStart in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressGcmStart 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressGcmStart in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressGcmStart u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressGcmStart in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressGcmStart u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressDropEgprcLutMiss in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressDropEgprcLutMiss 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressDropEgprcLutMiss in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressDropEgprcLutMiss u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressDropEgprcLutMiss in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressDropEgprcLutMiss u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressDropKayPacket in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressDropKayPacket 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressDropKayPacket in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressDropKayPacket u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressDropKayPacket in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressDropKayPacket u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressSoftReset in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressSoftReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressSoftReset in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressSoftReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressSoftReset in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressSoftReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressExtendedPacketNumbering in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressExtendedPacketNumbering 1
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressExtendedPacketNumbering in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressExtendedPacketNumbering u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressExtendedPacketNumbering in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressExtendedPacketNumbering u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mssEgress_128_bitKeyOnly in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgress_128_bitKeyOnly 1
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgress_128_bitKeyOnly in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgress_128_bitKeyOnly u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mssEgress_128_bitKeyOnly in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgress_128_bitKeyOnly u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressEthertypeExplicitSectagMsb in AQ_MssEgressControlRegister_RHEA */
#define AQ_MssEgressControlRegister_RHEA_mssEgressEthertypeExplicitSectagMsb 1
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressEthertypeExplicitSectagMsb in AQ_MssEgressControlRegister_RHEA */
#define bits_AQ_MssEgressControlRegister_RHEA_mssEgressEthertypeExplicitSectagMsb u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressEthertypeExplicitSectagMsb in AQ_MssEgressControlRegister_RHEA */
#define word_AQ_MssEgressControlRegister_RHEA_mssEgressEthertypeExplicitSectagMsb u1.word_1

/*! \brief Base register address of structure AQ_MssEgressLutAddressControlRegister_RHEA */
#define AQ_MssEgressLutAddressControlRegister_RHEA_baseRegisterAddress 0x5080
/*! \brief MMD address of structure AQ_MssEgressLutAddressControlRegister_RHEA */
#define AQ_MssEgressLutAddressControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutSelect in AQ_MssEgressLutAddressControlRegister_RHEA */
#define AQ_MssEgressLutAddressControlRegister_RHEA_mssEgressLutSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutSelect in AQ_MssEgressLutAddressControlRegister_RHEA */
#define bits_AQ_MssEgressLutAddressControlRegister_RHEA_mssEgressLutSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutSelect in AQ_MssEgressLutAddressControlRegister_RHEA */
#define word_AQ_MssEgressLutAddressControlRegister_RHEA_mssEgressLutSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutAddress in AQ_MssEgressLutAddressControlRegister_RHEA */
#define AQ_MssEgressLutAddressControlRegister_RHEA_mssEgressLutAddress 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutAddress in AQ_MssEgressLutAddressControlRegister_RHEA */
#define bits_AQ_MssEgressLutAddressControlRegister_RHEA_mssEgressLutAddress u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutAddress in AQ_MssEgressLutAddressControlRegister_RHEA */
#define word_AQ_MssEgressLutAddressControlRegister_RHEA_mssEgressLutAddress u0.word_0

/*! \brief Base register address of structure AQ_MssEgressLutControlRegister_RHEA */
#define AQ_MssEgressLutControlRegister_RHEA_baseRegisterAddress 0x5081
/*! \brief MMD address of structure AQ_MssEgressLutControlRegister_RHEA */
#define AQ_MssEgressLutControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutWrite in AQ_MssEgressLutControlRegister_RHEA */
#define AQ_MssEgressLutControlRegister_RHEA_mssEgressLutWrite 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutWrite in AQ_MssEgressLutControlRegister_RHEA */
#define bits_AQ_MssEgressLutControlRegister_RHEA_mssEgressLutWrite u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutWrite in AQ_MssEgressLutControlRegister_RHEA */
#define word_AQ_MssEgressLutControlRegister_RHEA_mssEgressLutWrite u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutRead in AQ_MssEgressLutControlRegister_RHEA */
#define AQ_MssEgressLutControlRegister_RHEA_mssEgressLutRead 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutRead in AQ_MssEgressLutControlRegister_RHEA */
#define bits_AQ_MssEgressLutControlRegister_RHEA_mssEgressLutRead u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutRead in AQ_MssEgressLutControlRegister_RHEA */
#define word_AQ_MssEgressLutControlRegister_RHEA_mssEgressLutRead u0.word_0

/*! \brief Base register address of structure AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_baseRegisterAddress 0x50A0
/*! \brief MMD address of structure AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_0 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_0 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_0 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_1 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_1 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_1 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_2 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_2 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_2 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_3 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_3 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_3 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_3 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_4 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_4 4
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_4 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_4 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_4 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_4 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_5 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_5 5
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_5 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_5 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_5 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_5 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_6 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_6 6
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_6 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_6 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_6 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_6 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_7 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_7 7
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_7 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_7 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_7 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_7 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_8 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_8 8
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_8 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_8 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_8 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_8 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_9 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_9 9
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_9 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_9 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_9 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_9 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_10 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_10 10
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_10 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_10 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_10 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_10 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_11 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_11 11
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_11 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_11 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_11 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_11 u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_12 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_12 12
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_12 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_12 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_12 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_12 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_13 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_13 13
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_13 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_13 u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_13 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_13 u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_14 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_14 14
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_14 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_14 u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_14 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_14 u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_15 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_15 15
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_15 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_15 u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_15 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_15 u15.word_15
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_16 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_16 16
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_16 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_16 u16.bits_16
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_16 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_16 u16.word_16
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_17 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_17 17
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_17 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_17 u17.bits_17
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_17 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_17 u17.word_17
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_18 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_18 18
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_18 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_18 u18.bits_18
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_18 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_18 u18.word_18
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_19 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_19 19
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_19 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_19 u19.bits_19
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_19 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_19 u19.word_19
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_20 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_20 20
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_20 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_20 u20.bits_20
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_20 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_20 u20.word_20
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_21 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_21 21
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_21 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_21 u21.bits_21
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_21 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_21 u21.word_21
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_22 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_22 22
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_22 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_22 u22.bits_22
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_22 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_22 u22.word_22
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_23 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_23 23
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_23 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_23 u23.bits_23
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_23 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_23 u23.word_23
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_24 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_24 24
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_24 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_24 u24.bits_24
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_24 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_24 u24.word_24
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_25 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_25 25
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_25 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_25 u25.bits_25
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_25 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_25 u25.word_25
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_26 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_26 26
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_26 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_26 u26.bits_26
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_26 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_26 u26.word_26
/*! \brief Preprocessor variable to relate field to word number in structure mssEgressLutData_27 in AQ_MssEgressLutDataControlRegister_RHEA */
#define AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_27 27
/*! \brief Preprocessor variable to relate field to bit position in structure mssEgressLutData_27 in AQ_MssEgressLutDataControlRegister_RHEA */
#define bits_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_27 u27.bits_27
/*! \brief Preprocessor variable to relate field to word position in structure mssEgressLutData_27 in AQ_MssEgressLutDataControlRegister_RHEA */
#define word_AQ_MssEgressLutDataControlRegister_RHEA_mssEgressLutData_27 u27.word_27

/*! \brief Base register address of structure AQ_MsmSystemRevisionRegister_RHEA */
#define AQ_MsmSystemRevisionRegister_RHEA_baseRegisterAddress 0x6000
/*! \brief MMD address of structure AQ_MsmSystemRevisionRegister_RHEA */
#define AQ_MsmSystemRevisionRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemCoreRevision in AQ_MsmSystemRevisionRegister_RHEA */
#define AQ_MsmSystemRevisionRegister_RHEA_msmSystemCoreRevision 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemCoreRevision in AQ_MsmSystemRevisionRegister_RHEA */
#define bits_AQ_MsmSystemRevisionRegister_RHEA_msmSystemCoreRevision u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemCoreRevision in AQ_MsmSystemRevisionRegister_RHEA */
#define word_AQ_MsmSystemRevisionRegister_RHEA_msmSystemCoreRevision u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemCoreVersion in AQ_MsmSystemRevisionRegister_RHEA */
#define AQ_MsmSystemRevisionRegister_RHEA_msmSystemCoreVersion 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemCoreVersion in AQ_MsmSystemRevisionRegister_RHEA */
#define bits_AQ_MsmSystemRevisionRegister_RHEA_msmSystemCoreVersion u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemCoreVersion in AQ_MsmSystemRevisionRegister_RHEA */
#define word_AQ_MsmSystemRevisionRegister_RHEA_msmSystemCoreVersion u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemCustomerRevision in AQ_MsmSystemRevisionRegister_RHEA */
#define AQ_MsmSystemRevisionRegister_RHEA_msmSystemCustomerRevision 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemCustomerRevision in AQ_MsmSystemRevisionRegister_RHEA */
#define bits_AQ_MsmSystemRevisionRegister_RHEA_msmSystemCustomerRevision u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemCustomerRevision in AQ_MsmSystemRevisionRegister_RHEA */
#define word_AQ_MsmSystemRevisionRegister_RHEA_msmSystemCustomerRevision u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemScratchpadRegister_RHEA */
#define AQ_MsmSystemScratchpadRegister_RHEA_baseRegisterAddress 0x6002
/*! \brief MMD address of structure AQ_MsmSystemScratchpadRegister_RHEA */
#define AQ_MsmSystemScratchpadRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemScratch_0 in AQ_MsmSystemScratchpadRegister_RHEA */
#define AQ_MsmSystemScratchpadRegister_RHEA_msmSystemScratch_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemScratch_0 in AQ_MsmSystemScratchpadRegister_RHEA */
#define bits_AQ_MsmSystemScratchpadRegister_RHEA_msmSystemScratch_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemScratch_0 in AQ_MsmSystemScratchpadRegister_RHEA */
#define word_AQ_MsmSystemScratchpadRegister_RHEA_msmSystemScratch_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemScratch_1 in AQ_MsmSystemScratchpadRegister_RHEA */
#define AQ_MsmSystemScratchpadRegister_RHEA_msmSystemScratch_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemScratch_1 in AQ_MsmSystemScratchpadRegister_RHEA */
#define bits_AQ_MsmSystemScratchpadRegister_RHEA_msmSystemScratch_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemScratch_1 in AQ_MsmSystemScratchpadRegister_RHEA */
#define word_AQ_MsmSystemScratchpadRegister_RHEA_msmSystemScratch_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_baseRegisterAddress 0x6004
/*! \brief MMD address of structure AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemPhyTxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPhyTxEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemPhyTxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPhyTxEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemPhyTxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPhyTxEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxErrorDiscard in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemRxErrorDiscard 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxErrorDiscard in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemRxErrorDiscard u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxErrorDiscard in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemRxErrorDiscard u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemControlFrameEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemControlFrameEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemControlFrameEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemControlFrameEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemControlFrameEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemControlFrameEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSoftReset in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemSoftReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSoftReset in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemSoftReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSoftReset in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemSoftReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxPadEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxPadEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxPadEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxPadEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxPadEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxPadEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxCrcAppend in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxCrcAppend 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxCrcAppend in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxCrcAppend u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxCrcAppend in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxCrcAppend u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxAddressInsertEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxAddressInsertEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxAddressInsertEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxAddressInsertEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxAddressInsertEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxAddressInsertEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemPauseIgnore in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPauseIgnore 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemPauseIgnore in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPauseIgnore u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemPauseIgnore in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPauseIgnore u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemPauseForward in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPauseForward 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemPauseForward in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPauseForward u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemPauseForward in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPauseForward u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemCrcForward in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemCrcForward 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemCrcForward in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemCrcForward u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemCrcForward in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemCrcForward u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemPadEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPadEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemPadEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPadEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemPadEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPadEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemPromiscuousMode in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPromiscuousMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemPromiscuousMode in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPromiscuousMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemPromiscuousMode in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPromiscuousMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemWanMode in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemWanMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemWanMode in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemWanMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemWanMode in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemWanMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemRxEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemRxEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemRxEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemStatisticCounterReset in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemStatisticCounterReset 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemStatisticCounterReset in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemStatisticCounterReset u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemStatisticCounterReset in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemStatisticCounterReset u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemCrcCorruptionDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemCrcCorruptionDisable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemCrcCorruptionDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemCrcCorruptionDisable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemCrcCorruptionDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemCrcCorruptionDisable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxLowPowerIdleEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxLowPowerIdleEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxLowPowerIdleEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxLowPowerIdleEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxLowPowerIdleEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemTxLowPowerIdleEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSfdCheckDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemSfdCheckDisable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSfdCheckDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemSfdCheckDisable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSfdCheckDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemSfdCheckDisable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemPriorityFlowControlEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPriorityFlowControlEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemPriorityFlowControlEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPriorityFlowControlEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemPriorityFlowControlEnable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemPriorityFlowControlEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemIdleColumnCountExtend in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemIdleColumnCountExtend 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemIdleColumnCountExtend in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemIdleColumnCountExtend u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemIdleColumnCountExtend in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemIdleColumnCountExtend u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemLengthCheckDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemLengthCheckDisable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemLengthCheckDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemLengthCheckDisable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemLengthCheckDisable in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemLengthCheckDisable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemForceSendIdle in AQ_MsmSystemGeneralControlRegister_RHEA */
#define AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemForceSendIdle 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemForceSendIdle in AQ_MsmSystemGeneralControlRegister_RHEA */
#define bits_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemForceSendIdle u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemForceSendIdle in AQ_MsmSystemGeneralControlRegister_RHEA */
#define word_AQ_MsmSystemGeneralControlRegister_RHEA_msmSystemForceSendIdle u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemAddressRegister_RHEA */
#define AQ_MsmSystemAddressRegister_RHEA_baseRegisterAddress 0x6006
/*! \brief MMD address of structure AQ_MsmSystemAddressRegister_RHEA */
#define AQ_MsmSystemAddressRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemAddress_0 in AQ_MsmSystemAddressRegister_RHEA */
#define AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemAddress_0 in AQ_MsmSystemAddressRegister_RHEA */
#define bits_AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemAddress_0 in AQ_MsmSystemAddressRegister_RHEA */
#define word_AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemAddress_1 in AQ_MsmSystemAddressRegister_RHEA */
#define AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemAddress_1 in AQ_MsmSystemAddressRegister_RHEA */
#define bits_AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemAddress_1 in AQ_MsmSystemAddressRegister_RHEA */
#define word_AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemAddress_2 in AQ_MsmSystemAddressRegister_RHEA */
#define AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemAddress_2 in AQ_MsmSystemAddressRegister_RHEA */
#define bits_AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemAddress_2 in AQ_MsmSystemAddressRegister_RHEA */
#define word_AQ_MsmSystemAddressRegister_RHEA_msmSystemAddress_2 u2.word_2

/*! \brief Base register address of structure AQ_MsmSystemFrameControlRegister_RHEA */
#define AQ_MsmSystemFrameControlRegister_RHEA_baseRegisterAddress 0x600A
/*! \brief MMD address of structure AQ_MsmSystemFrameControlRegister_RHEA */
#define AQ_MsmSystemFrameControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMaximumFrameLength in AQ_MsmSystemFrameControlRegister_RHEA */
#define AQ_MsmSystemFrameControlRegister_RHEA_msmSystemMaximumFrameLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMaximumFrameLength in AQ_MsmSystemFrameControlRegister_RHEA */
#define bits_AQ_MsmSystemFrameControlRegister_RHEA_msmSystemMaximumFrameLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMaximumFrameLength in AQ_MsmSystemFrameControlRegister_RHEA */
#define word_AQ_MsmSystemFrameControlRegister_RHEA_msmSystemMaximumFrameLength u0.word_0

/*! \brief Base register address of structure AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_baseRegisterAddress 0x600E
/*! \brief MMD address of structure AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxFifoFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoFullThreshold 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxFifoFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define bits_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoFullThreshold u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxFifoFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define word_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoFullThreshold u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxFifoEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoEmptyThreshold 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxFifoEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define bits_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoEmptyThreshold u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxFifoEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define word_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoEmptyThreshold u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxFifoFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoFullThreshold 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxFifoFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define bits_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoFullThreshold u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxFifoFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define word_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoFullThreshold u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxFifoEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoEmptyThreshold 3
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxFifoEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define bits_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoEmptyThreshold u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxFifoEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define word_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoEmptyThreshold u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxFifoAlmostFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoAlmostFullThreshold 4
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxFifoAlmostFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define bits_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoAlmostFullThreshold u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxFifoAlmostFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define word_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoAlmostFullThreshold u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxFifoAlmostEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoAlmostEmptyThreshold 5
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxFifoAlmostEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define bits_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoAlmostEmptyThreshold u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxFifoAlmostEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define word_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemRxFifoAlmostEmptyThreshold u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxFifoAlmostFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoAlmostFullThreshold 6
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxFifoAlmostFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define bits_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoAlmostFullThreshold u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxFifoAlmostFullThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define word_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoAlmostFullThreshold u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxFifoAlmostEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoAlmostEmptyThreshold 7
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxFifoAlmostEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define bits_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoAlmostEmptyThreshold u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxFifoAlmostEmptyThreshold in AQ_MsmSystemFifoControlRegister_RHEA */
#define word_AQ_MsmSystemFifoControlRegister_RHEA_msmSystemTxFifoAlmostEmptyThreshold u7.word_7

/*! \brief Base register address of structure AQ_MsmSystemHashControlRegister_RHEA */
#define AQ_MsmSystemHashControlRegister_RHEA_baseRegisterAddress 0x6016
/*! \brief MMD address of structure AQ_MsmSystemHashControlRegister_RHEA */
#define AQ_MsmSystemHashControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMulticastEnable in AQ_MsmSystemHashControlRegister_RHEA */
#define AQ_MsmSystemHashControlRegister_RHEA_msmSystemMulticastEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMulticastEnable in AQ_MsmSystemHashControlRegister_RHEA */
#define bits_AQ_MsmSystemHashControlRegister_RHEA_msmSystemMulticastEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMulticastEnable in AQ_MsmSystemHashControlRegister_RHEA */
#define word_AQ_MsmSystemHashControlRegister_RHEA_msmSystemMulticastEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemHashTable in AQ_MsmSystemHashControlRegister_RHEA */
#define AQ_MsmSystemHashControlRegister_RHEA_msmSystemHashTable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemHashTable in AQ_MsmSystemHashControlRegister_RHEA */
#define bits_AQ_MsmSystemHashControlRegister_RHEA_msmSystemHashTable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemHashTable in AQ_MsmSystemHashControlRegister_RHEA */
#define word_AQ_MsmSystemHashControlRegister_RHEA_msmSystemHashTable u0.word_0

/*! \brief Base register address of structure AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_baseRegisterAddress 0x6018
/*! \brief MMD address of structure AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioClockDividerConfiguration in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioClockDividerConfiguration 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioClockDividerConfiguration in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioClockDividerConfiguration u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioClockDividerConfiguration in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioClockDividerConfiguration u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioClause_45Enable in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioClause_45Enable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioClause_45Enable in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioClause_45Enable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioClause_45Enable in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioClause_45Enable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioHoldTimeConfiguration in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioHoldTimeConfiguration 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioHoldTimeConfiguration in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioHoldTimeConfiguration u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioHoldTimeConfiguration in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioHoldTimeConfiguration u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioReadError in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioReadError 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioReadError in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioReadError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioReadError in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioReadError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioBusy_0 in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioBusy_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioBusy_0 in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioBusy_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioBusy_0 in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioBusy_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioBusy_1 in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioBusy_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioBusy_1 in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioBusy_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioBusy_1 in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioBusy_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioRead in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioRead 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioRead in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioRead u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioRead in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioRead u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioReadAddressPostIncrement in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioReadAddressPostIncrement 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioReadAddressPostIncrement in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioReadAddressPostIncrement u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioReadAddressPostIncrement in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioReadAddressPostIncrement u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioPortAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioPortAddress 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioPortAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioPortAddress u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioPortAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioPortAddress u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioDeviceAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioDeviceAddress 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioDeviceAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioDeviceAddress u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioDeviceAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioDeviceAddress u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioData in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioData 4
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioData in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioData u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioData in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioData u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemMdioRegisterAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioRegisterAddress 6
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemMdioRegisterAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define bits_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioRegisterAddress u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemMdioRegisterAddress in AQ_MsmSystemMdioControlRegister_RHEA */
#define word_AQ_MsmSystemMdioControlRegister_RHEA_msmSystemMdioRegisterAddress u6.word_6

/*! \brief Base register address of structure AQ_MsmSystemGeneralStatusRegister_RHEA */
#define AQ_MsmSystemGeneralStatusRegister_RHEA_baseRegisterAddress 0x6020
/*! \brief MMD address of structure AQ_MsmSystemGeneralStatusRegister_RHEA */
#define AQ_MsmSystemGeneralStatusRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxFifoEmpty in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemTxFifoEmpty 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxFifoEmpty in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define bits_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemTxFifoEmpty u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxFifoEmpty in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define word_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemTxFifoEmpty u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxLowPowerIdle in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxLowPowerIdle 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxLowPowerIdle in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define bits_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxLowPowerIdle u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxLowPowerIdle in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define word_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxLowPowerIdle u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTimestampAvailable in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemTimestampAvailable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTimestampAvailable in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define bits_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemTimestampAvailable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTimestampAvailable in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define word_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemTimestampAvailable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemPhyLossOfSignal in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemPhyLossOfSignal 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemPhyLossOfSignal in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define bits_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemPhyLossOfSignal u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemPhyLossOfSignal in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define word_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemPhyLossOfSignal u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxRemoteFault in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxRemoteFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxRemoteFault in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define bits_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxRemoteFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxRemoteFault in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define word_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxRemoteFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxLocalFault in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxLocalFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxLocalFault in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define bits_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxLocalFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxLocalFault in AQ_MsmSystemGeneralStatusRegister_RHEA */
#define word_AQ_MsmSystemGeneralStatusRegister_RHEA_msmSystemRxLocalFault u0.word_0

/*! \brief Base register address of structure AQ_MsmSystemTxIpgControlRegister_RHEA */
#define AQ_MsmSystemTxIpgControlRegister_RHEA_baseRegisterAddress 0x6022
/*! \brief MMD address of structure AQ_MsmSystemTxIpgControlRegister_RHEA */
#define AQ_MsmSystemTxIpgControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxIpgLength in AQ_MsmSystemTxIpgControlRegister_RHEA */
#define AQ_MsmSystemTxIpgControlRegister_RHEA_msmSystemTxIpgLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxIpgLength in AQ_MsmSystemTxIpgControlRegister_RHEA */
#define bits_AQ_MsmSystemTxIpgControlRegister_RHEA_msmSystemTxIpgLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxIpgLength in AQ_MsmSystemTxIpgControlRegister_RHEA */
#define word_AQ_MsmSystemTxIpgControlRegister_RHEA_msmSystemTxIpgLength u0.word_0

/*! \brief Base register address of structure AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_baseRegisterAddress 0x602A
/*! \brief MMD address of structure AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_0PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_0PauseQuanta 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_0PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_0PauseQuanta u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_0PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_0PauseQuanta u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_1PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_1PauseQuanta 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_1PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_1PauseQuanta u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_1PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_1PauseQuanta u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_2PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_2PauseQuanta 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_2PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_2PauseQuanta u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_2PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_2PauseQuanta u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_3PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_3PauseQuanta 3
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_3PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_3PauseQuanta u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_3PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_3PauseQuanta u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_4PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_4PauseQuanta 4
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_4PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_4PauseQuanta u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_4PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_4PauseQuanta u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_5PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_5PauseQuanta 5
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_5PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_5PauseQuanta u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_5PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_5PauseQuanta u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_6PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_6PauseQuanta 6
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_6PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_6PauseQuanta u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_6PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_6PauseQuanta u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_7PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_7PauseQuanta 7
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_7PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_7PauseQuanta u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_7PauseQuanta in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_7PauseQuanta u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_0PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_0PauseQuantaThreshold 8
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_0PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_0PauseQuantaThreshold u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_0PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_0PauseQuantaThreshold u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_1PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_1PauseQuantaThreshold 9
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_1PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_1PauseQuantaThreshold u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_1PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_1PauseQuantaThreshold u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_2PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_2PauseQuantaThreshold 10
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_2PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_2PauseQuantaThreshold u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_2PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_2PauseQuantaThreshold u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_3PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_3PauseQuantaThreshold 11
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_3PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_3PauseQuantaThreshold u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_3PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_3PauseQuantaThreshold u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_4PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_4PauseQuantaThreshold 12
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_4PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_4PauseQuantaThreshold u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_4PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_4PauseQuantaThreshold u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_5PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_5PauseQuantaThreshold 13
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_5PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_5PauseQuantaThreshold u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_5PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_5PauseQuantaThreshold u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_6PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_6PauseQuantaThreshold 14
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_6PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_6PauseQuantaThreshold u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_6PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_6PauseQuantaThreshold u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemClass_7PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_7PauseQuantaThreshold 15
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemClass_7PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define bits_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_7PauseQuantaThreshold u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemClass_7PauseQuantaThreshold in AQ_MsmSystemPauseControlRegister_RHEA */
#define word_AQ_MsmSystemPauseControlRegister_RHEA_msmSystemClass_7PauseQuantaThreshold u15.word_15

/*! \brief Base register address of structure AQ_MsmSystemPauseStatusRegister_RHEA */
#define AQ_MsmSystemPauseStatusRegister_RHEA_baseRegisterAddress 0x603A
/*! \brief MMD address of structure AQ_MsmSystemPauseStatusRegister_RHEA */
#define AQ_MsmSystemPauseStatusRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemPauseStatus in AQ_MsmSystemPauseStatusRegister_RHEA */
#define AQ_MsmSystemPauseStatusRegister_RHEA_msmSystemPauseStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemPauseStatus in AQ_MsmSystemPauseStatusRegister_RHEA */
#define bits_AQ_MsmSystemPauseStatusRegister_RHEA_msmSystemPauseStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemPauseStatus in AQ_MsmSystemPauseStatusRegister_RHEA */
#define word_AQ_MsmSystemPauseStatusRegister_RHEA_msmSystemPauseStatus u0.word_0

/*! \brief Base register address of structure AQ_MsmSystemTimeStampStatusRegister_RHEA */
#define AQ_MsmSystemTimeStampStatusRegister_RHEA_baseRegisterAddress 0x603E
/*! \brief MMD address of structure AQ_MsmSystemTimeStampStatusRegister_RHEA */
#define AQ_MsmSystemTimeStampStatusRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTimestampStatus_0 in AQ_MsmSystemTimeStampStatusRegister_RHEA */
#define AQ_MsmSystemTimeStampStatusRegister_RHEA_msmSystemTimestampStatus_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTimestampStatus_0 in AQ_MsmSystemTimeStampStatusRegister_RHEA */
#define bits_AQ_MsmSystemTimeStampStatusRegister_RHEA_msmSystemTimestampStatus_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTimestampStatus_0 in AQ_MsmSystemTimeStampStatusRegister_RHEA */
#define word_AQ_MsmSystemTimeStampStatusRegister_RHEA_msmSystemTimestampStatus_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTimestampStatus_1 in AQ_MsmSystemTimeStampStatusRegister_RHEA */
#define AQ_MsmSystemTimeStampStatusRegister_RHEA_msmSystemTimestampStatus_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTimestampStatus_1 in AQ_MsmSystemTimeStampStatusRegister_RHEA */
#define bits_AQ_MsmSystemTimeStampStatusRegister_RHEA_msmSystemTimestampStatus_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTimestampStatus_1 in AQ_MsmSystemTimeStampStatusRegister_RHEA */
#define word_AQ_MsmSystemTimeStampStatusRegister_RHEA_msmSystemTimestampStatus_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemTxGoodFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxGoodFramesCounterRegister_RHEA_baseRegisterAddress 0x6040
/*! \brief MMD address of structure AQ_MsmSystemTxGoodFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxGoodFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxGoodFramesCounter_0 in AQ_MsmSystemTxGoodFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxGoodFramesCounterRegister_RHEA_msmSystemTxGoodFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxGoodFramesCounter_0 in AQ_MsmSystemTxGoodFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxGoodFramesCounterRegister_RHEA_msmSystemTxGoodFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxGoodFramesCounter_0 in AQ_MsmSystemTxGoodFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxGoodFramesCounterRegister_RHEA_msmSystemTxGoodFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxGoodFramesCounter_1 in AQ_MsmSystemTxGoodFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxGoodFramesCounterRegister_RHEA_msmSystemTxGoodFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxGoodFramesCounter_1 in AQ_MsmSystemTxGoodFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxGoodFramesCounterRegister_RHEA_msmSystemTxGoodFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxGoodFramesCounter_1 in AQ_MsmSystemTxGoodFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxGoodFramesCounterRegister_RHEA_msmSystemTxGoodFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxGoodFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxGoodFramesCounterRegister_RHEA_baseRegisterAddress 0x6044
/*! \brief MMD address of structure AQ_MsmSystemRxGoodFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxGoodFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxGoodFramesCounter_0 in AQ_MsmSystemRxGoodFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxGoodFramesCounterRegister_RHEA_msmSystemRxGoodFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxGoodFramesCounter_0 in AQ_MsmSystemRxGoodFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxGoodFramesCounterRegister_RHEA_msmSystemRxGoodFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxGoodFramesCounter_0 in AQ_MsmSystemRxGoodFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxGoodFramesCounterRegister_RHEA_msmSystemRxGoodFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxGoodFramesCounter_1 in AQ_MsmSystemRxGoodFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxGoodFramesCounterRegister_RHEA_msmSystemRxGoodFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxGoodFramesCounter_1 in AQ_MsmSystemRxGoodFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxGoodFramesCounterRegister_RHEA_msmSystemRxGoodFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxGoodFramesCounter_1 in AQ_MsmSystemRxGoodFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxGoodFramesCounterRegister_RHEA_msmSystemRxGoodFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA_baseRegisterAddress 0x6048
/*! \brief MMD address of structure AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemFcsErrorCounter_0 in AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA_msmSystemFcsErrorCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemFcsErrorCounter_0 in AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA_msmSystemFcsErrorCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemFcsErrorCounter_0 in AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA_msmSystemFcsErrorCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemFcsErrorCounter_1 in AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA_msmSystemFcsErrorCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemFcsErrorCounter_1 in AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA_msmSystemFcsErrorCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemFcsErrorCounter_1 in AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxFcsErrorsCounterRegister_RHEA_msmSystemFcsErrorCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA_baseRegisterAddress 0x604C
/*! \brief MMD address of structure AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemAlignmentErrorCounter_0 in AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA_msmSystemAlignmentErrorCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemAlignmentErrorCounter_0 in AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA_msmSystemAlignmentErrorCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemAlignmentErrorCounter_0 in AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA_msmSystemAlignmentErrorCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemAlignmentErrorCounter_1 in AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA_msmSystemAlignmentErrorCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemAlignmentErrorCounter_1 in AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA_msmSystemAlignmentErrorCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemAlignmentErrorCounter_1 in AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxAlignmentErrorsCounterRegister_RHEA_msmSystemAlignmentErrorCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemTxPauseFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxPauseFramesCounterRegister_RHEA_baseRegisterAddress 0x6050
/*! \brief MMD address of structure AQ_MsmSystemTxPauseFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxPauseFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxPauseFramesCounter_0 in AQ_MsmSystemTxPauseFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxPauseFramesCounterRegister_RHEA_msmSystemTxPauseFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxPauseFramesCounter_0 in AQ_MsmSystemTxPauseFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxPauseFramesCounterRegister_RHEA_msmSystemTxPauseFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxPauseFramesCounter_0 in AQ_MsmSystemTxPauseFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxPauseFramesCounterRegister_RHEA_msmSystemTxPauseFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxPauseFramesCounter_1 in AQ_MsmSystemTxPauseFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxPauseFramesCounterRegister_RHEA_msmSystemTxPauseFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxPauseFramesCounter_1 in AQ_MsmSystemTxPauseFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxPauseFramesCounterRegister_RHEA_msmSystemTxPauseFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxPauseFramesCounter_1 in AQ_MsmSystemTxPauseFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxPauseFramesCounterRegister_RHEA_msmSystemTxPauseFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxPauseFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxPauseFramesCounterRegister_RHEA_baseRegisterAddress 0x6054
/*! \brief MMD address of structure AQ_MsmSystemRxPauseFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxPauseFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxPauseFramesCounter_0 in AQ_MsmSystemRxPauseFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxPauseFramesCounterRegister_RHEA_msmSystemRxPauseFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxPauseFramesCounter_0 in AQ_MsmSystemRxPauseFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxPauseFramesCounterRegister_RHEA_msmSystemRxPauseFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxPauseFramesCounter_0 in AQ_MsmSystemRxPauseFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxPauseFramesCounterRegister_RHEA_msmSystemRxPauseFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxPauseFramesCounter_1 in AQ_MsmSystemRxPauseFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxPauseFramesCounterRegister_RHEA_msmSystemRxPauseFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxPauseFramesCounter_1 in AQ_MsmSystemRxPauseFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxPauseFramesCounterRegister_RHEA_msmSystemRxPauseFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxPauseFramesCounter_1 in AQ_MsmSystemRxPauseFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxPauseFramesCounterRegister_RHEA_msmSystemRxPauseFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA_baseRegisterAddress 0x6058
/*! \brief MMD address of structure AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxTooLongErrorsCounter_0 in AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA_msmSystemRxTooLongErrorsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxTooLongErrorsCounter_0 in AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA_msmSystemRxTooLongErrorsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxTooLongErrorsCounter_0 in AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA_msmSystemRxTooLongErrorsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxTooLongErrorsCounter_1 in AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA_msmSystemRxTooLongErrorsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxTooLongErrorsCounter_1 in AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA_msmSystemRxTooLongErrorsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxTooLongErrorsCounter_1 in AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxTooLongErrorsCounterRegister_RHEA_msmSystemRxTooLongErrorsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA_baseRegisterAddress 0x605C
/*! \brief MMD address of structure AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxInRangeLengthErrorsCounter_0 in AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA_msmSystemRxInRangeLengthErrorsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxInRangeLengthErrorsCounter_0 in AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA_msmSystemRxInRangeLengthErrorsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxInRangeLengthErrorsCounter_0 in AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA_msmSystemRxInRangeLengthErrorsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxInRangeLengthErrorsCounter_1 in AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA_msmSystemRxInRangeLengthErrorsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxInRangeLengthErrorsCounter_1 in AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA_msmSystemRxInRangeLengthErrorsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxInRangeLengthErrorsCounter_1 in AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxInRangeLengthErrorsCounterRegister_RHEA_msmSystemRxInRangeLengthErrorsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemTxVlanFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxVlanFramesCounterRegister_RHEA_baseRegisterAddress 0x6060
/*! \brief MMD address of structure AQ_MsmSystemTxVlanFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxVlanFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxVlanFramesCounter_0 in AQ_MsmSystemTxVlanFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxVlanFramesCounterRegister_RHEA_msmSystemTxVlanFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxVlanFramesCounter_0 in AQ_MsmSystemTxVlanFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxVlanFramesCounterRegister_RHEA_msmSystemTxVlanFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxVlanFramesCounter_0 in AQ_MsmSystemTxVlanFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxVlanFramesCounterRegister_RHEA_msmSystemTxVlanFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxVlanFramesCounter_1 in AQ_MsmSystemTxVlanFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxVlanFramesCounterRegister_RHEA_msmSystemTxVlanFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxVlanFramesCounter_1 in AQ_MsmSystemTxVlanFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxVlanFramesCounterRegister_RHEA_msmSystemTxVlanFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxVlanFramesCounter_1 in AQ_MsmSystemTxVlanFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxVlanFramesCounterRegister_RHEA_msmSystemTxVlanFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxVlanFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxVlanFramesCounterRegister_RHEA_baseRegisterAddress 0x6064
/*! \brief MMD address of structure AQ_MsmSystemRxVlanFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxVlanFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxVlanFramesCounter_0 in AQ_MsmSystemRxVlanFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxVlanFramesCounterRegister_RHEA_msmSystemRxVlanFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxVlanFramesCounter_0 in AQ_MsmSystemRxVlanFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxVlanFramesCounterRegister_RHEA_msmSystemRxVlanFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxVlanFramesCounter_0 in AQ_MsmSystemRxVlanFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxVlanFramesCounterRegister_RHEA_msmSystemRxVlanFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxVlanFramesCounter_1 in AQ_MsmSystemRxVlanFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxVlanFramesCounterRegister_RHEA_msmSystemRxVlanFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxVlanFramesCounter_1 in AQ_MsmSystemRxVlanFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxVlanFramesCounterRegister_RHEA_msmSystemRxVlanFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxVlanFramesCounter_1 in AQ_MsmSystemRxVlanFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxVlanFramesCounterRegister_RHEA_msmSystemRxVlanFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemTxOctetsCounterRegister_RHEA_baseRegisterAddress 0x6068
/*! \brief MMD address of structure AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemTxOctetsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxOctetsCounter_0 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxOctetsCounter_0 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxOctetsCounter_0 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define word_AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxOctetsCounter_1 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxOctetsCounter_1 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxOctetsCounter_1 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define word_AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxOctetsCounter_2 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxOctetsCounter_2 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxOctetsCounter_2 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define word_AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxOctetsCounter_3 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxOctetsCounter_3 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxOctetsCounter_3 in AQ_MsmSystemTxOctetsCounterRegister_RHEA */
#define word_AQ_MsmSystemTxOctetsCounterRegister_RHEA_msmSystemTxOctetsCounter_3 u3.word_3

/*! \brief Base register address of structure AQ_MsmSystemRxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemRxOctetsCounterRegister_RHEA_baseRegisterAddress 0x606C
/*! \brief MMD address of structure AQ_MsmSystemRxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemRxOctetsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxOctetsCounter_0 in AQ_MsmSystemRxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemRxOctetsCounterRegister_RHEA_msmSystemRxOctetsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxOctetsCounter_0 in AQ_MsmSystemRxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxOctetsCounterRegister_RHEA_msmSystemRxOctetsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxOctetsCounter_0 in AQ_MsmSystemRxOctetsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxOctetsCounterRegister_RHEA_msmSystemRxOctetsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxOctetsCounter_1 in AQ_MsmSystemRxOctetsCounterRegister_RHEA */
#define AQ_MsmSystemRxOctetsCounterRegister_RHEA_msmSystemRxOctetsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxOctetsCounter_1 in AQ_MsmSystemRxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxOctetsCounterRegister_RHEA_msmSystemRxOctetsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxOctetsCounter_1 in AQ_MsmSystemRxOctetsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxOctetsCounterRegister_RHEA_msmSystemRxOctetsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA_baseRegisterAddress 0x6070
/*! \brief MMD address of structure AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxUnicastFramesCounter_0 in AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA_msmSystemRxUnicastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxUnicastFramesCounter_0 in AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA_msmSystemRxUnicastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxUnicastFramesCounter_0 in AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA_msmSystemRxUnicastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxUnicastFramesCounter_1 in AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA_msmSystemRxUnicastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxUnicastFramesCounter_1 in AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA_msmSystemRxUnicastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxUnicastFramesCounter_1 in AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxUnicastFramesCounterRegister_RHEA_msmSystemRxUnicastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA_baseRegisterAddress 0x6074
/*! \brief MMD address of structure AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxMulticastFramesCounter_0 in AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA_msmSystemRxMulticastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxMulticastFramesCounter_0 in AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA_msmSystemRxMulticastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxMulticastFramesCounter_0 in AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA_msmSystemRxMulticastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxMulticastFramesCounter_1 in AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA_msmSystemRxMulticastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxMulticastFramesCounter_1 in AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA_msmSystemRxMulticastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxMulticastFramesCounter_1 in AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxMulticastFramesCounterRegister_RHEA_msmSystemRxMulticastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA_baseRegisterAddress 0x6078
/*! \brief MMD address of structure AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxBroadcastFramesCounter_0 in AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA_msmSystemRxBroadcastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxBroadcastFramesCounter_0 in AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA_msmSystemRxBroadcastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxBroadcastFramesCounter_0 in AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA_msmSystemRxBroadcastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxBroadcastFramesCounter_1 in AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA_msmSystemRxBroadcastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxBroadcastFramesCounter_1 in AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA_msmSystemRxBroadcastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxBroadcastFramesCounter_1 in AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemRxBroadcastFramesCounterRegister_RHEA_msmSystemRxBroadcastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemTxErrorsCounterRegister_RHEA */
#define AQ_MsmSystemTxErrorsCounterRegister_RHEA_baseRegisterAddress 0x607C
/*! \brief MMD address of structure AQ_MsmSystemTxErrorsCounterRegister_RHEA */
#define AQ_MsmSystemTxErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxErrorsCounter_0 in AQ_MsmSystemTxErrorsCounterRegister_RHEA */
#define AQ_MsmSystemTxErrorsCounterRegister_RHEA_msmSystemTxErrorsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxErrorsCounter_0 in AQ_MsmSystemTxErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxErrorsCounterRegister_RHEA_msmSystemTxErrorsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxErrorsCounter_0 in AQ_MsmSystemTxErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemTxErrorsCounterRegister_RHEA_msmSystemTxErrorsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxErrorsCounter_1 in AQ_MsmSystemTxErrorsCounterRegister_RHEA */
#define AQ_MsmSystemTxErrorsCounterRegister_RHEA_msmSystemTxErrorsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxErrorsCounter_1 in AQ_MsmSystemTxErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxErrorsCounterRegister_RHEA_msmSystemTxErrorsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxErrorsCounter_1 in AQ_MsmSystemTxErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemTxErrorsCounterRegister_RHEA_msmSystemTxErrorsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA_baseRegisterAddress 0x6084
/*! \brief MMD address of structure AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxUnicastFramesCounter_0 in AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA_msmSystemTxUnicastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxUnicastFramesCounter_0 in AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA_msmSystemTxUnicastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxUnicastFramesCounter_0 in AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA_msmSystemTxUnicastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxUnicastFramesCounter_1 in AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA_msmSystemTxUnicastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxUnicastFramesCounter_1 in AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA_msmSystemTxUnicastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxUnicastFramesCounter_1 in AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxUnicastFramesCounterRegister_RHEA_msmSystemTxUnicastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA_baseRegisterAddress 0x6088
/*! \brief MMD address of structure AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxMulticastFramesCounter_0 in AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA_msmSystemTxMulticastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxMulticastFramesCounter_0 in AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA_msmSystemTxMulticastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxMulticastFramesCounter_0 in AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA_msmSystemTxMulticastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxMulticastFramesCounter_1 in AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA_msmSystemTxMulticastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxMulticastFramesCounter_1 in AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA_msmSystemTxMulticastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxMulticastFramesCounter_1 in AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxMulticastFramesCounterRegister_RHEA_msmSystemTxMulticastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA_baseRegisterAddress 0x608C
/*! \brief MMD address of structure AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxBroadcastFramesCounter_0 in AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA_msmSystemTxBroadcastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxBroadcastFramesCounter_0 in AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA_msmSystemTxBroadcastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxBroadcastFramesCounter_0 in AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA_msmSystemTxBroadcastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemTxBroadcastFramesCounter_1 in AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA_msmSystemTxBroadcastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemTxBroadcastFramesCounter_1 in AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA */
#define bits_AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA_msmSystemTxBroadcastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemTxBroadcastFramesCounter_1 in AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA */
#define word_AQ_MsmSystemTxBroadcastFramesCounterRegister_RHEA_msmSystemTxBroadcastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemRxErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxErrorsCounterRegister_RHEA_baseRegisterAddress 0x60C8
/*! \brief MMD address of structure AQ_MsmSystemRxErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxErrorsCounter_0 in AQ_MsmSystemRxErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxErrorsCounterRegister_RHEA_msmSystemRxErrorsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxErrorsCounter_0 in AQ_MsmSystemRxErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxErrorsCounterRegister_RHEA_msmSystemRxErrorsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxErrorsCounter_0 in AQ_MsmSystemRxErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxErrorsCounterRegister_RHEA_msmSystemRxErrorsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemRxErrorsCounter_1 in AQ_MsmSystemRxErrorsCounterRegister_RHEA */
#define AQ_MsmSystemRxErrorsCounterRegister_RHEA_msmSystemRxErrorsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemRxErrorsCounter_1 in AQ_MsmSystemRxErrorsCounterRegister_RHEA */
#define bits_AQ_MsmSystemRxErrorsCounterRegister_RHEA_msmSystemRxErrorsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemRxErrorsCounter_1 in AQ_MsmSystemRxErrorsCounterRegister_RHEA */
#define word_AQ_MsmSystemRxErrorsCounterRegister_RHEA_msmSystemRxErrorsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_baseRegisterAddress 0x6180
/*! \brief MMD address of structure AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiReset in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiReset in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiReset in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiLoopback in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiLoopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiLoopback in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiLoopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiLoopback in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiLoopback u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiSpeedSelection_2 in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiSpeedSelection_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiSpeedSelection_2 in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiSpeedSelection_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiSpeedSelection_2 in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiSpeedSelection_2 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiAutonegotationEnable in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiAutonegotationEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiAutonegotationEnable in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiAutonegotationEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiAutonegotationEnable in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiAutonegotationEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiPowerDown in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiPowerDown 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiPowerDown in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiPowerDown u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiPowerDown in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiPowerDown u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiIsolate in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiIsolate 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiIsolate in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiIsolate u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiIsolate in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiIsolate u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiRestartAutonegotiation in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiRestartAutonegotiation 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiRestartAutonegotiation in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiRestartAutonegotiation u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiRestartAutonegotiation in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiRestartAutonegotiation u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiDuplexMode in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiDuplexMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiDuplexMode in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiDuplexMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiDuplexMode in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiDuplexMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiCollisionTest in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiCollisionTest 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiCollisionTest in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiCollisionTest u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiCollisionTest in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiCollisionTest u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiSpeedSelection_1 in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiSpeedSelection_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiSpeedSelection_1 in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiSpeedSelection_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiSpeedSelection_1 in AQ_MsmSystemSgmiiControlRegister_RHEA */
#define word_AQ_MsmSystemSgmiiControlRegister_RHEA_msmSystemSgmiiSpeedSelection_1 u0.word_0

/*! \brief Base register address of structure AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define AQ_MsmSystemSgmiiIfModeRegister_RHEA_baseRegisterAddress 0x61A8
/*! \brief MMD address of structure AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define AQ_MsmSystemSgmiiIfModeRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiPcsEnable in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiPcsEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiPcsEnable in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiPcsEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiPcsEnable in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiPcsEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiHalfDuplex in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiHalfDuplex 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiHalfDuplex in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiHalfDuplex u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiHalfDuplex in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiHalfDuplex u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiSpeed in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiSpeed 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiSpeed in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiSpeed u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiSpeed in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiSpeed u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemUseSgmiiAutonegotiation in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemUseSgmiiAutonegotiation 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemUseSgmiiAutonegotiation in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemUseSgmiiAutonegotiation u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemUseSgmiiAutonegotiation in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemUseSgmiiAutonegotiation u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmSystemSgmiiEnable in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmSystemSgmiiEnable in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmSystemSgmiiEnable in AQ_MsmSystemSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmSystemSgmiiIfModeRegister_RHEA_msmSystemSgmiiEnable u0.word_0

/*! \brief Base register address of structure AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_baseRegisterAddress 0x800E
/*! \brief MMD address of structure AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressExtendedPacketNumbering in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressExtendedPacketNumbering 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressExtendedPacketNumbering in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressExtendedPacketNumbering u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressExtendedPacketNumbering in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressExtendedPacketNumbering u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngress_128_bitKeyOnly in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngress_128_bitKeyOnly 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngress_128_bitKeyOnly in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngress_128_bitKeyOnly u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngress_128_bitKeyOnly in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngress_128_bitKeyOnly u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressIcvLsb_8BytesEnable in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressIcvLsb_8BytesEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressIcvLsb_8BytesEnable in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressIcvLsb_8BytesEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressIcvLsb_8BytesEnable in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressIcvLsb_8BytesEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressGlobalValidateFrames in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressGlobalValidateFrames 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressGlobalValidateFrames in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressGlobalValidateFrames u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressGlobalValidateFrames in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressGlobalValidateFrames u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressRemoveSectag in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressRemoveSectag 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressRemoveSectag in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressRemoveSectag u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressRemoveSectag in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressRemoveSectag u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressHighPriority in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressHighPriority 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressHighPriority in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressHighPriority u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressHighPriority in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressHighPriority u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressClearCount in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressClearCount 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressClearCount in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressClearCount u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressClearCount in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressClearCount u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressClearGlobalTime in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressClearGlobalTime 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressClearGlobalTime in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressClearGlobalTime u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressClearGlobalTime in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressClearGlobalTime u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressCheckIcv in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressCheckIcv 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressCheckIcv in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressCheckIcv u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressCheckIcv in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressCheckIcv u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressDropIgprcMiss in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressDropIgprcMiss 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressDropIgprcMiss in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressDropIgprcMiss u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressDropIgprcMiss in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressDropIgprcMiss u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressDropKayPacket in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressDropKayPacket 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressDropKayPacket in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressDropKayPacket u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressDropKayPacket in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressDropKayPacket u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressMaskShortLengthError in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressMaskShortLengthError 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressMaskShortLengthError in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressMaskShortLengthError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressMaskShortLengthError in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressMaskShortLengthError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressCreateSci in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressCreateSci 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressCreateSci in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressCreateSci u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressCreateSci in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressCreateSci u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressOperationPointToPoint in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressOperationPointToPoint 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressOperationPointToPoint in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressOperationPointToPoint u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressOperationPointToPoint in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressOperationPointToPoint u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressSoftReset in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressSoftReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressSoftReset in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressSoftReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressSoftReset in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressSoftReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressExtendedPacketNumberingFix in AQ_MssIngressControlRegister_RHEA */
#define AQ_MssIngressControlRegister_RHEA_mssIngressExtendedPacketNumberingFix 1
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressExtendedPacketNumberingFix in AQ_MssIngressControlRegister_RHEA */
#define bits_AQ_MssIngressControlRegister_RHEA_mssIngressExtendedPacketNumberingFix u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressExtendedPacketNumberingFix in AQ_MssIngressControlRegister_RHEA */
#define word_AQ_MssIngressControlRegister_RHEA_mssIngressExtendedPacketNumberingFix u1.word_1

/*! \brief Base register address of structure AQ_MssIngressLutAddressControlRegister_RHEA */
#define AQ_MssIngressLutAddressControlRegister_RHEA_baseRegisterAddress 0x8080
/*! \brief MMD address of structure AQ_MssIngressLutAddressControlRegister_RHEA */
#define AQ_MssIngressLutAddressControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutSelect in AQ_MssIngressLutAddressControlRegister_RHEA */
#define AQ_MssIngressLutAddressControlRegister_RHEA_mssIngressLutSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutSelect in AQ_MssIngressLutAddressControlRegister_RHEA */
#define bits_AQ_MssIngressLutAddressControlRegister_RHEA_mssIngressLutSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutSelect in AQ_MssIngressLutAddressControlRegister_RHEA */
#define word_AQ_MssIngressLutAddressControlRegister_RHEA_mssIngressLutSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutAddress in AQ_MssIngressLutAddressControlRegister_RHEA */
#define AQ_MssIngressLutAddressControlRegister_RHEA_mssIngressLutAddress 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutAddress in AQ_MssIngressLutAddressControlRegister_RHEA */
#define bits_AQ_MssIngressLutAddressControlRegister_RHEA_mssIngressLutAddress u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutAddress in AQ_MssIngressLutAddressControlRegister_RHEA */
#define word_AQ_MssIngressLutAddressControlRegister_RHEA_mssIngressLutAddress u0.word_0

/*! \brief Base register address of structure AQ_MssIngressLutControlRegister_RHEA */
#define AQ_MssIngressLutControlRegister_RHEA_baseRegisterAddress 0x8081
/*! \brief MMD address of structure AQ_MssIngressLutControlRegister_RHEA */
#define AQ_MssIngressLutControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutWrite in AQ_MssIngressLutControlRegister_RHEA */
#define AQ_MssIngressLutControlRegister_RHEA_mssIngressLutWrite 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutWrite in AQ_MssIngressLutControlRegister_RHEA */
#define bits_AQ_MssIngressLutControlRegister_RHEA_mssIngressLutWrite u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutWrite in AQ_MssIngressLutControlRegister_RHEA */
#define word_AQ_MssIngressLutControlRegister_RHEA_mssIngressLutWrite u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutRead in AQ_MssIngressLutControlRegister_RHEA */
#define AQ_MssIngressLutControlRegister_RHEA_mssIngressLutRead 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutRead in AQ_MssIngressLutControlRegister_RHEA */
#define bits_AQ_MssIngressLutControlRegister_RHEA_mssIngressLutRead u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutRead in AQ_MssIngressLutControlRegister_RHEA */
#define word_AQ_MssIngressLutControlRegister_RHEA_mssIngressLutRead u0.word_0

/*! \brief Base register address of structure AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_baseRegisterAddress 0x80A0
/*! \brief MMD address of structure AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_0 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_0 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_0 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_1 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_1 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_1 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_2 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_2 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_2 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_3 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_3 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_3 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_3 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_4 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_4 4
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_4 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_4 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_4 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_4 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_5 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_5 5
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_5 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_5 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_5 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_5 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_6 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_6 6
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_6 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_6 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_6 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_6 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_7 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_7 7
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_7 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_7 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_7 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_7 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_8 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_8 8
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_8 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_8 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_8 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_8 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_9 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_9 9
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_9 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_9 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_9 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_9 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_10 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_10 10
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_10 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_10 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_10 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_10 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_11 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_11 11
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_11 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_11 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_11 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_11 u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_12 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_12 12
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_12 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_12 u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_12 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_12 u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_13 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_13 13
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_13 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_13 u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_13 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_13 u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_14 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_14 14
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_14 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_14 u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_14 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_14 u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_15 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_15 15
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_15 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_15 u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_15 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_15 u15.word_15
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_16 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_16 16
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_16 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_16 u16.bits_16
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_16 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_16 u16.word_16
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_17 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_17 17
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_17 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_17 u17.bits_17
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_17 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_17 u17.word_17
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_18 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_18 18
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_18 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_18 u18.bits_18
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_18 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_18 u18.word_18
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_19 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_19 19
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_19 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_19 u19.bits_19
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_19 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_19 u19.word_19
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_20 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_20 20
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_20 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_20 u20.bits_20
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_20 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_20 u20.word_20
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_21 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_21 21
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_21 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_21 u21.bits_21
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_21 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_21 u21.word_21
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_22 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_22 22
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_22 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_22 u22.bits_22
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_22 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_22 u22.word_22
/*! \brief Preprocessor variable to relate field to word number in structure mssIngressLutData_23 in AQ_MssIngressLutDataControlRegister_RHEA */
#define AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_23 23
/*! \brief Preprocessor variable to relate field to bit position in structure mssIngressLutData_23 in AQ_MssIngressLutDataControlRegister_RHEA */
#define bits_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_23 u23.bits_23
/*! \brief Preprocessor variable to relate field to word position in structure mssIngressLutData_23 in AQ_MssIngressLutDataControlRegister_RHEA */
#define word_AQ_MssIngressLutDataControlRegister_RHEA_mssIngressLutData_23 u23.word_23

/*! \brief Base register address of structure AQ_MsmLineRevisionRegister_RHEA */
#define AQ_MsmLineRevisionRegister_RHEA_baseRegisterAddress 0x9000
/*! \brief MMD address of structure AQ_MsmLineRevisionRegister_RHEA */
#define AQ_MsmLineRevisionRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineCoreRevision in AQ_MsmLineRevisionRegister_RHEA */
#define AQ_MsmLineRevisionRegister_RHEA_msmLineCoreRevision 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineCoreRevision in AQ_MsmLineRevisionRegister_RHEA */
#define bits_AQ_MsmLineRevisionRegister_RHEA_msmLineCoreRevision u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineCoreRevision in AQ_MsmLineRevisionRegister_RHEA */
#define word_AQ_MsmLineRevisionRegister_RHEA_msmLineCoreRevision u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineCoreVersion in AQ_MsmLineRevisionRegister_RHEA */
#define AQ_MsmLineRevisionRegister_RHEA_msmLineCoreVersion 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineCoreVersion in AQ_MsmLineRevisionRegister_RHEA */
#define bits_AQ_MsmLineRevisionRegister_RHEA_msmLineCoreVersion u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineCoreVersion in AQ_MsmLineRevisionRegister_RHEA */
#define word_AQ_MsmLineRevisionRegister_RHEA_msmLineCoreVersion u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineCustomerRevision in AQ_MsmLineRevisionRegister_RHEA */
#define AQ_MsmLineRevisionRegister_RHEA_msmLineCustomerRevision 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineCustomerRevision in AQ_MsmLineRevisionRegister_RHEA */
#define bits_AQ_MsmLineRevisionRegister_RHEA_msmLineCustomerRevision u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineCustomerRevision in AQ_MsmLineRevisionRegister_RHEA */
#define word_AQ_MsmLineRevisionRegister_RHEA_msmLineCustomerRevision u1.word_1

/*! \brief Base register address of structure AQ_MsmLineScratchpadRegister_RHEA */
#define AQ_MsmLineScratchpadRegister_RHEA_baseRegisterAddress 0x9002
/*! \brief MMD address of structure AQ_MsmLineScratchpadRegister_RHEA */
#define AQ_MsmLineScratchpadRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineScratch_0 in AQ_MsmLineScratchpadRegister_RHEA */
#define AQ_MsmLineScratchpadRegister_RHEA_msmLineScratch_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineScratch_0 in AQ_MsmLineScratchpadRegister_RHEA */
#define bits_AQ_MsmLineScratchpadRegister_RHEA_msmLineScratch_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineScratch_0 in AQ_MsmLineScratchpadRegister_RHEA */
#define word_AQ_MsmLineScratchpadRegister_RHEA_msmLineScratch_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineScratch_1 in AQ_MsmLineScratchpadRegister_RHEA */
#define AQ_MsmLineScratchpadRegister_RHEA_msmLineScratch_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineScratch_1 in AQ_MsmLineScratchpadRegister_RHEA */
#define bits_AQ_MsmLineScratchpadRegister_RHEA_msmLineScratch_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineScratch_1 in AQ_MsmLineScratchpadRegister_RHEA */
#define word_AQ_MsmLineScratchpadRegister_RHEA_msmLineScratch_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_baseRegisterAddress 0x9004
/*! \brief MMD address of structure AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLinePhyTxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLinePhyTxEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLinePhyTxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePhyTxEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLinePhyTxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePhyTxEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxErrorDiscard in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineRxErrorDiscard 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxErrorDiscard in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineRxErrorDiscard u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxErrorDiscard in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineRxErrorDiscard u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineControlFrameEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineControlFrameEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineControlFrameEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineControlFrameEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineControlFrameEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineControlFrameEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSoftReset in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineSoftReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSoftReset in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineSoftReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSoftReset in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineSoftReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxPadEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxPadEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxPadEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxPadEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxPadEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxPadEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxCrcAppend in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxCrcAppend 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxCrcAppend in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxCrcAppend u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxCrcAppend in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxCrcAppend u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxAddressInsertEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxAddressInsertEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxAddressInsertEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxAddressInsertEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxAddressInsertEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxAddressInsertEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLinePauseIgnore in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLinePauseIgnore 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLinePauseIgnore in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePauseIgnore u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLinePauseIgnore in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePauseIgnore u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLinePauseForward in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLinePauseForward 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLinePauseForward in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePauseForward u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLinePauseForward in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePauseForward u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineCrcForward in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineCrcForward 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineCrcForward in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineCrcForward u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineCrcForward in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineCrcForward u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLinePadEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLinePadEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLinePadEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePadEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLinePadEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePadEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLinePromiscuousMode in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLinePromiscuousMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLinePromiscuousMode in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePromiscuousMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLinePromiscuousMode in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePromiscuousMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineWanMode in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineWanMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineWanMode in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineWanMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineWanMode in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineWanMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineRxEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineRxEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineRxEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineStatisticCounterReset in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineStatisticCounterReset 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineStatisticCounterReset in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineStatisticCounterReset u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineStatisticCounterReset in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineStatisticCounterReset u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineCrcCorruptionDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineCrcCorruptionDisable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineCrcCorruptionDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineCrcCorruptionDisable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineCrcCorruptionDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineCrcCorruptionDisable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxLowPowerIdleEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxLowPowerIdleEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxLowPowerIdleEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxLowPowerIdleEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxLowPowerIdleEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineTxLowPowerIdleEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSfdCheckDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineSfdCheckDisable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSfdCheckDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineSfdCheckDisable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSfdCheckDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineSfdCheckDisable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLinePriorityFlowControlEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLinePriorityFlowControlEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLinePriorityFlowControlEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePriorityFlowControlEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLinePriorityFlowControlEnable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLinePriorityFlowControlEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineIdleColumnCountExtend in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineIdleColumnCountExtend 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineIdleColumnCountExtend in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineIdleColumnCountExtend u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineIdleColumnCountExtend in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineIdleColumnCountExtend u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineLengthCheckDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineLengthCheckDisable 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineLengthCheckDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineLengthCheckDisable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineLengthCheckDisable in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineLengthCheckDisable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineForceSendIdle in AQ_MsmLineGeneralControlRegister_RHEA */
#define AQ_MsmLineGeneralControlRegister_RHEA_msmLineForceSendIdle 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineForceSendIdle in AQ_MsmLineGeneralControlRegister_RHEA */
#define bits_AQ_MsmLineGeneralControlRegister_RHEA_msmLineForceSendIdle u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineForceSendIdle in AQ_MsmLineGeneralControlRegister_RHEA */
#define word_AQ_MsmLineGeneralControlRegister_RHEA_msmLineForceSendIdle u1.word_1

/*! \brief Base register address of structure AQ_MsmLineAddressRegister_RHEA */
#define AQ_MsmLineAddressRegister_RHEA_baseRegisterAddress 0x9006
/*! \brief MMD address of structure AQ_MsmLineAddressRegister_RHEA */
#define AQ_MsmLineAddressRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineAddress_0 in AQ_MsmLineAddressRegister_RHEA */
#define AQ_MsmLineAddressRegister_RHEA_msmLineAddress_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineAddress_0 in AQ_MsmLineAddressRegister_RHEA */
#define bits_AQ_MsmLineAddressRegister_RHEA_msmLineAddress_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineAddress_0 in AQ_MsmLineAddressRegister_RHEA */
#define word_AQ_MsmLineAddressRegister_RHEA_msmLineAddress_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineAddress_1 in AQ_MsmLineAddressRegister_RHEA */
#define AQ_MsmLineAddressRegister_RHEA_msmLineAddress_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineAddress_1 in AQ_MsmLineAddressRegister_RHEA */
#define bits_AQ_MsmLineAddressRegister_RHEA_msmLineAddress_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineAddress_1 in AQ_MsmLineAddressRegister_RHEA */
#define word_AQ_MsmLineAddressRegister_RHEA_msmLineAddress_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineAddress_2 in AQ_MsmLineAddressRegister_RHEA */
#define AQ_MsmLineAddressRegister_RHEA_msmLineAddress_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineAddress_2 in AQ_MsmLineAddressRegister_RHEA */
#define bits_AQ_MsmLineAddressRegister_RHEA_msmLineAddress_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmLineAddress_2 in AQ_MsmLineAddressRegister_RHEA */
#define word_AQ_MsmLineAddressRegister_RHEA_msmLineAddress_2 u2.word_2

/*! \brief Base register address of structure AQ_MsmLineFrameControlRegister_RHEA */
#define AQ_MsmLineFrameControlRegister_RHEA_baseRegisterAddress 0x900A
/*! \brief MMD address of structure AQ_MsmLineFrameControlRegister_RHEA */
#define AQ_MsmLineFrameControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMaximumFrameLength in AQ_MsmLineFrameControlRegister_RHEA */
#define AQ_MsmLineFrameControlRegister_RHEA_msmLineMaximumFrameLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMaximumFrameLength in AQ_MsmLineFrameControlRegister_RHEA */
#define bits_AQ_MsmLineFrameControlRegister_RHEA_msmLineMaximumFrameLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMaximumFrameLength in AQ_MsmLineFrameControlRegister_RHEA */
#define word_AQ_MsmLineFrameControlRegister_RHEA_msmLineMaximumFrameLength u0.word_0

/*! \brief Base register address of structure AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_baseRegisterAddress 0x900E
/*! \brief MMD address of structure AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxFifoFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoFullThreshold 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxFifoFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define bits_AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoFullThreshold u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxFifoFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define word_AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoFullThreshold u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxFifoEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoEmptyThreshold 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxFifoEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define bits_AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoEmptyThreshold u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxFifoEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define word_AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoEmptyThreshold u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxFifoFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoFullThreshold 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxFifoFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define bits_AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoFullThreshold u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxFifoFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define word_AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoFullThreshold u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxFifoEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoEmptyThreshold 3
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxFifoEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define bits_AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoEmptyThreshold u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxFifoEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define word_AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoEmptyThreshold u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxFifoAlmostFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoAlmostFullThreshold 4
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxFifoAlmostFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define bits_AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoAlmostFullThreshold u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxFifoAlmostFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define word_AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoAlmostFullThreshold u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxFifoAlmostEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoAlmostEmptyThreshold 5
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxFifoAlmostEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define bits_AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoAlmostEmptyThreshold u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxFifoAlmostEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define word_AQ_MsmLineFifoControlRegister_RHEA_msmLineRxFifoAlmostEmptyThreshold u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxFifoAlmostFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoAlmostFullThreshold 6
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxFifoAlmostFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define bits_AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoAlmostFullThreshold u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxFifoAlmostFullThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define word_AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoAlmostFullThreshold u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxFifoAlmostEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoAlmostEmptyThreshold 7
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxFifoAlmostEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define bits_AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoAlmostEmptyThreshold u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxFifoAlmostEmptyThreshold in AQ_MsmLineFifoControlRegister_RHEA */
#define word_AQ_MsmLineFifoControlRegister_RHEA_msmLineTxFifoAlmostEmptyThreshold u7.word_7

/*! \brief Base register address of structure AQ_MsmLineHashControlRegister_RHEA */
#define AQ_MsmLineHashControlRegister_RHEA_baseRegisterAddress 0x9016
/*! \brief MMD address of structure AQ_MsmLineHashControlRegister_RHEA */
#define AQ_MsmLineHashControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMulticastEnable in AQ_MsmLineHashControlRegister_RHEA */
#define AQ_MsmLineHashControlRegister_RHEA_msmLineMulticastEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMulticastEnable in AQ_MsmLineHashControlRegister_RHEA */
#define bits_AQ_MsmLineHashControlRegister_RHEA_msmLineMulticastEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMulticastEnable in AQ_MsmLineHashControlRegister_RHEA */
#define word_AQ_MsmLineHashControlRegister_RHEA_msmLineMulticastEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineHashTable in AQ_MsmLineHashControlRegister_RHEA */
#define AQ_MsmLineHashControlRegister_RHEA_msmLineHashTable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineHashTable in AQ_MsmLineHashControlRegister_RHEA */
#define bits_AQ_MsmLineHashControlRegister_RHEA_msmLineHashTable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineHashTable in AQ_MsmLineHashControlRegister_RHEA */
#define word_AQ_MsmLineHashControlRegister_RHEA_msmLineHashTable u0.word_0

/*! \brief Base register address of structure AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_baseRegisterAddress 0x9018
/*! \brief MMD address of structure AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioClockDividerConfiguration in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioClockDividerConfiguration 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioClockDividerConfiguration in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioClockDividerConfiguration u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioClockDividerConfiguration in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioClockDividerConfiguration u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioClause_45Enable in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioClause_45Enable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioClause_45Enable in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioClause_45Enable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioClause_45Enable in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioClause_45Enable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioHoldTimeConfiguration in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioHoldTimeConfiguration 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioHoldTimeConfiguration in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioHoldTimeConfiguration u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioHoldTimeConfiguration in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioHoldTimeConfiguration u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioReadError in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioReadError 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioReadError in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioReadError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioReadError in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioReadError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioBusy_0 in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioBusy_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioBusy_0 in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioBusy_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioBusy_0 in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioBusy_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioBusy_1 in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioBusy_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioBusy_1 in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioBusy_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioBusy_1 in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioBusy_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioRead in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioRead 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioRead in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioRead u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioRead in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioRead u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioReadAddressPostIncrement in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioReadAddressPostIncrement 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioReadAddressPostIncrement in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioReadAddressPostIncrement u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioReadAddressPostIncrement in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioReadAddressPostIncrement u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioPortAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioPortAddress 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioPortAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioPortAddress u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioPortAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioPortAddress u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioDeviceAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioDeviceAddress 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioDeviceAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioDeviceAddress u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioDeviceAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioDeviceAddress u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioData in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioData 4
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioData in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioData u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioData in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioData u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure msmLineMdioRegisterAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioRegisterAddress 6
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineMdioRegisterAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define bits_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioRegisterAddress u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure msmLineMdioRegisterAddress in AQ_MsmLineMdioControlRegister_RHEA */
#define word_AQ_MsmLineMdioControlRegister_RHEA_msmLineMdioRegisterAddress u6.word_6

/*! \brief Base register address of structure AQ_MsmLineGeneralStatusRegister_RHEA */
#define AQ_MsmLineGeneralStatusRegister_RHEA_baseRegisterAddress 0x9020
/*! \brief MMD address of structure AQ_MsmLineGeneralStatusRegister_RHEA */
#define AQ_MsmLineGeneralStatusRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxFifoEmpty in AQ_MsmLineGeneralStatusRegister_RHEA */
#define AQ_MsmLineGeneralStatusRegister_RHEA_msmLineTxFifoEmpty 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxFifoEmpty in AQ_MsmLineGeneralStatusRegister_RHEA */
#define bits_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineTxFifoEmpty u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxFifoEmpty in AQ_MsmLineGeneralStatusRegister_RHEA */
#define word_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineTxFifoEmpty u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxLowPowerIdle in AQ_MsmLineGeneralStatusRegister_RHEA */
#define AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxLowPowerIdle 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxLowPowerIdle in AQ_MsmLineGeneralStatusRegister_RHEA */
#define bits_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxLowPowerIdle u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxLowPowerIdle in AQ_MsmLineGeneralStatusRegister_RHEA */
#define word_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxLowPowerIdle u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTimestampAvailable in AQ_MsmLineGeneralStatusRegister_RHEA */
#define AQ_MsmLineGeneralStatusRegister_RHEA_msmLineTimestampAvailable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTimestampAvailable in AQ_MsmLineGeneralStatusRegister_RHEA */
#define bits_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineTimestampAvailable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTimestampAvailable in AQ_MsmLineGeneralStatusRegister_RHEA */
#define word_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineTimestampAvailable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLinePhyLossOfSignal in AQ_MsmLineGeneralStatusRegister_RHEA */
#define AQ_MsmLineGeneralStatusRegister_RHEA_msmLinePhyLossOfSignal 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLinePhyLossOfSignal in AQ_MsmLineGeneralStatusRegister_RHEA */
#define bits_AQ_MsmLineGeneralStatusRegister_RHEA_msmLinePhyLossOfSignal u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLinePhyLossOfSignal in AQ_MsmLineGeneralStatusRegister_RHEA */
#define word_AQ_MsmLineGeneralStatusRegister_RHEA_msmLinePhyLossOfSignal u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxRemoteFault in AQ_MsmLineGeneralStatusRegister_RHEA */
#define AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxRemoteFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxRemoteFault in AQ_MsmLineGeneralStatusRegister_RHEA */
#define bits_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxRemoteFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxRemoteFault in AQ_MsmLineGeneralStatusRegister_RHEA */
#define word_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxRemoteFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxLocalFault in AQ_MsmLineGeneralStatusRegister_RHEA */
#define AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxLocalFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxLocalFault in AQ_MsmLineGeneralStatusRegister_RHEA */
#define bits_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxLocalFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxLocalFault in AQ_MsmLineGeneralStatusRegister_RHEA */
#define word_AQ_MsmLineGeneralStatusRegister_RHEA_msmLineRxLocalFault u0.word_0

/*! \brief Base register address of structure AQ_MsmLineTxIpgControlRegister_RHEA */
#define AQ_MsmLineTxIpgControlRegister_RHEA_baseRegisterAddress 0x9022
/*! \brief MMD address of structure AQ_MsmLineTxIpgControlRegister_RHEA */
#define AQ_MsmLineTxIpgControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxIpgLength in AQ_MsmLineTxIpgControlRegister_RHEA */
#define AQ_MsmLineTxIpgControlRegister_RHEA_msmLineTxIpgLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxIpgLength in AQ_MsmLineTxIpgControlRegister_RHEA */
#define bits_AQ_MsmLineTxIpgControlRegister_RHEA_msmLineTxIpgLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxIpgLength in AQ_MsmLineTxIpgControlRegister_RHEA */
#define word_AQ_MsmLineTxIpgControlRegister_RHEA_msmLineTxIpgLength u0.word_0

/*! \brief Base register address of structure AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_baseRegisterAddress 0x902A
/*! \brief MMD address of structure AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_0PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_0PauseQuanta 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_0PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_0PauseQuanta u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_0PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_0PauseQuanta u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_1PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_1PauseQuanta 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_1PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_1PauseQuanta u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_1PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_1PauseQuanta u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_2PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_2PauseQuanta 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_2PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_2PauseQuanta u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_2PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_2PauseQuanta u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_3PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_3PauseQuanta 3
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_3PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_3PauseQuanta u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_3PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_3PauseQuanta u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_4PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_4PauseQuanta 4
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_4PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_4PauseQuanta u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_4PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_4PauseQuanta u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_5PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_5PauseQuanta 5
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_5PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_5PauseQuanta u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_5PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_5PauseQuanta u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_6PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_6PauseQuanta 6
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_6PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_6PauseQuanta u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_6PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_6PauseQuanta u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_7PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_7PauseQuanta 7
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_7PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_7PauseQuanta u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_7PauseQuanta in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_7PauseQuanta u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_0PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_0PauseQuantaThreshold 8
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_0PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_0PauseQuantaThreshold u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_0PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_0PauseQuantaThreshold u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_1PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_1PauseQuantaThreshold 9
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_1PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_1PauseQuantaThreshold u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_1PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_1PauseQuantaThreshold u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_2PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_2PauseQuantaThreshold 10
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_2PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_2PauseQuantaThreshold u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_2PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_2PauseQuantaThreshold u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_3PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_3PauseQuantaThreshold 11
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_3PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_3PauseQuantaThreshold u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_3PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_3PauseQuantaThreshold u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_4PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_4PauseQuantaThreshold 12
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_4PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_4PauseQuantaThreshold u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_4PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_4PauseQuantaThreshold u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_5PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_5PauseQuantaThreshold 13
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_5PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_5PauseQuantaThreshold u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_5PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_5PauseQuantaThreshold u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_6PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_6PauseQuantaThreshold 14
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_6PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_6PauseQuantaThreshold u14.bits_14
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_6PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_6PauseQuantaThreshold u14.word_14
/*! \brief Preprocessor variable to relate field to word number in structure msmLineClass_7PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_7PauseQuantaThreshold 15
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineClass_7PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define bits_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_7PauseQuantaThreshold u15.bits_15
/*! \brief Preprocessor variable to relate field to word position in structure msmLineClass_7PauseQuantaThreshold in AQ_MsmLinePauseControlRegister_RHEA */
#define word_AQ_MsmLinePauseControlRegister_RHEA_msmLineClass_7PauseQuantaThreshold u15.word_15

/*! \brief Base register address of structure AQ_MsmLinePauseStatusRegister_RHEA */
#define AQ_MsmLinePauseStatusRegister_RHEA_baseRegisterAddress 0x903A
/*! \brief MMD address of structure AQ_MsmLinePauseStatusRegister_RHEA */
#define AQ_MsmLinePauseStatusRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLinePauseStatus in AQ_MsmLinePauseStatusRegister_RHEA */
#define AQ_MsmLinePauseStatusRegister_RHEA_msmLinePauseStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLinePauseStatus in AQ_MsmLinePauseStatusRegister_RHEA */
#define bits_AQ_MsmLinePauseStatusRegister_RHEA_msmLinePauseStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLinePauseStatus in AQ_MsmLinePauseStatusRegister_RHEA */
#define word_AQ_MsmLinePauseStatusRegister_RHEA_msmLinePauseStatus u0.word_0

/*! \brief Base register address of structure AQ_MsmLineTimeStampStatusRegister_RHEA */
#define AQ_MsmLineTimeStampStatusRegister_RHEA_baseRegisterAddress 0x903E
/*! \brief MMD address of structure AQ_MsmLineTimeStampStatusRegister_RHEA */
#define AQ_MsmLineTimeStampStatusRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTimestampStatus_0 in AQ_MsmLineTimeStampStatusRegister_RHEA */
#define AQ_MsmLineTimeStampStatusRegister_RHEA_msmLineTimestampStatus_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTimestampStatus_0 in AQ_MsmLineTimeStampStatusRegister_RHEA */
#define bits_AQ_MsmLineTimeStampStatusRegister_RHEA_msmLineTimestampStatus_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTimestampStatus_0 in AQ_MsmLineTimeStampStatusRegister_RHEA */
#define word_AQ_MsmLineTimeStampStatusRegister_RHEA_msmLineTimestampStatus_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTimestampStatus_1 in AQ_MsmLineTimeStampStatusRegister_RHEA */
#define AQ_MsmLineTimeStampStatusRegister_RHEA_msmLineTimestampStatus_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTimestampStatus_1 in AQ_MsmLineTimeStampStatusRegister_RHEA */
#define bits_AQ_MsmLineTimeStampStatusRegister_RHEA_msmLineTimestampStatus_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTimestampStatus_1 in AQ_MsmLineTimeStampStatusRegister_RHEA */
#define word_AQ_MsmLineTimeStampStatusRegister_RHEA_msmLineTimestampStatus_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineTxGoodFramesCounterRegister_RHEA */
#define AQ_MsmLineTxGoodFramesCounterRegister_RHEA_baseRegisterAddress 0x9040
/*! \brief MMD address of structure AQ_MsmLineTxGoodFramesCounterRegister_RHEA */
#define AQ_MsmLineTxGoodFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxGoodFramesCounter_0 in AQ_MsmLineTxGoodFramesCounterRegister_RHEA */
#define AQ_MsmLineTxGoodFramesCounterRegister_RHEA_msmLineTxGoodFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxGoodFramesCounter_0 in AQ_MsmLineTxGoodFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxGoodFramesCounterRegister_RHEA_msmLineTxGoodFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxGoodFramesCounter_0 in AQ_MsmLineTxGoodFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxGoodFramesCounterRegister_RHEA_msmLineTxGoodFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxGoodFramesCounter_1 in AQ_MsmLineTxGoodFramesCounterRegister_RHEA */
#define AQ_MsmLineTxGoodFramesCounterRegister_RHEA_msmLineTxGoodFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxGoodFramesCounter_1 in AQ_MsmLineTxGoodFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxGoodFramesCounterRegister_RHEA_msmLineTxGoodFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxGoodFramesCounter_1 in AQ_MsmLineTxGoodFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxGoodFramesCounterRegister_RHEA_msmLineTxGoodFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxGoodFramesCounterRegister_RHEA */
#define AQ_MsmLineRxGoodFramesCounterRegister_RHEA_baseRegisterAddress 0x9044
/*! \brief MMD address of structure AQ_MsmLineRxGoodFramesCounterRegister_RHEA */
#define AQ_MsmLineRxGoodFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxGoodFramesCounter_0 in AQ_MsmLineRxGoodFramesCounterRegister_RHEA */
#define AQ_MsmLineRxGoodFramesCounterRegister_RHEA_msmLineRxGoodFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxGoodFramesCounter_0 in AQ_MsmLineRxGoodFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxGoodFramesCounterRegister_RHEA_msmLineRxGoodFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxGoodFramesCounter_0 in AQ_MsmLineRxGoodFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxGoodFramesCounterRegister_RHEA_msmLineRxGoodFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxGoodFramesCounter_1 in AQ_MsmLineRxGoodFramesCounterRegister_RHEA */
#define AQ_MsmLineRxGoodFramesCounterRegister_RHEA_msmLineRxGoodFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxGoodFramesCounter_1 in AQ_MsmLineRxGoodFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxGoodFramesCounterRegister_RHEA_msmLineRxGoodFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxGoodFramesCounter_1 in AQ_MsmLineRxGoodFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxGoodFramesCounterRegister_RHEA_msmLineRxGoodFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxFcsErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxFcsErrorsCounterRegister_RHEA_baseRegisterAddress 0x9048
/*! \brief MMD address of structure AQ_MsmLineRxFcsErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxFcsErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineFcsErrorCounter_0 in AQ_MsmLineRxFcsErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxFcsErrorsCounterRegister_RHEA_msmLineFcsErrorCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineFcsErrorCounter_0 in AQ_MsmLineRxFcsErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxFcsErrorsCounterRegister_RHEA_msmLineFcsErrorCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineFcsErrorCounter_0 in AQ_MsmLineRxFcsErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxFcsErrorsCounterRegister_RHEA_msmLineFcsErrorCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineFcsErrorCounter_1 in AQ_MsmLineRxFcsErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxFcsErrorsCounterRegister_RHEA_msmLineFcsErrorCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineFcsErrorCounter_1 in AQ_MsmLineRxFcsErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxFcsErrorsCounterRegister_RHEA_msmLineFcsErrorCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineFcsErrorCounter_1 in AQ_MsmLineRxFcsErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxFcsErrorsCounterRegister_RHEA_msmLineFcsErrorCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA_baseRegisterAddress 0x904C
/*! \brief MMD address of structure AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineAlignmentErrorCounter_0 in AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA_msmLineAlignmentErrorCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineAlignmentErrorCounter_0 in AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA_msmLineAlignmentErrorCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineAlignmentErrorCounter_0 in AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA_msmLineAlignmentErrorCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineAlignmentErrorCounter_1 in AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA_msmLineAlignmentErrorCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineAlignmentErrorCounter_1 in AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA_msmLineAlignmentErrorCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineAlignmentErrorCounter_1 in AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxAlignmentErrorsCounterRegister_RHEA_msmLineAlignmentErrorCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineTxPauseFramesCounterRegister_RHEA */
#define AQ_MsmLineTxPauseFramesCounterRegister_RHEA_baseRegisterAddress 0x9050
/*! \brief MMD address of structure AQ_MsmLineTxPauseFramesCounterRegister_RHEA */
#define AQ_MsmLineTxPauseFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxPauseFramesCounter_0 in AQ_MsmLineTxPauseFramesCounterRegister_RHEA */
#define AQ_MsmLineTxPauseFramesCounterRegister_RHEA_msmLineTxPauseFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxPauseFramesCounter_0 in AQ_MsmLineTxPauseFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxPauseFramesCounterRegister_RHEA_msmLineTxPauseFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxPauseFramesCounter_0 in AQ_MsmLineTxPauseFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxPauseFramesCounterRegister_RHEA_msmLineTxPauseFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxPauseFramesCounter_1 in AQ_MsmLineTxPauseFramesCounterRegister_RHEA */
#define AQ_MsmLineTxPauseFramesCounterRegister_RHEA_msmLineTxPauseFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxPauseFramesCounter_1 in AQ_MsmLineTxPauseFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxPauseFramesCounterRegister_RHEA_msmLineTxPauseFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxPauseFramesCounter_1 in AQ_MsmLineTxPauseFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxPauseFramesCounterRegister_RHEA_msmLineTxPauseFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxPauseFramesCounterRegister_RHEA */
#define AQ_MsmLineRxPauseFramesCounterRegister_RHEA_baseRegisterAddress 0x9054
/*! \brief MMD address of structure AQ_MsmLineRxPauseFramesCounterRegister_RHEA */
#define AQ_MsmLineRxPauseFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxPauseFramesCounter_0 in AQ_MsmLineRxPauseFramesCounterRegister_RHEA */
#define AQ_MsmLineRxPauseFramesCounterRegister_RHEA_msmLineRxPauseFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxPauseFramesCounter_0 in AQ_MsmLineRxPauseFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxPauseFramesCounterRegister_RHEA_msmLineRxPauseFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxPauseFramesCounter_0 in AQ_MsmLineRxPauseFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxPauseFramesCounterRegister_RHEA_msmLineRxPauseFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxPauseFramesCounter_1 in AQ_MsmLineRxPauseFramesCounterRegister_RHEA */
#define AQ_MsmLineRxPauseFramesCounterRegister_RHEA_msmLineRxPauseFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxPauseFramesCounter_1 in AQ_MsmLineRxPauseFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxPauseFramesCounterRegister_RHEA_msmLineRxPauseFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxPauseFramesCounter_1 in AQ_MsmLineRxPauseFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxPauseFramesCounterRegister_RHEA_msmLineRxPauseFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA_baseRegisterAddress 0x9058
/*! \brief MMD address of structure AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxTooLongErrorsCounter_0 in AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA_msmLineRxTooLongErrorsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxTooLongErrorsCounter_0 in AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA_msmLineRxTooLongErrorsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxTooLongErrorsCounter_0 in AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA_msmLineRxTooLongErrorsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxTooLongErrorsCounter_1 in AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA_msmLineRxTooLongErrorsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxTooLongErrorsCounter_1 in AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA_msmLineRxTooLongErrorsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxTooLongErrorsCounter_1 in AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxTooLongErrorsCounterRegister_RHEA_msmLineRxTooLongErrorsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA_baseRegisterAddress 0x905C
/*! \brief MMD address of structure AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxInRangeLengthErrorsCounter_0 in AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA_msmLineRxInRangeLengthErrorsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxInRangeLengthErrorsCounter_0 in AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA_msmLineRxInRangeLengthErrorsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxInRangeLengthErrorsCounter_0 in AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA_msmLineRxInRangeLengthErrorsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxInRangeLengthErrorsCounter_1 in AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA_msmLineRxInRangeLengthErrorsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxInRangeLengthErrorsCounter_1 in AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA_msmLineRxInRangeLengthErrorsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxInRangeLengthErrorsCounter_1 in AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxInRangeLengthErrorsCounterRegister_RHEA_msmLineRxInRangeLengthErrorsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineTxVlanFramesCounterRegister_RHEA */
#define AQ_MsmLineTxVlanFramesCounterRegister_RHEA_baseRegisterAddress 0x9060
/*! \brief MMD address of structure AQ_MsmLineTxVlanFramesCounterRegister_RHEA */
#define AQ_MsmLineTxVlanFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxVlanFramesCounter_0 in AQ_MsmLineTxVlanFramesCounterRegister_RHEA */
#define AQ_MsmLineTxVlanFramesCounterRegister_RHEA_msmLineTxVlanFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxVlanFramesCounter_0 in AQ_MsmLineTxVlanFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxVlanFramesCounterRegister_RHEA_msmLineTxVlanFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxVlanFramesCounter_0 in AQ_MsmLineTxVlanFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxVlanFramesCounterRegister_RHEA_msmLineTxVlanFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxVlanFramesCounter_1 in AQ_MsmLineTxVlanFramesCounterRegister_RHEA */
#define AQ_MsmLineTxVlanFramesCounterRegister_RHEA_msmLineTxVlanFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxVlanFramesCounter_1 in AQ_MsmLineTxVlanFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxVlanFramesCounterRegister_RHEA_msmLineTxVlanFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxVlanFramesCounter_1 in AQ_MsmLineTxVlanFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxVlanFramesCounterRegister_RHEA_msmLineTxVlanFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxVlanFramesCounterRegister_RHEA */
#define AQ_MsmLineRxVlanFramesCounterRegister_RHEA_baseRegisterAddress 0x9064
/*! \brief MMD address of structure AQ_MsmLineRxVlanFramesCounterRegister_RHEA */
#define AQ_MsmLineRxVlanFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxVlanFramesCounter_0 in AQ_MsmLineRxVlanFramesCounterRegister_RHEA */
#define AQ_MsmLineRxVlanFramesCounterRegister_RHEA_msmLineRxVlanFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxVlanFramesCounter_0 in AQ_MsmLineRxVlanFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxVlanFramesCounterRegister_RHEA_msmLineRxVlanFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxVlanFramesCounter_0 in AQ_MsmLineRxVlanFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxVlanFramesCounterRegister_RHEA_msmLineRxVlanFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxVlanFramesCounter_1 in AQ_MsmLineRxVlanFramesCounterRegister_RHEA */
#define AQ_MsmLineRxVlanFramesCounterRegister_RHEA_msmLineRxVlanFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxVlanFramesCounter_1 in AQ_MsmLineRxVlanFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxVlanFramesCounterRegister_RHEA_msmLineRxVlanFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxVlanFramesCounter_1 in AQ_MsmLineRxVlanFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxVlanFramesCounterRegister_RHEA_msmLineRxVlanFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define AQ_MsmLineTxOctetsCounterRegister_RHEA_baseRegisterAddress 0x9068
/*! \brief MMD address of structure AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define AQ_MsmLineTxOctetsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxOctetsCounter_0 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxOctetsCounter_0 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxOctetsCounter_0 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define word_AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxOctetsCounter_1 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxOctetsCounter_1 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxOctetsCounter_1 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define word_AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxOctetsCounter_2 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxOctetsCounter_2 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxOctetsCounter_2 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define word_AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxOctetsCounter_3 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxOctetsCounter_3 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxOctetsCounter_3 in AQ_MsmLineTxOctetsCounterRegister_RHEA */
#define word_AQ_MsmLineTxOctetsCounterRegister_RHEA_msmLineTxOctetsCounter_3 u3.word_3

/*! \brief Base register address of structure AQ_MsmLineRxOctetsCounterRegister_RHEA */
#define AQ_MsmLineRxOctetsCounterRegister_RHEA_baseRegisterAddress 0x906C
/*! \brief MMD address of structure AQ_MsmLineRxOctetsCounterRegister_RHEA */
#define AQ_MsmLineRxOctetsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxOctetsCounter_0 in AQ_MsmLineRxOctetsCounterRegister_RHEA */
#define AQ_MsmLineRxOctetsCounterRegister_RHEA_msmLineRxOctetsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxOctetsCounter_0 in AQ_MsmLineRxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxOctetsCounterRegister_RHEA_msmLineRxOctetsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxOctetsCounter_0 in AQ_MsmLineRxOctetsCounterRegister_RHEA */
#define word_AQ_MsmLineRxOctetsCounterRegister_RHEA_msmLineRxOctetsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxOctetsCounter_1 in AQ_MsmLineRxOctetsCounterRegister_RHEA */
#define AQ_MsmLineRxOctetsCounterRegister_RHEA_msmLineRxOctetsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxOctetsCounter_1 in AQ_MsmLineRxOctetsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxOctetsCounterRegister_RHEA_msmLineRxOctetsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxOctetsCounter_1 in AQ_MsmLineRxOctetsCounterRegister_RHEA */
#define word_AQ_MsmLineRxOctetsCounterRegister_RHEA_msmLineRxOctetsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxUnicastFramesCounterRegister_RHEA_baseRegisterAddress 0x9070
/*! \brief MMD address of structure AQ_MsmLineRxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxUnicastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxUnicastFramesCounter_0 in AQ_MsmLineRxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxUnicastFramesCounterRegister_RHEA_msmLineRxUnicastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxUnicastFramesCounter_0 in AQ_MsmLineRxUnicastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxUnicastFramesCounterRegister_RHEA_msmLineRxUnicastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxUnicastFramesCounter_0 in AQ_MsmLineRxUnicastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxUnicastFramesCounterRegister_RHEA_msmLineRxUnicastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxUnicastFramesCounter_1 in AQ_MsmLineRxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxUnicastFramesCounterRegister_RHEA_msmLineRxUnicastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxUnicastFramesCounter_1 in AQ_MsmLineRxUnicastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxUnicastFramesCounterRegister_RHEA_msmLineRxUnicastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxUnicastFramesCounter_1 in AQ_MsmLineRxUnicastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxUnicastFramesCounterRegister_RHEA_msmLineRxUnicastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxMulticastFramesCounterRegister_RHEA_baseRegisterAddress 0x9074
/*! \brief MMD address of structure AQ_MsmLineRxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxMulticastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxMulticastFramesCounter_0 in AQ_MsmLineRxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxMulticastFramesCounterRegister_RHEA_msmLineRxMulticastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxMulticastFramesCounter_0 in AQ_MsmLineRxMulticastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxMulticastFramesCounterRegister_RHEA_msmLineRxMulticastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxMulticastFramesCounter_0 in AQ_MsmLineRxMulticastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxMulticastFramesCounterRegister_RHEA_msmLineRxMulticastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxMulticastFramesCounter_1 in AQ_MsmLineRxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxMulticastFramesCounterRegister_RHEA_msmLineRxMulticastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxMulticastFramesCounter_1 in AQ_MsmLineRxMulticastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxMulticastFramesCounterRegister_RHEA_msmLineRxMulticastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxMulticastFramesCounter_1 in AQ_MsmLineRxMulticastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxMulticastFramesCounterRegister_RHEA_msmLineRxMulticastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA_baseRegisterAddress 0x9078
/*! \brief MMD address of structure AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxBroadcastFramesCounter_0 in AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA_msmLineRxBroadcastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxBroadcastFramesCounter_0 in AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA_msmLineRxBroadcastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxBroadcastFramesCounter_0 in AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA_msmLineRxBroadcastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxBroadcastFramesCounter_1 in AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA_msmLineRxBroadcastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxBroadcastFramesCounter_1 in AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA_msmLineRxBroadcastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxBroadcastFramesCounter_1 in AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineRxBroadcastFramesCounterRegister_RHEA_msmLineRxBroadcastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineTxErrorsCounterRegister_RHEA */
#define AQ_MsmLineTxErrorsCounterRegister_RHEA_baseRegisterAddress 0x907C
/*! \brief MMD address of structure AQ_MsmLineTxErrorsCounterRegister_RHEA */
#define AQ_MsmLineTxErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxErrorsCounter_0 in AQ_MsmLineTxErrorsCounterRegister_RHEA */
#define AQ_MsmLineTxErrorsCounterRegister_RHEA_msmLineTxErrorsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxErrorsCounter_0 in AQ_MsmLineTxErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineTxErrorsCounterRegister_RHEA_msmLineTxErrorsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxErrorsCounter_0 in AQ_MsmLineTxErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineTxErrorsCounterRegister_RHEA_msmLineTxErrorsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxErrorsCounter_1 in AQ_MsmLineTxErrorsCounterRegister_RHEA */
#define AQ_MsmLineTxErrorsCounterRegister_RHEA_msmLineTxErrorsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxErrorsCounter_1 in AQ_MsmLineTxErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineTxErrorsCounterRegister_RHEA_msmLineTxErrorsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxErrorsCounter_1 in AQ_MsmLineTxErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineTxErrorsCounterRegister_RHEA_msmLineTxErrorsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineTxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxUnicastFramesCounterRegister_RHEA_baseRegisterAddress 0x9084
/*! \brief MMD address of structure AQ_MsmLineTxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxUnicastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxUnicastFramesCounter_0 in AQ_MsmLineTxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxUnicastFramesCounterRegister_RHEA_msmLineTxUnicastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxUnicastFramesCounter_0 in AQ_MsmLineTxUnicastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxUnicastFramesCounterRegister_RHEA_msmLineTxUnicastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxUnicastFramesCounter_0 in AQ_MsmLineTxUnicastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxUnicastFramesCounterRegister_RHEA_msmLineTxUnicastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxUnicastFramesCounter_1 in AQ_MsmLineTxUnicastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxUnicastFramesCounterRegister_RHEA_msmLineTxUnicastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxUnicastFramesCounter_1 in AQ_MsmLineTxUnicastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxUnicastFramesCounterRegister_RHEA_msmLineTxUnicastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxUnicastFramesCounter_1 in AQ_MsmLineTxUnicastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxUnicastFramesCounterRegister_RHEA_msmLineTxUnicastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineTxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxMulticastFramesCounterRegister_RHEA_baseRegisterAddress 0x9088
/*! \brief MMD address of structure AQ_MsmLineTxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxMulticastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxMulticastFramesCounter_0 in AQ_MsmLineTxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxMulticastFramesCounterRegister_RHEA_msmLineTxMulticastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxMulticastFramesCounter_0 in AQ_MsmLineTxMulticastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxMulticastFramesCounterRegister_RHEA_msmLineTxMulticastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxMulticastFramesCounter_0 in AQ_MsmLineTxMulticastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxMulticastFramesCounterRegister_RHEA_msmLineTxMulticastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxMulticastFramesCounter_1 in AQ_MsmLineTxMulticastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxMulticastFramesCounterRegister_RHEA_msmLineTxMulticastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxMulticastFramesCounter_1 in AQ_MsmLineTxMulticastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxMulticastFramesCounterRegister_RHEA_msmLineTxMulticastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxMulticastFramesCounter_1 in AQ_MsmLineTxMulticastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxMulticastFramesCounterRegister_RHEA_msmLineTxMulticastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA_baseRegisterAddress 0x908C
/*! \brief MMD address of structure AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxBroadcastFramesCounter_0 in AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA_msmLineTxBroadcastFramesCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxBroadcastFramesCounter_0 in AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA_msmLineTxBroadcastFramesCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxBroadcastFramesCounter_0 in AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA_msmLineTxBroadcastFramesCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineTxBroadcastFramesCounter_1 in AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA */
#define AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA_msmLineTxBroadcastFramesCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineTxBroadcastFramesCounter_1 in AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA */
#define bits_AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA_msmLineTxBroadcastFramesCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineTxBroadcastFramesCounter_1 in AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA */
#define word_AQ_MsmLineTxBroadcastFramesCounterRegister_RHEA_msmLineTxBroadcastFramesCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineRxErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxErrorsCounterRegister_RHEA_baseRegisterAddress 0x90C8
/*! \brief MMD address of structure AQ_MsmLineRxErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxErrorsCounterRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxErrorsCounter_0 in AQ_MsmLineRxErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxErrorsCounterRegister_RHEA_msmLineRxErrorsCounter_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxErrorsCounter_0 in AQ_MsmLineRxErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxErrorsCounterRegister_RHEA_msmLineRxErrorsCounter_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxErrorsCounter_0 in AQ_MsmLineRxErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxErrorsCounterRegister_RHEA_msmLineRxErrorsCounter_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineRxErrorsCounter_1 in AQ_MsmLineRxErrorsCounterRegister_RHEA */
#define AQ_MsmLineRxErrorsCounterRegister_RHEA_msmLineRxErrorsCounter_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineRxErrorsCounter_1 in AQ_MsmLineRxErrorsCounterRegister_RHEA */
#define bits_AQ_MsmLineRxErrorsCounterRegister_RHEA_msmLineRxErrorsCounter_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure msmLineRxErrorsCounter_1 in AQ_MsmLineRxErrorsCounterRegister_RHEA */
#define word_AQ_MsmLineRxErrorsCounterRegister_RHEA_msmLineRxErrorsCounter_1 u1.word_1

/*! \brief Base register address of structure AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_baseRegisterAddress 0x9180
/*! \brief MMD address of structure AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiReset in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiReset in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiReset in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiLoopback in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiLoopback 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiLoopback in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiLoopback u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiLoopback in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiLoopback u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiSpeedSelection_2 in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiSpeedSelection_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiSpeedSelection_2 in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiSpeedSelection_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiSpeedSelection_2 in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiSpeedSelection_2 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiAutonegotationEnable in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiAutonegotationEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiAutonegotationEnable in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiAutonegotationEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiAutonegotationEnable in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiAutonegotationEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiPowerDown in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiPowerDown 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiPowerDown in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiPowerDown u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiPowerDown in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiPowerDown u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiIsolate in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiIsolate 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiIsolate in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiIsolate u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiIsolate in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiIsolate u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiRestartAutonegotiation in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiRestartAutonegotiation 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiRestartAutonegotiation in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiRestartAutonegotiation u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiRestartAutonegotiation in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiRestartAutonegotiation u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiDuplexMode in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiDuplexMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiDuplexMode in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiDuplexMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiDuplexMode in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiDuplexMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiCollisionTest in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiCollisionTest 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiCollisionTest in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiCollisionTest u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiCollisionTest in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiCollisionTest u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiSpeedSelection_1 in AQ_MsmLineSgmiiControlRegister_RHEA */
#define AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiSpeedSelection_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiSpeedSelection_1 in AQ_MsmLineSgmiiControlRegister_RHEA */
#define bits_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiSpeedSelection_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiSpeedSelection_1 in AQ_MsmLineSgmiiControlRegister_RHEA */
#define word_AQ_MsmLineSgmiiControlRegister_RHEA_msmLineSgmiiSpeedSelection_1 u0.word_0

/*! \brief Base register address of structure AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define AQ_MsmLineSgmiiIfModeRegister_RHEA_baseRegisterAddress 0x91A8
/*! \brief MMD address of structure AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define AQ_MsmLineSgmiiIfModeRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiPcsEnable in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiPcsEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiPcsEnable in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiPcsEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiPcsEnable in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiPcsEnable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiHalfDuplex in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiHalfDuplex 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiHalfDuplex in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiHalfDuplex u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiHalfDuplex in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiHalfDuplex u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiSpeed in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiSpeed 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiSpeed in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiSpeed u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiSpeed in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiSpeed u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineUseSgmiiAutonegotiation in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineUseSgmiiAutonegotiation 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineUseSgmiiAutonegotiation in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineUseSgmiiAutonegotiation u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineUseSgmiiAutonegotiation in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineUseSgmiiAutonegotiation u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure msmLineSgmiiEnable in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiEnable 0
/*! \brief Preprocessor variable to relate field to bit position in structure msmLineSgmiiEnable in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define bits_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiEnable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure msmLineSgmiiEnable in AQ_MsmLineSgmiiIfModeRegister_RHEA */
#define word_AQ_MsmLineSgmiiIfModeRegister_RHEA_msmLineSgmiiEnable u0.word_0

/*! \brief Base register address of structure AQ_SerdesXmitControl_RHEA */
#define AQ_SerdesXmitControl_RHEA_baseRegisterAddress 0xA000
/*! \brief MMD address of structure AQ_SerdesXmitControl_RHEA */
#define AQ_SerdesXmitControl_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure tx0ResetActiveLow in AQ_SerdesXmitControl_RHEA */
#define AQ_SerdesXmitControl_RHEA_tx0ResetActiveLow 0
/*! \brief Preprocessor variable to relate field to bit position in structure tx0ResetActiveLow in AQ_SerdesXmitControl_RHEA */
#define bits_AQ_SerdesXmitControl_RHEA_tx0ResetActiveLow u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure tx0ResetActiveLow in AQ_SerdesXmitControl_RHEA */
#define word_AQ_SerdesXmitControl_RHEA_tx0ResetActiveLow u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure tx0AlignWideXferEn in AQ_SerdesXmitControl_RHEA */
#define AQ_SerdesXmitControl_RHEA_tx0AlignWideXferEn 6
/*! \brief Preprocessor variable to relate field to bit position in structure tx0AlignWideXferEn in AQ_SerdesXmitControl_RHEA */
#define bits_AQ_SerdesXmitControl_RHEA_tx0AlignWideXferEn u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure tx0AlignWideXferEn in AQ_SerdesXmitControl_RHEA */
#define word_AQ_SerdesXmitControl_RHEA_tx0AlignWideXferEn u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure tx0Invert in AQ_SerdesXmitControl_RHEA */
#define AQ_SerdesXmitControl_RHEA_tx0Invert 6
/*! \brief Preprocessor variable to relate field to bit position in structure tx0Invert in AQ_SerdesXmitControl_RHEA */
#define bits_AQ_SerdesXmitControl_RHEA_tx0Invert u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure tx0Invert in AQ_SerdesXmitControl_RHEA */
#define word_AQ_SerdesXmitControl_RHEA_tx0Invert u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure tx0DataEn in AQ_SerdesXmitControl_RHEA */
#define AQ_SerdesXmitControl_RHEA_tx0DataEn 6
/*! \brief Preprocessor variable to relate field to bit position in structure tx0DataEn in AQ_SerdesXmitControl_RHEA */
#define bits_AQ_SerdesXmitControl_RHEA_tx0DataEn u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure tx0DataEn in AQ_SerdesXmitControl_RHEA */
#define word_AQ_SerdesXmitControl_RHEA_tx0DataEn u6.word_6

/*! \brief Base register address of structure AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_baseRegisterAddress 0xA040
/*! \brief MMD address of structure AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure rx0ResetActiveLow in AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_rx0ResetActiveLow 0
/*! \brief Preprocessor variable to relate field to bit position in structure rx0ResetActiveLow in AQ_SerdesRcvrControl_RHEA */
#define bits_AQ_SerdesRcvrControl_RHEA_rx0ResetActiveLow u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rx0ResetActiveLow in AQ_SerdesRcvrControl_RHEA */
#define word_AQ_SerdesRcvrControl_RHEA_rx0ResetActiveLow u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rx0Invert in AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_rx0Invert 6
/*! \brief Preprocessor variable to relate field to bit position in structure rx0Invert in AQ_SerdesRcvrControl_RHEA */
#define bits_AQ_SerdesRcvrControl_RHEA_rx0Invert u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure rx0Invert in AQ_SerdesRcvrControl_RHEA */
#define word_AQ_SerdesRcvrControl_RHEA_rx0Invert u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure rx0DataEnActiveLow in AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_rx0DataEnActiveLow 6
/*! \brief Preprocessor variable to relate field to bit position in structure rx0DataEnActiveLow in AQ_SerdesRcvrControl_RHEA */
#define bits_AQ_SerdesRcvrControl_RHEA_rx0DataEnActiveLow u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure rx0DataEnActiveLow in AQ_SerdesRcvrControl_RHEA */
#define word_AQ_SerdesRcvrControl_RHEA_rx0DataEnActiveLow u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure rx0SigdetPulseCatcher1Blh in AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_rx0SigdetPulseCatcher1Blh 43
/*! \brief Preprocessor variable to relate field to bit position in structure rx0SigdetPulseCatcher1Blh in AQ_SerdesRcvrControl_RHEA */
#define bits_AQ_SerdesRcvrControl_RHEA_rx0SigdetPulseCatcher1Blh u43.bits_43
/*! \brief Preprocessor variable to relate field to word position in structure rx0SigdetPulseCatcher1Blh in AQ_SerdesRcvrControl_RHEA */
#define word_AQ_SerdesRcvrControl_RHEA_rx0SigdetPulseCatcher1Blh u43.word_43
/*! \brief Preprocessor variable to relate field to word number in structure rx0SigdetPulseCatcher0Blh in AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_rx0SigdetPulseCatcher0Blh 43
/*! \brief Preprocessor variable to relate field to bit position in structure rx0SigdetPulseCatcher0Blh in AQ_SerdesRcvrControl_RHEA */
#define bits_AQ_SerdesRcvrControl_RHEA_rx0SigdetPulseCatcher0Blh u43.bits_43
/*! \brief Preprocessor variable to relate field to word position in structure rx0SigdetPulseCatcher0Blh in AQ_SerdesRcvrControl_RHEA */
#define word_AQ_SerdesRcvrControl_RHEA_rx0SigdetPulseCatcher0Blh u43.word_43
/*! \brief Preprocessor variable to relate field to word number in structure rx0SigdetLfBlh in AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_rx0SigdetLfBlh 43
/*! \brief Preprocessor variable to relate field to bit position in structure rx0SigdetLfBlh in AQ_SerdesRcvrControl_RHEA */
#define bits_AQ_SerdesRcvrControl_RHEA_rx0SigdetLfBlh u43.bits_43
/*! \brief Preprocessor variable to relate field to word position in structure rx0SigdetLfBlh in AQ_SerdesRcvrControl_RHEA */
#define word_AQ_SerdesRcvrControl_RHEA_rx0SigdetLfBlh u43.word_43
/*! \brief Preprocessor variable to relate field to word number in structure rx0SigdetHfBlh in AQ_SerdesRcvrControl_RHEA */
#define AQ_SerdesRcvrControl_RHEA_rx0SigdetHfBlh 43
/*! \brief Preprocessor variable to relate field to bit position in structure rx0SigdetHfBlh in AQ_SerdesRcvrControl_RHEA */
#define bits_AQ_SerdesRcvrControl_RHEA_rx0SigdetHfBlh u43.bits_43
/*! \brief Preprocessor variable to relate field to word position in structure rx0SigdetHfBlh in AQ_SerdesRcvrControl_RHEA */
#define word_AQ_SerdesRcvrControl_RHEA_rx0SigdetHfBlh u43.word_43

/*! \brief Base register address of structure AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_baseRegisterAddress 0xA071
/*! \brief MMD address of structure AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure rx0AdaptInProg in AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptInProg 0
/*! \brief Preprocessor variable to relate field to bit position in structure rx0AdaptInProg in AQ_SerdesRcvrAdaptation_RHEA */
#define bits_AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptInProg u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rx0AdaptInProg in AQ_SerdesRcvrAdaptation_RHEA */
#define word_AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptInProg u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure rx0AdaptReq in AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptReq 1
/*! \brief Preprocessor variable to relate field to bit position in structure rx0AdaptReq in AQ_SerdesRcvrAdaptation_RHEA */
#define bits_AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptReq u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure rx0AdaptReq in AQ_SerdesRcvrAdaptation_RHEA */
#define word_AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptReq u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure rx0AdaptFom in AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptFom 3
/*! \brief Preprocessor variable to relate field to bit position in structure rx0AdaptFom in AQ_SerdesRcvrAdaptation_RHEA */
#define bits_AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptFom u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure rx0AdaptFom in AQ_SerdesRcvrAdaptation_RHEA */
#define word_AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptFom u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure rx0TxpreDir in AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_rx0TxpreDir 3
/*! \brief Preprocessor variable to relate field to bit position in structure rx0TxpreDir in AQ_SerdesRcvrAdaptation_RHEA */
#define bits_AQ_SerdesRcvrAdaptation_RHEA_rx0TxpreDir u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure rx0TxpreDir in AQ_SerdesRcvrAdaptation_RHEA */
#define word_AQ_SerdesRcvrAdaptation_RHEA_rx0TxpreDir u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure rx0TxpostDir in AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_rx0TxpostDir 3
/*! \brief Preprocessor variable to relate field to bit position in structure rx0TxpostDir in AQ_SerdesRcvrAdaptation_RHEA */
#define bits_AQ_SerdesRcvrAdaptation_RHEA_rx0TxpostDir u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure rx0TxpostDir in AQ_SerdesRcvrAdaptation_RHEA */
#define word_AQ_SerdesRcvrAdaptation_RHEA_rx0TxpostDir u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure rx0TxmainDir in AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_rx0TxmainDir 3
/*! \brief Preprocessor variable to relate field to bit position in structure rx0TxmainDir in AQ_SerdesRcvrAdaptation_RHEA */
#define bits_AQ_SerdesRcvrAdaptation_RHEA_rx0TxmainDir u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure rx0TxmainDir in AQ_SerdesRcvrAdaptation_RHEA */
#define word_AQ_SerdesRcvrAdaptation_RHEA_rx0TxmainDir u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure rx0AdaptAck in AQ_SerdesRcvrAdaptation_RHEA */
#define AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptAck 3
/*! \brief Preprocessor variable to relate field to bit position in structure rx0AdaptAck in AQ_SerdesRcvrAdaptation_RHEA */
#define bits_AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptAck u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure rx0AdaptAck in AQ_SerdesRcvrAdaptation_RHEA */
#define word_AQ_SerdesRcvrAdaptation_RHEA_rx0AdaptAck u3.word_3

/*! \brief Base register address of structure AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_baseRegisterAddress 0xA100
/*! \brief MMD address of structure AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure crParaSel in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crParaSel 0
/*! \brief Preprocessor variable to relate field to bit position in structure crParaSel in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crParaSel u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure crParaSel in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crParaSel u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure crIfInitWait in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfInitWait 1
/*! \brief Preprocessor variable to relate field to bit position in structure crIfInitWait in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfInitWait u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure crIfInitWait in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfInitWait u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure crIfAckTimeout in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfAckTimeout 2
/*! \brief Preprocessor variable to relate field to bit position in structure crIfAckTimeout in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfAckTimeout u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure crIfAckTimeout in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfAckTimeout u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure crIfWrStartAddr in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfWrStartAddr 4
/*! \brief Preprocessor variable to relate field to bit position in structure crIfWrStartAddr in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfWrStartAddr u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure crIfWrStartAddr in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfWrStartAddr u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure crIfWrData in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfWrData 5
/*! \brief Preprocessor variable to relate field to bit position in structure crIfWrData in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfWrData u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure crIfWrData in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfWrData u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure crIfWrAckdAddr in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfWrAckdAddr 6
/*! \brief Preprocessor variable to relate field to bit position in structure crIfWrAckdAddr in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfWrAckdAddr u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure crIfWrAckdAddr in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfWrAckdAddr u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure crIfRdStartAddr in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfRdStartAddr 8
/*! \brief Preprocessor variable to relate field to bit position in structure crIfRdStartAddr in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfRdStartAddr u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure crIfRdStartAddr in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfRdStartAddr u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure crIfRdData in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfRdData 9
/*! \brief Preprocessor variable to relate field to bit position in structure crIfRdData in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfRdData u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure crIfRdData in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfRdData u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure crIfRdAckdAddr in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfRdAckdAddr 10
/*! \brief Preprocessor variable to relate field to bit position in structure crIfRdAckdAddr in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfRdAckdAddr u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure crIfRdAckdAddr in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfRdAckdAddr u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure crIfRdBurstEnable in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfRdBurstEnable 11
/*! \brief Preprocessor variable to relate field to bit position in structure crIfRdBurstEnable in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfRdBurstEnable u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure crIfRdBurstEnable in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfRdBurstEnable u11.word_11
/*! \brief Preprocessor variable to relate field to word number in structure crIfInitDone in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfInitDone 12
/*! \brief Preprocessor variable to relate field to bit position in structure crIfInitDone in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfInitDone u12.bits_12
/*! \brief Preprocessor variable to relate field to word position in structure crIfInitDone in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfInitDone u12.word_12
/*! \brief Preprocessor variable to relate field to word number in structure crIfBusBusy in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crIfBusBusy 13
/*! \brief Preprocessor variable to relate field to bit position in structure crIfBusBusy in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crIfBusBusy u13.bits_13
/*! \brief Preprocessor variable to relate field to word position in structure crIfBusBusy in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crIfBusBusy u13.word_13
/*! \brief Preprocessor variable to relate field to word number in structure crBridgeErrorClear in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorClear 16
/*! \brief Preprocessor variable to relate field to bit position in structure crBridgeErrorClear in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorClear u16.bits_16
/*! \brief Preprocessor variable to relate field to word position in structure crBridgeErrorClear in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorClear u16.word_16
/*! \brief Preprocessor variable to relate field to word number in structure crBridgeErrorValid in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorValid 17
/*! \brief Preprocessor variable to relate field to bit position in structure crBridgeErrorValid in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorValid u17.bits_17
/*! \brief Preprocessor variable to relate field to word position in structure crBridgeErrorValid in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorValid u17.word_17
/*! \brief Preprocessor variable to relate field to word number in structure crBridgeErrorCode in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorCode 17
/*! \brief Preprocessor variable to relate field to bit position in structure crBridgeErrorCode in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorCode u17.bits_17
/*! \brief Preprocessor variable to relate field to word position in structure crBridgeErrorCode in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorCode u17.word_17
/*! \brief Preprocessor variable to relate field to word number in structure crBridgeErrorAddress in AQ_SerdesParallelControlRegister_RHEA */
#define AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorAddress 18
/*! \brief Preprocessor variable to relate field to bit position in structure crBridgeErrorAddress in AQ_SerdesParallelControlRegister_RHEA */
#define bits_AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorAddress u18.bits_18
/*! \brief Preprocessor variable to relate field to word position in structure crBridgeErrorAddress in AQ_SerdesParallelControlRegister_RHEA */
#define word_AQ_SerdesParallelControlRegister_RHEA_crBridgeErrorAddress u18.word_18

/*! \brief Base register address of structure AQ_GlobalControl_RHEA */
#define AQ_GlobalControl_RHEA_baseRegisterAddress 0xC000
/*! \brief MMD address of structure AQ_GlobalControl_RHEA */
#define AQ_GlobalControl_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure upReset in AQ_GlobalControl_RHEA */
#define AQ_GlobalControl_RHEA_upReset 1
/*! \brief Preprocessor variable to relate field to bit position in structure upReset in AQ_GlobalControl_RHEA */
#define bits_AQ_GlobalControl_RHEA_upReset u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure upReset in AQ_GlobalControl_RHEA */
#define word_AQ_GlobalControl_RHEA_upReset u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure upRunStallOverride in AQ_GlobalControl_RHEA */
#define AQ_GlobalControl_RHEA_upRunStallOverride 1
/*! \brief Preprocessor variable to relate field to bit position in structure upRunStallOverride in AQ_GlobalControl_RHEA */
#define bits_AQ_GlobalControl_RHEA_upRunStallOverride u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure upRunStallOverride in AQ_GlobalControl_RHEA */
#define word_AQ_GlobalControl_RHEA_upRunStallOverride u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure upRunStall in AQ_GlobalControl_RHEA */
#define AQ_GlobalControl_RHEA_upRunStall 1
/*! \brief Preprocessor variable to relate field to bit position in structure upRunStall in AQ_GlobalControl_RHEA */
#define bits_AQ_GlobalControl_RHEA_upRunStall u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure upRunStall in AQ_GlobalControl_RHEA */
#define word_AQ_GlobalControl_RHEA_upRunStall u1.word_1

/*! \brief Base register address of structure AQ_GlobalResetControl_RHEA */
#define AQ_GlobalResetControl_RHEA_baseRegisterAddress 0xC006
/*! \brief MMD address of structure AQ_GlobalResetControl_RHEA */
#define AQ_GlobalResetControl_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure globalMMD_ResetDisable in AQ_GlobalResetControl_RHEA */
#define AQ_GlobalResetControl_RHEA_globalMMD_ResetDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure globalMMD_ResetDisable in AQ_GlobalResetControl_RHEA */
#define bits_AQ_GlobalResetControl_RHEA_globalMMD_ResetDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure globalMMD_ResetDisable in AQ_GlobalResetControl_RHEA */
#define word_AQ_GlobalResetControl_RHEA_globalMMD_ResetDisable u0.word_0

/*! \brief Base register address of structure AQ_GlobalDiagnosticProvisioning_RHEA */
#define AQ_GlobalDiagnosticProvisioning_RHEA_baseRegisterAddress 0xC400
/*! \brief MMD address of structure AQ_GlobalDiagnosticProvisioning_RHEA */
#define AQ_GlobalDiagnosticProvisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure enableDiagnostics in AQ_GlobalDiagnosticProvisioning_RHEA */
#define AQ_GlobalDiagnosticProvisioning_RHEA_enableDiagnostics 0
/*! \brief Preprocessor variable to relate field to bit position in structure enableDiagnostics in AQ_GlobalDiagnosticProvisioning_RHEA */
#define bits_AQ_GlobalDiagnosticProvisioning_RHEA_enableDiagnostics u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure enableDiagnostics in AQ_GlobalDiagnosticProvisioning_RHEA */
#define word_AQ_GlobalDiagnosticProvisioning_RHEA_enableDiagnostics u0.word_0

/*! \brief Base register address of structure AQ_GlobalThermalProvisioning_RHEA */
#define AQ_GlobalThermalProvisioning_RHEA_baseRegisterAddress 0xC420
/*! \brief MMD address of structure AQ_GlobalThermalProvisioning_RHEA */
#define AQ_GlobalThermalProvisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reserved_0 in AQ_GlobalThermalProvisioning_RHEA */
#define AQ_GlobalThermalProvisioning_RHEA_reserved_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_0 in AQ_GlobalThermalProvisioning_RHEA */
#define bits_AQ_GlobalThermalProvisioning_RHEA_reserved_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved_0 in AQ_GlobalThermalProvisioning_RHEA */
#define word_AQ_GlobalThermalProvisioning_RHEA_reserved_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure highTempFailureThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define AQ_GlobalThermalProvisioning_RHEA_highTempFailureThreshold 1
/*! \brief Preprocessor variable to relate field to bit position in structure highTempFailureThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define bits_AQ_GlobalThermalProvisioning_RHEA_highTempFailureThreshold u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure highTempFailureThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define word_AQ_GlobalThermalProvisioning_RHEA_highTempFailureThreshold u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure lowTempFailureThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define AQ_GlobalThermalProvisioning_RHEA_lowTempFailureThreshold 2
/*! \brief Preprocessor variable to relate field to bit position in structure lowTempFailureThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define bits_AQ_GlobalThermalProvisioning_RHEA_lowTempFailureThreshold u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure lowTempFailureThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define word_AQ_GlobalThermalProvisioning_RHEA_lowTempFailureThreshold u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure highTempWarningThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define AQ_GlobalThermalProvisioning_RHEA_highTempWarningThreshold 3
/*! \brief Preprocessor variable to relate field to bit position in structure highTempWarningThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define bits_AQ_GlobalThermalProvisioning_RHEA_highTempWarningThreshold u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure highTempWarningThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define word_AQ_GlobalThermalProvisioning_RHEA_highTempWarningThreshold u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure lowTempWarningThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define AQ_GlobalThermalProvisioning_RHEA_lowTempWarningThreshold 4
/*! \brief Preprocessor variable to relate field to bit position in structure lowTempWarningThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define bits_AQ_GlobalThermalProvisioning_RHEA_lowTempWarningThreshold u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure lowTempWarningThreshold in AQ_GlobalThermalProvisioning_RHEA */
#define word_AQ_GlobalThermalProvisioning_RHEA_lowTempWarningThreshold u4.word_4

/*! \brief Base register address of structure AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_baseRegisterAddress 0xC425
/*! \brief MMD address of structure AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure ledTimerOnDuration_0 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledTimerOnDuration_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure ledTimerOnDuration_0 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledTimerOnDuration_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ledTimerOnDuration_0 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledTimerOnDuration_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ledTimerOffDuration_0 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledTimerOffDuration_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure ledTimerOffDuration_0 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledTimerOffDuration_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ledTimerOffDuration_0 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledTimerOffDuration_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ledTimerOnDuration_1 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledTimerOnDuration_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure ledTimerOnDuration_1 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledTimerOnDuration_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure ledTimerOnDuration_1 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledTimerOnDuration_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure ledTimerOffDuration_1 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledTimerOffDuration_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure ledTimerOffDuration_1 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledTimerOffDuration_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure ledTimerOffDuration_1 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledTimerOffDuration_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityPeriod in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityPeriod 2
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityPeriod in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityPeriod u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityPeriod in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityPeriod u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2Mode in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_led_2Mode 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2Mode in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_led_2Mode u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2Mode in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_led_2Mode u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityMode in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityMode 2
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityMode in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityMode u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityMode in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityMode u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_1Mode in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_led_1Mode 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_1Mode in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_led_1Mode u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_1Mode in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_led_1Mode u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_0Mode in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_led_0Mode 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_0Mode in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_led_0Mode u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_0Mode in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_led_0Mode u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_0 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_0 3
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_0 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_0 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_0 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_0 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_1 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_1 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_1 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_2 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_2 4
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_2 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_2 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_2 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_2 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_3 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_3 4
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_3 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_3 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_3 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_3 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_4 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_4 5
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_4 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_4 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_4 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_4 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_5 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_5 5
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_5 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_5 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_5 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_5 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_6 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_6 6
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_6 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_6 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_6 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_6 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_7 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_7 6
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_7 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_7 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_7 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_7 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_8 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_8 7
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_8 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_8 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_8 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_8 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_9 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_9 7
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_9 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_9 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_9 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_9 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_10 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_10 8
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_10 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_10 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_10 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_10 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_11 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_11 8
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_11 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_11 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_11 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_11 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_12 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_12 9
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_12 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_12 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_12 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_12 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_13 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_13 9
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_13 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_13 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_13 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_13 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ledLinkActivityLut_14 in AQ_CiscoLedProvisioning_RHEA */
#define AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_14 10
/*! \brief Preprocessor variable to relate field to bit position in structure ledLinkActivityLut_14 in AQ_CiscoLedProvisioning_RHEA */
#define bits_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_14 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure ledLinkActivityLut_14 in AQ_CiscoLedProvisioning_RHEA */
#define word_AQ_CiscoLedProvisioning_RHEA_ledLinkActivityLut_14 u10.word_10

/*! \brief Base register address of structure AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_baseRegisterAddress 0xC430
/*! \brief MMD address of structure AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure led_0_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0_5Gb_sLinkEstablished 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0_5Gb_sLinkEstablished u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0_5Gb_sLinkEstablished u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0_2_5Gb_sLinkEstablished 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0_2_5Gb_sLinkEstablished u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0_2_5Gb_sLinkEstablished u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0_10Mb_sLinkEstablished 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0_10Mb_sLinkEstablished u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0_10Mb_sLinkEstablished u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioningC430 in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC430 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioningC430 in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC430 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioningC430 in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC430 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0ManualSet 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0ManualSet u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0ManualSet u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0_10Gb_sLinkEstablished 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0_10Gb_sLinkEstablished u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0_10Gb_sLinkEstablished u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0_1Gb_sLinkEstablished 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0_1Gb_sLinkEstablished u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0_1Gb_sLinkEstablished u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0_100Mb_sLinkEstablished 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0_100Mb_sLinkEstablished u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0_100Mb_sLinkEstablished u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0Connecting in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0Connecting 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0Connecting in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0Connecting u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0Connecting in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0Connecting u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0ReceiveActivity 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0ReceiveActivity u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0ReceiveActivity u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0TransmitActivity 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0TransmitActivity u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0TransmitActivity u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_0ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_0ActivityStretch 0
/*! \brief Preprocessor variable to relate field to bit position in structure led_0ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_0ActivityStretch u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure led_0ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_0ActivityStretch u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure led_1_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1_5Gb_sLinkEstablished 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1_5Gb_sLinkEstablished u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1_5Gb_sLinkEstablished u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1_2_5Gb_sLinkEstablished 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1_2_5Gb_sLinkEstablished u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1_2_5Gb_sLinkEstablished u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1_10Mb_sLinkEstablished 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1_10Mb_sLinkEstablished u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1_10Mb_sLinkEstablished u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioningC431 in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC431 1
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioningC431 in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC431 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioningC431 in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC431 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1ManualSet 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1ManualSet u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1ManualSet u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1_10Gb_sLinkEstablished 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1_10Gb_sLinkEstablished u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1_10Gb_sLinkEstablished u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1_1Gb_sLinkEstablished 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1_1Gb_sLinkEstablished u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1_1Gb_sLinkEstablished u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1_100Mb_sLinkEstablished 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1_100Mb_sLinkEstablished u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1_100Mb_sLinkEstablished u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1Connecting in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1Connecting 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1Connecting in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1Connecting u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1Connecting in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1Connecting u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1ReceiveActivity 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1ReceiveActivity u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1ReceiveActivity u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1TransmitActivity 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1TransmitActivity u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1TransmitActivity u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_1ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_1ActivityStretch 1
/*! \brief Preprocessor variable to relate field to bit position in structure led_1ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_1ActivityStretch u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure led_1ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_1ActivityStretch u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure led_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2_5Gb_sLinkEstablished 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2_5Gb_sLinkEstablished u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2_5Gb_sLinkEstablished u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2_2_5Gb_sLinkEstablished 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2_2_5Gb_sLinkEstablished u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2_2_5Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2_2_5Gb_sLinkEstablished u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2_10Mb_sLinkEstablished 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2_10Mb_sLinkEstablished u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2_10Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2_10Mb_sLinkEstablished u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioningC432 in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC432 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioningC432 in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC432 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioningC432 in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_reservedProvisioningC432 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2ManualSet 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2ManualSet u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2ManualSet in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2ManualSet u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2_10Gb_sLinkEstablished 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2_10Gb_sLinkEstablished u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2_10Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2_10Gb_sLinkEstablished u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2_1Gb_sLinkEstablished 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2_1Gb_sLinkEstablished u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2_1Gb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2_1Gb_sLinkEstablished u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2_100Mb_sLinkEstablished 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2_100Mb_sLinkEstablished u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2_100Mb_sLinkEstablished in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2_100Mb_sLinkEstablished u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2Connecting in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2Connecting 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2Connecting in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2Connecting u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2Connecting in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2Connecting u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2ReceiveActivity 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2ReceiveActivity u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2ReceiveActivity in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2ReceiveActivity u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2TransmitActivity 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2TransmitActivity u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2TransmitActivity in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2TransmitActivity u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure led_2ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_led_2ActivityStretch 2
/*! \brief Preprocessor variable to relate field to bit position in structure led_2ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_led_2ActivityStretch u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure led_2ActivityStretch in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_led_2ActivityStretch u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure ledOperationMode_1 in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_ledOperationMode_1 7
/*! \brief Preprocessor variable to relate field to bit position in structure ledOperationMode_1 in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_ledOperationMode_1 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure ledOperationMode_1 in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_ledOperationMode_1 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure ledOperationMode_0 in AQ_GlobalLedProvisioning_RHEA */
#define AQ_GlobalLedProvisioning_RHEA_ledOperationMode_0 7
/*! \brief Preprocessor variable to relate field to bit position in structure ledOperationMode_0 in AQ_GlobalLedProvisioning_RHEA */
#define bits_AQ_GlobalLedProvisioning_RHEA_ledOperationMode_0 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure ledOperationMode_0 in AQ_GlobalLedProvisioning_RHEA */
#define word_AQ_GlobalLedProvisioning_RHEA_ledOperationMode_0 u7.word_7

/*! \brief Base register address of structure AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_baseRegisterAddress 0xC440
/*! \brief MMD address of structure AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure mdioBroadcastModeEnable in AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_mdioBroadcastModeEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure mdioBroadcastModeEnable in AQ_GlobalGeneralProvisioning_RHEA */
#define bits_AQ_GlobalGeneralProvisioning_RHEA_mdioBroadcastModeEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mdioBroadcastModeEnable in AQ_GlobalGeneralProvisioning_RHEA */
#define word_AQ_GlobalGeneralProvisioning_RHEA_mdioBroadcastModeEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mdioReadMSW_FirstEnable in AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_mdioReadMSW_FirstEnable 1
/*! \brief Preprocessor variable to relate field to bit position in structure mdioReadMSW_FirstEnable in AQ_GlobalGeneralProvisioning_RHEA */
#define bits_AQ_GlobalGeneralProvisioning_RHEA_mdioReadMSW_FirstEnable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mdioReadMSW_FirstEnable in AQ_GlobalGeneralProvisioning_RHEA */
#define word_AQ_GlobalGeneralProvisioning_RHEA_mdioReadMSW_FirstEnable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mdioDriveConfiguration in AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_mdioDriveConfiguration 1
/*! \brief Preprocessor variable to relate field to bit position in structure mdioDriveConfiguration in AQ_GlobalGeneralProvisioning_RHEA */
#define bits_AQ_GlobalGeneralProvisioning_RHEA_mdioDriveConfiguration u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mdioDriveConfiguration in AQ_GlobalGeneralProvisioning_RHEA */
#define word_AQ_GlobalGeneralProvisioning_RHEA_mdioDriveConfiguration u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mdioPreambleDetectionDisable in AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_mdioPreambleDetectionDisable 1
/*! \brief Preprocessor variable to relate field to bit position in structure mdioPreambleDetectionDisable in AQ_GlobalGeneralProvisioning_RHEA */
#define bits_AQ_GlobalGeneralProvisioning_RHEA_mdioPreambleDetectionDisable u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mdioPreambleDetectionDisable in AQ_GlobalGeneralProvisioning_RHEA */
#define word_AQ_GlobalGeneralProvisioning_RHEA_mdioPreambleDetectionDisable u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure daisyChainReset in AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_daisyChainReset 2
/*! \brief Preprocessor variable to relate field to bit position in structure daisyChainReset in AQ_GlobalGeneralProvisioning_RHEA */
#define bits_AQ_GlobalGeneralProvisioning_RHEA_daisyChainReset u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure daisyChainReset in AQ_GlobalGeneralProvisioning_RHEA */
#define word_AQ_GlobalGeneralProvisioning_RHEA_daisyChainReset u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mdioBroadcastAddressConfiguration in AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_mdioBroadcastAddressConfiguration 7
/*! \brief Preprocessor variable to relate field to bit position in structure mdioBroadcastAddressConfiguration in AQ_GlobalGeneralProvisioning_RHEA */
#define bits_AQ_GlobalGeneralProvisioning_RHEA_mdioBroadcastAddressConfiguration u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure mdioBroadcastAddressConfiguration in AQ_GlobalGeneralProvisioning_RHEA */
#define word_AQ_GlobalGeneralProvisioning_RHEA_mdioBroadcastAddressConfiguration u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure mdioPreambleLength in AQ_GlobalGeneralProvisioning_RHEA */
#define AQ_GlobalGeneralProvisioning_RHEA_mdioPreambleLength 9
/*! \brief Preprocessor variable to relate field to bit position in structure mdioPreambleLength in AQ_GlobalGeneralProvisioning_RHEA */
#define bits_AQ_GlobalGeneralProvisioning_RHEA_mdioPreambleLength u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure mdioPreambleLength in AQ_GlobalGeneralProvisioning_RHEA */
#define word_AQ_GlobalGeneralProvisioning_RHEA_mdioPreambleLength u9.word_9

/*! \brief Base register address of structure AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_baseRegisterAddress 0xC450
/*! \brief MMD address of structure AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure nvrDataLength in AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_nvrDataLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDataLength in AQ_GlobalNvrProvisioning_RHEA */
#define bits_AQ_GlobalNvrProvisioning_RHEA_nvrDataLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrDataLength in AQ_GlobalNvrProvisioning_RHEA */
#define word_AQ_GlobalNvrProvisioning_RHEA_nvrDataLength u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrDummyLength in AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_nvrDummyLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDummyLength in AQ_GlobalNvrProvisioning_RHEA */
#define bits_AQ_GlobalNvrProvisioning_RHEA_nvrDummyLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrDummyLength in AQ_GlobalNvrProvisioning_RHEA */
#define word_AQ_GlobalNvrProvisioning_RHEA_nvrDummyLength u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrAddressLength in AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_nvrAddressLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrAddressLength in AQ_GlobalNvrProvisioning_RHEA */
#define bits_AQ_GlobalNvrProvisioning_RHEA_nvrAddressLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrAddressLength in AQ_GlobalNvrProvisioning_RHEA */
#define word_AQ_GlobalNvrProvisioning_RHEA_nvrAddressLength u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrAddressLengthOverride in AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_nvrAddressLengthOverride 1
/*! \brief Preprocessor variable to relate field to bit position in structure nvrAddressLengthOverride in AQ_GlobalNvrProvisioning_RHEA */
#define bits_AQ_GlobalNvrProvisioning_RHEA_nvrAddressLengthOverride u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure nvrAddressLengthOverride in AQ_GlobalNvrProvisioning_RHEA */
#define word_AQ_GlobalNvrProvisioning_RHEA_nvrAddressLengthOverride u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure nvrClockDivide in AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_nvrClockDivide 1
/*! \brief Preprocessor variable to relate field to bit position in structure nvrClockDivide in AQ_GlobalNvrProvisioning_RHEA */
#define bits_AQ_GlobalNvrProvisioning_RHEA_nvrClockDivide u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure nvrClockDivide in AQ_GlobalNvrProvisioning_RHEA */
#define word_AQ_GlobalNvrProvisioning_RHEA_nvrClockDivide u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure nvrDaisyChainClockDivideOverride in AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_nvrDaisyChainClockDivideOverride 2
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDaisyChainClockDivideOverride in AQ_GlobalNvrProvisioning_RHEA */
#define bits_AQ_GlobalNvrProvisioning_RHEA_nvrDaisyChainClockDivideOverride u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure nvrDaisyChainClockDivideOverride in AQ_GlobalNvrProvisioning_RHEA */
#define word_AQ_GlobalNvrProvisioning_RHEA_nvrDaisyChainClockDivideOverride u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure nvrDaisyChainDisable in AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_nvrDaisyChainDisable 2
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDaisyChainDisable in AQ_GlobalNvrProvisioning_RHEA */
#define bits_AQ_GlobalNvrProvisioning_RHEA_nvrDaisyChainDisable u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure nvrDaisyChainDisable in AQ_GlobalNvrProvisioning_RHEA */
#define word_AQ_GlobalNvrProvisioning_RHEA_nvrDaisyChainDisable u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure nvrReset in AQ_GlobalNvrProvisioning_RHEA */
#define AQ_GlobalNvrProvisioning_RHEA_nvrReset 3
/*! \brief Preprocessor variable to relate field to bit position in structure nvrReset in AQ_GlobalNvrProvisioning_RHEA */
#define bits_AQ_GlobalNvrProvisioning_RHEA_nvrReset u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure nvrReset in AQ_GlobalNvrProvisioning_RHEA */
#define word_AQ_GlobalNvrProvisioning_RHEA_nvrReset u3.word_3

/*! \brief Base register address of structure AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_baseRegisterAddress 0xC470
/*! \brief MMD address of structure AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure diagnosticsSelect in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_diagnosticsSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure diagnosticsSelect in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_diagnosticsSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure diagnosticsSelect in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_diagnosticsSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure extendedMdiDiagnosticsSelect in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_extendedMdiDiagnosticsSelect 0
/*! \brief Preprocessor variable to relate field to bit position in structure extendedMdiDiagnosticsSelect in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_extendedMdiDiagnosticsSelect u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure extendedMdiDiagnosticsSelect in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_extendedMdiDiagnosticsSelect u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure triggerDiagnosticInterrupt in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_triggerDiagnosticInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure triggerDiagnosticInterrupt in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_triggerDiagnosticInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure triggerDiagnosticInterrupt in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_triggerDiagnosticInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure initiateCableDiagnostics in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_initiateCableDiagnostics 0
/*! \brief Preprocessor variable to relate field to bit position in structure initiateCableDiagnostics in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_initiateCableDiagnostics u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure initiateCableDiagnostics in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_initiateCableDiagnostics u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_1 in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_1 in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_1 in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure cableDiagnosticBaudRate in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cableDiagnosticBaudRate 0
/*! \brief Preprocessor variable to relate field to bit position in structure cableDiagnosticBaudRate in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cableDiagnosticBaudRate u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure cableDiagnosticBaudRate in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cableDiagnosticBaudRate u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure enableDaisy_chainHop_countOverride in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_enableDaisy_chainHop_countOverride 1
/*! \brief Preprocessor variable to relate field to bit position in structure enableDaisy_chainHop_countOverride in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_enableDaisy_chainHop_countOverride u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure enableDaisy_chainHop_countOverride in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_enableDaisy_chainHop_countOverride u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure daisy_chainHop_countOverrideValue in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_daisy_chainHop_countOverrideValue 1
/*! \brief Preprocessor variable to relate field to bit position in structure daisy_chainHop_countOverrideValue in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_daisy_chainHop_countOverrideValue u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure daisy_chainHop_countOverrideValue in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_daisy_chainHop_countOverrideValue u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure enableVddPowerSupplyTuning in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_enableVddPowerSupplyTuning 2
/*! \brief Preprocessor variable to relate field to bit position in structure enableVddPowerSupplyTuning in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_enableVddPowerSupplyTuning u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure enableVddPowerSupplyTuning in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_enableVddPowerSupplyTuning u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure phyResetType in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_phyResetType 2
/*! \brief Preprocessor variable to relate field to bit position in structure phyResetType in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_phyResetType u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure phyResetType in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_phyResetType u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure tunableExternalVddPowerSupplyPresent in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_tunableExternalVddPowerSupplyPresent 2
/*! \brief Preprocessor variable to relate field to bit position in structure tunableExternalVddPowerSupplyPresent in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_tunableExternalVddPowerSupplyPresent u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure tunableExternalVddPowerSupplyPresent in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_tunableExternalVddPowerSupplyPresent u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure externalVddChangeRequest in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_externalVddChangeRequest 2
/*! \brief Preprocessor variable to relate field to bit position in structure externalVddChangeRequest in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_externalVddChangeRequest u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure externalVddChangeRequest in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_externalVddChangeRequest u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure enableXenpakRegisterSpace in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_enableXenpakRegisterSpace 2
/*! \brief Preprocessor variable to relate field to bit position in structure enableXenpakRegisterSpace in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_enableXenpakRegisterSpace u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure enableXenpakRegisterSpace in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_enableXenpakRegisterSpace u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure enable_5thChannelRfiCancellation in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_enable_5thChannelRfiCancellation 2
/*! \brief Preprocessor variable to relate field to bit position in structure enable_5thChannelRfiCancellation in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_enable_5thChannelRfiCancellation u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure enable_5thChannelRfiCancellation in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_enable_5thChannelRfiCancellation u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure rateTransitionRequest in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_rateTransitionRequest 3
/*! \brief Preprocessor variable to relate field to bit position in structure rateTransitionRequest in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_rateTransitionRequest u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure rateTransitionRequest in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_rateTransitionRequest u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure trainingSNR in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_trainingSNR 3
/*! \brief Preprocessor variable to relate field to bit position in structure trainingSNR in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_trainingSNR u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure trainingSNR in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_trainingSNR u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_5 in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_5 4
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_5 in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_5 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_5 in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_5 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure nvrDaisyChainKickstart in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_nvrDaisyChainKickstart 4
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDaisyChainKickstart in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_nvrDaisyChainKickstart u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure nvrDaisyChainKickstart in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_nvrDaisyChainKickstart u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure smartPower_downStatus in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_smartPower_downStatus 5
/*! \brief Preprocessor variable to relate field to bit position in structure smartPower_downStatus in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_smartPower_downStatus u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure smartPower_downStatus in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_smartPower_downStatus u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_6 in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_6 5
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_6 in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_6 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_6 in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_6 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cfrLpDisableTimer in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cfrLpDisableTimer 5
/*! \brief Preprocessor variable to relate field to bit position in structure cfrLpDisableTimer in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cfrLpDisableTimer u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cfrLpDisableTimer in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cfrLpDisableTimer u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cfrLpExtendedMaxwait in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cfrLpExtendedMaxwait 5
/*! \brief Preprocessor variable to relate field to bit position in structure cfrLpExtendedMaxwait in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cfrLpExtendedMaxwait u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cfrLpExtendedMaxwait in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cfrLpExtendedMaxwait u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cfrLpTHP in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cfrLpTHP 5
/*! \brief Preprocessor variable to relate field to bit position in structure cfrLpTHP in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cfrLpTHP u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cfrLpTHP in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cfrLpTHP u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cfrLpSupport in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cfrLpSupport 5
/*! \brief Preprocessor variable to relate field to bit position in structure cfrLpSupport in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cfrLpSupport u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cfrLpSupport in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cfrLpSupport u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cfrDisableTimer in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cfrDisableTimer 5
/*! \brief Preprocessor variable to relate field to bit position in structure cfrDisableTimer in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cfrDisableTimer u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cfrDisableTimer in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cfrDisableTimer u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cfrExtendedMaxwait in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cfrExtendedMaxwait 5
/*! \brief Preprocessor variable to relate field to bit position in structure cfrExtendedMaxwait in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cfrExtendedMaxwait u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cfrExtendedMaxwait in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cfrExtendedMaxwait u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cfrTHP in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cfrTHP 5
/*! \brief Preprocessor variable to relate field to bit position in structure cfrTHP in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cfrTHP u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cfrTHP in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cfrTHP u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure cfrSupport in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_cfrSupport 5
/*! \brief Preprocessor variable to relate field to bit position in structure cfrSupport in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_cfrSupport u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure cfrSupport in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_cfrSupport u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure deadlockAvoidanceEnable in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_deadlockAvoidanceEnable 5
/*! \brief Preprocessor variable to relate field to bit position in structure deadlockAvoidanceEnable in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_deadlockAvoidanceEnable u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure deadlockAvoidanceEnable in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_deadlockAvoidanceEnable u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure smartPower_downEnable in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_smartPower_downEnable 5
/*! \brief Preprocessor variable to relate field to bit position in structure smartPower_downEnable in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_smartPower_downEnable u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure smartPower_downEnable in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_smartPower_downEnable u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure dteEnable in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_dteEnable 8
/*! \brief Preprocessor variable to relate field to bit position in structure dteEnable in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_dteEnable u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure dteEnable in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_dteEnable u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure dteDropReportingTimer in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_dteDropReportingTimer 8
/*! \brief Preprocessor variable to relate field to bit position in structure dteDropReportingTimer in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_dteDropReportingTimer u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure dteDropReportingTimer in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_dteDropReportingTimer u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure thermalShutdownEnable in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_thermalShutdownEnable 8
/*! \brief Preprocessor variable to relate field to bit position in structure thermalShutdownEnable in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_thermalShutdownEnable u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure thermalShutdownEnable in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_thermalShutdownEnable u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure sfp_ddmiEnable in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_sfp_ddmiEnable 8
/*! \brief Preprocessor variable to relate field to bit position in structure sfp_ddmiEnable in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_sfp_ddmiEnable u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure sfp_ddmiEnable in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_sfp_ddmiEnable u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure lowPowerLinkupMode in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_lowPowerLinkupMode 8
/*! \brief Preprocessor variable to relate field to bit position in structure lowPowerLinkupMode in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_lowPowerLinkupMode u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure lowPowerLinkupMode in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_lowPowerLinkupMode u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure lplu10G_Disable in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_lplu10G_Disable 8
/*! \brief Preprocessor variable to relate field to bit position in structure lplu10G_Disable in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_lplu10G_Disable u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure lplu10G_Disable in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_lplu10G_Disable u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_9 in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_9 8
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_9 in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_9 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_9 in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_9 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure powerUpStall in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_powerUpStall 9
/*! \brief Preprocessor variable to relate field to bit position in structure powerUpStall in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_powerUpStall u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure powerUpStall in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_powerUpStall u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_10 in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_10 9
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_10 in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_10 u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_10 in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_10 u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure ciscoLedModes in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_ciscoLedModes 9
/*! \brief Preprocessor variable to relate field to bit position in structure ciscoLedModes in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_ciscoLedModes u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure ciscoLedModes in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_ciscoLedModes u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure loopbackControl in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_loopbackControl 10
/*! \brief Preprocessor variable to relate field to bit position in structure loopbackControl in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_loopbackControl u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure loopbackControl in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_loopbackControl u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_11 in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_11 10
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_11 in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_11 u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_11 in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_11 u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure mdiPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_mdiPacketGeneration 10
/*! \brief Preprocessor variable to relate field to bit position in structure mdiPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_mdiPacketGeneration u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure mdiPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_mdiPacketGeneration u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure look_asidePortPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_look_asidePortPacketGeneration 10
/*! \brief Preprocessor variable to relate field to bit position in structure look_asidePortPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_look_asidePortPacketGeneration u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure look_asidePortPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_look_asidePortPacketGeneration u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure systemI_fPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_systemI_fPacketGeneration 10
/*! \brief Preprocessor variable to relate field to bit position in structure systemI_fPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_systemI_fPacketGeneration u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure systemI_fPacketGeneration in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_systemI_fPacketGeneration u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure rate in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_rate 10
/*! \brief Preprocessor variable to relate field to bit position in structure rate in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_rate u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure rate in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_rate u10.word_10
/*! \brief Preprocessor variable to relate field to word number in structure reservedProvisioning_12 in AQ_GlobalReservedProvisioning_RHEA */
#define AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_12 11
/*! \brief Preprocessor variable to relate field to bit position in structure reservedProvisioning_12 in AQ_GlobalReservedProvisioning_RHEA */
#define bits_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_12 u11.bits_11
/*! \brief Preprocessor variable to relate field to word position in structure reservedProvisioning_12 in AQ_GlobalReservedProvisioning_RHEA */
#define word_AQ_GlobalReservedProvisioning_RHEA_reservedProvisioning_12 u11.word_11

/*! \brief Base register address of structure AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_baseRegisterAddress 0xC47C
/*! \brief MMD address of structure AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure pifMailboxAddress in AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_pifMailboxAddress 0
/*! \brief Preprocessor variable to relate field to bit position in structure pifMailboxAddress in AQ_PifMailboxControl_RHEA */
#define bits_AQ_PifMailboxControl_RHEA_pifMailboxAddress u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pifMailboxAddress in AQ_PifMailboxControl_RHEA */
#define word_AQ_PifMailboxControl_RHEA_pifMailboxAddress u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pifMailboxData in AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_pifMailboxData 1
/*! \brief Preprocessor variable to relate field to bit position in structure pifMailboxData in AQ_PifMailboxControl_RHEA */
#define bits_AQ_PifMailboxControl_RHEA_pifMailboxData u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pifMailboxData in AQ_PifMailboxControl_RHEA */
#define word_AQ_PifMailboxControl_RHEA_pifMailboxData u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reservedPifMailboxControl_3 in AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_reservedPifMailboxControl_3 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPifMailboxControl_3 in AQ_PifMailboxControl_RHEA */
#define bits_AQ_PifMailboxControl_RHEA_reservedPifMailboxControl_3 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedPifMailboxControl_3 in AQ_PifMailboxControl_RHEA */
#define word_AQ_PifMailboxControl_RHEA_reservedPifMailboxControl_3 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure serviceSecondRegister in AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_serviceSecondRegister 2
/*! \brief Preprocessor variable to relate field to bit position in structure serviceSecondRegister in AQ_PifMailboxControl_RHEA */
#define bits_AQ_PifMailboxControl_RHEA_serviceSecondRegister u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure serviceSecondRegister in AQ_PifMailboxControl_RHEA */
#define word_AQ_PifMailboxControl_RHEA_serviceSecondRegister u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pifMailboxCommandType in AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_pifMailboxCommandType 2
/*! \brief Preprocessor variable to relate field to bit position in structure pifMailboxCommandType in AQ_PifMailboxControl_RHEA */
#define bits_AQ_PifMailboxControl_RHEA_pifMailboxCommandType u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure pifMailboxCommandType in AQ_PifMailboxControl_RHEA */
#define word_AQ_PifMailboxControl_RHEA_pifMailboxCommandType u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pifMailboxMMD in AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_pifMailboxMMD 2
/*! \brief Preprocessor variable to relate field to bit position in structure pifMailboxMMD in AQ_PifMailboxControl_RHEA */
#define bits_AQ_PifMailboxControl_RHEA_pifMailboxMMD u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure pifMailboxMMD in AQ_PifMailboxControl_RHEA */
#define word_AQ_PifMailboxControl_RHEA_pifMailboxMMD u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedPifMailboxControl_4 in AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_reservedPifMailboxControl_4 3
/*! \brief Preprocessor variable to relate field to bit position in structure reservedPifMailboxControl_4 in AQ_PifMailboxControl_RHEA */
#define bits_AQ_PifMailboxControl_RHEA_reservedPifMailboxControl_4 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reservedPifMailboxControl_4 in AQ_PifMailboxControl_RHEA */
#define word_AQ_PifMailboxControl_RHEA_reservedPifMailboxControl_4 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure pifMailboxCommandStatus in AQ_PifMailboxControl_RHEA */
#define AQ_PifMailboxControl_RHEA_pifMailboxCommandStatus 3
/*! \brief Preprocessor variable to relate field to bit position in structure pifMailboxCommandStatus in AQ_PifMailboxControl_RHEA */
#define bits_AQ_PifMailboxControl_RHEA_pifMailboxCommandStatus u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure pifMailboxCommandStatus in AQ_PifMailboxControl_RHEA */
#define word_AQ_PifMailboxControl_RHEA_pifMailboxCommandStatus u3.word_3

/*! \brief Base register address of structure AQ_GlobalSmbus_0Provisioning_RHEA */
#define AQ_GlobalSmbus_0Provisioning_RHEA_baseRegisterAddress 0xC487
/*! \brief MMD address of structure AQ_GlobalSmbus_0Provisioning_RHEA */
#define AQ_GlobalSmbus_0Provisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure smb_0SlaveDataMode in AQ_GlobalSmbus_0Provisioning_RHEA */
#define AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveDataMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure smb_0SlaveDataMode in AQ_GlobalSmbus_0Provisioning_RHEA */
#define bits_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveDataMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure smb_0SlaveDataMode in AQ_GlobalSmbus_0Provisioning_RHEA */
#define word_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveDataMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure smb_0SlaveDataBank in AQ_GlobalSmbus_0Provisioning_RHEA */
#define AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveDataBank 0
/*! \brief Preprocessor variable to relate field to bit position in structure smb_0SlaveDataBank in AQ_GlobalSmbus_0Provisioning_RHEA */
#define bits_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveDataBank u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure smb_0SlaveDataBank in AQ_GlobalSmbus_0Provisioning_RHEA */
#define word_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveDataBank u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure smb_0SlaveAddressIgnore in AQ_GlobalSmbus_0Provisioning_RHEA */
#define AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddressIgnore 0
/*! \brief Preprocessor variable to relate field to bit position in structure smb_0SlaveAddressIgnore in AQ_GlobalSmbus_0Provisioning_RHEA */
#define bits_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddressIgnore u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure smb_0SlaveAddressIgnore in AQ_GlobalSmbus_0Provisioning_RHEA */
#define word_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddressIgnore u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure smb_0SlaveAddress_2Enable in AQ_GlobalSmbus_0Provisioning_RHEA */
#define AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddress_2Enable 0
/*! \brief Preprocessor variable to relate field to bit position in structure smb_0SlaveAddress_2Enable in AQ_GlobalSmbus_0Provisioning_RHEA */
#define bits_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddress_2Enable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure smb_0SlaveAddress_2Enable in AQ_GlobalSmbus_0Provisioning_RHEA */
#define word_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddress_2Enable u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure smb_0SlaveAddress_2 in AQ_GlobalSmbus_0Provisioning_RHEA */
#define AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddress_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure smb_0SlaveAddress_2 in AQ_GlobalSmbus_0Provisioning_RHEA */
#define bits_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddress_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure smb_0SlaveAddress_2 in AQ_GlobalSmbus_0Provisioning_RHEA */
#define word_AQ_GlobalSmbus_0Provisioning_RHEA_smb_0SlaveAddress_2 u0.word_0

/*! \brief Base register address of structure AQ_GlobalSmbus_1Provisioning_RHEA */
#define AQ_GlobalSmbus_1Provisioning_RHEA_baseRegisterAddress 0xC495
/*! \brief MMD address of structure AQ_GlobalSmbus_1Provisioning_RHEA */
#define AQ_GlobalSmbus_1Provisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure smb_1SlaveAddress in AQ_GlobalSmbus_1Provisioning_RHEA */
#define AQ_GlobalSmbus_1Provisioning_RHEA_smb_1SlaveAddress 0
/*! \brief Preprocessor variable to relate field to bit position in structure smb_1SlaveAddress in AQ_GlobalSmbus_1Provisioning_RHEA */
#define bits_AQ_GlobalSmbus_1Provisioning_RHEA_smb_1SlaveAddress u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure smb_1SlaveAddress in AQ_GlobalSmbus_1Provisioning_RHEA */
#define word_AQ_GlobalSmbus_1Provisioning_RHEA_smb_1SlaveAddress u0.word_0

/*! \brief Base register address of structure AQ_GlobalEeeProvisioning_RHEA */
#define AQ_GlobalEeeProvisioning_RHEA_baseRegisterAddress 0xC4A0
/*! \brief MMD address of structure AQ_GlobalEeeProvisioning_RHEA */
#define AQ_GlobalEeeProvisioning_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure eeeMode in AQ_GlobalEeeProvisioning_RHEA */
#define AQ_GlobalEeeProvisioning_RHEA_eeeMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure eeeMode in AQ_GlobalEeeProvisioning_RHEA */
#define bits_AQ_GlobalEeeProvisioning_RHEA_eeeMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure eeeMode in AQ_GlobalEeeProvisioning_RHEA */
#define word_AQ_GlobalEeeProvisioning_RHEA_eeeMode u0.word_0

/*! \brief Base register address of structure AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_baseRegisterAddress 0xC800
/*! \brief MMD address of structure AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure pairAStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairAStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairAStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairAStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairAStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairAStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pairBStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairBStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairBStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairBStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairBStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairBStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pairCStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairCStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairCStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairCStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairCStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairCStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pairDStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairDStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairDStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairDStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairDStatus in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairDStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pairAReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairAReflection_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure pairAReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairAReflection_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pairAReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairAReflection_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure pairAReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairAReflection_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure pairAReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairAReflection_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pairAReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairAReflection_2 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure impulseResponseMSW in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_impulseResponseMSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure impulseResponseMSW in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_impulseResponseMSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure impulseResponseMSW in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_impulseResponseMSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pairBReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairBReflection_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure pairBReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairBReflection_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure pairBReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairBReflection_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure pairBReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairBReflection_2 3
/*! \brief Preprocessor variable to relate field to bit position in structure pairBReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairBReflection_2 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure pairBReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairBReflection_2 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure impulseResponseLSW in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_impulseResponseLSW 4
/*! \brief Preprocessor variable to relate field to bit position in structure impulseResponseLSW in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_impulseResponseLSW u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure impulseResponseLSW in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_impulseResponseLSW u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure pairCReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairCReflection_1 5
/*! \brief Preprocessor variable to relate field to bit position in structure pairCReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairCReflection_1 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure pairCReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairCReflection_1 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure pairCReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairCReflection_2 5
/*! \brief Preprocessor variable to relate field to bit position in structure pairCReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairCReflection_2 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure pairCReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairCReflection_2 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure pairBLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairBLength 6
/*! \brief Preprocessor variable to relate field to bit position in structure pairBLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairBLength u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure pairBLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairBLength u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure pairALength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairALength 6
/*! \brief Preprocessor variable to relate field to bit position in structure pairALength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairALength u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure pairALength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairALength u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure pairDReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairDReflection_1 7
/*! \brief Preprocessor variable to relate field to bit position in structure pairDReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairDReflection_1 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure pairDReflection_1 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairDReflection_1 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure pairDReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairDReflection_2 7
/*! \brief Preprocessor variable to relate field to bit position in structure pairDReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairDReflection_2 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure pairDReflection_2 in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairDReflection_2 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure pairDLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairDLength 8
/*! \brief Preprocessor variable to relate field to bit position in structure pairDLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairDLength u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure pairDLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairDLength u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure pairCLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define AQ_GlobalCableDiagnosticStatus_RHEA_pairCLength 8
/*! \brief Preprocessor variable to relate field to bit position in structure pairCLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define bits_AQ_GlobalCableDiagnosticStatus_RHEA_pairCLength u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure pairCLength in AQ_GlobalCableDiagnosticStatus_RHEA */
#define word_AQ_GlobalCableDiagnosticStatus_RHEA_pairCLength u8.word_8

/*! \brief Base register address of structure AQ_GlobalThermalStatus_RHEA */
#define AQ_GlobalThermalStatus_RHEA_baseRegisterAddress 0xC820
/*! \brief MMD address of structure AQ_GlobalThermalStatus_RHEA */
#define AQ_GlobalThermalStatus_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure temperature in AQ_GlobalThermalStatus_RHEA */
#define AQ_GlobalThermalStatus_RHEA_temperature 0
/*! \brief Preprocessor variable to relate field to bit position in structure temperature in AQ_GlobalThermalStatus_RHEA */
#define bits_AQ_GlobalThermalStatus_RHEA_temperature u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure temperature in AQ_GlobalThermalStatus_RHEA */
#define word_AQ_GlobalThermalStatus_RHEA_temperature u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure temperatureReady in AQ_GlobalThermalStatus_RHEA */
#define AQ_GlobalThermalStatus_RHEA_temperatureReady 1
/*! \brief Preprocessor variable to relate field to bit position in structure temperatureReady in AQ_GlobalThermalStatus_RHEA */
#define bits_AQ_GlobalThermalStatus_RHEA_temperatureReady u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure temperatureReady in AQ_GlobalThermalStatus_RHEA */
#define word_AQ_GlobalThermalStatus_RHEA_temperatureReady u1.word_1

/*! \brief Base register address of structure AQ_GlobalGeneralStatus_RHEA */
#define AQ_GlobalGeneralStatus_RHEA_baseRegisterAddress 0xC830
/*! \brief MMD address of structure AQ_GlobalGeneralStatus_RHEA */
#define AQ_GlobalGeneralStatus_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure highTemperatureFailureState in AQ_GlobalGeneralStatus_RHEA */
#define AQ_GlobalGeneralStatus_RHEA_highTemperatureFailureState 0
/*! \brief Preprocessor variable to relate field to bit position in structure highTemperatureFailureState in AQ_GlobalGeneralStatus_RHEA */
#define bits_AQ_GlobalGeneralStatus_RHEA_highTemperatureFailureState u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure highTemperatureFailureState in AQ_GlobalGeneralStatus_RHEA */
#define word_AQ_GlobalGeneralStatus_RHEA_highTemperatureFailureState u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowTemperatureFailureState in AQ_GlobalGeneralStatus_RHEA */
#define AQ_GlobalGeneralStatus_RHEA_lowTemperatureFailureState 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowTemperatureFailureState in AQ_GlobalGeneralStatus_RHEA */
#define bits_AQ_GlobalGeneralStatus_RHEA_lowTemperatureFailureState u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowTemperatureFailureState in AQ_GlobalGeneralStatus_RHEA */
#define word_AQ_GlobalGeneralStatus_RHEA_lowTemperatureFailureState u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure highTemperatureWarningState in AQ_GlobalGeneralStatus_RHEA */
#define AQ_GlobalGeneralStatus_RHEA_highTemperatureWarningState 0
/*! \brief Preprocessor variable to relate field to bit position in structure highTemperatureWarningState in AQ_GlobalGeneralStatus_RHEA */
#define bits_AQ_GlobalGeneralStatus_RHEA_highTemperatureWarningState u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure highTemperatureWarningState in AQ_GlobalGeneralStatus_RHEA */
#define word_AQ_GlobalGeneralStatus_RHEA_highTemperatureWarningState u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowTemperatureWarningState in AQ_GlobalGeneralStatus_RHEA */
#define AQ_GlobalGeneralStatus_RHEA_lowTemperatureWarningState 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowTemperatureWarningState in AQ_GlobalGeneralStatus_RHEA */
#define bits_AQ_GlobalGeneralStatus_RHEA_lowTemperatureWarningState u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowTemperatureWarningState in AQ_GlobalGeneralStatus_RHEA */
#define word_AQ_GlobalGeneralStatus_RHEA_lowTemperatureWarningState u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure processorIntensiveMdioOperationIn_Progress in AQ_GlobalGeneralStatus_RHEA */
#define AQ_GlobalGeneralStatus_RHEA_processorIntensiveMdioOperationIn_Progress 1
/*! \brief Preprocessor variable to relate field to bit position in structure processorIntensiveMdioOperationIn_Progress in AQ_GlobalGeneralStatus_RHEA */
#define bits_AQ_GlobalGeneralStatus_RHEA_processorIntensiveMdioOperationIn_Progress u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure processorIntensiveMdioOperationIn_Progress in AQ_GlobalGeneralStatus_RHEA */
#define word_AQ_GlobalGeneralStatus_RHEA_processorIntensiveMdioOperationIn_Progress u1.word_1

/*! \brief Base register address of structure AQ_GlobalPinStatus_RHEA */
#define AQ_GlobalPinStatus_RHEA_baseRegisterAddress 0xC840
/*! \brief MMD address of structure AQ_GlobalPinStatus_RHEA */
#define AQ_GlobalPinStatus_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure dcMasterN in AQ_GlobalPinStatus_RHEA */
#define AQ_GlobalPinStatus_RHEA_dcMasterN 0
/*! \brief Preprocessor variable to relate field to bit position in structure dcMasterN in AQ_GlobalPinStatus_RHEA */
#define bits_AQ_GlobalPinStatus_RHEA_dcMasterN u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure dcMasterN in AQ_GlobalPinStatus_RHEA */
#define word_AQ_GlobalPinStatus_RHEA_dcMasterN u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ledLdpcFrameError in AQ_GlobalPinStatus_RHEA */
#define AQ_GlobalPinStatus_RHEA_ledLdpcFrameError 0
/*! \brief Preprocessor variable to relate field to bit position in structure ledLdpcFrameError in AQ_GlobalPinStatus_RHEA */
#define bits_AQ_GlobalPinStatus_RHEA_ledLdpcFrameError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ledLdpcFrameError in AQ_GlobalPinStatus_RHEA */
#define word_AQ_GlobalPinStatus_RHEA_ledLdpcFrameError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ledPcsFrameError in AQ_GlobalPinStatus_RHEA */
#define AQ_GlobalPinStatus_RHEA_ledPcsFrameError 0
/*! \brief Preprocessor variable to relate field to bit position in structure ledPcsFrameError in AQ_GlobalPinStatus_RHEA */
#define bits_AQ_GlobalPinStatus_RHEA_ledPcsFrameError u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ledPcsFrameError in AQ_GlobalPinStatus_RHEA */
#define word_AQ_GlobalPinStatus_RHEA_ledPcsFrameError u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure ledPullupState in AQ_GlobalPinStatus_RHEA */
#define AQ_GlobalPinStatus_RHEA_ledPullupState 0
/*! \brief Preprocessor variable to relate field to bit position in structure ledPullupState in AQ_GlobalPinStatus_RHEA */
#define bits_AQ_GlobalPinStatus_RHEA_ledPullupState u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure ledPullupState in AQ_GlobalPinStatus_RHEA */
#define word_AQ_GlobalPinStatus_RHEA_ledPullupState u0.word_0

/*! \brief Base register address of structure AQ_GlobalDaisyChainStatus_RHEA */
#define AQ_GlobalDaisyChainStatus_RHEA_baseRegisterAddress 0xC842
/*! \brief MMD address of structure AQ_GlobalDaisyChainStatus_RHEA */
#define AQ_GlobalDaisyChainStatus_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure rxDaisyChainCalculatedCrc in AQ_GlobalDaisyChainStatus_RHEA */
#define AQ_GlobalDaisyChainStatus_RHEA_rxDaisyChainCalculatedCrc 0
/*! \brief Preprocessor variable to relate field to bit position in structure rxDaisyChainCalculatedCrc in AQ_GlobalDaisyChainStatus_RHEA */
#define bits_AQ_GlobalDaisyChainStatus_RHEA_rxDaisyChainCalculatedCrc u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure rxDaisyChainCalculatedCrc in AQ_GlobalDaisyChainStatus_RHEA */
#define word_AQ_GlobalDaisyChainStatus_RHEA_rxDaisyChainCalculatedCrc u0.word_0

/*! \brief Base register address of structure AQ_GlobalDaisyChainHopCount_RHEA */
#define AQ_GlobalDaisyChainHopCount_RHEA_baseRegisterAddress 0xC84E
/*! \brief MMD address of structure AQ_GlobalDaisyChainHopCount_RHEA */
#define AQ_GlobalDaisyChainHopCount_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure daisyChainHopCount in AQ_GlobalDaisyChainHopCount_RHEA */
#define AQ_GlobalDaisyChainHopCount_RHEA_daisyChainHopCount 0
/*! \brief Preprocessor variable to relate field to bit position in structure daisyChainHopCount in AQ_GlobalDaisyChainHopCount_RHEA */
#define bits_AQ_GlobalDaisyChainHopCount_RHEA_daisyChainHopCount u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure daisyChainHopCount in AQ_GlobalDaisyChainHopCount_RHEA */
#define word_AQ_GlobalDaisyChainHopCount_RHEA_daisyChainHopCount u0.word_0

/*! \brief Base register address of structure AQ_GlobalFaultMessage_RHEA */
#define AQ_GlobalFaultMessage_RHEA_baseRegisterAddress 0xC850
/*! \brief MMD address of structure AQ_GlobalFaultMessage_RHEA */
#define AQ_GlobalFaultMessage_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure message in AQ_GlobalFaultMessage_RHEA */
#define AQ_GlobalFaultMessage_RHEA_message 0
/*! \brief Preprocessor variable to relate field to bit position in structure message in AQ_GlobalFaultMessage_RHEA */
#define bits_AQ_GlobalFaultMessage_RHEA_message u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure message in AQ_GlobalFaultMessage_RHEA */
#define word_AQ_GlobalFaultMessage_RHEA_message u0.word_0

/*! \brief Base register address of structure AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_baseRegisterAddress 0xC880
/*! \brief MMD address of structure AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reserved_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pairAReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_1 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairAReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_1 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairAReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_1 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_2 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pairAReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_2 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairAReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_2 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairAReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_2 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_3 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_3 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_3 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pairAReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_3 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairAReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_3 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairAReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_3 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_4 0
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_4 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reserved_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_4 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pairAReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_4 0
/*! \brief Preprocessor variable to relate field to bit position in structure pairAReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_4 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pairAReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairAReflection_4 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reserved_5 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_5 1
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_5 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_5 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reserved_5 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_5 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure pairBReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_1 1
/*! \brief Preprocessor variable to relate field to bit position in structure pairBReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_1 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pairBReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_1 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reserved_6 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_6 1
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_6 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_6 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reserved_6 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_6 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure pairBReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_2 1
/*! \brief Preprocessor variable to relate field to bit position in structure pairBReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_2 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pairBReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_2 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reserved_7 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_7 1
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_7 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_7 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reserved_7 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_7 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure pairBReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_3 1
/*! \brief Preprocessor variable to relate field to bit position in structure pairBReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_3 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pairBReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_3 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reserved_8 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_8 1
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_8 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_8 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure reserved_8 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_8 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure pairBReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_4 1
/*! \brief Preprocessor variable to relate field to bit position in structure pairBReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_4 u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure pairBReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairBReflection_4 u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure reserved_9 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_9 2
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_9 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_9 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reserved_9 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_9 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pairCReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_1 2
/*! \brief Preprocessor variable to relate field to bit position in structure pairCReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_1 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure pairCReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_1 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reserved_10 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_10 2
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_10 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_10 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reserved_10 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_10 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pairCReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_2 2
/*! \brief Preprocessor variable to relate field to bit position in structure pairCReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_2 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure pairCReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_2 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reserved_11 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_11 2
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_11 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_11 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reserved_11 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_11 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pairCReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_3 2
/*! \brief Preprocessor variable to relate field to bit position in structure pairCReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_3 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure pairCReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_3 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reserved_12 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_12 2
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_12 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_12 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reserved_12 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_12 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure pairCReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_4 2
/*! \brief Preprocessor variable to relate field to bit position in structure pairCReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_4 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure pairCReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairCReflection_4 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reserved_13 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_13 3
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_13 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_13 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reserved_13 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_13 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure pairDReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_1 3
/*! \brief Preprocessor variable to relate field to bit position in structure pairDReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_1 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure pairDReflection_1 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_1 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure reserved_14 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_14 3
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_14 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_14 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reserved_14 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_14 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure pairDReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_2 3
/*! \brief Preprocessor variable to relate field to bit position in structure pairDReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_2 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure pairDReflection_2 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_2 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure reserved_15 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_15 3
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_15 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_15 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reserved_15 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_15 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure pairDReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_3 3
/*! \brief Preprocessor variable to relate field to bit position in structure pairDReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_3 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure pairDReflection_3 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_3 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure reserved_16 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_16 3
/*! \brief Preprocessor variable to relate field to bit position in structure reserved_16 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_16 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reserved_16 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_reserved_16 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure pairDReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_4 3
/*! \brief Preprocessor variable to relate field to bit position in structure pairDReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define bits_AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_4 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure pairDReflection_4 in AQ_GlobalCableDiagnosticImpedance_RHEA */
#define word_AQ_GlobalCableDiagnosticImpedance_RHEA_pairDReflection_4 u3.word_3

/*! \brief Base register address of structure AQ_GlobalStatus_RHEA */
#define AQ_GlobalStatus_RHEA_baseRegisterAddress 0xC884
/*! \brief MMD address of structure AQ_GlobalStatus_RHEA */
#define AQ_GlobalStatus_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure reservedStatus_0 in AQ_GlobalStatus_RHEA */
#define AQ_GlobalStatus_RHEA_reservedStatus_0 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedStatus_0 in AQ_GlobalStatus_RHEA */
#define bits_AQ_GlobalStatus_RHEA_reservedStatus_0 u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedStatus_0 in AQ_GlobalStatus_RHEA */
#define word_AQ_GlobalStatus_RHEA_reservedStatus_0 u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure cableLength in AQ_GlobalStatus_RHEA */
#define AQ_GlobalStatus_RHEA_cableLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure cableLength in AQ_GlobalStatus_RHEA */
#define bits_AQ_GlobalStatus_RHEA_cableLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure cableLength in AQ_GlobalStatus_RHEA */
#define word_AQ_GlobalStatus_RHEA_cableLength u0.word_0

/*! \brief Base register address of structure AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_baseRegisterAddress 0xC885
/*! \brief MMD address of structure AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure nearlySecondsMSW in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_nearlySecondsMSW 0
/*! \brief Preprocessor variable to relate field to bit position in structure nearlySecondsMSW in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_nearlySecondsMSW u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nearlySecondsMSW in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_nearlySecondsMSW u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure xenpakNvrStatus in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_xenpakNvrStatus 0
/*! \brief Preprocessor variable to relate field to bit position in structure xenpakNvrStatus in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_xenpakNvrStatus u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure xenpakNvrStatus in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_xenpakNvrStatus u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure firmwareBuildID in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_firmwareBuildID 0
/*! \brief Preprocessor variable to relate field to bit position in structure firmwareBuildID in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_firmwareBuildID u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure firmwareBuildID in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_firmwareBuildID u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure provisioningID in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_provisioningID 0
/*! \brief Preprocessor variable to relate field to bit position in structure provisioningID in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_provisioningID u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure provisioningID in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_provisioningID u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nearlySecondsLSW in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_nearlySecondsLSW 1
/*! \brief Preprocessor variable to relate field to bit position in structure nearlySecondsLSW in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_nearlySecondsLSW u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure nearlySecondsLSW in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_nearlySecondsLSW u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure dteStatus in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_dteStatus 2
/*! \brief Preprocessor variable to relate field to bit position in structure dteStatus in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_dteStatus u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure dteStatus in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_dteStatus u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure powerUpStallStatus in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_powerUpStallStatus 2
/*! \brief Preprocessor variable to relate field to bit position in structure powerUpStallStatus in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_powerUpStallStatus u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure powerUpStallStatus in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_powerUpStallStatus u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure reservedStatus_3 in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_reservedStatus_3 2
/*! \brief Preprocessor variable to relate field to bit position in structure reservedStatus_3 in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_reservedStatus_3 u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure reservedStatus_3 in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_reservedStatus_3 u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure loopbackStatus in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_loopbackStatus 3
/*! \brief Preprocessor variable to relate field to bit position in structure loopbackStatus in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_loopbackStatus u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure loopbackStatus in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_loopbackStatus u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure reservedStatus_4 in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_reservedStatus_4 3
/*! \brief Preprocessor variable to relate field to bit position in structure reservedStatus_4 in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_reservedStatus_4 u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure reservedStatus_4 in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_reservedStatus_4 u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure mdiPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_mdiPacketGenerationStatus 3
/*! \brief Preprocessor variable to relate field to bit position in structure mdiPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_mdiPacketGenerationStatus u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure mdiPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_mdiPacketGenerationStatus u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure look_asidePortPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_look_asidePortPacketGenerationStatus 3
/*! \brief Preprocessor variable to relate field to bit position in structure look_asidePortPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_look_asidePortPacketGenerationStatus u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure look_asidePortPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_look_asidePortPacketGenerationStatus u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure systemI_fPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_systemI_fPacketGenerationStatus 3
/*! \brief Preprocessor variable to relate field to bit position in structure systemI_fPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_systemI_fPacketGenerationStatus u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure systemI_fPacketGenerationStatus in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_systemI_fPacketGenerationStatus u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure rate in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_rate 3
/*! \brief Preprocessor variable to relate field to bit position in structure rate in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_rate u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure rate in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_rate u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure reservedStatus_5 in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_reservedStatus_5 4
/*! \brief Preprocessor variable to relate field to bit position in structure reservedStatus_5 in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_reservedStatus_5 u4.bits_4
/*! \brief Preprocessor variable to relate field to word position in structure reservedStatus_5 in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_reservedStatus_5 u4.word_4
/*! \brief Preprocessor variable to relate field to word number in structure reservedStatus_6 in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_reservedStatus_6 5
/*! \brief Preprocessor variable to relate field to bit position in structure reservedStatus_6 in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_reservedStatus_6 u5.bits_5
/*! \brief Preprocessor variable to relate field to word position in structure reservedStatus_6 in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_reservedStatus_6 u5.word_5
/*! \brief Preprocessor variable to relate field to word number in structure reservedStatus_7 in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_reservedStatus_7 6
/*! \brief Preprocessor variable to relate field to bit position in structure reservedStatus_7 in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_reservedStatus_7 u6.bits_6
/*! \brief Preprocessor variable to relate field to word position in structure reservedStatus_7 in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_reservedStatus_7 u6.word_6
/*! \brief Preprocessor variable to relate field to word number in structure reservedStatus_8 in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_reservedStatus_8 7
/*! \brief Preprocessor variable to relate field to bit position in structure reservedStatus_8 in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_reservedStatus_8 u7.bits_7
/*! \brief Preprocessor variable to relate field to word position in structure reservedStatus_8 in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_reservedStatus_8 u7.word_7
/*! \brief Preprocessor variable to relate field to word number in structure reservedStatus_9 in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_reservedStatus_9 8
/*! \brief Preprocessor variable to relate field to bit position in structure reservedStatus_9 in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_reservedStatus_9 u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure reservedStatus_9 in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_reservedStatus_9 u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure resolvedConstellation in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_resolvedConstellation 8
/*! \brief Preprocessor variable to relate field to bit position in structure resolvedConstellation in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_resolvedConstellation u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure resolvedConstellation in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_resolvedConstellation u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure resolvedActiveLaneCapability in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_resolvedActiveLaneCapability 8
/*! \brief Preprocessor variable to relate field to bit position in structure resolvedActiveLaneCapability in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_resolvedActiveLaneCapability u8.bits_8
/*! \brief Preprocessor variable to relate field to word position in structure resolvedActiveLaneCapability in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_resolvedActiveLaneCapability u8.word_8
/*! \brief Preprocessor variable to relate field to word number in structure resolvedBaudRate in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_resolvedBaudRate 9
/*! \brief Preprocessor variable to relate field to bit position in structure resolvedBaudRate in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_resolvedBaudRate u9.bits_9
/*! \brief Preprocessor variable to relate field to word position in structure resolvedBaudRate in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_resolvedBaudRate u9.word_9
/*! \brief Preprocessor variable to relate field to word number in structure customerProvisioningID in AQ_GlobalReservedStatus_RHEA */
#define AQ_GlobalReservedStatus_RHEA_customerProvisioningID 10
/*! \brief Preprocessor variable to relate field to bit position in structure customerProvisioningID in AQ_GlobalReservedStatus_RHEA */
#define bits_AQ_GlobalReservedStatus_RHEA_customerProvisioningID u10.bits_10
/*! \brief Preprocessor variable to relate field to word position in structure customerProvisioningID in AQ_GlobalReservedStatus_RHEA */
#define word_AQ_GlobalReservedStatus_RHEA_customerProvisioningID u10.word_10

/*! \brief Base register address of structure AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_baseRegisterAddress 0xCC00
/*! \brief MMD address of structure AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure highTemperatureFailure in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_highTemperatureFailure 0
/*! \brief Preprocessor variable to relate field to bit position in structure highTemperatureFailure in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_highTemperatureFailure u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure highTemperatureFailure in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_highTemperatureFailure u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowTemperatureFailure in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_lowTemperatureFailure 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowTemperatureFailure in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_lowTemperatureFailure u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowTemperatureFailure in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_lowTemperatureFailure u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure highTemperatureWarning in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_highTemperatureWarning 0
/*! \brief Preprocessor variable to relate field to bit position in structure highTemperatureWarning in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_highTemperatureWarning u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure highTemperatureWarning in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_highTemperatureWarning u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowTemperatureWarning in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_lowTemperatureWarning 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowTemperatureWarning in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_lowTemperatureWarning u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowTemperatureWarning in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_lowTemperatureWarning u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetCompleted in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_resetCompleted 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetCompleted in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_resetCompleted u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetCompleted in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_resetCompleted u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure deviceFault in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_deviceFault 0
/*! \brief Preprocessor variable to relate field to bit position in structure deviceFault in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_deviceFault u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure deviceFault in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_deviceFault u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarmA in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_reservedAlarmA 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarmA in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_reservedAlarmA u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarmA in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_reservedAlarmA u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarmB in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_reservedAlarmB 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarmB in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_reservedAlarmB u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarmB in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_reservedAlarmB u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarmC in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_reservedAlarmC 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarmC in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_reservedAlarmC u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarmC in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_reservedAlarmC u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarmD in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_reservedAlarmD 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarmD in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_reservedAlarmD u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarmD in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_reservedAlarmD u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure smartPower_downEntered in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_smartPower_downEntered 1
/*! \brief Preprocessor variable to relate field to bit position in structure smartPower_downEntered in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_smartPower_downEntered u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure smartPower_downEntered in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_smartPower_downEntered u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xenpakAlarm in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_xenpakAlarm 1
/*! \brief Preprocessor variable to relate field to bit position in structure xenpakAlarm in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_xenpakAlarm u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xenpakAlarm in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_xenpakAlarm u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure ipPhoneDetect in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_ipPhoneDetect 1
/*! \brief Preprocessor variable to relate field to bit position in structure ipPhoneDetect in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_ipPhoneDetect u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure ipPhoneDetect in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_ipPhoneDetect u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure dteStatusChange in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_dteStatusChange 1
/*! \brief Preprocessor variable to relate field to bit position in structure dteStatusChange in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_dteStatusChange u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure dteStatusChange in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_dteStatusChange u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure fastLinkDrop in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_fastLinkDrop 1
/*! \brief Preprocessor variable to relate field to bit position in structure fastLinkDrop in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_fastLinkDrop u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure fastLinkDrop in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_fastLinkDrop u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure sfpDdmiMemoryLoadFailed in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_sfpDdmiMemoryLoadFailed 1
/*! \brief Preprocessor variable to relate field to bit position in structure sfpDdmiMemoryLoadFailed in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_sfpDdmiMemoryLoadFailed u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure sfpDdmiMemoryLoadFailed in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_sfpDdmiMemoryLoadFailed u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure smb0StateMachineTimeout in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_smb0StateMachineTimeout 1
/*! \brief Preprocessor variable to relate field to bit position in structure smb0StateMachineTimeout in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_smb0StateMachineTimeout u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure smb0StateMachineTimeout in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_smb0StateMachineTimeout u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mdioCommandHandlingOverflow in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_mdioCommandHandlingOverflow 1
/*! \brief Preprocessor variable to relate field to bit position in structure mdioCommandHandlingOverflow in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_mdioCommandHandlingOverflow u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mdioCommandHandlingOverflow in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_mdioCommandHandlingOverflow u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure diagnosticAlarm in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_diagnosticAlarm 1
/*! \brief Preprocessor variable to relate field to bit position in structure diagnosticAlarm in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_diagnosticAlarm u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure diagnosticAlarm in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_diagnosticAlarm u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure nvrOperationComplete in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_nvrOperationComplete 2
/*! \brief Preprocessor variable to relate field to bit position in structure nvrOperationComplete in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_nvrOperationComplete u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure nvrOperationComplete in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_nvrOperationComplete u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mailboxOperation_Complete in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_mailboxOperation_Complete 2
/*! \brief Preprocessor variable to relate field to bit position in structure mailboxOperation_Complete in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_mailboxOperation_Complete u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mailboxOperation_Complete in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_mailboxOperation_Complete u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure upDramParityError in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_upDramParityError 2
/*! \brief Preprocessor variable to relate field to bit position in structure upDramParityError in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_upDramParityError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure upDramParityError in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_upDramParityError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure upIramParityError in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_upIramParityError 2
/*! \brief Preprocessor variable to relate field to bit position in structure upIramParityError in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_upIramParityError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure upIramParityError in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_upIramParityError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure smb0SlaveDataBankChange in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_smb0SlaveDataBankChange 2
/*! \brief Preprocessor variable to relate field to bit position in structure smb0SlaveDataBankChange in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_smb0SlaveDataBankChange u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure smb0SlaveDataBankChange in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_smb0SlaveDataBankChange u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mdioMMD_Error in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_mdioMMD_Error 2
/*! \brief Preprocessor variable to relate field to bit position in structure mdioMMD_Error in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_mdioMMD_Error u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mdioMMD_Error in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_mdioMMD_Error u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mdioTimeoutError in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_mdioTimeoutError 2
/*! \brief Preprocessor variable to relate field to bit position in structure mdioTimeoutError in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_mdioTimeoutError u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mdioTimeoutError in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_mdioTimeoutError u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure watchdogTimerAlarm in AQ_GlobalAlarms_RHEA */
#define AQ_GlobalAlarms_RHEA_watchdogTimerAlarm 2
/*! \brief Preprocessor variable to relate field to bit position in structure watchdogTimerAlarm in AQ_GlobalAlarms_RHEA */
#define bits_AQ_GlobalAlarms_RHEA_watchdogTimerAlarm u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure watchdogTimerAlarm in AQ_GlobalAlarms_RHEA */
#define word_AQ_GlobalAlarms_RHEA_watchdogTimerAlarm u2.word_2

/*! \brief Base register address of structure AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_baseRegisterAddress 0xD400
/*! \brief MMD address of structure AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure highTemperatureFailureMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_highTemperatureFailureMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure highTemperatureFailureMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_highTemperatureFailureMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure highTemperatureFailureMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_highTemperatureFailureMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowTemperatureFailureMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_lowTemperatureFailureMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowTemperatureFailureMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_lowTemperatureFailureMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowTemperatureFailureMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_lowTemperatureFailureMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure highTemperatureWarningMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_highTemperatureWarningMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure highTemperatureWarningMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_highTemperatureWarningMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure highTemperatureWarningMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_highTemperatureWarningMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure lowTemperatureWarningMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_lowTemperatureWarningMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure lowTemperatureWarningMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_lowTemperatureWarningMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure lowTemperatureWarningMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_lowTemperatureWarningMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetCompletedMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_resetCompletedMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetCompletedMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_resetCompletedMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetCompletedMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_resetCompletedMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure deviceFaultMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_deviceFaultMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure deviceFaultMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_deviceFaultMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure deviceFaultMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_deviceFaultMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarmAMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_reservedAlarmAMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarmAMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_reservedAlarmAMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarmAMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_reservedAlarmAMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarmBMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_reservedAlarmBMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarmBMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_reservedAlarmBMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarmBMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_reservedAlarmBMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarmCMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_reservedAlarmCMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarmCMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_reservedAlarmCMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarmCMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_reservedAlarmCMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure reservedAlarmDMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_reservedAlarmDMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure reservedAlarmDMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_reservedAlarmDMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure reservedAlarmDMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_reservedAlarmDMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure smartPower_downEnteredMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_smartPower_downEnteredMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure smartPower_downEnteredMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_smartPower_downEnteredMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure smartPower_downEnteredMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_smartPower_downEnteredMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure xenpakAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_xenpakAlarmMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure xenpakAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_xenpakAlarmMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure xenpakAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_xenpakAlarmMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure ipPhoneDetectMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_ipPhoneDetectMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure ipPhoneDetectMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_ipPhoneDetectMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure ipPhoneDetectMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_ipPhoneDetectMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure dteStatusChangeMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_dteStatusChangeMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure dteStatusChangeMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_dteStatusChangeMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure dteStatusChangeMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_dteStatusChangeMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure fastLinkDropMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_fastLinkDropMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure fastLinkDropMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_fastLinkDropMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure fastLinkDropMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_fastLinkDropMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure sfpDdmiMemoryLoadMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_sfpDdmiMemoryLoadMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure sfpDdmiMemoryLoadMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_sfpDdmiMemoryLoadMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure sfpDdmiMemoryLoadMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_sfpDdmiMemoryLoadMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure smb0StateMachineTimeoutMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_smb0StateMachineTimeoutMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure smb0StateMachineTimeoutMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_smb0StateMachineTimeoutMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure smb0StateMachineTimeoutMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_smb0StateMachineTimeoutMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure mdioCommandHandlingOverflowMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_mdioCommandHandlingOverflowMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure mdioCommandHandlingOverflowMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_mdioCommandHandlingOverflowMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure mdioCommandHandlingOverflowMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_mdioCommandHandlingOverflowMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure diagnosticAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_diagnosticAlarmMask 1
/*! \brief Preprocessor variable to relate field to bit position in structure diagnosticAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_diagnosticAlarmMask u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure diagnosticAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_diagnosticAlarmMask u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure nvrOperationCompleteMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_nvrOperationCompleteMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure nvrOperationCompleteMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_nvrOperationCompleteMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure nvrOperationCompleteMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_nvrOperationCompleteMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mailboxOperationCompleteMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_mailboxOperationCompleteMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure mailboxOperationCompleteMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_mailboxOperationCompleteMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mailboxOperationCompleteMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_mailboxOperationCompleteMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure upDramParityErrorMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_upDramParityErrorMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure upDramParityErrorMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_upDramParityErrorMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure upDramParityErrorMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_upDramParityErrorMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure upIramParityErrorMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_upIramParityErrorMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure upIramParityErrorMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_upIramParityErrorMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure upIramParityErrorMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_upIramParityErrorMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure smb0SlaveDataBankChangeMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_smb0SlaveDataBankChangeMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure smb0SlaveDataBankChangeMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_smb0SlaveDataBankChangeMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure smb0SlaveDataBankChangeMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_smb0SlaveDataBankChangeMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mdioMMD_ErrorMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_mdioMMD_ErrorMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure mdioMMD_ErrorMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_mdioMMD_ErrorMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mdioMMD_ErrorMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_mdioMMD_ErrorMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure mdioTimeoutErrorMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_mdioTimeoutErrorMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure mdioTimeoutErrorMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_mdioTimeoutErrorMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure mdioTimeoutErrorMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_mdioTimeoutErrorMask u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure watchdogTimerAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define AQ_GlobalInterruptMask_RHEA_watchdogTimerAlarmMask 2
/*! \brief Preprocessor variable to relate field to bit position in structure watchdogTimerAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define bits_AQ_GlobalInterruptMask_RHEA_watchdogTimerAlarmMask u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure watchdogTimerAlarmMask in AQ_GlobalInterruptMask_RHEA */
#define word_AQ_GlobalInterruptMask_RHEA_watchdogTimerAlarmMask u2.word_2

/*! \brief Base register address of structure AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_baseRegisterAddress 0xFC00
/*! \brief MMD address of structure AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure pmaStandardAlarm_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pmaStandardAlarm_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaStandardAlarm_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pmaStandardAlarm_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaStandardAlarm_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pmaStandardAlarm_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaStandardAlarm_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pmaStandardAlarm_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaStandardAlarm_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pmaStandardAlarm_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaStandardAlarm_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pmaStandardAlarm_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsStandardAlarm_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsStandardAlarm_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsStandardAlarm_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsStandardAlarm_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsStandardAlarm_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsStandardAlarm_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsStandardAlarm_3Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_3Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsStandardAlarm_3Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_3Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsStandardAlarm_3Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_pcsStandardAlarm_3Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_StandardAlarms_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_phyXS_StandardAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_StandardAlarms_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_phyXS_StandardAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_StandardAlarms_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_phyXS_StandardAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_StandardAlarms_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_phyXS_StandardAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_StandardAlarms_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_phyXS_StandardAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_StandardAlarms_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_phyXS_StandardAlarms_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationStandardAlarms_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_autonegotiationStandardAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationStandardAlarms_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_autonegotiationStandardAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationStandardAlarms_1Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_autonegotiationStandardAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationStandardAlarms_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_autonegotiationStandardAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationStandardAlarms_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_autonegotiationStandardAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationStandardAlarms_2Interrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_autonegotiationStandardAlarms_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure gbeStandardAlarmsInterrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_gbeStandardAlarmsInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure gbeStandardAlarmsInterrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_gbeStandardAlarmsInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure gbeStandardAlarmsInterrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_gbeStandardAlarmsInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure allVendorAlarmsInterrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define AQ_GlobalChip_wideStandardInterruptFlags_RHEA_allVendorAlarmsInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure allVendorAlarmsInterrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_allVendorAlarmsInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure allVendorAlarmsInterrupt in AQ_GlobalChip_wideStandardInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideStandardInterruptFlags_RHEA_allVendorAlarmsInterrupt u0.word_0

/*! \brief Base register address of structure AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_baseRegisterAddress 0xFC01
/*! \brief MMD address of structure AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure pmaVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_pmaVendorAlarmInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_pmaVendorAlarmInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_pmaVendorAlarmInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_pcsVendorAlarmInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_pcsVendorAlarmInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_pcsVendorAlarmInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_VendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_phyXS_VendorAlarmInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_VendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_phyXS_VendorAlarmInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_VendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_phyXS_VendorAlarmInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_autonegotiationVendorAlarmInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_autonegotiationVendorAlarmInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_autonegotiationVendorAlarmInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure gbeVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_gbeVendorAlarmInterrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure gbeVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_gbeVendorAlarmInterrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure gbeVendorAlarmInterrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_gbeVendorAlarmInterrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure globalAlarms_1Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_1Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure globalAlarms_1Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_1Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure globalAlarms_1Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_1Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure globalAlarms_2Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_2Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure globalAlarms_2Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_2Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure globalAlarms_2Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_2Interrupt u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure globalAlarms_3Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_3Interrupt 0
/*! \brief Preprocessor variable to relate field to bit position in structure globalAlarms_3Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define bits_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_3Interrupt u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure globalAlarms_3Interrupt in AQ_GlobalChip_wideVendorInterruptFlags_RHEA */
#define word_AQ_GlobalChip_wideVendorInterruptFlags_RHEA_globalAlarms_3Interrupt u0.word_0

/*! \brief Base register address of structure AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_baseRegisterAddress 0xFF00
/*! \brief MMD address of structure AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure pmaStandardAlarm_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_pmaStandardAlarm_1InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaStandardAlarm_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pmaStandardAlarm_1InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaStandardAlarm_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pmaStandardAlarm_1InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pmaStandardAlarm_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_pmaStandardAlarm_2InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaStandardAlarm_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pmaStandardAlarm_2InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaStandardAlarm_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pmaStandardAlarm_2InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsStandardAlarm_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_1InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsStandardAlarm_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_1InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsStandardAlarm_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_1InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsStandardAlarm_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_2InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsStandardAlarm_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_2InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsStandardAlarm_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_2InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsStandardAlarm_3InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_3InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsStandardAlarm_3InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_3InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsStandardAlarm_3InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_pcsStandardAlarm_3InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_StandardAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_phyXS_StandardAlarms_1InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_StandardAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_phyXS_StandardAlarms_1InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_StandardAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_phyXS_StandardAlarms_1InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_StandardAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_phyXS_StandardAlarms_2InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_StandardAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_phyXS_StandardAlarms_2InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_StandardAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_phyXS_StandardAlarms_2InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationStandardAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_autonegotiationStandardAlarms_1InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationStandardAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_autonegotiationStandardAlarms_1InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationStandardAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_autonegotiationStandardAlarms_1InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationStandardAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_autonegotiationStandardAlarms_2InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationStandardAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_autonegotiationStandardAlarms_2InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationStandardAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_autonegotiationStandardAlarms_2InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure gbeStandardAlarmsInterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_gbeStandardAlarmsInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure gbeStandardAlarmsInterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_gbeStandardAlarmsInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure gbeStandardAlarmsInterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_gbeStandardAlarmsInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure allVendorAlarmsInterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define AQ_GlobalInterruptChip_wideStandardMask_RHEA_allVendorAlarmsInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure allVendorAlarmsInterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideStandardMask_RHEA_allVendorAlarmsInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure allVendorAlarmsInterruptMask in AQ_GlobalInterruptChip_wideStandardMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideStandardMask_RHEA_allVendorAlarmsInterruptMask u0.word_0

/*! \brief Base register address of structure AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_baseRegisterAddress 0xFF01
/*! \brief MMD address of structure AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_mmdAddress 0x1E
/*! \brief Preprocessor variable to relate field to word number in structure pmaVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_pmaVendorAlarmInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pmaVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideVendorMask_RHEA_pmaVendorAlarmInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pmaVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideVendorMask_RHEA_pmaVendorAlarmInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure pcsVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_pcsVendorAlarmInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure pcsVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideVendorMask_RHEA_pcsVendorAlarmInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure pcsVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideVendorMask_RHEA_pcsVendorAlarmInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure phyXS_VendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_phyXS_VendorAlarmInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure phyXS_VendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideVendorMask_RHEA_phyXS_VendorAlarmInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure phyXS_VendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideVendorMask_RHEA_phyXS_VendorAlarmInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure autonegotiationVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_autonegotiationVendorAlarmInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure autonegotiationVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideVendorMask_RHEA_autonegotiationVendorAlarmInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure autonegotiationVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideVendorMask_RHEA_autonegotiationVendorAlarmInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure gbeVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_gbeVendorAlarmInterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure gbeVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideVendorMask_RHEA_gbeVendorAlarmInterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure gbeVendorAlarmInterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideVendorMask_RHEA_gbeVendorAlarmInterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure globalAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_1InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure globalAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_1InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure globalAlarms_1InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_1InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure globalAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_2InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure globalAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_2InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure globalAlarms_2InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_2InterruptMask u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure globalAlarms_3InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_3InterruptMask 0
/*! \brief Preprocessor variable to relate field to bit position in structure globalAlarms_3InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define bits_AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_3InterruptMask u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure globalAlarms_3InterruptMask in AQ_GlobalInterruptChip_wideVendorMask_RHEA */
#define word_AQ_GlobalInterruptChip_wideVendorMask_RHEA_globalAlarms_3InterruptMask u0.word_0
#endif
/*@}*/
/*@}*/
