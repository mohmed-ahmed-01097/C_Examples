#include <stdio.h>

#define MAX_LENGTH  sizeof(int)*8

int OnesNum(unsigned int);
int ZerosNum(unsigned int);

void main(void){
    unsigned int number;
    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("the number %x\n", number);

    printf("Total zero bit is %i\n", ZerosNum(number));
    printf("Total one  bit is %i\n", OnesNum(number));
}


int OnesNum(unsigned int num){
    int ret = 0;
    for(int i = 0; i<MAX_LENGTH ; i++){
        ret += (num&(1<<i))? 1 : 0;
    }
    return ret;
}
int ZerosNum(unsigned int num){
    int ret = 0;
    for(int i = 0; i<MAX_LENGTH ; i++){
        ret += (num&(1<<i))? 0 : 1;
    }
    return ret;
}
