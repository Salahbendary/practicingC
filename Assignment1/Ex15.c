///**************************************************************************************************
// Name        : ex15.c
// Author      : Salah BENDARY
// Description : Assignment 1 - Ex 15
// Write a program to calculate the power of a number.
// The number and its power are input from user
// **************************************************************************************************/
//
#include <stdio.h>

int main () {
setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);
unsigned int u16number;
unsigned int u16powerOfNumber;
unsigned int u32result =1;
printf("Enter the number and its power:");
scanf("%d %d",&u16number,&u16powerOfNumber);
printf("%d ^ %d =",u16number,u16powerOfNumber);
while(u16powerOfNumber!=0) {
	u32result*=u16number;
	u16powerOfNumber--;
}
printf(" %d",u32result);
return 0;
}
