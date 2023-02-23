#include <stdio.h>

#define MAX(a,b)    ((a)>(b))?(a):(b)

void main(void){

    float x, max;
    int count;
    printf("Enter the count of Numbers : ");
    scanf("%i",&count);
    for(int i = count ; i-- ; ){
        printf("%d : ",(count-i));
        scanf("%f",&x);
        max = MAX(max,x);
    }
    printf("\nthe Largest Number is : %0.2f", max);

}
