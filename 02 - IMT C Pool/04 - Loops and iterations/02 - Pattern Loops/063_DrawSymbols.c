#include <stdio.h>

void main(void){
    unsigned int row, col,type;

    printf("If you want to print:\n");
    printf("right arrow   star pattern press (1)\n");
    printf("left  arrow   star pattern press (2)\n");
    printf("eight 8 digit star pattern press (3)\n");
    printf("heart symbol  star pattern press (4)\n");
    printf("  x   symbol  star pattern press (5)\n");
    fflush(stdout); fflush(stdin);
    scanf("%u", &type);

    printf("Enter number of rows: ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &row);

    switch(type){
        case 1:
            col = row * 2 - 1;
            for(int r = 1 ; r<=col ; r++){
                type = (r<=row)? r - 1 : (col - r);
                for(int c = type * 2 ; c-- ; ){
                    printf("  ");
                }
                for(int c = row - type ; c-- ; ){
                    printf(" *");
                }
                printf("\n");
            }

            break;
        case 2:
            col = row * 2 - 1;
            for(int r = 1 ; r<=col ; r++){
                type = (r<=row)? r-1 : (col - r);
                for(int c = (row - type)-1 ; c-- ; ){
                    printf("  ");
                }
                for(int c = row - type ; c-- ; ){
                    printf(" *");
                }
                printf("\n");
            }

            break;
        case 3:
            col = row * 2 - 1;
            for(int r = 1 ; r<=col ; r++){
                for(int c = 1; c<=row ; c++){
                    if(r==1 || r==row || r==col || c==1 || c==row)
                        printf(" *");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            break;
        case 4:
            col = row * 2 - 1;
            for(int r = row/2 ; r-- ; ){
                for(int c = r ; c-- ; )
                    printf("  ");
                for(int c = row - (r * 2) - 1 ; c-- ; )
                    printf(" *");
                for(int c = (r * 2) + 1 ; c-- ; )
                    printf("  ");
                for(int c = row - (r * 2) - 1 ; c-- ; )
                    printf(" *");
                for(int c = r ; c-- ; )
                    printf("  ");
                printf("\n");
            }
            for(int r = 0 ; r<row ; r++){
                for(int c = r ; c-- ; ){
                    printf("  ");
                }
                for(int c = col - r * 2 ; c-- ; ){
                    printf(" *");
                }
                printf("\n");
            }
            break;
        case 5:
            col = row * 2 - 1;
            for(int r = 1 ; r<=col ; r++){
                for(int c = 1; c<=col ; c++){
                    if(r==c || r==(col-c+1))
                        printf(" *");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            break;
        default:
            printf("Wrong type");
    }
}
