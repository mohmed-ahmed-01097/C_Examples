#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){

	char c1,c2,c3,c4,c5,c6;
	printf("Enter any 6 characters of your choice :");
	scanf("%c %c %c %c %c %c",&c1,&c2,&c3,&c4,&c5,&c6);
	printf("\nASCII codes : %u,%u,%u,%u,%u,%u",c1,c2,c3,c4,c5,c6);

	printf("Enter any 6 characters of your choice :");
    c1 = getchar();
    getchar(); //this getchar is used to clear the input buffer (\n)
    c2 = getchar();
    getchar();//this getchar is used to clear the input buffer (\n)
    c3 = getchar();
    getchar();//this getchar is used to clear the input buffer (\n)
    c4 = getchar();
    getchar();//this getchar is used to clear the input buffer (\n)
    c5 = getchar();
    getchar();//this getchar is used to clear the input buffer (\n)
    c6 = getchar();

    printf("\nASCII codes : %u,%u,%u,%u,%u,%u",c1,c2,c3,c4,c5,c6);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
