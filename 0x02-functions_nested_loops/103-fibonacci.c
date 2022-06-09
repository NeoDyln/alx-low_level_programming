#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
int num1 = 1;
int num2 = 2;
int sumNums = 0;
int numNxtTrack;
while (num2 < 4000000)
{
if (num2 % 2 == 0)
sumNums += num2;
numNxtTrack = num2;
num2 += num1;
num1 = numNxtTrack;
}
printf("%d\n", sumNums);
return (0);
}
