#include "variadic_functions.h"

/**
 * sum_them_all - SUmmation function
 * @n: Number of argumets being summed
 *
 * Return: 0 if n = 0, else sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count = 0;
	int sum = 0;
	va_list sumList;

	if (n == 0)
		return (0);

	va_start(sumList, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(sumList, int);
	}

	return (sum);
}
