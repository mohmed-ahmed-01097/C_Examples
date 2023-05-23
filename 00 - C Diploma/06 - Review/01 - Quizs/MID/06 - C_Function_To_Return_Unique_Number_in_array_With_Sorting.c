#include <stdio.h>
#include "LBTY_CFG.h"

#define MAXLENGTH       255

void EnterElement(u16*, u8);
void SortArray(u16*, u8);
void SwapElements(u16*, u16*);
void PrintUniqueNumbers(u16*, u8);

void main(void){

    u8 u8UserArrSize;
    u16 u16Arr[MAXLENGTH];

	printf("Enter the size of array Number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &u8UserArrSize);

	if(u8UserArrSize <= MAXLENGTH){
        printf("----------------------------------------------------\n");
        EnterElement(u16Arr,u8UserArrSize);
        PrintUniqueNumbers(u16Arr,u8UserArrSize);
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
void PrintUniqueNumbers(u16* pu16Arr, u8 u8Size){
    SortArray(pu16Arr, u8Size);
    printf("The Unique Numbers :\n[");

    for(u16 i = u8Size ; i-- ; pu16Arr++){
        if(*pu16Arr == *(pu16Arr+1) || *pu16Arr == *(pu16Arr-1))
            continue;
        else
            printf(" %d ", *pu16Arr);
    }
    printf("]\n\r");

}

void SortArray (u16* pu16Arr, u8 u8Size){
    for(u8 i = 0 ; i<u8Size-1 ; i++){
        for(u8 j = i+1 ; j<u8Size ; j++){
            if(pu16Arr[i]<pu16Arr[j])
                SwapElements(&pu16Arr[i], &pu16Arr[j]);
        }
    }
}

void SwapElements(u16* a, u16* b){
    u16 temp = *a;
    *a = *b;
    *b = temp;
}
