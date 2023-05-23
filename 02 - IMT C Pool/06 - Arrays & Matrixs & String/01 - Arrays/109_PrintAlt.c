#include <stdio.h>

#define MAX_LENGTH      50

void EnterArray(int*, int);
void PrintAlt(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    printf("Alternate element of a given array :");
    PrintAlt(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void PrintAlt(int* arr, int size){
    int sum = 0;
    for(int i = 0 ; i<size ; i+=2){
        printf(" %i ", arr[i]);
    }
}
