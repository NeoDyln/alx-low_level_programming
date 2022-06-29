#include <stdio.h>
/**
 *  * segf - Let's segfault \o/
 *   *
 *    * Return: nothing.
 *     */
void segf(void)
{
	    char *str;

	        str = "Holberton";
		printf(str[0]);
}

/**
 *  *  main - concept introduction
 *   *
 *    * Return: 0.
 *     */
int main(void)
{
	    segf();
	        return (0);
}
