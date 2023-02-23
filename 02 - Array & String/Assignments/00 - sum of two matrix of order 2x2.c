#include <stdio.h>

void  main(void){

    int mat1[2][2], mat2[2][2];
    int sum;

    for(int i = 0; i<2 ; i++)
        for(int j = 0; j<2 ; j++){
            printf("a[%i][%i] = ", i, j);
            scanf("%i", &mat1[i][j]);
        }

    printf("\n");
    for(int i = 0; i<2 ; i++)
        for(int j = 0; j<2 ; j++){
            printf("b[%i][%i] = ", i, j);
            scanf("%i", &mat2[i][j]);
        }

    printf("\n");
    for(int i = 0; i<2 ; i++)
        for(int j = 0; j<2 ; j++){
            mat1[i][j] += mat2[i][j];
            printf("sum[%i][%i] = %03i\n", i, j, mat1[i][j]);
        }

    printf("\n");
    for(int i = 0; i<2 ; i++)
        for(int j = 0; j<2 ; j++)
            sum += mat1[i][j];
    printf("the sum = %05i", sum);

}
