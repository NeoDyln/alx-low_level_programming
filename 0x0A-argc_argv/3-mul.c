#include "main.h"

/**
 * main - Prints products
 * @argc: Argument count
 * @argv: Array of pointers to args
 *
 * Return: 0 (Success) Else 1 (Fail)
 */

int main(int argc, char *argv[])
{
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int prod = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", prod);
		return (0);
	}
	return (1);
}
