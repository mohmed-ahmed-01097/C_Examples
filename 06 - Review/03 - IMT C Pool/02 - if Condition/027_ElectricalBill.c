#include <stdio.h>

void main(void){
    int customer, units;
    float charge;

    printf("Enter Customer No. : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &customer);

    printf("Enter Consumed Units : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &units);

    if(units<=50){
        charge = 0.5 * units;
    }else if(units>50 && units<=150){
        charge = 25 + 0.75 * (units-50);
    }else if(units>150 && units<=250){
        charge = 100 + 1.20 * (units-150);
    }else if(units>250){
        charge = 220 + 1.50 * (units-250);
    }

    printf("Customer No. : %i \t Charges = %0.2f", customer, charge*1.20);
}
