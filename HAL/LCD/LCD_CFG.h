/*
 * LCD_CFG.h
 *
 *  Created on: Feb 15, 2025
 *      Author: talaa
 */

#ifndef HAL_LCD_LCD_CFG_H_
#define HAL_LCD_LCD_CFG_H_

#define  command_print 0x80

#define LCD_8_MODE 8
#define LCD_4_MODE 4
#define LCD_MODE	LCD_8_MODE

#if(LCD_MODE==LCD_8_MODE)
#define LCD_PORT PB
#define RS_pin 0
#define E    1
#endif


#elif(LCD_MODE==LCD_8_MODE)

#define LCD_PIN0 PINC0
#define LCD_PIN1 PINC1
#define LCD_PIN2 PINC2
#define LCD_PIN3 PINC3


#define RS_pin 0
#define E    1

#endif /* HAL_LCD_LCD_CFG_H_ */
