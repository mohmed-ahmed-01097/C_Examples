#include <stdio.h>
#include <stdarg.h>

#define MAX     10
int sum(int, ...);

void main(void){
    int count;
    static int v[MAX];
    printf("Enter number of your numbers (max = %d):", MAX);
    scanf("%d",&count);
    for(int i = count ; i-- ; ){
        printf("%d:",count-(i+1));
        scanf("%d",&v[i]);
    }
    printf("\n the Sum = \t %d",sum(MAX,v[0],v[1],v[2],v[3],v[4],v[5],v[6],v[7],v[8],v[9]));
}

int sum(int count, ...){
    int sum = 0;
    va_list var_arg;
    va_start(var_arg, count);
    for(int i = MAX ; i-- ; ){
        sum += va_arg(var_arg, int);
    }
    return sum;
}
