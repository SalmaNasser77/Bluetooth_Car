/*
 * RCC_Peripheral_Enable.cpp
 *
 *  Created on: Dec 28, 2024
 *      Author: roboticscorner
 */

#include "RCC_Peripheral_Enable/RCC_Peripheral_Enable.h"
#include "main.h"

void Enable_APB2_Peripheral(PeripheralID PerID)
{
	RCC->APB2ENR |= (1 << PerID);
}
