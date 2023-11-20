///**************************************************************************************************
// Name        : Ex15.c
// Author      : Salah BENDARY
// Description : Write a C function to count the number of 1’s in an unsigned 32-bit
//integer.
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"
int countOnes(uint32 u32numberOne) {
	uint32 u32countOnes = 0;
	while(u32numberOne!=0) {
		if((u32numberOne) & 1) { u32countOnes++;}
		u32numberOne = u32numberOne >> 1;
	}

	return u32countOnes;
}
int main () {
	uint32 u32numberOne =0xEF;
	uint32 u32result;
	u32result = countOnes(u32numberOne);
	printf("%ld",u32result);
	return 0;
}
