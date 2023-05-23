#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

void PrintAlph(char*);

void main(void){
    char str[MAX_LENGTH];

    printf("Enter a string : \n");
    fflush(stdout); fflush(stdin);
    gets(str);

    PrintAlph(str);
    printf("Output String : %s\n", str);

}

void PrintAlph(char* str){
    while(*str){
        if((*str) >= 'a' && (*str) <= 'z' || (*str) >= 'A' && (*str)<= 'Z'){
            str++;
            //printf("%c\n", *str);
        }else if((*str) == ' ' && *(str-1) != ' '){
            str++;
        }else{
            char* temp = str;
            while(*temp){
                *(temp) = *(temp+1);
                temp++;
            }
        }
    }
}
