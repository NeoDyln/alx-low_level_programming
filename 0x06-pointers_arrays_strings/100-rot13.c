#include "main.h"

/**
 * rot13 - Substitution Cipher
 * @s: Pointer to string
 *
 * Description: This function takes a letter and returns
 * its corresponding letter 13 characters later. If it gets
 * to z, it starts back at a
 *
 * Return: Encrypted string
 */

char *rot13(char *s)
{
int count = 0, i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + count) != '\0')
{

for (i = 0; i < 52; i++)
{
if (*(s + count) == alphabet[i])
{
*(s + count) = rot13[i];
break;
}
}
count++;
}

return (s);
}
