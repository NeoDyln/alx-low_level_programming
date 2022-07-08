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
		while (dataT[checkD] != '\0')
		{
			if (format[checkF] == dataT[checkD] && c == 1)
			{
				printf(", ");
				break;
			} checkD++;
		}
		switch (format[checkF])
		{
			case 'c':
				printf("%c", va_arg(allList, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(allList, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(allList, double)), c = 1;
				break;
			case 's':
				str = va_arg(allList, char *); c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
			printf("%s", str);
			break;
		} checkF++;
	}
	printf("\n");
}
