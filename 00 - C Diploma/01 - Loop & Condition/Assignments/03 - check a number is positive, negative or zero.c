#include <stdio.h>

void main(void){

    float num;
    printf("Enter your integer Number :");
    scanf("%f",&num);
    if(num){
        if(num>0){
            printf("\tPositive Number.");
        }else{
            printf("\tNegative Number.");
        }
    }else{
        printf("\tZero Number.");
    }

}
