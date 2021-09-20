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
char Club(void);
char Diamond(void);
char Heart(void);
char Spade(void);

#endif


/* TODO */
int moveCounter (int x, int y)
{
    int result_move = x + y;
    return (result_move);
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

void paintCard (int Card, char Suit)
{
    srand(time(NULL));
             
   if ((rand() % 2) == 0) {
       printf(" _____\n|%c   |\n| %.2d |\n|___%c|\n", Suit, Card, Suit);
   } else {
       printf(" _____\n|   %c|\n| %.2d |\n|%c___|\n", Suit, Card, Suit);
   }

}
