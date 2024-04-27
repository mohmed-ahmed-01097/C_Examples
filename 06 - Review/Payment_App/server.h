#ifndef SERVER_H
#define SERVER_H

#include "data_type.h"

#define DATABASE_FILE_NAME      "server.txt"
#define DATABASE_LINE_MAX       NAME_LENGTH + 1u + PAN_LENGTH + 1u + AMOUNT_LENGTH + 1u

_tenuReturnState SERVER_isValidAccount(const Card_tstrData *const card, int *position);
_tenuReturnState SERVER_recieveTransactionData(Acount_tstrData *const acount, int position);
_tenuReturnState SERVER_isAmountAvilable(const Acount_tstrData *const acount, int amount);
_tenuReturnState SERVER_saveTransaction(Acount_tstrData *const acount, int position, int amount);

#endif // SERVER_H
