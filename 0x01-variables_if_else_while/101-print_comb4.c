#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 *main - Entrry point
 *
 *Return: Always 0
 */
int main(void)
{
int a = 48;
int b = 48;
int c = 48;
while (a < 58)
{
while (b < 58)
{
while (c < 58)
{
if (a != b && a != c && b < c && a < b)
{
putchar(a);
putchar(b);
putchar(c);
if (a == 7)
{
break;
}
if (!(a == 55 && b == 56 && c == 57))
{
putchar(44);
putchar(32);
}
}
c = c + 1;
}
b = b + 1;
}
a = a + 1;
}
putchar('\n');
return (0);
}
