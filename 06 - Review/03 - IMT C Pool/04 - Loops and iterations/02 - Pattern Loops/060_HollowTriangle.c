#include <stdio.h>

void main(void){
    unsigned int row, col,type;

    printf("If you want to print:\n");
    printf("hollow inverted right triangle  press (1)\n");
    printf("hollow mirrored inverted right triangle press(2)\n");
    printf("hollow right triangle  press (3)\n");
    printf("hollow mirrored right triangle press(4)\n");
    fflush(stdout); fflush(stdin);
    scanf("%u", &type);

    printf("Enter number of rows: ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &row);

    switch(type){
        case 1:
            for(int r = 1 ; r<=row ; r++){          // Row
                for(int c = 1 ; c<=row ; c++){      // Column
                    if(c==1 || r==1 || c==(row-r+1))
                        printf(" *");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            break;
        case 2:
            for(int r = 1 ; r<=row ; r++){          // Row
                for(int c = 1 ; c<=row ; c++){      // Column
                    if(c==row || r==1 || c==r)
                        printf(" *");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            break;
        case 3:
            for(int r = 1 ; r<=row ; r++){          // Row
                for(int c = 1 ; c<=row ; c++){      // Column
                    if(c==1 || r==row || c==r)
                        printf(" *");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            break;
        case 4:
            for(int r = 1 ; r<=row ; r++){          // Row
                for(int c = 1 ; c<=row ; c++){      // Column
                    if(c==row || r==row || c==(row-r+1))
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
