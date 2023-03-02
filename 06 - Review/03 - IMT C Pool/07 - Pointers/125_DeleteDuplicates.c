#include <stdio.h>

#define MAX_LENGTH      50

void EnterArray(int*, int);
void DeleteDuplicates(int*, int*);
void PrintArray(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    DeleteDuplicates(arr, &size);
    PrintArray(arr, size);

}

void EnterArray(int* ptr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", (ptr+i));
    }
}

void DeleteDuplicates(int* ptr, int* size){
    for(int i = 0 ; i<((*size)-1) ; i++){
        for(int j = i+1 ; j<(*size) ; j++){
            if(*(ptr+i) == *(ptr+j)){
                (*size)--;
                for(int k = j ; k<(*size) ; k++){
                    ptr[k] = ptr[k+1];
                }
            }
        }
    }
}

void PrintArray(int* ptr, int size){
    printf("Element in array are : ");
    for(int i = 0 ; i<size ; i++){
        printf(" %i ", *(ptr+i));
    }
}
