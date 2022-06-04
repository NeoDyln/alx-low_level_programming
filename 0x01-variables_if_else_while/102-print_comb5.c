#include <stdio.h>
/**
 *main - Entry point 
 *
 *Description: A function to print all numbers between and including 0 to 99
 *Return: Always 0 (Success)
 */
int main(void)
{
int a[10] = {48,49,50,51,52,53,54,55,56,57};
int sizeA = sizeof (a) / sizeof (a[0]);
int c;
int d;
int e;
int f;
for (c = 0; c < sizeA; c++){
for (d = 0; d < sizeA; d++)
{
for (e = 0; e < sizeA; e++)
{
for (f = 0; f < sizeA; f++)
{
putchar(a[c]);
putchar(a[d]);
putchar(' ');
putchar(a[e]);
putchar(a[f]);
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
