#include <stdio.h>

void main(void){
	int num1, num2;

	printf("Enter a first integer number: ");
	fflush(stdout); fflush(stdin);
	scanf("%i",&num1);

	printf("Enter a first integer number: ");
	fflush(stdout); fflush(stdin);
	scanf("%i", &num2);

	printf("the sum of two numbers : %i + %i = %i\n", num1, num2, num1+num2);
}


