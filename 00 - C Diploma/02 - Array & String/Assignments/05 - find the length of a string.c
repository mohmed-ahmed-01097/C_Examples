#include <stdio.h>

void  main(void){
    char str[100];
    int cnt = 0;

    printf("Enter your string: ");
    fflush(stdout); fflush(stdin);
    gets(str);

    printf("\nthe No. of characters is %i character\n", printf("%s", str));

    for(int i = 0; str[i]!= '\0' ; i++)
        cnt++;

    if(cnt)
        printf("the No. of characters is %i character", cnt);
    else
        printf("Zero Character empty ");
}
