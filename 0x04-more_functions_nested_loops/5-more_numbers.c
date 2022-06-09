#include "main.h"

/**
 *more_numbers - Outs 0-14 10 times
 *
 *Return: void
 */

void more_numbers(void)
{
int counter, numCur;
for (counter = 0; counter < 10; counter++)
{
for (numCur = 0; numCur < 15; numCur++)
{
_putchar(numCur);
}
_putchar('\n');
}
_putchar('\n');
}
