#include "main.h"
/**
 *print_to_98 - Entry point
 *Description: Prints all values between and including current number to 98
 *for both numbers below 98 and above
 *@curNum: ENters current number provided to function
 *
 *Return: void
 */
void print_to_98(int curNum)
{
int startPoint;
if (curNum > 98)
{
for (startPoint = curNum; startPoint > 97; startPoint--)
{
_putchar(startPoint + '0');
while (startPoint != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else if (curNum < 98)
{
for (startPoint = curNum; startPoint < 99; startPoint++)
{
_putchar(startPoint + '0');
while (startPoint != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
}
