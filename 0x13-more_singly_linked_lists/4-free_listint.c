#include "lists.h"

/**
 * free_listint - frees a linked list...literally
 * @head: listint_t list to be freed
 *
 * Description: This code simply checks whether a current node exists
 * ad for each true check, it takes the position of the next node and
 * stores it in a variable, clears/ deletes the current node and sets
 * the pointer to the current node to read the next node...and the
 * process repeats until the next node is one that does not exist
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
