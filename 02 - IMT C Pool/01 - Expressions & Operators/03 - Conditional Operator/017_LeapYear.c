#include <stdio.h>

void main(void){
    int num;

    printf("Enter any year : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    printf("%i is a [%s]\n", num, !(num%4)&&((num%100)||!(num%400))? "LEAP YEAR":"COMMON YEAR");
}
