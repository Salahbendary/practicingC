///**************************************************************************************************
// Name        : Ex13.c
// Author      : Salah BENDARY
// Description : In this challenge write a function to add two floating numbers.
//Determine the integer floor of the sum. The floor is the truncated float
//value, anything after the decimal point is dropped. For instance
//floor(1.1+3.05)=floor(4.15)=4
// **************************************************************************************************/
#include <stdio.h>
#include "std_types.h"
int addFloat(float numberOne,float numbertwo) {
	float result = 0;
	result = numberOne+numbertwo;
	return (int)result;
}
int main () {
	float numberOne = 1.1;
	float numbertwo = 3.05;
	int result;
	result = addFloat(numberOne,numbertwo);
	printf("%d",result);
	return 0;
}
