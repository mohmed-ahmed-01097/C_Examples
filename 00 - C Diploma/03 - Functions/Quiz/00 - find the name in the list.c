#include <stdio.h>
#include <string.h>

#define MAX_LENGTH          12
#define MAX_NAME_LENGTH     25
#define NAMES_ELEMENT       5

int isInList(char[]);

char NamesOfList_G[NAMES_ELEMENT][MAX_LENGTH] = {
    "Ahmed Alaa",
    "Ahmed Osama",
    "Ahmed Mamdouh",
    "Ahmed Samy",
    "Ahmed Hossain"
};

void main(void){

    char fristName[MAX_NAME_LENGTH], secondName[MAX_LENGTH];

    printf("Enter the first name: ");
    fflush(stdout); fflush(stdin);
    scanf("%s", fristName);
    //gets(fristName);

    printf("Enter the second name: ");
    fflush(stdout); fflush(stdin);
    scanf("%s", secondName);

    strcat(fristName," ");
    strcat(fristName,secondName);

    if(isInList(fristName)){
        printf("\nCongratulation, your name in the list");
    }else{
        printf("\nSorry, not found!");
    }

}

int isInList(char str[]){
    int ret = 0;
    for(int i=0 ; i<NAMES_ELEMENT; i++){
        if(!stricmp(str,NamesOfList_G[i])){
            ret = 1;
            break;
        }
    }
    return ret;

}
