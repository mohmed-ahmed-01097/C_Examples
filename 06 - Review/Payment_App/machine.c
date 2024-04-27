#include "machine.h"

char* months[MONTHS_NUM] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Des"};

static int MaxAmount = MAX_AMOUNT;

_tenuReturnState MACHINE_getTransactionDate  (_tstrDate *const t_date){
    _tenuReturnState ret = Ret_Nok;
    char date[] = __DATE__;
    date[3] = '\0';
    for(int i = MONTHS_NUM ; i-- ; ){
        if(strcmp(months[i], date) == 0){
            t_date->mm = i + 1;
            t_date->yy = (date[9]-'0') * 10 + (date[10]-'0');
            ret = Ret_Ok;
            break;
        }
    }
    return ret;
}

_tenuReturnState MACHINE_isCardExpried       (const _tstrDate *const e_date, const _tstrDate *const t_date){
    _tenuReturnState ret = Ret_Nok;
    if(e_date->yy > t_date->yy || (e_date->yy == t_date->yy && e_date->mm >= t_date->mm)){
        ret = Ret_Ok;
    }
    return ret;
}

_tenuReturnState MACHINE_getTransactionAmount(int *const amount){
    _tenuReturnState ret = Ret_Nok;
    printf("Enter Transaction Amount :");
    int num = scanf("%d", amount);
    if(num == 1){
        ret = Ret_Ok;
    }
    return ret;
}

_tenuReturnState MACHINE_isBelowMaxAmount    (const int amount){
    _tenuReturnState ret = Ret_Nok;
    if(amount <= MaxAmount){
        ret = Ret_Ok;
    }
    return ret;
}

_tenuReturnState MACHINE_setMaxAmount        (int maxAmount){
    _tenuReturnState ret = Ret_Ok;
    MaxAmount = maxAmount;
    return ret;
}
