#include <stdio.h>
#include <conio.h>
#include <string.h>

struct SStudentInfo{
	char m_name [50] ;
	int m_rollNum ;
	float m_marks ;
};

struct SStudentInfo EnterStudent();
void PrintStudent(struct SStudentInfo, int);
void SwapStudent(struct SStudentInfo*, struct SStudentInfo*);

void main(void){
    struct SStudentInfo S_Students[100];
    printf("Enter Your student information ... \n\r");
    int index = 0;
    do{
        S_Students[index++] = EnterStudent();
        PrintStudent(S_Students[index-1], index);
        printf("Do you want to Enter more students ??? press (y) to continue...\t");
    }while(getche() == 'y');

    printf("\nID\tStudent NAME\t\tRoll Number\tMarks\n\r");
    for(int i = 0; i<index ; i++){
        PrintStudent(S_Students[i], i);
    }

    printf("\nSorting by Name\n");
    for(int i = 0; i<index-1 ; i++){
        for(int j = i+1 ; j<index ; j++){
            if(stricmp(S_Students[i].m_name, S_Students[j].m_name) > 0){
                SwapStudent(&S_Students[i], &S_Students[j]);
            }
        }
    }
    printf("\nID\tStudent NAME\t\tRoll Number\tMarks\n\r");
    for(int i = 0; i<index ; i++){
        PrintStudent(S_Students[i], i);
    }
}

struct SStudentInfo EnterStudent(){
    char temp_str[25];
    struct SStudentInfo ret;
    printf("\n First Name: ");
    fflush(stdout); fflush(stdin);
    scanf("%s", ret.m_name);

    printf("Second Name: ");
    fflush(stdout); fflush(stdin);
    scanf("%s", temp_str);

    strcat(ret.m_name, " ");
    strcat(ret.m_name, temp_str);

    printf("Roll Num: ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &ret.m_rollNum);

    printf("Marks: ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &ret.m_marks);
    return ret;
}

void PrintStudent(struct SStudentInfo S_A, int id){
    printf("%2i\t[%-15s]\t%10i\t%12.2f\n", id, S_A.m_name, S_A.m_rollNum, S_A.m_marks);
}

void SwapStudent(struct SStudentInfo *S_A, struct SStudentInfo *S_B){
    struct SStudentInfo temp;
    temp = *S_A;
    *S_A = *S_B;
    *S_B = temp;
}
