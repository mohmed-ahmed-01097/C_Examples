#include <stdio.h>
#include <stdint.h>
#include <conio.h>

void array_display(uint8_t const* const, uint32_t);
void array_enter(uint8_t * const, uint32_t);
void array_swap(uint8_t * const, uint8_t * const, uint32_t,  uint32_t);
void array_Reverce(uint8_t * const, uint32_t);
uint32_t array_Avg(uint8_t * const, uint32_t);

int main(void){
    uint32_t nItem1, nItem2;
    printf("Array swapping, reversing, and average program\n");
    printf("Enter no of elements of Array-1 and Array-2:");
    scanf("%d %d",&nItem1,&nItem2);

    if((nItem1 < 0) || (nItem2 < 0)){
    	printf("Number of elements cannot be negative\n");
        fflush(stdout);		fflush(stdin);
        while(!getch());
    	return 0;
    }

/** init array with variable size **/
    uint8_t array1[nItem1], array2[nItem2];

    array_enter(array1, nItem1);
    array_enter(array2, nItem2);

	printf("Contents of arrays before swap \n");
	array_display(array1, nItem1);
    array_display(array2, nItem2);

	array_swap(array1,array2,nItem1,nItem2);

	printf("Contents of arrays after swap\n");
	array_display(array1, nItem1);
    array_display(array2, nItem2);

	printf("Contents of arrays before reverce \n");
	array_display(array1, nItem1);

	array_Reverce(array1, nItem1);

	printf("Contents of arrays after reverce\n");
	array_display(array1, nItem1);

	printf("the average : %i", array_Avg(array1, nItem1));

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
    static uint8_t num = 0;
    uint32_t input;
    num++;
	for(uint32_t i = 0 ; i < size ; i++){
    	printf("Enter %d element of array%u:",i, num);
		fflush(stdout);		fflush(stdin);
		scanf("%i", &input);
		array[i] = (uint8_t)input;
	}
}
void swap(uint8_t * const array1, uint8_t * const array2){
		*array1 ^= *array2;
		*array2 ^= *array1;
		*array1 ^= *array2;
}
void array_swap(uint8_t * const array1, uint8_t * const array2, uint32_t size1,  uint32_t size2){
    if(size1 > size2){
        size1 = size2;
    }
	for(uint32_t i = 0 ; i < size1 ; i++){
		array1[i] ^= array2[i];
		array2[i] ^= array1[i];
		array1[i] ^= array2[i];
	}
}
void array_Reverce(uint8_t * const array, uint32_t size){
	for(uint32_t i = 0 ; i < (size - i - 1) ; i++){
		swap(&array[i], &array[size - i - 1]);
	}
}
uint32_t array_Avg(uint8_t * const array, uint32_t size){
    uint32_t sum = 0;
	for(uint32_t i = 0 ; i < size ; i++){
		sum += array[i];
	}
	return sum/size;
}
