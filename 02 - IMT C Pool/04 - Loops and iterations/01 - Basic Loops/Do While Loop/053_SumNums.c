#include <stdio.h>

void main(void){
    unsigned int num, sum = 0;

    do{
        printf("Enter a number : ");
        fflush(stdout); fflush(stdin);
        scanf("%u", &num);

        sum += num;
    }while(num);
    printf("Sum = %u", sum);
}
