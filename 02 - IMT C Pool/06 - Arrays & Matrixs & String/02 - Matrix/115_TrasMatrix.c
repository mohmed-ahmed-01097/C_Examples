#include <stdio.h>

#define MAX_LENGTH      100

void EnterMatrix(int arr[][MAX_LENGTH], int r, int c);
void PrinTrans(int arr[][MAX_LENGTH], int r, int c);
void PrintSum(int arr[][MAX_LENGTH], int r, int c);

void main(void){
    int row, col;
    int arr[MAX_LENGTH][MAX_LENGTH];

    printf("Enter number of rows    :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &row);
    printf("Enter number of columns :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &col);

    printf("Enter elements of  Matrix :\n");
    EnterMatrix(arr, row, col);

    printf("\nthe matrix is :\n");
    PrintSum(arr, row, col);
    printf("\nthe matrix is :\n");
    PrinTrans(arr, row, col);

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
void PrinTrans(int arr[][MAX_LENGTH], int r, int c){
    for(int i = 0 ; i<c ; i++){
        for(int j = 0; j<r ; j++){
            printf("%5i", arr[j][i]);
        }
        printf("\n");
    }

}

void PrintSum(int arr[][MAX_LENGTH], int r, int c){
    for(int i = 0 ; i<r ; i++){
        for(int j = 0; j<c ; j++){
            printf("%5i", arr[i][j]);
        }
        printf("\n");
    }

}
