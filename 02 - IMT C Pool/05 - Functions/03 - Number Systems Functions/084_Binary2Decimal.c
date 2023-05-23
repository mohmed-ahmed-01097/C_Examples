#include <stdio.h>

#define MAX_LENGTH     10

int Binary2Decimal(int);

void main(void){
    int number;
    printf("Enter Binary Number (MAX 10 digit):");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("%i in Binary = %i in Decimal", number, Binary2Decimal(number));
}

int Binary2Decimal(int num){
    int ret = 0;
    for(int i = MAX_LENGTH ; i-- ; num /= 10){
        ret |= (num % 10) << i;
    }
    return ret;
}
