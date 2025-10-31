#include <stdio.h>
#include "Square.h"

void guideMissleTT()
{
    printf("THEY HIT THE SECOND TOWER!\n");
}

void sixSeven()
{
    printf("67676767767676767\n");
}


int main(void) {
    // Here is a comment to make a change heheheheheh
    printf("Hello World!\n");

    guideMissleTT();
    sixSeven();

    Square sq;

    sq.setSide(6.7);

    printf("%lf", sq.getSide());



    return 0;
}