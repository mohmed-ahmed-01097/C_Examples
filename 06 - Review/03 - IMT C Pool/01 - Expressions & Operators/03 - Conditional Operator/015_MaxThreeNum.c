#include <stdio.h>

#define MAX(a, b, c)   ((a)>(b) && (a)>(b)?(a):(b)>(c)?(b):(c))

void main(void){
    int x1, x2, x3;

    printf("Enter first  number : ");
    scanf("%i", &x1);
    fflush(stdout); fflush(stdin);
    printf("Enter second number : ");
    scanf("%i", &x2);
    fflush(stdout); fflush(stdin);
    printf("Enter Third  number : ");
    scanf("%i", &x3);

    printf("Maximun between %i %i and %i is %i\n", x1, x2, x3, MAX(x1,x2,x3));
}
