#include "lists.h"

/**
 * print_listint - function that prinnts all elements in a linked list.
 * @h: linked list to print.
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
