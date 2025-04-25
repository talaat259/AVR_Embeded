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

	PIN0,
		PIN1,
		PIN2,
		PIN3,
		PIN4,
		PIN5,
		PIN6,
		PIN7,

		PIN8,
		PIN9,
		PIN10,
		PIN11,
		PIN12,
		PIN13,
		PIN14,
		PIN15,

		PIN16,
		PIN17,
		PIN18,
		PIN19,
		PIN20,
		PIN21,
		PIN22,
		PIN23,

		PIN24,
		PIN25,
		PIN26,
		PIN27,
		PIN28,
		PIN29,
		PIN30,
		PIN31



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

