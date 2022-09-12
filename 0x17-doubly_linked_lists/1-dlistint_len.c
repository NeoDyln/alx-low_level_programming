#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer to beginning of list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
    
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}