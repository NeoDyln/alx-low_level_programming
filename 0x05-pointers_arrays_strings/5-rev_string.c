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
lenS++;
}
char sR;
int lenSR = 0;
for (lenSR = 0; lenSR <= lenS; lenSR++)
{
sR = s[lenS - 1 - lenSR];
s [lenS - 1 - lenSR] = s[lenSR];
s[lenSR] = sR;
}
}
