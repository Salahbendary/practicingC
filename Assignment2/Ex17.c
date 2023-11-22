///**************************************************************************************************
// Name        : Ex17.c
// Author      : Salah BENDARY
// Description : Given two integers: L and R, Find the maximal value of A xor B where
//A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <=
//1000
//Input format: the input contains two lines first line contains L and next
//line contains R.
//Output format: The maximum value of A xor B
// **************************************************************************************************/
//
#include <stdio.h>
#include "std_types.h"
int maximumXOR(uint16 u16numberOne, uint16 u16numberTwo ) {
	uint16 maxXOR = 0; /* to store value of maximum XOR*/
	uint16 outterCounter = 0; /* counter for outter loop */
	uint16 innerCounter = 0;/* counter for inner loop */
	if((u16numberOne >= 1 && u16numberOne <= 1000) &&
			(u16numberTwo >= 1 && u16numberTwo <= 1000)) /* validate to match the Constrains */
	{
		for(outterCounter=u16numberOne;outterCounter<=u16numberTwo;outterCounter++) {
			for(innerCounter=u16numberOne;innerCounter<=u16numberTwo;innerCounter++) {
				if((outterCounter ^ innerCounter) > maxXOR) {
					maxXOR = outterCounter ^ innerCounter;
				}
			}
		}
	}

	return maxXOR; /* return value of maximum XOR*/
}
int main () {
	uint16 u16numberOne =10; /* 1111 0011 */
	uint16 u16numberTwo =15;
	uint16 u16result;
	u16result = maximumXOR(u16numberOne,u16numberTwo);
	printf("%d",u16result);
	return 0;
}
