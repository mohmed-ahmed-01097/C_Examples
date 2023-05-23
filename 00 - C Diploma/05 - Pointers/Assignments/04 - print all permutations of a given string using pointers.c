#include <stdio.h>

typedef unsigned char  u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

void SwapElement(u8*, u8*);
void PermuteElement(u8*, u8, u8);
u16 factorial(u8);

void main(void){
    u8 str[] = "1234";
    u8 size = sizeof(str)/sizeof(u8) -1;

	printf("Pointer : Generate permutations of a given string : [%s]\n", str);
    printf("\n----------------------------------------------------\n");
	printf("The permute of the string are [%u] Element: \n", factorial(size));
	PermuteElement(str, 0, size);
    printf("\n----------------------------------------------------\n");

}

void SwapElement(u8* a, u8* b){
    u8 temp = *a;
    *a = *b;
    *b = temp;
}

void PermuteElement(u8* pu8_str, u8 start, u8 end){
    if(start == end){
        printf(" [%s]", pu8_str);
    }else{
        for(u8 i = start; i<end ; i++){
            SwapElement(pu8_str+start, pu8_str+i);
            PermuteElement(pu8_str, start+1, end);
            SwapElement(pu8_str+start, pu8_str+i);
        }
    }
}

u16 factorial(u8 num){
    u16 ret = 1;
    while(num){
        ret *= num;
        num--;
    }
    return ret;
}
