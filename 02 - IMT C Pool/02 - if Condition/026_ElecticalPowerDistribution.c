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

    if(units<=200){
        charge = 0.5 * units;
    }else if(units>200 && units<=400){
        charge = 100 + 0.65 * (units-200);
    }else if(units>400 && units<=600){
        charge = 230 + 0.80 * (units-400);
    }else if(units>600){
        charge = 390 + 1.00 * (units-600);
    }

    printf("Customer No. : %i \t Charges = %0.2f", customer, charge);
}
