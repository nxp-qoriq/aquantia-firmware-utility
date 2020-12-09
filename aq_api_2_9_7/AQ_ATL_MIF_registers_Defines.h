/*! \file
*   This file contains the compiler assist macros and doxygen comments
*   for the MIF Registers block.
*/

/*! \defgroup MIF_registers_Defines MIF Registers Defines
*   This module contains the compiler assist macros and doxygen comments
*   for the MIF Registers block.
*/
/***********************************************************************
*                     Copyright Aquantia Corp.
*                             Freeware
*
* $File: //depot/icm/proj/Dena/rev1.0/c/Systems/tools/windows/aq_api/include/registerMap/ATL/AQ_ATL_MIF_registers_Defines.h $
*
* $Revision: #1 $
*
* $DateTime: 2017/09/26 11:23:06 $
*
* $Author: maryamj $
*
* $Label: $
*
* Description:
*
*   This file contains the compiler assist macros for the registers contained in the MIF Registers block.
*
*
***********************************************************************/


/*@{*/
#ifndef AQ_ATL_MIF_REGS_DEFINES_HEADER
#define AQ_ATL_MIF_REGS_DEFINES_HEADER


/*-----------------------------------------------------------------------------*/
/*Access macro definitions                                                     */
/*-----------------------------------------------------------------------------*/
/*! \brief Base register address of structure AQ_GlobalStandardControl_1_ATL */
#define AQ_GlobalStandardControl_1_ATL_baseRegisterAddress 0x00000000
/*! \brief MMD address of structure AQ_GlobalStandardControl_1_ATL */
#define AQ_GlobalStandardControl_1_ATL_mmdAddress 0x0
/*! \brief Preprocessor variable to relate field to word number in structure softReset in AQ_GlobalStandardControl_1_ATL */
#define AQ_GlobalStandardControl_1_ATL_softReset 0
/*! \brief Preprocessor variable to relate field to bit position in structure softReset in AQ_GlobalStandardControl_1_ATL */
#define bits_AQ_GlobalStandardControl_1_ATL_softReset u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure softReset in AQ_GlobalStandardControl_1_ATL */
#define word_AQ_GlobalStandardControl_1_ATL_softReset u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure globalMMD_ResetDisable in AQ_GlobalStandardControl_1_ATL */
#define AQ_GlobalStandardControl_1_ATL_globalMMD_ResetDisable 0
/*! \brief Preprocessor variable to relate field to bit position in structure globalMMD_ResetDisable in AQ_GlobalStandardControl_1_ATL */
#define bits_AQ_GlobalStandardControl_1_ATL_globalMMD_ResetDisable u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure globalMMD_ResetDisable in AQ_GlobalStandardControl_1_ATL */
#define word_AQ_GlobalStandardControl_1_ATL_globalMMD_ResetDisable u0.word_0
/*! \brief Base register address of structure AQ_GlobalResetControl_ATL */
#define AQ_GlobalResetControl_ATL_baseRegisterAddress AQ_GlobalStandardControl_1_ATL_baseRegisterAddress
/*! \brief Preprocessor variable to relate field to word number in structure globalMMD_ResetDisable in AQ_GlobalResetControl_ATL */
#define AQ_GlobalResetControl_ATL_globalMMD_ResetDisable AQ_GlobalStandardControl_1_ATL_globalMMD_ResetDisable
/*! \brief Preprocessor variable to relate field to bit position in structure globalMMD_ResetDisable in AQ_GlobalResetControl_ATL */
#define bits_AQ_GlobalResetControl_ATL_globalMMD_ResetDisable bits_AQ_GlobalStandardControl_1_ATL_globalMMD_ResetDisable
/*! \brief Preprocessor variable to relate field to word position in structure globalMMD_ResetDisable in AQ_GlobalResetControl_ATL */
#define word_AQ_GlobalResetControl_ATL_globalMMD_ResetDisable word_AQ_GlobalStandardControl_1_ATL_globalMMD_ResetDisable
/*! \brief Base register address of structure AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_baseRegisterAddress 0x00000100
/*! \brief MMD address of structure AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_mmdAddress 0x0
/*! \brief Preprocessor variable to relate field to word number in structure nvrExecuteOperation in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_nvrExecuteOperation 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrExecuteOperation in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrExecuteOperation u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrExecuteOperation in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrExecuteOperation u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrWriteMode in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_nvrWriteMode 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrWriteMode in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrWriteMode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrWriteMode in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrWriteMode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure freezeNvrCrc in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_freezeNvrCrc 0
/*! \brief Preprocessor variable to relate field to bit position in structure freezeNvrCrc in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_freezeNvrCrc u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure freezeNvrCrc in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_freezeNvrCrc u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure resetNvrCrc in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_resetNvrCrc 0
/*! \brief Preprocessor variable to relate field to bit position in structure resetNvrCrc in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_resetNvrCrc u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure resetNvrCrc in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_resetNvrCrc u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrBurst in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_nvrBurst 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrBurst in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrBurst u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrBurst in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrBurst u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrBusy in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_nvrBusy 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrBusy in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrBusy u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrBusy in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrBusy u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrOpcode in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_nvrOpcode 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrOpcode in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrOpcode u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrOpcode in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrOpcode u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrMailboxCrc in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_nvrMailboxCrc 1
/*! \brief Preprocessor variable to relate field to bit position in structure nvrMailboxCrc in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrMailboxCrc u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure nvrMailboxCrc in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrMailboxCrc u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure nvrAddressLSW in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_nvrAddressLSW 2
/*! \brief Preprocessor variable to relate field to bit position in structure nvrAddressLSW in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrAddressLSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure nvrAddressLSW in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrAddressLSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure nvrAddressMSW in AQ_GlobalNvrInterface_ATL */
/* NOTE originally there was:
 * #define AQ_GlobalNvrInterface_ATL_nvrAddressMSW 5.0/2
 * , which is at least consistent.
 * But to avoid float numbers, we use dummy word number with set 6th bit,
 * i.e. 0x04000108 register. This trick is possible as
 * all actual registers are not greater than 0x01000000.
 */
