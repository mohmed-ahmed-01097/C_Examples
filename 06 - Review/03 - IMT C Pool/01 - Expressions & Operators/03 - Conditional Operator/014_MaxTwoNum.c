#include <stdio.h>

#define MAX(a, b)   ((a)>(b)?(a):(b))

void main(void){
    int x1, x2;

    printf("Enter first  number : ");
    scanf("%i", &x1);
    fflush(stdout); fflush(stdin);
    printf("Enter second number : ");
    scanf("%i", &x2);

    printf("Maximum between %i and %i is %i\n", x1, x2, MAX(x1,x2));
}
