#include "main.h"
/**
 * jack_bauer - Shows time from 00:00 to 23:59
 *
 * @void - no argument
 */
void jack_bauer(void)
{
int hourCt;
int minCt;
for (hourCt = 0; hourCt < 24; hourCt++)
{
for (minCt = 0; minCt < 60; minCt++)
{
_putchar(hourCt / 10 + '0');
_putchar(hourCt % 10 + '0');
_putchar(':');
_putchar(minCt / 10 + '0');
_putchar(minCt % 10 + '0');
_putchar('\n');
}
}
}
