#include <stdio.h>
#include <math.h>

int reverse(int);

void main(void){
    int num;

    printf("Enter any number max 9 digit:");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    printf("Reverse of %i = %i\n", num, reverse(num));
}

int reverse(int num){
    if(num){
        return (reverse(num/10) + (int)((num % 10) * (float)pow(10,(int)log10(num)))) ;
    }
    return 0;
}

/**
int reverse(int num){
    if(num){
        int i;
        int ret = reverse(num/10);
        for(i = 1; i<=ret ; i*=10);
        return ret + (num % 10) * i;
    }
    return 0;
}
**/
