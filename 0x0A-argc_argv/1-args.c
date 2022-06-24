#include "main.h"

/**
 * main - Receives args
 * @argc: Arguments count passed
 * @argv: pointer to array of pointers of passed args
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	return (0);
}
