#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the first node
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *new = NULL;

	while (*head)
{
	new = (*head)->next;
	(*head)->next = before;
	before = *head;
	*head = new;
}

	*head = before;

	return (*head);
}

