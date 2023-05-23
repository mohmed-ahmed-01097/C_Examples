#include <stdio.h>

#define MAX_LENGTH      50
#define INT_MAX         0x7FFFFFFF
#define INT_MIN         0x80000000

void EnterArray(int*, int);
void PrintMAXDif(int*, int);
void main(void){
    int size, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &size);

    EnterArray(arr, size);
    PrintMAXDif(arr, size);

}

void EnterArray(int* ptr, int size){
    for(int i = 0 ; i<size ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", (ptr+i));
    }
}

void PrintMAXDif(int* ptr, int size){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0 ; i<size ; i++){
        if(*(ptr+i)>max){
            max = *(ptr+i);
        }
        if(*(ptr+i)<min){
            min = *(ptr+i);
        }
    }
    printf("Maximum difference between 2 element is : %i\n", max - min);
}
