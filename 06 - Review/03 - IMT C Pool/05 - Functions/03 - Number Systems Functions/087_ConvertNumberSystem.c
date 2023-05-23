#include <stdio.h>

#define MAX_LENGTH     19

long long int ConvertNumSys(int src, int dis, long long int num);
long long int ConvertToDecimal(int src, long long int num);
long long int ConvertFromDecimal(int dis, long long int num);

void main(void){
    long long int number;
    int source, destination;

    printf("Enter a source number system:");
    fflush(stdout); fflush(stdin);
    scanf("%i", &source);
    printf("Enter a destination number system:");
    fflush(stdout); fflush(stdin);
    scanf("%i", &destination);
    printf("Enter a number Number max 19-bit:");
    fflush(stdout); fflush(stdin);
    scanf("%lli", &number);

    printf("%lli in [%i sys] = %lli in [%i sys]"
           , number, source, ConvertNumSys(source, destination, number), destination);
}

long long int ConvertNumSys(int src, int dis, long long int num){
    return ConvertFromDecimal(dis, ConvertToDecimal(src, num));
}

long long int ConvertToDecimal(int src, long long int num){
    long long int ret = 0;
    int pow = 1;
    while(num){
        ret += (num % 10) * pow;
        pow *= src;
        num /= 10;
    }
    return ret;
}

long long int ConvertFromDecimal(int dis, long long int num){
    long long int ret = 0;
    long long int pow = 1;
    while(num){
        ret += (num % dis) * pow;
        pow *= 10;
        num /= dis;
    }
    return ret;
}
