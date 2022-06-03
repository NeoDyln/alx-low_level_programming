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
char letters[27] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < strlen(letters))
{
putchar("%c", letters[i]);
i = i + 1;
}
putchar("\n");
return (0);
}
