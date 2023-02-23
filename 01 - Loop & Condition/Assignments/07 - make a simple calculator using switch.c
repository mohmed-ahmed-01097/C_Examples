#include <stdio.h>

void main (void){

    float x1, x2;
    char op;
    printf("Enter the equation: a + b :\t");
    scanf("%f %c %f", &x1, &op, &x2);

    switch(op){
        case '+':
            printf("%0.2f %c %0.2f = %0.2f", x1, op, x2, x1+x2);
            break;
        case '-':
            printf("%0.2f %c %0.2f = %0.2f", x1, op, x2, x1-x2);
            break;
        case '*':
            printf("%0.2f %c %0.2f = %0.2f", x1, op, x2, x1*x2);
            break;
        case '/':
            printf("%0.2f %c %0.2f = %0.2f", x1, op, x2, x1/x2);
            break;
        default:
            printf("Wrong operator");
    }
}
