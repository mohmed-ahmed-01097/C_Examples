#include <stdio.h>

void main(void){
    unsigned int num;
    float sum = 0.0;

    printf("Enter value of n : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    for(int i = 1; i<=num ; i++){
        sum += 1.0/i;
        printf("%3i: %f\n", i, sum);
    }
}
