#include <stdio.h>

void DrawPyramid(int num);

void main(void){
    int height;;
    printf("Enter the hight of the pyramid: ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &height);

    DrawPyramid(height);
}

void DrawPyramid(int num){
    for(int i = 0 ; i<num ; i++){
        for(int j = i+1; j<num ; j++){
            printf(" ");
        }
        for(int j = 0; j<(i*2+1) ; j++){
            printf("*");
        }
        printf("\n\r");
    }
}
