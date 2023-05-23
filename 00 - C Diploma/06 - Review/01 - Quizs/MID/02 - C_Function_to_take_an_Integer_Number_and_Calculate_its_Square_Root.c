#include <stdio.h>
#include <math.h>
#include "LBTY_CFG.h"

void main(void){

    f32 f32UserNum;
	printf("Enter your Number : ");
	fflush(stdout); fflush(stdin);
	scanf("%f", &f32UserNum);

    printf("----------------------------------------------------\n");
    printf("The Square root of the number : %0.4f\n", sqrt(f32UserNum));
    printf("----------------------------------------------------\n");

}


