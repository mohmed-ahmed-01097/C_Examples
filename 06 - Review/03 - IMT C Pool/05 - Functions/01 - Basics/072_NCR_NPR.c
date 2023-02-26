#include <stdio.h>

int NCR(int, int);
int NPR(int, int);
long long int factorial(int);

void main(void){
    int n, r;

    printf("Enter the value of n and r \n");
    fflush(stdout); fflush(stdin);
    scanf("%i", &n);

    fflush(stdout); fflush(stdin);
    scanf("%i", &r);

    printf("[%i]C[%i] ==> %i\n", n, r, NCR(n, r));
    printf("[%i]P[%i] ==> %i\n", n, r, NPR(n, r));
}

int NCR(int n, int r){
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int NPR(int n, int r){
    return factorial(n) / factorial(n-r);
}

long long int factorial(int num){
    int ret = 1;
    while(num){
        ret *= num;
        num--;
    }
    return ret;
}
