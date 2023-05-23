#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void get_Binary(int*);

void main(void){
    int num;

    printf("Choose your number format :\n");
    printf("(B)inary, \t(O)ctal, \t(H)ex :\t");
    switch(getche()){
        case 'B':
        case 'b':
            printf("\nBinary:\t 0b");
            //scanf("%b",&num);
            get_Binary(&num);
            break;
        case 'O':
        case 'o':
            printf("\nOctal:\t o");
            scanf("%o",&num);
            break;
        case 'H':
        case 'h':
            printf("\nHex:\t 0x");
            scanf("%x",&num);
            break;
        default:
            printf("\nWrong Choose");
            main();
            exit(1);
    }
    printf("\nthe decimal format = %d", num);
    printf("\ncontinue (y)?");

    if(getch()=='y'){
        main();
    }
}

void get_Binary(int* ptr_num){
    char ch;
    *ptr_num = 0;
    while((ch = getche()) != '\r'){
        if(ch<='1' && ch>='0'){
            *ptr_num <<= 1;
            *ptr_num  +=((ch - '0') ? 1 : 0);
            //printf("\n%d%c\t", *ptr_num,ch);
        }else{
            *ptr_num = 0;
            break;
        }
    }
}
