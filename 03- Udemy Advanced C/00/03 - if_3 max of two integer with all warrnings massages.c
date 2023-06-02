#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){

	float num1 , num2;

	printf("Enter the first number(integer):");
	if ( scanf("%f",&num1) == 0 ){
		printf("invalid input! Exiting ..\n");
	}else{
	    printf("Enter the second number(integer):");
        if ( scanf("%f",&num2) == 0 ){
            printf("invalid input! Exiting ..\n");
        }else{
            int32_t n1, n2;

            /* we are storing only integer part of the real numbers*/
            n1 = num1;
            n2 = num2;

            if( (n1 != num1) || (n2 != num2) ){
                printf("Warning ! comparing only integer part\n");
            }else{
                if(n1 == n2){
                    printf("Numbers are equal\n");
                }else{

                    if(n1 < n2){
                        printf("%d is bigger\n",n2);
                    }else{
                        printf("%d is bigger\n",n1);
                    }
                }
            }
        }
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
