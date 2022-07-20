#include "lists.h"

/**
 * sum_listit - Gets sum of all int n items in the list
 * @head: Start node
 *
 * Return: Sum of all n values in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
