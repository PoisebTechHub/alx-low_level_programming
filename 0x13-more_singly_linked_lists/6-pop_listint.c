#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the first element
 * Return: data inside the elements that was deleted,
 * else 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *teen;
	int numb;

	if (!head || !*head)
	return (0);

	numb = (*head)->n;
	teen = (*head)->next;
	free(*head);
	*head = teen;

	return (numb);
}

