#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: converted number or 0, if there is one or more chars
 * in the string b that is not 0 or 1; b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int numb;

	numb = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		numb <<= 1;
		if (b[k] == '1')
			numb += 1;
	}
	return (numb);
}
