/*
 * Robot.h
 *
 *  Created on: Dec 22, 2024
 *      Author: roboticscorner
 */

#ifndef INC_ROBOT_H_
#define INC_ROBOT_H_

#include "../Motor/Motor.h"

class Robot
{
	public:

	Robot(Motor& Front_Left_motor, Motor& Back_Left_motor, Motor& Front_Right_motor, Motor& Back_Right_motor);

	void moveForward();

	void moveBackward();

	void turnLeft();

	void turnRight();

	void Stop();

	private:
	Motor *Front_Left_motor;
	Motor *Back_Left_motor;
	Motor *Front_Right_motor;
	Motor *Back_Right_motor;

};



#endif /* INC_ROBOT_H_ */
