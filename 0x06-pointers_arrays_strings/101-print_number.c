#include "main.h"

/**
 * print_number - Prints a number
 * @n: Number passed for printing
 *
 * Return: void
 */

void print_number(int n)
{
	if (n > 0)
	{
		if (n / 10 > 0)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar(45);
		n = n / -1;
		print_number(n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
