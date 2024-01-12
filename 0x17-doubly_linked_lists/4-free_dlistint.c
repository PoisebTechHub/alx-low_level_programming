#include "lists.h"
#include <stdlib.h>

/* Write a function that frees a dlistint_t list. */

/**
 * free_dlistint - function frees a linked list
 * @head: the listint_t list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempnode;

	while (head)
	{
		tempnode = head->next;
		free(head);
		head = tempnode;
	}
}
