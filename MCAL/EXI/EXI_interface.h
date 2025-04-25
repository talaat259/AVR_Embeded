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
typedef enum{
	G_I_OFF=0,
	G_I_ON

}General_I_Status;


extern void STATUS_REGISTER_enable_disable(General_I_Status status);



extern void general_REGISTER_I_SELECTOR(INT_Type INTN,Sense_Control_Type type);

extern void  Set_callback_0(void(*func)(void));
extern void  Set_callback_1(void(*func)(void));
extern void  Set_callback_2(void(*func)(void));


#endif /* MCAL_EXI_EXI_INTERFACE_H_ */
