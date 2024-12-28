/*
 * output.h
 *
 *  Created on: Oct 24, 2024
 *      Author: roboticscorner
 */

#ifndef INC_OUTPUT_H_
#define INC_OUTPUT_H_

#include "main.h"
#include "../GPIO/GPIO_Base.h"

class Output:public GPIO_Base
{
public:
	Output(GPIO_TypeDef * GPIO, uint8_t pin, OUTPUT_MODES MODE_P);
	~Output();

	void On();
	void Off();

	void Toggle();

private:
	uint32_t MODE;
};




#endif /* INC_OUTPUT_H_ */
