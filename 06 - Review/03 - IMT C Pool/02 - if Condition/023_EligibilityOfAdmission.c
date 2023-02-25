#include <stdio.h>

#define MIN_MATH    65
#define MIN_PHyS    55
#define MIN_CHEM    50

#define MIN_TOTAL   180

void main(void){
    int degree1, degree2, degree3;
    int total;

    printf("Enter the degree of Math course : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &degree1);
    printf("Enter the degree of Physics course : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &degree2);
    printf("Enter the degree of Chemic course : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &degree3);

    if(degree1>=MIN_MATH && degree2>=MIN_PHyS && degree3>=MIN_CHEM){
        int total = degree1 + degree2 + degree3;
        if(total>=MIN_TOTAL)
           printf("the candidate is Eligible for Admission");
        else
            printf("the candidate is Not Eligible for Admission");
    }else{
        printf("the candidate is Not Eligible for Admission");
    }
}
