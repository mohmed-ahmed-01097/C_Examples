#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){

    char name[30];

    printf("===========scanf()===========\n");
    printf("Enter your name :");
    fflush(stdout); fflush(stdin);
    scanf("%s",name);
    printf("Hi,%s\n",name);

    printf("===========gets( )===========\n");
    printf("Enter your name :");
    fflush(stdout); fflush(stdin);
    gets(name);
    printf("Hi,%s\n",name);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
