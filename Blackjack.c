/**
*@brief Simulating a classic game of Blackjack
*@author Kristen Stough
*/

#include <stdio.h>

int main(){
    return 0
}

//step 1: create a card

typedef enum {
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES,
} Suit;

typedef enum {
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
} Rank;

typedef struct {
    Rank rank;
    Suit suit;
} Card;

int card_value(Card card);
void print_card(Card card);

//step 2: build the deck

#define CARDS_PER_DECK 52

typedef struct {
    Card *cards;
    int size;
    int top;
} Deck;

//step 3: configurable number of decks



//step 4: build the hand
