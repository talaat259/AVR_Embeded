/*
 * EXI.c
 *
 *  Created on: Apr 12, 2025
 *      Author: talaa
 */

#include"../../LIB/mem_map.h"
#include"../../LIB/std_types.h"
#include"../../LIB/utilities.h"
#include "EXI_interface.h"
#include "EXI_Private.h"





void (*EXTI0_ptr_0)(void) = 0;
void (*EXTI0_ptr_1)(void) = 0;
void (*EXTI0_ptr_2)(void) = 0;



extern void STATUS_REGISTER_enable_disable(General_I_Status Status){
	switch(Status){
	case 0:
		CLEAR_BIT(SREG,7);
		break;
	case 1:
		SET_BIT(SREG,7);
		break;
	default:
		break;

	}
}


void sense_edit(INT_Type INTN,Sense_Control_Type type){

	switch(type)
	{

	case 0:
		switch(INTN)
		{
		case 1:
			CLEAR_BIT(MCUCR,3);
			CLEAR_BIT(MCUCR,2);
			break;
		case 0:
			CLEAR_BIT(MCUCR,1);
			CLEAR_BIT(MCUCR,0);
			break;
		}

		break;

		case 1:
			switch(INTN)
			{
			case 1:
				CLEAR_BIT(MCUCR,3);
				SET_BIT(MCUCR,2);
				break;
			case 0:
				CLEAR_BIT(MCUCR,1);
				SET_BIT(MCUCR,0);
				break;
			}
			break;
			case 2:
				switch(INTN)
				{
				case 1:
					SET_BIT(MCUCR,3);
					CLEAR_BIT(MCUCR,2);
					break;
				case 0:
					SET_BIT(MCUCR,1);
					CLEAR_BIT(MCUCR,0);
					break;
				}
				break;
				case 3:
					switch(INTN)
					{
					case 1:
						SET_BIT(MCUCR,3);
						SET_BIT(MCUCR,2);
						break;
					case 0:
						SET_BIT(MCUCR,1);
						SET_BIT(MCUCR,0);
						break;
					}
					break;
					default:

						break;

	}


}


 void general_REGISTER_I_SELECTOR(INT_Type INTN,Sense_Control_Type type)
{
	/*sei();

	SET_BIT(MCUCR,3);
	CLEAR_BIT(MCUCR,2);

	SET_BIT(GICR,7);
*/
	 sei();

	switch(INTN){
	case 0:
		SET_BIT(GICR,6);
		sense_edit(INTN,type);
		break;
	case 1:
		SET_BIT(GICR,7);

		sense_edit(INTN,type);

		break;
	case 2:
		SET_BIT(GICR,5);
		if(type==2){
			CLEAR_BIT(MCUCSR,6);
		}
		else{

			SET_BIT(MCUCSR,6);
		}
		break;
	default:
		break;

	}

}


void  Set_callback_0( void(*func)(void))
{

	EXTI0_ptr_0 = func;
}
void  Set_callback_1( void (*func) (void) )
{

	EXTI0_ptr_1 = func;
}
void  Set_callback_2(void(*func)(void))
{

	EXTI0_ptr_2 = func;
}

ISR(INT0_vect)
{
	EXTI0_ptr_0();
}


ISR(INT1_vect)
{
	EXTI0_ptr_1();
}








