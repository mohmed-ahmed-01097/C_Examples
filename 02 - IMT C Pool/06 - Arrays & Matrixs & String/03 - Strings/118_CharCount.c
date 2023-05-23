#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

void PrintCharCount(char*);

void main(void){
    char str[MAX_LENGTH];

    printf("Enter a string : \n");
    fflush(stdout); fflush(stdin);
    gets(str);

    PrintCharCount(str);

}

void PrintCharCount(char* str){
    int vol_num = 0;
    int cns_num = 0;
    int dig_num = 0;
    int spc_num = 0;

    while(*str){
        if((*str) >= 'a' && (*str) <= 'z' ||(*str) >= 'A' && (*str)<= 'Z'){
            switch((*str)){
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    vol_num++;
                    break;
                default:
                    cns_num++;
            }
        }else if((*str) >= '0' && (*str) <= '9'){
            dig_num++;
        }else if((*str) == ' '){
            spc_num++;
        }
        str++;
    }

    printf("Vowels : %i\n", vol_num);
    printf("Consts : %i\n", cns_num);
    printf("Digits : %i\n", dig_num);
    printf("Spaces : %i\n", spc_num);
}
