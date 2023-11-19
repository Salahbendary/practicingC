///**************************************************************************************************
// Name        : Ex2.c
// Author      : Salah BENDARY
// Description : Write a C Function that takes one character and checks
// if it alphabet
//or not
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"

void isAlphabet(uint8 u8char) {
	if((u8char >= 'A') && (u8char <= 'z')) {
		printf("is alphabet");
	}
	else {printf("not a alphabet"); }
}

int main () {
	uint8 u8char = 'B';
	isAlphabet(u8char);
	return 0;
}
