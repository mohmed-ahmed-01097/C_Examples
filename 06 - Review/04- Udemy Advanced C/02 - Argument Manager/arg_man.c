#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "datatype.h"
#include "arg_man.h"

void _help(void* pvid){
    Arg_tstrOption* pstrRet = (Arg_tstrOption*)pvid;
    for( ; pstrRet->m_u8ShortName ; pstrRet++) {
        printf("-%c, --%s\t: %s\n", pstrRet->m_u8ShortName, pstrRet->m_pu8LongName, pstrRet->m_u8Description);
    }
}
Arg_tstrOption help = {.m_u8ShortName = 'h', .m_pu8LongName = (u8*)"help", .m_u8Description = NULL,.pfuncCallBack  = (void*)_help};


Arg_tstrOption* argm_strFindOptionByShortName(Arg_tstrOption* pstrOptions, u8 u8ShortName){
    Arg_tstrOption* pstrRet = NULL;
    if(u8ShortName == 'h'){
        pstrRet = &help;
    }else{
        while(pstrOptions->m_u8ShortName){
            if(pstrOptions->m_u8ShortName == u8ShortName){
                pstrRet = pstrOptions;
                break;
            }
            pstrOptions++;
        }
    }
    return pstrRet;
}
Arg_tstrOption* argm_strFindOptionByLongName(Arg_tstrOption* pstrOptions, u8* pu8LongName){
    Arg_tstrOption* pstrRet = NULL;
    if(!strcmp((const char*)pu8LongName, "help")){
        pstrRet = &help;
    }else{
        while(pstrOptions->m_u8ShortName){
            if(!strcmp((const char*)pstrOptions->m_pu8LongName, (const char*)pu8LongName)){
                pstrRet = pstrOptions;
                break;
            }
            pstrOptions++;
        }
    }
    return pstrRet;
}

void argm_parse(Arg_tstrOption* pstrOptions, u16 argc, u8* argv[]){
    Arg_tstrOption* pstrRet = NULL;

    for(u16 i = 1 ; i<argc ; i++){
        if(argv[i][0] == '-'){
            if(argv[i][1] == '-'){
                pstrRet = argm_strFindOptionByLongName(pstrOptions, &argv[i][2]);
            }else{
                pstrRet = argm_strFindOptionByShortName(pstrOptions, argv[i][1]);
            }
            if(pstrRet != NULL){
                if(pstrRet == &help) {
                    pstrRet->pfuncCallBack((void*)pstrOptions);
                }else if((i<= argc-2) && (argv[i+1][0] != '-')){
                    pstrRet->pfuncCallBack((void *)argv[++i]);
                }else{
                    pstrRet->pfuncCallBack(NULL);
                }
            }else{
                printf("undefined option %s \n", argv[i]);
            }
        }else{
            printf("unrecognized option %s \n", argv[i]);
        }
    }
}
