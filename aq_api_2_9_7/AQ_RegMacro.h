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
  This file contains  macros for accessing the AQ PHYs' registers 
  using the device-specific register map data structures and definitions.
*/

#ifndef AQ_REG_MACRO_TOKEN
#define AQ_REG_MACRO_TOKEN

#include "AQ_PhyInterface.h"


#define AQ_API_ReadRegister(id,reg,wd) AQ_API_ReadRegister_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,reg,wd)

#define AQ_API_ReadRegister_DeviceRestricted(devices,id,reg,wd) AQ_API_ReadRegister_Devs_ ## devices(id,reg,wd)

#define AQ_API_ReadRegister_Devs_APPIA(id,reg,wd) \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0))

#define AQ_API_ReadRegister_Devs_HHD(id,reg,wd) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    (0))

#define AQ_API_ReadRegister_Devs_EUR(id,reg,wd) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    (0))

#define AQ_API_ReadRegister_Devs_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    (0))

#define AQ_API_ReadRegister_Devs_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    (0))

#define AQ_API_ReadRegister_Devs_APPIA_HHD(id,reg,wd) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_APPIA_EUR(id,reg,wd) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_APPIA_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_APPIA_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_HHD_EUR(id,reg,wd) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_HHD_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_HHD_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_EUR_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_EUR_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    (0)))

#define AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    (0))))

#define AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0)))))

#define AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0)))))

#define AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0)))))

#define AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0)))))

#define AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    (0)))))

#define AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Read_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Read_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Read_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Read_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    (0))))))

#define AQ_API_ReadRegister_Devs_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_CAL_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_CAL_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_CAL_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_HHD_CAL_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_HHD_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_HHD_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_HHD_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_EUR_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_EUR_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_HHD_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_HHD_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_EUR_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_EUR_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_CAL_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_APPIA_RHEA_CAL_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_EUR_CAL_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_EUR_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_CAL_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_CAL_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_RHEA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_APPIA_RHEA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_APPIA_CAL_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_APPIA_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_CAL_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_RHEA_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_EUR_RHEA_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_APPIA_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_APPIA_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_EUR_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_EUR_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_RHEA_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_CAL_RHEA_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_APPIA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_APPIA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_EUR_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_EUR_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_CAL_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_HHD_RHEA_CAL_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_HHD_CAL_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_HHD_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_CAL_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_CAL_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_RHEA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_APPIA_RHEA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_APPIA_CAL_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_APPIA_RHEA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_CAL_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_CAL_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_RHEA_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_HHD_RHEA_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_APPIA_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_APPIA_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_HHD_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_HHD_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_RHEA_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_CAL_RHEA_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_APPIA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_APPIA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_HHD_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_HHD_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_CAL_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_EUR_RHEA_CAL_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_HHD_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_HHD_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_EUR_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_EUR_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_RHEA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_APPIA_RHEA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_APPIA_EUR_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_APPIA_RHEA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_EUR_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_EUR_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_RHEA_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_HHD_RHEA_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_APPIA_HHD_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_APPIA_RHEA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_HHD_APPIA_RHEA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_HHD_RHEA_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_RHEA_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_EUR_RHEA_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_APPIA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_APPIA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_HHD_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_HHD_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_EUR_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_CAL_RHEA_EUR_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_HHD_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_HHD_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_EUR_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_EUR_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_CAL_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_APPIA_CAL_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_APPIA_EUR_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_APPIA_CAL_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_EUR_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_EUR_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_CAL_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_HHD_CAL_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_APPIA_HHD_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_APPIA_CAL_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_HHD_APPIA_CAL(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_HHD_CAL_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_CAL_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_EUR_CAL_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_APPIA_HHD_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_APPIA_EUR_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_HHD_APPIA_EUR(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_HHD_EUR_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_EUR_APPIA_HHD(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_ReadRegister_Devs_RHEA_CAL_EUR_HHD_APPIA(id,reg,wd) AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)


#define AQ_API_WriteRegister(id,reg,wd,value) AQ_API_WriteRegister_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,reg,wd,value)

#define AQ_API_WriteRegister_DeviceRestricted(devices,id,reg,wd,value) AQ_API_WriteRegister_Devs_ ## devices(id,reg,wd,value)

#define AQ_API_WriteRegister_Devs_APPIA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_WriteRegister_Devs_HHD(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_WriteRegister_Devs_EUR(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_WriteRegister_Devs_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_WriteRegister_Devs_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_WriteRegister_Devs_APPIA_HHD(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_APPIA_EUR(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_APPIA_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_APPIA_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_HHD_EUR(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_HHD_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_HHD_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_EUR_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_EUR_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Delegate (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Delegate (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Delegate (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Delegate (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))))

#define AQ_API_WriteRegister_Devs_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_CAL_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_CAL_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_CAL_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_HHD_CAL_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_HHD_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_HHD_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_HHD_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_EUR_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_EUR_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_CAL_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_APPIA_RHEA_CAL_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_EUR_CAL_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_APPIA_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_APPIA_CAL_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_EUR_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_APPIA_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_CAL_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_APPIA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_HHD_RHEA_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_HHD_CAL_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_APPIA_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_APPIA_CAL_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_HHD_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_APPIA_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_CAL_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_APPIA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_EUR_RHEA_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_HHD_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_APPIA_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_APPIA_EUR_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_HHD_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_APPIA_HHD_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_EUR_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_APPIA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_CAL_RHEA_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_HHD_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_HHD_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_EUR_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_EUR_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_CAL_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_APPIA_CAL_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_APPIA_EUR_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_HHD_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_APPIA_HHD_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_EUR_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_APPIA_HHD_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_WriteRegister_Devs_RHEA_CAL_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)


#define AQ_API_MultiWriteRegister(id,num,reg,wd,value) AQ_API_MultiWriteRegister_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,num,reg,wd,value)

#define AQ_API_MultiWriteRegister_DeviceRestricted(devices,id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_ ## devices(id,num,reg,wd,value)

#define AQ_API_MultiWriteRegister_Devs_APPIA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_MultiWriteRegister_Devs_HHD(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_MultiWriteRegister_Devs_EUR(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_MultiWriteRegister_Devs_CAL(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_MultiWriteRegister_Devs_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_HHD_EUR(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_HHD_CAL(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_EUR_CAL(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_Write_Multi (id,num,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))))

