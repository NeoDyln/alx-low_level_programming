#include "main.h"

/**
 * _isupper- Checks if letter is upper
 * @c: Char submitted
 * Return: 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
	int checker = 0;
	int indexCur = 48;
	for (indexCur = 65; indexCur < 91; indexCur++)
	{
		if (c == indexCur)
		{
			checker = 1;
			break;
		}
	}
	return (checker);
}
