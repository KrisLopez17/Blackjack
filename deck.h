/**
*@brief deck declarations
*@author Kristen Stough
*/

#ifndef DECK_H
#define DECK_H

#define CARDS_PER_DECK 52

typedef struct {
    Card *cards;
    int size;
    int top;
} Deck;

#endif DECK_H
