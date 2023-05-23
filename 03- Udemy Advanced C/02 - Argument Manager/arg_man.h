#ifndef ARG_MAN_H_INCLUDED
#define ARG_MAN_H_INCLUDED

typedef void (*pfunc)(void *);

typedef struct{
    u8  m_u8ShortName;
    u8* m_pu8LongName;
    u8* m_u8Description;
    void (*pfuncCallBack)(void *);
}Arg_tstrOption;

void argm_parse(Arg_tstrOption* pstrOptions, u16 argc, u8* argv[]);


#endif // ARG_MAN_H_INCLUDED
