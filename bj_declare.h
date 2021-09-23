#include <stdio.h>
#include <stdbool.h>
#include <time.h>    // time()
#include <stdlib.h>  // rand(), srand()

#ifndef BJ_DECLARE_H    // If not included to any file
#define BJ_DECLARE_H    // Declare macro as a flag that specifies bj_declare.h is included

// Declare all functions
char Club(void);
char Diamond(void);
char Heart(void);
char Spade(void);

int moveCounter(int x, int y);
int RandomInt();

char cardIntToChar(int Card);
int cardShuffleAndDraw(int Card);

void paintCard(int x, char y);

#endif


/* TODO: Address the move counter situation */
int moveCounter(int x, int y)
{
    int result_move = x + y;
    return (result_move);
}

void paintCard(int Card, char Suit)
{
   if ((RandomInt() % 2) == 0) {
       printf(" _____\n|%c   |\n| %.2d |\n|___%c|\n", Suit, Card, Suit);
   } else {
       printf(" _____\n|   %c|\n| %.2d |\n|%c___|\n", Suit, Card, Suit);
   }
}

    /* Cards As Int and String

        0 = 'Ace'
        1 = 'Two'
        2 = 'Thr'
        3 = 'Four'
        4 = 'Five'
        5 = 'Six'
        6 = 'Seven'
        7 = 'Eight'
        8 = 'Nine'
        9 = 'Ten'
       10 = 'Jack'
       11 = 'Queen'
       12 = 'King'
       13 = 'joker'

    */

// TODO: This doesn't return correctly, work out pointer situation
char cardIntToChar(int Card)
{
    if (Card > 14)
    {
        return EXIT_FAILURE;
    }
        
   // TODO: store globally (waste of memory initialising each call)
                            // 0 ,  1 ,  2 ,  3 ,  4 ,  5 ,  6 ,  7 ,  8 ,  9 , 10 , 11 , 12 , 13
    char cardCharChart[14] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'j'};
  
    char selectedCard = cardCharChart[Card];
    return selectedCard;
}

int cardShuffleAndDraw(int Card)
{
    int ShuffledDeck = cardIntToChar(Card);
    return ShuffledDeck;
}


int RandomInt(int MAX)
{   /* returns number between 0 and MAX */
    return rand() % MAX;
}

char Club()
{
    return 'C';
}

char Diamond()
{
    return 'D';
}

char Heart()
{
    return 'H';
}

char Spade()
{
    return 'S';
}
