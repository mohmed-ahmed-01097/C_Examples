#include <stdio.h>

#define INT_MIN         0x80000000

#define MAX_LENGTH      50

void EnterArray(int*, int);
void InsertArray(int*, int*);
void PrintArray(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    InsertArray(arr, &size);
    PrintArray(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void InsertArray(int* arr, int* size){
    int num, index;
    printf("Enter element to insert :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);
    printf("Enter the element position :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &index);

    for(int i = *size ; i>index ; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = num;
    (*size)++;
}

void PrintArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i : %i\n", i, arr[i]);
    }
}
