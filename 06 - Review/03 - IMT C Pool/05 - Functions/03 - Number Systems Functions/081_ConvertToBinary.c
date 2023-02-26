#include <stdio.h>

#define MAX_LENGTH     (sizeof(int) * 8)

void Decimal2Binary(int);

void main(void){
    int number;
    printf("Enter any Number:");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("%i in Decimal = ", number);
    Decimal2Binary(number);
    printf(" in Binary");
}

void Decimal2Binary(int num){
    for(int i = MAX_LENGTH ; i-- ; ){
        printf("%i", (num & (1<<i))? 1 : 0);
    }
}
