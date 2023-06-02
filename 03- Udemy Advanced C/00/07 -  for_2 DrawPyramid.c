#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){

	uint32_t height;

	printf("Enter height of pyramid:");
	scanf("%d",&height);

	if(height <= 0){
		printf("ending number should be > starting number\n");
        fflush(stdout);		fflush(stdin);
        while(!getch());
		return 0;
	}

	for(uint32_t i = 1 ; i <= height  ; i++  ){
		for(uint32_t j = i; j > 0 ; j--){
			printf(" %02d  ",j);
		}
		printf("\n\n");
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
