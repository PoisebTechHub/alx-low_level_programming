#include "main.h"

/**
 * _power - a funcion that calculates
 * @binary: base of the exponent
 * @boss: power of the exponent
 *
 * Return: value of binary ^ boss
 */

unsigned long int _power(unsigned int binary, unsigned int boss)
{
	unsigned long int numb;
	unsigned int k;

	numb = 1;
	for (k = 1; k <= boss; k++)
		numb *= binary;
	return (numb);
}

/**
 * print_binary - prints binary representation of a number
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int next, test;
	char sane;

	sane = 0;
	next = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (next != 0)
	{
		test = n & next;
		if (test == next)
		{
			sane = 1;
			_putchar('1');
		}
		else if (sane == 1 || next == 1)
		{
			_putchar('0');
		}
		next >>= 1;
	}
}