#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_CAL_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_CAL_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_CAL_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_CAL_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_HHD_RHEA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_HHD_CAL_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_HHD_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_CAL_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_EUR_RHEA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_HHD_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_HHD_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_EUR_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_EUR_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_CAL_RHEA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_HHD_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_HHD_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_EUR_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_EUR_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_CAL_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_APPIA_RHEA_CAL_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_EUR_CAL_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_EUR_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_CAL_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_CAL_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_RHEA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_APPIA_RHEA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_APPIA_CAL_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_APPIA_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_CAL_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_EUR_RHEA_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_APPIA_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_APPIA_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_EUR_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_EUR_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_CAL_RHEA_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_APPIA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_APPIA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_EUR_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_EUR_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_CAL_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_HHD_RHEA_CAL_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_HHD_CAL_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_HHD_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_CAL_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_CAL_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_RHEA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_APPIA_RHEA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_APPIA_CAL_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_APPIA_RHEA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_CAL_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_CAL_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_RHEA_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_HHD_RHEA_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_APPIA_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_APPIA_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_HHD_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_HHD_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_CAL_RHEA_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_APPIA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_APPIA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_HHD_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_HHD_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_CAL_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_EUR_RHEA_CAL_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_HHD_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_HHD_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_EUR_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_EUR_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_RHEA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_APPIA_RHEA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_APPIA_EUR_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_APPIA_RHEA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_EUR_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_EUR_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_RHEA_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_HHD_RHEA_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_APPIA_HHD_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_APPIA_RHEA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_HHD_APPIA_RHEA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_HHD_RHEA_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_RHEA_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_EUR_RHEA_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_APPIA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_APPIA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_HHD_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_HHD_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_EUR_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_CAL_RHEA_EUR_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_HHD_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_HHD_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_EUR_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_EUR_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_CAL_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_APPIA_CAL_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_APPIA_EUR_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_APPIA_CAL_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_EUR_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_EUR_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_CAL_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_HHD_CAL_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_APPIA_HHD_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_APPIA_CAL_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_HHD_APPIA_CAL(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_HHD_CAL_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_CAL_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_EUR_CAL_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_APPIA_HHD_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_APPIA_EUR_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_HHD_APPIA_EUR(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_HHD_EUR_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_EUR_APPIA_HHD(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)
#define AQ_API_MultiWriteRegister_Devs_RHEA_CAL_EUR_HHD_APPIA(id,num,reg,wd,value) AQ_API_MultiWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,num,reg,wd,value)


#ifdef AQ_PHY_SUPPORTS_BLOCK_READ_WRITE

#define AQ_API_BlockReadRegister(id,reg,wd) AQ_API_BlockReadRegister_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,reg,wd)

#define AQ_API_BlockReadRegister_DeviceRestricted(devices,id,reg,wd) AQ_API_BlockReadRegister_Devs_ ## devices(id,reg,wd)

#define AQ_API_BlockReadRegister_Devs_APPIA(id,reg,wd) \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0))

#define AQ_API_BlockReadRegister_Devs_HHD(id,reg,wd) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((void)0))

#define AQ_API_BlockReadRegister_Devs_EUR(id,reg,wd) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((void)0))

#define AQ_API_BlockReadRegister_Devs_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((void)0))

#define AQ_API_BlockReadRegister_Devs_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((void)0))

#define AQ_API_BlockReadRegister_Devs_APPIA_HHD(id,reg,wd) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_APPIA_EUR(id,reg,wd) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_APPIA_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_HHD_EUR(id,reg,wd) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_HHD_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_HHD_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_EUR_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_EUR_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((void)0)))

#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((void)0))))

#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0)))))

#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0)))))

#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0)))))

#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0)))))

#define AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((void)0)))))

#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockRead (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockRead (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockRead (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockRead (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd)) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockRead (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd)) : \
    ((void)0))))))

#define AQ_API_BlockReadRegister_Devs_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_CAL_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_CAL_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_CAL_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_CAL_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_HHD_RHEA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_HHD_CAL_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_HHD_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_CAL_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_EUR_RHEA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_HHD_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_HHD_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_EUR_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_EUR_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_CAL_RHEA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_HHD_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_HHD_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_EUR_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_EUR_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_CAL_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_APPIA_RHEA_CAL_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_EUR_CAL_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_EUR_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_CAL_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_CAL_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_RHEA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_APPIA_RHEA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_APPIA_CAL_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_APPIA_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_CAL_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_EUR_RHEA_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_APPIA_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_APPIA_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_EUR_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_EUR_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_CAL_RHEA_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_APPIA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_APPIA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_EUR_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_EUR_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_CAL_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_HHD_RHEA_CAL_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_HHD_CAL_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_HHD_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_CAL_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_CAL_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_RHEA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_APPIA_RHEA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_APPIA_CAL_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_APPIA_RHEA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_CAL_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_CAL_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_RHEA_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_HHD_RHEA_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_APPIA_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_APPIA_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_HHD_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_HHD_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_CAL_RHEA_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_APPIA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_APPIA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_HHD_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_HHD_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_CAL_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_EUR_RHEA_CAL_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_HHD_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_HHD_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_EUR_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_EUR_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_RHEA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_APPIA_RHEA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_APPIA_EUR_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_APPIA_RHEA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_EUR_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_EUR_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_RHEA_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_HHD_RHEA_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_APPIA_HHD_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_APPIA_RHEA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_HHD_APPIA_RHEA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_HHD_RHEA_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_RHEA_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_EUR_RHEA_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_APPIA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_APPIA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_HHD_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_HHD_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_EUR_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_CAL_RHEA_EUR_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_HHD_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_HHD_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_EUR_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_EUR_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_CAL_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_APPIA_CAL_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_APPIA_EUR_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_APPIA_CAL_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_EUR_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_EUR_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_CAL_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_HHD_CAL_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_APPIA_HHD_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_APPIA_CAL_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_HHD_APPIA_CAL(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_HHD_CAL_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_CAL_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_EUR_CAL_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_APPIA_HHD_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_APPIA_EUR_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_HHD_APPIA_EUR(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_HHD_EUR_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_EUR_APPIA_HHD(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)
#define AQ_API_BlockReadRegister_Devs_RHEA_CAL_EUR_HHD_APPIA(id,reg,wd) AQ_API_BlockReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd)


