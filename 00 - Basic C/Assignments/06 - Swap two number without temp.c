#include <stdio.h>

void main(void){
    int x1, x2;
    int temp;

    printf("Enter the Two number (a b):");
    fflush(stdout); fflush(stdin);

    scanf("%d %d",&x1, &x2);
    fflush(stdout); fflush(stdin);

    printf("\nBefore Swap :");
    printf("\na= %-10d, b= %-10d",x1,x2);

    x1 += x2;
    x2 = x1 - x2;
    x1 = x1 - x2;

    printf("\nAfter Swap :");
    printf("\na= %-10d, b= %-10d",x1,x2);
}


