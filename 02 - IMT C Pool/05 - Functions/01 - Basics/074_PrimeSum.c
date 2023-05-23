#include <stdio.h>

#define MAX_INDEX       168

int* PrimeNum(void);
void GetSum(int, int*);

void main(void){
    int *ptr = PrimeNum();

    int number;
    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("the number %i ==> is sum of:\n", number);
    GetSum(number, ptr);

}

int* PrimeNum(void){
    static int prime[MAX_INDEX] = {2};
    int index = 1;
    for(int i = 3 ; i<1000 ; i++){
        char flag = 0;
        for(int j = 0 ; j<index ; j++){
            if(i%prime[j]){
                flag = 1;
            }else{
                flag = 0;
                break;
            }
        }
        if(flag){
            prime[index++] = i;
        }
    }
    return prime;
}

void GetSum(int num, int* ptr){
    for(int i = 0 ; ptr[i]<num ; i++){
        for(int j = i ; ptr[j]<num ; j++){
            if(ptr[i] + ptr[j] == num){
                printf("\t %i + %i\n", ptr[i], ptr[j]);
            }
        }
    }
}
