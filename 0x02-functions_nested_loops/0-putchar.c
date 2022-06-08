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
int indexCounter = 0;
while (indexCounter < 8)
{
_putchar(st[indexCounter]);
indexCounter++;
}
_putchar('\n');
return (0);
}
