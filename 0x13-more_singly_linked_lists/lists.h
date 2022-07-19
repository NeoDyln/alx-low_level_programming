#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/* Default struct to be used across the tasks */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Mandatory prototypes  */
int _putchar(char c);

/* Task prototypes */
size_t print_listint(const listint_t *h);

#endif
