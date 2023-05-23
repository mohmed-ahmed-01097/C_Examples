#include <stdio.h>

#define MAX_LENGTH      50

void EnterArray(int*, int);
void PrintArray(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    PrintArray(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void PrintArray(int* arr, int size){
    printf("Element in array are : ");
    for(int i = 0 ; i<size ; i++){
        printf(" %i ", arr[i]);
    }
}
