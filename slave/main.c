/*
 * grad slave.c
 *
 * Created: 8/30/2020 1:35:03 PM
 * Author : Omerh
 */ 

#include "SPI.h"
#define F_CPU_8000000
#include <util/delay.h>


int main(void)
{
		uint8 Recived_data = 0;
		uint8 Trans_data = 1;
		
		DIO_SetPinDir(DIO_PORTD, DIO_PIN3, DIO_PIN_OUTPUT);  //ACTUATOR 1
		DIO_SetPinDir(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);  //ACTUATOR 2
		
		SPI_Slave_Init();
	
	
	
    while (1) 
    {
		Recived_data = SPI_TranSiver(Trans_data);
		
		if (Recived_data == 2)
		{
			DIO_WritePin(DIO_PORTD, DIO_PIN3, DIO_PIN_HIGH);
			Recived_data = 0;
		}
		if(Recived_data == 4)
		{
			DIO_WritePin(DIO_PORTD, DIO_PIN3, DIO_PIN_LOW);
			Recived_data = 0;			
		}
		if(Recived_data == 3)
		{
			DIO_WritePin(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
			Recived_data = 0;			
		}
		if(Recived_data == 5)
		{
			DIO_WritePin(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
			Recived_data = 0;
		}
		_delay_ms(100);
    }
}

