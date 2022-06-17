#include "main.h"

/**
 * *string_toupper - Converts all lowercase to uppercase
 * @c: Pointer to char string
 *
 * Description: I simply loop through each item in the array
 * and for each item, I do a second loop to check if its char
 * matches any lowercase ASCII value. if so, I add a number to
 * increment it to its uppercase ASCII form
 * Return: Pointer to new uppercase string
 */

char *string_toupper(char *c)
{
	int lenC = strlen(c);
	int count, check = 0;

	for (count = 0; count < lenC; count++)
	{
		for (check = 97; check < 123; check++)
		{
			if (c[count] == check)
				c[count] -= 32;
			else
				continue;
		}
	}
	return (c);
}
