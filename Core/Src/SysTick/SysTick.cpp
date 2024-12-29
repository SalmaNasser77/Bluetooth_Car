/*
 * SysTick.cpp
 *
 *  Created on: Dec 29, 2024
 *      Author: roboticscorner
 */

#include "SysTick/SysTick.h"
#include "main.h"


// the amount to delay in ms
static volatile uint32_t Ticks;

void SysTick_Init();
void SysTick_Handler();

void DelayInit()
{
	SysTick_Init();
}


void Delay(uint32_t ms_delay)
{
	Ticks = ms_delay;
	while(Ticks);
}

void SysTick_Handler()
{
	if(Ticks > 0)
	{
		Ticks--;
	}
}

void SysTick_Init()
{
	SysTick->LOAD = OSC / Milis_In_Sec;

	SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_TICKINT_Msk | SysTick_CTRL_ENABLE_Msk;

}

