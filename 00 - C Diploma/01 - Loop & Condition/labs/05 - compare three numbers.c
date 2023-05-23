#include <stdio.h>

void main(void){
    float x, y, z, max;

    printf("Enter the Three numbers : \n");
    fflush(stdout); fflush(stdin);
    scanf("%f %f %f", &x, &y, &z);

    if(x>y){
        if(x>z){
            max = x;
        }else{
            max = z;
        }
    }else{
        if(y>z){
            max = y;
        }else{
            max = z;
        }
    }
    printf("The maximum Number = %0.2f", max);

}
