
#include "bj_declare.h"

int main(void)
{
  int Card = 14;
  int Suit = Diamond();
  paintCard(Card, Suit);
  cardIntToChar(Card);

  return 0;
}
