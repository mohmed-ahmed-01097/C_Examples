#include <stdio.h>

#define INT_MAX_BIT 0x80000000U

void convert2Binary(int);

int main(void){
    int decimal;
    printf("Enter the Decimal Number :");
    scanf("%d",&decimal);
    //printf("\nBinary : 0b%b", decimal); // not True
    printf("\nBinary \t: 0b");
    convert2Binary(decimal);
    printf("\nOctal \t: O %39o", decimal);
    printf("\nHex \t: 0x%39X", decimal);
    return 0;
}

void convert2Binary(int decimal){
    for(unsigned int i = INT_MAX_BIT ; i ; i>>=1 ){
        static char j=1;
        printf("%d",decimal&i ? 1 : 0);
        if(j++%4==0)
            printf(" ");
    }
}
