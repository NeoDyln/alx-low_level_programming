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
if (numCur > 9)
{
_putchar('1');
}
_putchar(curNum % 10);
}
_putchar('\n');
}
}
