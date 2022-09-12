#include "lists.h"
/**
 * add_dnodeint - add new node at beginning of a dlistint_t list
 * @head: pointer to start of a list
 * @n: value of new node
 * Return: pointer to address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}