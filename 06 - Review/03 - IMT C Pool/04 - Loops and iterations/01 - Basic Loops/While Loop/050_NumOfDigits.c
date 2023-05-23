#include <stdio.h>

void main(void){
    unsigned long long int num, temp_num;
    char length = 0;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%llu", &num);

    temp_num = num;
    while(temp_num){
        temp_num /= 10;
        length++;
    }
    printf("number of digits %i", length);
}
