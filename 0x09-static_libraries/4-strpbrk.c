#include "main.h"
/**
 * _strpbrk - function that locates the first occeuurence in a string
 * @s: string to be searched
 * @accept: input
 * Return: is always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