#define AQ_API_BlockWriteRegister(id,reg,wd,value) AQ_API_BlockWriteRegister_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,reg,wd,value)

#define AQ_API_BlockWriteRegister_DeviceRestricted(devices,id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_ ## devices(id,reg,wd,value)

#define AQ_API_BlockWriteRegister_Devs_APPIA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_BlockWriteRegister_Devs_HHD(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_BlockWriteRegister_Devs_EUR(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_BlockWriteRegister_Devs_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_BlockWriteRegister_Devs_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((void)0))

#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_HHD_EUR(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_HHD_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_EUR_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((void)0)))

#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((void)0))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((void)0)))))

#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? AQ_API_MDIO_BlockWrite (id,reg ## _RHEA_mmdAddress,(reg ## _RHEA_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_CAL) ? AQ_API_MDIO_BlockWrite (id,reg ## _CAL_mmdAddress,(reg ## _CAL_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_EUR) ? AQ_API_MDIO_BlockWrite (id,reg ## _EUR_mmdAddress,(reg ## _EUR_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_HHD) ? AQ_API_MDIO_BlockWrite (id,reg ## _HHD_mmdAddress,(reg ## _HHD_baseRegisterAddress + wd),value) : \
    ((port->device == AQ_DEVICE_APPIA) ? AQ_API_MDIO_BlockWrite (id,reg ## _APPIA_mmdAddress,(reg ## _APPIA_baseRegisterAddress + wd),value) : \
    ((void)0))))))

#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_CAL_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_CAL_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_CAL_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_HHD_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_HHD_CAL_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_EUR_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_HHD_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_CAL_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_HHD_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_HHD_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_EUR_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_EUR_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_CAL_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_APPIA_RHEA_CAL_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_EUR_CAL_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_EUR_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_CAL_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_CAL_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_RHEA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_APPIA_RHEA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_APPIA_CAL_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_EUR_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_APPIA_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_CAL_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_APPIA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_HHD_RHEA_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_HHD_CAL_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_HHD_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_CAL_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_CAL_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_RHEA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_APPIA_RHEA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_APPIA_CAL_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_APPIA_RHEA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_CAL_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_CAL_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_RHEA_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_HHD_RHEA_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_APPIA_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_CAL_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_APPIA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_EUR_RHEA_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_HHD_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_HHD_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_EUR_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_EUR_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_RHEA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_APPIA_RHEA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_APPIA_EUR_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_APPIA_RHEA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_EUR_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_EUR_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_RHEA_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_HHD_RHEA_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_APPIA_HHD_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_APPIA_RHEA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_HHD_APPIA_RHEA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_HHD_RHEA_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_RHEA_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_EUR_RHEA_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_APPIA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_CAL_RHEA_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_HHD_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_HHD_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_EUR_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_EUR_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_CAL_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_APPIA_CAL_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_APPIA_EUR_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_APPIA_CAL_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_EUR_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_EUR_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_CAL_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_HHD_CAL_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_APPIA_HHD_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_APPIA_CAL_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_HHD_APPIA_CAL(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_HHD_CAL_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_CAL_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_EUR_CAL_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_APPIA_HHD_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_APPIA_EUR_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_HHD_APPIA_EUR(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_HHD_EUR_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_EUR_APPIA_HHD(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)
#define AQ_API_BlockWriteRegister_Devs_RHEA_CAL_EUR_HHD_APPIA(id,reg,wd,value) AQ_API_BlockWriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,wd,value)


#endif

#define AQ_API_Variable(reg) AQ_API_Variable_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,reg)

#define AQ_API_Variable_DeviceRestricted(devices,reg) AQ_API_Variable_Devs_ ## devices(reg)

#define AQ_API_Variable_Devs_APPIA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_EUR(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_CAL(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_HHD(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_EUR(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_CAL(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD_EUR(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD_CAL(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_EUR_CAL(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_EUR_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_CAL_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_HHD_EUR(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_HHD_CAL(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_HHD_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_EUR_CAL(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_EUR_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_CAL_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD_EUR_CAL(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD_EUR_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD_CAL_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_EUR_CAL_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg) uint8_t _local ## reg ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* _local ## reg ## _APPIA = (reg ## _APPIA*) _local ## reg ## _space; \
  reg ## _HHD* _local ## reg ## _HHD = (reg ## _HHD*) _local ## reg ## _space; \
  reg ## _EUR* _local ## reg ## _EUR = (reg ## _EUR*) _local ## reg ## _space; \
  reg ## _CAL* _local ## reg ## _CAL = (reg ## _CAL*) _local ## reg ## _space; \
  reg ## _RHEA* _local ## reg ## _RHEA = (reg ## _RHEA*) _local ## reg ## _space; \

