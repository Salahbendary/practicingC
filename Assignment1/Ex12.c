///**************************************************************************************************
// Name        : ex12.c
// Author      : Salah BENDARY
// Description : Assignment 1 - Ex 12
//Write a program that reads a positive integer and computes the factorial.
// **************************************************************************************************/
//
#include <stdio.h>

int main () {
setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);
unsigned int u8number = 1; /* Number to get its factorial*/
unsigned int u8factorial = 1; /* Number to store the result*/
printf("Enter the number:\t");
scanf("%d",&u8number);

printf("Factorial of %d is:", u8number);  // Display the original number

while(u8number != 0) {
    u8factorial *= u8number;
    u8number--;
}

printf("%d\n",u8factorial);
return 0;
}

