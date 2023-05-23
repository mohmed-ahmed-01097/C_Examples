#include <stdio.h>

int PerfectNum(int);

void main(void){
    int number;

    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("the number %i ==> is %s a Perfect Number"
           , number, PerfectNum(number)?"":"Not");
}

int PerfectNum(int num){
    int sum = 0;
    int temp = sqrt(num);
    for(int i = 1; i<=temp ; i++){
        if((num%i) == 0){
            sum += i;
            sum += num/i;
        }
    }
    return (num == (sum-num));
}

