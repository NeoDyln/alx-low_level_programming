#include "main.h"
/**
 * print_last_digit - Entry point returns last digit in number
 *@curNum: Cotains current number
 * Return: Always last digit
 */
int print_last_digit(int curNum)
{
int lastDig = curNum % 10;
if (curNum < 0)
{
lastDig = lastDig * -1;
}
_putchar(lastDig + '0');
return (lastDig);
}