#define AQ_API_Variable_Devs_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD(reg)
#define AQ_API_Variable_Devs_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR(reg)
#define AQ_API_Variable_Devs_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_CAL(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD(reg) AQ_API_Variable_Devs_HHD_EUR(reg)
#define AQ_API_Variable_Devs_CAL_HHD(reg) AQ_API_Variable_Devs_HHD_CAL(reg)
#define AQ_API_Variable_Devs_RHEA_HHD(reg) AQ_API_Variable_Devs_HHD_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR(reg) AQ_API_Variable_Devs_EUR_CAL(reg)
#define AQ_API_Variable_Devs_RHEA_EUR(reg) AQ_API_Variable_Devs_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL(reg) AQ_API_Variable_Devs_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR(reg)
#define AQ_API_Variable_Devs_HHD_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR(reg)
#define AQ_API_Variable_Devs_EUR_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL(reg)
#define AQ_API_Variable_Devs_HHD_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL(reg)
#define AQ_API_Variable_Devs_CAL_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_HHD_CAL(reg) AQ_API_Variable_Devs_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_CAL_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_HHD_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_EUR_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_RHEA(reg) AQ_API_Variable_Devs_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_CAL(reg) AQ_API_Variable_Devs_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_RHEA(reg) AQ_API_Variable_Devs_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_HHD(reg) AQ_API_Variable_Devs_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_CAL(reg) AQ_API_Variable_Devs_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_HHD(reg) AQ_API_Variable_Devs_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_CAL(reg) AQ_API_Variable_Devs_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_RHEA(reg) AQ_API_Variable_Devs_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_EUR(reg) AQ_API_Variable_Devs_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_CAL(reg) AQ_API_Variable_Devs_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_EUR(reg) AQ_API_Variable_Devs_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_HHD_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_HHD_EUR_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_HHD_EUR_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_HHD_CAL_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_HHD_CAL_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_HHD_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_HHD_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_CAL_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_EUR_CAL_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_HHD_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_HHD_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_EUR_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_CAL_EUR_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL(reg)
#define AQ_API_Variable_Devs_APPIA_HHD_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_HHD_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_CAL_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_CAL_RHEA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_RHEA_CAL(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_EUR_RHEA(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_RHEA_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_EUR_CAL(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_CAL_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_CAL_RHEA(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_RHEA_CAL(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_HHD_RHEA(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_RHEA_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_HHD_CAL(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_CAL_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_EUR_RHEA(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_RHEA_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_HHD_RHEA(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_RHEA_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_HHD_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_EUR_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_EUR_CAL(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_CAL_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_HHD_CAL(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_CAL_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_HHD_EUR(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_EUR_HHD(reg) AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_HHD_EUR_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_HHD_CAL_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_HHD_CAL_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_HHD_RHEA_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_HHD_RHEA_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_HHD_CAL_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_HHD_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_CAL_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_CAL_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_RHEA_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_EUR_RHEA_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_HHD_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_HHD_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_EUR_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_EUR_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_RHEA_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_CAL_RHEA_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_HHD_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_HHD_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_EUR_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_EUR_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_CAL_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_APPIA_RHEA_CAL_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_EUR_CAL_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_EUR_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_CAL_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_CAL_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_RHEA_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_APPIA_RHEA_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_APPIA_CAL_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_APPIA_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_CAL_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_CAL_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_RHEA_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_EUR_RHEA_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_APPIA_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_APPIA_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_EUR_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_EUR_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_RHEA_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_CAL_RHEA_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_APPIA_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_APPIA_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_EUR_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_EUR_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_CAL_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_HHD_RHEA_CAL_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_HHD_CAL_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_HHD_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_CAL_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_CAL_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_RHEA_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_APPIA_RHEA_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_APPIA_CAL_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_APPIA_RHEA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_CAL_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_CAL_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_RHEA_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_HHD_RHEA_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_APPIA_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_APPIA_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_HHD_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_HHD_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_RHEA_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_CAL_RHEA_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_APPIA_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_APPIA_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_HHD_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_HHD_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_CAL_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_EUR_RHEA_CAL_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_HHD_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_HHD_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_EUR_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_EUR_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_RHEA_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_APPIA_RHEA_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_APPIA_EUR_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_APPIA_RHEA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_EUR_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_EUR_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_RHEA_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_HHD_RHEA_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_APPIA_HHD_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_APPIA_RHEA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_HHD_APPIA_RHEA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_HHD_RHEA_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_RHEA_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_EUR_RHEA_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_APPIA_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_APPIA_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_HHD_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_HHD_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_EUR_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_CAL_RHEA_EUR_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_HHD_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_HHD_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_EUR_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_EUR_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_CAL_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_APPIA_CAL_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_APPIA_EUR_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_APPIA_CAL_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_EUR_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_EUR_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_CAL_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_HHD_CAL_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_APPIA_HHD_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_APPIA_CAL_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_HHD_APPIA_CAL(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_HHD_CAL_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_CAL_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_EUR_CAL_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_APPIA_HHD_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_APPIA_EUR_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_HHD_APPIA_EUR(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_HHD_EUR_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_EUR_APPIA_HHD(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)
#define AQ_API_Variable_Devs_RHEA_CAL_EUR_HHD_APPIA(reg) AQ_API_Variable_Devs_APPIA_HHD_EUR_CAL_RHEA(reg)


#define AQ_API_DeclareLocalStruct(reg,localvar) AQ_API_DeclareLocalStruct_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,reg,localvar)

#define AQ_API_DeclareLocalStruct_DeviceRestricted(devices,reg,localvar) AQ_API_DeclareLocalStruct_Devs_ ## devices(reg,localvar)

#define AQ_API_DeclareLocalStruct_Devs_APPIA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_EUR(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_CAL(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar) uint8_t localvar ## _space[ sizeof(reg ## _BiggestVersion) ];\
  reg ## _APPIA* localvar ## _APPIA = (reg ## _APPIA*) localvar ## _space; \
  reg ## _HHD* localvar ## _HHD = (reg ## _HHD*) localvar ## _space; \
  reg ## _EUR* localvar ## _EUR = (reg ## _EUR*) localvar ## _space; \
  reg ## _CAL* localvar ## _CAL = (reg ## _CAL*) localvar ## _space; \
  reg ## _RHEA* localvar ## _RHEA = (reg ## _RHEA*) localvar ## _space; \

#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_CAL_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_CAL_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_CAL_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_CAL_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_RHEA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_HHD_CAL_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_HHD_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_CAL_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_EUR_RHEA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_HHD_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_HHD_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_EUR_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_EUR_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_CAL_RHEA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_HHD_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_HHD_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_EUR_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_EUR_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_CAL_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_APPIA_RHEA_CAL_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_EUR_CAL_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_EUR_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_CAL_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_CAL_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_RHEA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_APPIA_RHEA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_APPIA_CAL_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_APPIA_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_CAL_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_EUR_RHEA_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_APPIA_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_APPIA_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_EUR_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_EUR_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_CAL_RHEA_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_APPIA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_APPIA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_EUR_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_EUR_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_CAL_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_HHD_RHEA_CAL_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_HHD_CAL_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_HHD_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_CAL_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_CAL_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_RHEA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_APPIA_RHEA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_APPIA_CAL_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_APPIA_RHEA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_CAL_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_CAL_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_RHEA_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_HHD_RHEA_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_APPIA_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_APPIA_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_HHD_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_HHD_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_CAL_RHEA_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_APPIA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_APPIA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_HHD_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_HHD_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_CAL_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_EUR_RHEA_CAL_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_HHD_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_HHD_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_EUR_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_EUR_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_RHEA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_APPIA_RHEA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_APPIA_EUR_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_APPIA_RHEA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_EUR_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_EUR_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_RHEA_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_HHD_RHEA_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_APPIA_HHD_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_APPIA_RHEA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_HHD_APPIA_RHEA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_HHD_RHEA_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_RHEA_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_EUR_RHEA_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_APPIA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_APPIA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_HHD_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_HHD_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_EUR_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_CAL_RHEA_EUR_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_HHD_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_HHD_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_EUR_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_EUR_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_CAL_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_APPIA_CAL_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_APPIA_EUR_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_APPIA_CAL_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_EUR_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_EUR_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_CAL_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_HHD_CAL_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_APPIA_HHD_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_APPIA_CAL_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_HHD_APPIA_CAL(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_HHD_CAL_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_CAL_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_EUR_CAL_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_APPIA_HHD_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_APPIA_EUR_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_HHD_APPIA_EUR(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_HHD_EUR_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_EUR_APPIA_HHD(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)
#define AQ_API_DeclareLocalStruct_Devs_RHEA_CAL_EUR_HHD_APPIA(reg,localvar) AQ_API_DeclareLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar)


