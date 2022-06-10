#include <stdio.h>
/**
 * main - entry point
 * Description: multiples of 3, print fizz, of 5, buzz, of both FizzBuzz
 * Return: void
 */

int main(void)
{

int count = 100;
int i;

i = 1;
while (i <= count)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}

else if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
}

else if (i % 5 == 0 && i % 3 != 0)
{
if (i < count)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%i ", i);
}

i++;


}
printf("\n");
return (0);
}
