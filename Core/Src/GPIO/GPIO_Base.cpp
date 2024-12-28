/*
 * GPIO_Base.cpp
 *
 *  Created on: Oct 27, 2024
 *      Author: roboticscorner
 */

#include "GPIO/GPIO_Base.h"



GPIO_Base::GPIO_Base(GPIO_TypeDef * GPIO, uint8_t pin):port_(GPIO), pin_(pin)
{
	if(!output_init[port_])
	{
		port_->CRL = 0;
		port_->CRH = 0;
		port_->ODR = 0;
		output_init[port_] = true;
	}
}

std::unordered_map<GPIO_TypeDef*, bool> GPIO_Base::output_init = {
    {GPIOA, false},
    {GPIOB, false},
    {GPIOC, false}
};



