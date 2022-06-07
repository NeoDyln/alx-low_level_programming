#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 * 
 * Return: Always 0 (Success)
 **/
int main()
{
char st[9] = "_putchar";
for(int indexCounter = 0; indexCounter < 8; indexCounter++)
{
putchar(st[indexCounter]);
}
putchar('\n');
return (0);
}
