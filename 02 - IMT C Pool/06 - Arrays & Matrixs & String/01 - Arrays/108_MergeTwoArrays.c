#include <stdio.h>

#define INT_MIN         0x80000000

#define MAX_LENGTH      50

void EnterArray(int*, int);
void SortArray (int*, int);
void SortArrays(int*, int, int*, int, int*);
void PrintArray(int*, int);

void main(void){
    int arr1[MAX_LENGTH], size1;
    int arr2[MAX_LENGTH], size2;
    int arr3[MAX_LENGTH * 2];

    printf("Enter Size of first  array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size1);
    EnterArray(arr1, size1);

    printf("Enter Size of second array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size2);
    EnterArray(arr2, size2);

    SortArrays(arr1, size1, arr2, size2, arr3);

    printf("Sorted Array : \n");
    PrintArray(arr3, size1+size2);
}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void SortArray (int* arr, int size){
    for(int i = 0 ; i<(size-1) ; i++){
        for(int j = i+1 ; j<size ; j++){
            if(arr[i]>arr[j]){
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
        }
    }
}

void SortArrays(int* arr1, int size1, int* arr2, int size2, int* arr3){
    SortArray(arr1, size1);
    SortArray(arr2, size2);

    for(int i = 0, j = 0, k = 0 ; i<(size1 + size2) ; i++){
        if(j>=size1){
            arr3[i] = arr2[k];
            k++;
        }else if(k>=size2){
            arr3[i] = arr1[j];
            j++;
        }else if(arr1[j]<arr2[k]){
            arr3[i] = arr1[j];
            j++;
        }else{
            arr3[i] = arr2[k];
            k++;
        }
    }
}


void PrintArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i : %4i\n", i, arr[i]);
    }
}




