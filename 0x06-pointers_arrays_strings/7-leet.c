#include "main.h"

/**
 * leet - Encodes a string
 * @c: Passed string
 *
 * Return: encoded string
 */

char *leet(char *c)
{
	char letsC[] = "AEOTL";
	char letsS[] = "aeotl";
	int lenC = strlen(c);
	int letL = strlen(letsC);
	char repL[] = "43071";
	int x, y = 0;

	for (x = 0; x < lenC; x++)
	{
		for (y = 0; y < letL; y++)
		{
			if (c[x] == letsC[y] || c[x] == letsS[y])
			{
				c[x] = repL[y];
			}
		}
	}
	return (c);
}
