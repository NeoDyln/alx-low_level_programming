#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to linked list of type listint_t
 *
 * Description: This function counts all nodes present and
 * for each node counted, we print the value that the n
 * variable holds and we then assign the pointer h to point
 * to whatever the pointer next is pointing to
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/**
	 * A node in this case is every following struct
	 * Notice that in the struct listint_t, there's
	 * a pointer item of type struct listint_t which
	 * is essentially the following struct, hence
	 * it is the next node
	 *
	 * Since our function has a return type of size_t,
	 * our counter for the nodes will also be of type
	 * size_t
	 */

	size_t num = 0;

	/**
	 * For every instance where *next from the listint_t
	 * struct exists, we do the code inside the while loop.
	 * else we return the number of nodes counted
	 *
	 * For the first run, h points to the passed struct
	 */
	while (h)
	{
		/* Prints value of n at current struct  */
		printf("%d\n", h->n);
		/* Increments the counter */
		num++;
		/* Assign the pointer h to the next struct if any */
		h = h->next;
	}

	return (num);
}
