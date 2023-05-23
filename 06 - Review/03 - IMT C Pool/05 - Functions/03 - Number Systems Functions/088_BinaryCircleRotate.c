#include <stdio.h>

#define MAX_LENGTH  sizeof(int)*8

int RightRotateNum(unsigned int, int);
int LeftRotateNum(unsigned int, int);

void main(void){
    unsigned int number, rotate;
    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);
    printf("Enter Number of Rotation:");
    fflush(stdout); fflush(stdin);
    scanf("%i", &rotate);

    printf("the number %x rotated %i times\n", number, rotate);

    printf("\t Right==> %#10x\n\t Left==>  %#10x", RightRotateNum(number, rotate), LeftRotateNum(number, rotate));
}


int RightRotateNum(unsigned int num, int rot){
    for(int i = 0; i<rot ; i++){
        num = ((num & 1)<<(MAX_LENGTH-1)) | (num >> 1);
    }
    return num;
}

int LeftRotateNum(unsigned int num, int rot){
    for(int i = 0; i<rot ; i++){
        num = (num << 1) | (num &( 1 <<(MAX_LENGTH-1)));
    }
    return num;
}
