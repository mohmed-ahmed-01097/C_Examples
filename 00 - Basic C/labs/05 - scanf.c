#include <stdio.h>

void main (){
    char name[20];
    int age;
    char gender;

    printf("Enter Your Name:");
    scanf("%s",name);
    fflush(stdout);    fflush(stdin);

    printf("Enter your Age: ");
    scanf("%i",&age);
    fflush(stdout);    fflush(stdin);

    printf("Enter your Gender (M,F): ");
    gender = getchar();

    printf("========== Loading... ==========\n");
    printf("Hello %s! \n", name);
    printf("Your age: \t%i years old \n", age);
    printf("your gender: \t%s \n", (gender == 'm'||gender == 'M' ? "Male" : "Female" ));

}
