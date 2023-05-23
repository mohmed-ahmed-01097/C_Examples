#include <stdio.h>

int round(float);

void main(void){
    float num;

    printf("Enter a float number : \n");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num);

    printf("Round[%f] = [%i]\n", num, round(num));

}

int round(float num){
    return (int)(num + 0.5);
}
