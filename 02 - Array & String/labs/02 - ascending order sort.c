#include <stdio.h>

void main(void){
    float arr[100];
    int cnt;

    printf("Enter the size of array: ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &cnt);

    for(int i = 0 ; i<cnt ; i++){
        printf("\n\r%03i : ", i);
        fflush(stdout); fflush(stdin);
        scanf("%f", &arr[i]);
    }
    float temp;
    for(int i = 0; i<(cnt-1) ; i++){
        for(int j = i+1 ; j<cnt ; j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("[");
    for(int i = 0 ; i<cnt ; i++)
        printf(" %0.2f ", arr[i]);
    printf("]");
}
