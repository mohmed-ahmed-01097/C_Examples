#include <stdio.h>

void main(void){
    int x1, x2;

    printf("Enter two numbers to find maximum: ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &x1);
    fflush(stdout); fflush(stdin);
    scanf("%i", &x2);

    switch(x1>x2){
        case 0:
            printf("%i is maximum", x2);
            break;
        case 1:
            printf("%i is maximum", x1);
            break;
        default:
            break;
    }

}
