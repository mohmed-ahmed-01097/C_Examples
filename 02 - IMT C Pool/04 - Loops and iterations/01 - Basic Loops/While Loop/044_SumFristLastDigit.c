#include <stdio.h>

void main(void){
    unsigned int last, num;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    last = num;
    while(last/10){
        last /= 10;
    }
    printf("Sum of first and last digit = %u", last + (num%10));
}
