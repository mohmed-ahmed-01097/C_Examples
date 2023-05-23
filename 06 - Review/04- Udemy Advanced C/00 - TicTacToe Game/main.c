#include <stdio.h>
#include <stdlib.h>

#include "datatype.h"
#include "tictac.h"

int main(){

    u8 u8winner;

#if GAME_PLAYER == 1
    init_Computer();
#endif // GAME_PLAYER

    render_playground();
    while(1){
        switch(u8winner = judge()){
            case Game_X:
            case Game_O:
                printf("%c Winner!!!", u8winner);
                break;
            case Game_N:
                printf("No Winner!!!");
                break;
            case Game_C:
                if(get_player_input() == Game_True)     render_playground();
                continue;
        }
        break;
    }
    return 0;
}
