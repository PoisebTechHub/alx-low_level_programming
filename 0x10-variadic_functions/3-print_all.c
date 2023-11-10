
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments in the function.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *strp = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", strp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", strp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", strp, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", strp, str);
					break;
				default:
					i++;
					continue;
			}
			strp = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
