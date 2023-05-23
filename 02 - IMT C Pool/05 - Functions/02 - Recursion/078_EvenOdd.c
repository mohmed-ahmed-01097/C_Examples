#include <stdio.h>

void EvenOdd(int, int, int);

void main(void){
    int type, lower, upper;

    printf("Print Even(0), Odd(1) :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &type);
    printf("Enter lower limit :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &lower);
    printf("Enter upper limit :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &upper);

    printf("%s numbers from %i to %i are :\n",(type%2)?"Odd":"Even", lower, upper);
    EvenOdd(type, lower, upper);
}

void EvenOdd(int type, int lower, int upper){
    if(lower<upper){
        EvenOdd(type, lower, upper-1);
    }
    if(upper%2 == type%2)
        printf("%i, ", upper);
}
