#include "main.h"

/**
 * print_number - Prints a number
 * @n: Number passed for printing
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int nMain = n;
	if (nMain > 0)
	{
		if (nMain / 10 > 0)
		{
			print_number(nMain / 10);
		}
		_putchar((nMain % 10) + '0');
	}
	else if (nMain < 0)
	{
		_putchar(45);
		nMain = nMain / -1;
		print_number(nMain);
	}
	else if (nMain == 0)
	{
		_putchar('0');
	}
}
