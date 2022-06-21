#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: Checked string
 * @accept: Counter check
 * Return: Pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int j, k = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (0);
}
