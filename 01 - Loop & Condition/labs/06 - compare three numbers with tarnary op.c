#include <stdio.h>

#define MAX(a,b)    ((a)>(b))?(a):(b)

void main(void){
    float x, y, z;

    printf("Enter the Three numbers : \n");
    fflush(stdout); fflush(stdin);
    scanf("%f %f %f", &x, &y, &z);

    printf("The maximum Number = %0.2f", MAX(x, MAX(y, z)));

}
