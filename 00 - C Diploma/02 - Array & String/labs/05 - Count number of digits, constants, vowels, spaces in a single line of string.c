#include <stdio.h>
#include <ctype.h>

void  main(void){

    char str[100];
    short numDigit = 0, numVowel = 0, numConst = 0, numSpace = 0, numSymbol = 0;

    printf("Enter a string line :");
    fflush(stdout); fflush(stdin);
    gets(str);

    for(short i = 0; str[i] ; i++){
        if(isdigit(str[i])){
            numDigit++;
        }else if(isalpha(str[i])){
            switch(str[i]){
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
                numVowel++;
                break;
            default:
                numConst++;
        }

        }else if(isspace(str[i])){
            numSpace++;
        }else{
            numSymbol++;
        }
    }
    printf("Number of digits : %i\n", numDigit);
    printf("Number of Vowels : %i\n", numVowel);
    printf("Number of Const  : %i\n", numConst);
    printf("Number of spaces : %i\n", numSpace);
    printf("Number of symbol : %i\n", numSymbol);

}
