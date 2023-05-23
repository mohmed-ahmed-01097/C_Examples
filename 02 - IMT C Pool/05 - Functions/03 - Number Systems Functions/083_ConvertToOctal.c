#include <stdio.h>

#define MAX_LENGTH     (sizeof(int) * 8)

void Decimal2Octal(int);

void main(void){
    int number;
    printf("Enter any Number:");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("%i in Decimal = ", number);
    Decimal2Octal(number);
    printf(" in Octal \t %#o", number);
}

void Decimal2Octal(int num){
    for(int i = (MAX_LENGTH-2)/3 ; i-- ; ){
        printf("%i", (num >> i * 3) & 0x7);
    }
}
