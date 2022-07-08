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
	char dataT[5] = "cifs";

	va_start(allList, format);

	while (format && format[checkF])
	{
		/* Above we checked if the data formats are passed. If so, check if checkF'th value exists */
		/* We'll increment the value at every stage in the loop */

		while (dataT && dataT[checkD])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			}
			checkD++;
		}

		/* Above we check if actual data formats exist. If so, check if checkD'th value exists */
		/* We'll increment the value at every stage in the loop */
		switch (format[checkF])
		{
			case 'c':
				printf("%c", va_arg(allList, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(allList, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(alList, double)), c = 1;
				break;
			case 's':
				str = va_arg(allList, char *), c = 1;

				if (!str)
				{
					printf("(nil)");
					break;
				}
			printf("%s", str);
			break;
		}


		checkF++;
	}
}
