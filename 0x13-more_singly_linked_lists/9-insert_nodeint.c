#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list.
 * @head: pointer to the first node
 * @idx: index of new node
 * @n: data to insert in the new node
 * Return: the address of the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new_node;
	listint_t *teen = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

	for (k = 0; teen && k < idx; k++)
{
	if (k == idx - 1)
{
	new_node->next = teen->next;
	teen->next = new_node;
	return (new_node);
}
	else
	teen = teen->next;
}

	return (NULL);
}
