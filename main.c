#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "bj_declare.h"

int main(void)
{
  int Card = 1;
  int Suit = Diamond();
  paintCard(Card, Suit);
  
  return 0;
}
