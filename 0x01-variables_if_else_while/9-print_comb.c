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
int i = 48;
while (i != 58)
{
putchar(i);
if (i < 57)
{
putchar(44);
putchar(32);
}
i = i + 1;
}
putchar('\n');
return (0);
}
