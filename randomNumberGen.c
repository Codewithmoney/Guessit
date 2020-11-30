// How to generate random numbers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate()
{
    int randNum;
    srand(time(0));
    randNum = rand()%100 + 1;// rand will generate random number but it will be very huge number so to make it between 1-100 i use this method.
    return randNum;
}