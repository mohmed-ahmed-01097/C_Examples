#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

void StrReverse(char*, char*);
int StrLength(char*);

void main(void){
    char str1[MAX_LENGTH], str2[MAX_LENGTH];

    printf("Enter first  string : \n");
    fflush(stdout); fflush(stdin);
    gets(str1);

    StrReverse(str2, str1);
    printf("[%s] Reversed [%s]\n", str1, str2);

}

void StrReverse(char* str1, char* str2){
    int len = StrLength(str2);
    str2 += len-1;
    for(int i = 0 ; i<len ; i++, str2--, str1++){
        *str1 = *str2;
    }
    *str1 = '\0';
}

int StrLength(char* str){
    int ret = 0;
    for( ; *str ; str++){
        ret++;
    }
    return ret;
}
