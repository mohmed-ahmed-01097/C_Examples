#include <stdio.h>
#include <math.h>

void main(void){
    float a, b, c;

    printf("Enter equation parameter a b c \n");
    fflush(stdout); fflush(stdin);
    scanf("%f %f %f", &a, &b, &c);

    if(a){
        float temp = b * b - 4 * a * c;
        if(temp>=0)
            printf("x1 = [%0.2f], x2 = [%0.2f]", (-b+sqrt(temp))/(2*a), (-b-sqrt(temp))/(2*a));
        else
            printf("[No Roors]");
    }else{
        if(b){
            printf("Only One Root = [%0.2f]", -c/b);
        }else{
            printf("[No Solution]");
        }
    }
}
