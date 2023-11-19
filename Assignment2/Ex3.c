///**************************************************************************************************
// Name        : Ex3.c
// Author      : Salah BENDARY
// Description : Write a C Function that check if the number if positive or negative.
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"

void isPositive(sint8 u8number) {

	if(u8number >= 0) { printf("is positive");}
	else { printf("is negative");
	}
}

int main () {
	sint8 u8number = -9 ;
	isPositive(u8number);
	return 0;
}
