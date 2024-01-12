#include "lists.h"
#include <stdlib.h>

/* Write a function that inserts a new node at a given position */

/**
 * insert_dnodeint_at_index - inserts a new node at a position
 * @h: a pointer to the head (first) node in the list
 * @idx: the index(location) where the new node is to be added
 * @n: a data to be inserted in the new node
 * Return: A pointer to the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int k;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		k = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (k == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			k++;
		}
	}

	return (new_node);
}
