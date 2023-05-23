#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define FEET2METER      0.3048f
#define INCH2CMETER     2.54f
#define INCH2FEET       12u
#define CMETER2METER    100u

typedef enum {FEET, METER}E_type;

struct SFeet{
    float m_Feet;
    float m_Inch;
};

struct SMeter{
    float m_Meter;
    float m_CMeter;
};

union SDistance{
    struct {struct SFeet m_F;   E_type m_type;}u_F;
    struct {struct SMeter m_M;  E_type m_type;}u_M;
};

union SDistance ReadDistance();
union SDistance AddDistance(union SDistance*, union SDistance*, E_type);
void PrintDistance(union SDistance, char[]);
void MeterToFeet(union SDistance *);
void FeetToMeter(union SDistance *);

char* strToInt(int);

void main(void){

    union SDistance numbers[10];

    short index = 0;
    do{
        numbers[index++] = ReadDistance();
        printf("Do you want to add more press (y) to continue ...");
    }while(getche() == 'y');

    union SDistance sum = {0.0, 0.0, METER};
    printf("\nID\tType\tDistance\n");
    for(int i = 0; i< index ; i++){
        PrintDistance(numbers[i],strToInt(i));
        sum = AddDistance(&sum, &numbers[i], METER);
    }
    printf("the sum ... \n");
    PrintDistance(sum, "total");
    sum.u_F.m_type = FEET;
    MeterToFeet(&sum);
    PrintDistance(sum, "total");

}

union SDistance ReadDistance(){
    union SDistance ret;
    printf("choose the Distance type\t(F)eet, (M)eter\t");

    do{
        switch(getche()){
            case 'f':
            case 'F':
                ret.u_F.m_type = FEET;
                break;
            case 'm':
            case 'M':
                ret.u_M.m_type = METER;
                break;

            default:
                continue;
        }
        break;
    }while(1);

    switch(ret.u_F.m_type){
        case FEET:
            printf("\nFeet = ");
            fflush(stdout); fflush(stdin);
            scanf("%f", &ret.u_F.m_F.m_Feet);
            printf("Inch = ");
            fflush(stdout); fflush(stdin);
            scanf("%f", &ret.u_F.m_F.m_Inch);
            break;
        case METER:
            printf("\nMeter  = ");
            fflush(stdout); fflush(stdin);
            scanf("%f", &ret.u_M.m_M.m_Meter);
            printf("CMeter = ");
            fflush(stdout); fflush(stdin);
            scanf("%f", &ret.u_M.m_M.m_CMeter);
            break;
        default:{}

    }
    return ret;
}

union SDistance AddDistance(union SDistance *S_A, union SDistance *S_B, E_type type){
    union SDistance ret;
    switch(type){
        case FEET:
            if(!S_A->u_F.m_type)    MeterToFeet(S_A);
            if(!S_B->u_F.m_type)    MeterToFeet(S_B);
            ret.u_F.m_F.m_Feet = S_A->u_F.m_F.m_Feet + S_B->u_F.m_F.m_Feet;
            ret.u_F.m_F.m_Inch = S_A->u_F.m_F.m_Inch + S_B->u_F.m_F.m_Inch;
            ret.u_F.m_type = FEET;
            break;
        case METER:
            if(!S_A->u_F.m_type)    FeetToMeter(S_A);
            if(!S_B->u_F.m_type)    FeetToMeter(S_B);
            ret.u_M.m_M.m_Meter = S_A->u_M.m_M.m_Meter + S_B->u_M.m_M.m_Meter;
            ret.u_M.m_M.m_CMeter = S_A->u_M.m_M.m_CMeter + S_B->u_M.m_M.m_CMeter;
            ret.u_M.m_type = METER;
            break;
        default: {}

    }
    return ret;
}

void PrintDistance(union SDistance S_A, char str[]){
    int temp;
    switch(S_A.u_F.m_type){
        case FEET:
            S_A.u_F.m_F.m_Inch += (S_A.u_F.m_F.m_Feet - (int)S_A.u_F.m_F.m_Feet) * INCH2FEET;
            temp = (int)(S_A.u_F.m_F.m_Inch / INCH2FEET);
            S_A.u_F.m_F.m_Feet = (int)S_A.u_F.m_F.m_Feet + temp;
            S_A.u_F.m_F.m_Inch -= (temp * INCH2FEET);
            printf("%s\t%s\t%-5.2fft + %-5.4fin\n",str, "FEET"
                   ,S_A.u_F.m_F.m_Feet
                   ,S_A.u_F.m_F.m_Inch);
            break;
        case METER:
            S_A.u_M.m_M.m_CMeter += (S_A.u_M.m_M.m_Meter - (int)S_A.u_M.m_M.m_Meter) * CMETER2METER;
            temp = (int)(S_A.u_M.m_M.m_CMeter / CMETER2METER);
            S_A.u_M.m_M.m_Meter = (int)S_A.u_M.m_M.m_Meter + temp;
            S_A.u_M.m_M.m_CMeter -= (temp * CMETER2METER);
            printf("%s\t%s\t%-6.2fm + %-6.4fcm\n",str, "MATER"
                   ,S_A.u_M.m_M.m_Meter
                   ,S_A.u_M.m_M.m_CMeter);
            break;
        default: {}

    }
}

void FeetToMeter(union SDistance *S_A){
    S_A->u_F.m_F.m_Feet *= FEET2METER;
    S_A->u_F.m_F.m_Inch *= INCH2CMETER;
}
void MeterToFeet(union SDistance *S_A){
    S_A->u_M.m_M.m_Meter /= FEET2METER;
    S_A->u_M.m_M.m_CMeter /= INCH2CMETER;
}

char* strToInt(int num){
    static char str[] = "000";
    str[2] = num      %10 + '0';
    str[1] = (num/10) %10 + '0';
    str[0] = (num/100)%10 + '0';
    return str;
}
