#include <stdio.h>

void main(void){
    unsigned int sum = 0, num;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    while(num){
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of first and last digit = %u", sum);
}
