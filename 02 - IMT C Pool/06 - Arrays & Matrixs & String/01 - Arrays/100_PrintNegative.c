#include <stdio.h>

#define MAX_LENGTH      50

void EnterArray(int*, int);
void PrintNegative(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    PrintNegative(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void PrintNegative(int* arr, int size){
    printf("All negative element in array are : ");
    for(int i = 0 ; i<size ; i++){
        if(arr[i]<0)
            printf(" %i ", arr[i]);
    }
}
