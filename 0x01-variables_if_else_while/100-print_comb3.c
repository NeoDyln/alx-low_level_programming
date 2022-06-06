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
int dig2res = 48;
int dig1 = 48;
int dig2;
while (dig1 < 58)
{
dig2 = dig2res;
while (dig2 < 58)
{
if (dig1 != dig2)
{
putchar(dig1);
putchar(dig2);
if (!(dig1 == 56 && dig2 == 57))
{
putchar(44);
putchar(32);
}
}
dig2 = dig2 + 1;
}
dig1 = dig1 + 1;
dig2res = dig2res + 1;
}
putchar('\n');
return (0);
}
