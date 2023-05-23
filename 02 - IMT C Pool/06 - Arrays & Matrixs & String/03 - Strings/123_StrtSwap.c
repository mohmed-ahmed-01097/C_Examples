#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

void StrSwap(char*, char*);
void StrCopy(char*, char*);

void main(void){
    char str1[MAX_LENGTH], str2[MAX_LENGTH];

    printf("Enter first  string : \n");
    fflush(stdout); fflush(stdin);
    gets(str1);

    printf("Enter second string : \n");
    fflush(stdout); fflush(stdin);
    gets(str2);

    StrSwap(str1, str2);
    printf("swapped : [%s] [%s]\n", str1, str2);

}


void StrSwap(char* str1, char* str2){
    char temp[MAX_LENGTH];
    StrCopy(temp, str1);
    StrCopy(str1, str2);
    StrCopy(str2, temp);
}

void StrCopy(char* str1, char* str2){
    for( ; *str2 ; str1++, str2++){
        *str1 = *str2;
    }
    *str1 = *str2;
}
