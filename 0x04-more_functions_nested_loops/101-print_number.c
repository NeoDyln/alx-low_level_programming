#include "main.h"

/**
 *print_number - Prints an integer
 *@n: number to be printed
 *Return: Void
 */

void print_number(int n)
{
int dig1, dig2, dig3;
if (n < 0)
{
n *= -1;
_putchar(45);
}
if (n / 1000 > 0)
{
dig1 = n / 1000;
_putchar(dig1 + '0');
}
if (n / 100 > 0)
{
dig2 = n / 100;
_putchar(dig2 + '0');
}
if (n / 10 > 0)
{
dig3 = n / 10;
_putchar(dig3 + '0');
}
_putchar(n % 10 + '0');
_putchar('\n');
}
