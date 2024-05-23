#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - function that locates a singly linked list
 *
 * @list: Pointer to the freed linked list
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
