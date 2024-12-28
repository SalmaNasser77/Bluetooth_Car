/*
 * RCC_Peripheral_Enable.h
 *
 *  Created on: Dec 28, 2024
 *      Author: roboticscorner
 */

#ifndef INC_RCC_PERIPHERAL_ENABLE_RCC_PERIPHERAL_ENABLE_H_
#define INC_RCC_PERIPHERAL_ENABLE_RCC_PERIPHERAL_ENABLE_H_

enum PeripheralID
{
	GPIOA_ID = 2,
	GPIOB_ID = 3,
	UART1_ID = 14
};


void Enable_APB2_Peripheral(PeripheralID PerID);


#endif /* INC_RCC_PERIPHERAL_ENABLE_RCC_PERIPHERAL_ENABLE_H_ */
