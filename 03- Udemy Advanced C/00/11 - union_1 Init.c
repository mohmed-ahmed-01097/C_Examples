#include <stdio.h>
#include <stdint.h>
#include <conio.h>

union Address{
	uint16_t shortAddr;
	uint32_t longAddr;
};

int main(void){

	union Address addr;

	addr.shortAddr = 0xABCD;
	printf("short addr = %#X\n",addr.shortAddr);
	printf("long addr = %#X\n",addr.longAddr);

	addr.longAddr = 0xEEEECCCC;
	printf("short addr = %#X\n",addr.shortAddr);
	printf("long addr = %#X\n",addr.longAddr);


    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
