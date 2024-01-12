#include "lists.h"
#include <stddef.h>

/* Write a function that returns the number of elements in a list */

/**
 *  dlistint_len -function that returns the number of elements
 *  in a doubly linked list
 *  @h: The head node
 *  Return: number of the nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
