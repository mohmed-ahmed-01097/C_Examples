#include <stdio.h>

union Uunion1 {
       int id1;
       int id2;
       char name;       // padding
       float percentage;
       char c;          // padding
};

struct Sstructure1 {
       int id1;
       int id2;
       char name;       // padding
       float percentage;
       char c;          // padding
};

#pragma pack(1)
typedef struct structure3 {
       int id1;
       int id2;
       char name;       // padding
       float percentage;
       char c;          // padding
}s_st_padding;
#pragma pack(4)

typedef struct structure2 {
       int id1;
       int id2;
       char name;       // Padding
       char c;
       float percentage;
}s_st;


void main (void){
    union Uunion1 u1;
    struct Sstructure1 s1;
    printf("union                      %d\n", sizeof(u1));
    printf("Struct with padding        %d\n", sizeof(s1));
    printf("Struct without padding     %d\n", sizeof(s_st_padding));
    printf("struct with reduse padding %d\n", sizeof(s_st));
}
