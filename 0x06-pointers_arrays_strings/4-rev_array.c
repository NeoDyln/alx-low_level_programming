#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Pointer to array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, temp = 0;

	for (x = 0; x != ((n - 1) / 2); x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
}
