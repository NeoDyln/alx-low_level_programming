#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t linked list
 * @head: pointer to beginning of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
