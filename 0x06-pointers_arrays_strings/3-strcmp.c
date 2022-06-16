#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String A
 * @s2: String B
 *
 * Description: Checks length of each string and gets the 
 * difference in the order s1 - s2
 * Return: Differece
 */

int _strcmp(char *s1, char *s2)
{
int lenS1 = strlen(s1);
int lenS2 = strlen(s2);
int diff = lenS1 - lenS2;

return (diff);
}
