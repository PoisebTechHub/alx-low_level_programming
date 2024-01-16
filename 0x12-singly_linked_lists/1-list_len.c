#include "lists.h"
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the elements in linked list
 * @h: pointer to the list_t list
 * Return: number of elements in p
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}