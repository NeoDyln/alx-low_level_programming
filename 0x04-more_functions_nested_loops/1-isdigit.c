#include "main.h"

/**
 *_isdigit - Checks if parameter is numerical
 *@c: Parameter provided for comparison to ASCII numbers
 *Return: 1 if num, else 0
 */

int _isdigit(int c)
{
int checker = 0;
int indexCt = 0;
for (indexCt = 48; indexCt < 58; indexCt++)
{
if (c == indexCt)
{
checker = 1;
break;
}
}
}
