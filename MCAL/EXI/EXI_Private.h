/*
 * EXI_Private.h
 *
 *  Created on: Apr 12, 2025
 *      Author: talaa
 */

#ifndef MCAL_EXI_EXI_PRIVATE_H_
#define MCAL_EXI_EXI_PRIVATE_H_

# define sei()  __asm__ __volatile__ ("sei" ::)
# define cli()  __asm__ __volatile__ ("cli" ::)


#ifndef _VECTOR
#define _VECTOR(N) __vector_ ## N
#endif


#define INT0_vect			_VECTOR(1)
#define INT1_vect			_VECTOR(2)
#define INT2_vect			_VECTOR(3)



#  define ISR(vector, ...)            \
    void vector (void) __attribute__ ((signal,)) __VA_ARGS__; \
    void vector (void)



#endif /* MCAL_EXI_EXI_PRIVATE_H_ */
