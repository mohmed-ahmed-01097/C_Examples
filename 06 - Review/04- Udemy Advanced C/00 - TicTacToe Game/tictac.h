#ifndef TICTAC_H_INCLUDED
#define TICTAC_H_INCLUDED

#define GAME_ROW        5u
#define GAME_COL        5u
#define GAME_PLAYER     1u


void init_Computer(void);

u8 get_player_input(void);

u8 get_Computer(void);
u8 get_Player(void);
u8 get_play(u8 u8Num);

u8 judge(void);

void render_playground(void);

#endif // TICTAC_H_INCLUDED
