#include <stdio.h>

void main (void){
	unsigned int x = 0x010F020E;
	unsigned char byte_1, byte_2, byte_3, byte_4;

	unsigned int * ptr = &x;

	printf("x = %i\t%#X\n", x, x);
	printf("p = %p\t%#X\n" , ptr, ptr);

	printf("Big Endian :\n\r");
	byte_1 = *((unsigned char*)ptr  );
	byte_2 = *((unsigned char*)ptr+1);
	byte_3 = *((unsigned char*)ptr+2);
	byte_4 = *((unsigned char*)ptr+3);
	printf("Bytes = %#04X%02X%02X%02X\n" , byte_1, byte_2, byte_3, byte_4);

	printf("Little Endian :\n\r");
	byte_4 = *((unsigned char*)ptr  );
	byte_3 = *((unsigned char*)ptr+1);
	byte_2 = *((unsigned char*)ptr+2);
	byte_1 = *((unsigned char*)ptr+3);
	printf("Bytes = %#04X%02X%02X%02X\n" , byte_1, byte_2, byte_3, byte_4);

}
