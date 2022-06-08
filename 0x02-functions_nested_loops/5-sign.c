#include "main.h"
/**
 * print_sign - prints an operand sign
 *@curSign: Contains num representation of sign
 * Return: 1 if n is > zero, 0 if n is zero, -1 if n is < zero
 */
int print_sign(int curSign)
{
if (curSign > 0)
{
_putchar('+');
return (1);
}
else if (curSign == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
