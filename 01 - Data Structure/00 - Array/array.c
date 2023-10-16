#include <stdio.h>

typedef unsigned char u8;

#define MAX_LENGTH		100

static u8 u8Array[MAX_LENGTH];
static u8 u8Size;

void Array_Traverse(const u8* pu8Array, const u8 u8size);
u8   Array_Search  (const u8* pu8Array, const u8 u8size, u8 u8data);

void Array_update   (u8* pu8Array, u8 u8size, u8 u8position, u8 u8data);
void Array_Insertion(u8* pu8Array, u8* pu8size, u8 u8position, u8 u8data);
void Array_Deletion (u8* pu8Array, u8* pu8size, u8 u8position);


void main(void){
    Array_Traverse(u8Array, u8Size);
    printf("//////////////////////////////////\n");

    Array_Insertion(u8Array, &u8Size, 0, 1);
    Array_Insertion(u8Array, &u8Size, 1, 2);
    Array_Insertion(u8Array, &u8Size, 2, 3);
    Array_Insertion(u8Array, &u8Size, 3, 4);
    Array_Insertion(u8Array, &u8Size, 4, 5);
    Array_Insertion(u8Array, &u8Size, 5, 6);
    Array_Insertion(u8Array, &u8Size, 6, 7);
    Array_Insertion(u8Array, &u8Size, 7, 8);
    Array_Insertion(u8Array, &u8Size, 8, 9);
    Array_Insertion(u8Array, &u8Size, 9, 10);

    Array_Traverse(u8Array, u8Size);
    printf("//////////////////////////////////\n");

    Array_Insertion(u8Array, &u8Size, 0, 0);

    Array_Traverse(u8Array, u8Size);
    printf("//////////////////////////////////\n");

    Array_Deletion(u8Array, &u8Size, 10);

    Array_Traverse(u8Array, u8Size);
    printf("//////////////////////////////////\n");

    Array_update(u8Array, u8Size, 9, 10);

    Array_Traverse(u8Array, u8Size);
    printf("//////////////////////////////////\n");

    u8 index = Array_Search(u8Array, u8Size, 10);
    printf("10 is in index [%g]\n", (index == 255) ? (float)1/0 : (float)index);

    index = Array_Search(u8Array, u8Size, 100);
    printf("10 is in index [%g]\n", (index == 255) ? (float)1/0 : (float)index);

}

void Array_Traverse(const u8* pu8Array, const u8 u8size){
    for(u8 i=0 ; i<u8size ; i++, pu8Array++){
        printf("A[%d]=%d \n", i, *pu8Array);
    }
}
u8 Array_Search(const u8* pu8Array, const u8 u8size, u8 u8data){
    for(u8 i = u8size ; i-- ; pu8Array++){
        if(*pu8Array == u8data)
            return u8size - i - 1;
    }
    return -1;
}
void Array_update(u8* pu8Array, u8 u8size, u8 u8position, u8 u8data){
    if(u8size > u8position)
        pu8Array[u8position] = u8data;
}
void Array_Insertion(u8* pu8Array, u8* pu8size, u8 u8position, u8 u8data){
    for(u8 i=*pu8size ; i-->u8position ; ){
        pu8Array[i+1] = pu8Array[i];
    }
    pu8Array[u8position] = u8data;
    (*pu8size)++;
}
void Array_Deletion(u8* pu8Array, u8* pu8size, u8 u8position){
    for(u8 i=u8position ; ++i<*pu8size ; ){
        pu8Array[i-1] = pu8Array[i];
    }
    (*pu8size)--;
}

