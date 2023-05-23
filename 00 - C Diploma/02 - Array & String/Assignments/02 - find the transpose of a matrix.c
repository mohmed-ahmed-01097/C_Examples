#include <stdio.h>

void  main(void){

    int mat1[100][100], mat2[100][100], temp;
    int row, col;

    printf("Enter the number of row :");
    scanf("%i", &row);
    printf("Enter the number of column :");
    scanf("%i", &col);

    for(int i = 0; i<row ; i++){
        for(int j = 0; j<col ; j++){
            printf("arr[%i][%i]", i, j);
            scanf("%i", &mat1[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i<row ; i++){
        for(int j = 0; j<col ; j++){
            mat2[j][i] = mat1[i][j];
            printf("%03i\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(int i = 0; i<col ; i++){
        for(int j = 0; j<row ; j++){
            printf("%03i\t", mat2[i][j]);
        }
        printf("\n");
    }

}
