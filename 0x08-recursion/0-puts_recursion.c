#include "main.h"
/**
 * _puts_recursion - function that puts a string and new line
 * @s: input
 * Return: is always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
			_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
