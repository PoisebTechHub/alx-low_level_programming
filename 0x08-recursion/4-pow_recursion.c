#include "main.h"
/**
 * _pow_recursion - function the value of x
 * @x: interger to be returned
 * @y: the power of y
 * Return: function of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	else
	return (x * _pow_recursion(x, y - 1));
	return (0);
}
