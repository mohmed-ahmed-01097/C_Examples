#include <stdio.h>

int power (int, int);

void  main(void){

    int x, p;

    printf("Enter the Number ^ Power ");
    fflush(stdout); fflush(stdin);
    scanf("%i ^ %i", &x, &p);

    printf("[%i] power of [%i] = %i", x, p, power(x, p));

}

int power (int num, int pow){
    if(pow){
        if(pow == 1){
            return num;
        }else{
            return num * power(num, pow-1);
        }
    }else{
        return 1;
    }

}
