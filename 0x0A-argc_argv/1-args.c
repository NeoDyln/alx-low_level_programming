#include "main.h"

/**
 * main - Receives args
 * @argc: Arguments count passed
 * @argv: pointer to array of pointers of passed args
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) *argv[argc];
	printf("%d\n", argc);
	return (0);
}
