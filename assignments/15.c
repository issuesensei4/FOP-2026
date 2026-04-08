#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Assignment 15: Random Number Generator
 */

int main(void)
{
    int min = 1, max = 10;

    srand((unsigned)time(NULL));
    int r = min + rand() % (max - min + 1);

    printf("Random number: %d\n", r);
    return 0;
}