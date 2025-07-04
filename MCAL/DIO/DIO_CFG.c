/*
 * DIO_CFG.c
 *
 *  Created on: Feb 8, 2025
 *      Author: talaa
 */

#include "DIO_CFG.h"
#include "DIO_Interface.h"
#include "DIO_Private.h"



//DioDirection_type Pin_configration[NUM_OF_PINS];

 DioDirection_type const Pin_configration[NUM_OF_PINS]=
 {
		 INPUT_FLOATING,//p0 A0
		 INPUT_FLOATING,//p1 A1
		 INPUT_FLOATING,//p2 A2
		 INPUT_FLOATING,//p3 A3
		 INPUT_FLOATING,//p4 A4
		 INPUT_FLOATING,//p5 A5
		 INPUT_FLOATING,//p6 A6
		 INPUT_FLOATING,//p7 A7
		 INPUT_FLOATING,//p8//PB0 RS// B0
		 INPUT_FLOATING,//p9 //PB1 E//B1
		 INPUT_FLOATING,//p10 B2
		 INPUT_FLOATING,//p11 B3
		 OUTPUT,//p12 B4
		 OUTPUT,//p13 B5
		 INPUT_FLOATING,//p14 B6
		 INPUT_FLOATING,//p15 B7
		 INPUT_FLOATING,//p16//C0
		 INPUT_FLOATING,//p17 C1
		 INPUT_FLOATING,//p18 C2
		 INPUT_FLOATING,//p19 C3
		 INPUT_FLOATING,//p20 C4
		 INPUT_FLOATING,//p21 C5
		 INPUT_FLOATING,//p22 C6
		 INPUT_FLOATING,//p23 C7
		 INPUT_FLOATING,//p24//C   D0
		 INPUT_FLOATING,//p25 D1
		 INPUT_FLOATING,//p26 D2
		 INPUT_PULLUP,//p27 D3
		 INPUT_FLOATING,//p28 D4
		 INPUT_FLOATING,//p29 D5
		 INPUT_FLOATING,//p30 D6
		 INPUT_FLOATING//p31 D7
};
