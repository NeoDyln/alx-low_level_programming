#include "main.h"

/**
 *_strcat - Concantenates two strings
 *@dest: End string to append
 *@src: String to append
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int destC, srcC, srcU = 0;
while (dest[destC] != '\0')
{
destC++;
}
/* Here we count the number of chars in src inclusive of the \0  */
while (src[srcC] != '\0')
{
srcC++;
}
/**
 * Now we loop through the values of the src array adding each character to the dest array  
 * We'll also initialize a new variable to help track the count
 */

while (srcU < srcC && src[srcU] != '\0')
{
dest[destC + srcU] = src[srcU];
}
destC = destC + srcU;
dest[destC] = '\0';
return dest;
}
