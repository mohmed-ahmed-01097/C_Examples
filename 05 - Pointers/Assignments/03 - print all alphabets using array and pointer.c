#include <stdio.h>

typedef unsigned char  u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

#define MAX_ALPHA   26

void main(void){
    u8 alpha[MAX_ALPHA];
    u8 *pu8_alpha = alpha;

    printf("Reverse = [");
    for(int i = 0; i<MAX_ALPHA ; i++, pu8_alpha++ ){
        *pu8_alpha = i + 'A';
        printf(" %c ", alpha[i]);
    }
    printf("]\r\n");
}