#define AQ_GlobalNvrInterface_ATL_nvrWordMSW    0x01000000
#define AQ_GlobalNvrInterface_ATL_nvrMaskMSW    0x04000000 /* AQ_GlobalNvrInterface_ATL_nvrWordMSW * 4 as we do with word numbers */
#define AQ_GlobalNvrInterface_ATL_nvrAddressMSW 0x01000002
/*! \brief Preprocessor variable to relate field to bit position in structure nvrAddressMSW in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrAddressMSW u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure nvrAddressMSW in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrAddressMSW u2.word_2
/*! \brief Preprocessor variable to relate field to word number in structure nvrDataLSW in AQ_GlobalNvrInterface_ATL */
#define AQ_GlobalNvrInterface_ATL_nvrDataLSW 3
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDataLSW in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrDataLSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure nvrDataLSW in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrDataLSW u3.word_3
/*! \brief Preprocessor variable to relate field to word number in structure nvrDataMSW in AQ_GlobalNvrInterface_ATL */
/* NOTE originally there was:
 * #define AQ_GlobalNvrInterface_ATL_nvrDataMSW 7.0/2
 * See the comments to AQ_GlobalNvrInterface_ATL_nvrAddressMSW above
 */
#define AQ_GlobalNvrInterface_ATL_nvrDataMSW 0x01000003
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDataMSW in AQ_GlobalNvrInterface_ATL */
#define bits_AQ_GlobalNvrInterface_ATL_nvrDataMSW u3.bits_3
/*! \brief Preprocessor variable to relate field to word position in structure nvrDataMSW in AQ_GlobalNvrInterface_ATL */
#define word_AQ_GlobalNvrInterface_ATL_nvrDataMSW u3.word_3


/*! \brief Base register address of structure AQ_GlobalMicroprocessorScratchPad_ATL */
#define AQ_GlobalMicroprocessorScratchPad_ATL_baseRegisterAddress 0x00000300
/*! \brief MMD address of structure AQ_GlobalMicroprocessorScratchPad_ATL */
#define AQ_GlobalMicroprocessorScratchPad_ATL_mmdAddress 0x0

/*! \brief Base register address of structure AQ_GlobalControl_ATL */
#define AQ_GlobalControl_ATL_baseRegisterAddress 0x0400
/*! \brief MMD address of structure AQ_GlobalControl_ATL */
#define AQ_GlobalControl_ATL_mmdAddress 0x0
/*! \brief Preprocessor variable to relate field to word number in structure upReset in AQ_GlobalControl_ATL */
#define AQ_GlobalControl_ATL_upReset 1
/*! \brief Preprocessor variable to relate field to bit position in structure upReset in AQ_GlobalControl_ATL */
#define bits_AQ_GlobalControl_ATL_upReset u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure upReset in AQ_GlobalControl_ATL */
#define word_AQ_GlobalControl_ATL_upReset u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure upRunStall in AQ_GlobalControl_ATL */
#define AQ_GlobalControl_ATL_upRunStall 1
/*! \brief Preprocessor variable to relate field to bit position in structure upRunStall in AQ_GlobalControl_ATL */
#define bits_AQ_GlobalControl_ATL_upRunStall u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure upRunStall in AQ_GlobalControl_ATL */
#define word_AQ_GlobalControl_ATL_upRunStall u1.word_1

