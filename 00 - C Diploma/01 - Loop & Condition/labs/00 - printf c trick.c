#include <stdio.h>

void main(void){
    int x=8;
    //(++x)++   //compilation error
    int y=(x,++x,x++);
    printf("%d  %d \n",x,y);
    printf("%d  %d  %d  \n",x,x++,++x);
    printf("%d  %d  %d  \n",x,++x,x++);
    printf("%d  %d  %d  \n",x++,x,++x);
    printf("%d  %d  %d  \n",x++,++x,x);
    printf("%d  %d  %d  \n",++x,x,x++);
    printf("%d  %d  %d  \n",++x,x++,x);
    printf("%d  %d  %d  %d\n",--x,x,x--,x++);

    float f = 0.1;
    if (f==0.1)
        printf("True  0.1\n");
    else
        printf("False %.32f\n",f);

    f=0.5;
    if (f==0.5)
        printf("True  0.5\n");
    else
        printf("False %f\n",f);

    int i = 3;	float j = 3.0;
    if(i==j)
        printf("True");
    else
        printf("false");

}
