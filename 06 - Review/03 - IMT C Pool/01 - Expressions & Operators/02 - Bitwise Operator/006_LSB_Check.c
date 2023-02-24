#include <stdio.h>

#define LSB     0x01U

void main(void){
    int num;

    printf("Enter any number : ");
    scanf("%i", &num);
    fflush(stdout); fflush(stdin);

    printf("LSB of %i is [%s]", num,(num & LSB)?"set (1)":"unset (0)");
}
