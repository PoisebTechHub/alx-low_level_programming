#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates a function that returns a pointer to a newly
 * allocated space in memory, and contains a cop of string
 * @str - string input
 * Return: str if success, NULL if otherwise
 */
char *_strdup(char *str)
{
	char *strdup;
	int n, k = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	n = 0;
	while (str[n] != '\0')
		n++;
	strdup = malloc(sizeof(char) * (n + 1));
	if (strdup == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k]; k++)
		strdup[k] = str[k];
	{
	return (strdup);
	}
}
