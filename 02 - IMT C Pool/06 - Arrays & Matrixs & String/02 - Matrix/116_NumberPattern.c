#include <stdio.h>

#define MAX_LENGTH      15

void PrintPattern(void);

void main(void){
    PrintPattern();
}


void PrintPattern(void){
    int arr[MAX_LENGTH][MAX_LENGTH];
    int num = 1;

    for(int i = MAX_LENGTH , r = 0, c = 0 ; i-- ; ){
        if(i<MAX_LENGTH/2){
            arr[r][c] = num;
            break;
        }
        for( ; c<i ; ){
            arr[r][c++] = num++;
        }
        for( ; r<i ; ){
            arr[r++][c] = num++;
        }
        for( ; c>(MAX_LENGTH-i-1) ; ){
            arr[r][c--] = num++;
        }
        for( ; r>(MAX_LENGTH-i) ; ){
            arr[r--][c] = num++;
        }
    }

    for(int r = 0 ; r<MAX_LENGTH ; r++){
        for(int c = 0 ; c<MAX_LENGTH ; c++){
            printf("%04i\t", arr[r][c]);
        }
        printf("\n\n");
    }

}

/**
void PrintPattern(void){
    int arr[MAX_LENGTH][MAX_LENGTH];
    int num = 1;

    for(int i = MAX_LENGTH , r = 0, c = 0 ; i-- ; ){
        if(i<MAX_LENGTH/2){
            arr[r][c] = num;
            break;
        }
        for( ; c<i ; ){
            arr[r][c++] = num++;
            printf("[%03i %03i %03i] ", r, c-1, arr[r][c-1]);
        }
        printf("\n");
        for( ; r<i ; ){
            arr[r++][c] = num++;
            printf("[%03i %03i %03i] ", r-1, c, arr[r-1][c]);
        }
        printf("\n");
        for( ; c>(MAX_LENGTH-i-1) ; ){
            arr[r][c--] = num++;
            printf("[%03i %03i %03i] ", r, c+1, arr[r][c+1]);
        }
        printf("\n");
        for( ; r>(MAX_LENGTH-i) ; ){
            arr[r--][c] = num++;
            printf("[%03i %03i %03i] ", r+1, c, arr[r+1][c]);
        }
        printf("\n");

    }

    for(int r = 0 ; r<MAX_LENGTH ; r++){
        for(int c = 0 ; c<MAX_LENGTH ; c++){
            printf("%04i ", arr[r][c]);
        }
        printf("\n");
    }

}
**/
