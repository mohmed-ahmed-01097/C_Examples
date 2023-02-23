#include <stdio.h>

void main(void){
	float x1, x2;

	printf("Enter first Number: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&x1);
	
	printf("Enter second Number: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&x2);
	
	printf("%0.2f * %0.2f = %0.2f",x1, x2, x1*x2);
}
