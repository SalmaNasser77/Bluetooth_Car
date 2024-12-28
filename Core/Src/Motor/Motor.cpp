/*
 * Motor.cpp
 *
 *  Created on: Dec 22, 2024
 *      Author: roboticscorner
 */

#include "Motor/Motor.h"

Motor::Motor(Motor_bin Motor_bins)
{
	this->Enable = new Output(Motor_bins.Enable_GPIO, Motor_bins.Enbale_bin, Motor_bins.Outputmode);
	this->In1 = new Output(Motor_bins.Int1_GPIO, Motor_bins.Int1_bin, Motor_bins.Outputmode);
	this->In2 = new Output(Motor_bins.Int2_GPIO, Motor_bins.Int2_bin, Motor_bins.Outputmode);
}

void Motor::MoveClockwise()
{
	Enable->On();
	In1->On();
	In2->Off();
}

void Motor::MoveAntiClockwise()
{
	Enable->On();
	In1->Off();
	In2->On();
}

void Motor::Stop()
{
	Enable->Off();
	In1->Off();
	In2->Off();
}

Motor::~Motor()
{
	delete Enable;
	delete In1;
	delete In2;
}
