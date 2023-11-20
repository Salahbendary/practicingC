///**************************************************************************************************
// Name        : Ex12.c
// Author      : Salah BENDARY
// Description : Write a C function that calculates the required heater activation time
//according to the input temperature of water.
//- if input temperature is from 0 to 30, then required heating time = 7
//mins.
//- if input temperature is from 30 to 60, then required heating time = 5
//mins.
//- if input temperature is from 60 to 90, then required heating time = 3
//mins.
//- if input temperature is more than 90, then required heating time = 1
//mins.
//- if temperature is invalid (more than 100), return 0
//Example:
//Input = 10 → output = 7
//Input = 35 → output = 5
// **************************************************************************************************/
#include <stdio.h>
#include "std_types.h"
int heaterTime(uint16 u8temp) {
	uint8 u8heaterTime = 0;
	if((u8temp>=0) && (u8temp<=30)) { u8heaterTime = 7;}
	else if((u8temp>=30) && (u8temp<=60)) { u8heaterTime = 5;}
	else if((u8temp>=60) && (u8temp<=90)) { u8heaterTime = 3;}
	else if((u8temp>=90) && (u8temp<=100)) { u8heaterTime = 1;}
	else { u8heaterTime = 0;}
	return u8heaterTime;
}
int main () {
	uint16 u16temperature = 85;
	uint8 u8result;
	u8result = heaterTime(u8temperature);
	printf("%d",u8result);
	return 0;
}
