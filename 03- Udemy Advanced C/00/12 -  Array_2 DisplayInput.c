#include <stdio.h>
#include <stdint.h>
#include <conio.h>

void array_display(uint8_t const* const, uint32_t);
void array_enter(uint8_t * const, uint32_t);

int main(void){
	uint8_t someData[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
	uint32_t datasize = sizeof(someData)/sizeof(uint8_t);

	printf("Contents of this array:\n");
    array_display(someData, datasize);

	printf("Enter the new content of array:\n");
    array_enter(someData, datasize);

	printf("New Contents of the array:\n");
    array_display(someData, datasize);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}

void array_display(uint8_t const* const array, uint32_t size){
	for(uint8_t i = 0 ; i < size ; i++){
		printf(" %#04X ", array[i]);
	}
	printf("\n");
}
void array_enter(uint8_t * const array, uint32_t size){
    uint32_t input;
	for(uint32_t i = 0 ; i < size ; i++){
		printf("[%03i]: ", i);
		fflush(stdout);		fflush(stdin);
		scanf("%i", &input);
		array[i] = (uint8_t)input;
	}
}