#define AQ_API_Set(id,reg,field,value) AQ_API_Set_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,reg,field,value)

#define AQ_API_Set_DeviceRestricted(devices,id,reg,field,value) AQ_API_Set_Devs_ ## devices(id,reg,field,value)

#define AQ_API_Set_Devs_APPIA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_EUR(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_CAL(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_HHD(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_CAL(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_RHEA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_CAL(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_RHEA(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_EUR_CAL(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_EUR_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_EUR_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_EUR_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_HHD_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_HHD_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_HHD_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      if (_local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field != value) \
      { \
        _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
      } \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      if (_local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field != value) \
      { \
        _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
      } \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      if (_local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field != value) \
      { \
        _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
      } \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      if (_local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field != value) \
      { \
        _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
      } \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      if (_local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field != value) \
      { \
        _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
        AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
      } \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Set_Devs_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_HHD_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_HHD_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_HHD_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_HHD_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_HHD_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_EUR_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_CAL_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_APPIA_RHEA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_EUR_CAL_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_APPIA_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_EUR_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_CAL_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_HHD_RHEA_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_APPIA_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_HHD_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_CAL_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_EUR_RHEA_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_APPIA_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_HHD_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_EUR_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_CAL_RHEA_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_APPIA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_HHD_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_EUR_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Set_Devs_RHEA_CAL_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Set_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)


#define AQ_API_Adjust(id,reg,field,value) AQ_API_Adjust_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,reg,field,value)

#define AQ_API_Adjust_DeviceRestricted(devices,id,reg,field,value) AQ_API_Adjust_Devs_ ## devices(id,reg,field,value)

#define AQ_API_Adjust_Devs_APPIA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_EUR(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_CAL(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_HHD(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_CAL(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_RHEA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_CAL(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_RHEA(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_EUR_CAL(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_EUR_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_EUR_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_EUR_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_HHD_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_HHD_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_HHD_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field,_local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field); \
       \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field,_local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field); \
       \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field,_local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field); \
       \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field,_local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field); \
       \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field = value; \
      AQ_API_WriteRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field,_local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field); \
       \
      break; \
    default: break; \
  } \
} 

#define AQ_API_Adjust_Devs_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_HHD_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_HHD_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_HHD_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_HHD_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_HHD_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_EUR_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_CAL_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_APPIA_RHEA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_EUR_CAL_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_APPIA_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_EUR_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_CAL_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_HHD_RHEA_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_APPIA_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_HHD_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_CAL_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_EUR_RHEA_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_APPIA_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_HHD_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_EUR_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_CAL_RHEA_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_APPIA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_HHD_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_EUR_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Adjust_Devs_RHEA_CAL_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Adjust_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)


#define AQ_API_Get(id,reg,field,value) AQ_API_Get_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,reg,field,value)

#define AQ_API_Get_DeviceRestricted(devices,id,reg,field,value) AQ_API_Get_Devs_ ## devices(id,reg,field,value)

#define AQ_API_Get_Devs_APPIA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_CAL(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_HHD(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_RHEA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_RHEA(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_HHD_EUR(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_HHD_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_HHD_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value) { \
  switch (port->device) { \
    case AQ_DEVICE_APPIA: \
      _local ## reg ## _APPIA->word_ ## reg ## _APPIA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _APPIA_ ## field); \
      value = _local ## reg ## _APPIA->bits_ ## reg ## _APPIA_ ## field.field; \
      break; \
    case AQ_DEVICE_HHD: \
      _local ## reg ## _HHD->word_ ## reg ## _HHD_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _HHD_ ## field); \
      value = _local ## reg ## _HHD->bits_ ## reg ## _HHD_ ## field.field; \
      break; \
    case AQ_DEVICE_EUR: \
      _local ## reg ## _EUR->word_ ## reg ## _EUR_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _EUR_ ## field); \
      value = _local ## reg ## _EUR->bits_ ## reg ## _EUR_ ## field.field; \
      break; \
    case AQ_DEVICE_CAL: \
      _local ## reg ## _CAL->word_ ## reg ## _CAL_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _CAL_ ## field); \
      value = _local ## reg ## _CAL->bits_ ## reg ## _CAL_ ## field.field; \
      break; \
    case AQ_DEVICE_RHEA: \
      _local ## reg ## _RHEA->word_ ## reg ## _RHEA_ ## field = AQ_API_ReadRegister_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,reg ## _RHEA_ ## field); \
      value = _local ## reg ## _RHEA->bits_ ## reg ## _RHEA_ ## field.field; \
      break; \
    default: value = 0; break; \
  } \
} 

#define AQ_API_Get_Devs_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_HHD_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_HHD_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_HHD_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_HHD_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_HHD_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_EUR_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_CAL_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_APPIA_RHEA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_EUR_CAL_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_EUR_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_CAL_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_CAL_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_RHEA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_APPIA_RHEA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_EUR_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_CAL_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_HHD_RHEA_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_HHD_CAL_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_HHD_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_CAL_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_CAL_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_RHEA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_APPIA_RHEA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_APPIA_CAL_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_APPIA_RHEA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_CAL_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_CAL_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_RHEA_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_HHD_RHEA_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_CAL_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_EUR_RHEA_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_HHD_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_HHD_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_EUR_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_EUR_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_RHEA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_APPIA_RHEA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_APPIA_EUR_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_APPIA_RHEA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_EUR_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_EUR_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_RHEA_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_HHD_RHEA_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_APPIA_HHD_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_APPIA_RHEA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_HHD_APPIA_RHEA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_HHD_RHEA_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_RHEA_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_EUR_RHEA_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_CAL_RHEA_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_HHD_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_HHD_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_EUR_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_EUR_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_CAL_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_APPIA_CAL_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_APPIA_EUR_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_APPIA_CAL_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_EUR_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_EUR_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_CAL_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_HHD_CAL_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_APPIA_HHD_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_APPIA_CAL_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_HHD_APPIA_CAL(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_HHD_CAL_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_CAL_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_EUR_CAL_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_APPIA_HHD_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_APPIA_EUR_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_HHD_APPIA_EUR(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_HHD_EUR_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_EUR_APPIA_HHD(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)
#define AQ_API_Get_Devs_RHEA_CAL_EUR_HHD_APPIA(id,reg,field,value) AQ_API_Get_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field,value)


