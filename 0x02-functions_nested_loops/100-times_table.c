#include <stdio.h>
#include "main.h"
/**
 *print_times_table - Given a num, it creates a multiplication table upto num
 *@n: multiplication level
 * 
 * Return: Void
 */
void print_times_table(int n)
{
int num1, num2 = 0;
for (num1 = 0; num1 < n+1; num1++)
{
for (num2 = 0; num2 < n+1; num2++)
{
int prod = num2 * num1;
if (num2 == 0)
{
printf("%d", prod);
} 
else if (prod < 10 && num2 != 0)
{
printf(",   ");
printf("%d", prod);
} 
else if (prod >= 10 && prod < 100)
{
printf(",  ");
printf("%d", prod / 10);
printf("%d", prod % 10);
} 
else if (prod >= 100)
{
printf(", ");
printf("%d", prod / 100);
printf("%d", prod / 10);
printf("%d", prod % 10);
}
}
printf("\n");
}
}
