#include "main.h"

/**
 *print_numbers - Prints numbers from 0 -9
 *
 *Return: void
 */

void print_numbers(void)
{
int curNum;
for (curNum = 48; curNum < 58; curNum++)
{
_putchar(curNum);
}
_putchar('\n');
}
