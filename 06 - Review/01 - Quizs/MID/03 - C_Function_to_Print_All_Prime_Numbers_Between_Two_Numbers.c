#include <stdio.h>
#include "LBTY_CFG.h"

#define MAXLENGTH       170
#define MAX(A,B)        ((A)>(B)?(A):(B))
#define MIN(A,B)        ((A)<(B)?(A):(B))

void PrintPrimNumbers(u16*, u16, u16);

void main(void){

    u16 u16UserStartNum, u16UserEndNum;
    u16 u16PrimArr[MAXLENGTH];

    printf("----------------------------------------------------\n");
    printf("Print the prim Numbers between two numbers max[1000]\n");
    printf("----------------------------------------------------\n");

	printf("Enter the start Number : ");
	fflush(stdout); fflush(stdin);
	scanf("%hu", &u16UserStartNum);
	printf("Enter the end Number : ");
	fflush(stdout); fflush(stdin);
	scanf("%hu", &u16UserEndNum);

	if(u16UserStartNum <= 1000 && u16UserEndNum <= 1000){
        printf("----------------------------------------------------\n");
        PrintPrimNumbers(u16PrimArr, u16UserStartNum, u16UserEndNum);
        printf("----------------------------------------------------\n");
	}else{
	    printf("\n\rError in Range !!!\n\r");
	}

}


void PrintPrimNumbers(u16* pu16Arr, u16 u16Start, u16 u16End){
    u16 u16Max = MAX(u16Start, u16End);
    u16 u16Min = MIN(u16Start, u16End);
    printf("The Prim Numbers between [%i %i]\n[", u16Min, u16Max);

    *pu16Arr = 2;
    u8 u8ArrSize = 1;

    if(u16Min<2){
        printf("%4u", *pu16Arr);
    }
    for(u16 i = 3 ; i<u16Max ; i++){
        u8 flag;
        for(u8 j = 0; j<u8ArrSize ; j++){
            if(i%pu16Arr[j]){
                flag = 1;
            }else{
                flag = 0;
                break;
            }
        }
        if(flag){
            pu16Arr[u8ArrSize] = i;
            u8ArrSize++;
            if(i>u16Min)
                printf("%4u",  i);
        }
    }
    printf("]\n\r");

}
