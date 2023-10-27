#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: square root, if not -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (exact_sqrt_recursion(n, 0));
}

/**
 * exact_sqrt_recursion - find the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: square root, if not -1
 */
int exact_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (exact_sqrt_recursion(n, i + 1));
}
