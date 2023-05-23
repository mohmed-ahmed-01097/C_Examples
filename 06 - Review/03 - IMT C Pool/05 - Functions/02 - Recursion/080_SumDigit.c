#include <stdio.h>

int sum_digit(int);

void main(void){
    unsigned int num;

    printf("Enter any number to find sum of digits : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    printf("sum of digit of %i = %i", num, sum_digit(num));

}

int sum_digit(int num){
    if(num){
        return sum_digit(num/10) + (num % 10);
    }
    return 0;
}
