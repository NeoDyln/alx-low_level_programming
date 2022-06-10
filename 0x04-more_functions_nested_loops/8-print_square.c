#include "main.h"
/**
 * print_square - Outs a square
 *@size: side of square
 * Return: Always 0.
 */

void print_square(int size)
{
	int len;
	int wid;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (wid = 0; wid < size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
