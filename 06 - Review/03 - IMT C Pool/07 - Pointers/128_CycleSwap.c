#include <stdio.h>

#define MAX_LENGTH      50

void DoCycleSwap(int*, int*, int*);

void main(void){
    int a, b, c;

    printf("Enter a, b, c respectively : \n");
    fflush(stdout); fflush(stdin);
    scanf("%i", &a);
    fflush(stdout); fflush(stdin);
    scanf("%i", &b);
    fflush(stdout); fflush(stdin);
    scanf("%i", &c);

    printf("Value before swap:\n");
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    printf("c = %i\n", c);

    DoCycleSwap(&a, &b, &c);

    printf("Value after  swap:\n");
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    printf("c = %i\n", c);

}


void DoCycleSwap(int* x1, int* x2, int* x3){
    int* temp = *x3;
    *x3 = *x2;
    *x2 = *x1;
    *x1 = temp;
}
