#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - Entry point
 *Description: Prints all values between and including current number to 98
 *for both numbers below 98 and above. Just remember to add a check for 98 
 *@curNum: ENters current number provided to function
 *
 *Return: void
 */
void print_to_98(int curNum)
{
int startPoint = curNum;
if (startPoint == 98)
printf("%d", curNum);
if (curNum > 98)
{
for (startPoint = curNum; startPoint > 97; startPoint--)
{
if (startPoint != 98)
{
printf("%d", startPoint);
_putchar(',');
_putchar(' ');
}
}
}
else if (curNum < 98)
{
for (startPoint = curNum; startPoint < 99; startPoint++)
{
if (startPoint != 98)
{
printf("%d", startPoint);
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
