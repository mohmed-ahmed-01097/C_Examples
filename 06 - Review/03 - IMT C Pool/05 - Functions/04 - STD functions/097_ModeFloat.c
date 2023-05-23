#include <stdio.h>
#include <math.h>

#define ABS(A)   (A)>0 ? (A) : -(A)

float ModeFloat(float, float);

void main(void){
    float num;
    float x;

    printf("Enter a float number : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num);

    printf("Enter a float number : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &x);

    printf("[%f]Mod[%f] = [%f]\n", num, x, ModeFloat(num, x));
}

float ModeFloat(float num, float mod){
    float ret = (int)( ABS(num / mod) );
    ret *= ABS(mod);
    ret -= ABS(num);
    return (mod > 0) ? -ret : ret;
}
