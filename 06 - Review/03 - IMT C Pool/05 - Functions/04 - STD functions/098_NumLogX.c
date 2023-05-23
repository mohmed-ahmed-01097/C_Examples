#include <stdio.h>

#define ERROR_TOL   0.000001

float ln(float);
float logx(float, int);

void main(void){
    float num;
    int base;

    printf("Enter a float number : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num);

    printf("Enter a float number : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &base);

    printf("[%f]Log[%i] = [%f]\n", num, base, logx(num, base));
}

float ln(float num){
    if (num <= 0) {
        return 0; // or any desired error handling for non-positive values
    }

    double ret = 0.0f;
    double step = 1.0f;

    step = (num - 1) / (num + 1);
    const double x = step * step;
    for(int i = 1; (step>ERROR_TOL) ; i++){
        ret += step / (2 * i - 1);
        step *= x;
        //printf("%i\t(%f) = [%f]\n", i, step, ret);
    }
    return (float)(ret * 2);
}
float logx(float num, int base){
    //logₐ(x) = ln(x) / ln(a)
    return (float)ln(num)/ln((float)base);
}
