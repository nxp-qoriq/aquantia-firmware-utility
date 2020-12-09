// SPDX-License-Identifier: (BSD-2-Clause)
/* Copyright 2020 NXP
 */
#ifndef __AQ_TP1_FOTA_H
#define __AQ_TP1_FOTA_H

extern int32_t aqr_fota_check_and_update(uint8_t *);
/*
 * Return Value : 
 *     Success : Image upgrade is triggered 
 *     Failure : Image upgrade is not required
 * Description : The above API is called when the F/w upgradation is in progress.
 */


extern int32_t aqr_fota_image_upgrade_status(void);
/*
 * Return Value : 
 *     Success : Image upgrade was successful 
 *     Failure : Image upgrade failed
 * Description :
 *     The above API is to check whether the image upgradation was successful.
 *     If success, the images are copied to older boot partitions & the board is
 *     booted with the images in this partition (F/w upgrade is successful).
 *     In case of failure, the images from older partition are copied to this
 *     partition & the board is booted with the images in the older partition
 *     (F/w upgrade is failed). This API will be called after board is rebooted.
 */

extern void aqr_fota_set_verbose(int);
/*
 * Description:
 *     The above API is used for setting verbosity of debugging messages.
 *     By default, any informal/debug print messages are turned off.
 * Input:
 *     0 - everything off
 *     1 - library
 *     2 - aquantia api
 */

#endif
