#include <stdio.h>

#define MAX_LENGTH  sizeof(int)*8

void main(void){
    unsigned int number;
    char max = 0;

    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    for(int i = MAX_LENGTH; i-- ; ){
            if(number&(1<<i)){
                max = i;
                break;
            }
    }
    if(number)
        printf("the position of the last one in [%i = %#X] is bit number [%i]\n"
           , number, number, max);
    else
        printf("0 has no set bits.");
}
