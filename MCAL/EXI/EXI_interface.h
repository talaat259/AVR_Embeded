/*
 * EXI_int.h
 *
 *  Created on: Apr 12, 2025
 *      Author: talaa
 */

#ifndef MCAL_EXI_EXI_INTERFACE_H_
#define MCAL_EXI_EXI_INTERFACE_H_

typedef enum
{
	INT0=0,
	INT1,
	INT2
}INT_Type;

typedef enum
{
	Low_Level=0,
	Any_Logical_Level,
	Falling_Edge,
	Rising_Edge
}Sense_Control_Type;

#endif /* MCAL_EXI_EXI_INTERFACE_H_ */
