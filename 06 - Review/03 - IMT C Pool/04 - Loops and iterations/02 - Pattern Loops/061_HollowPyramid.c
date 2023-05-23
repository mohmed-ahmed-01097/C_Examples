#include <stdio.h>

void main(void){
    unsigned int row, col,type;

    printf("If you want to print hollow pyramid star pattern press(1) or inverted  press(2):");
    fflush(stdout); fflush(stdin);
    scanf("%u", &type);

    printf("Enter number of rows: ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &row);

    col = row * 2 -1;
    switch(type){
        case 1:
            for(int r = 1 ; r<=row ; r++){          // Row
                for(int c = 1 ; c<=col ; c++){      // Column
                    if(r==1 || c==r || c==(col-r+1))
                        printf(" *");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            break;
        case 2:
            for(int r = 1 ; r<=row ; r++){          // Row
                for(int c = 1 ; c<=col ; c++){      // Column
                    if(r==row|| c==(row+r-1) || c==(row-r+1) )
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
