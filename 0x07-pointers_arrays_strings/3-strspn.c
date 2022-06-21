#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: String being checked
 * @accept: Counter checker characters
 *
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int spnlen = 0;
	int numS = countStr(s);
	int numAccept = countStr(accept);
	int loopS, loopA, check1, check2 = 0;

	for (loopS = 0; loopS < numS; loopS++)
	{
		if (check2 > 0)
			break;
		for (loopA = 0; loopA < numAccept; loopA++)
		{
			 if (s[loopS] == accept[loopA] && check1 == 0)
			 {
				check1++;
				spnlen++;
				break;
			 }
			 if (s[loopS] == accept[loopA] && check1 == 1)
			 {
				 spnlen++;
				 break;
			 }
			 if (s[loopS] != accept[loopA] && check1 == 1)
			 {
				 check2++;
				 break;
			 }
		}
	}
	return (spnlen);
}

int countStr(char *s)
{
	int counter = 0;
	for (counter = 0; s[counter] != '\0'; counter++)
	{
	}
	return (counter);
}
