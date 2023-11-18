#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to addd
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *net;
	unsigned int length = 0;

	while (str[length])
		length++;

	net = malloc(sizeof(list_t));
	if (!net)
		return (NULL);

	net->str = strdup(str);
	net->len = length;
	net->next = (*head);
	(*head) = net;

	return (*head);
}
