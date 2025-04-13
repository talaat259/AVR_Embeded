/*
 * LCD.c
 *
 *  Created on: Feb 14, 2025
 *      Author: talaa
 */

#include "util/delay.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#define LCD_PORT PB
#define RS_pin 0
#define E    1
#define  command_print 0x80

void LCD_write_charachter(uint8 charachter){
	DIO_writepin(RS_pin,HIGH);//zero for instructions while 1 for DATA
	_delay_ms(1);
	DIO_writeport(LCD_PORT, charachter);//ACTUAL VALUE DISPLAYED ON LCD
	DIO_writepin(E,HIGH);
	_delay_ms(1);
	DIO_writepin(E,LOW);
	_delay_ms(3);

}

void LCD_write_command(uint8 command){
	DIO_writepin(RS_pin,LOW);//zero for instructions while 1 for DATA
	_delay_ms(1);
	DIO_writeport(LCD_PORT, command);//ACTUAL VALUE DISPLAYED ON LCD
	DIO_writepin(E,HIGH);
	_delay_ms(1);
	DIO_writepin(E,LOW);
	_delay_ms(3);
}


void LCD_goto(int row,int colomn){

	if(row==0){
		LCD_write_command(command_print+0x00+colomn);

	}
	else{
		LCD_write_command(command_print+0x40+colomn);

	}





}



void LCD_init(void){
	_delay_ms(30);
	LCD_write_command(0x38);
	_delay_ms(1);
	LCD_write_command(0x0c);
	_delay_ms(1);
	LCD_write_command(0x01);
	_delay_ms(2);
}
//al_LCD
