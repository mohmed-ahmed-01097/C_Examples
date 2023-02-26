#include <stdio.h>

void natural(int, int);

void main(void){
    int lower, upper;

    printf("Enter lower limit :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &lower);
    printf("Enter upper limit :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &upper);

    printf("All natural numbers from %i to %i are :\n", lower, upper);
    natural(lower, upper);
}

void natural(int lower, int upper){
    if(lower<upper){
        natural(lower, upper-1);
    }
    printf("%i, ", upper);
}
