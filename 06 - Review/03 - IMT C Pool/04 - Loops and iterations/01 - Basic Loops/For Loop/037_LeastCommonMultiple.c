#include <stdio.h>

void main(void){
    unsigned int num1, num2;
    unsigned int gcd, lcm;

    printf("Enter two integers:\n");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num1);
    fflush(stdout); fflush(stdin);
    scanf("%u", &num2);

    for(int i = 1; i<=num1 && i<=num2 ; i++){
        if((num1%i == 0) && (num2%i == 0))
            gcd = i;
    }
    lcm = (num1*num2)/gcd;
    printf("the Least Common Multiple of (%u and %u) is [%u]", num1, num2, lcm);
}
