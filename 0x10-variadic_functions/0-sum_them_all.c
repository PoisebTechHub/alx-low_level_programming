#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its paramters.
 * @n: The number of paramters in the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: Always 0, If n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pm;
	unsigned int i, sum = 0;

	va_start(pm, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(pm, int);
	}

	va_end(pm);

	return (sum);
}
