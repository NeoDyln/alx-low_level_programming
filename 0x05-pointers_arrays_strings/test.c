#include <stdio.h>

/**
* main - run the code test
*
* Return: 0
*/

int main(void)
{
	int siz;
	int *p;
	char c[6] = "Hello";

	printf("Address of p : %p", &p);
	siz = (int) sizeof(c)/sizeof(char);
	printf("Size is: %d", siz);

	return (0);
}
