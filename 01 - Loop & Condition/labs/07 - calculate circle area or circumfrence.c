#include <stdio.h>
#include <conio.h>

#define PI 3.1416f

void main(void){
    float rediase, ret;
    char ch;

    printf("Enter the rediase: ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &rediase);

    printf("(A)rea, (C)ircumfrence");
    switch(getche()){
        case 'a':
        case 'A':
            ret = PI * rediase * rediase;
            printf("\nthe Area = %0.2f", ret);
            break;
        case 'c':
        case 'C':
            ret = 2 * PI * rediase;
            printf("\nthe Circumference = %0.2f", ret);
            break;
        default:
            printf("\nWrong character...");
    }

}
