#include <stdio.h>

void main (){
    char name[20];

    printf("Enter Your Name: gets()");
    gets(name);
    printf("%s\n", name);

    fflush(stdout);
    fflush(stdin);

    printf("Enter Your Name: scanf()");
    scanf("%s",name);
    printf("%s\n", name);

}
