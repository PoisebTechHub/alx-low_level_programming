#include "lists.h"

/* Write a function that returns the nth node of a dlistint_t linked list */

/**
 * get_dnodeint_at_index - This returns node at a certain index
 * @head: The head node in a linked list
 * @index: The location of the node to return
 *  Return: If successful, return pointer to the node,
 * otherwise return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;
	dlistint_t *tempnode = head;

	while (tempnode && k < index)
	{
		tempnode = tempnode->next;
		k++;
	}
	return (tempnode ? tempnode : NULL);
}
