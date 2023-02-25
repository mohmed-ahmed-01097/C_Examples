#include <stdio.h>

void main(void){
    int num;

    printf("Enter any character : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    if(num)
        if(num>0)
            printf("%i is [Positive]\n", num);
        else
            printf("%i is [Negative]\n", num);
    else
        printf("Number is [Zero]\n");
}
