#include <stdio.h>

void main(void){
    int ch;

    printf("Enter any character : ");
    fflush(stdout); fflush(stdin);
    scanf("%c", &ch);

    printf("%c is [%s]\n", ch
           , (ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')? "Alphabets":"Not Alphabets");
}
