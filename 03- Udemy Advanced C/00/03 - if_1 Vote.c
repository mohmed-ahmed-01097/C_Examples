#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){
	short age = 0;

	printf("Enter your age here :");
	scanf("%hd",&age);

	if(age < 18){
		printf("Sorry ! you are not eligible to vote\n");
	}else{
		printf("Congrats ! you are eligible to vote\n");
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
