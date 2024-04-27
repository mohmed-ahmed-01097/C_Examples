#ifndef CARD_H
#define CARD_H

#include "data_type.h"

_tenuReturnState CARD_getCardHolderName(Card_tstrData *const card);
_tenuReturnState CARD_getCardExpiryDate(Card_tstrData *const card);
_tenuReturnState CARD_getCardPAN       (Card_tstrData *const card);

#endif // CARD_H
