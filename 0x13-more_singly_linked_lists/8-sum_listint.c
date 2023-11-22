#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data
 * in a listint_t list
 * @head: first node
 * Return: resulting sum, else 0 is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *teen = head;

	while (teen)
{
	sum += teen->n;
	teen = teen->next;
}

	return (sum);
}

