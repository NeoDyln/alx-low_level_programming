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
int lenSR = 0;
for (lenSR = 0; lenSR <= lenS; lenSR++)
{
sR[lenSR] = s[lenS];
}
int finLoop = 0;
for (finLoop = 0; finLoop < lenS; finLoop++)
{
s[finLoop] = sR[lenS - 1 - finLoop];
}
}
