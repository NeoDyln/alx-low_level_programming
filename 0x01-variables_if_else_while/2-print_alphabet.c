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
char *letters = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; i < strlen(letters); i++)
{
putchar("%c", letters[i]);
}
putchar("\n");
return (0);
}
