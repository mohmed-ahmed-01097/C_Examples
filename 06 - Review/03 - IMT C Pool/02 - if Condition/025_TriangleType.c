#include <stdio.h>

void main(void){
    float ang1, ang2, ang3;

    printf("Enter three angles of triangle : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &ang1);
    fflush(stdout); fflush(stdin);
    scanf("%f", &ang2);
    fflush(stdout); fflush(stdin);
    scanf("%f", &ang3);

    if(ang1 + ang2 + ang3 == 180){
            if(ang1==90 || ang2==90 || ang3==90){
                printf("Right Triangle\n");
                if(ang1==ang2 || ang2==ang3 || ang3==ang1){
                    printf("Isosceles Triangle\n");
                }
            }else if(ang1>90 || ang2>90 || ang3>90){
                printf("Obtuse Triangle\n");
                if(ang1==ang2 || ang2==ang3 || ang3==ang1){
                    printf("Isosceles Triangle\n");
                }
            }else{
                printf("Acute Triangle\n");
                if(ang1==60 && ang2==60 && ang3==60){
                    printf("Equilateral Triangle");
                }else if(ang1==ang2 || ang2==ang3 || ang3==ang1){
                    printf("Isosceles Triangle\n");
                }else{
                    printf("Scalene Triangle");
                }
            }
    }else{
        printf("Not valid Triangle\n");
    }
}
