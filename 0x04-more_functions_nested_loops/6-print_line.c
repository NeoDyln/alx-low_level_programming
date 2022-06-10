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
for (; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
