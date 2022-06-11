#include "main.h"

/**
 *print_number - Prints an integer
 *@n: number to be printed
 *Return: Void
 */

void print_number(int n)
{
unsigned int numCheck, d, count;
if (n < 0)
{
_putchar(45);
numCheck = n * -1;
}
else
{
numCheck = n;
}
d = numCheck;
count = 1;
while (d > 9)
{
d /= 10;
count *= 10;
}
for (; count >= 1; count /= 10)
{
_putchar(((numCheck / count) % 10) + 48);
}
}
