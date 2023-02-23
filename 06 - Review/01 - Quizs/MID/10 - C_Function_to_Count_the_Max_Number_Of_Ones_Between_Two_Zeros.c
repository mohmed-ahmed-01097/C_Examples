#include <stdio.h>
#include "LBTY_CFG.h"

#define MAX_LENGTH      9
#define MAX_SHIFT       31
#define MAX(A,B)        ((A)>(B)?(A):(B))

u8 u8MaxCountOnes(u32);

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
        printf("The Max count of ones between two zeros : %u\n", u8MaxCountOnes(u32UserNum));
        printf("----------------------------------------------------\n");
	}

}

u8 u8MaxCountOnes(u32 u32Num){
    u8 ret = 0, count = 0;
    while(u32Num){
        if(u32Num & 1){
            count++;
        }else{
            ret = MAX(ret, count);
            count = 0;
        }
        u32Num >>= 1;
    }
    return MAX(ret, count);;
}

