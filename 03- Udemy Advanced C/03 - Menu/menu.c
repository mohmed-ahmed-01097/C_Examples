#include <stdio.h>
#include <stdlib.h>

#include "datatype.h"
#include "menu.h"
#if 0
#define COLOR_BOLD                    "\e[1m"
#define COLOR_OFF                     "\e[m"
#define COLOR_BOLD_SLOW_BLINKING      "\e[1;5m"
#define COLOR_BOLD_SLOW_BLINKING_RED  "\e[1;5;31m"
#define COLOR_BOLD_BLUE               "\e[1;34m"
#define COLOR_BOLD_RED                "\033[1;33m"
#else
#define COLOR_BOLD_RED                ""
#define COLOR_OFF                     ""
#endif

static Menu_tstrRoot* pstrMenuPath_GLB[MAX_MENU_DEPTH];
static u16 u16CurrentMenu;

static void menu_vidShowPrompt(void){
    printf(COLOR_BOLD_RED);
    printf("%02i(", u16CurrentMenu);
    for (u16 i = 0 ; i < u16CurrentMenu; i++){
        printf("%s -> ", pstrMenuPath_GLB[i]->m_pu8prompt);
    }
    printf("%s) ", pstrMenuPath_GLB[u16CurrentMenu]->m_pu8prompt);
    printf(COLOR_OFF);
}

void menu_vidSet_Root(Menu_tstrRoot* pstrRoot){
    pstrMenuPath_GLB[u16CurrentMenu] = pstrRoot;
    menu_vidShowPrompt();
}

void menu_vidProcessUserInput(u8 u8Input){
    Menu_tstrItem* pstrCurrent = pstrMenuPath_GLB[u16CurrentMenu]->m_pstrItems;
    switch(u8Input){
        case Help:
            for ( ; pstrCurrent->m_u8Letter ; pstrCurrent++){
                printf("=>%c, \t%s\n", pstrCurrent->m_u8Letter, pstrCurrent->m_pu8Description);
            }
            break;
        case Clear:
            system("cls");
            break;
        case Back:
            if(u16CurrentMenu){
                u16CurrentMenu--;
            }
            break;
        default:
            for ( ; pstrCurrent->m_u8Letter ; pstrCurrent++){
                //printf("==>%c, %c", pstrCurrent->m_u8Letter, u8Input);
                if(pstrCurrent->m_u8Letter == u8Input){
                    if(pstrCurrent->m_u8type  == MENU_ACTION){
                        printf("\t--> %s\n", pstrCurrent->m_pu8Description);
                    }else{
                        if(u16CurrentMenu<MAX_MENU_DEPTH-1){
                            pstrMenuPath_GLB[++u16CurrentMenu] = pstrCurrent->m_uniAction.m_pstrMenu;
                        }else{
                            printf("No more memory for more deep menues\n");
                        }
                    }
                    break;
                }
            }
            break;
    }
    menu_vidShowPrompt();
}

