#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){
	int32_t num1, num2, num3;
	int8_t oper;

	printf("Enter the operation:(1 + 2 = 3)\n");
	scanf("%d %c %d",&num1, &oper, &num2);

	switch(oper){
        case '+':
            printf("[%i %c %i] = [%i]\n", num1, oper, num2, (num1 + num2));
            break;
        case '-':
            printf("[%i %c %i] = [%i]\n", num1, oper, num2, (num1 - num2));
            break;
        case '*':
            printf("[%i %c %i] = [%i]\n", num1, oper, num2, (num1 * num2));
            break;
        case '/':
            printf("[%i %c %i] = [%i]\n", num1, oper, num2, (num1 / num2));
            break;
        default:
            printf("Wronge Operation\n");
            break;
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
