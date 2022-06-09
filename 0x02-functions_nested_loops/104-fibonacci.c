#include <stdio.h>
/**
 * main - Entry Point first 98 fibonacci nums
 *
 * Return: 0
 */
int main(void)
{
int fibCt = 2;
float num1 = 1;
float num2 = num1 + 1;
float num3 = num1 + num2;
printf("%.0f, ", num1);
printf("%.0f, ", num2);
while (fibCt < 98)
{
printf("%.0f", num3);
num1 = num2;
num2 = num3;
num3 = num1 + num2;
if (fibCt++ < 98)
{
printf(", ");
}
fibCt++;
}
printf("\n");
return (0);
}
