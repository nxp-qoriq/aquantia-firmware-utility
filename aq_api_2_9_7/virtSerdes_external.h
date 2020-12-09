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
*   for the virtSerdes Registers block.
 */        

/*! \addtogroup registerMap
  @{
*/

/*! \defgroup virtSerdes_registers virtSerdes Registers
*   This module contains the data structures and doxygen comments
*   for the virtSerdes Registers block.
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
*   This file contains the c header structures for the registers contained in the virtSerdes Registers block.
*
*   The bit fields in this structure are from LSbit to MSbit
*
***********************************************************************/


/*@{*/
#ifndef AQ_RHEA_virtSerdes_REGS_HEADER
#define AQ_RHEA_virtSerdes_REGS_HEADER


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ASIC_RX_OVRD_IN_0: 1B.1007 */
/*                  LANE0_DIG_ASIC_RX_OVRD_IN_0: 1B.1007 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ASIC_RX_OVRD_IN_0 */
  union
  {
    struct
    {
                    /*! \brief 1B.1007.0 R/W RESET
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.reset

                        Default = 0x0

                        Override value for rx_reset
  */
      unsigned int   reset : 1;    /* 1B.1007.0  R/W      Default = 0x0 */
                     /* Override value for rx_reset  */
                    /*! \brief 1B.1007.1 R/W RESET_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.resetOvrdEn

                        Default = 0x0

                        Enable override value for rx_reset
  */
      unsigned int   resetOvrdEn : 1;    /* 1B.1007.1  R/W      Default = 0x0 */
                     /* Enable override value for rx_reset  */
                    /*! \brief 1B.1007.2 R/W INVERT
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.invert

                        Default = 0x0

                        Override value for rx_invert
  */
      unsigned int   invert : 1;    /* 1B.1007.2  R/W      Default = 0x0 */
                     /* Override value for rx_invert  */
                    /*! \brief 1B.1007.3 R/W INVERT_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.invertOvrdEn

                        Default = 0x0

                        Enable override value for rx_invert
  */
      unsigned int   invertOvrdEn : 1;    /* 1B.1007.3  R/W      Default = 0x0 */
                     /* Enable override value for rx_invert  */
                    /*! \brief 1B.1007.4 R/W DATA_EN
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.dataEn

                        Default = 0x0

                        Override value for rx_data_en
  */
      unsigned int   dataEn : 1;    /* 1B.1007.4  R/W      Default = 0x0 */
                     /* Override value for rx_data_en  */
                    /*! \brief 1B.1007.5 R/W DATA_EN_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.dataEnOvrdEn

                        Default = 0x0

                        Enable override value for rx_data_en
  */
      unsigned int   dataEnOvrdEn : 1;    /* 1B.1007.5  R/W      Default = 0x0 */
                     /* Enable override value for rx_data_en  */
                    /*! \brief 1B.1007.6 R/W REQ
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.req

                        Default = 0x0

                        Override value for rx_req
  */
      unsigned int   req : 1;    /* 1B.1007.6  R/W      Default = 0x0 */
                     /* Override value for rx_req  */
                    /*! \brief 1B.1007.7 R/W REQ_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.reqOvrdEn

                        Default = 0x0

                        Enable override value for rx_req
  */
      unsigned int   reqOvrdEn : 1;    /* 1B.1007.7  R/W      Default = 0x0 */
                     /* Enable override value for rx_req  */
                    /*! \brief 1B.1007.8 R/W LPD
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.lpd

                        Default = 0x0

                        Override value for rx_lpd
  */
      unsigned int   lpd : 1;    /* 1B.1007.8  R/W      Default = 0x0 */
                     /* Override value for rx_lpd  */
                    /*! \brief 1B.1007.9 R/W LPD_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.lpdOvrdEn

                        Default = 0x0

                        Enable override value for rx_lpd
  */
      unsigned int   lpdOvrdEn : 1;    /* 1B.1007.9  R/W      Default = 0x0 */
                     /* Enable override value for rx_lpd  */
                    /*! \brief 1B.1007.B:A R/W PSTATE
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.pstate

                        Default = 0x0

                        Override value for rx_pstate
  */
      unsigned int   pstate : 2;    /* 1B.1007.B:A  R/W      Default = 0x0 */
                     /* Override value for rx_pstate  */
                    /*! \brief 1B.1007.C R/W PSTATE_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.pstateOvrdEn

                        Default = 0x0

                        Enable override value for rx_pstate
  */
      unsigned int   pstateOvrdEn : 1;    /* 1B.1007.C  R/W      Default = 0x0 */
                     /* Enable override value for rx_pstate  */
                    /*! \brief 1B.1007.D R/W RX_DFE_BYPASS
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.rxDfeBypass

                        Default = 0x0

                        Override value for rx_dfe_bypass
  */
      unsigned int   rxDfeBypass : 1;    /* 1B.1007.D  R/W      Default = 0x0 */
                     /* Override value for rx_dfe_bypass  */
                    /*! \brief 1B.1007.E R/W RX_DFE_BYPASS_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.rxDfeBypassOvrdEn

                        Default = 0x0

                        Enable override value for rx_dfe_bypass
  */
      unsigned int   rxDfeBypassOvrdEn : 1;    /* 1B.1007.E  R/W      Default = 0x0 */
                     /* Enable override value for rx_dfe_bypass  */
                    /*! \brief 1B.1007.F RO RESERVED_15_15
                        AQ_Lane0DigAsicRxOvrdIn0_RHEA.u0.bits_0.reserved1515

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1515 : 1;    /* 1B.1007.F  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAsicRxOvrdIn0_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ASIC_RX_OVRD_IN_1: 1B.1008 */
/*                  LANE0_DIG_ASIC_RX_OVRD_IN_1: 1B.1008 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ASIC_RX_OVRD_IN_1 */
  union
  {
    struct
    {
                    /*! \brief 1B.1008.6:0 R/W REF_LD_VAL
                        AQ_Lane0DigAsicRxOvrdIn1_RHEA.u0.bits_0.refLdVal

                        Default = 0x14

                        Override value for rx_ref_ld_val
  */
      unsigned int   refLdVal : 7;    /* 1B.1008.6:0  R/W      Default = 0x14 */
                     /* Override value for rx_ref_ld_val  */
                    /*! \brief 1B.1008.7 R/W REF_LD_VAL_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn1_RHEA.u0.bits_0.refLdValOvrdEn

                        Default = 0x0

                        Enable override value for rx_ref_ld_val
  */
      unsigned int   refLdValOvrdEn : 1;    /* 1B.1008.7  R/W      Default = 0x0 */
                     /* Enable override value for rx_ref_ld_val  */
                    /*! \brief 1B.1008.A:8 R/W RATE
                        AQ_Lane0DigAsicRxOvrdIn1_RHEA.u0.bits_0.rate

                        Default = 0x0

                        Override value for rx_rate
  */
      unsigned int   rate : 3;    /* 1B.1008.A:8  R/W      Default = 0x0 */
                     /* Override value for rx_rate  */
                    /*! \brief 1B.1008.B R/W RATE_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn1_RHEA.u0.bits_0.rateOvrdEn

                        Default = 0x0

                        Enable override value for rx_rate
  */
      unsigned int   rateOvrdEn : 1;    /* 1B.1008.B  R/W      Default = 0x0 */
                     /* Enable override value for rx_rate  */
                    /*! \brief 1B.1008.E:C R/W WIDTH
                        AQ_Lane0DigAsicRxOvrdIn1_RHEA.u0.bits_0.width

                        Default = 0x0

                        Override value for rx_width
  */
      unsigned int   width : 3;    /* 1B.1008.E:C  R/W      Default = 0x0 */
                     /* Override value for rx_width  */
                    /*! \brief 1B.1008.F R/W WIDTH_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdIn1_RHEA.u0.bits_0.widthOvrdEn

                        Default = 0x0

                        Enable override value for rx_width
  */
      unsigned int   widthOvrdEn : 1;    /* 1B.1008.F  R/W      Default = 0x0 */
                     /* Enable override value for rx_width  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAsicRxOvrdIn1_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ASIC_RX_OVRD_VCO_IN: 1B.100D */
/*                  LANE0_DIG_ASIC_RX_OVRD_VCO_IN: 1B.100D */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ASIC_RX_OVRD_VCO_IN */
  union
  {
    struct
    {
                    /*! \brief 1B.100D.B:0 R/W CDR_VCO_CONFIG
                        AQ_Lane0DigAsicRxOvrdVcoIn_RHEA.u0.bits_0.cdrVcoConfig

                        Default = 0x000

                        Override value for rx_cdr_vco_config
  */
      unsigned int   cdrVcoConfig : 12;    /* 1B.100D.B:0  R/W      Default = 0x000 */
                     /* Override value for rx_cdr_vco_config  */
                    /*! \brief 1B.100D.C R/W CDR_VCO_CONFIG_OVRD_EN
                        AQ_Lane0DigAsicRxOvrdVcoIn_RHEA.u0.bits_0.cdrVcoConfigOvrdEn

                        Default = 0x0

                        Enable override value for rx_cdr_vco_config
  */
      unsigned int   cdrVcoConfigOvrdEn : 1;    /* 1B.100D.C  R/W      Default = 0x0 */
                     /* Enable override value for rx_cdr_vco_config  */
                    /*! \brief 1B.100D.F:D RO RESERVED_15_13
                        AQ_Lane0DigAsicRxOvrdVcoIn_RHEA.u0.bits_0.reserved1513

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1513 : 3;    /* 1B.100D.F:D  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAsicRxOvrdVcoIn_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ASIC_RX_ASIC_IN_0: 1B.1019 */
/*                  LANE0_DIG_ASIC_RX_ASIC_IN_0: 1B.1019 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ASIC_RX_ASIC_IN_0 */
  union
  {
    struct
    {
                    /*! \brief 1B.1019.0 RO RESET
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.reset

                        Default = 0x0

                        Value from ASIC for rx_reset
  */
      unsigned int   reset : 1;    /* 1B.1019.0  RO      Default = 0x0 */
                     /* Value from ASIC for rx_reset  */
                    /*! \brief 1B.1019.1 RO INVERT
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.invert

                        Default = 0x0

                        Value from ASIC for rx_invert
  */
      unsigned int   invert : 1;    /* 1B.1019.1  RO      Default = 0x0 */
                     /* Value from ASIC for rx_invert  */
                    /*! \brief 1B.1019.2 RO DATA_EN
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.dataEn

                        Default = 0x0

                        Value from ASIC for rx_data_en
  */
      unsigned int   dataEn : 1;    /* 1B.1019.2  RO      Default = 0x0 */
                     /* Value from ASIC for rx_data_en  */
                    /*! \brief 1B.1019.3 RO REQ
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.req

                        Default = 0x0

                        Value from ASIC for rx_req
  */
      unsigned int   req : 1;    /* 1B.1019.3  RO      Default = 0x0 */
                     /* Value from ASIC for rx_req  */
                    /*! \brief 1B.1019.4 RO LPD
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.lpd

                        Default = 0x0

                        Value from ASIC for rx_lpd
  */
      unsigned int   lpd : 1;    /* 1B.1019.4  RO      Default = 0x0 */
                     /* Value from ASIC for rx_lpd  */
                    /*! \brief 1B.1019.6:5 RO PSTATE
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.pstate

                        Default = 0x0

                        Value from ASIC for rx_pstate
  */
      unsigned int   pstate : 2;    /* 1B.1019.6:5  RO      Default = 0x0 */
                     /* Value from ASIC for rx_pstate  */
                    /*! \brief 1B.1019.9:7 RO RATE
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.rate

                        Default = 0x0

                        Value from ASIC for rx_rate
  */
      unsigned int   rate : 3;    /* 1B.1019.9:7  RO      Default = 0x0 */
                     /* Value from ASIC for rx_rate  */
                    /*! \brief 1B.1019.C:A RO WIDTH
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.width

                        Default = 0x0

                        Value from ASIC for rx_width[2:0]
  */
      unsigned int   width : 3;    /* 1B.1019.C:A  RO      Default = 0x0 */
                     /* Value from ASIC for rx_width[2:0]  */
                    /*! \brief 1B.1019.D RO DIV16P5_CLK_EN
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.div16p5ClkEn

                        Default = 0x0

                        Value from ASIC for rx_div16p5_clk_en
  */
      unsigned int   div16p5ClkEn : 1;    /* 1B.1019.D  RO      Default = 0x0 */
                     /* Value from ASIC for rx_div16p5_clk_en  */
                    /*! \brief 1B.1019.E RO RX_DFE_BYPASS
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.rxDfeBypass

                        Default = 0x0

                        Value from ASIC for rx_dfe_bypass
  */
      unsigned int   rxDfeBypass : 1;    /* 1B.1019.E  RO      Default = 0x0 */
                     /* Value from ASIC for rx_dfe_bypass  */
                    /*! \brief 1B.1019.F RO CDR_TRACK_EN
                        AQ_Lane0DigAsicRxAsicIn0_RHEA.u0.bits_0.cdrTrackEn

                        Default = 0x0

                        Value from ASIC for rx_cdr_track_en
  */
      unsigned int   cdrTrackEn : 1;    /* 1B.1019.F  RO      Default = 0x0 */
                     /* Value from ASIC for rx_cdr_track_en  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAsicRxAsicIn0_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ASIC_RX_CDR_VCO_ASIC_IN: 1B.101D */
/*                  LANE0_DIG_ASIC_RX_CDR_VCO_ASIC_IN: 1B.101D */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ASIC_RX_CDR_VCO_ASIC_IN */
  union
  {
    struct
    {
                    /*! \brief 1B.101D.B:0 RO RX_CDR_VCO_CONFIG
                        AQ_Lane0DigAsicRxCdrVcoAsicIn_RHEA.u0.bits_0.rxCdrVcoConfig

                        Default = 0x000

                        Value from ASIC for rx_cdr_vco_config
  */
      unsigned int   rxCdrVcoConfig : 12;    /* 1B.101D.B:0  RO      Default = 0x000 */
                     /* Value from ASIC for rx_cdr_vco_config  */
                    /*! \brief 1B.101D.F:C RO RESERVED_15_12
                        AQ_Lane0DigAsicRxCdrVcoAsicIn_RHEA.u0.bits_0.reserved1512

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1512 : 4;    /* 1B.101D.F:C  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAsicRxCdrVcoAsicIn_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_LD_VAL_1: 1B.1080 */
/*                  LANE0_DIG_RX_STAT_LD_VAL_1: 1B.1080 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_LD_VAL_1 */
  union
  {
    struct
    {
                    /*! \brief 1B.1080.E:0 R/W SC1_LD_VAL
                        AQ_Lane0DigRxStatLdVal1_RHEA.u0.bits_0.sc1LdVal

                        Default = 0x0040

                        Sample counter #1 load value
  */
      unsigned int   sc1LdVal : 15;    /* 1B.1080.E:0  R/W      Default = 0x0040 */
                     /* Sample counter #1 load value  */
                    /*! \brief 1B.1080.F R/W SC1_START
                        AQ_Lane0DigRxStatLdVal1_RHEA.u0.bits_0.sc1Start

                        Default = 0x0

                        Start sample counter #1 This is a self-clearing bit
  */
      unsigned int   sc1Start : 1;    /* 1B.1080.F  R/W      Default = 0x0 */
                     /* Start sample counter #1 This is a self-clearing bit  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatLdVal1_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_DATA_MSK: 1B.1081 */
/*                  LANE0_DIG_RX_STAT_DATA_MSK: 1B.1081 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_DATA_MSK */
  union
  {
    struct
    {
                    /*! \brief 1B.1081.F:0 R/W DATA_MSK_15_0
                        AQ_Lane0DigRxStatDataMsk_RHEA.u0.bits_0.dataMsk150

                        Default = 0xFFFF

                        Value of data_msk_r[15:0]
  */
      unsigned int   dataMsk150 : 16;    /* 1B.1081.F:0  R/W      Default = 0xFFFF */
                     /* Value of data_msk_r[15:0]  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatDataMsk_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_MATCH_CTL0: 1B.1082 */
/*                  LANE0_DIG_RX_STAT_MATCH_CTL0: 1B.1082 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_MATCH_CTL0 */
  union
  {
    struct
    {
                    /*! \brief 1B.1082.4:0 R/W PTTRN_MSK_CR1A_4_0
                        AQ_Lane0DigRxStatMatchCtl0_RHEA.u0.bits_0.pttrnMskCr1a40

                        Default = 0x06

                        Value of pattern A mask for 1st correlator (bits 4:0)
  */
      unsigned int   pttrnMskCr1a40 : 5;    /* 1B.1082.4:0  R/W      Default = 0x06 */
                     /* Value of pattern A mask for 1st correlator (bits 4:0)  */
                    /*! \brief 1B.1082.9:5 R/W PTTRN_CR1A_4_0
                        AQ_Lane0DigRxStatMatchCtl0_RHEA.u0.bits_0.pttrnCr1a40

                        Default = 0x00

                        Value of pattern A for 1st correlator (bits 4:0)
  */
      unsigned int   pttrnCr1a40 : 5;    /* 1B.1082.9:5  R/W      Default = 0x00 */
                     /* Value of pattern A for 1st correlator (bits 4:0)  */
                    /*! \brief 1B.1082.D:A R/W DATA_MSK_19_16
                        AQ_Lane0DigRxStatMatchCtl0_RHEA.u0.bits_0.dataMsk1916

                        Default = 0xF

                        Value of data_msk_r[19:16]
  */
      unsigned int   dataMsk1916 : 4;    /* 1B.1082.D:A  R/W      Default = 0xF */
                     /* Value of data_msk_r[19:16]  */
                    /*! \brief 1B.1082.F:E R/W SCOPE_DLY
                        AQ_Lane0DigRxStatMatchCtl0_RHEA.u0.bits_0.scopeDly

                        Default = 0x0

                        # of clock cycle delays on scope_data_rxclk An additional MSB is added in SCOPE_DLY_2
  */
      unsigned int   scopeDly : 2;    /* 1B.1082.F:E  R/W      Default = 0x0 */
                     /* # of clock cycle delays on scope_data_rxclk An additional MSB is added in SCOPE_DLY_2  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatMatchCtl0_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_MATCH_CTL1: 1B.1083 */
/*                  LANE0_DIG_RX_STAT_MATCH_CTL1: 1B.1083 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_MATCH_CTL1 */
  union
  {
    struct
    {
                    /*! \brief 1B.1083.0 R/W PTTRN_CR1B_EN
                        AQ_Lane0DigRxStatMatchCtl1_RHEA.u0.bits_0.pttrnCr1bEn

                        Default = 0x0

                        Enable pattern B matching for 1st correlator
  */
      unsigned int   pttrnCr1bEn : 1;    /* 1B.1083.0  R/W      Default = 0x0 */
                     /* Enable pattern B matching for 1st correlator  */
                    /*! \brief 1B.1083.5:1 R/W PTTRN_MSK_CR1B_4_0
                        AQ_Lane0DigRxStatMatchCtl1_RHEA.u0.bits_0.pttrnMskCr1b40

                        Default = 0x00

                        Value of pattern B mask for 1st correlator (bits 4:0)
  */
      unsigned int   pttrnMskCr1b40 : 5;    /* 1B.1083.5:1  R/W      Default = 0x00 */
                     /* Value of pattern B mask for 1st correlator (bits 4:0)  */
                    /*! \brief 1B.1083.A:6 R/W PTTRN_CR1B_4_0
                        AQ_Lane0DigRxStatMatchCtl1_RHEA.u0.bits_0.pttrnCr1b40

                        Default = 0x00

                        Value of pattern B for 1st correlator (bits 4:0)
  */
      unsigned int   pttrnCr1b40 : 5;    /* 1B.1083.A:6  R/W      Default = 0x00 */
                     /* Value of pattern B for 1st correlator (bits 4:0)  */
                    /*! \brief 1B.1083.B R/W PTTRN_CR1A_ADPT_EN
                        AQ_Lane0DigRxStatMatchCtl1_RHEA.u0.bits_0.pttrnCr1aAdptEn

                        Default = 0x1

                        Enable ORing of adapation pattern with pattern CR1A
  */
      unsigned int   pttrnCr1aAdptEn : 1;    /* 1B.1083.B  R/W      Default = 0x1 */
                     /* Enable ORing of adapation pattern with pattern CR1A  */
                    /*! \brief 1B.1083.F:C RO RESERVED_15_12
                        AQ_Lane0DigRxStatMatchCtl1_RHEA.u0.bits_0.reserved1512

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1512 : 4;    /* 1B.1083.F:C  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatMatchCtl1_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_STAT_CTL0: 1B.1084 */
/*                  LANE0_DIG_RX_STAT_STAT_CTL0: 1B.1084 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_STAT_CTL0 */
  union
  {
    struct
    {
                    /*! \brief 1B.1084.0 R/W RESERVED_0
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.reserved0

                        Default = 0x0

                        Reserved bit
  */
      unsigned int   reserved0 : 1;    /* 1B.1084.0  R/W      Default = 0x0 */
                     /* Reserved bit  */
                    /*! \brief 1B.1084.1 R/W CORR_SHFT_SEL_VGA
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.corrShftSelVga

                        Default = 0x0

                        Select shift for error going to VGA. 0:none, 1:>>1
  */
      unsigned int   corrShftSelVga : 1;    /* 1B.1084.1  R/W      Default = 0x0 */
                     /* Select shift for error going to VGA. 0:none, 1:>>1  */
                    /*! \brief 1B.1084.2 R/W CORR_SHFT_SEL
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.corrShftSel

                        Default = 0x0

                        Select shift for phase. 0:none, 1:>>1
  */
      unsigned int   corrShftSel : 1;    /* 1B.1084.2  R/W      Default = 0x0 */
                     /* Select shift for phase. 0:none, 1:>>1  */
                    /*! \brief 1B.1084.4:3 R/W CORR_SRC_SEL
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.corrSrcSel

                        Default = 0x0

                        Select correlation input source 0x0 - rx_error[39:0]
                        
                        0x1 - rx_phase[39:0]
                        
                        0x2 - {{20{scope_data_rxclk_dly_s01}},{20{scope_data_rxclk_dly}}}
                        
                        0x3 - No correlation
  */
      unsigned int   corrSrcSel : 2;    /* 1B.1084.4:3  R/W      Default = 0x0 */
                     /* Select correlation input source 0x0 - rx_error[39:0]
                        
                        0x1 - rx_phase[39:0]
                        
                        0x2 - {{20{scope_data_rxclk_dly_s01}},{20{scope_data_rxclk_dly}}}
                        
                        0x3 - No correlation  */
                    /*! \brief 1B.1084.5 R/W CORR_MODE_EN
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.corrModeEn

                        Default = 0x0

                        Enable correlation mode
  */
      unsigned int   corrModeEn : 1;    /* 1B.1084.5  R/W      Default = 0x0 */
                     /* Enable correlation mode  */
                    /*! \brief 1B.1084.9:6 R/W STAT_SHFT_SEL
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.statShftSel

                        Default = 0x0

                        Select stat source shift value 0x0 - Correlate N-1  -> N+3 (use N for offset calibration)
                        
                        0x1 - Correlate N+1  -> N+5 (for taps1-5)
                        
                        0x2 - Correlate N+6  -> N+10
                        
                        0x3 - Correlate N+11 -> N+15
                        
                        0x4 - Correlate N+16 -> N+20
                        
                        0x5 - Correlate N+21 -> N+25
                        
                        0x6 - Correlate N+26 -> N+30
                        
                        0x7 - Correlate N+31 -> N+35
                        
                        0x8 - Correlate N+36 -> N+39
                        
                        Setting 0x8 is only used in 20b mode (for checking corr on bits 36-39)
  */
      unsigned int   statShftSel : 4;    /* 1B.1084.9:6  R/W      Default = 0x0 */
                     /* Select stat source shift value 0x0 - Correlate N-1  -> N+3 (use N for offset calibration)
                        
                        0x1 - Correlate N+1  -> N+5 (for taps1-5)
                        
                        0x2 - Correlate N+6  -> N+10
                        
                        0x3 - Correlate N+11 -> N+15
                        
                        0x4 - Correlate N+16 -> N+20
                        
                        0x5 - Correlate N+21 -> N+25
                        
                        0x6 - Correlate N+26 -> N+30
                        
                        0x7 - Correlate N+31 -> N+35
                        
                        0x8 - Correlate N+36 -> N+39
                        
                        Setting 0x8 is only used in 20b mode (for checking corr on bits 36-39)  */
                    /*! \brief 1B.1084.C:A R/W STAT_SRC_SEL
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.statSrcSel

                        Default = 0x0

                        Select stat source input 0x0 - {40{rx_cal_result}}
                        
                        0x1 - {{20{scope_data_rxclk_dly_s01}},{20{scope_data_rxclk_dly}}}
                        
                        0x2 - rx_phase[39:0]
                        
                        0x3 - rx_error[39:0]
                        
                        0x4 - rx_data[39:0]
                        
                        0x5 - rx_phdir[39:0]
                        
                        0x6 - 40'hFF_FFFF_FFFF
                        
                        0x7 - {40{tx_dcc_cal_result}}
  */
      unsigned int   statSrcSel : 3;    /* 1B.1084.C:A  R/W      Default = 0x0 */
                     /* Select stat source input 0x0 - {40{rx_cal_result}}
                        
                        0x1 - {{20{scope_data_rxclk_dly_s01}},{20{scope_data_rxclk_dly}}}
                        
                        0x2 - rx_phase[39:0]
                        
                        0x3 - rx_error[39:0]
                        
                        0x4 - rx_data[39:0]
                        
                        0x5 - rx_phdir[39:0]
                        
                        0x6 - 40'hFF_FFFF_FFFF
                        
                        0x7 - {40{tx_dcc_cal_result}}  */
                    /*! \brief 1B.1084.D R/W STAT_RXCLK_SEL
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.statRxclkSel

                        Default = 0x0

                        Select stat clock 0x0 - ref_range_clk
                        
                        0x1 - rx_dig_qword_clk (i.e. rx dword clk)
                        
                        Before changing stat_rxclk_sel_r from 1->0,
                        
                        the rx_dig_qword_clk must be active (i.e. enabled)
  */
      unsigned int   statRxclkSel : 1;    /* 1B.1084.D  R/W      Default = 0x0 */
                     /* Select stat clock 0x0 - ref_range_clk
                        
                        0x1 - rx_dig_qword_clk (i.e. rx dword clk)
                        
                        Before changing stat_rxclk_sel_r from 1->0,
                        
                        the rx_dig_qword_clk must be active (i.e. enabled)  */
                    /*! \brief 1B.1084.E R/W SC_TIMER_MODE
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.scTimerMode

                        Default = 0x1

                        Sample counter operation mode 0x0 - counts number of matched samples
                        
                        0x1 - counts clock cycles (i.e. a timer)
  */
      unsigned int   scTimerMode : 1;    /* 1B.1084.E  R/W      Default = 0x1 */
                     /* Sample counter operation mode 0x0 - counts number of matched samples
                        
                        0x1 - counts clock cycles (i.e. a timer)  */
                    /*! \brief 1B.1084.F R/W SKIP_EN
                        AQ_Lane0DigRxStatStatCtl0_RHEA.u0.bits_0.skipEn

                        Default = 0x0

                        Value of skip_en_r
  */
      unsigned int   skipEn : 1;    /* 1B.1084.F  R/W      Default = 0x0 */
                     /* Value of skip_en_r  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatStatCtl0_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_STAT_CTL1: 1B.1085 */
/*                  LANE0_DIG_RX_STAT_STAT_CTL1: 1B.1085 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_STAT_CTL1 */
  union
  {
    struct
    {
                    /*! \brief 1B.1085.0 R/W STAT_CNT_0_EN
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.statCnt0En

                        Default = 0x0

                        Enable for stat counter 0
  */
      unsigned int   statCnt0En : 1;    /* 1B.1085.0  R/W      Default = 0x0 */
                     /* Enable for stat counter 0  */
                    /*! \brief 1B.1085.1 R/W STAT_CNT_1_EN
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.statCnt1En

                        Default = 0x0

                        Enable for stat counter 1
  */
      unsigned int   statCnt1En : 1;    /* 1B.1085.1  R/W      Default = 0x0 */
                     /* Enable for stat counter 1  */
                    /*! \brief 1B.1085.2 R/W STAT_CNT_2_EN
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.statCnt2En

                        Default = 0x0

                        Enable for stat counter 2
  */
      unsigned int   statCnt2En : 1;    /* 1B.1085.2  R/W      Default = 0x0 */
                     /* Enable for stat counter 2  */
                    /*! \brief 1B.1085.3 R/W STAT_CNT_3_EN
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.statCnt3En

                        Default = 0x1

                        Enable for stat counter 3 Only counter to be enabled by default, since used for offset calibration
  */
      unsigned int   statCnt3En : 1;    /* 1B.1085.3  R/W      Default = 0x1 */
                     /* Enable for stat counter 3 Only counter to be enabled by default, since used for offset calibration  */
                    /*! \brief 1B.1085.4 R/W STAT_CNT_4_EN
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.statCnt4En

                        Default = 0x0

                        Enable for stat counter 4
  */
      unsigned int   statCnt4En : 1;    /* 1B.1085.4  R/W      Default = 0x0 */
                     /* Enable for stat counter 4  */
                    /*! \brief 1B.1085.5 R/W STAT_CNT_5_EN
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.statCnt5En

                        Default = 0x0

                        Enable for stat counter 5
  */
      unsigned int   statCnt5En : 1;    /* 1B.1085.5  R/W      Default = 0x0 */
                     /* Enable for stat counter 5  */
                    /*! \brief 1B.1085.6 R/W STAT_CNT_6_EN
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.statCnt6En

                        Default = 0x0

                        Enable for stat counter 6
  */
      unsigned int   statCnt6En : 1;    /* 1B.1085.6  R/W      Default = 0x0 */
                     /* Enable for stat counter 6  */
                    /*! \brief 1B.1085.8:7 R/W RESERVED_8_7
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.reserved87

                        Default = 0x0

                        Reserved bits
  */
      unsigned int   reserved87 : 2;    /* 1B.1085.8:7  R/W      Default = 0x0 */
                     /* Reserved bits  */
                    /*! \brief 1B.1085.9 R/W SC_PAUSE
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.scPause

                        Default = 0x0

                        Pause the sample counter and stat counters
  */
      unsigned int   scPause : 1;    /* 1B.1085.9  R/W      Default = 0x0 */
                     /* Pause the sample counter and stat counters  */
                    /*! \brief 1B.1085.A R/W STAT_CLK_EN
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.statClkEn

                        Default = 0x0

                        Clock gate enable for stat clock
  */
      unsigned int   statClkEn : 1;    /* 1B.1085.A  R/W      Default = 0x0 */
                     /* Clock gate enable for stat clock  */
                    /*! \brief 1B.1085.C:B R/W DATA_DLY_SEL
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.dataDlySel

                        Default = 0x0

                        # of clock cycle delays on rx_data[19:0] An additional MSB is added in DATA_DLY_SEL_2
  */
      unsigned int   dataDlySel : 2;    /* 1B.1085.C:B  R/W      Default = 0x0 */
                     /* # of clock cycle delays on rx_data[19:0] An additional MSB is added in DATA_DLY_SEL_2  */
                    /*! \brief 1B.1085.D R/W VLD_LOSS_CLR
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.vldLossClr

                        Default = 0x0

                        Clearing of stats collection upon loss of valid 0x0 - hold sample and stat counters
                        
                        0x1 - clear sample and stat counters
  */
      unsigned int   vldLossClr : 1;    /* 1B.1085.D  R/W      Default = 0x0 */
                     /* Clearing of stats collection upon loss of valid 0x0 - hold sample and stat counters
                        
                        0x1 - clear sample and stat counters  */
                    /*! \brief 1B.1085.F:E R/W VLD_CTL
                        AQ_Lane0DigRxStatStatCtl1_RHEA.u0.bits_0.vldCtl

                        Default = 0x0

                        Gating configuration of stats collection 0x0 - ignore both cdr_valid and rx_valid
                        
                        0x1 - gate stats collection with cdr_valid
                        
                        0x2 - gate stats collection with rx_valid
                        
                        0x3 - ignore both cdr_valid and rx_valid
  */
      unsigned int   vldCtl : 2;    /* 1B.1085.F:E  R/W      Default = 0x0 */
                     /* Gating configuration of stats collection 0x0 - ignore both cdr_valid and rx_valid
                        
                        0x1 - gate stats collection with cdr_valid
                        
                        0x2 - gate stats collection with rx_valid
                        
                        0x3 - ignore both cdr_valid and rx_valid  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatStatCtl1_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_SMPL_CNT1: 1B.1086 */
/*                  LANE0_DIG_RX_STAT_SMPL_CNT1: 1B.1086 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_SMPL_CNT1 */
  union
  {
    struct
    {
                    /*! \brief 1B.1086.E:0 RO SMPL_CNT1
                        AQ_Lane0DigRxStatSmplCnt1_RHEA.u0.bits_0.smplCnt1

                        Default = 0x0000

                        Current value of sample counter #1
  */
      unsigned int   smplCnt1 : 15;    /* 1B.1086.E:0  RO      Default = 0x0000 */
                     /* Current value of sample counter #1  */
                    /*! \brief 1B.1086.F RO SMPL_CNT1_DONE
                        AQ_Lane0DigRxStatSmplCnt1_RHEA.u0.bits_0.smplCnt1Done

                        Default = 0x0

                        Status of sample counter #1
  */
      unsigned int   smplCnt1Done : 1;    /* 1B.1086.F  RO      Default = 0x0 */
                     /* Status of sample counter #1  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatSmplCnt1_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_STAT_CNT_3: 1B.108A */
/*                  LANE0_DIG_RX_STAT_STAT_CNT_3: 1B.108A */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_STAT_CNT_3 */
  union
  {
    struct
    {
                    /*! \brief 1B.108A.E:0 RO STAT_CNT_3
                        AQ_Lane0DigRxStatStatCnt3_RHEA.u0.bits_0.statCnt3

                        Default = 0x0000

                        Current value of stat counter #3
  */
      unsigned int   statCnt3 : 15;    /* 1B.108A.E:0  RO      Default = 0x0000 */
                     /* Current value of stat counter #3  */
                    /*! \brief 1B.108A.F RO SMPL_CNT1_DONE
                        AQ_Lane0DigRxStatStatCnt3_RHEA.u0.bits_0.smplCnt1Done

                        Default = 0x0

                        Status of sample counter #1
  */
      unsigned int   smplCnt1Done : 1;    /* 1B.108A.F  RO      Default = 0x0 */
                     /* Status of sample counter #1  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatStatCnt3_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_CAL_COMP_CLK_CTL: 1B.108E */
/*                  LANE0_DIG_RX_STAT_CAL_COMP_CLK_CTL: 1B.108E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_CAL_COMP_CLK_CTL */
  union
  {
    struct
    {
                    /*! \brief 1B.108E.2:0 R/W PRECHRGE_CNT
                        AQ_Lane0DigRxStatCalCompClkCtl_RHEA.u0.bits_0.prechrgeCnt

                        Default = 0x1

                        Precharge Count (e.g. 5'd1 = 2 ref_range cycles)
  */
      unsigned int   prechrgeCnt : 3;    /* 1B.108E.2:0  R/W      Default = 0x1 */
                     /* Precharge Count (e.g. 5'd1 = 2 ref_range cycles)  */
                    /*! \brief 1B.108E.5:3 R/W REF_DIV_CNT
                        AQ_Lane0DigRxStatCalCompClkCtl_RHEA.u0.bits_0.refDivCnt

                        Default = 0x3

                        Ref range clock count (e.g. 5'd3 = 4 ref_range cycles)
  */
      unsigned int   refDivCnt : 3;    /* 1B.108E.5:3  R/W      Default = 0x3 */
                     /* Ref range clock count (e.g. 5'd3 = 4 ref_range cycles)  */
                    /*! \brief 1B.108E.F:6 RO RESERVED_15_6
                        AQ_Lane0DigRxStatCalCompClkCtl_RHEA.u0.bits_0.reserved156

                        Default = 0x000

                        Reserved for Future use
  */
      unsigned int   reserved156 : 10;    /* 1B.108E.F:6  RO      Default = 0x000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatCalCompClkCtl_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_MATCH_CTL2: 1B.108F */
/*                  LANE0_DIG_RX_STAT_MATCH_CTL2: 1B.108F */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_MATCH_CTL2 */
  union
  {
    struct
    {
                    /*! \brief 1B.108F.E:0 R/W PTTRN_CR1A_19_5
                        AQ_Lane0DigRxStatMatchCtl2_RHEA.u0.bits_0.pttrnCr1a195

                        Default = 0x0000

                        Value of pattern A for 1st correlator (bits 19:5)
  */
      unsigned int   pttrnCr1a195 : 15;    /* 1B.108F.E:0  R/W      Default = 0x0000 */
                     /* Value of pattern A for 1st correlator (bits 19:5)  */
                    /*! \brief 1B.108F.F RO RESERVED_15_15
                        AQ_Lane0DigRxStatMatchCtl2_RHEA.u0.bits_0.reserved1515

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1515 : 1;    /* 1B.108F.F  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatMatchCtl2_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_MATCH_CTL3: 1B.1090 */
/*                  LANE0_DIG_RX_STAT_MATCH_CTL3: 1B.1090 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_MATCH_CTL3 */
  union
  {
    struct
    {
                    /*! \brief 1B.1090.E:0 R/W PTTRN_MSK_CR1A_19_5
                        AQ_Lane0DigRxStatMatchCtl3_RHEA.u0.bits_0.pttrnMskCr1a195

                        Default = 0x0000

                        Value of pattern A mask for 1st correlator (bits 19:5)
  */
      unsigned int   pttrnMskCr1a195 : 15;    /* 1B.1090.E:0  R/W      Default = 0x0000 */
                     /* Value of pattern A mask for 1st correlator (bits 19:5)  */
                    /*! \brief 1B.1090.F RO RESERVED_15_15
                        AQ_Lane0DigRxStatMatchCtl3_RHEA.u0.bits_0.reserved1515

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1515 : 1;    /* 1B.1090.F  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatMatchCtl3_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_MATCH_CTL4: 1B.1091 */
/*                  LANE0_DIG_RX_STAT_MATCH_CTL4: 1B.1091 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_MATCH_CTL4 */
  union
  {
    struct
    {
                    /*! \brief 1B.1091.E:0 R/W PTTRN_CR1B_19_5
                        AQ_Lane0DigRxStatMatchCtl4_RHEA.u0.bits_0.pttrnCr1b195

                        Default = 0x0000

                        Value of pattern B for 1st correlator (bits 19:5)
  */
      unsigned int   pttrnCr1b195 : 15;    /* 1B.1091.E:0  R/W      Default = 0x0000 */
                     /* Value of pattern B for 1st correlator (bits 19:5)  */
                    /*! \brief 1B.1091.F RO RESERVED_15_15
                        AQ_Lane0DigRxStatMatchCtl4_RHEA.u0.bits_0.reserved1515

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1515 : 1;    /* 1B.1091.F  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatMatchCtl4_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_MATCH_CTL5: 1B.1092 */
/*                  LANE0_DIG_RX_STAT_MATCH_CTL5: 1B.1092 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_MATCH_CTL5 */
  union
  {
    struct
    {
                    /*! \brief 1B.1092.E:0 R/W PTTRN_MSK_CR1B_19_5
                        AQ_Lane0DigRxStatMatchCtl5_RHEA.u0.bits_0.pttrnMskCr1b195

                        Default = 0x0000

                        Value of pattern B mask for 1st correlator (bits 19:5)
  */
      unsigned int   pttrnMskCr1b195 : 15;    /* 1B.1092.E:0  R/W      Default = 0x0000 */
                     /* Value of pattern B mask for 1st correlator (bits 19:5)  */
                    /*! \brief 1B.1092.F RO RESERVED_15_15
                        AQ_Lane0DigRxStatMatchCtl5_RHEA.u0.bits_0.reserved1515

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1515 : 1;    /* 1B.1092.F  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatMatchCtl5_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_RX_STAT_STAT_CTL2: 1B.1093 */
/*                  LANE0_DIG_RX_STAT_STAT_CTL2: 1B.1093 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_RX_STAT_STAT_CTL2 */
  union
  {
    struct
    {
                    /*! \brief 1B.1093.0 R/W DATA_DLY_SEL_2
                        AQ_Lane0DigRxStatStatCtl2_RHEA.u0.bits_0.dataDlySel2

                        Default = 0x0

                        Additional MSB bit for DATA_DLY_SEL to extend the delay range to 0->7
  */
      unsigned int   dataDlySel2 : 1;    /* 1B.1093.0  R/W      Default = 0x0 */
                     /* Additional MSB bit for DATA_DLY_SEL to extend the delay range to 0->7  */
                    /*! \brief 1B.1093.1 R/W SCOPE_DLY_2
                        AQ_Lane0DigRxStatStatCtl2_RHEA.u0.bits_0.scopeDly2

                        Default = 0x0

                        Additional MSB bit for SCOPE_DLY to extend the delay range to 0->7
  */
      unsigned int   scopeDly2 : 1;    /* 1B.1093.1  R/W      Default = 0x0 */
                     /* Additional MSB bit for SCOPE_DLY to extend the delay range to 0->7  */
                    /*! \brief 1B.1093.2 R/W DISABLE_SAMPLE_COUNT
                        AQ_Lane0DigRxStatStatCtl2_RHEA.u0.bits_0.disableSampleCount

                        Default = 0x0

                        Disable the sample counter This will keep the sample counter at the current value.
                        
                        It is used to determine the error rate over long periods of time.
                        
                        This must be set back to zero to allow the sample count to
                        
                        complete its countdown and finish the stats call.
  */
      unsigned int   disableSampleCount : 1;    /* 1B.1093.2  R/W      Default = 0x0 */
                     /* Disable the sample counter This will keep the sample counter at the current value.
                        
                        It is used to determine the error rate over long periods of time.
                        
                        This must be set back to zero to allow the sample count to
                        
                        complete its countdown and finish the stats call.  */
                    /*! \brief 1B.1093.3 R/W ENABLE_AUTO_GLCM
                        AQ_Lane0DigRxStatStatCtl2_RHEA.u0.bits_0.enableAutoGlcm

                        Default = 0x1

                        Enable the automatic switching of the stats GLCM This will automatically switch the stats GLCM to
                        
                        the ref_range_clk when the rx_dig_qword_clk is disabled.
  */
      unsigned int   enableAutoGlcm : 1;    /* 1B.1093.3  R/W      Default = 0x1 */
                     /* Enable the automatic switching of the stats GLCM This will automatically switch the stats GLCM to
                        
                        the ref_range_clk when the rx_dig_qword_clk is disabled.  */
                    /*! \brief 1B.1093.4 R/W SCOPE_FIFO_RST_EN
                        AQ_Lane0DigRxStatStatCtl2_RHEA.u0.bits_0.scopeFifoRstEn

                        Default = 0x1

                        Enable resetting the scope fifo when the rx_ana_scope_en signal is deasserted
  */
      unsigned int   scopeFifoRstEn : 1;    /* 1B.1093.4  R/W      Default = 0x1 */
                     /* Enable resetting the scope fifo when the rx_ana_scope_en signal is deasserted  */
                    /*! \brief 1B.1093.F:5 RO RESERVED_15_5
                        AQ_Lane0DigRxStatStatCtl2_RHEA.u0.bits_0.reserved155

                        Default = 0x000

                        Reserved for Future use
  */
      unsigned int   reserved155 : 11;    /* 1B.1093.F:5  RO      Default = 0x000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigRxStatStatCtl2_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_CTL_OVRD_OUT: 1B.10B1 */
/*                  LANE0_DIG_ANA_RX_CTL_OVRD_OUT: 1B.10B1 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_CTL_OVRD_OUT */
  union
  {
    struct
    {
                    /*! \brief 1B.10B1.0 R/W RX_ANA_DIV16P5_CLK_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaDiv16p5ClkEn

                        Default = 0x0

                        Override value for rx_ana_div16p5_clk_en
  */
      unsigned int   rxAnaDiv16p5ClkEn : 1;    /* 1B.10B1.0  R/W      Default = 0x0 */
                     /* Override value for rx_ana_div16p5_clk_en  */
                    /*! \brief 1B.10B1.3:1 R/W RX_ANA_DATA_RATE
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaDataRate

                        Default = 0x0

                        Override value for rx_ana_data_rate
  */
      unsigned int   rxAnaDataRate : 3;    /* 1B.10B1.3:1  R/W      Default = 0x0 */
                     /* Override value for rx_ana_data_rate  */
                    /*! \brief 1B.10B1.4 R/W RX_ANA_WORD_CLK_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaWordClkEn

                        Default = 0x0

                        Override value for rx_ana_word_clk_en
  */
      unsigned int   rxAnaWordClkEn : 1;    /* 1B.10B1.4  R/W      Default = 0x0 */
                     /* Override value for rx_ana_word_clk_en  */
                    /*! \brief 1B.10B1.5 R/W RX_ANA_DIV4_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaDiv4En

                        Default = 0x0

                        Override value for rx_ana_div4_en
  */
      unsigned int   rxAnaDiv4En : 1;    /* 1B.10B1.5  R/W      Default = 0x0 */
                     /* Override value for rx_ana_div4_en  */
                    /*! \brief 1B.10B1.6 R/W RX_LBK_CLK_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxLbkClkEn

                        Default = 0x0

                        Override value for rx_ana_loopback_clk_en
  */
      unsigned int   rxLbkClkEn : 1;    /* 1B.10B1.6  R/W      Default = 0x0 */
                     /* Override value for rx_ana_loopback_clk_en  */
                    /*! \brief 1B.10B1.7 R/W RX_CTL_OVRD_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxCtlOvrdEn

                        Default = 0x0

                        Enable override values for RX ctl outputs
  */
      unsigned int   rxCtlOvrdEn : 1;    /* 1B.10B1.7  R/W      Default = 0x0 */
                     /* Enable override values for RX ctl outputs  */
                    /*! \brief 1B.10B1.8 R/W RX_ANA_DFE_TAPS_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaDfeTapsEn

                        Default = 0x0

                        Override value for rx_ana_dfe_taps_en
  */
      unsigned int   rxAnaDfeTapsEn : 1;    /* 1B.10B1.8  R/W      Default = 0x0 */
                     /* Override value for rx_ana_dfe_taps_en  */
                    /*! \brief 1B.10B1.9 R/W RX_ANA_DFE_TAPS_EN_OVRD_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaDfeTapsEnOvrdEn

                        Default = 0x0

                        Override enable for rx_ana_dfe_taps_en
  */
      unsigned int   rxAnaDfeTapsEnOvrdEn : 1;    /* 1B.10B1.9  R/W      Default = 0x0 */
                     /* Override enable for rx_ana_dfe_taps_en  */
                    /*! \brief 1B.10B1.A R/W RX_ANA_DFE_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaDfeEn

                        Default = 0x0

                        Override value for rx_ana_dfe_en
  */
      unsigned int   rxAnaDfeEn : 1;    /* 1B.10B1.A  R/W      Default = 0x0 */
                     /* Override value for rx_ana_dfe_en  */
                    /*! \brief 1B.10B1.B R/W RX_ANA_DFE_EN_OVRD_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaDfeEnOvrdEn

                        Default = 0x0

                        Override enable for rx_ana_dfe_en
  */
      unsigned int   rxAnaDfeEnOvrdEn : 1;    /* 1B.10B1.B  R/W      Default = 0x0 */
                     /* Override enable for rx_ana_dfe_en  */
                    /*! \brief 1B.10B1.C R/W RX_ANA_BYPASS_SLC_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaBypassSlcEn

                        Default = 0x0

                        Override value for rx_ana_bypass_slc_en
  */
      unsigned int   rxAnaBypassSlcEn : 1;    /* 1B.10B1.C  R/W      Default = 0x0 */
                     /* Override value for rx_ana_bypass_slc_en  */
                    /*! \brief 1B.10B1.D R/W RX_ANA_BYPASS_SLC_EN_OVRD_EN
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.rxAnaBypassSlcEnOvrdEn

                        Default = 0x0

                        Override enable for rx_ana_bypass_slc_en
  */
      unsigned int   rxAnaBypassSlcEnOvrdEn : 1;    /* 1B.10B1.D  R/W      Default = 0x0 */
                     /* Override enable for rx_ana_bypass_slc_en  */
                    /*! \brief 1B.10B1.F:E RO RESERVED_15_14
                        AQ_Lane0DigAnaRxCtlOvrdOut_RHEA.u0.bits_0.reserved1514

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1514 : 2;    /* 1B.10B1.F:E  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxCtlOvrdOut_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_VCO_OVRD_OUT_1: 1B.10B7 */
/*                  LANE0_DIG_ANA_RX_VCO_OVRD_OUT_1: 1B.10B7 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_VCO_OVRD_OUT_1 */
  union
  {
    struct
    {
                    /*! \brief 1B.10B7.B:0 R/W RX_ANA_CDR_VCO_CONFIG
                        AQ_Lane0DigAnaRxVcoOvrdOut1_RHEA.u0.bits_0.rxAnaCdrVcoConfig

                        Default = 0x000

                        Override value for rx_ana_cdr_vco_config
  */
      unsigned int   rxAnaCdrVcoConfig : 12;    /* 1B.10B7.B:0  R/W      Default = 0x000 */
                     /* Override value for rx_ana_cdr_vco_config  */
                    /*! \brief 1B.10B7.C R/W RX_ANA_CDR_VCO_CONFIG_OVRD_EN
                        AQ_Lane0DigAnaRxVcoOvrdOut1_RHEA.u0.bits_0.rxAnaCdrVcoConfigOvrdEn

                        Default = 0x0

                        Enable override value for rx_ana_cdr_vco_config
  */
      unsigned int   rxAnaCdrVcoConfigOvrdEn : 1;    /* 1B.10B7.C  R/W      Default = 0x0 */
                     /* Enable override value for rx_ana_cdr_vco_config  */
                    /*! \brief 1B.10B7.F:D RO RESERVED_15_13
                        AQ_Lane0DigAnaRxVcoOvrdOut1_RHEA.u0.bits_0.reserved1513

                        Default = 0x0

                        Reserved for Future use
  */
      unsigned int   reserved1513 : 3;    /* 1B.10B7.F:D  RO      Default = 0x0 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxVcoOvrdOut1_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_CAL: 1B.10B9 */
/*                  LANE0_DIG_ANA_RX_CAL: 1B.10B9 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_CAL */
  union
  {
    struct
    {
                    /*! \brief 1B.10B9.4:0 R/W RX_ANA_CAL_MUXA_SEL
                        AQ_Lane0DigAnaRxCal_RHEA.u0.bits_0.rxAnaCalMuxaSel

                        Default = 0x00

                        Value for rx_ana_cal_muxa_sel[4:0]
  */
      unsigned int   rxAnaCalMuxaSel : 5;    /* 1B.10B9.4:0  R/W      Default = 0x00 */
                     /* Value for rx_ana_cal_muxa_sel[4:0]  */
                    /*! \brief 1B.10B9.9:5 R/W RX_ANA_CAL_MUXB_SEL
                        AQ_Lane0DigAnaRxCal_RHEA.u0.bits_0.rxAnaCalMuxbSel

                        Default = 0x00

                        Value for rx_ana_cal_muxb_sel[4:0]
  */
      unsigned int   rxAnaCalMuxbSel : 5;    /* 1B.10B9.9:5  R/W      Default = 0x00 */
                     /* Value for rx_ana_cal_muxb_sel[4:0]  */
                    /*! \brief 1B.10B9.A R/W RX_ANA_CAL_LPFBYP_EN
                        AQ_Lane0DigAnaRxCal_RHEA.u0.bits_0.rxAnaCalLpfbypEn

                        Default = 0x0

                        Value for rx_ana_cal_lpfbyp_en
  */
      unsigned int   rxAnaCalLpfbypEn : 1;    /* 1B.10B9.A  R/W      Default = 0x0 */
                     /* Value for rx_ana_cal_lpfbyp_en  */
                    /*! \brief 1B.10B9.B R/W RX_ANA_CAL_SHORT_EN
                        AQ_Lane0DigAnaRxCal_RHEA.u0.bits_0.rxAnaCalShortEn

                        Default = 0x0

                        Value for rx_ana_cal_short_en
  */
      unsigned int   rxAnaCalShortEn : 1;    /* 1B.10B9.B  R/W      Default = 0x0 */
                     /* Value for rx_ana_cal_short_en  */
                    /*! \brief 1B.10B9.C R/W RX_ANA_SLICER_CAL_EN
                        AQ_Lane0DigAnaRxCal_RHEA.u0.bits_0.rxAnaSlicerCalEn

                        Default = 0x0

                        Value for rx_ana_slicer_cal_en
  */
      unsigned int   rxAnaSlicerCalEn : 1;    /* 1B.10B9.C  R/W      Default = 0x0 */
                     /* Value for rx_ana_slicer_cal_en  */
                    /*! \brief 1B.10B9.E:D R/W RX_ANA_CAL_MODE
                        AQ_Lane0DigAnaRxCal_RHEA.u0.bits_0.rxAnaCalMode

                        Default = 0x0

                        Value for rx_ana_cal_mode[1:0] 00 - Differential comparison
                        
                        01 - Single-ended, positive node to positive node
                        
                        10 - Single-ended, negative node to negative node
                        
                        11 - Common mode comparison
  */
      unsigned int   rxAnaCalMode : 2;    /* 1B.10B9.E:D  R/W      Default = 0x0 */
                     /* Value for rx_ana_cal_mode[1:0] 00 - Differential comparison
                        
                        01 - Single-ended, positive node to positive node
                        
                        10 - Single-ended, negative node to negative node
                        
                        11 - Common mode comparison  */
                    /*! \brief 1B.10B9.F R/W RX_ANA_CAL_COMP_EN
                        AQ_Lane0DigAnaRxCal_RHEA.u0.bits_0.rxAnaCalCompEn

                        Default = 0x0

                        Value for rx_ana_cal_comp_en
  */
      unsigned int   rxAnaCalCompEn : 1;    /* 1B.10B9.F  R/W      Default = 0x0 */
                     /* Value for rx_ana_cal_comp_en  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxCal_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_DAC_CTRL: 1B.10BB */
/*                  LANE0_DIG_ANA_RX_DAC_CTRL: 1B.10BB */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_DAC_CTRL */
  union
  {
    struct
    {
                    /*! \brief 1B.10BB.7:0 R/W RX_ANA_CAL_DAC_CTRL
                        AQ_Lane0DigAnaRxDacCtrl_RHEA.u0.bits_0.rxAnaCalDacCtrl

                        Default = 0x80

                        Value for rx_ana_cal_dac_ctrl[7:0]
  */
      unsigned int   rxAnaCalDacCtrl : 8;    /* 1B.10BB.7:0  R/W      Default = 0x80 */
                     /* Value for rx_ana_cal_dac_ctrl[7:0]  */
                    /*! \brief 1B.10BB.F:8 RO RESERVED_15_8
                        AQ_Lane0DigAnaRxDacCtrl_RHEA.u0.bits_0.reserved158

                        Default = 0x00

                        Reserved for Future use
  */
      unsigned int   reserved158 : 8;    /* 1B.10BB.F:8  RO      Default = 0x00 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxDacCtrl_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_DAC_CTRL_OVRD: 1B.10BD */
/*                  LANE0_DIG_ANA_RX_DAC_CTRL_OVRD: 1B.10BD */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_DAC_CTRL_OVRD */
  union
  {
    struct
    {
                    /*! \brief 1B.10BD.0 R/W RX_CAL_DAC_CTRL_OVRD
                        AQ_Lane0DigAnaRxDacCtrlOvrd_RHEA.u0.bits_0.rxCalDacCtrlOvrd

                        Default = 0x0

                        Override enable for Cal DAC control
  */
      unsigned int   rxCalDacCtrlOvrd : 1;    /* 1B.10BD.0  R/W      Default = 0x0 */
                     /* Override enable for Cal DAC control  */
                    /*! \brief 1B.10BD.F:1 RO RESERVED_15_1
                        AQ_Lane0DigAnaRxDacCtrlOvrd_RHEA.u0.bits_0.reserved151

                        Default = 0x0000

                        Reserved for Future use
  */
      unsigned int   reserved151 : 15;    /* 1B.10BD.F:1  RO      Default = 0x0000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxDacCtrlOvrd_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_DAC_CTRL_SEL: 1B.10BE */
/*                  LANE0_DIG_ANA_RX_DAC_CTRL_SEL: 1B.10BE */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_DAC_CTRL_SEL */
  union
  {
    struct
    {
                    /*! \brief 1B.10BE.5:0 R/W RX_ANA_CAL_DAC_CTRL_SEL
                        AQ_Lane0DigAnaRxDacCtrlSel_RHEA.u0.bits_0.rxAnaCalDacCtrlSel

                        Default = 0x00

                        Value for rx_ana_cal_dac_ctrl_sel[5:0]
  */
      unsigned int   rxAnaCalDacCtrlSel : 6;    /* 1B.10BE.5:0  R/W      Default = 0x00 */
                     /* Value for rx_ana_cal_dac_ctrl_sel[5:0]  */
                    /*! \brief 1B.10BE.F:6 RO RESERVED_15_6
                        AQ_Lane0DigAnaRxDacCtrlSel_RHEA.u0.bits_0.reserved156

                        Default = 0x000

                        Reserved for Future use
  */
      unsigned int   reserved156 : 10;    /* 1B.10BE.F:6  RO      Default = 0x000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxDacCtrlSel_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_SCOPE: 1B.10C1 */
/*                  LANE0_DIG_ANA_RX_SCOPE: 1B.10C1 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_SCOPE */
  union
  {
    struct
    {
                    /*! \brief 1B.10C1.0 R/W RX_ANA_SCOPE_SEL
                        AQ_Lane0DigAnaRxScope_RHEA.u0.bits_0.rxAnaScopeSel

                        Default = 0x0

                        Sets the value for rx_ana_scope_sel
  */
      unsigned int   rxAnaScopeSel : 1;    /* 1B.10C1.0  R/W      Default = 0x0 */
                     /* Sets the value for rx_ana_scope_sel  */
                    /*! \brief 1B.10C1.1 R/W RX_ANA_SCOPE_EN
                        AQ_Lane0DigAnaRxScope_RHEA.u0.bits_0.rxAnaScopeEn

                        Default = 0x0

                        Sets the value for rx_ana_scope_en
  */
      unsigned int   rxAnaScopeEn : 1;    /* 1B.10C1.1  R/W      Default = 0x0 */
                     /* Sets the value for rx_ana_scope_en  */
                    /*! \brief 1B.10C1.2 R/W RX_ANA_SCOPE_CLK_SEL
                        AQ_Lane0DigAnaRxScope_RHEA.u0.bits_0.rxAnaScopeClkSel

                        Default = 0x0

                        Sets the value for rx_ana_scope_clk_sel
  */
      unsigned int   rxAnaScopeClkSel : 1;    /* 1B.10C1.2  R/W      Default = 0x0 */
                     /* Sets the value for rx_ana_scope_clk_sel  */
                    /*! \brief 1B.10C1.F:3 RO RESERVED_15_3
                        AQ_Lane0DigAnaRxScope_RHEA.u0.bits_0.reserved153

                        Default = 0x0000

                        Reserved for Future use
  */
      unsigned int   reserved153 : 13;    /* 1B.10C1.F:3  RO      Default = 0x0000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxScope_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_IQ: 1B.10C3 */
/*                  LANE0_DIG_ANA_RX_ANA_IQ: 1B.10C3 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_IQ */
  union
  {
    struct
    {
                    /*! \brief 1B.10C3.0 R/W SENSE_EN
                        AQ_Lane0DigAnaRxAnaIq_RHEA.u0.bits_0.senseEn

                        Default = 0x0

                        Value for rx_ana_iq_sense_en
  */
      unsigned int   senseEn : 1;    /* 1B.10C3.0  R/W      Default = 0x0 */
                     /* Value for rx_ana_iq_sense_en  */
                    /*! \brief 1B.10C3.1 R/W SENSE_SEL
                        AQ_Lane0DigAnaRxAnaIq_RHEA.u0.bits_0.senseSel

                        Default = 0x0

                        Value for rx_ana_iq_sense_sel
  */
      unsigned int   senseSel : 1;    /* 1B.10C3.1  R/W      Default = 0x0 */
                     /* Value for rx_ana_iq_sense_sel  */
                    /*! \brief 1B.10C3.2 R/W EN_CLK_VRO_ALLON
                        AQ_Lane0DigAnaRxAnaIq_RHEA.u0.bits_0.enClkVroAllon

                        Default = 0x0

                        Value for rx_ana_en_clk_vro_allon
  */
      unsigned int   enClkVroAllon : 1;    /* 1B.10C3.2  R/W      Default = 0x0 */
                     /* Value for rx_ana_en_clk_vro_allon  */
                    /*! \brief 1B.10C3.3 R/W EN_IQSYNC_BYPASS_OVRD_VAL
                        AQ_Lane0DigAnaRxAnaIq_RHEA.u0.bits_0.enIqsyncBypassOvrdVal

                        Default = 0x0

                        Override value for rx_ana_en_iqsync_bypass
  */
      unsigned int   enIqsyncBypassOvrdVal : 1;    /* 1B.10C3.3  R/W      Default = 0x0 */
                     /* Override value for rx_ana_en_iqsync_bypass  */
                    /*! \brief 1B.10C3.4 R/W EN_IQSYNC_BYPASS_OVRD_EN
                        AQ_Lane0DigAnaRxAnaIq_RHEA.u0.bits_0.enIqsyncBypassOvrdEn

                        Default = 0x0

                        Override enable for rx_ana_en_iqsync_bypass
  */
      unsigned int   enIqsyncBypassOvrdEn : 1;    /* 1B.10C3.4  R/W      Default = 0x0 */
                     /* Override enable for rx_ana_en_iqsync_bypass  */
                    /*! \brief 1B.10C3.5 R/W CKDRV_IQSYNC_RST_OVRD_VAL
                        AQ_Lane0DigAnaRxAnaIq_RHEA.u0.bits_0.ckdrvIqsyncRstOvrdVal

                        Default = 0x0

                        Override value for rx_ana_en_iqsync_bypass
  */
      unsigned int   ckdrvIqsyncRstOvrdVal : 1;    /* 1B.10C3.5  R/W      Default = 0x0 */
                     /* Override value for rx_ana_en_iqsync_bypass  */
                    /*! \brief 1B.10C3.6 R/W CKDRV_IQSYNC_RST_OVRD_EN
                        AQ_Lane0DigAnaRxAnaIq_RHEA.u0.bits_0.ckdrvIqsyncRstOvrdEn

                        Default = 0x0

                        Override enable for rx_ana_en_iqsync_bypass
  */
      unsigned int   ckdrvIqsyncRstOvrdEn : 1;    /* 1B.10C3.6  R/W      Default = 0x0 */
                     /* Override enable for rx_ana_en_iqsync_bypass  */
                    /*! \brief 1B.10C3.F:7 RO RESERVED_15_7
                        AQ_Lane0DigAnaRxAnaIq_RHEA.u0.bits_0.reserved157

                        Default = 0x000

                        Reserved for Future use
  */
      unsigned int   reserved157 : 9;    /* 1B.10C3.F:7  RO      Default = 0x000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaIq_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_IQC_BYP_OVRD: 1B.10C4 */
/*                  LANE0_DIG_ANA_RX_ANA_IQC_BYP_OVRD: 1B.10C4 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_IQC_BYP_OVRD */
  union
  {
    struct
    {
                    /*! \brief 1B.10C4.7:0 R/W VAL
                        AQ_Lane0DigAnaRxAnaIqcBypOvrd_RHEA.u0.bits_0.val

                        Default = 0x06

                        Value for rx_ana_iqc_bypass_adjust[7:0]
  */
      unsigned int   val : 8;    /* 1B.10C4.7:0  R/W      Default = 0x06 */
                     /* Value for rx_ana_iqc_bypass_adjust[7:0]  */
                    /*! \brief 1B.10C4.8 R/W EN
                        AQ_Lane0DigAnaRxAnaIqcBypOvrd_RHEA.u0.bits_0.en

                        Default = 0x0

                        Enable override of rx_ana_iqc_bypass_adjust[7:0]
  */
      unsigned int   en : 1;    /* 1B.10C4.8  R/W      Default = 0x0 */
                     /* Enable override of rx_ana_iqc_bypass_adjust[7:0]  */
                    /*! \brief 1B.10C4.F:9 RO RESERVED_15_9
                        AQ_Lane0DigAnaRxAnaIqcBypOvrd_RHEA.u0.bits_0.reserved159

                        Default = 0x00

                        Reserved for Future use
  */
      unsigned int   reserved159 : 7;    /* 1B.10C4.F:9  RO      Default = 0x00 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaIqcBypOvrd_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_IQC_BYPASS_ADJUST_CLK: 1B.10C5 */
/*                  LANE0_DIG_ANA_RX_ANA_IQC_BYPASS_ADJUST_CLK: 1B.10C5 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_IQC_BYPASS_ADJUST_CLK */
  union
  {
    struct
    {
                    /*! \brief 1B.10C5.0 R/W VAL
                        AQ_Lane0DigAnaRxAnaIqcBypassAdjustClk_RHEA.u0.bits_0.val

                        Default = 0x0

                        Value for rx_ana_iqc_bypass_adjust_clk - If SELF_CLEAR_DISABLE=0, then this bit is self-clearing
                        
                        (i.e. only asserts for one cr_clk cycle)
  */
      unsigned int   val : 1;    /* 1B.10C5.0  R/W      Default = 0x0 */
                     /* Value for rx_ana_iqc_bypass_adjust_clk - If SELF_CLEAR_DISABLE=0, then this bit is self-clearing
                        
                        (i.e. only asserts for one cr_clk cycle)  */
                    /*! \brief 1B.10C5.1 R/W SELF_CLEAR_DISABLE
                        AQ_Lane0DigAnaRxAnaIqcBypassAdjustClk_RHEA.u0.bits_0.selfClearDisable

                        Default = 0x0

                        Disable self-clearing for the rx_ana_iqc_bypass_adjust_clk register
  */
      unsigned int   selfClearDisable : 1;    /* 1B.10C5.1  R/W      Default = 0x0 */
                     /* Disable self-clearing for the rx_ana_iqc_bypass_adjust_clk register  */
                    /*! \brief 1B.10C5.F:2 RO RESERVED_15_2
                        AQ_Lane0DigAnaRxAnaIqcBypassAdjustClk_RHEA.u0.bits_0.reserved152

                        Default = 0x0000

                        Reserved for Future use
  */
      unsigned int   reserved152 : 14;    /* 1B.10C5.F:2  RO      Default = 0x0000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaIqcBypassAdjustClk_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_IQC_DATA_OVRD: 1B.10C6 */
/*                  LANE0_DIG_ANA_RX_ANA_IQC_DATA_OVRD: 1B.10C6 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_IQC_DATA_OVRD */
  union
  {
    struct
    {
                    /*! \brief 1B.10C6.7:0 R/W VAL
                        AQ_Lane0DigAnaRxAnaIqcDataOvrd_RHEA.u0.bits_0.val

                        Default = 0x06

                        Value for rx_ana_iqc_data_adjust[7:0]
  */
      unsigned int   val : 8;    /* 1B.10C6.7:0  R/W      Default = 0x06 */
                     /* Value for rx_ana_iqc_data_adjust[7:0]  */
                    /*! \brief 1B.10C6.8 R/W EN
                        AQ_Lane0DigAnaRxAnaIqcDataOvrd_RHEA.u0.bits_0.en

                        Default = 0x0

                        Enable override of rx_ana_iqc_data_adjust[7:0]
  */
      unsigned int   en : 1;    /* 1B.10C6.8  R/W      Default = 0x0 */
                     /* Enable override of rx_ana_iqc_data_adjust[7:0]  */
                    /*! \brief 1B.10C6.F:9 RO RESERVED_15_9
                        AQ_Lane0DigAnaRxAnaIqcDataOvrd_RHEA.u0.bits_0.reserved159

                        Default = 0x00

                        Reserved for Future use
  */
      unsigned int   reserved159 : 7;    /* 1B.10C6.F:9  RO      Default = 0x00 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaIqcDataOvrd_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_IQC_DATA_ADJUST_CLK: 1B.10C7 */
/*                  LANE0_DIG_ANA_RX_ANA_IQC_DATA_ADJUST_CLK: 1B.10C7 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_IQC_DATA_ADJUST_CLK */
  union
  {
    struct
    {
                    /*! \brief 1B.10C7.0 R/W VAL
                        AQ_Lane0DigAnaRxAnaIqcDataAdjustClk_RHEA.u0.bits_0.val

                        Default = 0x0

                        Value for rx_ana_iqc_data_adjust_clk - If SELF_CLEAR_DISABLE=0, then this bit is self-clearing
                        
                        (i.e. only asserts for one cr_clk cycle)
  */
      unsigned int   val : 1;    /* 1B.10C7.0  R/W      Default = 0x0 */
                     /* Value for rx_ana_iqc_data_adjust_clk - If SELF_CLEAR_DISABLE=0, then this bit is self-clearing
                        
                        (i.e. only asserts for one cr_clk cycle)  */
                    /*! \brief 1B.10C7.1 R/W SELF_CLEAR_DISABLE
                        AQ_Lane0DigAnaRxAnaIqcDataAdjustClk_RHEA.u0.bits_0.selfClearDisable

                        Default = 0x0

                        Disable self-clearing for the rx_ana_iqc_data_adjust_clk register
  */
      unsigned int   selfClearDisable : 1;    /* 1B.10C7.1  R/W      Default = 0x0 */
                     /* Disable self-clearing for the rx_ana_iqc_data_adjust_clk register  */
                    /*! \brief 1B.10C7.F:2 RO RESERVED_15_2
                        AQ_Lane0DigAnaRxAnaIqcDataAdjustClk_RHEA.u0.bits_0.reserved152

                        Default = 0x0000

                        Reserved for Future use
  */
      unsigned int   reserved152 : 14;    /* 1B.10C7.F:2  RO      Default = 0x0000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaIqcDataAdjustClk_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_CAL_DAC_CTRL_EN: 1B.10C8 */
/*                  LANE0_DIG_ANA_RX_ANA_CAL_DAC_CTRL_EN: 1B.10C8 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_CAL_DAC_CTRL_EN */
  union
  {
    struct
    {
                    /*! \brief 1B.10C8.0 R/W RX_ANA_CAL_DAC_CTRL_EN
                        AQ_Lane0DigAnaRxAnaCalDacCtrlEn_RHEA.u0.bits_0.rxAnaCalDacCtrlEn

                        Default = 0x0

                        Value for rx_ana_cal_dac_ctrl_en - If DAC_CTRL_SELF_CLEAR_DISABLE=0, then this bit is self-clearing
                        
                        (i.e. only asserts for one cr_clk cycle)
  */
      unsigned int   rxAnaCalDacCtrlEn : 1;    /* 1B.10C8.0  R/W      Default = 0x0 */
                     /* Value for rx_ana_cal_dac_ctrl_en - If DAC_CTRL_SELF_CLEAR_DISABLE=0, then this bit is self-clearing
                        
                        (i.e. only asserts for one cr_clk cycle)  */
                    /*! \brief 1B.10C8.1 R/W DAC_CTRL_SELF_CLEAR_DISABLE
                        AQ_Lane0DigAnaRxAnaCalDacCtrlEn_RHEA.u0.bits_0.dacCtrlSelfClearDisable

                        Default = 0x0

                        Disable self-clearing for the rx_ana_cal_dac_ctrl_en register
  */
      unsigned int   dacCtrlSelfClearDisable : 1;    /* 1B.10C8.1  R/W      Default = 0x0 */
                     /* Disable self-clearing for the rx_ana_cal_dac_ctrl_en register  */
                    /*! \brief 1B.10C8.F:2 RO RESERVED_15_2
                        AQ_Lane0DigAnaRxAnaCalDacCtrlEn_RHEA.u0.bits_0.reserved152

                        Default = 0x0000

                        Reserved for Future use
  */
      unsigned int   reserved152 : 14;    /* 1B.10C8.F:2  RO      Default = 0x0000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaCalDacCtrlEn_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_DFE_SAMP_SEL: 1B.10CA */
/*                  LANE0_DIG_ANA_RX_ANA_DFE_SAMP_SEL: 1B.10CA */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_DFE_SAMP_SEL */
  union
  {
    struct
    {
                    /*! \brief 1B.10CA.0 R/W VAL
                        AQ_Lane0DigAnaRxAnaDfeSampSel_RHEA.u0.bits_0.val

                        Default = 0x0

                        Value for rx_ana_dfe_samp_sel
  */
      unsigned int   val : 1;    /* 1B.10CA.0  R/W      Default = 0x0 */
                     /* Value for rx_ana_dfe_samp_sel  */
                    /*! \brief 1B.10CA.F:1 RO RESERVED_15_1
                        AQ_Lane0DigAnaRxAnaDfeSampSel_RHEA.u0.bits_0.reserved151

                        Default = 0x0000

                        Reserved for Future use
  */
      unsigned int   reserved151 : 15;    /* 1B.10CA.F:1  RO      Default = 0x0000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaDfeSampSel_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_BYP_SAMP_SEL: 1B.10CB */
/*                  LANE0_DIG_ANA_RX_ANA_BYP_SAMP_SEL: 1B.10CB */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_BYP_SAMP_SEL */
  union
  {
    struct
    {
                    /*! \brief 1B.10CB.0 R/W VAL
                        AQ_Lane0DigAnaRxAnaBypSampSel_RHEA.u0.bits_0.val

                        Default = 0x0

                        Value for rx_ana_byp_samp_sel
  */
      unsigned int   val : 1;    /* 1B.10CB.0  R/W      Default = 0x0 */
                     /* Value for rx_ana_byp_samp_sel  */
                    /*! \brief 1B.10CB.F:1 RO RESERVED_15_1
                        AQ_Lane0DigAnaRxAnaBypSampSel_RHEA.u0.bits_0.reserved151

                        Default = 0x0000

                        Reserved for Future use
  */
      unsigned int   reserved151 : 15;    /* 1B.10CB.F:1  RO      Default = 0x0000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaBypSampSel_RHEA;


/*---------------------------------------------------------------------------------*/
/*! \brief                LANE0_DIG_ANA_RX_ANA_PHS_SAMP_SEL: 1B.10CC */
/*                  LANE0_DIG_ANA_RX_ANA_PHS_SAMP_SEL: 1B.10CC */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of LANE0_DIG_ANA_RX_ANA_PHS_SAMP_SEL */
  union
  {
    struct
    {
                    /*! \brief 1B.10CC.0 R/W VAL
                        AQ_Lane0DigAnaRxAnaPhsSampSel_RHEA.u0.bits_0.val

                        Default = 0x0

                        Value for rx_ana_phs_samp_sel
  */
      unsigned int   val : 1;    /* 1B.10CC.0  R/W      Default = 0x0 */
                     /* Value for rx_ana_phs_samp_sel  */
                    /*! \brief 1B.10CC.F:1 RO RESERVED_15_1
                        AQ_Lane0DigAnaRxAnaPhsSampSel_RHEA.u0.bits_0.reserved151

                        Default = 0x0000

                        Reserved for Future use
  */
      unsigned int   reserved151 : 15;    /* 1B.10CC.F:1  RO      Default = 0x0000 */
                     /* Reserved for Future use  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_Lane0DigAnaRxAnaPhsSampSel_RHEA;

#endif
/*@}*/
/*@}*/
