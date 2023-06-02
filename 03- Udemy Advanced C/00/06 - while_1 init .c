#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){

    uint8_t num=1;

    while(num <= 10){
      printf("%d\n",num++);
    }

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
