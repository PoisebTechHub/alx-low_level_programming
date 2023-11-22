#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at a certain index
 * in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node, or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *teen = head;

	while (teen && k < index)
{
	teen = teen->next;
	k++;
}

	return (teen ? teen : NULL);
}

