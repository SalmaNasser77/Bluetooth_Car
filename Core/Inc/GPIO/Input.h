/*
 * input.h
 *
 *  Created on: Oct 27, 2024
 *      Author: roboticscorner
 */

#ifndef INC_INPUT_H_
#define INC_INPUT_H_

#include "main.h"
#include "../GPIO/GPIO_Base.h"

class Input : public GPIO_Base
{
	public:
	Input(GPIO_TypeDef * GPIO, uint8_t pin, INPUT_MODES MODE_P);

	bool GetStatus();

	~Input();

	private:
	uint32_t MODE;
};





#endif /* INC_INPUT_H_ */
