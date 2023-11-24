#include"main.h"

/**
 * get_bit - a function that retuurns the value of a bit
 * at a given index.
 * @n: number
 * @index: location to check bit
 * Return: value of the bit at index, or -1 if an error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int next, test;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	next = 1 << index;
	test = n & next;
	if (test == next)
		return (1);
	return (0);
}
