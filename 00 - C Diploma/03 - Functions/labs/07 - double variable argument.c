#include <stdio.h>
#include <stdarg.h>

float sum ( int arg , ... );
void main (void){
    printf("the Sum = %0.2f", sum(5,1.25,1.5,1.75,1.9,2.5,2.25));
}
float sum ( int arg , ... )
{     double sum = 0;
      va_list   __var__ ;
      va_start ( __var__  , arg ) ;
       for (int i = 0 ; i < arg ; i++ )
            sum += va_arg ( __var__  , double ) ;
     va_end ( __var__ );
      return  sum ;
}

