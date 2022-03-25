
#include "bj_declare.h"

void init ()
{
  /* This function is for all initialisations required. 
     Run once, at start of main (before anything else) */
  srand(time(NULL));
}

int main(void)
{
  init();

  int Card = RandomInt(13);
  Card = cardShuffleAndDraw(Card);

  int Suit = Diamond();
  printf("Card: %d = cardIntToChar: %c\n", Card, cardIntToChar(Card));

  return EXIT_SUCCESS;
}


