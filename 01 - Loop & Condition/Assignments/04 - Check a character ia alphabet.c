#include <stdio.h>

void  main(void){
    char ch;
    printf("Enter Character :");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z' || ch>='A' && ch<='Z')
        printf("\t[%c] is Character.", ch);
    else
        printf("\t[%c] is not Character.", ch);
}
