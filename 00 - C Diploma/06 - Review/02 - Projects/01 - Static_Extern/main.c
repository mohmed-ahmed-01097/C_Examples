#include <stdio.h>
#include "consol.h"

extern unsigned int num;

int main(void){
    vidPrintNames();
    vidPrintNUM();
    num = 20;
    vidPrintNUM();
    vidPrintNUM();
    vidPrintNUM();
    return 0;
}
