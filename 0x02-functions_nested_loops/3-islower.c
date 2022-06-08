#include "main.h"
/**
 * _islower - returns 1 if lowercase alphabet and 0 otherwise
 * @curLetter: Contains the current letter 
 * Return: 0 for uppercase, 1 for lowercase
 */
int _islower(int curLetter)
{
if (curLetter >= 'a' && curLetter <= 'z')
{
return (1);
}
else
{
return (0);
}
}
