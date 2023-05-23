#include <stdio.h>
#include <string.h>
#include "LBTY_CFG.h"

#define MAXLENGTH       256

void main(void){

    u8 u8Arr[MAXLENGTH];
    u8 u8ReverseArr[MAXLENGTH];

	printf("Enter the your string  MAX [255 letter]: \n\r");
	fflush(stdout); fflush(stdin);
	gets(u8Arr);

	u8 u8length = 1;
	u8* pu8Arr = (u8Arr + strlen(u8Arr) - 1);
	u8* pu8RevArr = u8ReverseArr;

	while(pu8Arr != u8Arr){
        if(*pu8Arr == ' '){
            for(int i = 1 ; i<u8length ; i++){
                *pu8RevArr++ = pu8Arr[i];
            }
            *pu8RevArr++ = ' ';
            u8length = 1;
        }else{

            u8length++;
        }
        pu8Arr--;
	}
    for(int i = 0 ; i<u8length ; i++){
        *pu8RevArr++ = pu8Arr[i];
    }
	*pu8RevArr = 0;

    printf("----------------------------------------------------\n");
    printf("String  = ");
    printf("[%s]\n",u8Arr);
    printf("Reverse = ");
    printf("[%s]\n",u8ReverseArr);
    printf("----------------------------------------------------\n");
}
