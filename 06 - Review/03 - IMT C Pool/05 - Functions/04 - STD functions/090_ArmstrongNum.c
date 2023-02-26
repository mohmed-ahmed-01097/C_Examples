#include <stdio.h>

int ArmstrongNum(int);
int power(int, int);

void main(void){
    int number;
    printf("Enter any Number :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &number);

    printf("the number %i ==> is %s an Armstrong Number"
           , number, ArmstrongNum(number)?"":"Not");
}

int ArmstrongNum(int num){
    int ret = 0;
    int temp = num, pow = 0;
    for( ; temp ; temp /=10 ){
        pow++;
    }
    temp = num;
    for(int i = 0; i<pow ; i++){
        ret += power(pow, temp%10);
        temp /= 10;
    }
    return (ret == num);
}

int power(int pow, int num){
    int ret = 1;
    for(int i = 0 ; i<pow ; i++){
        ret *= num;
    }
    return ret;
}
