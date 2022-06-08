#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@curLet: Contains current letter
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */
int _isalpha(int curLet)
{
if ((curLet >= 'A' && curLet <= 'Z') || (curLet >= 'a' && curLet <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
