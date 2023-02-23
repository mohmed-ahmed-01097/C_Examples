#include <stdio.h>

void main(void){
	int num1, num2;

	printf("Enter a first integer number: ");
	scanf("%i",&num1);
	fflush(stdout); fflush(stdin);

	printf("Enter a first integer number: ");
	scanf("%i", &num2);
	fflush(stdout); fflush(stdin);

	printf("the sum of two numbers : %i + %i = %i\n", num1, num2, num1+num2);
}


