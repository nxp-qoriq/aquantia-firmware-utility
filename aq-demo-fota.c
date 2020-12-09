// SPDX-License-Identifier: (BSD-2-Clause)
/* Copyright 2020 NXP
 */
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <stdio.h>

#include "aq-tp1-fota-api.h"

int main(int argc, char **argv)
{
	int ret;

	if (argc > 2) {
		printf("Usage: %s [filename]\n", argv[0]);
		return -1;
	}

	aqr_fota_set_verbose(0);

	if (argc == 1) {
		ret = aqr_fota_image_upgrade_status();
		printf("aqr_fota_image_upgrade_status() returned %d\n", ret);
	} else {
		ret = aqr_fota_check_and_update(argv[1]);
		printf("aqr_fota_check_and_update(%s) returned %d\n", argv[1], ret);
	}
	
	return ret;
}
