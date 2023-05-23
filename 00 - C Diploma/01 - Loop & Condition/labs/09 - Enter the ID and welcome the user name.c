#include <stdio.h>

void main(void){
    int ID;
    printf("Enter Your ID ...:");
    fflush(stdout); fflush(stdin);
    scanf("%i", &ID);

    switch(ID){
        case 1111:
            printf("\tWelcome Ahmed");
            break;
        case 2222:
            printf("\tWelcome Abdellah");
            break;
        case 3333:
            printf("\tWelcome Sayed");
            break;
        case 4444:
            printf("\tWelcome Ali");
            break;
        case 5555:
            printf("\tWelcome Hassan");
            break;
        case 6666:
            printf("\tWelcome Samy");
            break;
        default:
            printf("Not Found");
    }
}
