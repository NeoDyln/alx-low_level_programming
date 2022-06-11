#include "main.h"

/**
 *main - Entry point
 *
 *Return: Always 
 */

int main(void)
{
long int numCheck, curPrime, primeL;
numCheck = 61285475143;
curPrime = numCheck;
primeL = 2;
while (primeL != curPrime)
{
if (curPrime % primeL == 0)
{
curPrime = curPrime / primeL;
}
primeL++;
}
printf("%li\n", curPrime);
return (0);
}
