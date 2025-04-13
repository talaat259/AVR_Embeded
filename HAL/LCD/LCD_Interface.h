/*
 * LCD_Interface.h
 *
 *  Created on: Feb 14, 2025
 *      Author: talaa
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_

extern void LCD_goto(int row,int colomn);

extern void LCD_write_command(uint8 command);

extern void LCD_write_charachter(uint8 charachter);

extern void LDC_display_string(uint8 * arr);

extern void LDC_display_number(sint32 number);

extern void LCD_init(void);
#endif /* HAL_LCD_LCD_INTERFACE_H_ */
