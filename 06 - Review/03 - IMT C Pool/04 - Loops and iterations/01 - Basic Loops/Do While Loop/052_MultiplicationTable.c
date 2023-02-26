#include <stdio.h>
#include <conio.h>

void main(void){
    char i = 1, j = 1;

    printf("Multiplication Table\n");
    printf("------------------------------------------------------\n");
    do{
        i = 1;
        do{
            printf("%5i", i*j);

        }while(++i<=10);
        printf("\n");
    }while(++j<=12);
    printf("------------------------------------------------------\n");
}
