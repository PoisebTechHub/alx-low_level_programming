#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints integers.
 * @separator: The string between integers.
 * @n: The number of integers in the function..
 * @...: A variable number of integers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ints;
	unsigned int k;

	va_start(ints, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(ints, int));

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ints);
}
