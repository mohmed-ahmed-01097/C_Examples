#include <stdio.h>

typedef unsigned char  u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

struct SHuman{
	u8 m_hight ;
	u8 m_weight ;
};

typedef struct SEmployee{
	u8 m_name [10];
	u8 m_age ;
	u16 m_salary ;
	u16 m_bonus ;
	struct SHuman m_info ;
	u32 *m_ptr;
	struct employee *m_Sptr;
}employee_t;

void func1 (employee_t);
void func2 (employee_t*);

void main(void){
    employee_t S_Ahmed;
	u32 x = 5 ;
	S_Ahmed.m_age = 5 ;
	S_Ahmed.m_name[0] = 'h';
	S_Ahmed.m_name[1] = 'm';
	S_Ahmed.m_info.m_hight = 25 ;
	S_Ahmed.m_ptr = &x ;
	S_Ahmed.m_Sptr = &S_Ahmed;
	printf("ahmed age : %i \n" , S_Ahmed.m_age);
	printf("ahmed name : %s \n" , S_Ahmed.m_name);
	printf("ahmed hight : %i \n" , S_Ahmed.m_info.m_hight);
	printf("ahmed ptr : %i \n" , S_Ahmed.m_ptr);
	printf("ahmed ptr value : %i \n" , *(S_Ahmed.m_ptr));
	printf("ahmed pointer using &: %i \n" , &S_Ahmed);
	printf("ahmed pointer : %i \n" , S_Ahmed.m_Sptr);
	printf("ahmed name pointer : %i \n" , S_Ahmed.m_name);

	func1(S_Ahmed);
	func2(&S_Ahmed);
}

void func1 (employee_t emp){
	printf("*****************************\n");
	printf("Employee age : %i \n" , emp.m_age);
	printf("Employee name : %s \n" , emp.m_name);
	printf("Employee hight : %i \n" , emp.m_info.m_hight);
	printf("Employee ptr : %i \n" , emp.m_ptr);
	printf("Employee ptr value : %i \n" , *(emp.m_ptr));
	printf("Employee pointer using & : %i \n" , &emp);
	printf("Employee pointer using self ref : %i \n" , emp.m_Sptr);
	printf("Employee name pointer : %i \n" , emp.m_name);
}

void func2 (employee_t *emp){
	printf("*****************************\n");
	printf("Employee age : %i \n" , emp->m_age);
	printf("Employee name : %s \n" , emp->m_name);
	printf("Employee hight : %i \n" , emp->m_info.m_hight);
	printf("Employee ptr : %i \n" , emp->m_ptr);
	printf("Employee ptr value : %i \n" , *(emp->m_ptr));
	printf("Employee pointer using & : %i \n" , emp);
	printf("Employee pointer using self ref : %i \n" , emp->m_Sptr);
	printf("Employee name pointer : %i \n" , emp->m_name);
}
