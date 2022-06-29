#include "main.h"

/**
 * _strncat - Concantenates two strings
 * @dest: End string to append
 * @src: String to append
 * @n: Loop count
 * Description: A cocantenator
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/* This acts as a counter for the src appending  */
	int srcU = 0;
	/* This counts the number of chars in dest array  */
	int destC = strlen(dest);
	/* This counts the number of chars in src array  */
	int srcC = strlen(src);

	/* This acts as a loop count for the addition */
	/* of chars to dest from src until before the break */
	/* Now we loop through the values of the src */
	/* array adding each character to the dest array */
	/* We'll also initialize a new variable to help */
	/* track the count */
	while (srcU < n && src[srcU] != '\0')
	{
		dest[destC + srcU] = src[srcU];
		srcU++;
	}

	if (srcC < n)
		dest[destC + srcU] = '\0';

	return (dest);
}
