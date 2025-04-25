/*
 * KEYPAD_CFG.c
 *
 *  Created on: Apr 19, 2025
 *      Author: talaa
 */

#include "../../MCAL/DIO/DIO_Interface.h"
#include "KEYPAD_CFG.h"
const uint8 ROW[NUM_OF_ROWS]=
{
		ROW_1,
		ROW_2,
		ROW_3,
		ROW_4
};

const uint8 COL[NUM_OF_ROWS]=
{
		COL_1,
		COL_2,
		COL_3,
		COL_4
};

const uint8 KEYS[NUM_OF_ROWS][NUM_OF_COLS]=
{
		{'7','8','9','/'},
		{'4','5','6','x'},
		{'1','2','3','-'},
		{'c','0','=','+'}
};
