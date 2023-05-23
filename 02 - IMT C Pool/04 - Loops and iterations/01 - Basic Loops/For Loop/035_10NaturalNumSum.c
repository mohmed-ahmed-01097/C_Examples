#include <stdio.h>

void main(void){
    int sum = 0;
    printf("the first 10 natural number are:\n");
    for(int i = 1; i<=10 ; i++){
        printf("%3i", i);
        sum += i;
    }
    printf("\nthe sum = %i", sum);
}
