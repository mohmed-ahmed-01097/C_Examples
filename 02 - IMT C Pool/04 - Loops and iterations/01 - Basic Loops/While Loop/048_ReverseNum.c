#include <stdio.h>

void main(void){
    unsigned int num, reverse = 0;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    while(num){
        reverse *= 10;
        reverse += (num%10);
        num /= 10;
    }
    printf("the reverse number = %u", reverse);
}
