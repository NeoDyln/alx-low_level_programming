#include "main.h"
/**
 * _islower - returns 1 if lowercase alphabet and 0 otherwise
<<<<<<< HEAD
 *@curLetter: takes in currrent letter
=======
 * @curLetter: Contains the current letter 
>>>>>>> 6abff0824f2e3f2b73795513af958405201d8f34
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
