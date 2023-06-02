#include <stdio.h>
#include <stdint.h>
#include <conio.h>

//#define SCANF
#define SCAN_SET
//#define GETS

int main(void){

    char arr[30];
#if defined(SCANF)
    printf("your name ");
    fflush(stdout); fflush(stdin);
    scanf("%s" ,&arr);
    printf ("[%s]\n",arr);
#elif defined(SCAN_SET)
    printf("your name ");
    fflush(stdout); fflush(stdin);
    scanf("%[a-Z]s" ,&arr); //get all uppercase only
    printf ("[%s]\n",arr);

    printf("your name ");
    fflush(stdout); fflush(stdin);
    scanf("%[^\n]s" ,&arr); //get until \n
    printf ("[%s]\n",arr);
#elif defined(GETS)
    printf("your name ");
    fflush(stdout); fflush(stdin);
    gets(arr);
    printf ("[%s]\n",arr);
#endif
    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
