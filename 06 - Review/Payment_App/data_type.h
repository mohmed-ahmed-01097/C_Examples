#ifndef DATA_TYPE_H
#define DATA_TYPE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CARD_EXPIRED_MSG            "\"Expired Card\", Please Enter Valid Card\n"
#define EXCEDDED_AMOUNT_MSG         "\"Amount Exceeding Limit\"\n"
#define INVALID_ACCOUNT_MSG         "\"Invalid Account\""
#define INSUFFECIENT_FUNDS_MSG      "\"Insuffecient Funds\""


#define AMOUNT_LENGTH   7
#define NAME_LENGTH     24
#define PAN_LENGTH      12
#define DATE_LENGTH     2

#define MONTHS_NUM      12
#define YEARS_MAX       99

typedef enum{
    Ret_Ok,
    Ret_Nok
}_tenuReturnState;

typedef struct{
    short mm;
    short yy;
}_tstrDate;

typedef struct{
    char name[NAME_LENGTH+1];
    char pan[PAN_LENGTH+1];
    _tstrDate e_date;
}Card_tstrData;

typedef struct{
    int amount;
    _tstrDate t_date;
}Machine_tstrData;

typedef struct{
    char name[NAME_LENGTH+1];
    char pan[PAN_LENGTH+1];
    int valisAmount;
}Acount_tstrData;

#endif // DATA_TYPE_H
