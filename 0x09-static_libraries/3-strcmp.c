#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String A
 * @s2: String B
 *
 * Description: Checks length of each string and gets the
 * difference in the order s1[n] - s2[n], if matching all
 * through, returns 0
 * Return: -ve for s1 smaller, 0 for match sl and s2, +ve otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int lenS1 = strlen(s1);
	int lenS2 = strlen(s2);

	int counter, diff;

	for (counter = 0; ; counter++)
	{
		if (counter > lenS1)
			s1[counter] = '\0';

		if (counter > lenS2)
			s2[counter] = '\0';

		if (s1[counter] < s2[counter] || s1[counter] > s2[counter])
		{
			diff = (s1[counter] - s2[counter]);
			break;
		}

		else if (s1[counter] == s2[counter] && counter < lenS1)
			continue;

		else if (s1[counter] == s2[counter] && counter > lenS1)
		{
			diff = (s1[counter] - s2[counter]);
			break;
																							}

		else
		{
			diff = 0;
			break;
		}
	}

	return (diff);
}
