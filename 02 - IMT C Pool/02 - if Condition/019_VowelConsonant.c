#include <stdio.h>

void main(void){
    char ch;

    printf("Enter any character : ");
    fflush(stdout); fflush(stdin);
    scanf("%c", &ch);

    if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'
       ||ch=='A'||ch=='E'||ch=='O'||ch=='I'||ch=='U')
        printf("%c is [Vowel]\n", ch);
    else
        printf("%c is [Consonant]\n", ch);
}
