#include <stdio.h>
#include "LBTY_CFG.h"

#define MAXLENGTH       255

void EnterElement(u16*, u8);
void PrintElements(u16*, u8);
void ReverseElements(u16*, u8);
void SwapElements(u16*, u16*);

void main(void){

    u8 u8UserArrSize;
    u16 u16Arr[MAXLENGTH];

	printf("Enter the size of array Number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &u8UserArrSize);

	if(u8UserArrSize <= MAXLENGTH){
        EnterElement(u16Arr,u8UserArrSize);

        printf("----------------------------------------------------\n");
        printf("Array   = ");
        PrintElements(u16Arr,u8UserArrSize);

        ReverseElements(u16Arr,u8UserArrSize);

        printf("Reverse = ");
        PrintElements(u16Arr,u8UserArrSize);
        printf("----------------------------------------------------\n");
	}else{
	    printf("\n\rError in Range !!!\n\r");
	}

}

void EnterElement(u16* pu16Arr, u8 u8Size){
    for(u8 i = 0; i<u8Size ; i++){
        printf("%3i : ",i);
        fflush(stdout); fflush(stdin);
        scanf("%d", pu16Arr++);
    }
}

void ReverseElements(u16* pu16arr, u8 u8Size){
    for(u8 i = 0, j = u8Size-1 ; i<j ; i++, j--){
        SwapElements(&pu16arr[i], &pu16arr[j]);
    }
}

void SwapElements(u16* a, u16* b){
    u16 temp = *a;
    *a = *b;
    *b = temp;
}

void PrintElements(u16* pu16Arr, u8 u8Size){
    printf("[");
    for(u8 i = 0; i<u8Size ; i++){
        printf(" %3i ", *pu16Arr++);
    }
    printf("]\n\r");
}
