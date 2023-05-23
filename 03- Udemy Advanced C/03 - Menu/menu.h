#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

typedef enum{
    Help = '?',
    Back = '0',
    Clear = '#',
}Menu_tenuChild;

typedef enum  {
    MENU_SUBMENU,
    MENU_ACTION
}Menu_tenuItemType;

typedef union{
    void (*pfuncCallBack)(void);
    struct SMenu* m_pstrMenu;
}Menu_tuniAction;

typedef struct SMenuItem{
    u8  m_u8Letter;
    u8* m_pu8Description;
    Menu_tenuItemType m_u8type;
    Menu_tuniAction m_uniAction;
}Menu_tstrItem;

typedef struct SMenu{
    u8* m_pu8prompt;
    Menu_tstrItem* m_pstrItems;
}Menu_tstrRoot;


#define MAX_MENU_DEPTH      2

void menu_vidSet_Root(Menu_tstrRoot* pstrRoot);

void menu_vidProcessUserInput(u8 u8Input);



#endif // MENU_H_INCLUDED
