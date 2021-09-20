#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "bj_declare.h"

int main(void)
{


  // 'C' 'D' 'H' 'S'
    // int i = 10;
  // char suit = 'j';

  // int moveCounter = Move_Counter(i,i);
  // printf("MOVE = %d\n", moveCounter);

  // printf("%.2d\n", i);
  // printf("%c\n", suit);
  
  int Card = 10;
  char Suit = 'C'; // 'C' 'D' 'H' 'S'
  
  Paint_Card(Card, Suit);
  
  return 0;
}
