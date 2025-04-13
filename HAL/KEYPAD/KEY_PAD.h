/*
 * KEY_PAD.h
 *
 *  Created on: Feb 14, 2025
 *      Author: talaa
 */

#ifndef HAL_KEYPAD_KEY_PAD_H_
#define HAL_KEYPAD_KEY_PAD_H_
#include"../../MCAL/DIO/DIO_Interface.h"

#define row0	PINC0
#define row1	PINC1
#define row2	PINC2
#define row3    PINC3

#define col0 	PINC4
#define col1 	PINC5
#define col2 	PINC6
#define col3 	PINC7


extern uint8 KEY_PAD(void);

#endif /* HAL_KEYPAD_KEY_PAD_H_ */
