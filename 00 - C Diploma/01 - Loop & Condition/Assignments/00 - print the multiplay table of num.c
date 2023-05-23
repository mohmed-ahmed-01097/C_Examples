#include <stdio.h>

void main(void){
    int num;
    printf("Enter the Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    for(int i = 1; i<13 ; i++){
        printf("\t%02i  x  %02i  =  %03i\n\r", i, num, i*num);
    }
}
