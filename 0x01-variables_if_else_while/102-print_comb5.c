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
int b[10] = {48,49,50,51,52,53,54,55,56,57};
int sizeA = sizeof (a) / sizeof (a[0]);
int sizeB = sizeof (b) / sizeof (b[0]);
int c;
int d;
for (c = 0; c < sizeA; c++)
{
for (d = 0; d < sizeB; d++)
{
putchar(a[c]);
putchar(a[c]);
putchar(' ');
putchar(a[c]);
putchar(b[d]);
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
