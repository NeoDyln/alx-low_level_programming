#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * main - Receives args
 * @argc: Arguments count passed
 * @argv: pointer to array of pointers of passed args
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int len = strlen(argv[argc - argc]);
	printf("%d", len);
	while (i != len)
	{
		printf("%c", *argv[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
