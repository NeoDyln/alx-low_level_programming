#include "main.h"
/**
 * _abs - Entry point and returns absolute values
 *@curVal: Contains currently submitted value
 * Return: curVal in absolute form
 */
int _abs(int curVal)
{
if (curVal < 0)
{
return (curVal * -1);
}
return (curVal);
}
