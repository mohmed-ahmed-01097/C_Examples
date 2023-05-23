#include <stdio.h>
#include <stdlib.h>

void EnterArrayData(unsigned char*, unsigned short int);
void SortArrayData(unsigned char*, unsigned short int);
void PrinttArrayData(unsigned char*, unsigned short int);

void main(void){
    unsigned char *ptr = NULL;
    unsigned short int blockSize;

    printf("Enter the size of Array:");
    fflush(stdout); fflush(stdin);
    scanf("%hi", &blockSize);

    /** Dynamic allocation **/
    printf("************ Dynamic  allocation ************\n\r");
    ptr = (unsigned char*) malloc(blockSize * sizeof(unsigned char));

    /* Check if the memory has been successfully allocated by malloc or not */
    if(ptr == NULL){
        printf("Memory not allocated.\n");
        exit(0);
    }else{
        printf("Memory successfully allocated using malloc.\n");
    }

    printf("Enter the array data:\n\r");
    EnterArrayData(ptr, blockSize);

    printf("************ Sorting  Array Data ************\n\r");
    SortArrayData(ptr, blockSize);

    PrinttArrayData(ptr, blockSize);

    printf("************ Free Dynamic Memory ************\n\r");
    free(ptr);

}
void EnterArrayData(unsigned char *ptr, unsigned short int size){
    unsigned char *temp = ptr;
    for(int i = size ; i-- ; temp++){
        printf("%2i : ", i);
        fflush(stdout); fflush(stdin);
        scanf("%d", temp);
    }
}

void SortArrayData(unsigned char *ptr, unsigned short int size){
    unsigned char *temp = ptr;
    unsigned char swap;
    for(int i = 0; i<size-1 ; i++){
        for(int j = i+1 ; j<size ; j++){
            if(temp[i]<temp[j]){
                swap = temp[i];
                temp[i] = temp[j];
                temp[j] = swap;
            }
        }
    }
}


void PrinttArrayData(unsigned char *ptr, unsigned short int size){
    unsigned char *temp = ptr;
    for(int i = size ; i-- ; temp++){
        printf("%2i : %i\n\r", i, *temp);
    }
}
