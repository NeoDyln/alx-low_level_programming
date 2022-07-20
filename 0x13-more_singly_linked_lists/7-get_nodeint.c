#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node on the linked list
 * @head: Start node
 * @index: Index of node we're trying to get
 *
 * Description: Here, we simply use a for loop to count up to the
 * (index)th node and once found, return that node
 * Return: (index)th node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode;
	unsigned int counter = 0;

	/* First we check if the start node exists */
	while (head)
	{
		/* We then check if the start node is the nthNode */
		if (counter == index)
		{
			nthNode = head;
			return (nthNode);
		}
		else
		{
			while (counter != index)
			{
				if (!(head))
					return (NULL);

				nthNode = (*head).next;
				head = nthNode;
				counter++;
			}
			return (nthNode);
		}
	}
	return (NULL);
}
