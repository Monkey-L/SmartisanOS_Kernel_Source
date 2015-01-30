/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2569, 2570, 2568, 2561, 2545},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60,
		55, 50, 45, 40, 35, 30, 25, 20, 16, 13,
		11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{1270, 294, 100, 81, 72},
				{1226, 296, 101, 84, 74},
				{1226, 299, 103, 84, 74},
				{1210, 305, 108, 87, 76},
				{1201, 314, 113, 91, 79},
				{1151, 328, 119, 95, 81},
				{1157, 312, 124, 98, 84},
				{1163, 306, 132, 103, 87},
				{1179, 306, 127, 108, 91},
				{1218, 305, 106, 87, 77},
				{1260, 309, 105, 84, 76},
				{1301, 317, 108, 88, 79},
				{1351, 337, 113, 93, 82},
				{1411, 368, 117, 94, 85},
				{1475, 405, 122, 94, 79},
				{1556, 446, 125, 92, 78},
				{1731, 494, 126, 93, 78},
				{1979, 545, 124, 92, 76},
				{2197, 588, 127, 92, 78},
				{2283, 606, 136, 98, 81},
				{2105, 584, 139, 101, 82},
				{2251, 601, 144, 103, 84},
				{2442, 620, 151, 105, 84},
				{2674, 641, 158, 107, 83},
				{2951, 665, 160, 104, 81},
				{3349, 687, 155, 103, 84},
				{3867, 712, 160, 107, 87},
				{4650, 753, 174, 116, 98},
				{5958, 817, 197, 132, 106},
				{8703, 1007, 245, 156, 131},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60,
		55, 50, 45, 40, 35, 30, 25, 20, 16, 13,
		11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4331, 4329, 4325, 4320, 4314},
				{4240, 4256, 4259, 4257, 4252},
				{4172, 4196, 4203, 4201, 4197},
				{4114, 4142, 4149, 4147, 4143},
				{4062, 4091, 4097, 4095, 4092},
				{3977, 4039, 4051, 4049, 4044},
				{3931, 3975, 3998, 3999, 3999},
				{3886, 3929, 3960, 3961, 3959},
				{3854, 3891, 3916, 3921, 3920},
				{3831, 3856, 3867, 3869, 3869},
				{3812, 3827, 3837, 3838, 3838},
				{3794, 3803, 3814, 3815, 3815},
				{3777, 3787, 3795, 3796, 3796},
				{3760, 3774, 3779, 3779, 3779},
				{3743, 3761, 3768, 3764, 3755},
				{3725, 3745, 3755, 3747, 3733},
				{3703, 3726, 3731, 3724, 3709},
				{3681, 3709, 3698, 3690, 3676},
				{3660, 3694, 3684, 3677, 3666},
				{3642, 3683, 3681, 3674, 3663},
				{3633, 3677, 3679, 3673, 3662},
				{3622, 3671, 3677, 3671, 3659},
				{3609, 3663, 3673, 3667, 3655},
				{3593, 3653, 3664, 3659, 3644},
				{3572, 3638, 3646, 3637, 3615},
				{3547, 3614, 3609, 3597, 3573},
				{3512, 3574, 3558, 3546, 3522},
				{3464, 3516, 3493, 3483, 3460},
				{3396, 3434, 3409, 3401, 3377},
				{3284, 3302, 3282, 3277, 3248},
				{3000, 3000, 3000, 3000, 3000}
	}
};


struct bms_battery_data sfo_4v35_2570mah_data = {
	.fcc				= 2570,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 158
};
