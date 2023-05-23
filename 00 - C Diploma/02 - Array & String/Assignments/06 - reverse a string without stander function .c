#include <stdio.h>

void  main(void){
    char str[100];
    int cnt = 0;

    printf("Enter your string: ");
    fflush(stdout); fflush(stdin);
    gets(str);

    printf("String  : ");
    for(int i = 0, j = printf("%s",str)-1 ; i<j ; i++, j--){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("\nReverse : %s", str);

}
