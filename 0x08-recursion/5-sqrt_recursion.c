#include "main.h"
/**
 * _evaluator - evaluate function sqrt
 * @i: interger
 * @n: interger
 * Return: evaluate sqrt
 */

int _evaluator(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluator(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);
}

/**
 *_sqrt_recursion - evaluate sqrt
 *@n: interger
 *Return: Sgrt_recursion
*/

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
	{
		return (_evaluator(i, n));
	}

}
