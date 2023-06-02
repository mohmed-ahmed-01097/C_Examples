#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){
    char arr[30];
    printf("your name ");
    fflush(stdout); fflush(stdin);
    scanf("%s" ,&arr);
    printf ("[%s]\n",arr);

    printf("your name ");
    fflush(stdout); fflush(stdin);
    scanf("%[a-Z]s" ,&arr); //get all uppercase only
    printf ("[%s]\n",arr);

    printf("your name ");
    fflush(stdout); fflush(stdin);
    scanf("%[^\n]s" ,&arr); //get until \n
    printf ("[%s]\n",arr);

    printf("your name ");
    fflush(stdout); fflush(stdin);
    gets(arr);
    printf ("[%s]\n",arr);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
