#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){
/*
David says , " Programming is fun !" 
**Conditions apply , "Offers valid until tomorrow"
C:\My computer\My folder
D:/My documents/My file
\ \ \ \ Today is holiday \ \ \ \
This is a triple quoted string """ This month has 30 days """
*/
    printf("David says , \" Programming is fun !\"\n");
    printf("**Conditions apply , \"Offers valid until tomorrow\"\n");
    printf("C:\\My computer\\My folder\n");
    printf("D:/My documents/My file\n");
    printf("\\ \\ \\ \\ Today is holiday \\ \\ \\ \\\n");
    printf("This is a triple quoted string \"\"\" This month has 30 days \"\"\"\n");

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
