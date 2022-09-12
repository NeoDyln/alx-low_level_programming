#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to beginning of list
 * @index: index of the node
 * Return: nth node of linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	for (; index != 0; index--)
	{
		head = head->next;
	}
	return (head);
}
