#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "bj_declare.h"

int main(void)
{


  // 'C' 'D' 'H' 'S'
  
  int Card = 10;
  char Suit = Heart();
  
  paintCard(Card, Suit);
  
  return 0;
}
