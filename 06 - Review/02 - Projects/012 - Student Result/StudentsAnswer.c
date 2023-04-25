#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define FILE_NAME       "file1.txt"
#define MAX_LENGTH      25
#define MAX_STUDENT      25

int GetResult(char*);
void PrintResult(char*, int);

void main(void){
    char answer[MAX_STUDENT][MAX_LENGTH];
    int num = 0;

    do{
        printf("\nInput responses of student number %i : \n", num);
        for(int i = 0; i<MAX_LENGTH ; i++){
            fflush(stdout); fflush(stdin);
            scanf("%c", &answer[num][i]);
        }
        num++;
        printf("Any other order.\tPress (c) continue : ");
        fflush(stdout); fflush(stdin);
    }while(getche() == 'c');

    for(int i = 0; i<num ; i++){
        PrintResult(answer[i], i);
    }

}

int GetResult(char* answer){
    char ch, num = MAX_LENGTH;
    int result = 0;

    FILE *file;
    if((file = fopen(FILE_NAME, "r")) == NULL){
        printf("Error File not found\n");
    }else{
        while(num--){
            ch = getc(file);
            while(getc(file)== "\n");

            if(ch == *answer){
                result++;
                *answer++ = 0;
            }else{
                *answer++ = 1;
            }
        }
    }
    fclose(file);

    return result;
}

void PrintResult(char* answer, int num){
    system("cls");
    printf("\n=======================================================\n");
    printf("Student-%02i\n", num);
    printf("Score is %02i out of %2i\n", GetResult(answer), MAX_LENGTH);
    printf("Response to the items below are wrong\n");
    for(int i = 0; i<MAX_LENGTH ; i++){
        if(*answer++)
            printf(" %02i ", i+1);
    }
    printf("\n=======================================================\n");
}
