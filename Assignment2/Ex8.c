///**************************************************************************************************
// Name        : Ex8.c
// Author      : Salah BENDARY
// Description : Write a C Function that display Prime Numbers between Intervals (two
//numbers) by Making Function.
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"

void displayPrime(uint8 u8firstInterval, uint8 u8secondInterval) {
	uint8 u8counter;
	uint8 u8innercounter = 2;
	uint8 isPrime;
	for(u8counter=u8firstInterval;u8counter<=u8secondInterval;u8counter++){
		if(u8counter <=1) { continue;}
		isPrime = 1;
		for(u8innercounter=2;u8innercounter<=(u8counter/2);u8innercounter++) {
			if(u8counter%u8innercounter==0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d \t", u8counter);
		}
	}
}
int main () {
	uint8 u8NumberOne = 1;
	uint8 u8NumberTwo = 100;
	displayPrime(u8NumberOne,u8NumberTwo);

	return 0;
}
