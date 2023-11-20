///**************************************************************************************************
// Name        : Ex11.c
// Author      : Salah BENDARY
// Description :
//Write a C function that returns 1 if the input number is a power of 2
//and return 0 if the input number is not power of 2.
//For example: 1, 2 and 16 are power of 2.
//0, 10 and 30 are not power of 2
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"

int isPowertwo(uint16 u16firstNumb) {
	uint8 u8isPowerOfTwo = 0;
	while(u16firstNumb>=2) {
		u16firstNumb = u16firstNumb >> 1;
		if(u16firstNumb==2) { u8isPowerOfTwo = 1;}
	}
	return u8isPowerOfTwo;
}
int main () {
	uint16 u16NumberOne = 1023;
	uint8 u8result;
	u8result = isPowertwo(u16NumberOne);
	printf("%d",u8result);
	return 0;
}
