#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked list
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hello = head;
	listint_t *hi = head;

	if (!head)
	return (NULL);

	while (hello && hi && hi->next)
{
	hi = hi->next->next;
	hello = hello->next;
	if (hi == hello)
{
	hello = head;
	while (hello != hi)
{
	hello = hello->next;
	hi = hi->next;
}
	return (hi);
}
}

	return (NULL);
}
