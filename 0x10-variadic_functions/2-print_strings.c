#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed
 * @separator: Value printed between strings
 * @n: number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strList;
	unsigned int count = 0;
	char *ranStr;
	
	va_start(strList, n);
	for (count = 0; count < n; count++)
	{
		ranStr = va_arg(strList, char *);
		if (ranStr == NULL)
			printf("(nil)");
		else
			printf("%s", ranStr);

		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}

	va_end(strList);
	printf("\n");
}
