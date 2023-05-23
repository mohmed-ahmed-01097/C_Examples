#include <stdio.h>
#include <stdlib.h>

#include "datatype.h"
#include "mem_man.h"

void mm_vidPoolInit(Mem_tstrPool* pstrPool){
    Mem_tstrBlock* pstrBlock;

    u8 u8BlockOverHead = pstrPool->m_u16BlockSize+sizeof(Mem_tstrBlock);

    pstrPool->pstr_FirstFree = (Mem_tstrBlock*)pstrPool->m_pu8Memory;

    pstrBlock = pstrPool->pstr_FirstFree;
    for(u16 i = pstrPool->m_u16BlocksNum-1 ; i-- ; ){
        pstrBlock->pstr_Next = (Mem_tstrBlock*)((u8*)pstrBlock + u8BlockOverHead);
        pstrBlock = pstrBlock->pstr_Next;
        pstrPool->m_u16FreeBlocks++;
    }
    pstrBlock->pstr_Next = NULL;
    pstrPool->m_u16FreeBlocks++;
    pstrBlock = pstrPool->pstr_FirstFree;
}

void* mm_pvidAllocate(Mem_tstrPool* pstrPool){
    void* pvidRet = NULL;

    if(pstrPool->m_u16FreeBlocks){
        pvidRet = (void*)((u8*)pstrPool->pstr_FirstFree + sizeof(Mem_tstrBlock));
        pstrPool->pstr_FirstFree = pstrPool->pstr_FirstFree->pstr_Next;
        pstrPool->m_u16FreeBlocks--;
    }
    return (void*)pvidRet;
}

void mm_vidFree(void* pvidData, Mem_tstrPool* pstrPool){
    if(pstrPool->m_u16FreeBlocks < pstrPool->m_u16BlocksNum && pvidData != NULL){
        Mem_tstrBlock* pstrBlock = (Mem_tstrBlock*)((u8*)pvidData - sizeof(Mem_tstrBlock));
        pstrBlock->pstr_Next = pstrPool->pstr_FirstFree;
        pstrPool->pstr_FirstFree = pstrBlock;
        pstrPool->m_u16FreeBlocks++;
    }
}

void mm_vidShowStats(Mem_tstrPool* pstrPool){
    u16 u16Num = pstrPool->m_u16BlocksNum - pstrPool->m_u16FreeBlocks;
    printf("\t\tMemory Management\n");
    printf("\tUsed Blocks = %i of %i (full [%.0f\%])\n", u16Num, pstrPool->m_u16BlocksNum, ((f32)u16Num/pstrPool->m_u16BlocksNum)*100.0);
    printf("\t\tFree Blocks\n");
    Mem_tstrBlock* pstrBlock = pstrPool->pstr_FirstFree;
    for(u16 i = 1; pstrBlock != NULL ; i++) {
        printf("[%#p] ", pstrBlock);
        pstrBlock = pstrBlock->pstr_Next;
        if(!(i%4)){
            printf("\n");
        }
    }
    printf("\n");
}
