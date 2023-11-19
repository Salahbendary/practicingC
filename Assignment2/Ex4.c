///**************************************************************************************************
// Name        : Ex4.c
// Author      : Salah BENDARY
// Description : Write a C Function that return the addition or subtraction or
//multiplication or division for two numbers. The function should take the
//required operation and two numbers as arguments. It also should check
//that the input operation is one of those operation that mentioned before
//and if not it should return error. The function should be implemented
//using switch case.
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"

int calcOperation(uint8 u8numberOne, uint8 u8numberTwo,uint8 Operation) {
	switch(Operation)
	{
	case '+': return u8numberOne+u8numberTwo;
	case '-': return u8numberOne-u8numberTwo;
	case '/': return u8numberOne/u8numberTwo;
	case '*': return u8numberOne*u8numberTwo;
	}
	return 0;
}

int main () {
	uint8 u8numberOne = 10;
	uint8 u8numberTwo = 10;
	uint8 Operation = '+';
	uint8 result = 0;
	result = calcOperation(u8numberOne,u8numberTwo,Operation);
	printf("The result is %d", result);
	return 0;
}
