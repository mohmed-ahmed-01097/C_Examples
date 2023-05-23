#include <stdio.h>

void main(void){
    int salary;
    float gross, hra, da;

    printf("Enter basic salary of an employee: ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &salary);

    if(salary<=10000){
        hra = salary * 0.2;
        da  = salary * 0.8;
    }else if(salary<10000 && salary<=20000){
        hra = salary * 0.25;
        da  = salary * 0.9;
    }else{
        hra = salary * 0.3;
        da  = salary * 0.95;
    }
    gross = salary + hra + da;

    printf("Gross salary of Employee = %0.2f", gross);
}
