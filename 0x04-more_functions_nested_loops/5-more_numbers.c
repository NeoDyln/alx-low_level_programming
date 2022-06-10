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
for (numCur = 48; numCur < 63; numCur++)
{
int numRes = numCur;
if (numCur > 9)
{
_putchar(49);
numRes = numRes - 10;
}
_putchar(numRes);
}
_putchar('\n');
}
}
