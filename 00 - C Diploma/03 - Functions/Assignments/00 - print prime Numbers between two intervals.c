#include <stdio.h>

void prime_Num(int, int);

void main (void){
    int x1, x2;

    printf("Enter the range of numbers [x y] \nx:");
    scanf("%i", &x1);
    printf("y:");
    scanf("%i", &x2);

    printf("the prime numbers between [%03i %03i]\n", x1, x2);
    prime_Num(x1, x2);
}

void prime_Num(int a, int b){
    int arr[700] = {2};
    char flage;
    int index = 1;
    int max = a>b?a:b;
    int min = a<b?a:b;
    printf("[");


/** What is a prime number?
 * 	 A prime number is a number greater than 1 with only two factors – themselves and 1.
 * 	 A prime number cannot be divided by any other numbers without leaving a remainder.
 *   An example of a prime number is 13. It can only be divided by 1 and 13.
 *   Dividing a prime number by another number results in numbers left over e.g. 13 ÷ 6 = 2 remainder 1.
 **/

    if(max<=1 && min>=0){

    }else{
        if(max>=2 && min<=2){
            printf(" %03i ", 2);
        }
        for(int i = 2 ; i<=max ; i++){
                flage = 0;
            for(int j = 0 ; j<index ; j++){
                if(i%arr[j]){
                    flage = 1;
                    continue;
                }else{
                    flage = 0;
                    break;
                }
            }
            if(flage){
                arr[index++] = i;
                if(i >= min){
                    printf(" %03i ", i);
                }
            }
        }
    }
    printf("]");
}
