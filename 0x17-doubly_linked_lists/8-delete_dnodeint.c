#include "lists.h"
#include <stdlib.h>

/* Write a function that deletes node at index of list */

/**
 * delete_dnodeint_at_index - function deletes a node
 * @head: A pointer to the first element in list
 * @index: the locationx of the node to delete
 * Return: 1 for Success or -1 for fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int k;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	k = 0;

	while (head1 != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		k++;
	}

	return (-1);
}

