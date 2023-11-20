///**************************************************************************************************
// Name        : Ex7.c
// Author      : Salah BENDARY
// Description : Write a C Function that reads two integers and checks if the first is
//multiple of the second.
// **************************************************************************************************/

#include <stdio.h>
#include "std_types.h"

int isMultiple(uint8 u8NumberOne, uint8 u8NumberTwo) {
	uint8 u8result = 1;
	if(u8NumberOne*u8NumberOne==u8NumberTwo) { u8result = 1;}
	else { u8result = 0;}
	return u8result;
}

int main () {
	uint8 u8NumberOne = 2;
	uint8 u8NumberTwo = 4;
	uint8 u8result;
	u8result = isMultiple(u8NumberOne,u8NumberTwo);
	if(u8result) { printf("is Multiple!!! ");}
	else {printf("Not a Multiple!!! "); }
	return 0;
}
