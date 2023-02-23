#include <stdio.h>

void main(void){
    float grade;
    printf("Please enter the grade :");
    fflush(stdout); fflush(stdin);
    scanf("%f", &grade);

    if(grade < 50){
        printf("\t[FAILD!]\n");
    }else if(grade < 65){
        printf("\t[NORMAL!]\n");
    }else if(grade < 75){
        printf("\t[GOOD!]\n");
    }else if(grade < 85){
        printf("\t[VERY GOOD!]\n");
    }else{
        printf("\t[EXCELLENT!]\n");
    }
}
