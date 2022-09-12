#include "lists.h"
/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: pointer to start of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
