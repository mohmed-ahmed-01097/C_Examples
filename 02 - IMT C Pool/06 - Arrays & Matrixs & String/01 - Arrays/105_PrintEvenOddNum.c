#include <stdio.h>

#define INT_MIN         0x80000000

#define MAX_LENGTH      50

void EnterArray(int*, int);
void PrintTotal(int*, int);

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
    int even = 0;
    int odd  = 0;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]%2){
            odd++;
        }else{
            even++;
        }
    }
    printf("Total even elements : %i \n", even);
    printf("Total odd  elements : %i \n", odd);
}
