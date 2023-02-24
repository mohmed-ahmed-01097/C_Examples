#include <stdio.h>

void main(void){
    int num;

    printf("Enter first  number : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    printf("%i is [%s]\n", num, (num%2)? "Odd":"Even");
}
