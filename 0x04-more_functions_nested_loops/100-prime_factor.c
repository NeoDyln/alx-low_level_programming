#include "main.h"

/**
 *main - Entry point
 *
 *Return: Always 
 */

int main(void)
{
	long int prime = 612852475143;
	long int quotient = prime;
	long int divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient = quotient / divisor;
		}
		else
		{
			divisor++;
		}
	}

	printf("%li\n", quotient);

	return (0);
}
