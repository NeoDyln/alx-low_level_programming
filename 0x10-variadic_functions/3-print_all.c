#include "variadic_functions.h"

/**
 * print_all - Prints any data types of all passed in args
 * @format: Data types allowed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list allList;
	int checkF, checkD = 0;
	char *str, dataT[5] = "cifs";
	va_start(allList, format);
	while (format[checkF] != '\0')
	{
		switch (format[checkF])
		{
			case 'c':
				printf("%c", va_arg(allList, int));
				break;
			case 'i':
				printf("%d", va_arg(allList, int));
				break;
			case 'f':
				printf("%f", va_arg(allList, double));
				break;
			case 's':
				str = va_arg(allList, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		while (dataT[checkD] == format[checkF])
		{
			printf(", "); checkD++;
		}
		checkF++;
	}
	printf("\n");
}
