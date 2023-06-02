#include <stdio.h>
#include <stdint.h>
#include <conio.h>

/* global variables */
int g_data1 = 4000;
int g_data2 = 200;
char result = 0;

int main(void){
	result = g_data1 + g_data2;
	printf("Result = %d\n",result);

	{
        int result = g_data1 + g_data2;
        printf("Result = %d\n",result);
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
