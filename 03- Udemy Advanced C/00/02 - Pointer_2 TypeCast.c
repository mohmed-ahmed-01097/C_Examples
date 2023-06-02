#include <stdio.h>
#include <stdint.h>
#include <conio.h>

long long int  g_data = 0xFFFEABCD11112345;

int main(void){
    char *pAddress1;
    pAddress1 = (char*)&g_data;
    printf("Value at address %p is : %x\n",pAddress1,*pAddress1);

    short *pAddress2;
    pAddress2 = (short*)&g_data;
    printf("Value at address %p is : %x\n",pAddress2,*pAddress2);

    int *pAddress3;
    pAddress3 = (int*)&g_data;
    printf("Value at address %p is : %x\n",pAddress3,*pAddress3);

    long long *pAddress4;
    pAddress4 = (long long*)&g_data;
    printf("Value at address %p is : %I64x\n",pAddress4,*pAddress4);

    char * ptr = &g_data;
    printf("[%p] = %#X\n", ptr, *ptr++);
    printf("[%p] = %#X\n", ptr, *ptr++);
    printf("[%p] = %#X\n", ptr, *(short*)ptr++);
    (short*)ptr++;
    printf("[%p] = %#X\n", ptr, *(int*)ptr);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
