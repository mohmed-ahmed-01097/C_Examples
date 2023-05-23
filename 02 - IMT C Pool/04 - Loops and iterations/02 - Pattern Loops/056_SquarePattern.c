#include <stdio.h>

void main(void){
    unsigned int row;

    printf("Enter number of rows: ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &row);

    for(int r = 1 ; r<=row ; r++){          // Row
        for(int c = 1 ; c<=row ; c++){      // Column
            if(c==1 || c==row || r==1 || r==row || c==r || c==(row-r+1))
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
}
