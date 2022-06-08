#include "main.h"
/**
 *times_table - Entry point
 * @void: void
 *
 * Return: void
 */
void times_table(void)
{
int num1, num2 = 0;
while (num1 < 10)
{
while (num2 < 10)
{
int prod = num1 * num2;
if (num1 == 0)
{
_putchar(prod + '0');
}
else if (prod >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
}
else if (prod <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
num2++;
}
num1++;
_putchar('\n');
}
}
