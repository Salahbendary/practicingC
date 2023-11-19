///**************************************************************************************************
// Name        : ex14.c
// Author      : Salah BENDARY
// Description : Assignment 1 - Ex 14
//Wrrite a program to display English alphabets from A to Z.
// **************************************************************************************************/
//
#include <stdio.h>

int main () {
 setvbuf(stdout, NULL, _IONBF, 0);
 setvbuf(stderr, NULL, _IONBF, 0);
 unsigned char u8counter = 0;
 for(u8counter = 'A';u8counter<='Z';u8counter++) {
 	printf("%c ",u8counter);
 }
 return 0;
 }
