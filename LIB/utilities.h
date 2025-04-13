/*
 * utilities.h
 *
 *  Created on: Feb 7, 2025
 *      Author: talaa
 */

#ifndef LIB_UTILITIES_H_
#define LIB_UTILITIES_H_

#define SET_BIT(REG,BIT) REG=(REG|(1<<BIT))

#define CLEAR_BIT(REG,BIT) REG=(REG &~(1<<BIT))

#define TOGGLE_BIT(REG,BIT) REG=((REG) ^(1<<BIT))

#define GET_BIT(REG,BIT)  ((REG &(1<<BIT))>>BIT)
#define BIT_IS_SET(REG,BIT)  ((REG &(1<<BIT))>>BIT)
#define BIT_IS_CLEAR(REG,BIT) (!(REG &(1<<BIT)>>BIT))


#endif /* LIB_UTILITIES_H_ */
