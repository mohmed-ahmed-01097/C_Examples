#include <stdio.h>

long long int factorial(int);

void main(void){
    int number;

    printf("Enter a positive integer :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("Factorial of %i = %lli\n", number, factorial(number));
}

long long int factorial(int num){
    if(num){
        return num * factorial(num - 1);
    }
    return 1;
}
