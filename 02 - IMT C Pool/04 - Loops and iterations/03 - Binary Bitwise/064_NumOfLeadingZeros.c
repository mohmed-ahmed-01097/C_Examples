#include <stdio.h>

#define MAX_LENGTH  sizeof(int)*8

void main(void){
    unsigned int number;
    char max = 0;

    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("the number %i\n", number);

    for(int i = MAX_LENGTH; i-- ; ){
            if(number&(1<<i)){
                break;
            }else{
                max++;
            }
    }
    printf("Total number of leading zero bit is %i\n", max);

}
