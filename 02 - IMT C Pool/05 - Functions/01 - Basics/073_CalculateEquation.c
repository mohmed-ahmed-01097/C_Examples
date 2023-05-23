#include <stdio.h>

#define MAX     11

int Calc_B(int, int);

int B[MAX][MAX];

void main(void){

    printf("m \\ x");
    for(int i = 0; i<MAX ; i++){
        printf("%4i", i);
    }
    printf("\n------------------------------------------------------\n");
    for(int i = 0; i<MAX ; i++){
        printf("%3i |", i);
        for(int j = 0; j <= i ; j++){
            printf("%4i", Calc_B(i,j));
        }
        printf("\n");
    }
    printf("------------------------------------------------------\n");

}

int Calc_B(int m, int x){
    if(m && x){
        B[m][x] = B[m][x-1] * (m-x+1) / x;
    }else{
        B[m][x] = 1;
    }
    return B[m][x];
}
