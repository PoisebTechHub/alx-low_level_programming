#include "main.h"
/**
 * _strstr - function that locates substring need in haystack
 * @haystack: string to be searched
 * @needle: search for needle
 * Return: is always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *n = needle;
	char *h = haystack;

	if (*n == 0)
		return (h);
	while (*h)
	{
		i = 0;
		if (h[i] == n[i])
			do {
				if (n[i + 1] == '\0')
					return (h);
				i++;
				h++;
			} while (h[i] == n[i]);
	}
	return ('\0');
}

