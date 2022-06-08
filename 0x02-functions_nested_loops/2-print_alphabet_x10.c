#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int loopCounter;
char curLetter;
for (loopCounter = 0; loopCounter < 10; loopCounter++)
{
for (curLetter = 'a'; curLetter <= 'z'; curLetter++)
_putchar(curLetter);
_putchar('\n');
}
}
