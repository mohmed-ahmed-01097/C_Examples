#include <stdio.h>
#include <conio.h>

void main(void){
    int num;
    char ch = 0;

    do{
        printf("\nEnter the number : ");
        fflush(stdout); fflush(stdin);
        scanf("%u", &num);
        
        if(num){
            printf("you entered a %s number.\n", num>=0?"Positive":"Negative");
        )else{
            printf("You entered 0");
        }
        printf("if you continue press (c)\nexit press(e)");
    }while((ch = getche()) == 'c');
}
