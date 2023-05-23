#include <stdio.h>

#define INT_MIN         0x80000000

#define MAX_LENGTH      50

void EnterArray(int*, int);
void PrintTotal(int*, int);
void PrintArray(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    PrintTotal(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void PrintTotal(int* arr, int size){
    int even[MAX_LENGTH], size_even = 0;
    int odd [MAX_LENGTH], size_odd  = 0;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]%2){
            odd[size_odd++] = arr[i];
        }else{
            even[size_even++] = arr[i];
        }
    }
    printf("\neven elements : ");
    PrintArray(even, size_even);
    printf("\nodd  elements : ");
    PrintArray(odd , size_odd);
}


void PrintArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf(" %i ", arr[i]);
    }
}
