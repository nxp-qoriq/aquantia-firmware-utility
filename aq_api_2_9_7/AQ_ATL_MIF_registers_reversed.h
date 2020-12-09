/*! \file 
*   This file contains the data structures and doxygen comments
*   for the MIF Registers block.
 */        

/*! \addtogroup registerMap
  @{
*/

/*! \defgroup MIF_registers MIF Registers
*   This module contains the data structures and doxygen comments
*   for the MIF Registers block.
 */        
/***********************************************************************
*                     Copyright Aquantia Corp.
*                             Freeware
*
* $Date: 2017/09/26 $
*
* $Label: $
*
* Description:
*
*   This file contains the c header structures for the registers contained in the MIF Registers block.
*
*   The bit fields in this structure are from LSbit to MSbit
*
***********************************************************************/


/*@{*/
#ifndef AQ_ATL_MIF_REGS_HEADER
#define AQ_ATL_MIF_REGS_HEADER


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Control 1: 00000000 */
/*                  Global Standard Control 1: 00000000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Control 1 */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
                    /*! \brief 00000000.F R/WSC Soft Reset
                        AQ_GlobalStandardControl_1_ATL.u0.bits_0.softReset

                        Default = 0x0

                        Soft Reset
                        1 = Global soft reset
                        0 = Normal operation
                        

                 <B>Notes:</B>
                        Resets the entire MAC.
                        Setting this bit initiates a global soft reset on all of the digital logic not including the microprocessor (i.e. microprocessor is not reset). Will be active for a minimum of 320 nanoseconds. This bit is self-clearing.
                        Note this bit is OR'ed with the individual MMD resets. This bit should be set to 0 before setting the individual MMD resets.  */
      unsigned int   softReset : 1;    /* 00000000.F  R/WSC      Default = 0x0 */
                     /* Soft Reset
                        1 = Global soft reset
                        0 = Normal operation
                          */
      /* NOTE actually is registerResetDisable, renamed for compatibility with EUR regmap */
                    /*! \brief 00000000.E R/W Register Reset Disable
                        AQ_GlobalStandardControl_1_ATL.u0.bits_0.globalMMD_ResetDisable

                        Default = 0x1

                        Global Register Reset Disable
                        1 = Disable the S/W reset to Global registers
                        0 = Enable the S/W reset to Global registers
                        

                 <B>Notes:</B>
                        Setting this bit prevents a Global S/W reset from resetting the Global registers  */
      unsigned int   globalMMD_ResetDisable : 1;    /* 00000000.E  R/W      Default = 0x1 */
                     /* Global Register Reset Disable
                        1 = Disable the S/W reset to Global registers
                        0 = Enable the S/W reset to Global registers
                          */
      unsigned int   reserved1 : 14;
    } bits_0;
    uint32_t word_0;
  } u0;
} AQ_GlobalStandardControl_1_ATL;

/* NOTE Synonym for accessing AQ_GlobalStandardControl_1_ATL's fields as AQ_GlobalResetControl_ATL's
   which is not actually exists */
