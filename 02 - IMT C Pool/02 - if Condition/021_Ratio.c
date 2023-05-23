#include <stdio.h>

void main(void){
    float a, b, c, d;

    printf("Enter float Numbers a b c d \n");
    fflush(stdout); fflush(stdin);
    scanf("%f %f %f %f", &a, &b, &c, &d);

    if(c-d)
        printf("Result = (a+b)/(c-d) = %0.2f", (a+b)/(c-d));
    else
        printf("Result = (a+b)/(c-d) = %g", (a+b)/(c-d));
}
