#include <stdio.h>

void sortArray(float arr[], int cnt);

void main(void){
    float numbers[100];
    int cnt;

    printf("Enter the size of array: ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &cnt);

    for(int i = 0 ; i<cnt ; i++){
        printf("%03i : ", i);
        fflush(stdout); fflush(stdin);
        scanf("%f", &numbers[i]);
    }

    sortArray(numbers, cnt);

    printf("[");
    for(int i = cnt ; i-- ; )
        printf(" %0.2f ", numbers[i]);
    printf("]");
}

void sortArray(float arr[], int cnt){
    float temp;
    for(int i = 0; i<(cnt-1) ; i++){
        for(int j = i+1 ; j<cnt ; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
