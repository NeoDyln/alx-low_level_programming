#include "main.h"

/**
 * rot13 - Substitution Cipher
 * @c: Pointer to string
 *
 * Description: This function takes a letter and returns
 * its corresponding letter 13 characters later. If it gets
 * to z, it starts back at a
 *
 * Return: Encrypted string
 */

char *rot13(char *c)
{
	int x,y = 0;
	char letts[] = "abcdefghigklmnopqrstuvwxyzABCDEFGHIJKLMNORSTUVWXYZ";
	char lettsS[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	
	int lenC = strlen(c);
	for (x = 0; x < lenC; x++)
	{
		for (y = 0; y < lenC; y++)
		{ 
			if (c[x] == letts[y])
			{
				c[x] = lettsS[y];
				break;
			}
		}
	}
	return (c);

}
