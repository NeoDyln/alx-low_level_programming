#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{printf("is zero"); }
if (n < 0)
{printf("is negative"); }
if (n > 0)
{printf("is positive"); }
return (0);
}