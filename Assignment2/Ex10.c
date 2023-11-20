///**************************************************************************************************
// Name        : Ex10.c
// Author      : Salah BENDARY
// Description :
//• 1, 2, 3, 5 and 7 = 0 holes.
//• 0, 4, 6, and 9 = 1 hole.
//• 8 = 2 holes.
//Given a number, you must determine the sum of the number of holes for
//all of its digits. For example, the number 819 has 3 holes
//Complete the function countHoles. The function must return an integer
//denoting the total number of holes in num.
// **************************************************************************************************/
//
//#include <stdio.h>
//#include "std_types.h"
//
//int countHoles(uint16 u8firstNumb) {
//	uint8 u8oneDigit;
//	uint8 u8countHoles = 0;
//	while(u8firstNumb!=0) {
//		u8oneDigit = u8firstNumb%10;
//		if (u8oneDigit == 8) {u8countHoles+=2;}
//		else if((u8oneDigit == 0) || (u8oneDigit == 4) ||
//				(u8oneDigit == 6) ||(u8oneDigit == 9)) {
//			u8countHoles++;
//		}
//		u8firstNumb/=10;
//	}
//	return u8countHoles;
//}
//int main () {
//	uint16 u8NumberOne = 819;
//	uint8 u8result;
//	u8result = countHoles(u8NumberOne);
//	printf("Count of Holes = %d",u8result);
//	return 0;
//}
