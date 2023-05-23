#include <stdio.h>

#define MAX_LENGTH     9

int Octal2Decimal(int);

void main(void){
    int number;
    printf("Enter Octal Number (MAX 9 digit):");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("%i in Octal = %i in Decimal", number, Octal2Decimal(number));
}

int Octal2Decimal(int num){
    int ret = 0;
    for(int i = MAX_LENGTH ; i-- ; num /= 10){
        ret |= (num % 10) << i*3;
    }
    return ret;
}
