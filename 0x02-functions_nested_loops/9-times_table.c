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
putchar(prod + '0');
}
else if (num2 >= 10)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(prod / 10 + '0');
putchar(prod % 10 + '0');
putchar('\n');
}
else if (num2 <= 10)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(prod + '0');
}
num2++;
}
num1++;
putchar('\n');
}
return (0);
}
