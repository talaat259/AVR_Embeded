/*
 * DIO_Interface.h
 *
 *  Created on: Feb 8, 2025
 *      Author: talaa
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_


#include"../../LIB/mem_map.h"
#include"../../LIB/std_types.h"
#include"../../LIB/utilities.h"

typedef enum{

	PA=0,
	PB,
	PC,
	PD,

}DioPort_type;//ports in the ECU

typedef enum{

	PINA0=0,
	PINA1,
	PINA2,
	PINA3,
	PINA4,
	PINA5,
	PINA6,
	PINA7,

	PINB0,
	PINB1,
	PINB2,
	PINB3,
	PINB4,
	PINB5,
	PINB6,
	PINB7,

	PINC0,
	PINC1,
	PINC2,
	PINC3,
	PINC4,
	PINC5,
	PINC6,
	PINC7,

	PIND0,
	PIND1,
	PIND2,
	PIND3,
	PIND4,
	PIND5,
	PIND6,
	PIND7,



}DioPin_type;

typedef enum{

	INPUT_PULLUP=0,
	INPUT_FLOATING,
	OUTPUT

}DioDirection_type;

typedef enum{
	LOW,
	HIGH
}DIO_ValueType;



extern void DIO_initpin (DioPin_type pin,DioDirection_type direction);//

extern void DIO_writepin (DioPin_type pin,DIO_ValueType value);//write pin value (for input)
extern void DIO_writeport(DioPort_type Port,DIO_ValueType value);
extern DIO_ValueType DIO_readpin (DioPin_type pin);// read pin (for output)
extern void DIO_init (void);//initiate pins this function will call DIO_initpin n times where n is the num of pins in mp

#endif /* MCAL_DIO_DIO_INTERFACE_H_ */

