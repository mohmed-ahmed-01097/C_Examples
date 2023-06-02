#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){
	uint8_t someData[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};

	printf("Contents of this array:\n");

	for(uint32_t i = 0 ; i < 10 ; i++){
		printf(" %#04X ", someData[i]);
	}
	printf("\nNew Contents of the array:\n");

	for(uint32_t i = 0 ; i < 10 ; i++){
		someData[i] = 10;
		printf(" %#04X ", someData[i]);
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
