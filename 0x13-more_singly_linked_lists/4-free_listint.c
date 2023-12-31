#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: listint_t list to be set free
 */

void free_listint(listint_t *head)
{
	listint_t *net;

	while (head)
{
	net = head->next;
	free(head);
	head = net;
}
}

