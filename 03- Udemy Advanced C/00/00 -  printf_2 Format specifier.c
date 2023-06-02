#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){
    printf("Hex     = %#X\n", 255);
    printf("Octal   = %#o\n", 255);
    printf("Decimal = %d\n", 255);
    printf("the distance between A and B = [%*d] km", +5, 150 + 50);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
