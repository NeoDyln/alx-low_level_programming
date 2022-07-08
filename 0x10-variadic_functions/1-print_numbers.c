#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers passed in
 * @separator: value added between nums
 * @n: number of values to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numPrint;
	unsigned int count = 0;

	va_start(numPrint, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(numPrint, int));

		if (count < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(numPrint);
	printf("\n");
}
