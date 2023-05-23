#include <stdio.h>

void main(void){
    unsigned int num;
    unsigned int next = 0, term0 = 0, term1 = 1;

    printf("Enter value of n : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    printf("Fibonacci sequence:");
    for(int i = 0; i<num ; i++){
        printf("%5u,", term0);
        next  = term0 + term1;
        term0 = term1;
        term1 = next;
    }
}
