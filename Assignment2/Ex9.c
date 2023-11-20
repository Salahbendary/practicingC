///**************************************************************************************************
// Name        : Ex9.c
// Author      : Salah BENDARY
// Description : Write a C Function that swaps the value of two integer numbers
// **************************************************************************************************/

#include <stdio.h>
#include "std_types.h"

void swapNumbers(uint8 u8firstNumb, uint8 u8secondNumb) {
	uint8 u8tempVar = 0;
	u8tempVar = u8firstNumb;
	u8firstNumb = u8secondNumb;
	u8secondNumb = u8tempVar;
	printf("Swapped Numbers is: %d %d",u8firstNumb,u8secondNumb);
}
int main () {
	uint8 u8NumberOne = 1;
	uint8 u8NumberTwo = 100;
	swapNumbers(u8NumberOne,u8NumberTwo);
	return 0;
}
