#include <stdio.h>

typedef unsigned char  u8;
typedef unsigned short int u16;
typedef unsigned long int u32;


void main(void){
    u8 arr[] = {50, 60, 70, 80, 90, 00, 10, 20, 30, 40};
    u8 *pu8_arr = arr;
    u8 size = sizeof(arr)/sizeof(u8);
    /** get the pointer of the last element **/
    //pu8_arr += size;
    pu8_arr += size-1;

    printf("ARRAY   = [");
    for(int i = 0; i<size ; i++){
        printf(" %3u ", arr[i]);
    }
    printf("]\r\n");

    printf("Reverse = [");
    for(int i = size ; i-- ; ){
        printf(" %3u ", *pu8_arr--);
    }
    printf("]\r\n");
}
