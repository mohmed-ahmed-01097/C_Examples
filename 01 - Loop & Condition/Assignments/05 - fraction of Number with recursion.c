#include <stdio.h>

void main(void){

    int num;
    unsigned long long frac = 1;
    printf("Enter your Number :");
    scanf("%d",&num);
    while(num){
        frac *= num;
        num--;
    }
    printf("the Fraction = %llu", frac);

}
