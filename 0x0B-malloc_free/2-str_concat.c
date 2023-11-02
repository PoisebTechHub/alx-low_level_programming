#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - create a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL for failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, ab;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = ab = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[ab] != '\0')
	{
		ab++;
	}
	conct = malloc(sizeof(char) * (a + ab + 1));
	if (conct == NULL)
	{
		return (NULL);
	}

	a = ab = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[ab];
		a++;
	}

	while (s2[ab] != '\0')
	{
		conct[a] = s2[ab];
		a++, ab++;
	}

	conct[a] = '\0';
	{
	return (conct);
	}
}
