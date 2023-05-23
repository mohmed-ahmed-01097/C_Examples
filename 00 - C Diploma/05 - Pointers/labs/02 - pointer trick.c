#include <stdio.h>


int main (void)
{

    int x = 5, y = 7, z;
    printf("x at Location %#X contains %i\r\n", &x, x);
    printf("y at Location %#X contains %i\r\n", &y, y);
    printf("z at Location %#X contains %i\r\n", &z, z);

	printf("/**************************************************************/\n\r");
    int *ptr_x = &x;
    printf("x address = %#X , ptr_x  = %#X\n\r", &x, ptr_x);
    printf("x   value = %i  , *ptr_x = %i\n\r", x, *ptr_x);

    *ptr_x = 14;
    printf("*ptr_x = 14;\n\r");
    printf("x address = %#X , ptr_x  = %#X\n\r", &x, ptr_x);
    printf("x   value = %i  , *ptr_x = %i\n\r", x, *ptr_x);

    ptr_x = &y;
    printf("ptr_x = &y;\n\r");
    printf("x address = %#X , ptr_x  = %#X\n\r", &x, ptr_x);
    printf("x   value = %i  , *ptr_x = %i\n\r", x, *ptr_x);
    printf("y address = %#X , ptr_x  = %#X\n\r", &y, ptr_x);
    printf("y   value = %i  , *ptr_x = %i\n\r", y, *ptr_x);

    int** ptr_ptr_x = &ptr_x;
    printf("ptr_ptr_x = &pttr_x;\n\r");
    printf("x address = %#X , ptr_x  = %#X , ptr_ptr_x  = %#X\n\r", &x, ptr_x, ptr_ptr_x);
    printf("x   value = %i  , *ptr_x = %i , *ptr_ptr_x  = %i\n\r", x, *ptr_x, *ptr_ptr_x);
    printf("y address = %#X , ptr_x  = %#X ,*ptr_ptr_x  = %#X\n\r", &y, ptr_x, *ptr_ptr_x);
    printf("y   value = %i  , *ptr_x = %i , **ptr_ptr_x  = %i\n\r", y, *ptr_x, **ptr_ptr_x);

    *ptr_ptr_x = &z;
    *ptr_x = 23;
    printf("*ptr_ptr_x = &z;\n\r");
    printf("*ptr_x = 23;\n\r");
    printf("x address = %#X , ptr_x  = %#X , ptr_ptr_x  = %#X\n\r", &x, ptr_x, ptr_ptr_x);
    printf("x   value = %i  , *ptr_x = %i , *ptr_ptr_x  = %i\n\r", x, *ptr_x, *ptr_ptr_x);
    printf("y address = %#X , ptr_x  = %#X ,*ptr_ptr_x  = %#X\n\r", &y, ptr_x, *ptr_ptr_x);
    printf("y   value = %i  , *ptr_x = %i , **ptr_ptr_x  = %i\n\r", y, *ptr_x, **ptr_ptr_x);
    printf("z address = %#X , ptr_x  = %#X ,*ptr_ptr_x  = %#X\n\r", &z, ptr_x, *ptr_ptr_x);
    printf("z   value = %i  , *ptr_x = %i , **ptr_ptr_x  = %i\n\r", z, *ptr_x, **ptr_ptr_x);


    ptr_x = 0;
    printf("ptr_x = 0;\n\r");
    //*ptr_x = 10;
    printf("*ptr_x = 10;\t will crash the program\n\r");

	printf("/**************************************************************/\n\r");
	char* ptr_s8 = 0;
	short int* ptr_s16 = 0;
	long int* ptr_s32 = 0;

	printf("ptr_s8 = %#X\tptr_s16 = %#X\tptr_s32 = %#X\n\r", ptr_s8, ptr_s16, ptr_s32);
	printf("ptr_s8 = %#X\tptr_s16 = %#X\tptr_s32 = %#X\n\r", ++ptr_s8, ++ptr_s16, ++ptr_s32);

	printf("/**************************************************************/\n\r");
	unsigned char num_arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	ptr_s8 = num_arr;
	ptr_s16 = num_arr;
	ptr_s32 = num_arr;

	for(int i = 0 ; i<(sizeof(num_arr)/sizeof(unsigned char)) ; i++){
        printf("ptr_s8 = %#04X\t", *ptr_s8++);
        if(i){
            if(i%2)    printf("ptr_s16 = %#06X\t", *ptr_s16++);
            if(i%4 == 3)    printf("ptr_s32 = %#010X\t", *ptr_s32++);
        }
        printf("\r\n");
	}

	printf("/**************************************************************/\n\r");
	int arr[10] = {5 , 8 , 7 , 9 , 10 , 81 , 45 , 45 ,12};
	int* ptr = arr ;

	ptr = &arr[0];
	int sum  = 0;
	for (int i = 0 ; i < 10; i++)
	{
		//sum += *(ptr+i);
		sum += ptr[i];
		printf("sum = %3i\tptr[%i] = %2i\r\n", sum, i, ptr[i]);
	}

	arr[1]  == *(ptr + 1) == ptr[1];
	printf("sum = %i \n" , sum);

	printf("/**************************************************************/\n\r");
    char name[10] = "Ahmed";
    char *namePtr = "Ali";
	printf("%s\n" , name);
	printf("%s\n" , namePtr);

	printf("Enter first name :");
	fflush(stdout); fflush(stdin);
	scanf("%s" , name);

    /** will crash the program **/
	//namePtr[1] = 'm';
	//printf("Enter Second name :");
	//fflush(stdout); fflush(stdin);
	//scanf("%s" , namePtr+1);

	printf("[%s] [%s]\n\n" , name , namePtr);

	printf("/**************************************************************/\n\r");

}
