#include <stdio.h>
#include <math.h>

void main(void){
    unsigned int num;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    printf("Factors of %5u:\n\t", num);
    int temp = sqrt(num);
    for(int i = 1; i<=temp ; i++){
        if((num%i) == 0)
            printf("%5u", i);
    }
    printf("\n\t");
    for(int i = num; i>=temp ; i--){
        if(num%i == 0)
            printf("%5u", i);
    }
}
