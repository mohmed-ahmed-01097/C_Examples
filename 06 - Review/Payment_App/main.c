#include "card.h"
#include "machine.h"
#include "server.h"

int main()
{
    Card_tstrData card;
    Machine_tstrData machine;

    _tenuReturnState state;

    do{
        state = CARD_getCardHolderName(&card); if(state){ break; }
        state = CARD_getCardPAN       (&card); if(state){ break; }
        state = CARD_getCardExpiryDate(&card); if(state){ break; }
    }while(0);

    if(state){ return state; }
    printf(" >> %-*s - %-*s : %2d/%2d\n", NAME_LENGTH, card.name, PAN_LENGTH, card.pan, card.e_date.mm, card.e_date.yy);

    MACHINE_getTransactionDate(&machine.t_date);

    state = MACHINE_isCardExpried (&card.e_date, &machine.t_date);
    if(state){ printf(CARD_EXPIRED_MSG); return state; }

    do{
        state = MACHINE_getTransactionAmount(&machine.amount); if(state){ continue; }
        state = MACHINE_isBelowMaxAmount    ( machine.amount); if(state){ printf(EXCEDDED_AMOUNT_MSG); continue; }
    }while(0);

    if(state){ return state; }
    printf("%s, [%d-%d] \t amount : %d\n", __DATE__, machine.t_date.mm, machine.t_date.yy, machine.amount);

    int position;
    Acount_tstrData acount;
    do{
        state = SERVER_isValidAccount        (&card,   &position);       if(state){ printf(INVALID_ACCOUNT_MSG   ); break; }
        state = SERVER_recieveTransactionData(&acount,  position);       if(state){ continue; }
        state = SERVER_isAmountAvilable      (&acount, machine.amount);  if(state){ printf(INSUFFECIENT_FUNDS_MSG); break; }
        do{
            state = SERVER_saveTransaction (&acount,  position, machine.amount); if(state){ continue; }
        }while(0);
    }while(0);
    if(state){ return state; }
    printf("%-*s %-*s %0*d\n", PAN_LENGTH, acount.pan, NAME_LENGTH, acount.name, AMOUNT_LENGTH, acount.valisAmount - machine.amount);


    return 0;
}
