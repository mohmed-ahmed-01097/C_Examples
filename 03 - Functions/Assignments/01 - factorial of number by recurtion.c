#include <stdio.h>

int factorial (int);

void  main(void){

    int x1;

    printf("Enter the Number ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &x1);

    printf("the factorial of [%i] = %i", x1, factorial(x1));

}

int factorial (int num){

    if(num == 1){
        return 1;
    }else{
        return num * factorial(num-1);
    }
}
