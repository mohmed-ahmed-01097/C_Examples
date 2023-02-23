#include <stdio.h>

void main(void){

	int i, j, rows ;
	int num = 1 ;

	printf("Enter the number of rows of floyd's triangle to print : ") ;
	scanf("%d", &rows) ;

	for (i=0 ; i<rows ; i++){
        for (j=0 ; j<i ; j++){
            printf("%03d ", num) ;
			num++ ;
        }
        printf("\n") ;
	}

}
