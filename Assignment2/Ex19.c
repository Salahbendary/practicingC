///**************************************************************************************************
// Name        : Ex19.c
// Author      : Salah BENDARY
// Description : Write a C function that return 0 if a given number is a power of 3,
//otherwise return 1 (except 3 to the power of 0).
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"
int notPowerThree(uint16 u16numberOne) {
	uint16 notPowerThree = 1; /* not Power of Three*/
	if(u16numberOne==1) {notPowerThree =0;}
	else {
		while(u16numberOne>=3) {
				if((u16numberOne%3)==0) {
					if(u16numberOne==3) {
						notPowerThree = 0; /* Power of three*/
					}
					u16numberOne/=3; /*divide the number by 3 to mimize it till = 3 or not*/
					}
				}
	}

	return notPowerThree; /* return value of maximum XOR*/
}

int main () {
	uint16 u16numberOne =1;
	uint16 u16result;
	u16result = notPowerThree(u16numberOne);
	printf("%d",u16result);
	return 0;
}
