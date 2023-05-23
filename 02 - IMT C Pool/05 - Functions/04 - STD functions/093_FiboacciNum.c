#include <stdio.h>

int fiboacci(int);

void main(void){
    unsigned int num;

    printf("Enter any number to find nth fiboacci term : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    printf("%i Fibonacci term is %i", num, fiboacci(num));

}
int fiboacci(int num){
    unsigned int next = 0, term0 = 0, term1 = 1;

    for(int i = 0; i<num ; i++){
        next  = term0 + term1;
        term0 = term1;
        term1 = next;
    }
    return term0;
}
