#include "lists.h"
#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all elements in a linked list
 * @p: pointer to the list_t
 * Return: number of nodes printed
 */

size_t print_list(const list_t *p)
{
	size_t nodes = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		nodes++;
	}

	return (nodes);
}
