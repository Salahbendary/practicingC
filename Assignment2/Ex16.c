/**************************************************************************************************
 Name        : Ex15.c
 Author      : Salah BENDARY
 Description :Write a C function to count the number of 1’s in an unsigned 8-bit
integer.
 **************************************************************************************************/

#include <stdio.h>
#include "std_types.h"
int countOnes(uint8 u8numberOne) {
	uint8 u8countOnes = 0;
	while(u8numberOne!=0) {
		if((u8numberOne) & 1) { u8countOnes++;}
		u8numberOne = u8numberOne >> 1;
	}

	return u8countOnes;
}
int main () {
	uint8 u8numberOne =0xFF;
	uint8 u8result;
	u8result = countOnes(u8numberOne);
	printf("%d",u8result);
	return 0;
}
