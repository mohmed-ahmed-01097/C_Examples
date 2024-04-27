#include "server.h"

_tenuReturnState SERVER_isValidAccount(const Card_tstrData *const card, int *position){
    _tenuReturnState ret = Ret_Nok;
    FILE *database = fopen(DATABASE_FILE_NAME, "r");
    if(database == NULL){
        printf(" \"\" Error In Opening Database\"\"");
        //exit(1);
    }else{
        char buffer[DATABASE_LINE_MAX + 1] = {0};
        Acount_tstrData acount;
        *position = ftell(database);
        while(fgets(buffer, DATABASE_LINE_MAX, database) != NULL){
            sscanf(buffer, "%s %s %d", acount.pan, acount.name, &acount.valisAmount);
            if(!strcmp(acount.pan, card->pan) && !strcmp(acount.name, card->name)){
                ret = Ret_Ok;
                break;
            }
            *position = ftell(database);
        }
        fclose(database);
#ifdef ACCOUNT_ADD
        if(ret){
            database = fopen(DATABASE_FILE_NAME, "a");
            if(database == NULL){
                printf(" \"\" Error In Opening Database\"\"");
                //exit(1);
            }else{
                fprintf(database, "\n%-*s %-*s %0*d", PAN_LENGTH, card->pan, NAME_LENGTH, card->name, AMOUNT_LENGTH, 0);
                fclose(database);
            }
        }
#endif // ACCOUNT_ADD
    }
    return ret;
}

_tenuReturnState SERVER_recieveTransactionData(Acount_tstrData *const acount, int position){
    _tenuReturnState ret = Ret_Nok;
    FILE *database = fopen(DATABASE_FILE_NAME, "r+");
    if(database == NULL){
        printf(" \"\" Error In Opening Database\"\"");
        //exit(1);
    }else{
        fseek(database, position , SEEK_SET);
        char buffer[DATABASE_LINE_MAX + 1] = {0};
        if(fgets(buffer, DATABASE_LINE_MAX, database) != NULL){
            printf("\t >>> [%s]\n", buffer);
            if(sscanf(buffer, "%s %s %d", acount->pan, acount->name, &acount->valisAmount) == 3){
                ret = Ret_Ok;
            }
        }
        fclose(database);
    }
    return ret;
}
_tenuReturnState SERVER_isAmountAvilable(const Acount_tstrData *const acount, int amount){
    _tenuReturnState ret = Ret_Nok;
    if(acount->valisAmount >= amount){
        ret = Ret_Ok;
    }
    return ret;

}
_tenuReturnState SERVER_saveTransaction(Acount_tstrData *const acount, int position, int amount){
    _tenuReturnState ret = Ret_Nok;
    FILE *database = fopen(DATABASE_FILE_NAME, "r+");
    if(database == NULL){
        printf(" \"\" Error In Opening Database\"\"");
        //exit(1);
    }else{
        fseek(database, position, SEEK_SET);
        if(fprintf(database, "%-*s %-*s %0*d", PAN_LENGTH, acount->pan, NAME_LENGTH, acount->name, AMOUNT_LENGTH, acount->valisAmount - amount) != 0){
            ret = Ret_Ok;
        }
        fclose(database);
    }
    return ret;
}
