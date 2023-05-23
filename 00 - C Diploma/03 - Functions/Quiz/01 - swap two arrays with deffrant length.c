#include <stdio.h>
#include <string.h>

#define MAX_LENGTH          100
#define MAX(a,b)            ((a)>(b))?(a):(b)

void Enter_Array(float[], short);
void Print_Array(float[], short);
void Swap_Array(float[], short*, float[], short*);

void main(void){

    float firstArr[MAX_LENGTH], secondArr[MAX_LENGTH];
    short sizeOfFirstArr, sizeOfSecondArr;    /** why not short or char **/

    printf("Enter the size of first array: ");
    fflush(stdout); fflush(stdin);
    scanf("%hd", &sizeOfFirstArr);
    printf("First Array [%i]\n", sizeOfFirstArr);

    Enter_Array(firstArr, sizeOfFirstArr);

    printf("Enter the size of second array: ");
    fflush(stdout); fflush(stdin);
    scanf("%hd", &sizeOfSecondArr);

    Enter_Array(secondArr, sizeOfSecondArr);

    printf("First Array [%i] = ", sizeOfFirstArr);
    Print_Array(firstArr, sizeOfFirstArr);
    printf("First Array [%i] = ", sizeOfSecondArr);
    Print_Array(secondArr, sizeOfSecondArr);

    Swap_Array(firstArr, &sizeOfFirstArr, secondArr, &sizeOfSecondArr);

    printf("First Array [%i] = ", sizeOfFirstArr);
    Print_Array(firstArr, sizeOfFirstArr);
    printf("First Array [%i] = ", sizeOfSecondArr);
    Print_Array(secondArr, sizeOfSecondArr);

}

void Enter_Array(float arr[], short size){
    for(int i = 0; i<size ; i++){
        printf("A[%02i] = ", i);
        fflush(stdout); fflush(stdin);
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

void Swap_Array(float arr1[], short *size1, float arr2[], short *size2){
    int max = MAX(*size1, *size2);
    float temp;
    for(int i = 0; i<max ; i++){
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    temp = *size1;
    *size1 = *size2;
    *size2 = (short)temp;
    printf("Swapping...\n\r");
}
