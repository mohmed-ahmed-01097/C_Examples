#include <stdio.h>
#include <string.h>

#define MAX_LENGTH      50

int CharFreq(char*, char);

void main(void){
    char ch;
    char str[MAX_LENGTH];

    printf("Enter a string : \n");
    fflush(stdout); fflush(stdin);
    gets(str);

    printf("Enter a character to find the frequency : \n");
    fflush(stdout); fflush(stdin);
    scanf("%c", &ch);

    printf("Frequency of %c = %i", ch, CharFreq(str, ch));

}

int CharFreq(char* str, char ch){
    int ret = 0;
    strupr(str);
    if(ch<='A')
        ch += 'A'-'a';
    while(*str){
        if((*str) == ch){
            ret++;
        }
        str++;
    }
    return ret;
}
