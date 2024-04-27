#ifndef MACHINE_H
#define MACHINE_H

#include "data_type.h"

#define MAX_AMOUNT          8000

extern char* months[MONTHS_NUM];

_tenuReturnState MACHINE_getTransactionDate  (_tstrDate *const t_date);
_tenuReturnState MACHINE_isCardExpried       (const _tstrDate *const e_date, const _tstrDate *const t_date);
_tenuReturnState MACHINE_getTransactionAmount(int *const amount);
_tenuReturnState MACHINE_isBelowMaxAmount    (const int amount);
_tenuReturnState MACHINE_setMaxAmount        (int maxAmount);

#endif // MACHINE_H
