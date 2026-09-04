/**
*@brief Simulating a classic game of Blackjack
*@author Kristen Stough
*/

#include <stdio.h>

void play_game(void);
void player_turn(Hand *player, Deck *deck);
void dealer_turn(Hand *dealer, Deck *deck);

int main(void)
{
    play_game();
    return 0;
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

Deck *create_deck(int number_of_decks);
void shuffle_deck(Deck *deck);
Card deal_card(Deck *deck);
void destroy_deck(Deck *deck);

//step 3: configurable number of decks

./blackjack 1
./blackjack 6

//step 4: build the hand

#define MAX_HAND_SIZE 12

typedef struct {
    Card cards[MAX_HAND_SIZE];
    int count;
} Hand;

void add_card(Hand *hand, Card card);
int hand_value(const Hand *hand);
int is_blackjack(const Hand *hand);
int is_bust(const Hand *hand);