#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@curLetter: COntains current letter
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */
int _isalpha(int curLetter)
{
if ((curLetter >= 'A' && curLetter <= 'Z') || (curLetter >= 'a' && curLetter <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
