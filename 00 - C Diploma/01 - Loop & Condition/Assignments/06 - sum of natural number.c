#include <stdio.h>

void main(void){
    int num, sum = 0;
    printf("Enter the number :");
    scanf("%i",&num);

    for(int i = 1; i<=num ; i++)
        sum += i;
    printf("the sum = %i", sum);
}
