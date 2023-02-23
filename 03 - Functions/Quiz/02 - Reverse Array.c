#include <stdio.h>
#include <string.h>

#define MAX_LENGTH          100
#define MAX(a,b)            ((a)>(b))?(a):(b)

void Enter_Array(float[], short);
void Print_Array(float[], short);
void Reverse_Array(float[], short);

void main(void){

    float firstArr[MAX_LENGTH];
    short sizeOfArr;

    printf("Enter the size of array: ");
    fflush(stdout); fflush(stdin);
    scanf("%hd", &sizeOfArr);
    printf("Array [%i]\n", sizeOfArr);

    Enter_Array(firstArr, sizeOfArr);

    printf("Array [%i] = ", sizeOfArr);
    Print_Array(firstArr, sizeOfArr);

    Reverse_Array(firstArr, sizeOfArr);

    printf("Reverse Array [%i] = ", sizeOfArr);
    Print_Array(firstArr, sizeOfArr);

}

void Enter_Array(float arr[], short size){
    for(int i = 0; i<size ; i++){
        printf("A[%02i] = ", i);
        //fflush(stdout); fflush(stdin);
        scanf("%f", &arr[i]);
    }
}

void Print_Array(float arr[], short size){
    printf("[");
    for(int i =0; i<size ; i++){
        printf(" %0.2f ", arr[i]);
    }
    printf("]\n\r");
}

void Reverse_Array(float arr[], short size){
    printf("Reversing...\n\r");
    float temp;
    for(int i = 0, j = size - 1; i<j ; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
