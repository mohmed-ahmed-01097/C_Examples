#include <stdio.h>
#include "LBTY_CFG.h"

#define MAX_LENGTH      9

u16 u16SumDigits(u32);

void main(void){

    u32 u32UserNum;
	printf("Enter your Decimal number max %i digits : ", MAX_LENGTH);
	fflush(stdout); fflush(stdin);
	scanf("%lu", &u32UserNum);

	if(u32UserNum > 999999999){
        printf("----------------------------------------------------\n");
        printf("The number digits larger than max !!!!!\n");
        printf("----------------------------------------------------\n");
	}else{
        printf("----------------------------------------------------\n");
        printf("The sum of the digits : %u\n", u16SumDigits(u32UserNum));
        printf("----------------------------------------------------\n");
	}

}

u16 u16SumDigits(u32 u32Num){
    u16 ret = 0;
    for(u8 i = MAX_LENGTH ; i-- ; (u32Num /= 10)){
        ret += u32Num%10;
    }
    return ret;
}

