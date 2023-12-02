#include "main.h"

/**
 * get_endianness - function that checks for endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int k;
	char *m;

	k = 1;
	m = (char *) &k;

	return ((int)*m);
}
