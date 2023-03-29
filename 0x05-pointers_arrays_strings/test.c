#include <stdio.h>

/**
* main - run the code test
*
* Return: 0
*/

int main(void)
{
	char c[6] = "Hello";
	char *p;

	p = &c[0];
	printf("Value of c: %s\n", c);
	printf("Address of c : %p\n", &c);
	printf("Size of c: %lu\n", sizeof(c)*sizeof(&c));


	printf("Value of p : %p\n", p);
	printf("Address of p : %p\n", &p);
	printf("Size of p: %lu\n", sizeof(p));
	return (0);
}
