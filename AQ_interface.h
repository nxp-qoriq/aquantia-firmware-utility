// SPDX-License-Identifier: (BSD-2-Clause)
/* Copyright 2020 NXP
 */
#ifndef __AQ_INTERFACE_H
#define __AQ_INTERFACE_H

#ifdef AQ_ENABLE_PRINT_IMPLEMENTATION
void AQ_API_SetVerbose(unsigned int);
#endif
void AQ_API_MDIO_Write(AQ_Port, unsigned int, unsigned int, unsigned int);
int AQ_API_MDIO_Read(AQ_Port, unsigned int, unsigned int);

#endif
