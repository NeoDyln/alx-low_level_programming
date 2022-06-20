#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Pointer to array
 * @n: number of elements of array
 *
 * Return: void type
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
