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
int startPoint = curNum;
if (curNum > 98)
{
for (startPoint = curNum; startPoint > 97; startPoint--)
{
if (startPoint > 9)
{
_putchar(startPoint / 10 + '0');
_putchar(startPoit % 10 + '0');
}
else
_putchar(startPoint + '0');
if (startPoint != 98)
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
if (startPoint > 9)
{
_putchar(startPoint / 10 + '0');
_putchar(startPoint % 10 + '0');
}
else
_putchar(startPoint + '0');
if (startPoint != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
}
