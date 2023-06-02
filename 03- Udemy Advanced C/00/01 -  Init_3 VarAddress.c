#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){

	char c1,c2,c3,c4,c5,c6;
	printf("Enter any 6 characters of your choice :");
	scanf("%c %c %c %c %c %c",&c1,&c2,&c3,&c4,&c5,&c6);
	printf("\nASCII codes : %u,%u,%u,%u,%u,%u\n",c1,c2,c3,c4,c5,c6);

    uint64_t* addressOfc1 =  ( uint64_t*)&c1;
    printf("Address of variable c1 = %#010X\n", addressOfc1);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
