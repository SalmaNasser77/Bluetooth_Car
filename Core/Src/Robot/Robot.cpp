/*
 * Robot.cpp
 *
 *  Created on: Dec 22, 2024
 *      Author: roboticscorner
 */
#include "Robot/Robot.h"

Robot::Robot(Motor& Front_Left_motor, Motor& Back_Left_motor, Motor& Front_Right_motor, Motor& Back_Right_motor)
{
	this->Front_Left_motor = &Front_Left_motor;
	this->Back_Left_motor = &Back_Left_motor;
	this->Front_Right_motor = &Front_Right_motor;
	this->Back_Right_motor = &Back_Right_motor;
}

void Robot::moveForward()
{
	this->Front_Left_motor->MoveAntiClockwise();
	this->Back_Left_motor->MoveAntiClockwise();

	this->Front_Right_motor->MoveClockwise();
	this->Back_Right_motor->MoveClockwise();
}

void Robot::moveBackward()
{
	this->Front_Left_motor->MoveClockwise();
	this->Back_Left_motor->MoveClockwise();

	this->Front_Right_motor->MoveAntiClockwise();
	this->Back_Right_motor->MoveAntiClockwise();
}

void Robot::turnLeft()
{
	this->Front_Left_motor->Stop();
	this->Back_Left_motor->Stop();

	this->Front_Right_motor->MoveClockwise();
	this->Back_Right_motor->MoveClockwise();
}

void Robot::turnRight()
{
	this->Front_Left_motor->MoveAntiClockwise();
	this->Back_Left_motor->MoveAntiClockwise();

	this->Front_Right_motor->Stop();
	this->Back_Right_motor->Stop();
}

void Robot::Stop()
{
	this->Front_Left_motor->Stop();
	this->Back_Left_motor->Stop();

	this->Front_Right_motor->Stop();
	this->Back_Right_motor->Stop();
}

