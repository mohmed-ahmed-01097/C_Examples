#include <stdio.h>

void main(void){
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII value of %c = %i", ch, ch);
}
