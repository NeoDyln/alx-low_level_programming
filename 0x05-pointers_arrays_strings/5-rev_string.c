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
char sR[lenS];
char *psR = &sR;
int lenSR = 0;
for (lenSR = 0; lenSR < lenS; lenSR++)
{
sR[lenSR] = s[lenS - 1 - lenSR];
}
*s = *psR;
}
