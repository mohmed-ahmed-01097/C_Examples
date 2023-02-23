#include <stdio.h>

void  main(void){

    int cnt;
    float num, sum = 0;

    printf("Enter the count of number : ");
    scanf("%i",&cnt);

    for(int i = 0; i<cnt ; i++){
        printf("No.%i : ", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("the average : %0.2f", sum/cnt);

}
