/*
 * uart.cpp
 *
 *  Created on: Dec 25, 2024
 *      Author: roboticscorner
 */

#include "Bluetooth/Uart.h"
#include "GPIO/Input.h"
#include "GPIO/Output.h"



Uart::Uart(uint32_t baudrate)
{
	if(this == reinterpret_cast<Uart*>(Usart1Instance))
	{
		this->IntitalizeUart1(baudrate);

	}
	else if(this == reinterpret_cast<Uart*>(Usart2Instance))
	{

	}
	else if(this == reinterpret_cast<Uart*>(Usart3Instance))
	{

	}

}

void* Uart::operator new(size_t, UsartInstance uart)
{
	return reinterpret_cast<void*>(uart);
}

void Uart::IntitalizeUart1(uint32_t baudrate)
{

	this->setUart1_bins();
	this->setUart1_mode_fullduplex();
	this->setUart1_baudrate(baudrate);
	this->EnableUart1();
}

void Uart::setUart1_bins()
{
	//PA9(TX) is output alternate push-pull
	Output TX_Uart1(GPIOA, UART1_TX_BIN, OUTPUT_MODES::OUTPUT_ALT_PUSH_PULL);

	//PA10(RX) is input floating
	Input RX_Uart1(GPIOA, UART1_RX_BIN, INPUT_MODES::INPUT_FLOATING);
}

void Uart::setUart1_mode_fullduplex()
{
	this->CR1 |= (1 << UART1_RX_Enable_Bin) | (1 << UART1_TX_Enable_Bin);  // Enable Recieve and Transmit
}

void Uart::setUart1_baudrate(uint32_t baudrate)
{
	this->BRR = F_OSC / baudrate;   // HSI = 8mhz setting baudrate
}

void Uart::EnableUart1()
{
	this->CR1 |= (1 << UART1_Enable_Bin);  // enable uart
}

void Uart::sendString(char *data)
{
	int i = 0;
	while(data[i] != '\0')
	{
		SendChar(data[i]);
		i++;
	}
}

char Uart::UartRead()
{
	while(!(USART1->SR & (1 << 5)));
	return USART1->DR;
}

void Uart::SendChar(char ch)
{
	USART1->DR = ch;
	while(!(USART1->SR & (1 << 6)));
}
