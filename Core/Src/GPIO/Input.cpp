/*
 * input.cpp
 *
 *  Created on: Oct 27, 2024
 *      Author: roboticscorner
 */

#include <GPIO/Input.h>


Input::Input(GPIO_TypeDef * GPIO, uint8_t pin, INPUT_MODES MODE_P):GPIO_Base(GPIO, pin), MODE(static_cast<uint32_t>(MODE_P))
{
	if(pin_ < GPIO_CONSTS::NUM_BIT_PAR_REG)
	{
		port_->CRL |= (MODE << (pin_ * GPIO_CONSTS::BITS_PAR_PIN));
	}
	else
	{
		port_->CRH |= ((MODE << ((pin_ * GPIO_CONSTS::BITS_PAR_PIN) - GPIO_CONSTS::BITS_PAR_REG)));
	}

}

bool Input::GetStatus()
{
	return (port_->IDR >> pin_) & 1;
}

Input::~Input()
{

}
