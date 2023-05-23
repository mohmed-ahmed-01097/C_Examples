#include <stdio.h>

#define PI  3.1416f

float Circumference(float);
float Area(float);

void main(void){
    float rad;

    printf("Enter any number: ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &rad);

    printf("Diameter           = %0.2f\n", rad * 2);
    printf("Circumference      = %0.2f\n", Circumference(rad));
    printf("Area of the circle = %0.2f\n", Area(rad));
}

float Circumference(float rad){
    return 2.0 * PI * rad;
}
float Area(float rad){
    return PI * rad * rad;
}
