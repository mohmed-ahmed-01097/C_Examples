#include <stdio.h>

void  main(void){
    char str[100], ch;
    int cnt = 0;

    printf("Enter your string: ");
    fflush(stdout); fflush(stdin);
    gets(str);

    printf("Enter the character : ");
    scanf("%c", &ch);

    printf("\n your string : [%s]\n", str);
    printf("\n[");
    for(int i = 0; str[i]!= '\0' ; i++){
        if(str[i] == ch){
            printf(" %03i ", i);
            cnt++;
        }
    }
    printf("]\n");
    if(cnt)
        printf("the character is exist %i times", cnt);
    else
        printf("the character is not exist");
}
