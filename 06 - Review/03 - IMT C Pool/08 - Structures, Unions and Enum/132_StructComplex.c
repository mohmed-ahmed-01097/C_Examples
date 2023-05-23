#include <stdio.h>

typedef struct {
    float m_real;
    float m_imag;
}S_Complex_t;

S_Complex_t GitDistance(void);
S_Complex_t AddDistance(S_Complex_t, S_Complex_t);

void main(void){
    S_Complex_t s_add, s_a, s_b;

    s_a = GitDistance();
    s_b = GitDistance();

    s_add = AddDistance(s_a, s_b);

    printf("Sum of complex numbers = [%0.2f] + i [%0.2f]", s_add.m_real, s_add.m_imag);
}

S_Complex_t GitDistance(void){
    S_Complex_t s_ret;

    printf("Enter complex number info\n");
    printf("Enter real : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &s_ret.m_real);
    printf("Enter imag : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &s_ret.m_imag);

    return s_ret;
}

S_Complex_t AddDistance(S_Complex_t s_a, S_Complex_t s_b){
    S_Complex_t s_ret;

    s_ret.m_real = s_a.m_real + s_b.m_real;
    s_ret.m_imag = s_a.m_imag + s_b.m_imag;

    return s_ret;
}
