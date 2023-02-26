#include <stdio.h>

int PrimeNum(int);

void main(void){
    int number;

    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("the number %i ==> is %s a Prime Number"
           , number, PrimeNum(number)?"":"Not");
}

int PrimeNum(int num){
    for(int i = num/2 ; i>1 ; i--){
        if(num%i){
            continue;
        }
	return 0;
    }
    return 1;
}

