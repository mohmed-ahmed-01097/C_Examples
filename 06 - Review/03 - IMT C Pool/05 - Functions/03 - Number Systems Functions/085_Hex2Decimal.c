#include <stdio.h>

#define MAX_LENGTH     8

void main(void){
    int number;
    printf("Enter Hex Number (MAX 8 digit):");
    fflush(stdout); fflush(stdin);
    scanf("%x", &number);

    printf("%#X in Hex = %i in Decimal", number, number);
}
