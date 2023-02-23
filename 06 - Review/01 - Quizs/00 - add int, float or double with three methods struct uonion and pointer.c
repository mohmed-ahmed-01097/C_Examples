#include <stdio.h>

double sum;

typedef enum {INT, FLOAT, DOUBLE}E_type;

typedef struct SNumber{
    int m_int;
    float m_float;
    double m_double;
}S_Num;

typedef union UNumber{
    int m_int;
    float m_float;
    double m_double;
}U_Num;

S_Num StructAddNumber(S_Num const*, S_Num const*, E_type);
U_Num UnionAddNumber(U_Num const*, U_Num const*, E_type);
void* PointerAddNumber(void const*, void const*, E_type);

void main(void){

    printf("the sum \n");

    S_Num S_A = {1, 1.5, 1.75};
    S_Num S_B = {1, 1.5, 1.75};
    U_Num U_A, U_B;
    U_A.m_float = 1.5;
    U_B.m_float = 1.5;

    printf("%04i + %04i", S_A.m_int, S_B.m_int);
    printf(" = %04i\n", StructAddNumber(&S_A,&S_B,INT).m_int);

    printf("%04.2f + %04.2f", U_A.m_float, U_B.m_float);
    printf(" = %04.2f\n", UnionAddNumber(&U_A,&U_B,FLOAT).m_float);

    U_B.m_double = 1.75;
    printf("%04.2f + %04.2f", S_A.m_double, U_B.m_double);
    printf(" = %04.2f\n", *(double*)PointerAddNumber(&S_A.m_double,&U_B.m_double,DOUBLE));

    U_B.m_float = 3.5;
    printf("%04.2f + %04.2f", S_A.m_float,U_B.m_float);
    printf(" = %04.2f\n", *(float*)PointerAddNumber(&S_A.m_float,&U_B.m_float,FLOAT));

    U_B.m_int = 55;
    printf("%04i + %04i", S_A.m_int,U_B.m_int);
    printf(" = %04i\n", *(int*)PointerAddNumber(&S_A.m_int,&U_B.m_int,INT));

}

S_Num StructAddNumber(S_Num const* S_A, S_Num const* S_B, E_type type){
    S_Num ret = {0, 0.0, 0.0};
    switch(type){
        case INT:
            ret.m_int = S_A->m_int + S_B->m_int;
            break;
        case FLOAT:
            ret.m_float = S_A->m_float + S_B->m_float;
            break;
        case DOUBLE:
            ret.m_double = S_A->m_double + S_B->m_double;
            break;
        default:
            printf("Error!!!");
    }
    return ret;
}
U_Num UnionAddNumber(U_Num const* U_A, U_Num const* U_B, E_type type){
    U_Num ret = {0};
    switch(type){
        case INT:
            ret.m_int = U_A->m_int + U_B->m_int;
            break;
        case FLOAT:
            ret.m_float = U_A->m_float + U_B->m_float;
            break;
        case DOUBLE:
            ret.m_double = U_A->m_double + U_B->m_double;
            break;
        default:
            printf("Error!!!");
    }
    return ret;
}
void* PointerAddNumber(void const* P_A, void const* P_B, E_type type){
    void* ret = &sum;
    switch(type){
        case INT:
            *(int*)ret = *(int*)P_A + *(int*)P_B;
            break;
        case FLOAT:
            *(float*)ret = *(float*)P_A + *(float*)P_B;
            break;
        case DOUBLE:
            *(double*)ret = *(double*)P_A + *(double*)P_B;
            break;
        default:
            printf("Error!!!");
    }
    return ret;
}
