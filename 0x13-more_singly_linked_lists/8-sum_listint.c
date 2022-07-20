#include "lists.h"

/**
 * sum_listit - Gets sum of all int n items in the list
 * @head: Start node
 *
 * Return: Sum of all n values in the list
 */

int sum_listint(listint_t *head)
{
	int summ = 0;
	listint_t *temp;

	if (head != NULL)
	{

		while(head->next != NULL)
		{
			temp = head->next;
			summ += head->n;
			head = temp;
		}
		
		return (summ);
	}

	return (summ);

}
