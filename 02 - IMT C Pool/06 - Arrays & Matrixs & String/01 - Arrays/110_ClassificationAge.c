#include <stdio.h>

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
    int baby   = 0;
    int school = 0;
    int adult  = 0;
    for(int i = 0 ; i<size ; i++){
        if(arr[i] <= 5){
            baby++;
        }else if(arr[i]<=17){
            school++;
        }else{
            adult++;
        }
    }
    printf("Number of still a Baby     : %3i \n", baby);
    printf("Number of attending School : %3i \n", school);
    printf("Number of adult life       : %3i \n", adult);
}
