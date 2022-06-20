#include "main.h"

/**
 * *_memcpy - Copies bytes from address a to b
 * @dest: End location
 * @src: Origin
 * @n: No of bytes copied
 *
 * Return: pointer to char/ Address to end loc
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; count < n; count++)
	{
		*(dest + count) = *(src + count);
	}
	return (dest);
}
