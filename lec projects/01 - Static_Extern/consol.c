#include <stdio.h>
#include "consol.h"

unsigned int num = 10;

static void vidPrintAhmed(void){
    printf("\tAhmed\n\r");
}
static void vidPrintMohamed(void){
    printf("\tMohamed\n\r");
}
void vidPrintNames(void){
    printf(" Welcome !\n\r");
    vidPrintAhmed();
    vidPrintMohamed();
}
void vidPrintNUM(void){
    printf("The Extern Number = %d\n\r", num++);
}
