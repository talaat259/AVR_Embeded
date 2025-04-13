/*
 * DIO.c
 *
 *  Created on: Feb 8, 2025
 *      Author: talaa
 */


#include"DIO_Interface.h"
#include "DIO_Private.h"
#include"DIO_CFG.h"

extern  DioDirection_type const Pin_configration[NUM_OF_PINS];


void DIO_initPin(DioPin_type pin,DioDirection_type Direction){
	uint8 port=pin/8;
	pin=pin%8;
	switch(Direction)////// !!!!!!check the logic for the switch cases!!!!!
	{
	case INPUT_FLOATING :
		switch(port)
		{
		case PA :
			CLEAR_BIT(DDRA,pin);
			CLEAR_BIT(PORTA,pin);
			break;
		case PB :
			CLEAR_BIT(DDRB,pin);
			CLEAR_BIT(PORTB,pin);
			break;
		case PC :
			CLEAR_BIT(DDRC,pin);
			CLEAR_BIT(PORTC,pin);
			break;
		case PD :
			CLEAR_BIT(DDRD,pin);
			CLEAR_BIT(PORTD,pin);
			break;
		}
		break;

		case INPUT_PULLUP:
			switch(port){
			case PA :
				CLEAR_BIT(DDRA,pin);
				SET_BIT(PORTA,pin);
				break;
			case PB :
				CLEAR_BIT(DDRB,pin);
				SET_BIT(PORTB,pin);
				break;
			case PC :
				CLEAR_BIT(DDRC,pin);
				SET_BIT(PORTC,pin);
				break;
			case PD :
				CLEAR_BIT(DDRD,pin);
				SET_BIT(PORTD,pin);
				break;
			}
			break;


			case OUTPUT:
				switch(port){
				case PA :
					SET_BIT(DDRA,pin);
					break;
				case PB :
					SET_BIT(DDRB,pin);
					break;
				case PC :
					SET_BIT(DDRC,pin);
					break;
				case PD :
					SET_BIT(DDRD,pin);
					break;
				}

	}



}

void DIO_writepin (DioPin_type pin,DIO_ValueType value){//write pin value (for input)

	uint8 port=pin/8;
	pin=pin%8;

	switch(port){
	case PA:

		if(value){
			SET_BIT(PORTA,pin);
		}
		else{
			CLEAR_BIT(PORTA,pin);
		}
		break;
	case PB:
		if(value){
			SET_BIT(PORTB,pin);
		}
		else{
			CLEAR_BIT(PORTB,pin);
		}
		break;
	case PC:
		if(value){
			SET_BIT(PORTC,pin);
		}
		else{
			CLEAR_BIT(PORTC,pin);
		}
		break;
	case PD:
		if(value){
			SET_BIT(PORTD,pin);
		}
		else{
			CLEAR_BIT(PORTD,pin);
		}
		break;
	}

}

DIO_ValueType DIO_readpin(DioPin_type pin)
{

	uint8 port=pin/8;
	pin=pin%8;

	switch(port){
	case PA:
		return GET_BIT(PORTA,pin);
		break;
	case PB:
		return GET_BIT(PORTB,pin);
		break;
	case PC:
		return GET_BIT(PORTC,pin);
		break;
	case PD:
		return GET_BIT(PORTD,pin);
		break;
	default:
		return 0;
		break;
	}


}

void DIO_init(void){
	for(int i=0;i<NUM_OF_PINS;i++){


		DIO_initPin(i,Pin_configration[i]);


	}

}



void DIO_writeport(DioPort_type Port,DIO_ValueType value){

	switch(Port){
		case PA:
			PORTA=value;
			break;
		case PB:
			PORTB=value;
			break;
		case PC:
			PORTC=value;
			break;
		case PD:
			PORTD=value;
			break;
		default:
			PORTA=0X00;
			break;
		}


}



