#include <stdio.h>

#define MAX_LENGTH      100

void EnterMatrix(int arr[][MAX_LENGTH], int r, int c);
void PrintSum(int arr1[][MAX_LENGTH], int arr2[][MAX_LENGTH], int r, int c);

void main(void){
    int row, col;
    int arr1[MAX_LENGTH][MAX_LENGTH];
    int arr2[MAX_LENGTH][MAX_LENGTH];

    printf("Enter number of rows    :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &row);
    printf("Enter number of columns :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &col);

    printf("Enter elements of first  Matrix :\n", arr1);
    EnterMatrix(arr1, row, col);
    printf("Enter elements of second Matrix :\n");
    EnterMatrix(arr2, row, col);

    printf("\nSum of two matrix is :\n");
    PrintSum(arr1, arr2, row, col);

}

void EnterMatrix(int arr[][MAX_LENGTH], int r, int c){
    for(int i = 0 ; i<r ; i++){
        for(int j = 0; j<c ; j++){
            printf("[%02i][%02i] : ", i, j);
            fflush(stdout); fflush(stdin);
            scanf("%i", &arr[i][j]);
        }
    }
}
void PrintSum(int arr1[][MAX_LENGTH], int arr2[][MAX_LENGTH], int r, int c){
    int sum[MAX_LENGTH][MAX_LENGTH];
    for(int i = 0 ; i<r ; i++){
        for(int j = 0; j<c ; j++){
            printf("%5i",arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

}