#define AQ_API_BitfieldOfLocalStruct(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,reg,localvar,field)

#define AQ_API_BitfieldOfLocalStruct_DeviceRestricted(devices,reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_ ## devices(reg,localvar,field)

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD(reg,localvar,field) \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    (0))

#define AQ_API_BitfieldOfLocalStruct_Devs_EUR(reg,localvar,field) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    (0))

#define AQ_API_BitfieldOfLocalStruct_Devs_CAL(reg,localvar,field) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    (0))

#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    (0))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD(reg,localvar,field) \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR(reg,localvar,field) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL(reg,localvar,field) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR(reg,localvar,field) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL(reg,localvar,field) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL(reg,localvar,field) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    (0)))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    (0))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0)))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0)))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0)))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0)))))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    (0)))))

#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field) : \
    (0))))))

#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_CAL_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_CAL_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_CAL_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_HHD_CAL_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_HHD_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_HHD_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_HHD_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_EUR_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_EUR_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_EUR_CAL_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_EUR_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_CAL_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_CAL_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_APPIA_CAL_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_APPIA_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_EUR_RHEA_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_APPIA_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_APPIA_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_EUR_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_EUR_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_CAL_RHEA_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_EUR_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_EUR_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_CAL_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_HHD_RHEA_CAL_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_HHD_CAL_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_HHD_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_CAL_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_CAL_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_APPIA_CAL_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_APPIA_RHEA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_CAL_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_CAL_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_RHEA_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_HHD_RHEA_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_APPIA_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_APPIA_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_HHD_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_HHD_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_CAL_RHEA_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_HHD_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_HHD_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_CAL_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_EUR_RHEA_CAL_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_HHD_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_HHD_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_EUR_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_EUR_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_APPIA_EUR_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_APPIA_RHEA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_EUR_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_EUR_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_RHEA_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_HHD_RHEA_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_APPIA_HHD_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_APPIA_RHEA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_HHD_APPIA_RHEA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_HHD_RHEA_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_RHEA_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_EUR_RHEA_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_HHD_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_HHD_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_EUR_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_CAL_RHEA_EUR_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA_EUR_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA_CAL_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_EUR_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_EUR_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_CAL_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_HHD_CAL_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA_HHD_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA_CAL_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_HHD_APPIA_CAL(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_HHD_CAL_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_CAL_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_EUR_CAL_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA_HHD_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA_EUR_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_HHD_APPIA_EUR(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_HHD_EUR_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_EUR_APPIA_HHD(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)
#define AQ_API_BitfieldOfLocalStruct_Devs_RHEA_CAL_EUR_HHD_APPIA(reg,localvar,field) AQ_API_BitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field)


#define AQ_API_AssignBitfieldOfLocalStruct(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,reg,localvar,field,value)

#define AQ_API_AssignBitfieldOfLocalStruct_DeviceRestricted(devices,reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_ ## devices(reg,localvar,field,value)

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    (0))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    (0))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    (0))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    (0))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    (0)))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    (0))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0)))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0)))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0)))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0)))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    (0)))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->bits_ ## reg ## _RHEA ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->bits_ ## reg ## _CAL ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->bits_ ## reg ## _EUR ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->bits_ ## reg ## _HHD ## _ ## field.field = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->bits_ ## reg ## _APPIA ## _ ## field.field = value) : \
    (0))))))

#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_CAL_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_CAL_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_CAL_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_RHEA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_HHD_CAL_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_HHD_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_EUR_RHEA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_HHD_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_HHD_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_EUR_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_EUR_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_CAL_RHEA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_HHD_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_EUR_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_RHEA_CAL_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_EUR_CAL_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_EUR_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_CAL_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_CAL_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_APPIA_RHEA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_APPIA_CAL_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_APPIA_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_CAL_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_EUR_RHEA_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_APPIA_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_APPIA_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_EUR_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_EUR_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_CAL_RHEA_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_APPIA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_EUR_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_EUR_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_CAL_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_HHD_RHEA_CAL_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_HHD_CAL_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_HHD_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_CAL_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_CAL_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_APPIA_RHEA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_APPIA_CAL_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_APPIA_RHEA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_CAL_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_CAL_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_RHEA_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_HHD_RHEA_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_APPIA_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_APPIA_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_HHD_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_HHD_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_CAL_RHEA_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_APPIA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_HHD_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_HHD_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_CAL_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_EUR_RHEA_CAL_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_HHD_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_HHD_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_EUR_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_EUR_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_APPIA_RHEA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_APPIA_EUR_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_APPIA_RHEA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_EUR_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_EUR_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_RHEA_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_HHD_RHEA_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_APPIA_HHD_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_APPIA_RHEA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_HHD_APPIA_RHEA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_HHD_RHEA_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_RHEA_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_EUR_RHEA_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_APPIA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_HHD_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_HHD_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_EUR_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_CAL_RHEA_EUR_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_HHD_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_EUR_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_APPIA_CAL_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA_EUR_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_APPIA_CAL_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_EUR_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_EUR_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_CAL_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_HHD_CAL_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA_HHD_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_APPIA_CAL_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_HHD_APPIA_CAL(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_HHD_CAL_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_CAL_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_EUR_CAL_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA_HHD_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_APPIA_EUR_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_HHD_APPIA_EUR(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_HHD_EUR_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_EUR_APPIA_HHD(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)
#define AQ_API_AssignBitfieldOfLocalStruct_Devs_RHEA_CAL_EUR_HHD_APPIA(reg,localvar,field,value) AQ_API_AssignBitfieldOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(reg,localvar,field,value)


