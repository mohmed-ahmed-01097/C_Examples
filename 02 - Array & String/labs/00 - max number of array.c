#include <stdio.h>

void main(void){
    float arr[100], max;
    int cnt;

    printf("Enter the size of array: ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &cnt);

    for(int i = 0 ; i<cnt ; i++){
        printf("\n\r%03i : ", i);
        fflush(stdout); fflush(stdin);
        scanf("%f", &arr[i]);
        if(i){
            if(max<arr[i]){
                max = arr[i];
            }
        }else{
            max = arr[i];
        }
    }
    printf("\n\rthe max number = %0.2f", max);
}
