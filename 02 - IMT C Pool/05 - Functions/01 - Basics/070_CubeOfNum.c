#include <stdio.h>

unsigned int cube(int);

void main(void){
    unsigned int num;

    printf("Enter any number: ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    printf("Cube of %u is %u", num, cube(num));
}

unsigned int cube(int num){
    return num * num * num;
}
