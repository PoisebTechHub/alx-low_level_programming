#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint_end - Function that adds a node at the end of doubly linked list
 * @head: pointer to the first element in the list
 * @n: data to be inserted in the new node
 * Return: if successful, return pointer to the new node, otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = h;
	return (new_node);
}

