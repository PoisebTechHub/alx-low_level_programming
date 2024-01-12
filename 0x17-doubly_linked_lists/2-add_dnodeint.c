#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *  add_dnodeint - function that adds a new node
 *  at the beginning of a doubly linked list
 *  @head: pointer to the first node in the list
 *  @n: represents data to be inserted in the new node
 *  Return: The pointer to new node, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
