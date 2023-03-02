#include <stdio.h>

#define MAX_LENGTH      100

typedef struct {
    int m_max;
    int m_min;
}S_Return_t;

S_Return_t StructReturn(int*,int);

void main(void){
    S_Return_t s_ret;
    int num, arr[MAX_LENGTH];

    printf("Enter Size of array :");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    for(int i = 0 ; i<num ; i++){
        printf("%02i :", i);
        fflush(stdout); fflush(stdin);
        scanf("%i", &arr[i]);
    }

    s_ret = StructReturn(arr, num);

    printf("Minimum value in array : %i\n", s_ret.m_min);
    printf("Maximum value in array : %i\n", s_ret.m_max);
}

S_Return_t StructReturn(int* ptr,int num){
    S_Return_t s_ret;
    s_ret.m_max = s_ret.m_min = *ptr;

    for(int i = 0 ; i<num ; i++){
        if(*(ptr+i)<s_ret.m_min){
            s_ret.m_min = *(ptr+i);
        }
        if(*(ptr+i)>s_ret.m_max){
            s_ret.m_max = *(ptr+i);
        }
    }
    return s_ret;
}
