#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Assignment 15: Random Number Generator
 * This program generates a random integer between specified minimum and maximum values.
 * It uses the current time as a seed to ensure different results on each run.
 */

int main(void)
{
    int min = 1, max = 10;

    srand((unsigned)time(NULL));
    int r = min + rand() % (max - min + 1);

    printf("Random number: %d\n", r);
    return 0;
}