#define AQ_API_WordOfLocalStruct(localvar,wd) AQ_API_WordOfLocalStruct_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,localvar,wd)

#define AQ_API_WordOfLocalStruct_DeviceRestricted(devices,localvar,wd) AQ_API_WordOfLocalStruct_Devs_ ## devices(localvar,wd)

#define AQ_API_WordOfLocalStruct_Devs_APPIA(localvar,wd) \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0))

#define AQ_API_WordOfLocalStruct_Devs_HHD(localvar,wd) \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    (0))

#define AQ_API_WordOfLocalStruct_Devs_EUR(localvar,wd) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    (0))

#define AQ_API_WordOfLocalStruct_Devs_CAL(localvar,wd) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    (0))

#define AQ_API_WordOfLocalStruct_Devs_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    (0))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD(localvar,wd) \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR(localvar,wd) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL(localvar,wd) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR(localvar,wd) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL(localvar,wd) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL(localvar,wd) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    (0)))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    (0))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0)))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0)))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0)))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0)))))

#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    (0)))))

#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd) : \
    (0))))))

#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_CAL_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_CAL_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_CAL_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_RHEA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_HHD_CAL_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_HHD_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_EUR_RHEA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_HHD_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_HHD_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_EUR_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_EUR_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_CAL_RHEA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_HHD_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_HHD_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_EUR_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_EUR_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_CAL_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_APPIA_RHEA_CAL_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_EUR_CAL_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_EUR_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_CAL_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_CAL_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_RHEA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_APPIA_RHEA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_APPIA_CAL_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_APPIA_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_EUR_RHEA_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_APPIA_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_APPIA_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_EUR_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_EUR_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_CAL_RHEA_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_APPIA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_APPIA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_EUR_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_EUR_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_CAL_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_HHD_RHEA_CAL_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_HHD_CAL_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_HHD_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_CAL_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_CAL_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_RHEA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_APPIA_RHEA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_APPIA_CAL_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_APPIA_RHEA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_CAL_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_CAL_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_RHEA_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_HHD_RHEA_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_APPIA_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_APPIA_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_HHD_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_HHD_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_CAL_RHEA_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_APPIA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_APPIA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_HHD_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_HHD_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_CAL_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_EUR_RHEA_CAL_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_HHD_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_HHD_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_EUR_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_EUR_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_RHEA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_APPIA_RHEA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_APPIA_EUR_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_APPIA_RHEA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_EUR_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_EUR_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_RHEA_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_HHD_RHEA_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_APPIA_HHD_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_APPIA_RHEA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_HHD_APPIA_RHEA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_HHD_RHEA_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_RHEA_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_EUR_RHEA_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_APPIA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_APPIA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_HHD_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_HHD_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_EUR_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_CAL_RHEA_EUR_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_HHD_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_HHD_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_EUR_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_EUR_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_CAL_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_APPIA_CAL_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_APPIA_EUR_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_APPIA_CAL_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_EUR_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_EUR_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_CAL_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_HHD_CAL_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_APPIA_HHD_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_APPIA_CAL_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_HHD_APPIA_CAL(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_HHD_CAL_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_CAL_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_EUR_CAL_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_APPIA_HHD_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_APPIA_EUR_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_HHD_APPIA_EUR(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_HHD_EUR_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_EUR_APPIA_HHD(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)
#define AQ_API_WordOfLocalStruct_Devs_RHEA_CAL_EUR_HHD_APPIA(localvar,wd) AQ_API_WordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd)


#define AQ_API_AssignWordOfLocalStruct(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,localvar,wd,value)

#define AQ_API_AssignWordOfLocalStruct_DeviceRestricted(devices,localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_ ## devices(localvar,wd,value)

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD(localvar,wd,value) \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    (0))

#define AQ_API_AssignWordOfLocalStruct_Devs_EUR(localvar,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    (0))

#define AQ_API_AssignWordOfLocalStruct_Devs_CAL(localvar,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    (0))

#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    (0))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD(localvar,wd,value) \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR(localvar,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL(localvar,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR(localvar,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL(localvar,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL(localvar,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    (0)))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd,value) \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    (0))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value) \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0)))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0)))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0)))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0)))))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    (0)))))

