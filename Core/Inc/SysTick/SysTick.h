/*
 * SysTick.h
 *
 *  Created on: Dec 29, 2024
 *      Author: roboticscorner
 */

#ifndef INC_SYSTICK_SYSTICK_H_
#define INC_SYSTICK_SYSTICK_H_

#include "main.h"

#define OSC               8000000
#define Milis_In_Sec	  1000

void DelayInit();
void Delay(uint32_t ms_delay);



#endif /* INC_SYSTICK_SYSTICK_H_ */
