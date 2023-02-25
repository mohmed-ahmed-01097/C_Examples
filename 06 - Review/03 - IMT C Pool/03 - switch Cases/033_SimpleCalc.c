#include <stdio.h>

void main(void){
    float a, b;
    char ch;

    printf("Enter the calculation form (a + b)\n");
    fflush(stdout); fflush(stdin);
    scanf("%f %c %f", &a, &ch, &b);

    switch(ch){
        case '+':
            printf("a + b = %0.2f + %0.2f = %0.2f", a, b, a+b);
            break;
        case '-':
            printf("a - b = %0.2f - %0.2f = %0.2f", a, b, a-b);
            break;

        case '*':
            printf("a * b = %0.2f * %0.2f = %0.2f", a, b, a*b);
            break;

        case '/':
            printf("a / b = %0.2f / %0.2f = %0.2g", a, b, a/b);
            break;
        default:
            printf("Wrong Operator");
    }

}
