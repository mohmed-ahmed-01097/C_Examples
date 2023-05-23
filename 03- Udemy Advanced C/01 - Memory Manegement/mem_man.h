#ifndef MEM_MAN_H_INCLUDED
#define MEM_MAN_H_INCLUDED

typedef struct SMem_Block{
    struct SMem_Block* pstr_Next;
}Mem_tstrBlock;

typedef struct SMem_List{
    u8* m_pu8Memory;
    u16 m_u16BlockSize;
    u16 m_u16BlocksNum;
    u16 m_u16FreeBlocks;

    Mem_tstrBlock* pstr_FirstFree;
}Mem_tstrPool;

#define FIXED_SIZE      1u
#define VARIABLE_SIZE   2u

#define MEM_MAN_TYPE    FIXED_SIZE

#if MEM_MAN_TYPE == FIXED_SIZE
    #define BLOCK_SIZE  16u
    #define BLOCK_NUM   16u
    #define MEM(num, size)     ((num) * ((size) + (sizeof(Mem_tstrBlock))))
    #define MEM_SIZE    MEM(BLOCK_NUM, BLOCK_SIZE)
#elif MEM_MAN_TYPE == VARIABLE_SIZE
    #define BLOCK_NUM   200u
    #define MEM_SIZE    BLOCK_NUM
#endif

void mm_vidPoolInit(Mem_tstrPool* pstrPool);

void* mm_pvidAllocate(Mem_tstrPool* pstrPool);

void mm_vidFree(void* pvidData, Mem_tstrPool* pstrPool);

void mm_vidShowStats(Mem_tstrPool* pstrPool);

#endif // MEM_MAN_H_INCLUDED
