/*
 * grad.c
 *
 * Created: 8/30/2020 1:12:41 AM
 * Author : Omerh
 */ 

#include "UART.h"
#include "SPI.h"
#define F_CPU_8000000 
#include <util/delay.h>

int main(void)
{
	uint8 value = 0;
	uint8 tx_data = 0;
	uint8 rx_data = 0;
	uint8 RX_Data = 0;

	UART_Init();
	UART_SendString("start");


	SPI_Master_Init();
	SPI_Master_InitTrans();
	_delay_ms(1000);
	
	

    while (1) 
    {
	   	tx_data = UART_ReceiveChar();
		_delay_ms(100);

		RX_Data = SPI_TranSiver(tx_data);
		_delay_ms(100);
		
    }
}

