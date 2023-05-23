#include <stdio.h>

#define MAX_LENGTH      50

void EnterArray(int*, int);
void PrintSum(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    PrintSum(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void PrintSum(int* arr, int size){
    int sum = 0;
    for(int i = 0 ; i<size ; i++){
        sum += arr[i];
    }
    printf("Sum of Elements in array : %i ", sum);
}
