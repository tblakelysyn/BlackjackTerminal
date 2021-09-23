
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

  int Card = 12;
  int Suit = Diamond();

  return EXIT_SUCCESS;
}


