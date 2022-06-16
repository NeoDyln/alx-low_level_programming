#include "main.h"

/**
 * *_strncpy - Copies a string 
 * @dest: End copy
 * @src: String to be copied
 * @n: Char count copied
 * Description: A cocantenator
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
/* This acts as a counter for the src copy  */
int srcU = 0;
/**
 * This acts as a loop count for the addition
 * of chars to dest from src until before the break
 *
 * Now we loop through the values of the src
 * array copying each character to the dest array
 * We'll also initialize a new variable to help
 * track the count
 */
while (srcU < n && src[srcU] != '\0')
{
dest[srcU] = src[srcU];
srcU++;
}
while (srcU < n)
{
dest[srcU] = '\0';
srcU++;
}
return (dest);
}
