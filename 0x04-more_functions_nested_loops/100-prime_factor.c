#include "main.h"

/**
 *main - Entry point
 *
 *Return: 0
 */

int main(void)
{
long int numCheck, curPrime, primeL;
numCheck = 61285475143;
curPrime = numCheck;
primeL = 2;
for (; primeL != curPrime; primeL++)
{
if (curPrime % primeL == 0)
{
curPrime = curPrime / primeL;
}
}
printf("%li\n", curPrime);
return (0);
}
