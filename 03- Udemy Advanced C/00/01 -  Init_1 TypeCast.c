#include <stdio.h>
#include <stdint.h>
#include <conio.h>

/* global variables */
uint32_t g_data1 = 4000;
uint32_t g_data2 = 321;
uint8_t result = 0;

int main(void){
	result = (uint8_t)g_data1 + g_data2;
	printf("Result = %d\n",result);

	{
        uint32_t result = g_data1 + g_data2;
        printf("Result = %d\n",result);
	}
	{
        float result = g_data1 / (float)g_data2;
        printf("Result = %f\n",result);
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
