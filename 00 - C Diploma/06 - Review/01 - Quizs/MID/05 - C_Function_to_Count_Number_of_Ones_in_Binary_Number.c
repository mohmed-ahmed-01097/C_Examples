#include <stdio.h>
#include "LBTY_CFG.h"

#define MAX_LENGTH      9

u8 u32CountOnes(u32);

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
        printf("The count of ones in the Number : %u\n", u32CountOnes(u32UserNum));
        printf("----------------------------------------------------\n");
	}

}

u8 u32CountOnes(u32 u32Num){
    u8 ret = 0;
    while(u32Num){
        ret += u32Num & 1;
        u32Num >>= 1;
    }
    return ret;
}

