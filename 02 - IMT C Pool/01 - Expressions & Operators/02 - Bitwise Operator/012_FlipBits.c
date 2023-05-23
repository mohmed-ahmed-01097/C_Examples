#include <stdio.h>

void main(void){
    int num;

    printf("Enter any number : ");
    scanf("%i", &num);
    fflush(stdout); fflush(stdin);

    printf("Number after flipping bits: %i", num ^ ~0);
}
