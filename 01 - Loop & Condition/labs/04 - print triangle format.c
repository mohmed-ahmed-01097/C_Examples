#include <stdio.h>

void main(void){
    int max;

    printf("Enter the max number length :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &max);

    for(int i = 0 ; i<max ; i++){
        for(int j = i ; j<max ; j++){
            printf("%02i ", j);
        }
        printf("\n\r");
    }
}
