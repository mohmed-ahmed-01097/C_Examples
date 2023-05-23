#include <stdio.h>
#include <math.h>

void main(void){
    float a, b, c;
    float r, i;

    printf("Enter equation parameter a b c quadratic equation (aX^2 + bX + c)\n");
    fflush(stdout); fflush(stdin);
    scanf("%f %f %f", &a, &b, &c);

    if(a){
        float temp = b * b - 4 * a * c;
        switch(temp>=0){
            case 0:
                r = -b/(2*a);
                i = sqrt(-temp)/(2*a);
                printf("x1 = [%0.2f + i%0.2f], x2 = [%0.2f - i%0.2f]"
                       , r, i, r, i);
                break;
            case 1:
                printf("x1 = [%0.2f], x2 = [%0.2f]"
                       , (-b+sqrt(temp))/(2*a)
                       , (-b-sqrt(temp))/(2*a));
                break;
            default:
                break;
        }
    }else{
        if(b){
            printf("Only One Root = [%0.2f]", -c/b);
        }else{
            printf("[No Solution]");
        }
    }
}
