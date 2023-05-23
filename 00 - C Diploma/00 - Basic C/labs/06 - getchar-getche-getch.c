#include <stdio.h>
#include <conio.h>

void main(void){

    char ch;
    printf("[\t===getchar===\t]\n");
    printf("Choose your number format :\n");
    printf("(B)inary, \t(O)ctal, \t(H)ex :\t");
    ch = getchar();
    printf("the Enter char is %c\n",ch);

    printf("[\t===getche===\t]\n");
    printf("Choose your number format :\n");
    printf("(B)inary, \t(O)ctal, \t(H)ex :\t");
    switch(getche()){
        case 'B':
        case 'b':
            printf("\tBinary\n");
            break;
        case 'O':
        case 'o':
            printf("\tOctal\n");
            break;
        case 'H':
        case 'h':
            printf("\tHex\n");
            break;
        default:
            printf("\tWrong Choose\n");
    }

    printf("[\t===getche===\t]\n");
    printf("continue (y)?");
    if(getch()=='y')
        printf("\t True");
    else
        printf("\t false");

}