#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value) \
    ((port->device == AQ_DEVICE_RHEA) ? ((localvar ## _RHEA)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_CAL) ? ((localvar ## _CAL)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_EUR) ? ((localvar ## _EUR)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_HHD) ? ((localvar ## _HHD)->u ## wd.word_ ## wd = value) : \
    ((port->device == AQ_DEVICE_APPIA) ? ((localvar ## _APPIA)->u ## wd.word_ ## wd = value) : \
    (0))))))

#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_CAL_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_CAL_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_CAL_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_CAL_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_RHEA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_HHD_CAL_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_HHD_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_CAL_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_EUR_RHEA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_HHD_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_HHD_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_EUR_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_EUR_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_CAL_RHEA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_HHD_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_HHD_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_EUR_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_EUR_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_CAL_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_APPIA_RHEA_CAL_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_EUR_CAL_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_EUR_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_CAL_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_CAL_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_RHEA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_APPIA_RHEA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_APPIA_CAL_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_APPIA_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_CAL_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_EUR_RHEA_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_APPIA_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_APPIA_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_EUR_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_EUR_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_CAL_RHEA_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_APPIA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_APPIA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_EUR_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_EUR_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_CAL_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_HHD_RHEA_CAL_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_HHD_CAL_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_HHD_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_CAL_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_CAL_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_RHEA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_APPIA_RHEA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_APPIA_CAL_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_APPIA_RHEA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_CAL_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_CAL_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_RHEA_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_HHD_RHEA_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_APPIA_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_APPIA_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_HHD_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_HHD_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_CAL_RHEA_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_APPIA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_APPIA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_HHD_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_HHD_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_CAL_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_EUR_RHEA_CAL_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_HHD_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_HHD_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_EUR_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_EUR_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_RHEA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_APPIA_RHEA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_APPIA_EUR_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_APPIA_RHEA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_EUR_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_EUR_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_RHEA_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_HHD_RHEA_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_APPIA_HHD_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_APPIA_RHEA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_HHD_APPIA_RHEA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_HHD_RHEA_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_RHEA_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_EUR_RHEA_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_APPIA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_APPIA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_HHD_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_HHD_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_EUR_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_CAL_RHEA_EUR_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_HHD_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_HHD_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_EUR_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_EUR_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_CAL_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_APPIA_CAL_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_APPIA_EUR_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_APPIA_CAL_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_EUR_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_EUR_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_CAL_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_HHD_CAL_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_APPIA_HHD_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_APPIA_CAL_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_HHD_APPIA_CAL(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_HHD_CAL_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_CAL_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_EUR_CAL_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_APPIA_HHD_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_APPIA_EUR_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_HHD_APPIA_EUR(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_HHD_EUR_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_EUR_APPIA_HHD(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)
#define AQ_API_AssignWordOfLocalStruct_Devs_RHEA_CAL_EUR_HHD_APPIA(localvar,wd,value) AQ_API_AssignWordOfLocalStruct_Devs_APPIA_HHD_EUR_CAL_RHEA(localvar,wd,value)


#define AQ_API_Field(id,reg,field) AQ_API_Field_DeviceRestricted(APPIA_HHD_EUR_CAL_RHEA,id,reg,field)

#define AQ_API_Field_DeviceRestricted(devices,id,reg,field) AQ_API_Field_Devs_ ## devices(id,reg,field)

#define AQ_API_Field_Devs_APPIA(id,reg,field) \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0))

#define AQ_API_Field_Devs_HHD(id,reg,field) \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    (0))

#define AQ_API_Field_Devs_EUR(id,reg,field) \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    (0))

#define AQ_API_Field_Devs_CAL(id,reg,field) \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    (0))

#define AQ_API_Field_Devs_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    (0))

#define AQ_API_Field_Devs_APPIA_HHD(id,reg,field) \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_APPIA_EUR(id,reg,field) \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_APPIA_CAL(id,reg,field) \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_APPIA_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_HHD_EUR(id,reg,field) \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_HHD_CAL(id,reg,field) \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_HHD_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_EUR_CAL(id,reg,field) \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_EUR_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_CAL_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    (0)))

#define AQ_API_Field_Devs_APPIA_HHD_EUR(id,reg,field) \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_APPIA_HHD_CAL(id,reg,field) \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_APPIA_HHD_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_APPIA_EUR_CAL(id,reg,field) \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_APPIA_EUR_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_APPIA_CAL_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_HHD_EUR_CAL(id,reg,field) \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_HHD_EUR_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_HHD_CAL_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_EUR_CAL_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    (0))))

#define AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field) \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0)))))

#define AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0)))))

#define AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0)))))

#define AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0)))))

#define AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    (0)))))

#define AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field) \
    ((port->device == AQ_DEVICE_RHEA) ? (reg ## _RHEA_ ## field) : \
    ((port->device == AQ_DEVICE_CAL) ? (reg ## _CAL_ ## field) : \
    ((port->device == AQ_DEVICE_EUR) ? (reg ## _EUR_ ## field) : \
    ((port->device == AQ_DEVICE_HHD) ? (reg ## _HHD_ ## field) : \
    ((port->device == AQ_DEVICE_APPIA) ? (reg ## _APPIA_ ## field) : \
    (0))))))

#define AQ_API_Field_Devs_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_CAL(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD(id,reg,field) AQ_API_Field_Devs_HHD_CAL(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_HHD_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR(id,reg,field) AQ_API_Field_Devs_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_CAL(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_HHD_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL(id,reg,field)
#define AQ_API_Field_Devs_APPIA_HHD_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_HHD_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_CAL_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_CAL_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_CAL_RHEA(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_EUR_CAL(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_CAL_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_HHD_CAL(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_CAL_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_HHD_EUR(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_EUR_HHD(id,reg,field) AQ_API_Field_Devs_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_HHD_EUR_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_HHD_CAL_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_HHD_CAL_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_HHD_RHEA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_HHD_RHEA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_HHD_CAL_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_HHD_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_CAL_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_CAL_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_RHEA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_EUR_RHEA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_HHD_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_HHD_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_EUR_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_EUR_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_RHEA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_CAL_RHEA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_HHD_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_HHD_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_EUR_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_EUR_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_CAL_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_APPIA_RHEA_CAL_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_EUR_CAL_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_EUR_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_CAL_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_CAL_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_RHEA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_APPIA_RHEA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_APPIA_CAL_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_APPIA_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_CAL_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_CAL_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_RHEA_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_EUR_RHEA_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_APPIA_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_APPIA_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_EUR_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_EUR_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_RHEA_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_CAL_RHEA_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_APPIA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_APPIA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_EUR_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_EUR_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_CAL_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_HHD_RHEA_CAL_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_HHD_CAL_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_HHD_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_CAL_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_CAL_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_RHEA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_APPIA_RHEA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_APPIA_CAL_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_APPIA_RHEA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_CAL_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_CAL_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_RHEA_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_HHD_RHEA_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_APPIA_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_APPIA_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_HHD_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_HHD_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_RHEA_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_CAL_RHEA_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_APPIA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_APPIA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_HHD_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_HHD_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_CAL_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_EUR_RHEA_CAL_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_HHD_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_HHD_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_EUR_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_EUR_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_RHEA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_APPIA_RHEA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_APPIA_EUR_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_APPIA_RHEA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_EUR_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_EUR_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_RHEA_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_HHD_RHEA_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_APPIA_HHD_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_APPIA_RHEA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_HHD_APPIA_RHEA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_HHD_RHEA_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_RHEA_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_EUR_RHEA_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_APPIA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_APPIA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_HHD_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_HHD_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_EUR_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_CAL_RHEA_EUR_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_HHD_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_HHD_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_EUR_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_EUR_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_CAL_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_APPIA_CAL_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_APPIA_EUR_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_APPIA_CAL_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_EUR_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_EUR_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_CAL_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_HHD_CAL_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_APPIA_HHD_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_APPIA_CAL_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_HHD_APPIA_CAL(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_HHD_CAL_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_CAL_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_EUR_CAL_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_APPIA_HHD_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_APPIA_EUR_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_HHD_APPIA_EUR(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_HHD_EUR_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_EUR_APPIA_HHD(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)
#define AQ_API_Field_Devs_RHEA_CAL_EUR_HHD_APPIA(id,reg,field) AQ_API_Field_Devs_APPIA_HHD_EUR_CAL_RHEA(id,reg,field)


#endif

