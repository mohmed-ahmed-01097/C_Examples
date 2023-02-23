#include <stdio.h>

int Reverse(void);

void  main(void){

    printf("Enter the String ");
    fflush(stdout); fflush(stdin);
    Reverse();

}

int Reverse(void){

    char ch;
    scanf("%c", &ch);
    if(ch != '\n'){
        Reverse();
        printf("%c", ch);
    }
}
