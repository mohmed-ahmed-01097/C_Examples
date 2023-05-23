#include <stdio.h>

#define MSB     (1<<(sizeof(int)*8-1))

void main(void){
    int num;

    printf("Enter any number : ");
    scanf("%i", &num);
    fflush(stdout); fflush(stdin);

    printf("LSB of %i is [%s]", num,(num & MSB)?"set (1)":"unset (0)");
}
