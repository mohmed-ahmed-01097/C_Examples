#include <stdio.h>

float power(float, int);
float nthRoot(float, int);

void main(void){
    float num, n;

    printf("Enter the number : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num);
    printf("Enter the number of root : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &n);

    /** (unsigned)pow (x, 1.0/n); **/
    printf("the root %f of %f = %f", num, n, nthRoot(num, n));

}

float power(float num, int pow){
    float ret = 1;
    while(pow--){
        ret *= num;
    }
    return ret;
}

float nthRoot(float num, int nth){
    float error = 0.00001;
    float root = 1, step = 1;
    float last;
    while((num - power(root, nth)) > error){
        if(num < power(root + step, nth)){
            step = (float)step/10.0;
        }else{
            last = root;
            root += step;
            if(last == root)
                break;
        }
        printf("[%12f] [%12f] [%12f]\n", step, root, power(root, nth));
    }
    return root;
}
