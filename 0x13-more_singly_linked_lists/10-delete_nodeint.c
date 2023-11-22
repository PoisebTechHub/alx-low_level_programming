#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in a linked list.
 * @head: pointer to the first element
 * @index: index of the node to be deleted
 * Return: 1 if Successful, or -1 if Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *teen = *head;
	listint_t *now = NULL;
	unsigned int k = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
{
	*head = (*head)->next;
	free(teen);
	return (1);
}

	while (k < index - 1)
{
	if (!teen || !(teen->next))
	return (-1);
	teen = teen->next;
	k++;
}

	now = teen->next;
	teen->next = now->next;
	free(now);

	return (1);
}

