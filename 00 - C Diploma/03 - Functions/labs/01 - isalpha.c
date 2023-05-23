#include <stdio.h>

int is_alpha(char);

void  main(void){
    char ch;
    printf("Enter Character :");
    scanf("%c",&ch);
    if(is_alpha(ch))
        printf("is Character.");
    else
        printf("is not Character.");
}

int is_alpha(char ch){
    if(ch>='a'&& ch<='z' || ch>='A' && ch<='Z')
        return 1;
    return 0;
}
