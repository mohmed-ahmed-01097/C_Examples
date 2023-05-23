#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "datatype.h"
#include "tictac.h"

static u8 u8CurrentPlayer = Game_X;
static u8 au8PlayGroundValues_GLB[GAME_ROW][GAME_COL];

u8 get_player_input(void){
    u8 u8Ret = Game_False;

#if GAME_PLAYER == 1
    switch(u8CurrentPlayer){
        case Game_X:
            u8Ret = get_Player();
            break;
        case Game_O:
            u8Ret = get_Computer();
            break;
    }
#elif GAME_PLAYER == 2
    u8Ret = get_Player();
#endif // GAME_PLAYER

    return u8Ret;
}

void init_Computer(void){
    srand(time(NULL));   // Initialization, should only be called once.
    int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
}
u8 get_Computer(void){
    return get_play(((rand()%GAME_ROW + 1)*10)+(rand()%GAME_COL + 1));
}
u8 get_Player(void){
    u8 u8Ret = Game_False;

    printf("%s", (u8CurrentPlayer == Game_X) ? " X --> " : " O --> ");
    fflush(stdout);    fflush(stdin);
    scanf("%hi",&u8Ret);

    return get_play(u8Ret);
}

u8 get_play(u8 u8Num){
    u8 u8Ret = Game_False;
    u8 u8Row, u8Col;

    u8Row = u8Num/10 -1;
    u8Col = u8Num%10 -1;

    if((u8Row<GAME_ROW) && (u8Col<GAME_COL)){
        if(!au8PlayGroundValues_GLB[u8Row][u8Col]){
            au8PlayGroundValues_GLB[u8Row][u8Col] = u8CurrentPlayer;
            u8CurrentPlayer = (u8CurrentPlayer == Game_X)? Game_O : Game_X;
            u8Ret = Game_True;
        }else{
            printf("The selected cell is already selected before. Please try another cell\n");
        }
    }else{
        printf("The selected cell is invalid. Please try another cell number\n");
    }
    return u8Ret;
}

u8 judge_Rows(void){
    u8 u8Ret = Game_N;

    for(u8 i = GAME_ROW ; i-- ; ){
        u8Ret = Game_N;
        u8* pu8temp = &au8PlayGroundValues_GLB[i][0];
        for(u8 j = GAME_COL ; j-- ; pu8temp++){
            if(*pu8temp){
                if(*pu8temp == au8PlayGroundValues_GLB[i][0]){
                    u8Ret = *pu8temp;
                    continue;
                }
            }
            u8Ret = Game_C;
            break;
        }
        if(u8Ret != Game_C){
            break;
        }
    }
    return u8Ret;
}

u8 judge_Cols(void){
    u8 u8Ret = Game_N;

    for(u8 i = GAME_COL ; i-- ; ){
        u8Ret = Game_N;
        u8* pu8temp = &au8PlayGroundValues_GLB[0][i];
        for(u8 j = GAME_ROW ; j-- ; pu8temp+=GAME_COL){
            if(*pu8temp){
                if(*pu8temp == au8PlayGroundValues_GLB[0][i]){
                    u8Ret = *pu8temp;
                    continue;
                }
            }
            u8Ret = Game_C;
            break;
        }
        if(u8Ret != Game_C){
            break;
        }
    }
    return u8Ret;
}

u8 judge_Diagonals(void){
    u8 u8Ret = Game_N;

    for(u8 i = 0; i<GAME_ROW ; i++){
        u8 u8temp = au8PlayGroundValues_GLB[i][i];
        if(u8temp){
            if(u8temp == au8PlayGroundValues_GLB[0][0]){
                u8Ret = u8temp;
                continue;
            }
        }
        u8Ret = Game_C;
        break;
    }
    if(u8Ret == Game_C){
        for(u8 i = 0; i<GAME_ROW ; i++){
            u8 u8temp = au8PlayGroundValues_GLB[GAME_ROW-i-1][i];
            if(u8temp){
                if(u8temp == au8PlayGroundValues_GLB[GAME_ROW-1][0]){
                    u8Ret = u8temp;
                    continue;
                }
            }
            u8Ret = Game_C;
            break;
        }
    }
    return u8Ret;
}

u8 judge_Complete(void){
    u8 u8Ret = Game_N;

    u8* pu8temp = &au8PlayGroundValues_GLB[0][0];
    for(u8 i = GAME_ROW*GAME_COL ; i-- ; pu8temp++){
        if(*pu8temp){
            continue;
        }
        u8Ret = Game_C;
        break;
    }
    return u8Ret;
}

u8 judge(void){
    u8 u8Ret = Game_C;

    do{
       u8Ret = judge_Rows();
       if(u8Ret != Game_C)  break;
       u8Ret = judge_Cols();
       if(u8Ret != Game_C)  break;
       u8Ret = judge_Diagonals();
       if(u8Ret != Game_C)  break;
       u8Ret = judge_Complete();
    }while(0);

    return u8Ret;
}

void render_playground(void){
    //clc
   system("cls");
    printf("%c Turn (12 => R=1,C=2)...\n", u8CurrentPlayer);

    for(u8 i = GAME_ROW ; i-- ; ){
        u8* pu8temp = &au8PlayGroundValues_GLB[GAME_ROW-i-1][0];

        printf(" -");
        for(u8 j = GAME_COL ; j-- ; ){
            printf("------");
        }
        printf("\n");

        printf(" |");
        for(u8 j = GAME_COL ; j-- ; ){
            printf("     |");
        }
        printf("\n");

        for(u8 j = GAME_COL ; j-- ; ){
            printf(" |  %c ", *pu8temp ? *pu8temp : ' ');
            pu8temp++;
        }
        printf(" |\n");
        printf(" |");
        for(u8 j = GAME_COL ; j-- ; ){
            printf("     |");
        }
        printf("\n");

    }
    printf(" -");
    for(u8 j = GAME_COL ; j-- ; ){
        printf("------");
    }
    printf("\n");
}
