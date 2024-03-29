#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/* Write a function that adds a new node at the beginning of list */

/**
 *  add_dnodeint - function that adds a new node to the list
 *  at the beginning of a doubly linked list
 *  @head: pointer to the first node in the list
 *  @n: represents data to be inserted in the new node
 *  Return: The pointer to new node, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_node->next = h;

	if (h != NULL)
		h->prev = new_node;

	*head = new_node;

	return (new_node);
}
