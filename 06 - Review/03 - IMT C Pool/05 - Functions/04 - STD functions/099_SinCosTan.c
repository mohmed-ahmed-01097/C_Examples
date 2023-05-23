#include <stdio.h>
#include <math.h>

#define MAX_LOOP    10
#define PI          3.14159265f
#define ERROR_TOL   0.0000001

float Sin(float);
float Cos(float);
float Tan(float);

void main(void){
    float num;

    printf("Enter a double degree : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num);

    printf("Sin(%f) = [%f]\t[%f]\n", num, Sin(num), sin(num * PI / 180.0));
    printf("Cos(%f) = [%f]\t[%f]\n", num, Cos(num), cos(num * PI / 180.0));
    printf("Tan(%f) = [%f]\t[%f]\n", num, Tan(num), tan(num * PI / 180.0));
}

float Sin(float degree){
    double ret = 0.0f;
    double step = 1.0f;

    degree = degree * PI / 180.0;
    const double x = degree * degree;
    step = degree;
    for(int i = 1; i<=MAX_LOOP ; i++){
        ret += step;
        step *= (-x/((2 * i) * (2 * i + 1)));
        //printf("(%f) = [%f]\n", step, ret);
        if(step>0 ? (step<ERROR_TOL) : (-step<ERROR_TOL)){
            break;
        }
    }
    return (float)ret;
}

float Cos(float degree){
    double ret = 0.0f;
    double step = 1.0f;

    degree = degree * PI / 180.0;
    const double x = degree * degree;
    for(int i = 1; i<=MAX_LOOP ; i++){
        ret += step;
        step *= (-x/((2 * i) * (2 * i - 1)));
        //printf("(%f) = [%f]\n", step, ret);
        if(step>0 ? (step<ERROR_TOL) : (-step<ERROR_TOL)){
            break;
        }
    }
    return (float)ret;
}

float Tan(float degree){
    return (float)Sin(degree)/Cos(degree);
}
