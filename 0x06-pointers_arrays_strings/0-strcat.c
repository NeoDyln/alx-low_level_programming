#include "main.h"

/**
 *_strcat - Concantenates two strings
 *@dest: End string to append
 *@src: String to append
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
/* This counts the number of chars in dest array  */
int destC = strlen(dest);
/* This counts the number of chars in src array  */
int srcC = strlen(src);
/* This acts as a loop count for the addition of chars to dest from src until before the \0  */
int srcU = 0;
/**
 * Now we loop through the values of the src array adding each character to the dest array  
 * We'll also initialize a new variable to help track the count
 */

for (;srcU < srcC && src[srcU] != '\0'; srcU++)
{
dest[destC + srcU] = src[srcU];
}
dest[destC + srcU] = '\0';
return src;
}
