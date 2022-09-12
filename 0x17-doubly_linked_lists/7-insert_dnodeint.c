#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: pointer to beginning of list
 * @idx: index of the list
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;

	if (temp == NULL)
		return (NULL);
	for (; idx != 1; idx--)
	{
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
