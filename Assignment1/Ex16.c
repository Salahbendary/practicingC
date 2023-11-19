///**************************************************************************************************
// Name        : ex16.c
// Author      : Salah BENDARY
// Description : Assignment 1 - Ex 16
// Write a program to reverse a number.
// **************************************************************************************************/
//
#include <stdio.h>

int main () {
 setvbuf(stdout, NULL, _IONBF, 0);
 setvbuf(stderr, NULL, _IONBF, 0);
 unsigned int u32reversedNumber = 0;
 unsigned int u32reminder =0;
 unsigned int u32number=1;
 printf("Enter the number:");
 scanf("%d",&u32number);
 printf("The Reversed Number is: %d",u32number);
 while(u32number!=0) {
 	u32reminder = u32number%10;
 	u32reversedNumber = u32reversedNumber * 10 + u32reminder;
 	u32number/=10;
 }
 printf(" After reversed is: %d",u32reversedNumber);
 return 0;
 }
