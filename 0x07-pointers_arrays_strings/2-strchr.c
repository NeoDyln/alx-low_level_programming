#include "main.h"

/**
 * *_strchr - Locates a char in a string
 * @s: Pointer to string
 * @c: Character to locate
 *
 * Return: Pointer to char location else NULL
 */

char *_strchr(char *s, char c)
{
	int count = 0;
	int sizeS = sizeof(s);
	int elementsS = sizeS / sizeof(s[0]);
	char *p;

	for (count = 0; count <= elementsS; count++)
	{
		if (*(s + count) == c && count < elementsS)
		{
			p = &s[count];
			break;
		}
		if (*(s + count) != c && count == elementsS)
		{
			p = NULL;
			break;
		}
	}
	return (p);
}
