#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_LENGTH      50
#define MAX_STUDENT     25

typedef struct{
    char* m_name[MAX_LENGTH];
    float m_score;
}Student_t;

void PrintStudent(Student_t*);
void PrintReport (Student_t*, int);
int  SortStudent (Student_t*, int);

void main(void){
    Student_t student[MAX_STUDENT];
    int num = 0;

    do{
        printf("\nEnter Student Name  : ");
        fflush(stdout); fflush(stdin);
        gets(student[num].m_name);
        printf("Enter Student Score : ");
        fflush(stdout); fflush(stdin);
        scanf("%f", &student[num].m_score);
        num++;
        printf("Any other order.\tPress (c) continue : ");
        fflush(stdout); fflush(stdin);
    }while(getche() == 'c');

    PrintReport(student, num);

}

void PrintStudent(Student_t* student){
    printf("%-25s%5.2f\n", student->m_name, student->m_score);
}

void PrintReport(Student_t* students, int num){
    system("cls");
    printf("===========================REPORT===========================\n");
    printf("Student Name\t\t Score\n");
    printf("------------\t\t -----\n");
    for(int i = 0 ; i<num ; i++){
        PrintStudent(students+i);
    }

    int avg = SortStudent(students, num);
    printf("The number of student is %i\n", num);
    printf("The average score for this class is %i\n", avg);


    printf("============================================================\n");
    printf("Below the average Students       <<<Work Harder!>>>\n");
    printf("============================================================\n");
    printf("Student Name\t\t Score\n");
    printf("------------\t\t -----\n");
    for(int i = 0 ; i<num ; i++){
        if((students+i)->m_score <= avg)
            PrintStudent(students+i);
    }

    printf("============================================================\n");
    printf("Top Scorer Students :          <<< Congratulation!>>>\n");
    printf("============================================================\n");
    printf("Student Name\t\t Score\n");
    printf("------------\t\t -----\n");
    for(int i = 0 ; i<num ; i++){
        if((students+i)->m_score > avg)
            PrintStudent(students+i);
    }
}

int SortStudent (Student_t* students, int num){
    int ret = 0;
    for(int i = 0; i<num-1 ; i++){
        for(int j = i+1 ; j<num ; j++){
            if((students+i)->m_score < (students+j)->m_score){
                Student_t temp;
                 (temp      ) = *(students+i);
                *(students+i) = *(students+j);
                *(students+j) =  (temp      );
            }
            ret = (students+i)->m_score;
            //PrintStudent(students+i);
        }
    }
    return ret/num;
}
