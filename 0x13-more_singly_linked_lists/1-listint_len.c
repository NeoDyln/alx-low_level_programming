#include "lists.h"

/**
 * listint_len - Counts all the elements of a linked list
 * @h: pointer to linked list of type listint_t
 *
 * Description: This function counts all nodes present and
 * for each node counted, we then assign the pointer h to point
 * to whatever the pointer next is pointing to
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	/* Node counter */
	size_t num = 0;

	/**
	 * Checker for whether the next struct exists
	 */

	while (h)
	{
		/* Increment the counter */
		num++;
		/* Assign the pointer h to the next struct if any */
		h = h->next;
	}

	return (num);
}
