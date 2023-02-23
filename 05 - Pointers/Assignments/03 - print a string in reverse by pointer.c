#include <stdio.h>

typedef unsigned char  u8;
typedef unsigned short int u16;
typedef unsigned long int u32;


void main(void){
    u8 str[] = "Mohamed Ahmed Abdellah";
    u8 *pu8_str = str;
    u8 size = sizeof(str)/sizeof(u8);
    /** get the pointer of the last element **/
    //pu8_str += size;
    pu8_str += size-2;

    printf("String  = [%s]\r\n", str);
    printf("Reverse = [");
    for(int i = size-1 ; i-- ; ){
        printf("%c", *pu8_str--);
    }
    printf("]\r\n");
}
