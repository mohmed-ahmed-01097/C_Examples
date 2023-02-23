#include <stdio.h>
#include <string.h>

void main(void){
    char names[5][14] = {
        "Ahmed Alaa",
        "Ahmed Osama",
        "Ahmed Mamdouh",
        "Ahmed Samy",
        "Ahmed Hossain"
    };
    char a[20], b[20];
    int flag = 0;

    printf("Enter the first name: ");
    fflush(stdout); fflush(stdin);
    scanf("%s", a);

    printf("Enter the second name: ");
    fflush(stdout); fflush(stdin);
    scanf("%s", b);

    strcat(a," ");
    strcat(a,b);

    for(int i=0 ; i<5 ; i++){
        if(!stricmp(a,names[i])){
            flag = 1;
            break;
        }
    }

    if(flag){
        printf("\nCongratulation, your name in the list");
    }else{
        printf("\nSorry, not found!");
    }

}
