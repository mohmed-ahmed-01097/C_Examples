#include <stdio.h>

void main(void){
    char ch;
    printf("Enter the Character :\n");
    while((ch = getche()) != '\r')
        printf("\t%03d\n",ch);
}
