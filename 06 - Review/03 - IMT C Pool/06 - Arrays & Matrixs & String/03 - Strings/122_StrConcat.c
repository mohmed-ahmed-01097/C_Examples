#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

void StrConcat(char*, char*);

void main(void){
    char str1[MAX_LENGTH], str2[MAX_LENGTH];

    printf("Enter first  string : \n");
    fflush(stdout); fflush(stdin);
    gets(str1);

    printf("Enter second string : \n");
    fflush(stdout); fflush(stdin);
    gets(str2);

    StrConcat(str1, str2);

    printf("After Concatenation : [%s]\n", str1);

}

void StrConcat(char* str1, char* str2){
    while(*str1++);
    for(str1-- ; *str2 ; str1++, str2++){
        *str1 = *str2;
    }
    *str1 = *str2;
}
