#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry Point
 * 
 * Return: Always 0 (Success)
 **/
int main()
{
char st[9] = "_putchar";
for (int indexCounter = 0; indexCounter < 8; indexCounter++)
{
_putchar(st[indexCounter]);
}
_putchar('\n');
return (0);
}
