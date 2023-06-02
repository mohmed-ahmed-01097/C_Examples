#include <stdio.h>
#include <stdint.h>
#include <conio.h>

const uint8_t data2 = 10;

int main(void){

    const uint8_t data1 = 10;

	printf("Local  Value = %u\n",data1);
	printf("Global Value = %u\n",data2);

	uint8_t *ptr = (void*)0;

	ptr = (uint8_t*)&data1;
	*ptr = 50;
	printf("Local  Value = %u\n",data1);

	ptr = (uint8_t*)&data2; //Error Global Const
	*ptr = 50;
	printf("Global Value = %u\n",data2);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
