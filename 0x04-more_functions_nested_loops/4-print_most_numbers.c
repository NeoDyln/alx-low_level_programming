#include "main.h"

/**
 *print_most_numbers - Prints numbers from 0 -9
 *
 *Return: void
 */

void print_most_numbers(void)
{
int curNum;
for (curNum = 48; curNum < 58; curNum++)
{
if (curNum == 50 || curNum == 52)
{
continue;
}
else
{
_putchar(curNum);
}
}
_putchar('\n');
}
