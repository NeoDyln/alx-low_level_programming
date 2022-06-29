#include "main.h"

/**
 * _strchr - Locates a char in a string
 * @s: Pointer to string
 * @c: Character to locate
 *
 * Return: Pointer to char location else NULL (0)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}


	return (0);
}
