#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: index_int returns first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) == 1)
			return (k);
	}
	return (-1);
}
