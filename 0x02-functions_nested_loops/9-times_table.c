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
else if (num2 >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
_putchar('\n');
}
else if (num2 <= 10)
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
return (0);
}
