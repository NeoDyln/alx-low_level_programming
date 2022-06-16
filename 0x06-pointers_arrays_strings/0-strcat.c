#include "main.h"

/**
 *_strcat - Concantenates two strings
 *@dest: End string to append
 *@src: String to append
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int destC = 0;
while (dest[destC] != '\0')
{
destC++;
}
int srcC = 0;
while (src[srcC] != '\0')
{
srcC++;
}
dest[destC] = '0';
int destL = destC;
int destU = destC + srcC;
for (; destC < destU; destC++)
{
if (destC == destL)
{

}
}
}
