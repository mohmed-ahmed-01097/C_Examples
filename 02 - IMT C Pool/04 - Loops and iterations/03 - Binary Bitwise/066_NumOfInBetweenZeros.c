#include <stdio.h>

#define MAX_LENGTH  sizeof(int)*8

void main(void){
    unsigned int number;
    char max = 0, flag = 0;

    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("the number %i\n", number);

    for(int i = 0, j = 0; i<MAX_LENGTH ; i++){
            if(number&(1<<i)){
                if(flag)
                    max = (max<j)?j:max;
                flag = 1;
                j = 0;
            }else{
                j++;
            }
    }
    printf("Total number of in between zero bits is %i\n", max);

}
