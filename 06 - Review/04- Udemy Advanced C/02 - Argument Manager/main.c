#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "datatype.h"
#include "arg_man.h"

#define MAX_LENGTH      200

static u16 u16Count_GLB;
static u8* pu8Msg_GLB;

void c_CallBack(void* pvid){
    u16Count_GLB = atoi((const char*)pvid);
}
void m_CallBack(void* pvid){
    pu8Msg_GLB = (u8*)pvid;
}

Arg_tstrOption astrOptions[]={
    {.m_u8ShortName  = 'm', .m_pu8LongName  = (u8*)"msg",    .m_u8Description= (u8*)"the massage to be printed",           .pfuncCallBack  = (void*)m_CallBack},
    {.m_u8ShortName  = 'c', .m_pu8LongName  = (u8*)"count",  .m_u8Description= (u8*)"How many times to print the message", .pfuncCallBack  = (void*)c_CallBack},
    {0}
};

int main(int argc, char* argv[]){

    //out.exe -m MAAM -c 5
    argm_parse(astrOptions, argc, argv);

    for(u16 i = u16Count_GLB ; i-- ; ){
        printf("%s\n", pu8Msg_GLB);
    }

    return 0;
}
