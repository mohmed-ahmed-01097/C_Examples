#include <stdio.h>

void main(void){
    unsigned int num;

    printf("input the number (table of calculated):");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    for(int i = 1; i<=10 ; i++){
        printf("%3i x %3i = %4i\n", num, i, num * i);
    }
}
