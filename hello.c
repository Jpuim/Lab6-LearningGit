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
    printf("Hello World!\n");

    guideMissleTT();
    sixSeven();

    Square sq;

    setSide(&sq, 6.7);

    printf("%lf\n", getSide(&sq));
    printf("Area = %lf\n", getArea(&sq));

    return 0;
}
