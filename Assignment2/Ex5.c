///**************************************************************************************************
// Name        : Ex5.c
// Author      : Salah BENDARY
// Description : Write a C function to check if the input is an even number or an odd
//number, if even number return 0 if odd number return 1.
//Example:
//Input 7, Output = 1 (Odd)
//Input 6, Output = 0 (Even)
//using switch case.
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"

int isOdd(uint8 u8numberOne) {
	if(u8numberOne&0x01) {
		return 1;
	}
	else { return 0; }
}

int main () {
	uint8 u8numberOne = 7;
	uint8 u8result;
	u8result = isOdd(u8numberOne);
	if(1==u8result) { printf("Output = %d (Odd)",  u8result); }
	else {   		  printf("Output = %d (Even)", u8result); }
	return 0;
}
