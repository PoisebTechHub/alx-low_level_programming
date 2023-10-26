#include "main.h"
/**
 * factorial - function returns the factorial of a given number
 * @n: input integer number
 * Return: function of n
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
