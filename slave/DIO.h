


#ifndef DIO_H
#define DIO_H

#include "ATMEGA32_Regs.h"
#include "BIT_MATH.h"                                                  

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT 0

#define DIO_PORT_OUTPUT 0xff
#define DIO_PORT_INPUT 0x00

#define DIO_PIN_HIGH 1
#define DIO_PIN_LOW 0

#define DIO_PORT_HIGH 0xff
#define DIO_PORT_LOW 0x00

void DIO_SetPortDir(uint8 port , uint8 dir);
void DIO_SetPinDir(uint8 port , uint8 pin , uint8 dir);

void DIO_WritePort(uint8 port , uint8 val);
void DIO_WritePin(uint8 port , uint8 pin , uint8 val);

void DIO_ReadPort(uint8 port , uint8* val);
void DIO_ReadPin(uint8 port , uint8 pin , uint8 *val);

void DIO_ToggelPin(uint8 port , uint8 pin);




#endif