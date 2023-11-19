///**************************************************************************************************
// Name        : ex13.c
// Author      : Salah BENDARY
// Description : Assignment 1 - Ex 13
//Write a program that reads a positive integer and checks if it is a prime.
// **************************************************************************************************/
//
//#include <stdio.h>
//
//int main () {
//    setvbuf(stdout, NULL, _IONBF, 0);
//    setvbuf(stderr, NULL, _IONBF, 0);
//    unsigned int u8number = 1; /* Number to know is prime or no*/
//    unsigned char u8isPrime = 1; /* initiate variable by TRUE*/
//    unsigned char u8counter = 0; /* inner counter loop*/
//    printf("Enter the number:\t");
////    scanf("%d",&u8number);
//    u8number = 8; /* Number to test just for debugging*/
//    /*
//     * it just looping from 2 to the half of the number
//     * if not prime number will break the loop and set flag to FALSE
//     * else will keep it as it TRUE
//     * u8counter: counter for inner loop
//     * */
//    for(u8counter=2; u8counter<(u8number/2);u8counter++) {
//    	if(u8number==1 || u8number==0) /*if number 1 or 0 will be not prime*/
//    		{u8isPrime = 0;}
//    	if(u8number%u8counter==0) {
//    		u8isPrime = 0;
//    		break;
//    	}
//    }
//    if(u8isPrime==1) { printf("is Prime!!!");} /* if flag is still TRUE will be prime*/
//    else{ printf("Not a Prime!!!");} /* if flag is set false will be not prime*/
//    return 0;
//    }
