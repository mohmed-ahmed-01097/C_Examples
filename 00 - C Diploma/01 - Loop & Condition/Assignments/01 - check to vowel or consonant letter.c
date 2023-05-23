#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void main(void){
    char ch;
    printf("Enter your character : \t");
    ch = getche();
    if(isalpha(ch))
        switch(ch){
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
                printf("\t is Vowel.\n");
                break;
            default:
                printf("\t is consonant.\n");
        }
    else{
        printf("\tis not alphabetic.\n");
        if(ch == '\r')
            exit(1);
    }
    main();
}
