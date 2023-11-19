///**************************************************************************************************
// Name        : Ex1.c
// Author      : Salah BENDARY
// Description : Assignment 2 - Ex 1 - Write a C Function that prints the cube of any number
// **************************************************************************************************/

#include <stdio.h>
#include "std_types.h"

void printCube(uint8 u8Number) {
	printf("Cube of number %d = ",u8Number);
	u8Number = u8Number*u8Number*u8Number;
	printf(" %d",u8Number);
}

int main () {
	uint8 u8Number = 3;
	printCube(u8Number);
	return 0;
}
