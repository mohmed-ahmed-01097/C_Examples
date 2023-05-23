#include <stdio.h>

void main(void){
    int num;
    short bit;

    printf("Enter any number : ");
    scanf("%i", &num);
    fflush(stdout); fflush(stdin);
    printf("Enter nth bit to check (0-31) : ");
    scanf("%hi", &bit);

    printf("the %i bit of %i is [%s]", bit, num,(num & (1<<bit))?"set (1)":"unset (0)");
}
