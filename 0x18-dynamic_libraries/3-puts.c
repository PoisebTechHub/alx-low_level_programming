#include "main.h"

/**
 * _puts - prints a string, a new line is followed, to stdout
 * @str: print string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
