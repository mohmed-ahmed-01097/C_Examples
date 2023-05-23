#include <stdio.h>

void  main(void){
    int arr[10];
    int cnt, element, index = 0;

    printf("Enter the count of data : ");
    scanf("%i", &cnt);

    for(int i = 0; i<cnt ; i++){
        printf(" %03i : ", i);
        scanf("%i", &arr[i]);
    }

    printf("\n[");
    for(int i = 0; i<cnt ; i++){
        printf(" %03i ", arr[i]);
    }
    printf("]\n");

    printf("Enter the value of Element : ");
    scanf("%i", &element);

    printf("\n[");
    for(int i = 0; i<cnt ; i++){
        if(arr[i] == element){
            printf(" %03i ", i);
            index++;
        }
    }
    printf("]\n");
    if(index)
        printf("the element is exist %i times", index);
    else
        printf("the element is not exist");
}
