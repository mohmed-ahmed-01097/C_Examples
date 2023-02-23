#include <stdio.h>
#include <stdlib.h>

typedef unsigned char  u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

struct SHuman {
	u8 m_hight ;
	u8 m_weight ;
};

typedef struct employee
{
	u8  m_name [10];
	u8  m_age ;
	u16 m_salary ;
	u16 m_bonus ;
	struct SHuman s_info ;
}S_Employee_t;

void PrintEmployee(S_Employee_t*);
void EnterEmployee(S_Employee_t*);

void main(void){
    S_Employee_t s_emp_1 = {"Ahmed", 26, 2500 , 500 , 180, 79};
    S_Employee_t s_emp_2 = {"Ali"  , 36, 25000, 5000, 175, 92};
    S_Employee_t s_emp_3 = {"Ahmed", 28, 20000, 1000, 169, 75};

    S_Employee_t s_arr[] = {s_emp_1, s_emp_2, s_emp_3, s_emp_1};
    S_Employee_t* s_empPtr = s_arr;

    for(int i = (sizeof(s_arr)/sizeof(S_Employee_t)) ; i-- ; s_empPtr++ ){
        PrintEmployee(s_empPtr);
    }

}

void PrintEmployee(S_Employee_t* S_ptr){
    printf("Employee Name : %-10s\t Age : %2u\t Salary = %6u\t Bounus = %5u\t Hight = %3u\t Weight = %3u\n",
           S_ptr->m_name, S_ptr->m_age, S_ptr->m_salary, S_ptr->m_bonus, S_ptr->s_info.m_hight, S_ptr->s_info.m_weight);
}
