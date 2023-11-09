#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substracts two integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result of division of two integers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of division of two integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}

