#include "main.h"

/**
 * *cap_string - Capitalizes every word
 * @c: string pointer
 *
 * Description: At every point where any of the 
 * below chars appears, we capitalize the next char after it
 *
 * Return: pointer to update
 */

char *cap_string(char *c)
{
	char check[14] = {44,59,46,33,63,34,40,41,123,125,'\0'};
	int lenC = strlen(c);

	int x,y = 0;

	for (x = 0; x < lenC; x++)
	{
		for (y =0; check[y] != '\0'; y++)
		{
			if (c[x] == check[y])
			{
				c[x + 1] -= 32; 
			}
			else
				continue;
		}
	}
	return c;
}
