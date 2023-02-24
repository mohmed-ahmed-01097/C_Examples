#include <stdio.h>

void main(void){
    int x1, x2;

    printf("Enter number 1: ");
    scanf("%i", &x1);
    fflush(stdout); fflush(stdin);
    printf("Enter number 2: ");
    scanf("%i", &x2);

    printf("division = %i\n", x1/x2);
    printf("reminder = %i", x1%x2);
}
