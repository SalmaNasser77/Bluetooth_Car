/*
 * GPIO_Base.h
 *
 *  Created on: Oct 27, 2024
 *      Author: roboticscorner
 */

#ifndef INC_GPIO_BASE_H_
#define INC_GPIO_BASE_H_

#include "main.h"

#include<unordered_map>

enum class OUTPUT_MODES : uint32_t  //the user will input it
{
	OUTPUT_2MHZ_SPEED = 2,
	OUTPUT_10MHZ_SPEED = 1,
	OUTPUT_50MHZ_SPEED = 3,
	OUTPUT_ALT_PUSH_PULL = 0xB
};

enum class INPUT_MODES : uint32_t  //the user will input it
{
	INPUT_FLOATING = 4,
	Analog_mode = 0,
	Input_with_pull = 8
};


struct GPIO_CONSTS  // constants I'll directly use
{
	static constexpr uint32_t BITS_PAR_PIN = 4;
	static constexpr uint32_t BITS_PAR_REG = 32;
	static constexpr uint32_t NUM_BIT_PAR_REG = 8;
};

class GPIO_Base
{
	public:
	GPIO_Base(GPIO_TypeDef * GPIO, uint8_t pin);

	protected:
	GPIO_TypeDef *port_;
	uint8_t pin_;
	static std::unordered_map<GPIO_TypeDef*, bool> output_init;
};





#endif /* INC_GPIO_BASE_H_ */
