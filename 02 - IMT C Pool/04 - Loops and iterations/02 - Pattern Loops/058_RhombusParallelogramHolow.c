#include <stdio.h>

void main(void){
    unsigned int row, col,type;

    printf("If you want to print rhombus (1) or parallelogram press(2):");
    fflush(stdout); fflush(stdin);
    scanf("%u", &type);

    switch(type){
        case 1:
            printf("Enter number of rows: ");
            fflush(stdout); fflush(stdin);
            scanf("%u", &row);

            col = row;

            break;
        case 2:
            printf("Enter number of rows: ");
            fflush(stdout); fflush(stdin);
            scanf("%u", &row);

            printf("Enter number of columns: ");
            fflush(stdout); fflush(stdin);
            scanf("%u", &col);

            break;
        default:
            printf("Wrong type");
            row = 0;
            col = 0;
    }

    for(int r = 1 ; r<=row ; r++){          // Row
        for(int i = row - r ; i-- ; )
            printf("  ");
        for(int c = 1 ; c<=col ; c++)       // Column
            if(c==1 || c==col || r==1 || r==row)
                printf(" *");
            else
                printf("  ");
        printf("\n");
    }
}
