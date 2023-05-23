#include <stdio.h>

#define MAX_LENGTH     (sizeof(int) * 8)

void Decimal2Hex(int);

void main(void){
    int number;
    printf("Enter any Number:");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("%i in Decimal = ", number);
    Decimal2Hex(number);
    printf(" in Hex \t %#X", number);
}

void Decimal2Hex(int num){
    for(int i = (MAX_LENGTH/4) ; i-- ; ){
        int temp = (num >> i * 4) & 0xF;
        printf("%c", (temp > 9)? (temp - 10 + 'A') : temp + '0');
    }
}
