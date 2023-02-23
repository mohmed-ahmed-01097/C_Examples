#include <stdio.h>

void main(void){
    char ch;
    printf("Enter the Character :\n");
    scanf("%c",&ch);
	fflush(stdout); fflush(stdin);

    printf("ASCII value of %c = \t%d\n",ch ,ch);
}
