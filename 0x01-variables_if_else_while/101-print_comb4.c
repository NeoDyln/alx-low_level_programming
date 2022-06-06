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
int dig1 = 48;
int dig2 = 48;
int dig3 = 48;
for (dig1 = 48; dig1 < 58; dig1++)
{
for (dig2 = 48; dig2 < 58; dig2++)
{
for (dig3 = 48; dig3 < 58; dig3++)
{
if (dig1 != dig2 && dig1 != dig3 && dig2 < dig3 && dig1 < dig2)
{
putchar(dig1);
putchar(dig2);
putchar(dig3);
if (dig1 == 7)
{
break;
}
if (!(dig1 == 55 && dig2 == 56 && dig3 == 57))
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
}
}
putchar('\n');
return (0);
}
