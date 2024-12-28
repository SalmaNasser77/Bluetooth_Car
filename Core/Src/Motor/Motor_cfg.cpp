/*
 * Motor_cfg.cpp
 *
 *  Created on: Dec 23, 2024
 *      Author: roboticscorner
 */

#include "Motor/Motor_cfg.h"

Motor_bin Front_Left_motor_bins =
{
		.Enable_GPIO = 			GPIOA,
		.Enbale_bin = 			6,
		.Int1_GPIO = 			GPIOA,
		.Int1_bin = 			5,
		.Int2_GPIO = 			GPIOB,
		.Int2_bin = 			1,
		.Outputmode = 			OUTPUT_MODES::OUTPUT_2MHZ_SPEED
};

Motor_bin Back_Left_motor_bins =
{
		.Enable_GPIO = 			GPIOB,
		.Enbale_bin = 			0,
		.Int1_GPIO = 			GPIOA,
		.Int1_bin = 			4,
		.Int2_GPIO = 			GPIOA,
		.Int2_bin = 			0,
		.Outputmode = 			OUTPUT_MODES::OUTPUT_2MHZ_SPEED
};

Motor_bin Front_Right_motor_bins =
{
		.Enable_GPIO = 			GPIOB,
		.Enbale_bin = 			6,
		.Int1_GPIO = 			GPIOA,
		.Int1_bin = 			11,
		.Int2_GPIO = 			GPIOA,
		.Int2_bin = 			12,
		.Outputmode = 			OUTPUT_MODES::OUTPUT_2MHZ_SPEED
};

Motor_bin Back_Right_motor_bins =
{
		.Enable_GPIO = 			GPIOB,
		.Enbale_bin = 			12,
		.Int1_GPIO = 			GPIOB,
		.Int1_bin = 			13,
		.Int2_GPIO = 			GPIOB,
		.Int2_bin = 			14,
		.Outputmode = 			OUTPUT_MODES::OUTPUT_2MHZ_SPEED
};


