#include <stdio.h>

void main(void){
    unsigned int num, sum = 1;

    printf("Enter the rows of Floyd's triangle : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    for(int i = 0 ; i<num ; i++){
        for(int j = 0 ; j<i ; j++){
            printf("%4u", sum++);
        }
        printf("\n");
    }
}
