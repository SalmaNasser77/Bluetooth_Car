/*
 * motor_cfg.h
 *
 *  Created on: Dec 23, 2024
 *      Author: roboticscorner
 */

#ifndef INC_MOTOR_CFG_H_
#define INC_MOTOR_CFG_H_

#include "stm32f1xx_hal.h"
#include "../GPIO/Output.h"

typedef struct
{
	GPIO_TypeDef * Enable_GPIO;
	uint8_t Enbale_bin;

	GPIO_TypeDef * Int1_GPIO;
	uint8_t Int1_bin;

	GPIO_TypeDef * Int2_GPIO;
	uint8_t Int2_bin;

	OUTPUT_MODES Outputmode;
}Motor_bin;





#endif /* INC_MOTOR_CFG_H_ */
