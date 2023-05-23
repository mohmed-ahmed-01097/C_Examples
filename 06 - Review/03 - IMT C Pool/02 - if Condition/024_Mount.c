#include <stdio.h>

void main(void){
    int num;

    printf("Enter amount : ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    if(num>=0){
        printf("Total Number of notes\n");
        printf("[500 200 100  50  20  10   5   2   1]\n");

        printf("   %i", num/500);
        (num/500)?num%=500:0;
        printf("   %i", num/200);
        (num/200)?num%=200:0;
        printf("   %i", num/100);
        (num/100)?num%=100:0;
        printf("   %i", num/50);
        (num/50)?num%=50:0;
        printf("   %i", num/20);
        (num/20)?num%=20:0;
        printf("   %i", num/10);
        (num/10)?num%=10:0;
        printf("   %i", num/5);
        (num/5)?num%=5:0;
        printf("   %i", num/2);
        (num/2)?num%=2:0;
        printf("   %i", num/1);
    }else{
        printf("Not Correct Number");
    }
}
