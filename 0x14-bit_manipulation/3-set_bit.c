#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * at a given index.
 * @n: number
 * @index: location to set bit
 * Return: 1 if success, or -1 if an error occur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
