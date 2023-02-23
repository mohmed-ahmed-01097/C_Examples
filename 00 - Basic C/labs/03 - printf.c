#include <stdio.h>
#define MSG         "Hello World"

void main (){

	printf("\n--------------------------------------------------------\n");
	printf("     *\n");
	printf("    ***\n");
	printf("   *****\n");
	printf("  *******\n");
	printf(" *********\n");
	printf("***********\n");

	printf("\n--------------------------------------------------------\n");
    printf("A\r\nB\r\nC\r\n");
    printf("\n--------------------------------------------------------\n");
    printf("Say \"Hello\"\n");
    printf("\n--------------------------------------------------------\n");
    printf("Welcome"    \
           " to New World\n");

    printf("\n--------------------------------------------------------\n");
    printf("\n\tVariable Width length\n");
    printf("Right justified : '%*c'\n",5,'a');
    printf("Left  justified : '%*c'\n",-5,'a');

    printf("\n--------------------------------------------------------\n");
    char num = printf("%s",MSG);
    printf("\nthe printf return int number = %d the character = %c\n", num, num);
    printf("\t[%20s]\n\t[%-20s]\n\t[%-20.*s]\n\t[%*.*s]\n",MSG,MSG,5,MSG,num,3,MSG);

    printf("\n--------------------------------------------------------\n");

}

