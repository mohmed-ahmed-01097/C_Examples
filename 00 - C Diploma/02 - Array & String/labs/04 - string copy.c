#include <stdio.h>

void main(void){
    char names[5][14] = {
        "Ahmed Alaa",
        "Ahmed Osama",
        "Ahmed Mamdouh",
        "Ahmed Samy",
        "Ahmed Hossain"
    };
    char a[14], b[14];

    for(int i = 0 ; i<5 ; i++){
        printf("%s\r\n", names[i]);
    }

    int i = 0;
    while(names[1][i]){
        a[i] = names[1][i];
        i++;
    }
    a[i] = 0;
    printf("\n\rA=[%s]", a);

    strcpy(b,names[2]);
    printf("\n\rB=[%s]", b);


    printf("\n\rthe length of A = %i", strlen(a));
    printf("\n\rthe length of B = %i", strlen(b));

}
