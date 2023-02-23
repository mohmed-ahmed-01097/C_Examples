#include <stdio.h>
#include "LBTY_CFG.h"

#define MAXLENGTH       256

void ReverseElements(u8*);
void ReverseWord(u8*, u8);
void PrintWord(u8*, u8);
void SwapElements(u8*, u8*);

void main(void){

    u8 u8UserArrSize;
    u8 u8Arr[MAXLENGTH];

	printf("Enter the your string  MAX [255 letter]: \n\r");
	fflush(stdout); fflush(stdin);
	gets(u8Arr);

    printf("----------------------------------------------------\n");
    printf("String  = ");
    printf("[%s]\n",u8Arr);

    ReverseElements(u8Arr);

    printf("Reverse = ");
    printf("[%s]\n",u8Arr);
    printf("----------------------------------------------------\n");
}

void ReverseElements(u8* pu8Arr){
    u8 flag  = 1;
    while(flag){
        for(int i = 0; ; i++){
            if(pu8Arr[i] == ' ' || !pu8Arr[i]){
                ReverseWord(pu8Arr, i);
                if(!pu8Arr[i])  flag = 0;
                pu8Arr += i+1;
                break;
            }
        }
    }
}

void ReverseWord(u8* pu8Arr, u8 u8Size){
    for(u8 i = 0, j = u8Size-1 ; i<j ; i++, j--){
        SwapElements(&pu8Arr[i], &pu8Arr[j]);
    }
}

void SwapElements(u8* a, u8* b){
    u16 temp = *a;
    *a = *b;
    *b = temp;
}
