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
	int checkF, checkD, c = 0;
	char *str, dataT[5] = "cifs";
	va_start(allList, format);
	while (format[checkF])
	{
		switch (format[checkF])
		{
			case 'c':
				printf("%c", va_arg(allList, char));
				printf(", ");
				break;
			case 'i':
				printf("%d", va_arg(allList, int));
				printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(allList, double));
				printf(", ");
				break;
			case 's':
				str = va_arg(allList, char *);
				if (!str)
				{
					printf("(nil)");
					printf(", ");
					break;
				}
			printf("%s", str);
			printf(", ");
			break;
		}
		checkF++;
	}
	printf("\n");
}
