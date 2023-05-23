#include <stdio.h>

void main(void){
    float x1, x2;

    printf("Enter first  number : ");
    scanf("%f", &x1);
    fflush(stdout); fflush(stdin);
    printf("Enter second number : ");
    scanf("%f", &x2);

    printf("Result = %0.2f", x1*x2);
}
