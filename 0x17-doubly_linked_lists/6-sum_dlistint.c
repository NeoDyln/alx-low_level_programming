#include "lists.h"
/**
 * sum_dlistint - returns sum of n data of a linked list
 * @head: pointer to beginning of list
 * Return: sum of all data in a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
