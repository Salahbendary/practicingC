/**************************************************************************************************
 Name        : Ex20.c
 Author      : Salah BENDARY
 Description : Write a C function to count the maximum number of consecutive 1’s
in an unsigned 16 bits integer
 **************************************************************************************************/

#include <stdio.h>
#include "std_types.h"
int countOnes(uint16 u16numberOne) {
	uint16 u16countOnes = 0;
	uint16 u16maxCount=0;
	while(u16numberOne!=0) {
		if((u16numberOne) & 1) {
				u16countOnes++;}
		else { u16countOnes = 0;
		}
		if (u16countOnes > u16maxCount) {
			u16maxCount = u16countOnes;
		}
		u16numberOne = u16numberOne >> 1;
	}

	return u16maxCount;
}
int main () {
	uint16 u16numberOne =0xF3; /* 1111 0011 */
	uint16 u16result;
	u16result = countOnes(u16numberOne);
	printf("%d",u16result);
	return 0;
}
