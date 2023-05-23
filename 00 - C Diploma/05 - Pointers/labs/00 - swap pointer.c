#include <stdio.h>

void swap(int **, int **);

void main (void){
	int x = 5 , y = 6;
	int *p = &x , *q = &y;

	printf("x = %i\n" , x);
	printf("y = %i\n" , y);

	printf("p = %p\n" , p);
	printf("q = %p\n" , q);

	printf("*p = %i\n" , *p);
	printf("*q = %i\n" , *q);

	printf ("\n\nSwapping pointers \n");
	swap(&p , &q);

	printf("x = %i\n" , x);
	printf("y = %i\n" , y);

	printf("p = %p\n" , p);
	printf("q = %p\n" , q);

	printf("*p = %i\n" , *p);
	printf("*q = %i\n" , *q);

}

void swap(int **p , int **q){
	int *temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

