#include <stdio.h>

#define MAX_LENGTH      100

void EnterMatrix(int arr[][MAX_LENGTH], int r, int c);
void PrintSum(int arr1[][MAX_LENGTH], int arr2[][MAX_LENGTH], int r1, int c1, int r2, int c2);

void main(void){
    int row1, col1, row2, col2;
    int arr1[MAX_LENGTH][MAX_LENGTH];
    int arr2[MAX_LENGTH][MAX_LENGTH];

    printf("Enter 1st number of rows    :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &row1);
    printf("Enter 1st number of columns :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &col1);
    printf("Enter 2nd number of rows    :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &row2);
    printf("Enter 2nd number of columns :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &col2);

    if(col1 == row2){
        printf("Enter elements of first  Matrix :\n", arr1);
        EnterMatrix(arr1, row1, col1);
        printf("Enter elements of second Matrix :\n");
        EnterMatrix(arr2, row2, col2);

        printf("\nMultiplication of two matrix is :\n");
        PrintSum(arr1, arr2, row1, col1, row2, col2);
    }else{
        printf("Wrong Length 1st Column must equal 2nd Row ");
    }

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
void PrintSum(int arr1[][MAX_LENGTH], int arr2[][MAX_LENGTH], int r1, int c1, int r2, int c2){
    int mul[r1][c2];
    for(int i = 0 ; i<r1 ; i++){
        for(int j = 0 ; j<c2 ; j++){
            mul[i][j] = 0;
            for(int k = 0 ; k<c1 ; k++){
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf("%5i",mul[i][j]);
        }
        printf("\n");
    }

}
