#include <stdio.h>

void main (){
    char name[20];
    int age;
    char gender;

    printf("Enter Your Name:");
    fflush(stdout);    fflush(stdin);
    scanf("%s",name);

    printf("Enter your Age: ");
    fflush(stdout);    fflush(stdin);
    scanf("%i",&age);

    printf("Enter your Gender (M,F): ");
    gender = getchar();

    printf("========== Loading... ==========\n");
    printf("Hello %s! \n", name);
    printf("Your age: \t%i years old \n", age);
    printf("your gender: \t%s \n", (gender == 'm'||gender == 'M' ? "Male" : "Female" ));

}
