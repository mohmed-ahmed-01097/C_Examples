#include <stdio.h>

void main(void){
    unsigned int row, col,type;

    printf("If you want to print:\n");
    printf("solid right triangle  press (1)\n");
    printf("half diamond star pattern press (2)\n");
    printf("mirrored half diamond star pattern press(3)\n");
    printf("hollow right triangle  press (4)\n");
    fflush(stdout); fflush(stdin);
    scanf("%u", &type);

    printf("Enter number of rows: ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &row);

    switch(type){
        case 1:
            col = row * 2 - 1;
            for(int r = 1 ; r<=col ; r++){          // Row
                type = (r<=row)? r : (col - r+1);
                for(int c = (row - type) ; c-- ; ){
                    printf("  ");
                }
                for(int c = type*2-1 ; c-- ; ){      // Column
                    printf(" *");
                }
                printf("\n");
            }

            break;
        case 2:
            col = row * 2 - 1;
            for(int r = 1 ; r<=col ; r++){          // Row
                type = (r<=row)? r : (col - r+1);
                for(int c = type ; c-- ; ){      // Column
                    printf(" *");
                }
                printf("\n");
            }

            break;
        case 3:
            col = row * 2 - 1;
            for(int r = 1 ; r<=col ; r++){          // Row
                type = (r<=row)? r : (col - r+1);
                for(int c = (row - type) ; c-- ; ){
                    printf("  ");
                }
                for(int c = type ; c-- ; ){      // Column
                    printf(" *");
                }
                printf("\n");
            }

            break;
        case 4:
            col = row * 2;
            for(int r = 1 ; r<=col ; r++){          // Row
                type = (r<=row)? r-1 : (col - r);
                for(int c = (row - type) ; c-- ; ){
                    printf(" *");
                }
                for(int c = type * 2 ; c-- ; ){      // Column
                    printf("  ");
                }
                for(int c = (row - type) ; c-- ; ){      // Column
                    printf(" *");
                }
                printf("\n");
            }

            break;
        default:
            printf("Wrong type");
    }
}
