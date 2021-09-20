// If not included to any file
#ifndef BJ_DECLARE_H

// Declare macro as a flag that specifies arith.h is included
#define BJ_DECLARE_H

// Declare all functions
int moveCounter (int x, int y);
void paintCard (int x, char y);
void printClub(void);
void printDiamond(void);
void printHeart(void);
void printSpade(void);

#endif


/* TODO */
int moveCounter (int x, int y)
{
    int result_move = x + y;
    return (result_move);
}



void paintCard (int x, char y)
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



void printClub(void)
{
    printf("C");
}



void printDiamond(void)
{
    printf("D");
}



void printHeart(void)
{
    printf("H");
}



void printSpade(void)
{
    printf("S");
}


