#include <stdio.h>

#define MAX_LENGTH  sizeof(int)*8

void main(void){
    float number;
    float sum = 1.0, term = 1.0;
    char iter;

    printf("Enter X value :");
    fflush(stdout); fflush(stdin);
    scanf("%f", &number);

    for(iter = 1 ; term>0.00001 ; iter++){
        term *= number/iter;
        sum += term;
    }
    printf("Term = %i\tSum = %f", iter, sum);
}
