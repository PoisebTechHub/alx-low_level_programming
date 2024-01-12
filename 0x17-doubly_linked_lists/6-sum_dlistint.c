#include "lists.h"

/* Write a function that returns the sum of all the data (n) of a list */

/**
 * sum_dlistint - this calculates the sum of data in list
 * @head: the head node in linked list
 * Return: the resulting sum, if otherwise return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;
	dlistint_t *tempnode = head;

	while (tempnode)
	{
		sum_data += tempnode->n;
		tempnode = tempnode->next;
	}
	return (sum_data);
}
