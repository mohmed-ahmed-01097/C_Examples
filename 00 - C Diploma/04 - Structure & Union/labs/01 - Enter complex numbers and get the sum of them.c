#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct SComplex{
    float m_Real;
    float m_Imag;
};

struct SComplex ReadComplex();
struct SComplex AddComplex(struct SComplex*, struct SComplex*);
void PrintComplex(struct SComplex,char[]);


char* strToInt(int);

void main(void){

    struct SComplex numbers[10];

    short index = 0;
    do{
        numbers[index++] = ReadComplex();
        printf("Do you want to add more press (y) to continue ...");
    }while(getche() == 'y');

    struct SComplex sum = {0.0, 0.0};
    printf("\nID\tReal\tImag\n");
    for(int i = 0; i< index ; i++){
        PrintComplex(numbers[i],strToInt(i));
        sum = AddComplex(&sum, &numbers[i]);
    }
    printf("the sum \n");
    PrintComplex(sum, "total");

}

struct SComplex ReadComplex(){
    struct SComplex ret;
    printf("\nReal = ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &ret.m_Real);
    printf("Imag = ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &ret.m_Imag);
    return ret;
}

struct SComplex AddComplex(struct SComplex *S_A, struct SComplex *S_B){
    struct SComplex ret;
    ret.m_Real = S_A->m_Real + S_B->m_Real;
    ret.m_Imag = S_A->m_Imag + S_B->m_Imag;
    return ret;
}

void PrintComplex(struct SComplex S_A, char str[]){
    printf("%s\t%0.2f\t%0.2fi\n",str, S_A.m_Real,S_A.m_Imag);
}

char* strToInt(int num){
    static char str[] = "000";
    str[2] = num      %10 + '0';
    str[1] = (num/10) %10 + '0';
    str[0] = (num/100)%10 + '0';
    return str;
}
