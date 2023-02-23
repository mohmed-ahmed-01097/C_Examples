#include <stdio.h>

void main(void){
    	char ch;
    	printf("Enter the Character :\n");
	fflush(stdout); fflush(stdin);
    	scanf("%c",&ch);

    	printf("ASCII value of %c = \t%d\n",ch ,ch);
}
