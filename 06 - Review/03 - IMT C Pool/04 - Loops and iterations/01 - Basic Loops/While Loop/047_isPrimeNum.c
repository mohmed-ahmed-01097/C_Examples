#include <stdio.h>

void main(void){
    unsigned int num;
    char flag = 0;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%u", &num);

    int i = num/2;
    while(i>1){
        if(num%i--){
            flag = 0;
            continue;
        }
        flag = 1;
        break;

    }
    printf("this number is %s", flag?"Not Prime":"Prime");
}
