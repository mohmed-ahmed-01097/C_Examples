#include <stdio.h>

#define INT_MIN         0x80000000

#define MAX_LENGTH      50

void EnterArray(int*, int);
void Printlargest(int*, int);

void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    Printlargest(arr, size);

}

void EnterArray(int* arr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }
}

void Printlargest(int* arr, int size){
    int max1 = INT_MIN;
    int max0 = INT_MIN;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]>max0){
            if(arr[i]>max1){
                max0 = max1;
                max1 = arr[i];
            }else{
                max0 = arr[i];
            }
        }
    }
    printf("First  largest : %i \n", max1);
    printf("Second largest : %i \n", max0);
}





