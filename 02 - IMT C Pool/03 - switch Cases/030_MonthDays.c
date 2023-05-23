#include <stdio.h>

void main(void){
    int month;

    printf("Enter month number (1-12): ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &month);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days");
            break;
        case 2:
            printf("28/29 Days");
            break;
        default:
            printf("Not Valid Number");
    }

}
