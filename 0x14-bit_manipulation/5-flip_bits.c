#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, bit = 0;
	unsigned long int next;
	unsigned long int test = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		next = test >> k;
		if (next & 1)
			bit++;
	}

	return (bit);
}

