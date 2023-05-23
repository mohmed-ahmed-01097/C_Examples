#include <stdio.h>

#define INT_MIN         0x80000000

#define MAX_LENGTH      50

void EnterArray(int*, int);
void RotateArray(int*, int, int);
void PrintArray(int*, int);

void main(void){
    int rot, size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    printf("Enter number of time to left rotate :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &rot);

    printf("\nArray before rotation : ");
    PrintArray(arr, size);

    RotateArray(arr, size, rot);
    printf("\nArray after  rotation : ");
    PrintArray(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void RotateArray(int* arr, int size, int rot){
    size--;
    for(int i = 0 ; i<rot ; i++){
        int temp = arr[0];
        for(int j = 0 ; j<size ; j++){
            arr[j]=arr[j+1];
        }
        arr[size] = temp;
    }
}


void PrintArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf(" %i ", arr[i]);
    }
}
