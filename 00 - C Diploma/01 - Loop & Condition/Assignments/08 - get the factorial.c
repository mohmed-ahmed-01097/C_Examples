#include <stdio.h>

void main(void){
    int num;
    unsigned long long int result = 1;

    printf("Enter the Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    while(num){
        result *= num;
        num--;
    }
    printf("The factorial = %llu", result);
}
