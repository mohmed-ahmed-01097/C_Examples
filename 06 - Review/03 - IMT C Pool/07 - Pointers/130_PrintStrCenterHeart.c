#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

void PrintHeart(char*, int);

void main(void){
    int num;
    char str[MAX_LENGTH];

    printf("Enter your name : \n");
    fflush(stdout); fflush(stdin);
    gets(str);

    printf("Enter number of row : \n");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    PrintHeart( str, num);

}

void PrintHeart(char* str, int length){
    for(int i = length/4+1, j = length-i*2+1 ; i-- ; j+=2){
        for(int k = i ; k-- ; ){
            printf("  ");
        }
        for(int k = j ; k-- ; ){
            printf(" *");
        }
        for(int k = i*2+1 ; k-- ; ){
            printf("  ");
        }
        for(int k = j ; k-- ; ){
            printf(" *");
        }
        printf("\n");
    }

    int size = strlen(str);
    size = size%2 ? size : size+1;

    for(int i = length-size/2-2 ; i-- ; ){
        printf(" *");
    }
    printf(" [");
    for(int i = 0 ; i<size ; i++){
        if(str[i])
            printf(" %c", str[i]);
        else
            printf("  ");
    }
    printf(" ]");
    for(int i = length-size/2-2 ; i-- ; ){
        printf(" *");
    }
    printf("\n");

    for(int i = 1 ; i<length ; i++){
        for(int j = i ; j-- ; ){
            printf("  ");
        }
        for(int j = (length - i) * 2 - 1 ; j-- ; ){
            printf(" *");
        }
        printf("\n");
    }
}
