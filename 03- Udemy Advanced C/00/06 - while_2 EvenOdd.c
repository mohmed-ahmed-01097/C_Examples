#include <stdio.h>
#include <stdint.h>
#include <conio.h>

int main(void){

	int32_t start_num , end_num;
	uint32_t even;
	printf("Enter starting and ending numbers(give space between 2 nos):");
	scanf("%d %d",&start_num,&end_num);


	if(end_num < start_num){
		//error
		printf("ending number should be > starting number\n");
	}else{
        printf("Even numbers are :\n");
        even=0;
        while(start_num <= end_num){
            if(!(start_num % 2) ){
                printf(" %4d ",start_num);
                even++;
            }
            start_num++;
        }//end of while loop
        printf("\nTotal even numbers : %u\n",even);
	}

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
