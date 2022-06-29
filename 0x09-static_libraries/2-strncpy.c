#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: End copy
 * @src: String to be copied
 * @n: Char count copied
 *
 * Description: A cocantenator of two strings for n chars
 * Return: pointer to final concantenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* This acts as a counter for the src copy  */
	int srcU = 0;
	while (srcU < n && src[srcU] != '\0')
	{
		dest[srcU] = src[srcU];
		srcU++;
	}
	while (srcU < n)
	{
		dest[srcU] = '\0';
		srcU++;
	}
	return (dest);
}
