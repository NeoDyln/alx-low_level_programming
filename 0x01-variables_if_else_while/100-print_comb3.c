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
int c;
while (b < 58)
{
c = a;
while (c < 58)
{
if (b != c)
{
putchar(b);
putchar(c);
if (!(b == 56 && c == 57))
{
putchar(44);
putchar(32);
}
}
c = c + 1;
}
b = b + 1;
a = a + 1;
}
putchar('\n');
return (0);
}
