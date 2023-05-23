#include <stdio.h>

float power(float, int);

void main(void){
    float base;
    int exp;

    printf("Enter base :");
    fflush(stdout); fflush(stdin);
    scanf("%f", &base);
    printf("Enter exponent :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &exp);

    printf("[%f]^(%i) = %f\n", base, exp, power(base, exp));
}

float power(float base, int exp){
    if(exp){
        if(exp>0)
            return base * power(base, exp-1);
        else if(exp)
            return 1 / power(base, -exp);
    }
    return 1;
}
