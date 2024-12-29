#include "Bluetooth/Uart.h"
#include "GPIO/Input.h"
#include "GPIO/Output.h"
#include "main.h"
#include "Motor/Motor.h"
#include "Robot/Robot.h"
#include "RCC_Peripheral_Enable/RCC_Peripheral_Enable.h"


extern Motor_bin Front_Left_motor_bins;
extern Motor_bin Back_Left_motor_bins;
extern Motor_bin Front_Right_motor_bins;
extern Motor_bin Back_Right_motor_bins;


int main()
{
	//Enable clock gating for GPIOA, GPIOB and UART1
	Enable_APB2_Peripheral(GPIOA_ID);
	Enable_APB2_Peripheral(GPIOB_ID);
	Enable_APB2_Peripheral(UART1_ID);

	Uart* blu = new (Usart1Instance) Uart(9600);


	// Initializing the motors with the specific bins
	Motor Front_Left_motor(Front_Left_motor_bins);
	Motor Back_Left_motor(Back_Left_motor_bins);
	Motor Front_Right_motor(Front_Right_motor_bins);
	Motor Back_Right_motor(Back_Right_motor_bins);

	// Initializing the car
	Robot My_car(Front_Left_motor, Back_Left_motor,
				 Front_Right_motor, Back_Right_motor);
	while(1)
	{

		char ch = blu->UartRead();
		if(ch == 'F')
		{
			My_car.moveForward();
		}
		else if(ch == 'S' || ch == 'C')
		{
			My_car.Stop();
		}
		else if(ch == 'B')
		{
			My_car.moveBackward();
		}
		else if(ch == 'L')
		{
			My_car.turnLeft();
		}
		else if(ch == 'R')
		{
			My_car.turnRight();
		}




	}

	return 0;
}
