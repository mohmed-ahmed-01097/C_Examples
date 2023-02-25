#include <stdio.h>

void main(void){
    unsigned int num;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    while(num){
        printf("%u\n", num--);
    }
}