typedef AQ_GlobalStandardControl_1_ATL AQ_GlobalResetControl_ATL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global NVR Interface: 00000100 */
/*                  Global NVR Interface: 00000100 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global NVR Interface */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
                    /*! \brief 00000100.F R/WSC NVR Execute Operation
                        AQ_GlobalNvrInterface_ATL.u0.bits_0.nvrExecuteOperation

                        Default = 0x0

                        NVR Execute Operation
                        1 = Start NVR Operation
                        

                 <B>Notes:</B>
                        When set to 1, the NVR operation will begin. Ensure that the uP is stalled using the  See MCP Run Stall bit to ensure no NVR contention.  */
      unsigned int   nvrExecuteOperation : 1;    /* 00000100.F  R/WSC      Default = 0x0 */
                     /* NVR Execute Operation
                        1 = Start NVR Operation
                          */
                    /*! \brief 00000100.E R/W NVR Write Mode
                        AQ_GlobalNvrInterface_ATL.u0.bits_0.nvrWriteMode

                        Default = 0x0

                        NVR Write Mode
                        1 = Write to NVR
                        0 = Read from NVR
                        
  */
      unsigned int   nvrWriteMode : 1;    /* 00000100.E  R/W      Default = 0x0 */
                     /* NVR Write Mode
                        1 = Write to NVR
                        0 = Read from NVR
                          */
                    /*! \brief 00000100.D R/W Freeze NVR CRC
                        AQ_GlobalNvrInterface_ATL.u0.bits_0.freezeNvrCrc

                        Default = 0x0

                        Freeze NVR CRC
                        1 = Freeze NVR Mailbox CRC calculation register
                        

                 <B>Notes:</B>
                        To prevent an erroneous answer, this bit should not be set at the same time the  See NVR Execute Operation bit is set.  */
      unsigned int   freezeNvrCrc : 1;    /* 00000100.D  R/W      Default = 0x0 */
                     /* Freeze NVR CRC
                        1 = Freeze NVR Mailbox CRC calculation register
                          */
                    /*! \brief 00000100.C R/WSC Reset NVR CRC
                        AQ_GlobalNvrInterface_ATL.u0.bits_0.resetNvrCrc

                        Default = 0x0

                        Reset NVR CRC
                        1 = Reset NVR Mailbox CRC calculation register
                        

                 <B>Notes:</B>
                        To prevent an erroneous answer, this bit should not be set at the same time the  See NVR Execute Operation bit is set.  */
      unsigned int   resetNvrCrc : 1;    /* 00000100.C  R/WSC      Default = 0x0 */
                     /* Reset NVR CRC
                        1 = Reset NVR Mailbox CRC calculation register
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 00000100.A R/W NVR Burst
                        AQ_GlobalNvrInterface_ATL.u0.bits_0.nvrBurst

                        Default = 0x0

                        NVR Burst
                        0 = Single read or write operation of up to 4 bytes
                        1 = Burst operation
                        

                 <B>Notes:</B>
                        When this bit is set, the operation is a burst operation where more than 32-bits is read from the NVR or written to the NVR. This bit should be set to one until the last burst in the read or write operation, when it should be set to zero. It operates by gating the SPI clock, and not restarting it until new data is ready to be written, or the previous contents have been read. Each burst of data requires the NVR Execute Operation bit to be set to initiate the next phase.  */
      unsigned int   nvrBurst : 1;    /* 00000100.A  R/W      Default = 0x0 */
                     /* NVR Burst
                        0 = Single read or write operation of up to 4 bytes
                        1 = Burst operation
                          */
      unsigned int   reserved2 : 1;
                    /*! \brief 00000100.8 RO NVR Busy
                        AQ_GlobalNvrInterface_ATL.u0.bits_0.nvrBusy

                        

                        NVR Busy
                        1 = NVR is busy
                        0 = NVR is ready
                        

                 <B>Notes:</B>
                        When set to 1, the NVR is busy. A new NVR operation should not occur until this bit is 0. If the NVR clock is greater than 64/63 of the MDIO clock, this bit never needs to be polled when operating over the MDIO.   */
      unsigned int   nvrBusy : 1;    /* 00000100.8  RO       */
                     /* NVR Busy
                        1 = NVR is busy
                        0 = NVR is ready
                          */
                    /*! \brief 00000100.7:0 R/W NVR Opcode [7:0]
                        AQ_GlobalNvrInterface_ATL.u0.bits_0.nvrOpcode

                        Default = 0x03

                        NVR instruction opcode
                        
  */
      unsigned int   nvrOpcode : 8;    /* 00000100.7:0  R/W      Default = 0x03 */
                     /* NVR instruction opcode
                          */
    } bits_0;
    uint32_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global NVR Interface */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
                    /*! \brief 00000104.F:0 RO NVR Mailbox CRC [F:0]
                        AQ_GlobalNvrInterface_ATL.u1.bits_1.nvrMailboxCrc

                        

                        NVR Mailbox CRC
                        The running CRC-16 of everything passing through the NVR interface
                        
                 <B>Notes:</B>
                        The CRC-16 over all data written or read through the NVR interface. The CRC-16 is calculated by dividing the data by:
                        x^16 + x^12 + x^5 + 1 */
      unsigned int   nvrMailboxCrc : 16;    /* 00000104.F:0  RO       */
                     /* NVR Mailbox CRC
                        The running CRC-16 of everything passing through the NVR interface
                          */
    } bits_1;
    uint32_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global NVR Interface */
  union
  {
    struct
    {
      unsigned int   reserved0 : 8;
      /* NOTE actually is one nvrAddress bitfield, divided for compatibility with EUR regmap */
                    /*! \brief 00000108.17:0 R/W NVR Address [17:0]
                        AQ_GlobalNvrInterface_ATL.u3.bits_3.nvrAddressLSW

                        Default = 0x00

                        NVR Address [17:0]
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the NVR. This is self-incrementing and will automatically increment after each
                        read or write operation. The increment amount is based on the data length (i.e. increments by 4 if the data length is 4 bytes)  */
      unsigned int   nvrAddressMSW : 8;    /* 00000108.17:10  R/W      Default = 0x00 */
      unsigned int   nvrAddressLSW : 16;    /* 00000108.F:0 */
                     /* NVR Address [17:0]
                          */
    } bits_2;
    uint32_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global NVR Interface */
  union
  {
    struct
    {
      /* NOTE actually is one nvrData bitfield, divided for compatibility with EUR regmap */
                    /*! \brief 0000010C.F:0 R/W NVR Data [F:0]
                        AQ_GlobalNvrInterface_ATL.u3.bits_3.nvrDataMSW

                        Default = 0x0000

                        NVR data
                        

                 <B>Notes:</B>
                        Data is stored and read-out from these registers in little-endian format for operations such as FLASH device ID, and for programming the processor.
                        
                        For instance the 64K Atmel device code reads out as two bytes 0x651F into the LSW register, whereas the datasheet indicates that 1F is the first byte read, followed by 65 as the second byte.  */
      unsigned int   nvrDataMSW : 16;    /* 0000010C.F:0  R/W      Default = 0x0000 */
      unsigned int   nvrDataLSW : 16;    /* 0000010C.1F:10 */
                     /* NVR data
                          */
    } bits_3;
    uint32_t word_3;
  } u3;
} AQ_GlobalNvrInterface_ATL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Control: 00000400 */
/*                  Global Control: 00000400 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 32;
    } bits_0;
    uint32_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
                    /*! \brief 00000404.F R/W uP Reset
                        AQ_GlobalControl_ATL.u1.bits_1.upReset

                        Default = 0x0

                        uP Reset
                        1 = Reset
                        

                 <B>Notes:</B>
                        Set to 1 to reset the PIF master and slave bus. Set to 0 for normal operation.  */
      unsigned int   upReset : 1;    /* 00000404.F  R/W      Default = 0x0 */
                     /* uP Reset
                        1 = Reset
                          */
      unsigned int   reserved1 : 14;
                    /*! \brief 00000404.0 R/W uP Run Stall
                        AQ_GlobalControl_ATL.u1.bits_1.upRunStall

                        Default = 0x0

                        uP Run Stall
                        1 = uP Run Stall
                        0 = uP normal mode
                        

                 <B>Notes:</B>
                        Deactivates the uP from pif address space access.  */
      unsigned int   upRunStall : 1;    /* 00000404.0  R/W      Default = 0x0 */
                     /* uP Run Stall
                        1 = uP Run Stall
                        0 = uP normal mode
                          */
    } bits_1;
    uint32_t word_1;
  } u1;
} AQ_GlobalControl_ATL;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global NVR Provisioning: 00000530 */
/*                  Global NVR Provisioning: 00000530 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global NVR Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 21;
                    /*! \brief 00000530.A:8 R/WPD NVR Data Length [2:0]
                        AQ_GlobalNvrProvisioning_ATL.u0.bits_0.nvrDataLength

                        Provisionable Default = 0x4

                        NVR data length ranges from 0 bytes to 4 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the data burst used in read and write operations.
                          */
      unsigned int   nvrDataLength : 3;    /* 00000530.A:8  R/WPD      Provisionable Default = 0x4 */
                     /* NVR data length ranges from 0 bytes to 4 bytes
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 00000530.6:4 R/WPD NVR Dummy Length [2:0]
                        AQ_GlobalNvrProvisioning_ATL.u0.bits_0.nvrDummyLength

                        Provisionable Default = 0x0

                        NVR dummy length ranges from 0 bytes to 4 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the dummy field used in some manufacturer’s read status and write status operations.
                          */
      unsigned int   nvrDummyLength : 3;    /* 00000530.6:4  R/WPD      Provisionable Default = 0x0 */
                     /* NVR dummy length ranges from 0 bytes to 4 bytes
                          */
      unsigned int   reserved2 : 2;
                    /*! \brief 00000530.1:0 R/WPD NVR Address Length [1:0]
                        AQ_GlobalNvrProvisioning_ATL.u0.bits_0.nvrAddressLength

                        Provisionable Default = 0x2

                        NVR address length ranges from 0 bytes up to 3 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the address field used in read and write operations. Use of this field is enabled via Bit 8 of  See Global NVR Provisioning 2: Address 00000534  on page 501.
                          */
      unsigned int   nvrAddressLength : 2;    /* 00000530.1:0  R/WPD      Provisionable Default = 0x2 */
                     /* NVR address length ranges from 0 bytes up to 3 bytes
                          */
    } bits_0;
    uint32_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global NVR Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 23;
                    /*! \brief 00000534.8 R/WPD NVR Address Length Override
                        AQ_GlobalNvrProvisioning_ATL.u1.bits_1.nvrAddressLengthOverride

                        Provisionable Default = 0x0

                        NVR Address length Override
                        0 = NVR address length is based on the "NVR_SIZE" pin.
                        1 = NVR address length is based on the  See NVR Address Length [1:0]  register
                        

                 <B>Notes:</B>
                        When this bit = 0 and NVR_SIZE pin = 0, the NVR address length is 2 bytes. When this bit = 0 and the NVR_SIZE pin = 1, the NVR address length is 3 bytes. When this bit = 1 the NVR address length is from the  See NVR Address Length [1:0]   */
      unsigned int   nvrAddressLengthOverride : 1;    /* 00000534.8  R/WPD      Provisionable Default = 0x0 */
                     /* NVR Address length Override
                        0 = NVR address length is based on the "NVR_SIZE" pin.
                        1 = NVR address length is based on the  See NVR Address Length [1:0]  register
                          */
                    /*! \brief 00000534.7:0 R/WPD NVR Clock Divide [7:0]
                        AQ_GlobalNvrProvisioning_ATL.u1.bits_1.nvrClockDivide

                        Provisionable Default = 0xA0

                        NVR clock divide.
                        

                 <B>Notes:</B>Clock frequency is divided by the NVR clock divide + 1
                          */
      unsigned int   nvrClockDivide : 8;    /* 00000534.7:0  R/WPD      Provisionable Default = 0xA0 */
                     /* NVR clock divide.
                          */
    } bits_1;
    uint32_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global NVR Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 30;
                    /*! \brief 00000538.1 R/W NVR Daisy Chain Clock Divide Override
                        AQ_GlobalNvrProvisioning_ATL.u2.bits_2.nvrDaisyChainClockDivideOverride

                        Default = 0x0

                        NVR Daisy Chain Clock Divide Override
                        1 = Override NVR clock divide when in daisy chain master mode
                        

                 <B>Notes:</B>
                        When in daisy chain master mode, the clock divide configuration is received from the FLASH. This bit will override the clock divide configuration from the FLASH with the  See NVR Clock Divide [7:0] .  */
      unsigned int   nvrDaisyChainClockDivideOverride : 1;    /* 00000538.1  R/W      Default = 0x0 */
                     /* NVR Daisy Chain Clock Divide Override
                        1 = Override NVR clock divide when in daisy chain master mode
                          */
      unsigned int   reserved1 : 1;
    } bits_2;
    uint32_t word_2;
  } u2;
} AQ_GlobalNvrProvisioning_ATL;


#endif
/*@}*/
/*@}*/