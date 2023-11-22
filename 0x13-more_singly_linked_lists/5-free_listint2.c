#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *teen;

	if (head == NULL)
	return;

	while (*head)
{
	teen = (*head)->next;
	free(*head);
	*head = teen;
}

	*head = NULL;
}

