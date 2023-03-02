#include <stdio.h>

typedef enum {jan=1,feb,mar,apr,may,jun,jul,aug,seb,oct,nov,dec}E_Month_t;

void main(void){

    E_Month_t num;

    printf("Enter the month number : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    switch(num){
        case jan:
            printf("%i is January", num);
            break;
        case feb:
            printf("%i is February", num);
            break;
        case mar:
            printf("%i is March", num);
            break;
        case apr:
            printf("%i is April", num);
            break;
        case may:
            printf("%i is May", num);
            break;
        case jun:
            printf("%i is June", num);
            break;
        case jul:
            printf("%i is July", num);
            break;
        case aug:
            printf("%i is August", num);
            break;
        case seb:
            printf("%i is September", num);
            break;
        case oct:
            printf("%i is October", num);
            break;
        case nov:
            printf("%i is November", num);
            break;
        case dec:
            printf("%i is December", num);
            break;
        default:
            printf("wrong Number");

    }

}
