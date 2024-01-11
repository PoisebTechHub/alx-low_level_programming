#include "lists.h"
#include <stddef.h>

/**
 * print_dlistint - Function that prints all the elements
 * @h: One linked list of a type dlistint_t to print
 * Return: if successful, return number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
