#include "lists.h"
#include <stdlib.h>

/* Write a function that inserts a new node at a given position */

/**
 * insert_dnodeint_at_index - inserts a new node at a position
 * @head: a pointer to the head (first) node in the list
 * @idx: the index(location) where the new node is to be added
 * @n: a data to be inserted in the new node
 * Return: A pointer to the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	unsigned int k;
	dlistint_t *newnode;
	dlistint_t *tempnode = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode || !head)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (k = 0; tempnode && k < idx; k++)
	{
		if (k == idx - 1)
		{
			newnode->next = tempnode->next;
			tempnode->next = newnode;
			return (newnode);
		}
		else
		{
			tempnode = tempnode->next;
		}
	}
	return (NULL);
}
