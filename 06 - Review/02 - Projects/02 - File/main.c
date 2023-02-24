#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char name[20], oldName[20] = "Ahmed             ";

void main(void){

    char data;
    FILE *file;

    printf("\n-----------------------------------------------------------\n");

    if((file = fopen("file1.txt", "w")) == NULL){
        printf("Error File not found\n");
    }else{
        while((data = getche()) != '#'){
            if(data == 13){
                putc('\n', file);
            }else{
                putc(data, file);
            }
        }
        fclose(file);
    }

    printf("\n-----------------------------------------------------------\n");

    if((file = fopen("file1.txt", "r")) == NULL){
        printf("Error File not found\n");
    }else{
        int i = 0;
        while((data = getc(file)) != -1){
            printf("%c", data);
            name[i] = data;
            i++;
        }
        fclose(file);
    }

    printf("\n-----------------------------------------------------------\n");
    printf("name1 = %s\n", name);
    printf("\n-----------------------------------------------------------\n");

    file = fopen("file1.txt", "a");
    fputs("Lolo", file);
    fclose(file);

}
