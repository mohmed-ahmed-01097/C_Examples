#include <stdio.h>
#include <stdint.h>
#include <conio.h>

void is_Odd_Even(uint32_t);

int main(void){
	uint32_t num1 , num2;
	printf("Enter 2 numbers(in hex):");
	scanf("%x %x",&num1,&num2);

	//ffaaccee 00553311
	printf("Bitwise AND(&) : %#010x\n",(num1 & num2));
	printf("Bitwise OR (|) : %#010x\n",(num1 | num2));
	printf("Bitwise XOR(^) : %#010x\n",(num1 ^ num2));
	printf("Bitwise NOT(~) : %#010x\n",(~num1));
	printf("Bitwise NOT(~) : %#010x\n",(~num2));

	is_Odd_Even(num1);
	is_Odd_Even(num2);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
void is_Odd_Even(uint32_t num){
    if(num%2){
        printf("%#010x is odd number\n",num);
    }else{
        printf("%#010x is even number\n",num);
    }
}