/*! \brief Base register address of structure AQ_GlobalNvrProvisioning_ATL */
#define AQ_GlobalNvrProvisioning_ATL_baseRegisterAddress 0x00000530
/*! \brief MMD address of structure AQ_GlobalNvrProvisioning_ATL */
#define AQ_GlobalNvrProvisioning_ATL_mmdAddress 0x0
/*! \brief Preprocessor variable to relate field to word number in structure nvrDataLength in AQ_GlobalNvrProvisioning_ATL */
#define AQ_GlobalNvrProvisioning_ATL_nvrDataLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDataLength in AQ_GlobalNvrProvisioning_ATL */
#define bits_AQ_GlobalNvrProvisioning_ATL_nvrDataLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrDataLength in AQ_GlobalNvrProvisioning_ATL */
#define word_AQ_GlobalNvrProvisioning_ATL_nvrDataLength u0.word_0

/*! \brief Preprocessor variable to relate field to word number in structure nvrDummyLength in AQ_GlobalNvrProvisioning_ATL */
#define AQ_GlobalNvrProvisioning_ATL_nvrDummyLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDummyLength in AQ_GlobalNvrProvisioning_ATL */
#define bits_AQ_GlobalNvrProvisioning_ATL_nvrDummyLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrDummyLength in AQ_GlobalNvrProvisioning_ATL */
#define word_AQ_GlobalNvrProvisioning_ATL_nvrDummyLength u0.word_0

/*! \brief Preprocessor variable to relate field to word number in structure nvrAddressLength in AQ_GlobalNvrProvisioning_ATL */
#define AQ_GlobalNvrProvisioning_ATL_nvrAddressLength 0
/*! \brief Preprocessor variable to relate field to bit position in structure nvrAddressLength in AQ_GlobalNvrProvisioning_ATL */
#define bits_AQ_GlobalNvrProvisioning_ATL_nvrAddressLength u0.bits_0
/*! \brief Preprocessor variable to relate field to word position in structure nvrAddressLength in AQ_GlobalNvrProvisioning_ATL */
#define word_AQ_GlobalNvrProvisioning_ATL_nvrAddressLength u0.word_0
/*! \brief Preprocessor variable to relate field to word number in structure nvrAddressLengthOverride in AQ_GlobalNvrProvisioning_ATL */
#define AQ_GlobalNvrProvisioning_ATL_nvrAddressLengthOverride 1
/*! \brief Preprocessor variable to relate field to bit position in structure nvrAddressLengthOverride in AQ_GlobalNvrProvisioning_ATL */
#define bits_AQ_GlobalNvrProvisioning_ATL_nvrAddressLengthOverride u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure nvrAddressLengthOverride in AQ_GlobalNvrProvisioning_ATL */
#define word_AQ_GlobalNvrProvisioning_ATL_nvrAddressLengthOverride u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure nvrClockDivide in AQ_GlobalNvrProvisioning_ATL */
#define AQ_GlobalNvrProvisioning_ATL_nvrClockDivide 1
/*! \brief Preprocessor variable to relate field to bit position in structure nvrClockDivide in AQ_GlobalNvrProvisioning_ATL */
#define bits_AQ_GlobalNvrProvisioning_ATL_nvrClockDivide u1.bits_1
/*! \brief Preprocessor variable to relate field to word position in structure nvrClockDivide in AQ_GlobalNvrProvisioning_ATL */
#define word_AQ_GlobalNvrProvisioning_ATL_nvrClockDivide u1.word_1
/*! \brief Preprocessor variable to relate field to word number in structure nvrDaisyChainClockDivideOverride in AQ_GlobalNvrProvisioning_ATL */
#define AQ_GlobalNvrProvisioning_ATL_nvrDaisyChainClockDivideOverride 2
/*! \brief Preprocessor variable to relate field to bit position in structure nvrDaisyChainClockDivideOverride in AQ_GlobalNvrProvisioning_ATL */
#define bits_AQ_GlobalNvrProvisioning_ATL_nvrDaisyChainClockDivideOverride u2.bits_2
/*! \brief Preprocessor variable to relate field to word position in structure nvrDaisyChainClockDivideOverride in AQ_GlobalNvrProvisioning_ATL */
#define word_AQ_GlobalNvrProvisioning_ATL_nvrDaisyChainClockDivideOverride u2.word_2

#endif
/*@}*/
/*@}*/