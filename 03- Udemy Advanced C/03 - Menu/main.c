#include <stdio.h>
#include <stdlib.h>

#include "datatype.h"
#include "menu.h"

Menu_tstrItem astrFileItems[] = {
    {.m_u8Letter = 'n', .m_pu8Description = (u8*)"Create New File",      .m_u8type = MENU_ACTION, .m_uniAction.pfuncCallBack = NULL},
    {.m_u8Letter = 'o', .m_pu8Description = (u8*)"Open an existing File",.m_u8type = MENU_ACTION, .m_uniAction.pfuncCallBack = NULL},
    {0}
};
Menu_tstrItem astrCopyItems[] = {
    {.m_u8Letter = 'c', .m_pu8Description = (u8*)"Copy to clipboard",    .m_u8type = MENU_ACTION, .m_uniAction.pfuncCallBack = NULL},
    {.m_u8Letter = 'f', .m_pu8Description = (u8*)"Copy to a file",       .m_u8type = MENU_ACTION, .m_uniAction.pfuncCallBack = NULL},
    {0}
};
Menu_tstrRoot strCopyRoot = {.m_pu8prompt = (u8*)"Copy", .m_pstrItems = astrCopyItems};
Menu_tstrItem astrEditItems[] = {
    {.m_u8Letter = 'c', .m_pu8Description = (u8*)"Copy a text",          .m_u8type = MENU_SUBMENU, .m_uniAction.m_pstrMenu = &strCopyRoot},
    {.m_u8Letter = 'v', .m_pu8Description = (u8*)"View to a file",       .m_u8type = MENU_ACTION, .m_uniAction.pfuncCallBack = NULL},
    {.m_u8Letter = 'a', .m_pu8Description = (u8*)"Select all",           .m_u8type = MENU_ACTION, .m_uniAction.pfuncCallBack = NULL},
    {0}
};
Menu_tstrItem astrViewItems[] = {
    {.m_u8Letter = '+', .m_pu8Description = (u8*)"Zoom in",             .m_u8type = MENU_ACTION, .m_uniAction.pfuncCallBack = NULL},
    {.m_u8Letter = '-', .m_pu8Description = (u8*)"Zoom out",            .m_u8type = MENU_ACTION, .m_uniAction.pfuncCallBack = NULL},
    {0}
};
Menu_tstrRoot strFileRoot = {.m_pu8prompt = (u8*)"File", .m_pstrItems = astrFileItems};
Menu_tstrRoot strEditRoot = {.m_pu8prompt = (u8*)"Edit", .m_pstrItems = astrEditItems};
Menu_tstrRoot strViewRoot = {.m_pu8prompt = (u8*)"View", .m_pstrItems = astrViewItems};

Menu_tstrItem astrRootItems[] = {
    {.m_u8Letter = 'f', .m_pu8Description = (u8*)"File", .m_u8type = MENU_SUBMENU, .m_uniAction.m_pstrMenu = &strFileRoot},
    {.m_u8Letter = 'e', .m_pu8Description = (u8*)"Edit", .m_u8type = MENU_SUBMENU, .m_uniAction.m_pstrMenu = &strEditRoot},
    {.m_u8Letter = 'v', .m_pu8Description = (u8*)"View", .m_u8type = MENU_SUBMENU, .m_uniAction.m_pstrMenu = &strViewRoot},
    {0}
};
Menu_tstrRoot strMenuRoot = {.m_pu8prompt = (u8*)"ROOT", .m_pstrItems = astrRootItems};

int main(int argc, char* argv[]){
    menu_vidSet_Root(&strMenuRoot);
    while(1){
        u8 u8Ret = 0;
        fflush(stdout);    fflush(stdin);
        scanf("%c",&u8Ret);;
        menu_vidProcessUserInput(u8Ret);
    }
    return 0;
}
