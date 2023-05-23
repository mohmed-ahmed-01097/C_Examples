#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

int StrComp(char*, char*);
void StrSwap(char*, char*);
void StrCopy(char*, char*);

void main(void){
    int num;
    char str[MAX_LENGTH][MAX_LENGTH];

    printf("Enter number of strings : \n");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    for(int i = 0; i<num ; i++){
        printf("Enter %02i string : ", i);
        fflush(stdout); fflush(stdin);
        gets(str[i]);
    }

    for(int i = 0; i<(num-1) ; i++){
        for(int j = i+1; j<num ; j++){
            if(StrComp(str[i], str[j]) < 0)
                StrSwap(str[i], str[j]);
        }
    }

    printf("In Dictionary Order\n");
    for(int i = 0; i<num ; i++){
        printf("[%s]\n", str[i]);
    }

}

int StrComp(char* str1, char* str2){
    int ret = 0;
    for( ; *str1 || *str2 ; str1++, str2++){
        if(*str1 == *str2){
            ret = 0;
            continue;
        }else if(*str1 > *str2){
            ret = -1;
            break;
        }else{
            ret = 1;
            break;
        }
    }
    return ret;
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
