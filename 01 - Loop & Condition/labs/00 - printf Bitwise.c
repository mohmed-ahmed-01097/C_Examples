#include <stdio.h>

void main(void){

	int x = 7 , y = 8 ;

	printf("x = %#x , y = %#x\n" , x, y);
	printf("x & y  = %#x\n" , x & y);
	printf("x | y  = %#x\n" , x | y);
	printf("x ^ y  = %#x\n" , x ^ y);
	printf("x >> 1 = %#x\n" , x >> 2);
	printf("y << 2 = %#x\n" , y << 2);

}
