#include <stdio.h>

void main(void){
    int x1, x2;

    printf("Enter first  number : ");
    scanf("%i", &x1);
    fflush(stdout); fflush(stdin);
    printf("Enter second number : ");
    scanf("%i", &x2);

    x1 = x1 + x2;
    x2 = x1 - x2;
    x1 = x1 - x2;

    printf("\n******After Swapping******\n");
    printf("first  Number = %i\n", x1);
    printf("second Number = %i", x2);
}
