/*
 * main.c
 *
 *  Created on: Feb 8, 2025
 *      Author: talaa
 */
#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/KEYPAD/KEY_PAD.h"
#include "../HAL/LCD/LCD_Interface.h"


//al_LCD

int main(){


	DIO_init();

	LCD_init();
	LCD_goto(2,3);
	//char name[6]={'t','a','l','a','a','t'};
	//while(1){
//		for(int i;i<6;i++){
	//		LCD_write_charachter(name[i]);
		//}
	//}


}
