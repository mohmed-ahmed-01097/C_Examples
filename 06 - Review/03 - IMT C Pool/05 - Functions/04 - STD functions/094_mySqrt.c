#include <stdio.h>

float mySqrt(float);

void main(void){
    float number;
    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%f", &number);

    printf("sqrt(%f) = %f", number, mySqrt(number));
}

float mySqrt(float num){
    float error = 0.000005;
    float sqr = num;
    while((sqr - num / sqr) > error){
        sqr = (sqr + num / sqr) / 2;
    }
    return sqr;
}
