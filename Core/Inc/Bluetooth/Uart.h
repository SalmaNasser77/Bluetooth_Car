/*
 * UART.h
 *
 *  Created on: Dec 25, 2024
 *      Author: roboticscorner
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h"

#define UART1_BASE_ADDR        0x40013800
#define UART2_BASE_ADDR        0x40004400
#define UART3_BASE_ADDR        0x40004800

#define UART1_TX_BIN           9
#define UART1_RX_BIN           10


#define UART1_RX_Enable_Bin      2
#define UART1_TX_Enable_Bin	     3

#define UART1_Enable_Bin		 13





enum UsartInstance
{
	Usart1Instance = UART1_BASE_ADDR,
	Usart2Instance = UART2_BASE_ADDR,
	Usart3Instance = UART3_BASE_ADDR
};

#define F_OSC    	8000000

class Uart
{
	public:
	Uart(uint32_t baudrate);

	void* operator new(size_t, UsartInstance uart);

	void IntitalizeUart1(uint32_t baudrate);

	void setUart1_bins();

	void setUart1_mode_fullduplex();

	void setUart1_baudrate(uint32_t baudrate);

	void EnableUart1();

	char UartRead();

	void SendChar(char ch);

	void sendString(char *data);


	private:
	/*Registers*/
	uint32_t SR;
	uint32_t DR;
	uint32_t BRR;
	uint32_t CR1;
	uint32_t CR2;
	uint32_t CR3;
	uint32_t GPTR;
};


#endif /* INC_UART_H_ */
