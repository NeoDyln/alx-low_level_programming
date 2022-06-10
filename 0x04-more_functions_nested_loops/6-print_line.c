#include "main.h"

/**
 * print_line - draws a straight line
 *@n: size of line
 * Return: Always 0.
 */

void print_line(int n)
{
int i = 0;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
if (n <= 0)
{
_putchar('\n');
}
}
