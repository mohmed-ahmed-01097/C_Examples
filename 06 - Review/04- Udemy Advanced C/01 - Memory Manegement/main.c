#include <stdio.h>
#include <stdlib.h>

#include "datatype.h"
#include "mem_man.h"

#define REPEAT      2
u8 au8MyMem[MEM_SIZE];
Mem_tstrPool strPool ={
    .m_pu8Memory = au8MyMem,
    .m_u16BlockSize = BLOCK_SIZE,
    .m_u16BlocksNum = BLOCK_NUM
};

int main(void) {
    mm_vidPoolInit(&strPool);
    mm_vidShowStats(&strPool);

    void * b[REPEAT];
    for(u16 i = REPEAT ; i-- ; ){
        b[i] = mm_pvidAllocate(&strPool);
        mm_vidShowStats(&strPool);
    }
    for(u16 i = REPEAT ; i-- ; ){
        mm_vidFree(b[i], &strPool);
        mm_vidShowStats(&strPool);
    }
}
