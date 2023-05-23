#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

int StrLn(char*);

void main(void){
    char str[MAX_LENGTH];

    printf("Enter a string : \n");
    fflush(stdout); fflush(stdin);
    gets(str);

    printf("Length of String : %i\n", StrLn(str));

}

int StrLn(char* str){
    int ret = 0;
    while(*str++){
        ret++;
    }
    return ret;
}
