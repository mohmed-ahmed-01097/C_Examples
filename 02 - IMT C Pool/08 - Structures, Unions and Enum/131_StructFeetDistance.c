#include <stdio.h>

typedef struct {
    int m_feet;
    float m_inch;
}S_Distance_t;

S_Distance_t GitDistance(void);
S_Distance_t AddDistance(S_Distance_t, S_Distance_t);

void main(void){
    S_Distance_t s_add, s_a, s_b;

    s_a = GitDistance();
    s_b = GitDistance();

    s_add = AddDistance(s_a, s_b);

    int temp = s_add.m_inch/12;
    printf("Sum of Distances = %i\' %0.2f\"", s_add.m_feet + temp, s_add.m_inch - temp * 12);
}

S_Distance_t GitDistance(void){
    S_Distance_t s_ret;

    printf("Enter Distance info\n");
    printf("Enter feet : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &s_ret.m_feet);
    printf("Enter inch : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &s_ret.m_inch);

    return s_ret;
}

S_Distance_t AddDistance(S_Distance_t s_a, S_Distance_t s_b){
    S_Distance_t s_ret;

    s_ret.m_feet = s_a.m_feet + s_b.m_feet;
    s_ret.m_inch = s_a.m_inch + s_b.m_inch;

    return s_ret;
}
