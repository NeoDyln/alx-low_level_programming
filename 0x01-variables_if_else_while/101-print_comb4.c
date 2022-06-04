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
for (a = 48; a < 58; a++)
{
for (b = 48; b < 58; b++)
{
for (c = 48; c < 58; c++)
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
}
}
}
putchar('\n');
return (0);
}
