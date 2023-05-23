#include <stdio.h>

typedef struct {
    int m_sec;
    int m_min;
    int m_hr;
}S_Time_t;

S_Time_t GitTime(void);
S_Time_t DifferenceTime(S_Time_t, S_Time_t);
void PrintTime(S_Time_t);

void main(void){
    S_Time_t s_dif, s_start, s_end;

    printf("Enter Start Time info\n");
    s_start = GitTime();
    printf("Enter End   Time info\n");
    s_end   = GitTime();

    s_dif = DifferenceTime(s_start, s_end);

    printf("Time Difference: \n");
    PrintTime(s_start);
    printf(" - ");
    PrintTime(s_end);
    printf(" = ");
    PrintTime(s_dif);
}

S_Time_t GitTime(void){
    S_Time_t s_ret;

    printf("Enter hours : minutes : seconds ==> ");
    fflush(stdout); fflush(stdin);
    scanf("%i : %i : %i", &s_ret.m_hr, &s_ret.m_min, &s_ret.m_sec);

    if(s_ret.m_hr>24 || s_ret.m_min>60 || s_ret.m_sec>60){
        printf("Wrong Time <<retry again>>\n");
        s_ret = GitTime();
    }
    return s_ret;
}

S_Time_t DifferenceTime(S_Time_t s_start, S_Time_t s_end){
    S_Time_t s_ret;

    if(s_end.m_sec < s_start.m_sec){
        s_end.m_min--;
        s_end.m_sec += 60;
    }
    if(!s_end.m_min > 0 || s_end.m_min <= s_start.m_min){
        s_end.m_hr--;
        s_end.m_min += 60;
    }
    if(!s_end.m_hr > 0 || s_end.m_hr <= s_start.m_hr){
        s_end.m_hr += 24;
    }

    s_ret.m_sec = s_end.m_sec - s_start.m_sec;
    s_ret.m_min = s_end.m_min - s_start.m_min;
    s_ret.m_hr  = s_end.m_hr  - s_start.m_hr ;

    return s_ret;
}

void PrintTime(S_Time_t s_time){
    printf("[%02i : %02i : %02i]", s_time.m_hr, s_time.m_min, s_time.m_sec);
}
