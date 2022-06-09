#include <stdio.h>
/**
 * main -  Shows first 50 Fibonacci numbers start 1 end 5oth
 * @void: no argument
 * Return: 0
 */
int main(void)
{
long num1 = 1;
long num2 = 2;
long sumFib;
printf("%d, %d", num1, num2);
while (sumFib < 20365011073)
{
sumFib = num1 + num2;
printf(", %lu", sumFib);
num1 = num2;
num2 = sumFib;
}
printf("\n");
return (0);
}
