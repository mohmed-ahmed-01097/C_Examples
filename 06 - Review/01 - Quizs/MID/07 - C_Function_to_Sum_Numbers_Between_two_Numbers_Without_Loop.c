#include <stdio.h>
#include "LBTY_CFG.h"

u32 SumElement(u16, u16);

void main(void){

    u16 u16UserStartNum, u16UserEndNum;
    u32 u32SumNum;

    printf("----------------------------------------------------\n");
    printf("Print the Sum of Numbers between two numbers max[1000]\n");
    printf("----------------------------------------------------\n");

	printf("Enter the start Number : ");
	fflush(stdout); fflush(stdin);
	scanf("%hu", &u16UserStartNum);
	printf("Enter the end Number : ");
	fflush(stdout); fflush(stdin);
	scanf("%hu", &u16UserEndNum);

	if(u16UserEndNum <= 1000){
        printf("----------------------------------------------------\n");
        printf("The Sum = %lu\n", SumElement(u16UserStartNum, u16UserEndNum));
        printf("----------------------------------------------------\n");
	}else{
	    printf("\n\rError out of Range !!!\n\r");
	}

}

u32 SumElement(u16 u16Start, u16 u16End){
    if(u16Start == u16End){
        return u16Start;
    }else{
        return u16Start + SumElement(u16Start + 1, u16End);
    }

}
