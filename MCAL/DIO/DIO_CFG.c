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
		 INPUT_FLOATING,//p0
		 INPUT_FLOATING,//p1
		 INPUT_FLOATING,//p2
		 INPUT_FLOATING,//p3
		 INPUT_FLOATING,//p4
		 INPUT_FLOATING,//p5
		 INPUT_FLOATING,//p6
		 INPUT_FLOATING,//p7
		 INPUT_FLOATING,//p8//PB0 RS//A
		 INPUT_FLOATING,//p9 //PB1 E
		 INPUT_FLOATING,//p10
		 INPUT_FLOATING,//p11
		 INPUT_FLOATING,//p12
		 INPUT_FLOATING,//p13
		 INPUT_FLOATING,//p14
		 INPUT_FLOATING,//p15
		 OUTPUT,//p16//B
		 OUTPUT,//p17
		 OUTPUT,//p18
		 OUTPUT,//p19
		 INPUT_PULLUP,//p20
		 INPUT_PULLUP,//p21
		 INPUT_PULLUP,//p22
		 INPUT_PULLUP,//p23
		 INPUT_FLOATING,//p24//C
		 INPUT_FLOATING,//p25
		 INPUT_FLOATING,//p26
		 INPUT_FLOATING,//p27
		 INPUT_FLOATING,//p28
		 INPUT_FLOATING,//p29
		 INPUT_FLOATING,//p30
		 INPUT_FLOATING//p31
};
