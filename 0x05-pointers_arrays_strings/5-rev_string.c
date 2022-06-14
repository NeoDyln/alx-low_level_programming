#include "main.h"

/**
 * rev_string - a function to reverse a string
 * @s: an input string
 * Return: Nothing
 */

void rev_string(char *s)
{
int lenS = 0;
while (s[lenS] != '\0')
{
lenS++
}
char tempC[lenS];
int lenR = 0;
for (lenR = 0; lenR < lenS; lenR++)
{
tempC[lenR] = s[lenS - (1 + lenR)]
}
int loopFin = 0;
while(loopFin < lenS)
{
s[loopFin] = tempC[loopFin];
loopFin++;
}
}
