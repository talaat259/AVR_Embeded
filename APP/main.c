/*
 * main.c
 *
 *  Created on: Feb 8, 2025
 *      Author: talaa
 */
#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/KEYPAD/KEY_PAD.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../MCAL/EXI/EXI_interface.h"

#include <util/delay.h>
//al_LCD


void Interupt_action(void){
	while(1){
	DIO_writepin(12,HIGH);
	}
}
int main(){


	DIO_init();
	STATUS_REGISTER_enable_disable(G_I_ON);
	general_REGISTER_I_SELECTOR(INT1,Falling_Edge);
	Set_callback_1(Interupt_action);


	//LCD_init();
	//LCD_goto(2,3);
	//char name[6]={'t','a','l','a','a','t'};
	//while(1){
//		for(int i;i<6;i++){
	//		LCD_write_charachter(name[i]);
		//}
	//}


}
