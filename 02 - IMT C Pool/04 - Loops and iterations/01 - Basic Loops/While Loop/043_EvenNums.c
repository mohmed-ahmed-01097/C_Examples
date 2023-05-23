#include <stdio.h>

void main(void){
    unsigned int i = 1, num;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    while(i <= num){
        if((i%2) == 0)
            printf("%u\n", i);
        i ++;
    }
}
