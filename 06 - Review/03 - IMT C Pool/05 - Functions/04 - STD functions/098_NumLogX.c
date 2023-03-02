#include <stdio.h>

float log(float, int);

void main(void){
    float num;
    int x;

    printf("Enter a float number : \n");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num);

    printf("Enter a float number : \n");
    fflush(stdout); fflush(stdin);
    scanf("%i", &x);

    printf("[%f]Log[%i] = [%f]\n", num, x, log(num, x));

}

float log(float num, int x){
    return 0.0f;
}
