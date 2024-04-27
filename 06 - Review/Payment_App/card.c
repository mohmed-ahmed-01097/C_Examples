#include "card.h"

static _tenuReturnState _inNum(int size, const char * str_num){
    _tenuReturnState ret = Ret_Ok;
    for(int i = size ; i-- ; ){
        switch(*(str_num++)){
            case '0'...'9':             continue;
            default:  ret = Ret_Nok;    break;
        }
        break;
    }
    return ret;
}

_tenuReturnState CARD_getCardHolderName(Card_tstrData *const card){
    _tenuReturnState ret = Ret_Ok;
    printf("Enter the Card Name : ");
    char* str = gets(card->name);
    if(str == NULL || strlen(card->name) > NAME_LENGTH){
        card->name[NAME_LENGTH - 1] = '\0';
        ret = Ret_Nok;
    }
    for(char* str = card->name ; *str ; str++){
        if(*str == ' '){ *str = '_'; }
    }
    return ret;
}

_tenuReturnState CARD_getCardExpiryDate(Card_tstrData *const card){
    _tenuReturnState ret = Ret_Ok;
    printf("Enter the Expiry Date (mm / yy) : ");
    scanf("%hd / %hd", &card->e_date.mm, &card->e_date.yy);
    if((card->e_date.mm > MONTHS_NUM) || (card->e_date.yy > YEARS_MAX)){
        card->e_date.mm = 1;
        card->e_date.yy = 1;
        ret = Ret_Nok;
    }
    return ret;
}

_tenuReturnState CARD_getCardPAN       (Card_tstrData *const card){
    _tenuReturnState ret = Ret_Ok;
    printf("Enter the Card PAN : ");
    char* str = gets(card->pan);
    if(str == NULL || strlen(card->pan) > PAN_LENGTH
       || _inNum(PAN_LENGTH, card->pan)){
        *card->pan = '\0';
        ret = Ret_Nok;
    }
    return ret;
}
