#include <stdio.h>

void main(void){
    float x1, x2;

    printf("Enter first Number: ");
    scanf("%f",&x1);
	fflush(stdout); fflush(stdin);

    printf("Enter second Number: ");
    scanf("%f",&x2);
	fflush(stdout); fflush(stdin);

    printf("%0.2f * %0.2f = %0.2f",x1, x2, x1*x2);
}
