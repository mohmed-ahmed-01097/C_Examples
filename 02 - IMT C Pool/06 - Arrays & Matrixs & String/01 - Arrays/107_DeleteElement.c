#include <stdio.h>

#define INT_MIN         0x80000000

#define MAX_LENGTH      50

void EnterArray(int*, int);
void DeleteArray(int*, int*);
void PrintArray(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    DeleteArray(arr, &size);
    PrintArray(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void DeleteArray(int* arr, int* size){
    int index;
    printf("Enter the element position :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &index);

    (*size)--;
    for(int i = index ; i<(*size) ; i++){
        arr[i] = arr[i+1];
    }
}

void PrintArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i : %i\n", i, arr[i]);
    }
}
