#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

void StrCopy(char*, char*);

void main(void){
    char str1[MAX_LENGTH], str2[MAX_LENGTH];

    printf("Enter first  string : \n");
    fflush(stdout); fflush(stdin);
    gets(str1);

    StrCopy(str2, str1);

    printf("String s2 : [%s]\n", str2);

}

void StrCopy(char* str1, char* str2){
    for( ; *str2 ; str1++, str2++){
        *str1 = *str2;
    }
    *str1 = *str2;
}
