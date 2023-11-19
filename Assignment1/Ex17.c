/**************************************************************************************************
 Name        : ex17.c
 Author      : Salah BENDARY
 Description : Assignment 1 - Ex 17
Write a program to count number of digits in a decimal number
 **************************************************************************************************/

#include <stdio.h>

int main () {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    unsigned char u8count;
    unsigned int u32number=1;
    printf("Enter the number:");
    scanf("%d",&u32number);
    printf("The Number is: %d",u32number);
    while(u32number!=0) {
    	u8count++;
    	u32number/=10;
    }
    printf(" And its digits = %d",u8count);
    return 0;
    }
