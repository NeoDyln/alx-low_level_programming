#include "main.h"

/**
 * _memset - Adds a char in the first n bytes of th memory area s
 * @s: Location to add the bytes to
 * @b: Byte to add
 * @n: Number of times it is added
 * Return: Pointer to updated memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}
	return (s);
}
