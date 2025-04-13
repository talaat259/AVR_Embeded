/*
 * KEY_PAD.c
 *
 *  Created on: Feb 15, 2025
 *      Author: talaa
 */


/*
 * KEY_PAD.C
 *
 *  Created on: Feb 14, 2025
 *      Author: talaa
 */

//#define F_CPU 16000000UL
#include "util/delay.h"
#include "../../LIB/utilities.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../LIB/std_types.h"
#include "KEY_PAD.h"
#include "KEY_PAD_DFG.h"



#define port PD
#define rows 4
#define col 4



uint8 keys[rows][col]={{1,2,3,4},{5,6,7,8},{9,10,'@','#'},{'%','+','-','*'}};


uint8 ROW_Selector(void){
	uint8 i;
	uint8 value;
	DioPin_type pins[4]={row0,row1,row2,row3};
	DIO_ValueType ROW_Value;
	for(i=0;i<rows;i++){
		ROW_Value=GET_BIT(port,pins[i]);
		if(!(ROW_Value)){
			value=i;
			break;
		}

	}
	return value;

}

uint8 KEY_PAD(void){

//DioPin_type row_colomns[rows][2]={{row0,col0},{row0,col1},{row0,col2},{row0,col3},
//		{row1,col0},{row1,col1},{row1,col2},{row1,col3},
//		{row2,col0},{row2,col1},{row2,col2},{row3,col3},
//		{row0,col0},{row1,col1},{row2,col2},{row3,col3}

	//								};

DIO_ValueType COL0;
DIO_ValueType COL1;
DIO_ValueType COL2;
DIO_ValueType COL3;
uint8 ROW_COORDINATES;
uint8 COLOMN_COORDINATES;
while(1){
	 COL0=GET_BIT(port,col0);
	 COL1 =GET_BIT(port,col1);
	 COL2=GET_BIT(port,col2);
	 COL3=GET_BIT(port,col3);
	if(!COL0){
		COLOMN_COORDINATES=0;
		ROW_COORDINATES=ROW_Selector();
	}
	else if ((!COL1)){
		COLOMN_COORDINATES=1;
		ROW_COORDINATES=ROW_Selector();
	}
	else if ((!COL2)){
		COLOMN_COORDINATES=2;
		ROW_COORDINATES=ROW_Selector();
	}
	else if ((!COL3)){
		COLOMN_COORDINATES=3;
		ROW_COORDINATES=ROW_Selector();

	}
	else{
		return 200;
	}

	_delay_ms(30);
	return keys[ROW_COORDINATES][COLOMN_COORDINATES];








}
}
