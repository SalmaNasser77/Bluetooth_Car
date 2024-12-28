/*
 * Motor.h
 *
 *  Created on: Dec 22, 2024
 *      Author: roboticscorner
 */

#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_

#include "../Motor/Motor_cfg.h"
#include "stm32f1xx_hal.h"
#include "../GPIO/Output.h"

class Motor
{
	public:

	Motor(Motor_bin Motor_bins);

	void MoveClockwise();

	void MoveAntiClockwise();

	void Stop();

	~Motor();

	private:
	Output *Enable;
	Output *In1;
	Output *In2;
};


#endif /* INC_MOTOR_H_ */
