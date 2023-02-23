#include <stdio.h>

void tryToModify(int, char[]);

void main(void){
    int x = 10;
    char str[] = "Good";

    printf("x = %i\t, String = %s\r\n", x, str);
    tryToModify(x,str);
    printf("x = %i\t, String = %s\r\n", x, str);

}

void tryToModify(int x, char str[]){
    x++;
    str[0]--;
}
