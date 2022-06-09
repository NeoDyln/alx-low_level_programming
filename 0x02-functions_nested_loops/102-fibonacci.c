#include <stdio.h>
/**
 * main - Entry point
 * Description: Outputs first 50 fibonacci numbers starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
int fibCt = 2;
long int num1 = 1;
long int num2 = 2;
long int numNxtTrack;
printf("%lu, ", num1);
while (fibCt <= 50)
{
if (fibCt == 50)
{
printf("%lu\n", num2);
}
else
{
printf("%lu, ", num2);
}
numNxtTrack = num2;
num2 += num1;
num1 = numNxtTrack;
numNxtTrack++;
}
return (0);
}
