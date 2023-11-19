///**************************************************************************************************
// Name        : Ex5.c
// Author      : Salah BENDARY
// Description : Write C Function that converts the any letter from lowercase to
//uppercase.
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"

int capitaliseLetter(uint8 u8char) {
	return u8char-=32;
}

int main () {
	uint8 u8char = 'b';
	uint8 u8result;
	u8result = capitaliseLetter(u8char);
	printf("The Capitalise Letter is %c",u8result);
	return 0;
}
