#include <stdio.h>

void main(void){
    unsigned long long int num, reverse = 0, temp_num;
    char length = 0, flag;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%llu", &num);


    temp_num = num;
    while(temp_num){
        reverse *= 10;
        reverse += (temp_num%10);
        temp_num /= 10;
    }
    printf("this number is %s", num != reverse?"Not Palindrome":"Palindrome");
/**
    temp_num = num;
    while(temp_num){
        temp_num /= 10;
        length++;
    }
    int temp = length/2;
    for(int i = 1; i<=temp ; i++){
        if((num%10) == (reverse%10)){
            flag = 0;
            num /=10;
            reverse /=10;
            continue;
        }
        flag = 1;
        break;
    }
    printf("this number is %s", flag?"Not Palindrome":"Palindrome");
**/
}
