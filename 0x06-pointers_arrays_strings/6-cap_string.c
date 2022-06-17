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
	char check[14] = {32,'\t','\n',44,59,46,33,63,34,40,41,123,125,'\0'};
	int lenC = strlen(c);

	int x,y,z = 0;

	for (x = 0; x < lenC; x++)
	{
		for (y =0; check[y] != '\0'; y++)
		{
			if (c[x] == check[y])
			{
				for (z = 0; check[z] != '\0'; z++)
				{
					if (c[x + 1] == check[z])
						c[x + 2] = c[x + 2] - 32;
					if (c[x + 1] != check[z] && c[x + 1] == '0')
						continue;
					if (c[x + 1] != check[z] && c[x + 1] != '0')
						c[x + 1] = c[x + 1] - 32;
				}
			}
			if (c[x] == '0')
				continue;
		}
	}
	return c;
}
