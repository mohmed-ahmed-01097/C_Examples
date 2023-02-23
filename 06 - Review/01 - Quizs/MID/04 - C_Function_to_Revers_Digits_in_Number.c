#include <stdio.h>
#include "LBTY_CFG.h"

#define MAX_LENGTH      9

u32 u32ReverseDigits(u32);

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
        printf("The reverse of the digits : %lu\n", u32ReverseDigits(u32UserNum));
        printf("----------------------------------------------------\n");
	}

}

u32 u32ReverseDigits(u32 u32Num){
    u32 ret = 0;
    for(u8 i = MAX_LENGTH ; i-- ; (u32Num /= 10)){
        ret *= 10;
        ret += u32Num%10;
    }
    return ret;
}

