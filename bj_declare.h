// If not included to any file
#ifndef BJ_DECLARE_H

// Declare macro as a flag that specifies arith.h is included
#define BJ_DECLARE_H

// Declare all functions
int Move_Counter (int x, int y);
void Paint_Card (int x, char y);

#endif

int Move_Counter (int x, int y)
{
    int result_move = x + y;
    return (result_move);
}



void Paint_Card (int x, char y)
{
    srand(time(NULL));
    int cycle_between_two = rand() % 2;

    int Card = x;
    char Suit = y;
         
   if (cycle_between_two == 0) {
       printf(" _____\n|%c   |\n| %.2d |\n|___%c|\n", Suit, Card, Suit);
   } else {
       printf(" _____\n|   %c|\n| %.2d |\n|%c___|\n", Suit, Card, Suit);
   }
}

