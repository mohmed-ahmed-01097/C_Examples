#include <stdio.h>
#include <conio.h>

void main(void){

    int num;
    printf("\nEnter your integer Number :\n");
    scanf("%d",&num);

    if(num){
        if(num%2)
            printf("\t Odd\n");
        else
            printf("\t Even\n");
    }else{
        printf("\tZero Number.");
    }

    printf("\ncontinue (y)?");
    if(getch()=='y'){
        main();
    }
}


