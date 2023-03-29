#include "main.h"

/**
 *_strlen - Returns length of char array passed
 *@s: Passed in char pointer to char array
 *
 *Return: length of char
 */

int _strlen(char *s)
{
	int sizeStr;

	sizeStr = (sizeof(*s) * sizeof(s)) / sizeof(char);
	return (sizeStr);
}
