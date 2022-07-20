#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Description: We first create the end node and since it
 * will be the last node, the pointer to the next struct in it
 * will be set to null.
 * We then check whether the first node exists as it could be
 * a empty linked list. If it's empty, we simply set the first
 * node to be the last node. If not empty, we continuously check
 * whether the next node exists
 * When we get to a node where the next node does not exist, we set
 * that node's next node to the end_node we have defined as new
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
