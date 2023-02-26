#include <stdio.h>

float Power(float, int);

void main(void){
    float number;
    int power;
    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%f", &number);

    printf("Enter the power :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &power);

    printf("[%f]^(%i) ==> %f", number, power, Power(number, power));
}

float Power(float num, int pow){
    float ret = 1.0;
    int flag;
    if(pow){
        flag = (pow>0) ? 1 : 0;
        pow = (pow>0) ? pow : -pow;
        for(int i = 0 ; i<pow ; i++){
            ret *= num;
        }
        ret = flag ? ret : 1.0/ret;
    }else{
        ret = 1.0;
    }
    return ret;
}
